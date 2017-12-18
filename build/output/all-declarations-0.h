#pragma once

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               LEXIQUE plm_5F_lexique                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/C_Lexique.h"

//---------------------------------------------------------------------------------------------------------------------*
//                    E X T E R N    R O U T I N E S                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                    E X T E R N    F U N C T I O N S                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                       T O K E N    C L A S S                                                                        *
//---------------------------------------------------------------------------------------------------------------------*

class cTokenFor_plm_5F_lexique : public cToken {
  public : C_BigInt mLexicalAttribute_bigInteger ;
  public : C_String mLexicalAttribute_tokenString ;

  public : cTokenFor_plm_5F_lexique (void) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                     S C A N N E R    C L A S S                                                                      *
//---------------------------------------------------------------------------------------------------------------------*

class C_Lexique_plm_5F_lexique : public C_Lexique {
//--- Constructors
  public : C_Lexique_plm_5F_lexique (C_Compiler * inCallerCompiler,
                       const C_String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public : C_Lexique_plm_5F_lexique (C_Compiler * inCallerCompiler,
                       const C_String & inSourceString,
                       const C_String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public : static GALGAS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected : virtual ~ C_Lexique_plm_5F_lexique (void) {}
  #endif



//--- Terminal symbols enumeration
  public : enum {kToken_,
   kToken_identifier,
   kToken__40_attribute,
   kToken__24_type,
   kToken_integer,
   kToken__22_string_22_,
   kToken_comment,
   kToken__3F_selector_3A_,
   kToken__3F__21_selector_3A_,
   kToken__21_selector_3A_,
   kToken__21__3F_selector_3A_,
   kToken_addressof,
   kToken_and,
   kToken_assert,
   kToken_at,
   kToken_boot,
   kToken_case,
   kToken_check,
   kToken_convert,
   kToken_do,
   kToken_driver,
   kToken_else,
   kToken_entry,
   kToken_enum,
   kToken_exit,
   kToken_extend,
   kToken_extension,
   kToken_extern,
   kToken_for,
   kToken_func,
   kToken_guard,
   kToken_if,
   kToken_import,
   kToken_in,
   kToken_init,
   kToken_isr,
   kToken_let,
   kToken_loop,
   kToken_newtype,
   kToken_no,
   kToken_nop,
   kToken_not,
   kToken_on,
   kToken_or,
   kToken_panic,
   kToken_primitive,
   kToken_priority,
   kToken_public,
   kToken_register,
   kToken_required,
   kToken_safe,
   kToken_section,
   kToken_self,
   kToken_service,
   kToken_setup,
   kToken_sizeof,
   kToken_struct,
   kToken_stackSize,
   kToken_staticArray,
   kToken_switch,
   kToken_sync,
   kToken_system,
   kToken_target,
   kToken_task,
   kToken_truncate,
   kToken_var,
   kToken_user,
   kToken_when,
   kToken_while,
   kToken_xor,
   kToken_yes,
   kToken__3A_,
   kToken__2E_,
   kToken__2C_,
   kToken__3B_,
   kToken__7B_,
   kToken__7D_,
   kToken__3D_,
   kToken__28_,
   kToken__29_,
   kToken__5F_,
   kToken__3D__3D_,
   kToken__2260_,
   kToken__3C_,
   kToken__2264_,
   kToken__3E_,
   kToken__2265_,
   kToken__5B_,
   kToken__5D_,
   kToken__3C__3C_,
   kToken__3E__3E_,
   kToken__7E_,
   kToken__2D__3E_,
   kToken__2E__2E__3C_,
   kToken__7C_,
   kToken__7C__3D_,
   kToken__26_,
   kToken__26__3D_,
   kToken__5E_,
   kToken__5E__3D_,
   kToken__2B_,
   kToken__2B__25_,
   kToken__2B__3D_,
   kToken__2B__25__3D_,
   kToken__2D_,
   kToken__2D__25_,
   kToken__2D__3D_,
   kToken__2D__25__3D_,
   kToken__2A_,
   kToken__2A__25_,
   kToken__2A__3D_,
   kToken__2A__25__3D_,
   kToken__2F_,
   kToken__21__2F_,
   kToken__2F__3D_,
   kToken__21__2F__3D_,
   kToken__25_,
   kToken__21__25_,
   kToken__25__3D_,
   kToken__21__25__3D_,
   kToken__3C__3C__3D_,
   kToken__3E__3E__3D_} ;

//--- Key words table 'keyWordList'
  public : static int16_t search_into_keyWordList (const C_String & inSearchedString) ;

//--- Key words table 'delimitorsList'
  public : static int16_t search_into_delimitorsList (const C_String & inSearchedString) ;
  

//--- Assign from attribute
  public : GALGAS_lbigint synthetizedAttribute_bigInteger (void) const ;
  public : GALGAS_lstring synthetizedAttribute_tokenString (void) const ;


//--- Attribute access
  public : C_BigInt attributeValue_bigInteger (void) const ;
  public : C_String attributeValue_tokenString (void) const ;


//--- Indexing keys

//--- Unicode test functions

//--- Indexing directory
  protected : virtual C_String indexingDirectory (void) const ;

//--- Parse lexical token
  protected : virtual bool parseLexicalToken (void) ;

//--- Get terminal message
  protected : virtual C_String getMessageForTerminal (const int16_t inTerminalSymbol) const ;

//--- Get terminal count
  public : virtual int16_t terminalVocabularyCount (void) const { return 121 ; }

//--- Get Token String
  public : virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;

//--- Enter Token
  protected : void enterToken (cTokenFor_plm_5F_lexique & ioToken) ;

//--- Style name for Latex
  protected : virtual C_String styleNameForIndex (const uint32_t inStyleIndex) const ;
  protected : virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Parser class 'plm_syntax' declaration                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_plm_5F_syntax {
//--- Virtual destructor
  public : virtual ~ cParser_plm_5F_syntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_assignment_5F_operator_ (class GALGAS_infixOperator & outArgument0,
                                                       class GALGAS_location & outArgument1,
                                                       class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_assignment_5F_operator_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_declaration_ (class GALGAS_ast & ioArgument0,
                                            class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_declaration_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_boot_ (class GALGAS_ast & ioArgument0,
                                                    const class GALGAS_lstring constinArgument1,
                                                    const class GALGAS_lstringlist constinArgument2,
                                                    class GALGAS_bootAST & outArgument3,
                                                    class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_boot_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_init_ (class GALGAS_ast & ioArgument0,
                                                    const class GALGAS_lstring constinArgument1,
                                                    const class GALGAS_lstringlist constinArgument2,
                                                    class GALGAS_initAST & outArgument3,
                                                    class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_init_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_driver_5F_property_ (class GALGAS_ast & ioArgument0,
                                                   class GALGAS_driverPropertyListAST & ioArgument1,
                                                   class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_driver_5F_property_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_effective_5F_parameters_ (class GALGAS_ast & ioArgument0,
                                                        class GALGAS_effectiveArgumentListAST & outArgument1,
                                                        class GALGAS_location & outArgument2,
                                                        class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_effective_5F_parameters_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_ (class GALGAS_ast & ioArgument0,
                                           class GALGAS_expressionAST & outArgument1,
                                           class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F_access_5F_list_ (class GALGAS_ast & ioArgument0,
                                                             class GALGAS_primaryInExpressionAccessListAST & outArgument1,
                                                             class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F_access_5F_list_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F_addition_ (class GALGAS_ast & ioArgument0,
                                                       class GALGAS_expressionAST & outArgument1,
                                                       class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F_addition_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F_bitwise_5F_and_ (class GALGAS_ast & ioArgument0,
                                                             class GALGAS_expressionAST & outArgument1,
                                                             class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F_bitwise_5F_and_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F_bitwise_5F_or_ (class GALGAS_ast & ioArgument0,
                                                            class GALGAS_expressionAST & outArgument1,
                                                            class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F_bitwise_5F_or_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F_bitwise_5F_xor_ (class GALGAS_ast & ioArgument0,
                                                             class GALGAS_expressionAST & outArgument1,
                                                             class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F_bitwise_5F_xor_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F_comparison_ (class GALGAS_ast & ioArgument0,
                                                         class GALGAS_expressionAST & outArgument1,
                                                         class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F_comparison_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F_equality_ (class GALGAS_ast & ioArgument0,
                                                       class GALGAS_expressionAST & outArgument1,
                                                       class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F_equality_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F_if_ (class GALGAS_ast & ioArgument0,
                                                 class GALGAS_ifExpressionAST & outArgument1,
                                                 class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F_if_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F_logical_5F_and_ (class GALGAS_ast & ioArgument0,
                                                             class GALGAS_expressionAST & outArgument1,
                                                             class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F_logical_5F_and_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F_logical_5F_xor_ (class GALGAS_ast & ioArgument0,
                                                             class GALGAS_expressionAST & outArgument1,
                                                             class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F_logical_5F_xor_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F_product_ (class GALGAS_ast & ioArgument0,
                                                      class GALGAS_expressionAST & outArgument1,
                                                      class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F_product_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F_shift_ (class GALGAS_ast & ioArgument0,
                                                    class GALGAS_expressionAST & outArgument1,
                                                    class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F_shift_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_function_ (class GALGAS_ast & ioArgument0,
                                         class GALGAS_functionDeclarationListAST & ioArgument1,
                                         class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_function_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_function_5F_header_ (class GALGAS_ast & ioArgument0,
                                                   class GALGAS_mode & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   class GALGAS_lstringlist & outArgument3,
                                                   class GALGAS_routineFormalArgumentListAST & outArgument4,
                                                   class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_function_5F_header_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_guard_ (class GALGAS_ast & ioArgument0,
                                      class GALGAS_guardDeclarationListAST & ioArgument1,
                                      class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_guard_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_guarded_5F_command_ (class GALGAS_ast & ioArgument0,
                                                   class GALGAS_guardedCommandAST & outArgument1,
                                                   class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_guarded_5F_command_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_if_5F_instruction_ (class GALGAS_ast & ioArgument0,
                                                  class GALGAS_ifInstructionAST & outArgument1,
                                                  class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_if_5F_instruction_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_import_5F_file_ (class GALGAS_lstringlist & ioArgument0,
                                               class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_import_5F_file_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_instruction_ (class GALGAS_ast & ioArgument0,
                                            class GALGAS_instructionListAST & ioArgument1,
                                            class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_instruction_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_instructionList_ (class GALGAS_ast & ioArgument0,
                                                class GALGAS_instructionListAST & outArgument1,
                                                class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_instructionList_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_isr_ (class GALGAS_ast & ioArgument0,
                                    const class GALGAS_lstring constinArgument1,
                                    class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_isr_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_lvalue_ (class GALGAS_ast & ioArgument0,
                                       class GALGAS_LValueAST & outArgument1,
                                       class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_lvalue_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_mode_ (class GALGAS_mode & outArgument0,
                                     class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_mode_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_primary_ (class GALGAS_ast & ioArgument0,
                                        class GALGAS_expressionAST & outArgument1,
                                        class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_primary_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (class GALGAS_ast & ioArgument0,
                                                                                             class GALGAS_structurePropertyListAST & ioArgument1,
                                                                                             class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_private_5F_struct_5F_property_5F_declaration_ (class GALGAS_ast & ioArgument0,
                                                                             class GALGAS_structurePropertyListAST & ioArgument1,
                                                                             class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_private_5F_struct_5F_property_5F_declaration_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_procedure_5F_call_ (class GALGAS_ast & ioArgument0,
                                                  class GALGAS_callInstructionAST & outArgument1,
                                                  class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_procedure_5F_call_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_procedure_5F_formal_5F_arguments_ (class GALGAS_ast & ioArgument0,
                                                                 class GALGAS_routineFormalArgumentListAST & outArgument1,
                                                                 class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_procedure_5F_formal_5F_arguments_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_property_5F_in_5F_extension_ (class GALGAS_ast & ioArgument0,
                                                            class GALGAS_structurePropertyListAST & ioArgument1,
                                                            class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_property_5F_in_5F_extension_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_registerDeclaration_ (class GALGAS_ast & ioArgument0,
                                                    class GALGAS_controlRegisterNameListAST & ioArgument1,
                                                    class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_registerDeclaration_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_ (class GALGAS_ast & ioArgument0,
                                                class GALGAS_lstringlist & outArgument1,
                                                class GALGAS_location & outArgument2,
                                                class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_staticArrayProperty_ (class GALGAS_ast & ioArgument0,
                                                    class GALGAS_staticListPropertyListAST & ioArgument1,
                                                    class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_staticArrayProperty_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_staticArray_5F_exp_ (class GALGAS_ast & ioArgument0,
                                                   class GALGAS_extendStaticListElementListAST & ioArgument1,
                                                   class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_staticArray_5F_exp_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_struct_5F_property_5F_declaration_ (class GALGAS_ast & ioArgument0,
                                                                  const class GALGAS_bool constinArgument1,
                                                                  class GALGAS_structurePropertyListAST & ioArgument2,
                                                                  class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_struct_5F_property_5F_declaration_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_system_5F_routine_ (class GALGAS_ast & ioArgument0,
                                                  class GALGAS_systemRoutineDeclarationListAST & ioArgument1,
                                                  class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_system_5F_routine_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_task_5F_entry_5F_declaration_ (class GALGAS_ast & ioArgument0,
                                                             class GALGAS_taskEntryListAST & ioArgument1,
                                                             class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_task_5F_entry_5F_declaration_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_task_5F_guard_5F_declaration_ (class GALGAS_ast & ioArgument0,
                                                             class GALGAS_taskGuardListAST & ioArgument1,
                                                             class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_task_5F_guard_5F_declaration_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_type_5F_definition_ (class GALGAS_ast & ioArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_type_5F_definition_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_plm_5F_syntax_import_5F_file_i0_ (GALGAS_lstringlist & ioArgument0,
                                                          C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_import_5F_file_i0_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_start_5F_symbol_i1_ (GALGAS_ast & ioArgument0,
                                                           GALGAS_lstringlist & outArgument1,
                                                           GALGAS_location & outArgument2,
                                                           C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_start_5F_symbol_i1_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i2_ (GALGAS_ast & ioArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i2_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_type_5F_definition_i3_ (GALGAS_ast & ioArgument0,
                                                              GALGAS_lstring & outArgument1,
                                                              C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_type_5F_definition_i3_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_type_5F_definition_i4_ (GALGAS_ast & ioArgument0,
                                                              GALGAS_lstring & outArgument1,
                                                              C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_type_5F_definition_i4_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i5_ (GALGAS_ast & ioArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i5_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i6_ (GALGAS_ast & ioArgument0,
                                                                                                        GALGAS_structurePropertyListAST & ioArgument1,
                                                                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i6_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_private_5F_struct_5F_property_5F_declaration_i7_ (GALGAS_ast & ioArgument0,
                                                                                        GALGAS_structurePropertyListAST & ioArgument1,
                                                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_private_5F_struct_5F_property_5F_declaration_i7_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_struct_5F_property_5F_declaration_i8_ (GALGAS_ast & ioArgument0,
                                                                             const GALGAS_bool constinArgument1,
                                                                             GALGAS_structurePropertyListAST & ioArgument2,
                                                                             C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_struct_5F_property_5F_declaration_i8_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i9_ (GALGAS_ast & ioArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i9_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i10_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i10_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_property_5F_in_5F_extension_i11_ (GALGAS_ast & ioArgument0,
                                                                        GALGAS_structurePropertyListAST & ioArgument1,
                                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_property_5F_in_5F_extension_i11_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_type_5F_definition_i12_ (GALGAS_ast & ioArgument0,
                                                               GALGAS_lstring & outArgument1,
                                                               C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_type_5F_definition_i12_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i13_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i13_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_registerDeclaration_i14_ (GALGAS_ast & ioArgument0,
                                                                GALGAS_controlRegisterNameListAST & ioArgument1,
                                                                C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_registerDeclaration_i14_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i15_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i15_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_driver_5F_property_i16_ (GALGAS_ast & ioArgument0,
                                                               GALGAS_driverPropertyListAST & ioArgument1,
                                                               C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_driver_5F_property_i16_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i17_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i17_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i18_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i18_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i19_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i19_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_staticArrayProperty_i20_ (GALGAS_ast & ioArgument0,
                                                                GALGAS_staticListPropertyListAST & ioArgument1,
                                                                C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_staticArrayProperty_i20_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i21_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i21_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_staticArray_5F_exp_i22_ (GALGAS_ast & ioArgument0,
                                                               GALGAS_extendStaticListElementListAST & ioArgument1,
                                                               C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_staticArray_5F_exp_i22_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i23_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i23_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_task_5F_entry_5F_declaration_i24_ (GALGAS_ast & ioArgument0,
                                                                         GALGAS_taskEntryListAST & ioArgument1,
                                                                         C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_task_5F_entry_5F_declaration_i24_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_task_5F_guard_5F_declaration_i25_ (GALGAS_ast & ioArgument0,
                                                                         GALGAS_taskGuardListAST & ioArgument1,
                                                                         C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_task_5F_guard_5F_declaration_i25_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i26_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i26_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i27_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i27_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_system_5F_routine_i28_ (GALGAS_ast & ioArgument0,
                                                              GALGAS_systemRoutineDeclarationListAST & ioArgument1,
                                                              C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_system_5F_routine_i28_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_5F_boot_i29_ (GALGAS_ast & ioArgument0,
                                                                const GALGAS_lstring constinArgument1,
                                                                const GALGAS_lstringlist constinArgument2,
                                                                GALGAS_bootAST & outArgument3,
                                                                C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_5F_boot_i29_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_5F_init_i30_ (GALGAS_ast & ioArgument0,
                                                                const GALGAS_lstring constinArgument1,
                                                                const GALGAS_lstringlist constinArgument2,
                                                                GALGAS_initAST & outArgument3,
                                                                C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_5F_init_i30_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_function_i31_ (GALGAS_ast & ioArgument0,
                                                     GALGAS_functionDeclarationListAST & ioArgument1,
                                                     C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_function_i31_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_mode_i32_ (GALGAS_mode & outArgument0,
                                                 C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_mode_i32_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_function_5F_header_i33_ (GALGAS_ast & ioArgument0,
                                                               GALGAS_mode & outArgument1,
                                                               GALGAS_lstring & outArgument2,
                                                               GALGAS_lstringlist & outArgument3,
                                                               GALGAS_routineFormalArgumentListAST & outArgument4,
                                                               C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_function_5F_header_i33_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_procedure_5F_formal_5F_arguments_i34_ (GALGAS_ast & ioArgument0,
                                                                             GALGAS_routineFormalArgumentListAST & outArgument1,
                                                                             C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_procedure_5F_formal_5F_arguments_i34_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i35_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i35_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i36_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i36_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_isr_i37_ (GALGAS_ast & ioArgument0,
                                                const GALGAS_lstring constinArgument1,
                                                C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_isr_i37_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_guard_i38_ (GALGAS_ast & ioArgument0,
                                                  GALGAS_guardDeclarationListAST & ioArgument1,
                                                  C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_guard_i38_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_i39_ (GALGAS_ast & ioArgument0,
                                                       GALGAS_expressionAST & outArgument1,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_i39_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F_logical_5F_xor_i40_ (GALGAS_ast & ioArgument0,
                                                                         GALGAS_expressionAST & outArgument1,
                                                                         C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F_logical_5F_xor_i40_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F_logical_5F_and_i41_ (GALGAS_ast & ioArgument0,
                                                                         GALGAS_expressionAST & outArgument1,
                                                                         C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F_logical_5F_and_i41_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F_bitwise_5F_or_i42_ (GALGAS_ast & ioArgument0,
                                                                        GALGAS_expressionAST & outArgument1,
                                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F_bitwise_5F_or_i42_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F_bitwise_5F_xor_i43_ (GALGAS_ast & ioArgument0,
                                                                         GALGAS_expressionAST & outArgument1,
                                                                         C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F_bitwise_5F_xor_i43_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F_bitwise_5F_and_i44_ (GALGAS_ast & ioArgument0,
                                                                         GALGAS_expressionAST & outArgument1,
                                                                         C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F_bitwise_5F_and_i44_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F_equality_i45_ (GALGAS_ast & ioArgument0,
                                                                   GALGAS_expressionAST & outArgument1,
                                                                   C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F_equality_i45_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F_comparison_i46_ (GALGAS_ast & ioArgument0,
                                                                     GALGAS_expressionAST & outArgument1,
                                                                     C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F_comparison_i46_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F_shift_i47_ (GALGAS_ast & ioArgument0,
                                                                GALGAS_expressionAST & outArgument1,
                                                                C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F_shift_i47_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F_addition_i48_ (GALGAS_ast & ioArgument0,
                                                                   GALGAS_expressionAST & outArgument1,
                                                                   C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F_addition_i48_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F_product_i49_ (GALGAS_ast & ioArgument0,
                                                                  GALGAS_expressionAST & outArgument1,
                                                                  C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F_product_i49_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i50_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i50_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i51_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i51_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i52_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i52_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i53_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i53_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i54_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i54_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i55_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i55_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i56_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i56_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i57_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i57_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i58_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i58_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i59_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i59_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i60_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i60_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i61_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i61_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i62_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i62_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i63_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i63_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F_if_i64_ (GALGAS_ast & ioArgument0,
                                                             GALGAS_ifExpressionAST & outArgument1,
                                                             C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F_if_i64_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i65_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i65_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i66_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i66_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i67_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i67_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i68_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i68_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i69_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i69_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i70_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i70_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F_access_5F_list_i71_ (GALGAS_ast & ioArgument0,
                                                                         GALGAS_primaryInExpressionAccessListAST & outArgument1,
                                                                         C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F_access_5F_list_i71_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i72_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i72_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instructionList_i73_ (GALGAS_ast & ioArgument0,
                                                            GALGAS_instructionListAST & outArgument1,
                                                            C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instructionList_i73_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i74_ (GALGAS_ast & ioArgument0,
                                                        GALGAS_instructionListAST & ioArgument1,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i74_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i75_ (GALGAS_ast & ioArgument0,
                                                        GALGAS_instructionListAST & ioArgument1,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i75_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_assignment_5F_operator_i76_ (GALGAS_infixOperator & outArgument0,
                                                                   GALGAS_location & outArgument1,
                                                                   C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_assignment_5F_operator_i76_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i77_ (GALGAS_ast & ioArgument0,
                                                        GALGAS_instructionListAST & ioArgument1,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i77_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i78_ (GALGAS_ast & ioArgument0,
                                                        GALGAS_instructionListAST & ioArgument1,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i78_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i79_ (GALGAS_ast & ioArgument0,
                                                        GALGAS_instructionListAST & ioArgument1,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i79_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i80_ (GALGAS_ast & ioArgument0,
                                                        GALGAS_instructionListAST & ioArgument1,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i80_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i81_ (GALGAS_ast & ioArgument0,
                                                        GALGAS_instructionListAST & ioArgument1,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i81_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i82_ (GALGAS_ast & ioArgument0,
                                                        GALGAS_instructionListAST & ioArgument1,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i82_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i83_ (GALGAS_ast & ioArgument0,
                                                        GALGAS_instructionListAST & ioArgument1,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i83_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i84_ (GALGAS_ast & ioArgument0,
                                                        GALGAS_instructionListAST & ioArgument1,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i84_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_if_5F_instruction_i85_ (GALGAS_ast & ioArgument0,
                                                              GALGAS_ifInstructionAST & outArgument1,
                                                              C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_if_5F_instruction_i85_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_guarded_5F_command_i86_ (GALGAS_ast & ioArgument0,
                                                               GALGAS_guardedCommandAST & outArgument1,
                                                               C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_guarded_5F_command_i86_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_guarded_5F_command_i87_ (GALGAS_ast & ioArgument0,
                                                               GALGAS_guardedCommandAST & outArgument1,
                                                               C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_guarded_5F_command_i87_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i88_ (GALGAS_ast & ioArgument0,
                                                        GALGAS_instructionListAST & ioArgument1,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i88_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i89_ (GALGAS_ast & ioArgument0,
                                                        GALGAS_instructionListAST & ioArgument1,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i89_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i90_ (GALGAS_ast & ioArgument0,
                                                        GALGAS_instructionListAST & ioArgument1,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i90_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i91_ (GALGAS_ast & ioArgument0,
                                                        GALGAS_instructionListAST & ioArgument1,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i91_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i92_ (GALGAS_ast & ioArgument0,
                                                        GALGAS_instructionListAST & ioArgument1,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i92_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_procedure_5F_call_i93_ (GALGAS_ast & ioArgument0,
                                                              GALGAS_callInstructionAST & outArgument1,
                                                              C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_procedure_5F_call_i93_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i94_ (GALGAS_ast & ioArgument0,
                                                        GALGAS_instructionListAST & ioArgument1,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i94_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_lvalue_i95_ (GALGAS_ast & ioArgument0,
                                                   GALGAS_LValueAST & outArgument1,
                                                   C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_lvalue_i95_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_effective_5F_parameters_i96_ (GALGAS_ast & ioArgument0,
                                                                    GALGAS_effectiveArgumentListAST & outArgument1,
                                                                    GALGAS_location & outArgument2,
                                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_effective_5F_parameters_i96_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i97_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i97_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i98_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i98_parse (C_Lexique_plm_5F_lexique * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_plm_5F_syntax_0 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_1 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_2 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_3 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_4 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_5 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_6 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_7 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_8 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_9 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_10 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_11 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_12 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_13 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_14 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_15 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_16 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_17 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_18 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_19 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_20 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_21 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_22 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_23 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_24 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_25 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_26 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_27 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_28 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_29 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_30 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_31 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_32 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_33 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_34 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_35 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_36 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_37 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_38 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_39 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_40 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_41 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_42 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_43 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_44 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_45 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_46 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_47 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_48 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_49 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_50 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_51 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_52 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_53 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_54 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_55 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_56 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_57 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_58 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_59 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_60 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_61 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_62 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_63 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_64 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_65 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_66 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_67 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_68 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_69 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_70 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_71 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_72 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_73 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_74 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_75 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_76 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_77 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_78 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_79 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_80 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_81 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_82 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_83 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_84 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_85 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_86 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_87 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_88 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_89 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_90 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_91 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_92 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_93 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_94 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_95 (C_Lexique_plm_5F_lexique *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @expressionAST class                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_expressionAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_expressionAST (void) ;

//---
  public : inline const class cPtr_expressionAST * ptr (void) const { return (const cPtr_expressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_expressionAST (const cPtr_expressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_expressionAST extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_expressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Pointer class for @expressionAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_expressionAST : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_expressionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @addressofExpressionAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_addressofExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_addressofExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_addressofExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_addressofExpressionAST * ptr (void) const { return (const cPtr_addressofExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_addressofExpressionAST (const cPtr_addressofExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_addressofExpressionAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_addressofExpressionAST constructor_new (const class GALGAS_LValueAST & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_addressofExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_LValueAST getter_mLValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_addressofExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addressofExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @accessInAssignmentListAST list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_accessInAssignmentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_accessInAssignmentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_accessInAssignmentListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_accessInAssignmentAST & in_mAccess
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_accessInAssignmentListAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_accessInAssignmentListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_accessInAssignmentListAST constructor_listWithValue (const class GALGAS_accessInAssignmentAST & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_accessInAssignmentListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_accessInAssignmentAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_accessInAssignmentListAST add_operation (const GALGAS_accessInAssignmentListAST & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_accessInAssignmentAST constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_accessInAssignmentAST & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_accessInAssignmentAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_accessInAssignmentAST & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_accessInAssignmentAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_accessInAssignmentAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_accessInAssignmentAST getter_mAccessAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_accessInAssignmentListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_accessInAssignmentListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_accessInAssignmentListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_accessInAssignmentListAST ;
 
} ; // End of GALGAS_accessInAssignmentListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_accessInAssignmentListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_accessInAssignmentListAST (const GALGAS_accessInAssignmentListAST & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_accessInAssignmentAST current_mAccess (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_accessInAssignmentListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @LValueAST struct                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_LValueAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mIdentifier ;

  public : GALGAS_accessInAssignmentListAST mProperty_mAccessList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_LValueAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_LValueAST (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_LValueAST (void) ;

//--------------------------------- Native constructor
  public : GALGAS_LValueAST (const GALGAS_lstring & in_mIdentifier,
                             const GALGAS_accessInAssignmentListAST & in_mAccessList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_LValueAST extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_LValueAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                          const class GALGAS_accessInAssignmentListAST & inOperand1
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_LValueAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_accessInAssignmentListAST getter_mAccessList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIdentifier (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_LValueAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_LValueAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @addressofExpressionAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_addressofExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_LValueAST mProperty_mLValue ;

//--- Constructor
  public : cPtr_addressofExpressionAST (const GALGAS_LValueAST & in_mLValue
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_LValueAST getter_mLValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @instructionAST class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_instructionAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_instructionAST (void) ;

//---
  public : inline const class cPtr_instructionAST * ptr (void) const { return (const cPtr_instructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_instructionAST (const cPtr_instructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_instructionAST extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_instructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_instructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Pointer class for @instructionAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_instructionAST : public acPtr_class {
//--- Attributes
  public : GALGAS_location mProperty_mInstructionLocation ;

//--- Constructor
  public : cPtr_instructionAST (const GALGAS_location & in_mInstructionLocation
                                COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @assertInstructionAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_assertInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_assertInstructionAST (void) ;

//---
  public : inline const class cPtr_assertInstructionAST * ptr (void) const { return (const cPtr_assertInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_assertInstructionAST (const cPtr_assertInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_assertInstructionAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_assertInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_expressionAST & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_assertInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assertInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assertInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @assertInstructionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_assertInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_expressionAST mProperty_mExpression ;

//--- Constructor
  public : cPtr_assertInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                      const GALGAS_expressionAST & in_mExpression
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @assignmentInstructionAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_assignmentInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_assignmentInstructionAST (void) ;

//---
  public : inline const class cPtr_assignmentInstructionAST * ptr (void) const { return (const cPtr_assignmentInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_assignmentInstructionAST (const cPtr_assignmentInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_assignmentInstructionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_assignmentInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_LValueAST & inOperand1,
                                                                         const class GALGAS_expressionAST & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_assignmentInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mSourceExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_LValueAST getter_mTargetAST (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @assignmentInstructionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_assignmentInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_LValueAST mProperty_mTargetAST ;
  public : GALGAS_expressionAST mProperty_mSourceExpression ;

//--- Constructor
  public : cPtr_assignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                          const GALGAS_LValueAST & in_mTargetAST,
                                          const GALGAS_expressionAST & in_mSourceExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_LValueAST getter_mTargetAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mSourceExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @booleanShortCircuitAndOperatorExpressionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_booleanShortCircuitAndOperatorExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_booleanShortCircuitAndOperatorExpressionAST (void) ;

//---
  public : inline const class cPtr_booleanShortCircuitAndOperatorExpressionAST * ptr (void) const { return (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_booleanShortCircuitAndOperatorExpressionAST (const cPtr_booleanShortCircuitAndOperatorExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_booleanShortCircuitAndOperatorExpressionAST extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_booleanShortCircuitAndOperatorExpressionAST constructor_new (const class GALGAS_expressionAST & inOperand0,
                                                                                            const class GALGAS_location & inOperand1,
                                                                                            const class GALGAS_expressionAST & inOperand2
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_booleanShortCircuitAndOperatorExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_booleanShortCircuitAndOperatorExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Pointer class for @booleanShortCircuitAndOperatorExpressionAST class                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_booleanShortCircuitAndOperatorExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_expressionAST mProperty_mLeftExpression ;
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_expressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_booleanShortCircuitAndOperatorExpressionAST (const GALGAS_expressionAST & in_mLeftExpression,
                                                             const GALGAS_location & in_mOperatorLocation,
                                                             const GALGAS_expressionAST & in_mRightExpression
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @abstractDeclarationAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractDeclarationAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractDeclarationAST (void) ;

//---
  public : inline const class cPtr_abstractDeclarationAST * ptr (void) const { return (const cPtr_abstractDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractDeclarationAST (const cPtr_abstractDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractDeclarationAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @abstractDeclarationAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractDeclarationAST : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractDeclarationAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @bootAST class                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bootAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_bootAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_bootAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_bootAST * ptr (void) const { return (const cPtr_bootAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_bootAST (const cPtr_bootAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bootAST extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_bootAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                        const class GALGAS_lstringlist & inOperand1,
                                                        const class GALGAS_location & inOperand2,
                                                        const class GALGAS_instructionListAST & inOperand3,
                                                        const class GALGAS_location & inOperand4
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_bootAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mBootLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mDriverDependanceList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDriverName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfBootLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bootAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bootAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @instructionListAST list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_instructionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_instructionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_instructionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_instructionAST & in_mInstruction
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_instructionListAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_instructionListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_instructionListAST constructor_listWithValue (const class GALGAS_instructionAST & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_instructionListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_instructionAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListAST add_operation (const GALGAS_instructionListAST & inOperand,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_instructionAST constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_instructionAST & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_instructionAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_instructionAST & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_instructionAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_instructionAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionAST getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_instructionListAST ;
 
} ; // End of GALGAS_instructionListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_instructionListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_instructionListAST (const GALGAS_instructionListAST & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_instructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_instructionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Pointer class for @bootAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_bootAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mDriverName ;
  public : GALGAS_lstringlist mProperty_mDriverDependanceList ;
  public : GALGAS_location mProperty_mBootLocation ;
  public : GALGAS_instructionListAST mProperty_mInstructionList ;
  public : GALGAS_location mProperty_mEndOfBootLocation ;

//--- Constructor
  public : cPtr_bootAST (const GALGAS_lstring & in_mDriverName,
                         const GALGAS_lstringlist & in_mDriverDependanceList,
                         const GALGAS_location & in_mBootLocation,
                         const GALGAS_instructionListAST & in_mInstructionList,
                         const GALGAS_location & in_mEndOfBootLocation
                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mDriverName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mDriverDependanceList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mBootLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListAST getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfBootLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @callInstructionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_callInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_callInstructionAST (void) ;

//---
  public : inline const class cPtr_callInstructionAST * ptr (void) const { return (const cPtr_callInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_callInstructionAST (const cPtr_callInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_callInstructionAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_callInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_effectiveArgumentListAST getter_mArguments (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfArguments (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_callInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_callInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @effectiveArgumentListAST list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_effectiveArgumentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_effectiveArgumentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_effectiveArgumentListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                  const class GALGAS_lstring & in_mSelector
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_effectiveArgumentListAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_effectiveArgumentListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_effectiveArgumentListAST constructor_listWithValue (const class GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_effectiveArgumentListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_effectiveArgumentListAST add_operation (const GALGAS_effectiveArgumentListAST & inOperand,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_effectiveArgumentPassingModeAST constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_effectiveArgumentPassingModeAST & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_effectiveArgumentPassingModeAST & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_effectiveArgumentPassingModeAST & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_effectiveArgumentPassingModeAST & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_effectiveArgumentPassingModeAST & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_effectiveArgumentPassingModeAST getter_mEffectiveParameterKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_effectiveArgumentListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_effectiveArgumentListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_effectiveArgumentListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_effectiveArgumentListAST ;
 
} ; // End of GALGAS_effectiveArgumentListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_effectiveArgumentListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_effectiveArgumentListAST (const GALGAS_effectiveArgumentListAST & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_effectiveArgumentPassingModeAST current_mEffectiveParameterKind (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSelector (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_effectiveArgumentListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @callInstructionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_callInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_effectiveArgumentListAST mProperty_mArguments ;
  public : GALGAS_location mProperty_mEndOfArguments ;

//--- Constructor
  public : cPtr_callInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                    const GALGAS_effectiveArgumentListAST & in_mArguments,
                                    const GALGAS_location & in_mEndOfArguments
                                    COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_effectiveArgumentListAST getter_mArguments (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfArguments (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @checkInstructionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_checkInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_checkInstructionAST (void) ;

//---
  public : inline const class cPtr_checkInstructionAST * ptr (void) const { return (const cPtr_checkInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_checkInstructionAST (const cPtr_checkInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_checkInstructionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_checkInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_expressionAST & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_checkInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_checkInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @checkInstructionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_checkInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_expressionAST mProperty_mExpression ;

//--- Constructor
  public : cPtr_checkInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                     const GALGAS_expressionAST & in_mExpression
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @constructorCallAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_constructorCallAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_constructorCallAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_constructorCallAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_constructorCallAST * ptr (void) const { return (const cPtr_constructorCallAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_constructorCallAST (const cPtr_constructorCallAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constructorCallAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_constructorCallAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_functionCallEffectiveParameterListAST & inOperand1,
                                                                   const class GALGAS_location & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_constructorCallAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mErrorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionCallEffectiveParameterListAST getter_mParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constructorCallAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorCallAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @functionCallEffectiveParameterListAST list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionCallEffectiveParameterListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_functionCallEffectiveParameterListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_functionCallEffectiveParameterListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mSelector,
                                                  const class GALGAS_expressionAST & in_mExpression
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionCallEffectiveParameterListAST extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_functionCallEffectiveParameterListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_functionCallEffectiveParameterListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                                const class GALGAS_expressionAST & inOperand1
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_functionCallEffectiveParameterListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_expressionAST & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_functionCallEffectiveParameterListAST add_operation (const GALGAS_functionCallEffectiveParameterListAST & inOperand,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_expressionAST constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_expressionAST & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_expressionAST & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_expressionAST & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_expressionAST & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_expressionAST & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionCallEffectiveParameterListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionCallEffectiveParameterListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionCallEffectiveParameterListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_functionCallEffectiveParameterListAST ;
 
} ; // End of GALGAS_functionCallEffectiveParameterListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_functionCallEffectiveParameterListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_functionCallEffectiveParameterListAST (const GALGAS_functionCallEffectiveParameterListAST & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mSelector (LOCATION_ARGS) const ;
  public : class GALGAS_expressionAST current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_functionCallEffectiveParameterListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @constructorCallAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_constructorCallAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_functionCallEffectiveParameterListAST mProperty_mParameterList ;
  public : GALGAS_location mProperty_mErrorLocation ;

//--- Constructor
  public : cPtr_constructorCallAST (const GALGAS_lstring & in_mTypeName,
                                    const GALGAS_functionCallEffectiveParameterListAST & in_mParameterList,
                                    const GALGAS_location & in_mErrorLocation
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_functionCallEffectiveParameterListAST getter_mParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mErrorLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @controlRegisterGroupDeclarationAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_controlRegisterGroupDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_controlRegisterGroupDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_controlRegisterGroupDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_controlRegisterGroupDeclarationAST * ptr (void) const { return (const cPtr_controlRegisterGroupDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_controlRegisterGroupDeclarationAST (const cPtr_controlRegisterGroupDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controlRegisterGroupDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_controlRegisterGroupDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_controlRegisterDeclarationList & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_controlRegisterGroupDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRegisterGroupName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterDeclarationList getter_mRegisters (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controlRegisterGroupDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @controlRegisterDeclarationList list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_controlRegisterDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_controlRegisterDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_controlRegisterDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_controlRegisterNameListAST & in_mRegisterArrayList,
                                                  const class GALGAS_lstring & in_mRegisterTypeName,
                                                  const class GALGAS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                  const class GALGAS_location & in_mRegisterBitSliceListLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controlRegisterDeclarationList extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_controlRegisterDeclarationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_controlRegisterDeclarationList constructor_listWithValue (const class GALGAS_controlRegisterNameListAST & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1,
                                                                                         const class GALGAS_controlRegisterBitSliceList & inOperand2,
                                                                                         const class GALGAS_location & inOperand3
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_controlRegisterDeclarationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_controlRegisterNameListAST & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_controlRegisterBitSliceList & inOperand2,
                                                      const class GALGAS_location & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_controlRegisterDeclarationList add_operation (const GALGAS_controlRegisterDeclarationList & inOperand,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_controlRegisterNameListAST constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_controlRegisterBitSliceList constinArgument2,
                                                       class GALGAS_location constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_controlRegisterNameListAST & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_controlRegisterBitSliceList & outArgument2,
                                                  class GALGAS_location & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_controlRegisterNameListAST & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_controlRegisterBitSliceList & outArgument2,
                                                 class GALGAS_location & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_controlRegisterNameListAST & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_controlRegisterBitSliceList & outArgument2,
                                                       class GALGAS_location & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_controlRegisterNameListAST & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_controlRegisterBitSliceList & outArgument2,
                                               class GALGAS_location & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_controlRegisterNameListAST & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_controlRegisterBitSliceList & outArgument2,
                                              class GALGAS_location & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterNameListAST getter_mRegisterArrayListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterBitSliceList getter_mRegisterBitSliceListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mRegisterBitSliceListLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRegisterTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterDeclarationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterDeclarationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterDeclarationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_controlRegisterDeclarationList ;
 
} ; // End of GALGAS_controlRegisterDeclarationList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_controlRegisterDeclarationList : public cGenericAbstractEnumerator {
  public : cEnumerator_controlRegisterDeclarationList (const GALGAS_controlRegisterDeclarationList & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_controlRegisterNameListAST current_mRegisterArrayList (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mRegisterTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_controlRegisterBitSliceList current_mRegisterBitSliceList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mRegisterBitSliceListLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_controlRegisterDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterDeclarationList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @controlRegisterGroupDeclarationAST class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_controlRegisterGroupDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mRegisterGroupName ;
  public : GALGAS_controlRegisterDeclarationList mProperty_mRegisters ;

//--- Constructor
  public : cPtr_controlRegisterGroupDeclarationAST (const GALGAS_lstring & in_mRegisterGroupName,
                                                    const GALGAS_controlRegisterDeclarationList & in_mRegisters
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRegisterGroupName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_controlRegisterDeclarationList getter_mRegisters (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @convertExpressionAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_convertExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_convertExpressionAST (void) ;

//---
  public : inline const class cPtr_convertExpressionAST * ptr (void) const { return (const cPtr_convertExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_convertExpressionAST (const cPtr_convertExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_convertExpressionAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_convertExpressionAST constructor_new (const class GALGAS_expressionAST & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_location & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_convertExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_convertExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_convertExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @convertExpressionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_convertExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_expressionAST mProperty_mExpression ;
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_location mProperty_mEndOfExpression ;

//--- Constructor
  public : cPtr_convertExpressionAST (const GALGAS_expressionAST & in_mExpression,
                                      const GALGAS_lstring & in_mTypeName,
                                      const GALGAS_location & in_mEndOfExpression
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @enumerationDeclarationAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumerationDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_enumerationDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumerationDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_enumerationDeclarationAST * ptr (void) const { return (const cPtr_enumerationDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_enumerationDeclarationAST (const cPtr_enumerationDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumerationDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumerationDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_enumerationConstantList & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumerationDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_enumerationConstantList getter_mCaseNameList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEnumerationName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumerationDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @enumerationConstantList list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumerationConstantList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_enumerationConstantList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_enumerationConstantList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mConstantName,
                                                  const class GALGAS_bigint & in_mConstantValue
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumerationConstantList extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumerationConstantList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_enumerationConstantList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_bigint & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_enumerationConstantList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bigint & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_enumerationConstantList add_operation (const GALGAS_enumerationConstantList & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_bigint constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_bigint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_bigint & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_bigint & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_bigint & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_bigint & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mConstantValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumerationConstantList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumerationConstantList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumerationConstantList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_enumerationConstantList ;
 
} ; // End of GALGAS_enumerationConstantList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_enumerationConstantList : public cGenericAbstractEnumerator {
  public : cEnumerator_enumerationConstantList (const GALGAS_enumerationConstantList & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mConstantName (LOCATION_ARGS) const ;
  public : class GALGAS_bigint current_mConstantValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_enumerationConstantList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationConstantList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @enumerationDeclarationAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_enumerationDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mEnumerationName ;
  public : GALGAS_enumerationConstantList mProperty_mCaseNameList ;

//--- Constructor
  public : cPtr_enumerationDeclarationAST (const GALGAS_lstring & in_mEnumerationName,
                                           const GALGAS_enumerationConstantList & in_mCaseNameList
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mEnumerationName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_enumerationConstantList getter_mCaseNameList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @extendExpressionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extendExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_extendExpressionAST (void) ;

//---
  public : inline const class cPtr_extendExpressionAST * ptr (void) const { return (const cPtr_extendExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_extendExpressionAST (const cPtr_extendExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extendExpressionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_extendExpressionAST constructor_new (const class GALGAS_expressionAST & inOperand0,
                                                                    const class GALGAS_lstring & inOperand1,
                                                                    const class GALGAS_location & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_extendExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extendExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @extendExpressionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_extendExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_expressionAST mProperty_mExpression ;
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_location mProperty_mEndOfExpression ;

//--- Constructor
  public : cPtr_extendExpressionAST (const GALGAS_expressionAST & in_mExpression,
                                     const GALGAS_lstring & in_mTypeName,
                                     const GALGAS_location & in_mEndOfExpression
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @forInstructionAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_forInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_forInstructionAST (void) ;

//---
  public : inline const class cPtr_forInstructionAST * ptr (void) const { return (const cPtr_forInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_forInstructionAST (const cPtr_forInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_forInstructionAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_forInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_lstring & inOperand2,
                                                                  const class GALGAS_expressionAST & inOperand3,
                                                                  const class GALGAS_location & inOperand4,
                                                                  const class GALGAS_bool & inOperand5,
                                                                  const class GALGAS_instructionListAST & inOperand6,
                                                                  const class GALGAS_location & inOperand7
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_forInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mDoInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_for_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_whileExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIteratedObject (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mStaticWhileExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mWhileExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @forInstructionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_forInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mVarName ;
  public : GALGAS_lstring mProperty_mIteratedObject ;
  public : GALGAS_expressionAST mProperty_mWhileExpression ;
  public : GALGAS_location mProperty_mEndOf_5F_whileExpression ;
  public : GALGAS_bool mProperty_mStaticWhileExpression ;
  public : GALGAS_instructionListAST mProperty_mDoInstructionList ;
  public : GALGAS_location mProperty_mEndOf_5F_for_5F_instruction ;

//--- Constructor
  public : cPtr_forInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                   const GALGAS_lstring & in_mVarName,
                                   const GALGAS_lstring & in_mIteratedObject,
                                   const GALGAS_expressionAST & in_mWhileExpression,
                                   const GALGAS_location & in_mEndOf_5F_whileExpression,
                                   const GALGAS_bool & in_mStaticWhileExpression,
                                   const GALGAS_instructionListAST & in_mDoInstructionList,
                                   const GALGAS_location & in_mEndOf_5F_for_5F_instruction
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mIteratedObject (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mWhileExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_whileExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mStaticWhileExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListAST getter_mDoInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_for_5F_instruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @forLowerUpperBoundInstructionAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_forLowerUpperBoundInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_forLowerUpperBoundInstructionAST (void) ;

//---
  public : inline const class cPtr_forLowerUpperBoundInstructionAST * ptr (void) const { return (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_forLowerUpperBoundInstructionAST (const cPtr_forLowerUpperBoundInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_forLowerUpperBoundInstructionAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_forLowerUpperBoundInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_expressionAST & inOperand3,
                                                                                 const class GALGAS_location & inOperand4,
                                                                                 const class GALGAS_expressionAST & inOperand5,
                                                                                 const class GALGAS_location & inOperand6,
                                                                                 const class GALGAS_instructionListAST & inOperand7,
                                                                                 const class GALGAS_location & inOperand8
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_forLowerUpperBoundInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mDoInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_do_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_lowerBoundExpression_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_upperBoundExpression_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mLowerBoundExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mUpperBoundExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forLowerUpperBoundInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @forLowerUpperBoundInstructionAST class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_forLowerUpperBoundInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mVarName ;
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_expressionAST mProperty_mLowerBoundExpression ;
  public : GALGAS_location mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction ;
  public : GALGAS_expressionAST mProperty_mUpperBoundExpression ;
  public : GALGAS_location mProperty_mEndOf_5F_upperBoundExpression_5F_instruction ;
  public : GALGAS_instructionListAST mProperty_mDoInstructionList ;
  public : GALGAS_location mProperty_mEndOf_5F_do_5F_instruction ;

//--- Constructor
  public : cPtr_forLowerUpperBoundInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_lstring & in_mVarName,
                                                  const GALGAS_lstring & in_mTypeName,
                                                  const GALGAS_expressionAST & in_mLowerBoundExpression,
                                                  const GALGAS_location & in_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                  const GALGAS_expressionAST & in_mUpperBoundExpression,
                                                  const GALGAS_location & in_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                  const GALGAS_instructionListAST & in_mDoInstructionList,
                                                  const GALGAS_location & in_mEndOf_5F_do_5F_instruction
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mLowerBoundExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_lowerBoundExpression_5F_instruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mUpperBoundExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_upperBoundExpression_5F_instruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListAST getter_mDoInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_do_5F_instruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @globalConstantDeclarationAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_globalConstantDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_globalConstantDeclarationAST (void) ;

//---
  public : inline const class cPtr_globalConstantDeclarationAST * ptr (void) const { return (const cPtr_globalConstantDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_globalConstantDeclarationAST (const cPtr_globalConstantDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_globalConstantDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_globalConstantDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_expressionAST & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_globalConstantDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mSourceExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_globalConstantDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalConstantDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @globalConstantDeclarationAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_globalConstantDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mConstantName ;
  public : GALGAS_lstring mProperty_mConstantTypeName ;
  public : GALGAS_expressionAST mProperty_mSourceExpression ;

//--- Constructor
  public : cPtr_globalConstantDeclarationAST (const GALGAS_lstring & in_mConstantName,
                                              const GALGAS_lstring & in_mConstantTypeName,
                                              const GALGAS_expressionAST & in_mSourceExpression
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mConstantName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mConstantTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mSourceExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @ifExpressionAST class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ifExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_ifExpressionAST (void) ;

//---
  public : inline const class cPtr_ifExpressionAST * ptr (void) const { return (const cPtr_ifExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ifExpressionAST (const cPtr_ifExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ifExpressionAST extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ifExpressionAST constructor_new (const class GALGAS_expressionAST & inOperand0,
                                                                const class GALGAS_location & inOperand1,
                                                                const class GALGAS_expressionAST & inOperand2,
                                                                const class GALGAS_location & inOperand3,
                                                                const class GALGAS_expressionAST & inOperand4,
                                                                const class GALGAS_location & inOperand5
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ifExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mElseExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mElseExpressionEndLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mIfExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mIfExpressionEndLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mThenExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mThenExpressionEndLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ifExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @ifExpressionAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ifExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_expressionAST mProperty_mIfExpression ;
  public : GALGAS_location mProperty_mIfExpressionEndLocation ;
  public : GALGAS_expressionAST mProperty_mThenExpression ;
  public : GALGAS_location mProperty_mThenExpressionEndLocation ;
  public : GALGAS_expressionAST mProperty_mElseExpression ;
  public : GALGAS_location mProperty_mElseExpressionEndLocation ;

//--- Constructor
  public : cPtr_ifExpressionAST (const GALGAS_expressionAST & in_mIfExpression,
                                 const GALGAS_location & in_mIfExpressionEndLocation,
                                 const GALGAS_expressionAST & in_mThenExpression,
                                 const GALGAS_location & in_mThenExpressionEndLocation,
                                 const GALGAS_expressionAST & in_mElseExpression,
                                 const GALGAS_location & in_mElseExpressionEndLocation
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mIfExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mIfExpressionEndLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mThenExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mThenExpressionEndLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mElseExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mElseExpressionEndLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @ifInstructionAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ifInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_ifInstructionAST (void) ;

//---
  public : inline const class cPtr_ifInstructionAST * ptr (void) const { return (const cPtr_ifInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ifInstructionAST (const cPtr_ifInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ifInstructionAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ifInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_expressionAST & inOperand1,
                                                                 const class GALGAS_location & inOperand2,
                                                                 const class GALGAS_bool & inOperand3,
                                                                 const class GALGAS_instructionListAST & inOperand4,
                                                                 const class GALGAS_location & inOperand5,
                                                                 const class GALGAS_instructionListAST & inOperand6,
                                                                 const class GALGAS_location & inOperand7,
                                                                 const class GALGAS_location & inOperand8
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ifInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mElseInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfElseInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfThenInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_if_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mStaticIfExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mTestExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mTestExpressionEndLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mThenInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ifInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @ifInstructionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ifInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_expressionAST mProperty_mTestExpression ;
  public : GALGAS_location mProperty_mTestExpressionEndLocation ;
  public : GALGAS_bool mProperty_mStaticIfExpression ;
  public : GALGAS_instructionListAST mProperty_mThenInstructionList ;
  public : GALGAS_location mProperty_mEndOfThenInstructionList ;
  public : GALGAS_instructionListAST mProperty_mElseInstructionList ;
  public : GALGAS_location mProperty_mEndOfElseInstructionList ;
  public : GALGAS_location mProperty_mEndOf_5F_if_5F_instruction ;

//--- Constructor
  public : cPtr_ifInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                  const GALGAS_expressionAST & in_mTestExpression,
                                  const GALGAS_location & in_mTestExpressionEndLocation,
                                  const GALGAS_bool & in_mStaticIfExpression,
                                  const GALGAS_instructionListAST & in_mThenInstructionList,
                                  const GALGAS_location & in_mEndOfThenInstructionList,
                                  const GALGAS_instructionListAST & in_mElseInstructionList,
                                  const GALGAS_location & in_mEndOfElseInstructionList,
                                  const GALGAS_location & in_mEndOf_5F_if_5F_instruction
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mTestExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mTestExpressionEndLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mStaticIfExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListAST getter_mThenInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfThenInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListAST getter_mElseInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfElseInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_if_5F_instruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @infixOperatorExpressionAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_infixOperatorExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_infixOperatorExpressionAST (void) ;

//---
  public : inline const class cPtr_infixOperatorExpressionAST * ptr (void) const { return (const cPtr_infixOperatorExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_infixOperatorExpressionAST (const cPtr_infixOperatorExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_infixOperatorExpressionAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_infixOperatorExpressionAST constructor_new (const class GALGAS_expressionAST & inOperand0,
                                                                           const class GALGAS_location & inOperand1,
                                                                           const class GALGAS_infixOperator & inOperand2,
                                                                           const class GALGAS_expressionAST & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_infixOperatorExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperator getter_mOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_infixOperatorExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @infixOperator enum                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_infixOperator : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_infixOperator (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_equal,
    kEnum_nonEqual,
    kEnum_strictInf,
    kEnum_strictSup,
    kEnum_infEqual,
    kEnum_supEqual,
    kEnum_andOp,
    kEnum_orOp,
    kEnum_xorOp,
    kEnum_booleanXorOp,
    kEnum_addOp,
    kEnum_addOpNoOvf,
    kEnum_subOp,
    kEnum_subOpNoOvf,
    kEnum_mulOp,
    kEnum_mulOpNoOvf,
    kEnum_divOp,
    kEnum_divOpNoOvf,
    kEnum_modOp,
    kEnum_modOpNoOvf,
    kEnum_leftShiftOp,
    kEnum_rightShiftOp
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_infixOperator extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_infixOperator constructor_addOp (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_addOpNoOvf (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_andOp (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_booleanXorOp (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_divOp (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_divOpNoOvf (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_equal (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_infEqual (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_leftShiftOp (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_modOp (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_modOpNoOvf (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_mulOp (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_mulOpNoOvf (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_nonEqual (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_orOp (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_rightShiftOp (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_strictInf (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_strictSup (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_subOp (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_subOpNoOvf (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_supEqual (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_xorOp (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_infixOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAddOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAddOpNoOvf (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAndOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBooleanXorOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDivOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDivOpNoOvf (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEqual (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInfEqual (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLeftShiftOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isModOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isModOpNoOvf (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMulOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMulOpNoOvf (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNonEqual (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOrOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRightShiftOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStrictInf (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStrictSup (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSubOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSubOpNoOvf (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSupEqual (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isXorOp (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_infixOperator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperator ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @infixOperatorExpressionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_infixOperatorExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_expressionAST mProperty_mLeftExpression ;
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_infixOperator mProperty_mOp ;
  public : GALGAS_expressionAST mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_infixOperatorExpressionAST (const GALGAS_expressionAST & in_mLeftExpression,
                                            const GALGAS_location & in_mOperatorLocation,
                                            const GALGAS_infixOperator & in_mOp,
                                            const GALGAS_expressionAST & in_mRightExpression
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_infixOperator getter_mOp (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @initAST class                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_initAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_initAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_initAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_initAST * ptr (void) const { return (const cPtr_initAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_initAST (const cPtr_initAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_initAST extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_initAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                        const class GALGAS_lstringlist & inOperand1,
                                                        const class GALGAS_location & inOperand2,
                                                        const class GALGAS_instructionListAST & inOperand3,
                                                        const class GALGAS_location & inOperand4
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_initAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mDriverDependanceList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDriverName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInitLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInitLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_initAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Pointer class for @initAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_initAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mDriverName ;
  public : GALGAS_lstringlist mProperty_mDriverDependanceList ;
  public : GALGAS_location mProperty_mInitLocation ;
  public : GALGAS_instructionListAST mProperty_mInstructionList ;
  public : GALGAS_location mProperty_mEndOfInitLocation ;

//--- Constructor
  public : cPtr_initAST (const GALGAS_lstring & in_mDriverName,
                         const GALGAS_lstringlist & in_mDriverDependanceList,
                         const GALGAS_location & in_mInitLocation,
                         const GALGAS_instructionListAST & in_mInstructionList,
                         const GALGAS_location & in_mEndOfInitLocation
                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mDriverName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mDriverDependanceList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mInitLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListAST getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfInitLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @letInstructionNOP class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_letInstructionNOP : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_letInstructionNOP (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_letInstructionNOP constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_letInstructionNOP * ptr (void) const { return (const cPtr_letInstructionNOP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_letInstructionNOP (const cPtr_letInstructionNOP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_letInstructionNOP extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_letInstructionNOP constructor_new (const class GALGAS_location & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_letInstructionNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_letInstructionNOP class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_letInstructionNOP ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @letInstructionNOP class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_letInstructionNOP : public cPtr_instructionAST {
//--- Attributes

//--- Constructor
  public : cPtr_letInstructionNOP (const GALGAS_location & in_mInstructionLocation
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
//                                       @letInstructionWithAssignmentAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_letInstructionWithAssignmentAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_letInstructionWithAssignmentAST (void) ;

//---
  public : inline const class cPtr_letInstructionWithAssignmentAST * ptr (void) const { return (const cPtr_letInstructionWithAssignmentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_letInstructionWithAssignmentAST (const cPtr_letInstructionWithAssignmentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_letInstructionWithAssignmentAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_letInstructionWithAssignmentAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                const class GALGAS_expressionAST & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_letInstructionWithAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionalTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mSourceExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_letInstructionWithAssignmentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @letInstructionWithAssignmentAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_letInstructionWithAssignmentAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mConstantName ;
  public : GALGAS_lstring mProperty_mOptionalTypeName ;
  public : GALGAS_expressionAST mProperty_mSourceExpression ;

//--- Constructor
  public : cPtr_letInstructionWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mConstantName,
                                                 const GALGAS_lstring & in_mOptionalTypeName,
                                                 const GALGAS_expressionAST & in_mSourceExpression
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mConstantName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOptionalTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mSourceExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @literalBooleanInExpressionAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalBooleanInExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_literalBooleanInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalBooleanInExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalBooleanInExpressionAST * ptr (void) const { return (const cPtr_literalBooleanInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalBooleanInExpressionAST (const cPtr_literalBooleanInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalBooleanInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_literalBooleanInExpressionAST constructor_new (const class GALGAS_bool & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalBooleanInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalBooleanInExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalBooleanInExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @literalBooleanInExpressionAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalBooleanInExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_bool mProperty_mValue ;

//--- Constructor
  public : cPtr_literalBooleanInExpressionAST (const GALGAS_bool & in_mValue
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @literalIntegerInExpressionAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalIntegerInExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_literalIntegerInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalIntegerInExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalIntegerInExpressionAST * ptr (void) const { return (const cPtr_literalIntegerInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalIntegerInExpressionAST (const cPtr_literalIntegerInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalIntegerInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_literalIntegerInExpressionAST constructor_new (const class GALGAS_lbigint & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalIntegerInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mLiteralInteger (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalIntegerInExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalIntegerInExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @literalIntegerInExpressionAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalIntegerInExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_lbigint mProperty_mLiteralInteger ;

//--- Constructor
  public : cPtr_literalIntegerInExpressionAST (const GALGAS_lbigint & in_mLiteralInteger
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lbigint getter_mLiteralInteger (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @literalStringInExpressionAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalStringInExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_literalStringInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalStringInExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalStringInExpressionAST * ptr (void) const { return (const cPtr_literalStringInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalStringInExpressionAST (const cPtr_literalStringInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalStringInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_literalStringInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalStringInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLiteralString (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalStringInExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringInExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @literalStringInExpressionAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalStringInExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mLiteralString ;

//--- Constructor
  public : cPtr_literalStringInExpressionAST (const GALGAS_lstring & in_mLiteralString
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mLiteralString (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @newTypeDeclaration class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_newTypeDeclaration : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_newTypeDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_newTypeDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_newTypeDeclaration * ptr (void) const { return (const cPtr_newTypeDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_newTypeDeclaration (const cPtr_newTypeDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_newTypeDeclaration extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_newTypeDeclaration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_newTypeDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAliasedTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNewTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_newTypeDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_newTypeDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @newTypeDeclaration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_newTypeDeclaration : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mNewTypeName ;
  public : GALGAS_lstring mProperty_mAliasedTypeName ;

//--- Constructor
  public : cPtr_newTypeDeclaration (const GALGAS_lstring & in_mNewTypeName,
                                    const GALGAS_lstring & in_mAliasedTypeName
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mNewTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mAliasedTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @panicAST class                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_panicAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_panicAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_panicAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_panicAST * ptr (void) const { return (const cPtr_panicAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_panicAST (const cPtr_panicAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_panicAST extractObject (const GALGAS_object & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_panicAST constructor_new (const class GALGAS_bool & inOperand0,
                                                         const class GALGAS_instructionListAST & inOperand1,
                                                         const class GALGAS_location & inOperand2,
                                                         const class GALGAS_lbigint & inOperand3
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_panicAST & inOperand) const ;

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
 
} ; // End of GALGAS_panicAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Pointer class for @panicAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_panicAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_bool mProperty_mIsSetup ;
  public : GALGAS_instructionListAST mProperty_mPanicInstructionList ;
  public : GALGAS_location mProperty_mEndOfPanicInstructions ;
  public : GALGAS_lbigint mProperty_mPriority ;

//--- Constructor
  public : cPtr_panicAST (const GALGAS_bool & in_mIsSetup,
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
//                                             @panicInstructionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_panicInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_panicInstructionAST (void) ;

//---
  public : inline const class cPtr_panicInstructionAST * ptr (void) const { return (const cPtr_panicInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_panicInstructionAST (const cPtr_panicInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_panicInstructionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_panicInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_expressionAST & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_panicInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mCodeExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_panicInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @panicInstructionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_panicInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_expressionAST mProperty_mCodeExpression ;

//--- Constructor
  public : cPtr_panicInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                     const GALGAS_expressionAST & in_mCodeExpression
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mCodeExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @prefixOperatorExpressionAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_prefixOperatorExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_prefixOperatorExpressionAST (void) ;

//---
  public : inline const class cPtr_prefixOperatorExpressionAST * ptr (void) const { return (const cPtr_prefixOperatorExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_prefixOperatorExpressionAST (const cPtr_prefixOperatorExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_prefixOperatorExpressionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_prefixOperatorExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_prefixOperator & inOperand1,
                                                                            const class GALGAS_expressionAST & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_prefixOperatorExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_prefixOperator getter_mOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prefixOperatorExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @prefixOperator enum                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_prefixOperator : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_prefixOperator (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_notOperator,
    kEnum_minus,
    kEnum_unsignedComplement,
    kEnum_minusNoOvf
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_prefixOperator extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_prefixOperator constructor_minus (LOCATION_ARGS) ;

  public : static class GALGAS_prefixOperator constructor_minusNoOvf (LOCATION_ARGS) ;

  public : static class GALGAS_prefixOperator constructor_notOperator (LOCATION_ARGS) ;

  public : static class GALGAS_prefixOperator constructor_unsignedComplement (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_prefixOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMinus (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMinusNoOvf (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNotOperator (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUnsignedComplement (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prefixOperator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperator ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @prefixOperatorExpressionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_prefixOperatorExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_prefixOperator mProperty_mOp ;
  public : GALGAS_expressionAST mProperty_mExpression ;

//--- Constructor
  public : cPtr_prefixOperatorExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                             const GALGAS_prefixOperator & in_mOp,
                                             const GALGAS_expressionAST & in_mExpression
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_prefixOperator getter_mOp (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @primaryInExpressionAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_primaryInExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_primaryInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_primaryInExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_primaryInExpressionAST * ptr (void) const { return (const cPtr_primaryInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_primaryInExpressionAST (const cPtr_primaryInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_primaryInExpressionAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_primaryInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_primaryInExpressionAccessListAST & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_primaryInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_primaryInExpressionAccessListAST getter_mAccessList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_primaryInExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @primaryInExpressionAccessListAST list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_primaryInExpressionAccessListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_primaryInExpressionAccessListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_primaryInExpressionAccessListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_primaryInExpressionAccessAST & in_mAccess
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_primaryInExpressionAccessListAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_primaryInExpressionAccessListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_primaryInExpressionAccessListAST constructor_listWithValue (const class GALGAS_primaryInExpressionAccessAST & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_primaryInExpressionAccessListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_primaryInExpressionAccessAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_primaryInExpressionAccessListAST add_operation (const GALGAS_primaryInExpressionAccessListAST & inOperand,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_primaryInExpressionAccessAST constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_primaryInExpressionAccessAST & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_primaryInExpressionAccessAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_primaryInExpressionAccessAST & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_primaryInExpressionAccessAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_primaryInExpressionAccessAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_primaryInExpressionAccessAST getter_mAccessAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_primaryInExpressionAccessListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_primaryInExpressionAccessListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_primaryInExpressionAccessListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_primaryInExpressionAccessListAST ;
 
} ; // End of GALGAS_primaryInExpressionAccessListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_primaryInExpressionAccessListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_primaryInExpressionAccessListAST (const GALGAS_primaryInExpressionAccessListAST & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_primaryInExpressionAccessAST current_mAccess (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_primaryInExpressionAccessListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @primaryInExpressionAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_primaryInExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mReceiverName ;
  public : GALGAS_primaryInExpressionAccessListAST mProperty_mAccessList ;

//--- Constructor
  public : cPtr_primaryInExpressionAST (const GALGAS_lstring & in_mReceiverName,
                                        const GALGAS_primaryInExpressionAccessListAST & in_mAccessList
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_primaryInExpressionAccessListAST getter_mAccessList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @procedureCallInstructionAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_procedureCallInstructionAST : public GALGAS_callInstructionAST {
//--- Constructor
  public : GALGAS_procedureCallInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_procedureCallInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_procedureCallInstructionAST * ptr (void) const { return (const cPtr_procedureCallInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_procedureCallInstructionAST (const cPtr_procedureCallInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procedureCallInstructionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_procedureCallInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_effectiveArgumentListAST & inOperand1,
                                                                            const class GALGAS_location & inOperand2,
                                                                            const class GALGAS_lstring & inOperand3,
                                                                            const class GALGAS_accessInAssignmentListAST & inOperand4
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_procedureCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_accessInAssignmentListAST getter_mAccessList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIdentifier (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procedureCallInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procedureCallInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @procedureCallInstructionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_procedureCallInstructionAST : public cPtr_callInstructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mIdentifier ;
  public : GALGAS_accessInAssignmentListAST mProperty_mAccessList ;

//--- Constructor
  public : cPtr_procedureCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                             const GALGAS_effectiveArgumentListAST & in_mArguments,
                                             const GALGAS_location & in_mEndOfArguments,
                                             const GALGAS_lstring & in_mIdentifier,
                                             const GALGAS_accessInAssignmentListAST & in_mAccessList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mIdentifier (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_accessInAssignmentListAST getter_mAccessList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @registerConstantExpressionAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_registerConstantExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_registerConstantExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_registerConstantExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_registerConstantExpressionAST * ptr (void) const { return (const cPtr_registerConstantExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_registerConstantExpressionAST (const cPtr_registerConstantExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_registerConstantExpressionAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_registerConstantExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_registerIntegerFieldListAST & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_registerConstantExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_registerIntegerFieldListAST getter_mFieldValues (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRegisterGroupName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRegisterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_registerConstantExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerConstantExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @registerIntegerFieldListAST list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_registerIntegerFieldListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_registerIntegerFieldListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_registerIntegerFieldListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mFieldName,
                                                  const class GALGAS_expressionAST & in_mExpression,
                                                  const class GALGAS_location & in_mExpressionLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_registerIntegerFieldListAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_registerIntegerFieldListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_registerIntegerFieldListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_expressionAST & inOperand1,
                                                                                      const class GALGAS_location & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_registerIntegerFieldListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_expressionAST & inOperand1,
                                                      const class GALGAS_location & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_registerIntegerFieldListAST add_operation (const GALGAS_registerIntegerFieldListAST & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_expressionAST constinArgument1,
                                                       class GALGAS_location constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_expressionAST & outArgument1,
                                                  class GALGAS_location & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_expressionAST & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_expressionAST & outArgument1,
                                                       class GALGAS_location & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_expressionAST & outArgument1,
                                               class GALGAS_location & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_expressionAST & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mExpressionLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFieldNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerIntegerFieldListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerIntegerFieldListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerIntegerFieldListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_registerIntegerFieldListAST ;
 
} ; // End of GALGAS_registerIntegerFieldListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_registerIntegerFieldListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_registerIntegerFieldListAST (const GALGAS_registerIntegerFieldListAST & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mFieldName (LOCATION_ARGS) const ;
  public : class GALGAS_expressionAST current_mExpression (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mExpressionLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_registerIntegerFieldListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerIntegerFieldListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @registerConstantExpressionAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_registerConstantExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mRegisterGroupName ;
  public : GALGAS_lstring mProperty_mRegisterName ;
  public : GALGAS_registerIntegerFieldListAST mProperty_mFieldValues ;

//--- Constructor
  public : cPtr_registerConstantExpressionAST (const GALGAS_lstring & in_mRegisterGroupName,
                                               const GALGAS_lstring & in_mRegisterName,
                                               const GALGAS_registerIntegerFieldListAST & in_mFieldValues
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRegisterGroupName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRegisterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerIntegerFieldListAST getter_mFieldValues (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @sizeofExpressionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sizeofExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_sizeofExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_sizeofExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_sizeofExpressionAST * ptr (void) const { return (const cPtr_sizeofExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_sizeofExpressionAST (const cPtr_sizeofExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sizeofExpressionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_sizeofExpressionAST constructor_new (const class GALGAS_LValueAST & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_sizeofExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_LValueAST getter_mLValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sizeofExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sizeofExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @sizeofExpressionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_sizeofExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_LValueAST mProperty_mLValue ;

//--- Constructor
  public : cPtr_sizeofExpressionAST (const GALGAS_LValueAST & in_mLValue
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_LValueAST getter_mLValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @sizeofTypeAST class                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sizeofTypeAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_sizeofTypeAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_sizeofTypeAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_sizeofTypeAST * ptr (void) const { return (const cPtr_sizeofTypeAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_sizeofTypeAST (const cPtr_sizeofTypeAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sizeofTypeAST extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_sizeofTypeAST constructor_new (const class GALGAS_lstring & inOperand0
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_sizeofTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sizeofTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sizeofTypeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Pointer class for @sizeofTypeAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_sizeofTypeAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mTypeName ;

//--- Constructor
  public : cPtr_sizeofTypeAST (const GALGAS_lstring & in_mTypeName
                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @standAloneProcedureCallInstructionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_standAloneProcedureCallInstructionAST : public GALGAS_callInstructionAST {
//--- Constructor
  public : GALGAS_standAloneProcedureCallInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_standAloneProcedureCallInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_standAloneProcedureCallInstructionAST * ptr (void) const { return (const cPtr_standAloneProcedureCallInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_standAloneProcedureCallInstructionAST (const cPtr_standAloneProcedureCallInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_standAloneProcedureCallInstructionAST extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_standAloneProcedureCallInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_effectiveArgumentListAST & inOperand1,
                                                                                      const class GALGAS_location & inOperand2,
                                                                                      const class GALGAS_lstring & inOperand3
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_standAloneProcedureCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSandAloneRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_standAloneProcedureCallInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @standAloneProcedureCallInstructionAST class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_standAloneProcedureCallInstructionAST : public cPtr_callInstructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mSandAloneRoutineName ;

//--- Constructor
  public : cPtr_standAloneProcedureCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                       const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                       const GALGAS_location & in_mEndOfArguments,
                                                       const GALGAS_lstring & in_mSandAloneRoutineName
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSandAloneRoutineName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @standaloneFunctionInExpressionAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_standaloneFunctionInExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_standaloneFunctionInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_standaloneFunctionInExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_standaloneFunctionInExpressionAST * ptr (void) const { return (const cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_standaloneFunctionInExpressionAST (const cPtr_standaloneFunctionInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_standaloneFunctionInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_standaloneFunctionInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_effectiveArgumentListAST & inOperand1,
                                                                                  const class GALGAS_location & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_standaloneFunctionInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_effectiveArgumentListAST getter_mArguments (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfArguments (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStandaloneFunctionName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_standaloneFunctionInExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @standaloneFunctionInExpressionAST class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_standaloneFunctionInExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mStandaloneFunctionName ;
  public : GALGAS_effectiveArgumentListAST mProperty_mArguments ;
  public : GALGAS_location mProperty_mEndOfArguments ;

//--- Constructor
  public : cPtr_standaloneFunctionInExpressionAST (const GALGAS_lstring & in_mStandaloneFunctionName,
                                                   const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                   const GALGAS_location & in_mEndOfArguments
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mStandaloneFunctionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_effectiveArgumentListAST getter_mArguments (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfArguments (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @staticListAST class                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_staticListAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_staticListAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_staticListAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_staticListAST * ptr (void) const { return (const cPtr_staticListAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_staticListAST (const cPtr_staticListAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_staticListAST extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_staticListAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                              const class GALGAS_staticListPropertyListAST & inOperand1,
                                                              const class GALGAS_staticListValueListAST & inOperand2
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_staticListAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_staticListPropertyListAST getter_mPropertyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStaticListName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_staticListValueListAST getter_mValueList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_staticListAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @staticListPropertyListAST list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_staticListPropertyListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_staticListPropertyListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_staticListPropertyListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mPropertyName,
                                                  const class GALGAS_staticListPropertyTypeAST & in_mPropertyType
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_staticListPropertyListAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_staticListPropertyListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_staticListPropertyListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_staticListPropertyTypeAST & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_staticListPropertyListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_staticListPropertyTypeAST & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_staticListPropertyListAST add_operation (const GALGAS_staticListPropertyListAST & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_staticListPropertyTypeAST constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_staticListPropertyTypeAST & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_staticListPropertyTypeAST & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_staticListPropertyTypeAST & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_staticListPropertyTypeAST & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_staticListPropertyTypeAST & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_staticListPropertyTypeAST getter_mPropertyTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_staticListPropertyListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_staticListPropertyListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_staticListPropertyListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_staticListPropertyListAST ;
 
} ; // End of GALGAS_staticListPropertyListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_staticListPropertyListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_staticListPropertyListAST (const GALGAS_staticListPropertyListAST & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mPropertyName (LOCATION_ARGS) const ;
  public : class GALGAS_staticListPropertyTypeAST current_mPropertyType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_staticListPropertyListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListPropertyListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @staticListValueListAST list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_staticListValueListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_staticListValueListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_staticListValueListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_extendStaticListElementListAST & in_mExpressions
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_staticListValueListAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_staticListValueListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_staticListValueListAST constructor_listWithValue (const class GALGAS_extendStaticListElementListAST & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_staticListValueListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_extendStaticListElementListAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_staticListValueListAST add_operation (const GALGAS_staticListValueListAST & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_extendStaticListElementListAST constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_extendStaticListElementListAST & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_extendStaticListElementListAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_extendStaticListElementListAST & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_extendStaticListElementListAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_extendStaticListElementListAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_extendStaticListElementListAST getter_mExpressionsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_staticListValueListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_staticListValueListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_staticListValueListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_staticListValueListAST ;
 
} ; // End of GALGAS_staticListValueListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_staticListValueListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_staticListValueListAST (const GALGAS_staticListValueListAST & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_extendStaticListElementListAST current_mExpressions (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_staticListValueListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListValueListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Pointer class for @staticListAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_staticListAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mStaticListName ;
  public : GALGAS_staticListPropertyListAST mProperty_mPropertyList ;
  public : GALGAS_staticListValueListAST mProperty_mValueList ;

//--- Constructor
  public : cPtr_staticListAST (const GALGAS_lstring & in_mStaticListName,
                               const GALGAS_staticListPropertyListAST & in_mPropertyList,
                               const GALGAS_staticListValueListAST & in_mValueList
                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mStaticListName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_staticListPropertyListAST getter_mPropertyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_staticListValueListAST getter_mValueList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @structureDeclarationAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_structureDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_structureDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_structureDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_structureDeclarationAST * ptr (void) const { return (const cPtr_structureDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_structureDeclarationAST (const cPtr_structureDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_structureDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_structureDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstringlist & inOperand1,
                                                                        const class GALGAS_bool & inOperand2,
                                                                        const class GALGAS_structurePropertyListAST & inOperand3,
                                                                        const class GALGAS_functionDeclarationListAST & inOperand4,
                                                                        const class GALGAS_systemRoutineDeclarationListAST & inOperand5,
                                                                        const class GALGAS_guardDeclarationListAST & inOperand6
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_structureDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAttributeListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDeclarationListAST getter_mFunctionDeclarationListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGenerateAssignmentRoutine (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardDeclarationListAST getter_mGuardListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStructureName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_structurePropertyListAST getter_mStructurePropertyListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_systemRoutineDeclarationListAST getter_mSystemRoutineListAST (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structureDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structureDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @functionDeclarationListAST list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_functionDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_functionDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_mode & in_mMode,
                                                  const class GALGAS_bool & in_mPublicFunction,
                                                  const class GALGAS_lstring & in_mFunctionName,
                                                  const class GALGAS_lstringlist & in_mFunctionAttributeList,
                                                  const class GALGAS_routineFormalArgumentListAST & in_mFunctionFormalArgumentList,
                                                  const class GALGAS_lstring & in_mFunctionReturnTypeName,
                                                  const class GALGAS_instructionListAST & in_mFunctionInstructionList,
                                                  const class GALGAS_location & in_mEndOfFunctionDeclaration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_functionDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_functionDeclarationListAST constructor_listWithValue (const class GALGAS_mode & inOperand0,
                                                                                     const class GALGAS_bool & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2,
                                                                                     const class GALGAS_lstringlist & inOperand3,
                                                                                     const class GALGAS_routineFormalArgumentListAST & inOperand4,
                                                                                     const class GALGAS_lstring & inOperand5,
                                                                                     const class GALGAS_instructionListAST & inOperand6,
                                                                                     const class GALGAS_location & inOperand7
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_functionDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_mode & inOperand0,
                                                      const class GALGAS_bool & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_lstringlist & inOperand3,
                                                      const class GALGAS_routineFormalArgumentListAST & inOperand4,
                                                      const class GALGAS_lstring & inOperand5,
                                                      const class GALGAS_instructionListAST & inOperand6,
                                                      const class GALGAS_location & inOperand7
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_functionDeclarationListAST add_operation (const GALGAS_functionDeclarationListAST & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_mode constinArgument0,
                                                       class GALGAS_bool constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_lstringlist constinArgument3,
                                                       class GALGAS_routineFormalArgumentListAST constinArgument4,
                                                       class GALGAS_lstring constinArgument5,
                                                       class GALGAS_instructionListAST constinArgument6,
                                                       class GALGAS_location constinArgument7,
                                                       class GALGAS_uint constinArgument8,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_mode & outArgument0,
                                                  class GALGAS_bool & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  class GALGAS_lstringlist & outArgument3,
                                                  class GALGAS_routineFormalArgumentListAST & outArgument4,
                                                  class GALGAS_lstring & outArgument5,
                                                  class GALGAS_instructionListAST & outArgument6,
                                                  class GALGAS_location & outArgument7,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_mode & outArgument0,
                                                 class GALGAS_bool & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_lstringlist & outArgument3,
                                                 class GALGAS_routineFormalArgumentListAST & outArgument4,
                                                 class GALGAS_lstring & outArgument5,
                                                 class GALGAS_instructionListAST & outArgument6,
                                                 class GALGAS_location & outArgument7,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_mode & outArgument0,
                                                       class GALGAS_bool & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_lstringlist & outArgument3,
                                                       class GALGAS_routineFormalArgumentListAST & outArgument4,
                                                       class GALGAS_lstring & outArgument5,
                                                       class GALGAS_instructionListAST & outArgument6,
                                                       class GALGAS_location & outArgument7,
                                                       class GALGAS_uint constinArgument8,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_mode & outArgument0,
                                               class GALGAS_bool & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_lstringlist & outArgument3,
                                               class GALGAS_routineFormalArgumentListAST & outArgument4,
                                               class GALGAS_lstring & outArgument5,
                                               class GALGAS_instructionListAST & outArgument6,
                                               class GALGAS_location & outArgument7,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_mode & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_lstringlist & outArgument3,
                                              class GALGAS_routineFormalArgumentListAST & outArgument4,
                                              class GALGAS_lstring & outArgument5,
                                              class GALGAS_instructionListAST & outArgument6,
                                              class GALGAS_location & outArgument7,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfFunctionDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFunctionAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_mFunctionFormalArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mFunctionInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionReturnTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPublicFunctionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_functionDeclarationListAST ;
 
} ; // End of GALGAS_functionDeclarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_functionDeclarationListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_functionDeclarationListAST (const GALGAS_functionDeclarationListAST & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_mode current_mMode (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mPublicFunction (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mFunctionAttributeList (LOCATION_ARGS) const ;
  public : class GALGAS_routineFormalArgumentListAST current_mFunctionFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFunctionReturnTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListAST current_mFunctionInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfFunctionDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_functionDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @guardDeclarationListAST list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guardDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_guardDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_guardDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mGuardName,
                                                  const class GALGAS_bool & in_mIsPublic,
                                                  const class GALGAS_lstringlist & in_mGuardAttributeList,
                                                  const class GALGAS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                                  const class GALGAS_guardKind & in_mGuardKind,
                                                  const class GALGAS_instructionListAST & in_mGuardInstructionList,
                                                  const class GALGAS_location & in_mEndOfGuardDeclaration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_guardDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guardDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_guardDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_bool & inOperand1,
                                                                                  const class GALGAS_lstringlist & inOperand2,
                                                                                  const class GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                                  const class GALGAS_guardKind & inOperand4,
                                                                                  const class GALGAS_instructionListAST & inOperand5,
                                                                                  const class GALGAS_location & inOperand6
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_guardDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bool & inOperand1,
                                                      const class GALGAS_lstringlist & inOperand2,
                                                      const class GALGAS_routineFormalArgumentListAST & inOperand3,
                                                      const class GALGAS_guardKind & inOperand4,
                                                      const class GALGAS_instructionListAST & inOperand5,
                                                      const class GALGAS_location & inOperand6
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_guardDeclarationListAST add_operation (const GALGAS_guardDeclarationListAST & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_bool constinArgument1,
                                                       class GALGAS_lstringlist constinArgument2,
                                                       class GALGAS_routineFormalArgumentListAST constinArgument3,
                                                       class GALGAS_guardKind constinArgument4,
                                                       class GALGAS_instructionListAST constinArgument5,
                                                       class GALGAS_location constinArgument6,
                                                       class GALGAS_uint constinArgument7,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_bool & outArgument1,
                                                  class GALGAS_lstringlist & outArgument2,
                                                  class GALGAS_routineFormalArgumentListAST & outArgument3,
                                                  class GALGAS_guardKind & outArgument4,
                                                  class GALGAS_instructionListAST & outArgument5,
                                                  class GALGAS_location & outArgument6,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_bool & outArgument1,
                                                 class GALGAS_lstringlist & outArgument2,
                                                 class GALGAS_routineFormalArgumentListAST & outArgument3,
                                                 class GALGAS_guardKind & outArgument4,
                                                 class GALGAS_instructionListAST & outArgument5,
                                                 class GALGAS_location & outArgument6,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_bool & outArgument1,
                                                       class GALGAS_lstringlist & outArgument2,
                                                       class GALGAS_routineFormalArgumentListAST & outArgument3,
                                                       class GALGAS_guardKind & outArgument4,
                                                       class GALGAS_instructionListAST & outArgument5,
                                                       class GALGAS_location & outArgument6,
                                                       class GALGAS_uint constinArgument7,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_bool & outArgument1,
                                               class GALGAS_lstringlist & outArgument2,
                                               class GALGAS_routineFormalArgumentListAST & outArgument3,
                                               class GALGAS_guardKind & outArgument4,
                                               class GALGAS_instructionListAST & outArgument5,
                                               class GALGAS_location & outArgument6,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              class GALGAS_lstringlist & outArgument2,
                                              class GALGAS_routineFormalArgumentListAST & outArgument3,
                                              class GALGAS_guardKind & outArgument4,
                                              class GALGAS_instructionListAST & outArgument5,
                                              class GALGAS_location & outArgument6,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfGuardDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mGuardAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_mGuardFormalArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mGuardInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardKind getter_mGuardKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGuardNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPublicAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_guardDeclarationListAST ;
 
} ; // End of GALGAS_guardDeclarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_guardDeclarationListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_guardDeclarationListAST (const GALGAS_guardDeclarationListAST & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mGuardName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsPublic (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mGuardAttributeList (LOCATION_ARGS) const ;
  public : class GALGAS_routineFormalArgumentListAST current_mGuardFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_guardKind current_mGuardKind (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListAST current_mGuardInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfGuardDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_guardDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardDeclarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @structurePropertyListAST list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_structurePropertyListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_structurePropertyListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_structurePropertyListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mPropertyName,
                                                  const class GALGAS_bool & in_mIsConstant,
                                                  const class GALGAS_bool & in_mIsPublic,
                                                  const class GALGAS_lstring & in_mPropertyTypeName,
                                                  const class GALGAS_structurePropertyInitOptionalExpressionAST & in_mInitialisation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_structurePropertyListAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_structurePropertyListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_structurePropertyListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_bool & inOperand1,
                                                                                   const class GALGAS_bool & inOperand2,
                                                                                   const class GALGAS_lstring & inOperand3,
                                                                                   const class GALGAS_structurePropertyInitOptionalExpressionAST & inOperand4
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_structurePropertyListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bool & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      const class GALGAS_lstring & inOperand3,
                                                      const class GALGAS_structurePropertyInitOptionalExpressionAST & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_structurePropertyListAST add_operation (const GALGAS_structurePropertyListAST & inOperand,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_bool constinArgument1,
                                                       class GALGAS_bool constinArgument2,
                                                       class GALGAS_lstring constinArgument3,
                                                       class GALGAS_structurePropertyInitOptionalExpressionAST constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_bool & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  class GALGAS_lstring & outArgument3,
                                                  class GALGAS_structurePropertyInitOptionalExpressionAST & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_bool & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 class GALGAS_structurePropertyInitOptionalExpressionAST & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_bool & outArgument1,
                                                       class GALGAS_bool & outArgument2,
                                                       class GALGAS_lstring & outArgument3,
                                                       class GALGAS_structurePropertyInitOptionalExpressionAST & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_bool & outArgument1,
                                               class GALGAS_bool & outArgument2,
                                               class GALGAS_lstring & outArgument3,
                                               class GALGAS_structurePropertyInitOptionalExpressionAST & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              class GALGAS_structurePropertyInitOptionalExpressionAST & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_structurePropertyInitOptionalExpressionAST getter_mInitialisationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsConstantAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPublicAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_structurePropertyListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_structurePropertyListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_structurePropertyListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_structurePropertyListAST ;
 
} ; // End of GALGAS_structurePropertyListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_structurePropertyListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_structurePropertyListAST (const GALGAS_structurePropertyListAST & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mPropertyName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsConstant (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsPublic (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mPropertyTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_structurePropertyInitOptionalExpressionAST current_mInitialisation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_structurePropertyListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structurePropertyListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @systemRoutineDeclarationListAST list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_systemRoutineDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_systemRoutineDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_systemRoutineDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mName,
                                                  const class GALGAS_routineKind & in_mRoutineKind,
                                                  const class GALGAS_bool & in_mPublic,
                                                  const class GALGAS_lstringlist & in_mAttributeList,
                                                  const class GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                  const class GALGAS_lstring & in_mReturnTypeName,
                                                  const class GALGAS_instructionListAST & in_mInstructionList,
                                                  const class GALGAS_location & in_mEndOfInstructionListLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_systemRoutineDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_systemRoutineDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_systemRoutineDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_routineKind & inOperand1,
                                                                                          const class GALGAS_bool & inOperand2,
                                                                                          const class GALGAS_lstringlist & inOperand3,
                                                                                          const class GALGAS_routineFormalArgumentListAST & inOperand4,
                                                                                          const class GALGAS_lstring & inOperand5,
                                                                                          const class GALGAS_instructionListAST & inOperand6,
                                                                                          const class GALGAS_location & inOperand7
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_systemRoutineDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_routineKind & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      const class GALGAS_lstringlist & inOperand3,
                                                      const class GALGAS_routineFormalArgumentListAST & inOperand4,
                                                      const class GALGAS_lstring & inOperand5,
                                                      const class GALGAS_instructionListAST & inOperand6,
                                                      const class GALGAS_location & inOperand7
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_systemRoutineDeclarationListAST add_operation (const GALGAS_systemRoutineDeclarationListAST & inOperand,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_routineKind constinArgument1,
                                                       class GALGAS_bool constinArgument2,
                                                       class GALGAS_lstringlist constinArgument3,
                                                       class GALGAS_routineFormalArgumentListAST constinArgument4,
                                                       class GALGAS_lstring constinArgument5,
                                                       class GALGAS_instructionListAST constinArgument6,
                                                       class GALGAS_location constinArgument7,
                                                       class GALGAS_uint constinArgument8,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_routineKind & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  class GALGAS_lstringlist & outArgument3,
                                                  class GALGAS_routineFormalArgumentListAST & outArgument4,
                                                  class GALGAS_lstring & outArgument5,
                                                  class GALGAS_instructionListAST & outArgument6,
                                                  class GALGAS_location & outArgument7,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_routineKind & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 class GALGAS_lstringlist & outArgument3,
                                                 class GALGAS_routineFormalArgumentListAST & outArgument4,
                                                 class GALGAS_lstring & outArgument5,
                                                 class GALGAS_instructionListAST & outArgument6,
                                                 class GALGAS_location & outArgument7,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_routineKind & outArgument1,
                                                       class GALGAS_bool & outArgument2,
                                                       class GALGAS_lstringlist & outArgument3,
                                                       class GALGAS_routineFormalArgumentListAST & outArgument4,
                                                       class GALGAS_lstring & outArgument5,
                                                       class GALGAS_instructionListAST & outArgument6,
                                                       class GALGAS_location & outArgument7,
                                                       class GALGAS_uint constinArgument8,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_routineKind & outArgument1,
                                               class GALGAS_bool & outArgument2,
                                               class GALGAS_lstringlist & outArgument3,
                                               class GALGAS_routineFormalArgumentListAST & outArgument4,
                                               class GALGAS_lstring & outArgument5,
                                               class GALGAS_instructionListAST & outArgument6,
                                               class GALGAS_location & outArgument7,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_routineKind & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              class GALGAS_lstringlist & outArgument3,
                                              class GALGAS_routineFormalArgumentListAST & outArgument4,
                                              class GALGAS_lstring & outArgument5,
                                              class GALGAS_instructionListAST & outArgument6,
                                              class GALGAS_location & outArgument7,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionListLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_mFormalArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPublicAtIndex (const class GALGAS_uint & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReturnTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineKind getter_mRoutineKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_systemRoutineDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_systemRoutineDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_systemRoutineDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_systemRoutineDeclarationListAST ;
 
} ; // End of GALGAS_systemRoutineDeclarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_systemRoutineDeclarationListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_systemRoutineDeclarationListAST (const GALGAS_systemRoutineDeclarationListAST & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
  public : class GALGAS_routineKind current_mRoutineKind (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mPublic (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mAttributeList (LOCATION_ARGS) const ;
  public : class GALGAS_routineFormalArgumentListAST current_mFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mReturnTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfInstructionListLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_systemRoutineDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_systemRoutineDeclarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @structureDeclarationAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_structureDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mStructureName ;
  public : GALGAS_lstringlist mProperty_mAttributeListAST ;
  public : GALGAS_bool mProperty_mGenerateAssignmentRoutine ;
  public : GALGAS_structurePropertyListAST mProperty_mStructurePropertyListAST ;
  public : GALGAS_functionDeclarationListAST mProperty_mFunctionDeclarationListAST ;
  public : GALGAS_systemRoutineDeclarationListAST mProperty_mSystemRoutineListAST ;
  public : GALGAS_guardDeclarationListAST mProperty_mGuardListAST ;

//--- Constructor
  public : cPtr_structureDeclarationAST (const GALGAS_lstring & in_mStructureName,
                                         const GALGAS_lstringlist & in_mAttributeListAST,
                                         const GALGAS_bool & in_mGenerateAssignmentRoutine,
                                         const GALGAS_structurePropertyListAST & in_mStructurePropertyListAST,
                                         const GALGAS_functionDeclarationListAST & in_mFunctionDeclarationListAST,
                                         const GALGAS_systemRoutineDeclarationListAST & in_mSystemRoutineListAST,
                                         const GALGAS_guardDeclarationListAST & in_mGuardListAST
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mStructureName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mAttributeListAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mGenerateAssignmentRoutine (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_structurePropertyListAST getter_mStructurePropertyListAST (LOCATION_ARGS) const ;
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
//                                             @switchInstructionAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_switchInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_switchInstructionAST (void) ;

//---
  public : inline const class cPtr_switchInstructionAST * ptr (void) const { return (const cPtr_switchInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_switchInstructionAST (const cPtr_switchInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_switchInstructionAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_switchInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_expressionAST & inOperand1,
                                                                     const class GALGAS_location & inOperand2,
                                                                     const class GALGAS_switchCaseListAST & inOperand3,
                                                                     const class GALGAS_location & inOperand4
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_switchInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_switch_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_test_5F_expression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_switchCaseListAST getter_mSwitchCaseList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mSwitchExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_switchInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @switchCaseListAST list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_switchCaseListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_switchCaseListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_switchCaseListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstringlist & in_mCaseIdentifiers,
                                                  const class GALGAS_instructionListAST & in_mCaseInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_switchCaseListAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_switchCaseListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_switchCaseListAST constructor_listWithValue (const class GALGAS_lstringlist & inOperand0,
                                                                            const class GALGAS_instructionListAST & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_switchCaseListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstringlist & inOperand0,
                                                      const class GALGAS_instructionListAST & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_switchCaseListAST add_operation (const GALGAS_switchCaseListAST & inOperand,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstringlist constinArgument0,
                                                       class GALGAS_instructionListAST constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstringlist & outArgument0,
                                                  class GALGAS_instructionListAST & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstringlist & outArgument0,
                                                 class GALGAS_instructionListAST & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstringlist & outArgument0,
                                                       class GALGAS_instructionListAST & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstringlist & outArgument0,
                                               class GALGAS_instructionListAST & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstringlist & outArgument0,
                                              class GALGAS_instructionListAST & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mCaseIdentifiersAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mCaseInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_switchCaseListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_switchCaseListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_switchCaseListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_switchCaseListAST ;
 
} ; // End of GALGAS_switchCaseListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_switchCaseListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_switchCaseListAST (const GALGAS_switchCaseListAST & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstringlist current_mCaseIdentifiers (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListAST current_mCaseInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_switchCaseListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchCaseListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @switchInstructionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_switchInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_expressionAST mProperty_mSwitchExpression ;
  public : GALGAS_location mProperty_mEndOf_5F_test_5F_expression ;
  public : GALGAS_switchCaseListAST mProperty_mSwitchCaseList ;
  public : GALGAS_location mProperty_mEndOf_5F_switch_5F_instruction ;

//--- Constructor
  public : cPtr_switchInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                      const GALGAS_expressionAST & in_mSwitchExpression,
                                      const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                                      const GALGAS_switchCaseListAST & in_mSwitchCaseList,
                                      const GALGAS_location & in_mEndOf_5F_switch_5F_instruction
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mSwitchExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_test_5F_expression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_switchCaseListAST getter_mSwitchCaseList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_switch_5F_instruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @syncInstructionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syncInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_syncInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_syncInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_syncInstructionAST * ptr (void) const { return (const cPtr_syncInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_syncInstructionAST (const cPtr_syncInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syncInstructionAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_syncInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_syncInstructionBranchListAST & inOperand1,
                                                                   const class GALGAS_location & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_syncInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_syncInstructionBranchListAST getter_mBranchList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_on_5F_instruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syncInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @syncInstructionBranchListAST list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syncInstructionBranchListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_syncInstructionBranchListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_syncInstructionBranchListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_guardedCommandAST & in_mGuardedCommand,
                                                  const class GALGAS_instructionListAST & in_mInstructionList,
                                                  const class GALGAS_location & in_mEndOfBranch
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syncInstructionBranchListAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_syncInstructionBranchListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_syncInstructionBranchListAST constructor_listWithValue (const class GALGAS_guardedCommandAST & inOperand0,
                                                                                       const class GALGAS_instructionListAST & inOperand1,
                                                                                       const class GALGAS_location & inOperand2
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_syncInstructionBranchListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_guardedCommandAST & inOperand0,
                                                      const class GALGAS_instructionListAST & inOperand1,
                                                      const class GALGAS_location & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_syncInstructionBranchListAST add_operation (const GALGAS_syncInstructionBranchListAST & inOperand,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_guardedCommandAST constinArgument0,
                                                       class GALGAS_instructionListAST constinArgument1,
                                                       class GALGAS_location constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_guardedCommandAST & outArgument0,
                                                  class GALGAS_instructionListAST & outArgument1,
                                                  class GALGAS_location & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_guardedCommandAST & outArgument0,
                                                 class GALGAS_instructionListAST & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_guardedCommandAST & outArgument0,
                                                       class GALGAS_instructionListAST & outArgument1,
                                                       class GALGAS_location & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_guardedCommandAST & outArgument0,
                                               class GALGAS_instructionListAST & outArgument1,
                                               class GALGAS_location & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_guardedCommandAST & outArgument0,
                                              class GALGAS_instructionListAST & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfBranchAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardedCommandAST getter_mGuardedCommandAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syncInstructionBranchListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syncInstructionBranchListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syncInstructionBranchListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_syncInstructionBranchListAST ;
 
} ; // End of GALGAS_syncInstructionBranchListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_syncInstructionBranchListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_syncInstructionBranchListAST (const GALGAS_syncInstructionBranchListAST & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_guardedCommandAST current_mGuardedCommand (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfBranch (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_syncInstructionBranchListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionBranchListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @syncInstructionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_syncInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_syncInstructionBranchListAST mProperty_mBranchList ;
  public : GALGAS_location mProperty_mEndOf_5F_on_5F_instruction ;

//--- Constructor
  public : cPtr_syncInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                    const GALGAS_syncInstructionBranchListAST & in_mBranchList,
                                    const GALGAS_location & in_mEndOf_5F_on_5F_instruction
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_syncInstructionBranchListAST getter_mBranchList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_on_5F_instruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @truncateExpressionAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_truncateExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_truncateExpressionAST (void) ;

//---
  public : inline const class cPtr_truncateExpressionAST * ptr (void) const { return (const cPtr_truncateExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_truncateExpressionAST (const cPtr_truncateExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_truncateExpressionAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_truncateExpressionAST constructor_new (const class GALGAS_expressionAST & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_location & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_truncateExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_truncateExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncateExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @truncateExpressionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_truncateExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_expressionAST mProperty_mExpression ;
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_location mProperty_mEndOfExpression ;

//--- Constructor
  public : cPtr_truncateExpressionAST (const GALGAS_expressionAST & in_mExpression,
                                       const GALGAS_lstring & in_mTypeName,
                                       const GALGAS_location & in_mEndOfExpression
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @typeArrayDeclarationAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typeArrayDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_typeArrayDeclarationAST (void) ;

//---
  public : inline const class cPtr_typeArrayDeclarationAST * ptr (void) const { return (const cPtr_typeArrayDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_typeArrayDeclarationAST (const cPtr_typeArrayDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeArrayDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typeArrayDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_expressionAST & inOperand2,
                                                                        const class GALGAS_location & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeArrayDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAnonymousArrayTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mElementTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mSizeExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mSizeExpressionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeArrayDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeArrayDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @typeArrayDeclarationAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_typeArrayDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mAnonymousArrayTypeName ;
  public : GALGAS_lstring mProperty_mElementTypeName ;
  public : GALGAS_expressionAST mProperty_mSizeExpression ;
  public : GALGAS_location mProperty_mSizeExpressionLocation ;

//--- Constructor
  public : cPtr_typeArrayDeclarationAST (const GALGAS_lstring & in_mAnonymousArrayTypeName,
                                         const GALGAS_lstring & in_mElementTypeName,
                                         const GALGAS_expressionAST & in_mSizeExpression,
                                         const GALGAS_location & in_mSizeExpressionLocation
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mAnonymousArrayTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mElementTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mSizeExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mSizeExpressionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @typeOpaqueDefinitionDeclaration class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typeOpaqueDefinitionDeclaration : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_typeOpaqueDefinitionDeclaration (void) ;

//---
  public : inline const class cPtr_typeOpaqueDefinitionDeclaration * ptr (void) const { return (const cPtr_typeOpaqueDefinitionDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_typeOpaqueDefinitionDeclaration (const cPtr_typeOpaqueDefinitionDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeOpaqueDefinitionDeclaration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typeOpaqueDefinitionDeclaration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_expressionAST & inOperand1,
                                                                                const class GALGAS_location & inOperand2,
                                                                                const class GALGAS_lstringlist & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeOpaqueDefinitionDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAnonymousOpaqueTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mSizeExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mSizeExpressionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeOpaqueDefinitionDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeOpaqueDefinitionDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @typeOpaqueDefinitionDeclaration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_typeOpaqueDefinitionDeclaration : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mAnonymousOpaqueTypeName ;
  public : GALGAS_expressionAST mProperty_mSizeExpression ;
  public : GALGAS_location mProperty_mSizeExpressionLocation ;
  public : GALGAS_lstringlist mProperty_mAttributeList ;

//--- Constructor
  public : cPtr_typeOpaqueDefinitionDeclaration (const GALGAS_lstring & in_mAnonymousOpaqueTypeName,
                                                 const GALGAS_expressionAST & in_mSizeExpression,
                                                 const GALGAS_location & in_mSizeExpressionLocation,
                                                 const GALGAS_lstringlist & in_mAttributeList
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mAnonymousOpaqueTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mSizeExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mSizeExpressionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mAttributeList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @typedConstantCallAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typedConstantCallAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_typedConstantCallAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_typedConstantCallAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_typedConstantCallAST * ptr (void) const { return (const cPtr_typedConstantCallAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_typedConstantCallAST (const cPtr_typedConstantCallAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typedConstantCallAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typedConstantCallAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_primaryInExpressionAccessListAST & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typedConstantCallAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_primaryInExpressionAccessListAST getter_mAccessList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstructorName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionalTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typedConstantCallAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typedConstantCallAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @typedConstantCallAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_typedConstantCallAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mOptionalTypeName ;
  public : GALGAS_lstring mProperty_mConstructorName ;
  public : GALGAS_primaryInExpressionAccessListAST mProperty_mAccessList ;

//--- Constructor
  public : cPtr_typedConstantCallAST (const GALGAS_lstring & in_mOptionalTypeName,
                                      const GALGAS_lstring & in_mConstructorName,
                                      const GALGAS_primaryInExpressionAccessListAST & in_mAccessList
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOptionalTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mConstructorName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_primaryInExpressionAccessListAST getter_mAccessList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @varInstructionAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_varInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_varInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_varInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_varInstructionAST * ptr (void) const { return (const cPtr_varInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_varInstructionAST (const cPtr_varInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varInstructionAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_varInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_lstring & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_varInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @varInstructionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_varInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mVarName ;
  public : GALGAS_lstring mProperty_mTypeName ;

//--- Constructor
  public : cPtr_varInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                   const GALGAS_lstring & in_mVarName,
                                   const GALGAS_lstring & in_mTypeName
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @varInstructionWithAssignmentAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_varInstructionWithAssignmentAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_varInstructionWithAssignmentAST (void) ;

//---
  public : inline const class cPtr_varInstructionWithAssignmentAST * ptr (void) const { return (const cPtr_varInstructionWithAssignmentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_varInstructionWithAssignmentAST (const cPtr_varInstructionWithAssignmentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varInstructionWithAssignmentAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_varInstructionWithAssignmentAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                const class GALGAS_expressionAST & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_varInstructionWithAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionalTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mSourceExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varInstructionWithAssignmentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @varInstructionWithAssignmentAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_varInstructionWithAssignmentAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mVarName ;
  public : GALGAS_lstring mProperty_mOptionalTypeName ;
  public : GALGAS_expressionAST mProperty_mSourceExpression ;

//--- Constructor
  public : cPtr_varInstructionWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mVarName,
                                                 const GALGAS_lstring & in_mOptionalTypeName,
                                                 const GALGAS_expressionAST & in_mSourceExpression
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOptionalTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mSourceExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @whileInstructionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_whileInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_whileInstructionAST (void) ;

//---
  public : inline const class cPtr_whileInstructionAST * ptr (void) const { return (const cPtr_whileInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_whileInstructionAST (const cPtr_whileInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_whileInstructionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_whileInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_expressionAST & inOperand1,
                                                                    const class GALGAS_location & inOperand2,
                                                                    const class GALGAS_instructionListAST & inOperand3,
                                                                    const class GALGAS_location & inOperand4
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_whileInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_test_5F_expression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_while_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mWhileInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_m_5F_while_5F_Expression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_whileInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_whileInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @whileInstructionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_whileInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_expressionAST mProperty_m_5F_while_5F_Expression ;
  public : GALGAS_location mProperty_mEndOf_5F_test_5F_expression ;
  public : GALGAS_instructionListAST mProperty_mWhileInstructionList ;
  public : GALGAS_location mProperty_mEndOf_5F_while_5F_instruction ;

//--- Constructor
  public : cPtr_whileInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                     const GALGAS_expressionAST & in_m_5F_while_5F_Expression,
                                     const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                                     const GALGAS_instructionListAST & in_mWhileInstructionList,
                                     const GALGAS_location & in_mEndOf_5F_while_5F_instruction
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_m_5F_while_5F_Expression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_test_5F_expression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListAST getter_mWhileInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_while_5F_instruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @accessInAssignmentAST enum                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_accessInAssignmentAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_accessInAssignmentAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_property,
    kEnum_arrayAccess
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
  public : static GALGAS_accessInAssignmentAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_accessInAssignmentAST constructor_arrayAccess (const class GALGAS_expressionAST & inOperand0,
                                                                              const class GALGAS_location & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_accessInAssignmentAST constructor_property (const class GALGAS_lstring & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_accessInAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_arrayAccess (class GALGAS_expressionAST & outArgument0,
                                                     class GALGAS_location & outArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_property (class GALGAS_lstring & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isArrayAccess (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isProperty (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_accessInAssignmentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @accessInAssignmentAST enum, associated values                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_accessInAssignmentAST_property : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_accessInAssignmentAST_property (const GALGAS_lstring & inAssociatedValue0
                                                                 COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_accessInAssignmentAST_property (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_accessInAssignmentAST_arrayAccess : public cEnumAssociatedValues {
  public : const GALGAS_expressionAST mAssociatedValue0 ;
  public : const GALGAS_location mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_accessInAssignmentAST_arrayAccess (const GALGAS_expressionAST & inAssociatedValue0,
                                                                    const GALGAS_location & inAssociatedValue1
                                                                    COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_accessInAssignmentAST_arrayAccess (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @controlRegisterBitSlice enum                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_controlRegisterBitSlice : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_controlRegisterBitSlice (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_unusedBits,
    kEnum_namedBit
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
  public : static GALGAS_controlRegisterBitSlice extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_controlRegisterBitSlice constructor_namedBit (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lbigint & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_controlRegisterBitSlice constructor_unusedBits (const class GALGAS_lbigint & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_controlRegisterBitSlice & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_namedBit (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lbigint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_unusedBits (class GALGAS_lbigint & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNamedBit (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUnusedBits (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controlRegisterBitSlice class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterBitSlice ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @controlRegisterBitSlice enum, associated values                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_controlRegisterBitSlice_unusedBits : public cEnumAssociatedValues {
  public : const GALGAS_lbigint mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_controlRegisterBitSlice_unusedBits (const GALGAS_lbigint & inAssociatedValue0
                                                                     COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_controlRegisterBitSlice_unusedBits (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_controlRegisterBitSlice_namedBit : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lbigint mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_controlRegisterBitSlice_namedBit (const GALGAS_lstring & inAssociatedValue0,
                                                                   const GALGAS_lbigint & inAssociatedValue1
                                                                   COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_controlRegisterBitSlice_namedBit (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @controlRegisterKind enum                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_controlRegisterKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_controlRegisterKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_scalar,
    kEnum_registerArray
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
  public : static GALGAS_controlRegisterKind extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_controlRegisterKind constructor_registerArray (const class GALGAS_expressionAST & inOperand0,
                                                                              const class GALGAS_location & inOperand1,
                                                                              const class GALGAS_expressionAST & inOperand2,
                                                                              const class GALGAS_location & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_controlRegisterKind constructor_scalar (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_controlRegisterKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_registerArray (class GALGAS_expressionAST & outArgument0,
                                                       class GALGAS_location & outArgument1,
                                                       class GALGAS_expressionAST & outArgument2,
                                                       class GALGAS_location & outArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRegisterArray (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isScalar (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controlRegisterKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @controlRegisterKind enum, associated values                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_controlRegisterKind_registerArray : public cEnumAssociatedValues {
  public : const GALGAS_expressionAST mAssociatedValue0 ;
  public : const GALGAS_location mAssociatedValue1 ;
  public : const GALGAS_expressionAST mAssociatedValue2 ;
  public : const GALGAS_location mAssociatedValue3 ;

//--- Constructor
  public : cEnumAssociatedValues_controlRegisterKind_registerArray (const GALGAS_expressionAST & inAssociatedValue0,
                                                                    const GALGAS_location & inAssociatedValue1,
                                                                    const GALGAS_expressionAST & inAssociatedValue2,
                                                                    const GALGAS_location & inAssociatedValue3
                                                                    COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_controlRegisterKind_registerArray (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @effectiveArgumentPassingModeAST enum                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_effectiveArgumentPassingModeAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_effectiveArgumentPassingModeAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_input,
    kEnum_inputWithType,
    kEnum_output,
    kEnum_outputInput,
    kEnum_outputInputSelfVariable
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
  public : static GALGAS_effectiveArgumentPassingModeAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_effectiveArgumentPassingModeAST constructor_input (const class GALGAS_lstring & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_effectiveArgumentPassingModeAST constructor_inputWithType (const class GALGAS_bool & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1,
                                                                                          const class GALGAS_lstring & inOperand2
                                                                                          COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_effectiveArgumentPassingModeAST constructor_output (const class GALGAS_expressionAST & inOperand0,
                                                                                   const class GALGAS_location & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_effectiveArgumentPassingModeAST constructor_outputInput (const class GALGAS_lstring & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_effectiveArgumentPassingModeAST constructor_outputInputSelfVariable (const class GALGAS_lstring & inOperand0
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_effectiveArgumentPassingModeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_input (class GALGAS_lstring & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_inputWithType (class GALGAS_bool & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_output (class GALGAS_expressionAST & outArgument0,
                                                class GALGAS_location & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_outputInput (class GALGAS_lstring & outArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_outputInputSelfVariable (class GALGAS_lstring & outArgument0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInput (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInputWithType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOutput (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOutputInput (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOutputInputSelfVariable (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_effectiveArgumentPassingModeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @effectiveArgumentPassingModeAST enum, associated values                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_effectiveArgumentPassingModeAST_input : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_effectiveArgumentPassingModeAST_input (const GALGAS_lstring & inAssociatedValue0
                                                                        COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_effectiveArgumentPassingModeAST_input (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType : public cEnumAssociatedValues {
  public : const GALGAS_bool mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;
  public : const GALGAS_lstring mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType (const GALGAS_bool & inAssociatedValue0,
                                                                                const GALGAS_lstring & inAssociatedValue1,
                                                                                const GALGAS_lstring & inAssociatedValue2
                                                                                COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_effectiveArgumentPassingModeAST_output : public cEnumAssociatedValues {
  public : const GALGAS_expressionAST mAssociatedValue0 ;
  public : const GALGAS_location mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_effectiveArgumentPassingModeAST_output (const GALGAS_expressionAST & inAssociatedValue0,
                                                                         const GALGAS_location & inAssociatedValue1
                                                                         COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_effectiveArgumentPassingModeAST_output (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput (const GALGAS_lstring & inAssociatedValue0
                                                                              COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable (const GALGAS_lstring & inAssociatedValue0
                                                                                          COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @extendStaticListExpressionAST enum                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extendStaticListExpressionAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_extendStaticListExpressionAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_expression,
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
  public : static GALGAS_extendStaticListExpressionAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_extendStaticListExpressionAST constructor_expression (const class GALGAS_expressionAST & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_extendStaticListExpressionAST constructor_function (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_routineFormalArgumentListAST & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_extendStaticListExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_expression (class GALGAS_expressionAST & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_function (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_routineFormalArgumentListAST & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFunction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extendStaticListExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticListExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @routineFormalArgumentListAST list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineFormalArgumentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_routineFormalArgumentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_routineFormalArgumentListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                  const class GALGAS_lstring & in_mSelector,
                                                  const class GALGAS_lstring & in_mFormalArgumentTypeName,
                                                  const class GALGAS_lstring & in_mFormalArgumentName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineFormalArgumentListAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineFormalArgumentListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_routineFormalArgumentListAST constructor_listWithValue (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1,
                                                                                       const class GALGAS_lstring & inOperand2,
                                                                                       const class GALGAS_lstring & inOperand3
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_routineFormalArgumentListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_lstring & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_routineFormalArgumentListAST add_operation (const GALGAS_routineFormalArgumentListAST & inOperand,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_procFormalArgumentPassingMode constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_lstring constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  class GALGAS_lstring & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_lstring & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_lstring & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentPassingMode getter_mFormalArgumentPassingModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_routineFormalArgumentListAST ;
 
} ; // End of GALGAS_routineFormalArgumentListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_routineFormalArgumentListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_routineFormalArgumentListAST (const GALGAS_routineFormalArgumentListAST & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_procFormalArgumentPassingMode current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSelector (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFormalArgumentTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_routineFormalArgumentListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineFormalArgumentListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @extendStaticListExpressionAST enum, associated values                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_extendStaticListExpressionAST_expression : public cEnumAssociatedValues {
  public : const GALGAS_expressionAST mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_extendStaticListExpressionAST_expression (const GALGAS_expressionAST & inAssociatedValue0
                                                                           COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_extendStaticListExpressionAST_expression (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_extendStaticListExpressionAST_function : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_routineFormalArgumentListAST mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_extendStaticListExpressionAST_function (const GALGAS_lstring & inAssociatedValue0,
                                                                         const GALGAS_routineFormalArgumentListAST & inAssociatedValue1
                                                                         COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_extendStaticListExpressionAST_function (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @guardKind enum                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guardKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_guardKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_baseGuard,
    kEnum_convenienceGuard
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
  public : static GALGAS_guardKind extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guardKind constructor_baseGuard (LOCATION_ARGS) ;

  public : static class GALGAS_guardKind constructor_convenienceGuard (const class GALGAS_callInstructionAST & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_guardKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_convenienceGuard (class GALGAS_callInstructionAST & outArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBaseGuard (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isConvenienceGuard (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_guardKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @guardKind enum, associated values                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_guardKind_convenienceGuard : public cEnumAssociatedValues {
  public : const GALGAS_callInstructionAST mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_guardKind_convenienceGuard (const GALGAS_callInstructionAST & inAssociatedValue0
                                                             COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_guardKind_convenienceGuard (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @guardedCommandAST enum                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guardedCommandAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_guardedCommandAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_boolean,
    kEnum_boolAndSync
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
  public : static GALGAS_guardedCommandAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guardedCommandAST constructor_boolAndSync (const class GALGAS_bool & inOperand0,
                                                                          const class GALGAS_expressionAST & inOperand1,
                                                                          const class GALGAS_bool & inOperand2,
                                                                          const class GALGAS_location & inOperand3,
                                                                          const class GALGAS_lbool & inOperand4,
                                                                          const class GALGAS_lstringlist & inOperand5,
                                                                          const class GALGAS_effectiveArgumentListAST & inOperand6
                                                                          COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_guardedCommandAST constructor_boolean (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_expressionAST & inOperand1,
                                                                      const class GALGAS_location & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_guardedCommandAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_boolAndSync (class GALGAS_bool & outArgument0,
                                                     class GALGAS_expressionAST & outArgument1,
                                                     class GALGAS_bool & outArgument2,
                                                     class GALGAS_location & outArgument3,
                                                     class GALGAS_lbool & outArgument4,
                                                     class GALGAS_lstringlist & outArgument5,
                                                     class GALGAS_effectiveArgumentListAST & outArgument6,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_boolean (class GALGAS_bool & outArgument0,
                                                 class GALGAS_expressionAST & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBoolAndSync (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBoolean (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_guardedCommandAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @guardedCommandAST enum, associated values                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_guardedCommandAST_boolean : public cEnumAssociatedValues {
  public : const GALGAS_bool mAssociatedValue0 ;
  public : const GALGAS_expressionAST mAssociatedValue1 ;
  public : const GALGAS_location mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_guardedCommandAST_boolean (const GALGAS_bool & inAssociatedValue0,
                                                            const GALGAS_expressionAST & inAssociatedValue1,
                                                            const GALGAS_location & inAssociatedValue2
                                                            COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_guardedCommandAST_boolean (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_guardedCommandAST_boolAndSync : public cEnumAssociatedValues {
  public : const GALGAS_bool mAssociatedValue0 ;
  public : const GALGAS_expressionAST mAssociatedValue1 ;
  public : const GALGAS_bool mAssociatedValue2 ;
  public : const GALGAS_location mAssociatedValue3 ;
  public : const GALGAS_lbool mAssociatedValue4 ;
  public : const GALGAS_lstringlist mAssociatedValue5 ;
  public : const GALGAS_effectiveArgumentListAST mAssociatedValue6 ;

//--- Constructor
  public : cEnumAssociatedValues_guardedCommandAST_boolAndSync (const GALGAS_bool & inAssociatedValue0,
                                                                const GALGAS_expressionAST & inAssociatedValue1,
                                                                const GALGAS_bool & inAssociatedValue2,
                                                                const GALGAS_location & inAssociatedValue3,
                                                                const GALGAS_lbool & inAssociatedValue4,
                                                                const GALGAS_lstringlist & inAssociatedValue5,
                                                                const GALGAS_effectiveArgumentListAST & inAssociatedValue6
                                                                COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_guardedCommandAST_boolAndSync (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @mode enum                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mode : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_mode (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_userMode,
    kEnum_sectionMode,
    kEnum_serviceMode,
    kEnum_primitiveMode,
    kEnum_guardMode,
    kEnum_panicMode,
    kEnum_bootMode,
    kEnum_initMode,
    kEnum_safeMode,
    kEnum_anyMode
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mode extractObject (const GALGAS_object & inObject,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_mode constructor_anyMode (LOCATION_ARGS) ;

  public : static class GALGAS_mode constructor_bootMode (LOCATION_ARGS) ;

  public : static class GALGAS_mode constructor_guardMode (LOCATION_ARGS) ;

  public : static class GALGAS_mode constructor_initMode (LOCATION_ARGS) ;

  public : static class GALGAS_mode constructor_panicMode (LOCATION_ARGS) ;

  public : static class GALGAS_mode constructor_primitiveMode (LOCATION_ARGS) ;

  public : static class GALGAS_mode constructor_safeMode (LOCATION_ARGS) ;

  public : static class GALGAS_mode constructor_sectionMode (LOCATION_ARGS) ;

  public : static class GALGAS_mode constructor_serviceMode (LOCATION_ARGS) ;

  public : static class GALGAS_mode constructor_userMode (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mode & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAnyMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBootMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isGuardMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInitMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPanicMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrimitiveMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSafeMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSectionMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isServiceMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUserMode (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mode class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mode ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @primaryInExpressionAccessAST enum                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_primaryInExpressionAccessAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_primaryInExpressionAccessAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_property,
    kEnum_arrayAccess,
    kEnum_funcCall
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
  public : static GALGAS_primaryInExpressionAccessAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_primaryInExpressionAccessAST constructor_arrayAccess (const class GALGAS_expressionAST & inOperand0,
                                                                                     const class GALGAS_location & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_primaryInExpressionAccessAST constructor_funcCall (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_effectiveArgumentListAST & inOperand1,
                                                                                  const class GALGAS_location & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_primaryInExpressionAccessAST constructor_property (const class GALGAS_lstring & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_primaryInExpressionAccessAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_arrayAccess (class GALGAS_expressionAST & outArgument0,
                                                     class GALGAS_location & outArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_funcCall (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_effectiveArgumentListAST & outArgument1,
                                                  class GALGAS_location & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_property (class GALGAS_lstring & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isArrayAccess (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFuncCall (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isProperty (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_primaryInExpressionAccessAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @primaryInExpressionAccessAST enum, associated values                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_primaryInExpressionAccessAST_property : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_primaryInExpressionAccessAST_property (const GALGAS_lstring & inAssociatedValue0
                                                                        COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_primaryInExpressionAccessAST_property (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess : public cEnumAssociatedValues {
  public : const GALGAS_expressionAST mAssociatedValue0 ;
  public : const GALGAS_location mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess (const GALGAS_expressionAST & inAssociatedValue0,
                                                                           const GALGAS_location & inAssociatedValue1
                                                                           COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_effectiveArgumentListAST mAssociatedValue1 ;
  public : const GALGAS_location mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall (const GALGAS_lstring & inAssociatedValue0,
                                                                        const GALGAS_effectiveArgumentListAST & inAssociatedValue1,
                                                                        const GALGAS_location & inAssociatedValue2
                                                                        COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @procFormalArgumentPassingMode enum                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_procFormalArgumentPassingMode : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_procFormalArgumentPassingMode (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_input,
    kEnum_output,
    kEnum_inputOutput
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procFormalArgumentPassingMode extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_procFormalArgumentPassingMode constructor_input (LOCATION_ARGS) ;

  public : static class GALGAS_procFormalArgumentPassingMode constructor_inputOutput (LOCATION_ARGS) ;

  public : static class GALGAS_procFormalArgumentPassingMode constructor_output (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_procFormalArgumentPassingMode & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInput (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInputOutput (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOutput (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procFormalArgumentPassingMode class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procFormalArgumentPassingMode ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @routineKind enum                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_routineKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_function,
    kEnum_section,
    kEnum_safe,
    kEnum_service,
    kEnum_primitive
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
  public : static GALGAS_routineKind extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineKind constructor_function (const class GALGAS_mode & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_routineKind constructor_primitive (LOCATION_ARGS) ;

  public : static class GALGAS_routineKind constructor_safe (LOCATION_ARGS) ;

  public : static class GALGAS_routineKind constructor_section (LOCATION_ARGS) ;

  public : static class GALGAS_routineKind constructor_service (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routineKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_function (class GALGAS_mode & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFunction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrimitive (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSafe (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSection (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isService (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @routineKind enum, associated values                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_routineKind_function : public cEnumAssociatedValues {
  public : const GALGAS_mode mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_routineKind_function (const GALGAS_mode & inAssociatedValue0
                                                       COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_routineKind_function (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @staticListPropertyTypeAST enum                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_staticListPropertyTypeAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_staticListPropertyTypeAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_valueType,
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
  public : static GALGAS_staticListPropertyTypeAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_staticListPropertyTypeAST constructor_function (const class GALGAS_mode & inOperand0,
                                                                               const class GALGAS_routineFormalArgumentListAST & inOperand1,
                                                                               const class GALGAS_lstring & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_staticListPropertyTypeAST constructor_valueType (const class GALGAS_lstring & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_staticListPropertyTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_function (class GALGAS_mode & outArgument0,
                                                  class GALGAS_routineFormalArgumentListAST & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_valueType (class GALGAS_lstring & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFunction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isValueType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_staticListPropertyTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListPropertyTypeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @staticListPropertyTypeAST enum, associated values                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_staticListPropertyTypeAST_valueType : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_staticListPropertyTypeAST_valueType (const GALGAS_lstring & inAssociatedValue0
                                                                      COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_staticListPropertyTypeAST_valueType (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_staticListPropertyTypeAST_function : public cEnumAssociatedValues {
  public : const GALGAS_mode mAssociatedValue0 ;
  public : const GALGAS_routineFormalArgumentListAST mAssociatedValue1 ;
  public : const GALGAS_lstring mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_staticListPropertyTypeAST_function (const GALGAS_mode & inAssociatedValue0,
                                                                     const GALGAS_routineFormalArgumentListAST & inAssociatedValue1,
                                                                     const GALGAS_lstring & inAssociatedValue2
                                                                     COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_staticListPropertyTypeAST_function (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @structurePropertyInitOptionalExpressionAST enum                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_structurePropertyInitOptionalExpressionAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_structurePropertyInitOptionalExpressionAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_expression,
    kEnum_noExpression
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
  public : static GALGAS_structurePropertyInitOptionalExpressionAST extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_structurePropertyInitOptionalExpressionAST constructor_expression (const class GALGAS_expressionAST & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_structurePropertyInitOptionalExpressionAST constructor_noExpression (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_expression (class GALGAS_expressionAST & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structurePropertyInitOptionalExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structurePropertyInitOptionalExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         @structurePropertyInitOptionalExpressionAST enum, associated values                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression : public cEnumAssociatedValues {
  public : const GALGAS_expressionAST mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression (const GALGAS_expressionAST & inAssociatedValue0
                                                                                        COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'exportedAttribute'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_exportedAttribute (class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'staticAttribute'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_staticAttribute (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @bootListAST list                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bootListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_bootListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_bootListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_bootAST & in_mBoot
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bootListAST extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_bootListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_bootListAST constructor_listWithValue (const class GALGAS_bootAST & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_bootListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bootAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_bootListAST add_operation (const GALGAS_bootListAST & inOperand,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_bootAST constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_bootAST & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_bootAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_bootAST & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_bootAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_bootAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bootAST getter_mBootAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bootListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bootListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bootListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_bootListAST ;
 
} ; // End of GALGAS_bootListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_bootListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_bootListAST (const GALGAS_bootListAST & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_bootAST current_mBoot (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_bootListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bootListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @checkTargetListAST list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_checkTargetListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_checkTargetListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_checkTargetListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_location & in_mTargetConstructLocation,
                                                  const class GALGAS_lstringlist & in_mAcceptedTargetList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_checkTargetListAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_checkTargetListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_checkTargetListAST constructor_listWithValue (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_lstringlist & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_checkTargetListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_location & inOperand0,
                                                      const class GALGAS_lstringlist & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_checkTargetListAST add_operation (const GALGAS_checkTargetListAST & inOperand,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_location constinArgument0,
                                                       class GALGAS_lstringlist constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_location & outArgument0,
                                                  class GALGAS_lstringlist & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_location & outArgument0,
                                                 class GALGAS_lstringlist & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_location & outArgument0,
                                                       class GALGAS_lstringlist & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_location & outArgument0,
                                               class GALGAS_lstringlist & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_location & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAcceptedTargetListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mTargetConstructLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_checkTargetListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_checkTargetListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_checkTargetListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_checkTargetListAST ;
 
} ; // End of GALGAS_checkTargetListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_checkTargetListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_checkTargetListAST (const GALGAS_checkTargetListAST & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_location current_mTargetConstructLocation (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mAcceptedTargetList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_checkTargetListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkTargetListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @controlRegisterBitSliceList list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_controlRegisterBitSliceList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_controlRegisterBitSliceList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_controlRegisterBitSliceList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_controlRegisterBitSlice & in_mRegisterBitSlice
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controlRegisterBitSliceList extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_controlRegisterBitSliceList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_controlRegisterBitSliceList constructor_listWithValue (const class GALGAS_controlRegisterBitSlice & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_controlRegisterBitSliceList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_controlRegisterBitSlice & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_controlRegisterBitSliceList add_operation (const GALGAS_controlRegisterBitSliceList & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_controlRegisterBitSlice constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_controlRegisterBitSlice & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_controlRegisterBitSlice & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_controlRegisterBitSlice & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_controlRegisterBitSlice & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_controlRegisterBitSlice & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterBitSlice getter_mRegisterBitSliceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterBitSliceList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterBitSliceList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterBitSliceList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_controlRegisterBitSliceList ;
 
} ; // End of GALGAS_controlRegisterBitSliceList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_controlRegisterBitSliceList : public cGenericAbstractEnumerator {
  public : cEnumerator_controlRegisterBitSliceList (const GALGAS_controlRegisterBitSliceList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_controlRegisterBitSlice current_mRegisterBitSlice (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_controlRegisterBitSliceList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterBitSliceList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @controlRegisterNameListAST list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_controlRegisterNameListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_controlRegisterNameListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_controlRegisterNameListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mRegisterName,
                                                  const class GALGAS_controlRegisterKind & in_mControlRegisterKind,
                                                  const class GALGAS_lstringlist & in_mAttributeList,
                                                  const class GALGAS_expressionAST & in_mRegisterAddress,
                                                  const class GALGAS_location & in_mRegisterAddressLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controlRegisterNameListAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_controlRegisterNameListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_controlRegisterNameListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_controlRegisterKind & inOperand1,
                                                                                     const class GALGAS_lstringlist & inOperand2,
                                                                                     const class GALGAS_expressionAST & inOperand3,
                                                                                     const class GALGAS_location & inOperand4
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_controlRegisterNameListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_controlRegisterKind & inOperand1,
                                                      const class GALGAS_lstringlist & inOperand2,
                                                      const class GALGAS_expressionAST & inOperand3,
                                                      const class GALGAS_location & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_controlRegisterNameListAST add_operation (const GALGAS_controlRegisterNameListAST & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_controlRegisterKind constinArgument1,
                                                       class GALGAS_lstringlist constinArgument2,
                                                       class GALGAS_expressionAST constinArgument3,
                                                       class GALGAS_location constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_controlRegisterKind & outArgument1,
                                                  class GALGAS_lstringlist & outArgument2,
                                                  class GALGAS_expressionAST & outArgument3,
                                                  class GALGAS_location & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_controlRegisterKind & outArgument1,
                                                 class GALGAS_lstringlist & outArgument2,
                                                 class GALGAS_expressionAST & outArgument3,
                                                 class GALGAS_location & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_controlRegisterKind & outArgument1,
                                                       class GALGAS_lstringlist & outArgument2,
                                                       class GALGAS_expressionAST & outArgument3,
                                                       class GALGAS_location & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_controlRegisterKind & outArgument1,
                                               class GALGAS_lstringlist & outArgument2,
                                               class GALGAS_expressionAST & outArgument3,
                                               class GALGAS_location & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_controlRegisterKind & outArgument1,
                                              class GALGAS_lstringlist & outArgument2,
                                              class GALGAS_expressionAST & outArgument3,
                                              class GALGAS_location & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterKind getter_mControlRegisterKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mRegisterAddressAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mRegisterAddressLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRegisterNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterNameListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterNameListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterNameListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_controlRegisterNameListAST ;
 
} ; // End of GALGAS_controlRegisterNameListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_controlRegisterNameListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_controlRegisterNameListAST (const GALGAS_controlRegisterNameListAST & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mRegisterName (LOCATION_ARGS) const ;
  public : class GALGAS_controlRegisterKind current_mControlRegisterKind (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mAttributeList (LOCATION_ARGS) const ;
  public : class GALGAS_expressionAST current_mRegisterAddress (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mRegisterAddressLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_controlRegisterNameListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterNameListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @declarationListAST list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_declarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_declarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_declarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractDeclarationAST & in_mDeclaration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_declarationListAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_declarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_declarationListAST constructor_listWithValue (const class GALGAS_abstractDeclarationAST & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_declarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractDeclarationAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_declarationListAST add_operation (const GALGAS_declarationListAST & inOperand,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractDeclarationAST constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractDeclarationAST & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractDeclarationAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractDeclarationAST & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractDeclarationAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractDeclarationAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDeclarationAST getter_mDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_declarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_declarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_declarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_declarationListAST ;
 
} ; // End of GALGAS_declarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_declarationListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_declarationListAST (const GALGAS_declarationListAST & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractDeclarationAST current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_declarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @driverDeclarationListAST list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_driverDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_driverDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_driverDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_driverDeclarationAST & in_mDriver
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_driverDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_driverDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_driverDeclarationListAST constructor_listWithValue (const class GALGAS_driverDeclarationAST & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_driverDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_driverDeclarationAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_driverDeclarationListAST add_operation (const GALGAS_driverDeclarationListAST & inOperand,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_driverDeclarationAST constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_driverDeclarationAST & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_driverDeclarationAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_driverDeclarationAST & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_driverDeclarationAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_driverDeclarationAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_driverDeclarationAST getter_mDriverAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_driverDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_driverDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_driverDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_driverDeclarationListAST ;
 
} ; // End of GALGAS_driverDeclarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_driverDeclarationListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_driverDeclarationListAST (const GALGAS_driverDeclarationListAST & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_driverDeclarationAST current_mDriver (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_driverDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverDeclarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @driverInstanciationArgumentListAST list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_driverInstanciationArgumentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_driverInstanciationArgumentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_driverInstanciationArgumentListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mSelector,
                                                  const class GALGAS_expressionAST & in_mExpression
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_driverInstanciationArgumentListAST extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_driverInstanciationArgumentListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_driverInstanciationArgumentListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_expressionAST & inOperand1
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_driverInstanciationArgumentListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_expressionAST & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_driverInstanciationArgumentListAST add_operation (const GALGAS_driverInstanciationArgumentListAST & inOperand,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_expressionAST constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_expressionAST & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_expressionAST & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_expressionAST & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_expressionAST & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_expressionAST & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_driverInstanciationArgumentListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_driverInstanciationArgumentListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_driverInstanciationArgumentListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_driverInstanciationArgumentListAST ;
 
} ; // End of GALGAS_driverInstanciationArgumentListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_driverInstanciationArgumentListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_driverInstanciationArgumentListAST (const GALGAS_driverInstanciationArgumentListAST & inEnumeratedObject,
                                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mSelector (LOCATION_ARGS) const ;
  public : class GALGAS_expressionAST current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_driverInstanciationArgumentListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @driverInstanciationListAST list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_driverInstanciationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_driverInstanciationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_driverInstanciationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mDriverName,
                                                  const class GALGAS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_driverInstanciationListAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_driverInstanciationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_driverInstanciationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_driverInstanciationArgumentListAST & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_driverInstanciationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_driverInstanciationArgumentListAST & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_driverInstanciationListAST add_operation (const GALGAS_driverInstanciationListAST & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_driverInstanciationArgumentListAST constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_driverInstanciationArgumentListAST & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_driverInstanciationArgumentListAST & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_driverInstanciationArgumentListAST & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_driverInstanciationArgumentListAST & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_driverInstanciationArgumentListAST & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_driverInstanciationArgumentListAST getter_mDriverInstanciationArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDriverNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_driverInstanciationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_driverInstanciationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_driverInstanciationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_driverInstanciationListAST ;
 
} ; // End of GALGAS_driverInstanciationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_driverInstanciationListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_driverInstanciationListAST (const GALGAS_driverInstanciationListAST & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mDriverName (LOCATION_ARGS) const ;
  public : class GALGAS_driverInstanciationArgumentListAST current_mDriverInstanciationArgumentList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_driverInstanciationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverInstanciationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @driverPropertyListAST list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_driverPropertyListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_driverPropertyListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_driverPropertyListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mPropertyName,
                                                  const class GALGAS_bool & in_mIsConstant,
                                                  const class GALGAS_lstring & in_mTypeName,
                                                  const class GALGAS_structurePropertyInitOptionalExpressionAST & in_mOptionalExpression
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_driverPropertyListAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_driverPropertyListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_driverPropertyListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_bool & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                const class GALGAS_structurePropertyInitOptionalExpressionAST & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_driverPropertyListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bool & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_structurePropertyInitOptionalExpressionAST & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_driverPropertyListAST add_operation (const GALGAS_driverPropertyListAST & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_bool constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_structurePropertyInitOptionalExpressionAST constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_bool & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  class GALGAS_structurePropertyInitOptionalExpressionAST & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_bool & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_structurePropertyInitOptionalExpressionAST & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_bool & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_structurePropertyInitOptionalExpressionAST & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_bool & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_structurePropertyInitOptionalExpressionAST & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_structurePropertyInitOptionalExpressionAST & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsConstantAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_structurePropertyInitOptionalExpressionAST getter_mOptionalExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_driverPropertyListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_driverPropertyListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_driverPropertyListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_driverPropertyListAST ;
 
} ; // End of GALGAS_driverPropertyListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_driverPropertyListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_driverPropertyListAST (const GALGAS_driverPropertyListAST & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mPropertyName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsConstant (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_structurePropertyInitOptionalExpressionAST current_mOptionalExpression (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_driverPropertyListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverPropertyListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @extendStaticArrayDeclarationAST list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extendStaticArrayDeclarationAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_extendStaticArrayDeclarationAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_extendStaticArrayDeclarationAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mStaticListName,
                                                  const class GALGAS_extendStaticListElementListAST & in_mExpressions
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extendStaticArrayDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_extendStaticArrayDeclarationAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_extendStaticArrayDeclarationAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_extendStaticListElementListAST & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_extendStaticArrayDeclarationAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_extendStaticListElementListAST & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_extendStaticArrayDeclarationAST add_operation (const GALGAS_extendStaticArrayDeclarationAST & inOperand,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_extendStaticListElementListAST constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_extendStaticListElementListAST & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_extendStaticListElementListAST & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_extendStaticListElementListAST & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_extendStaticListElementListAST & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_extendStaticListElementListAST & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_extendStaticListElementListAST getter_mExpressionsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStaticListNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extendStaticArrayDeclarationAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extendStaticArrayDeclarationAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extendStaticArrayDeclarationAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_extendStaticArrayDeclarationAST ;
 
} ; // End of GALGAS_extendStaticArrayDeclarationAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_extendStaticArrayDeclarationAST : public cGenericAbstractEnumerator {
  public : cEnumerator_extendStaticArrayDeclarationAST (const GALGAS_extendStaticArrayDeclarationAST & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mStaticListName (LOCATION_ARGS) const ;
  public : class GALGAS_extendStaticListElementListAST current_mExpressions (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_extendStaticArrayDeclarationAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @extendStaticListElementListAST list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extendStaticListElementListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_extendStaticListElementListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_extendStaticListElementListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_extendStaticListExpressionAST & in_mExpression,
                                                  const class GALGAS_location & in_mEndOfExpression
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extendStaticListElementListAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_extendStaticListElementListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_extendStaticListElementListAST constructor_listWithValue (const class GALGAS_extendStaticListExpressionAST & inOperand0,
                                                                                         const class GALGAS_location & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_extendStaticListElementListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_extendStaticListExpressionAST & inOperand0,
                                                      const class GALGAS_location & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_extendStaticListElementListAST add_operation (const GALGAS_extendStaticListElementListAST & inOperand,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_extendStaticListExpressionAST constinArgument0,
                                                       class GALGAS_location constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_extendStaticListExpressionAST & outArgument0,
                                                  class GALGAS_location & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_extendStaticListExpressionAST & outArgument0,
                                                 class GALGAS_location & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_extendStaticListExpressionAST & outArgument0,
                                                       class GALGAS_location & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_extendStaticListExpressionAST & outArgument0,
                                               class GALGAS_location & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_extendStaticListExpressionAST & outArgument0,
                                              class GALGAS_location & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extendStaticListExpressionAST getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extendStaticListElementListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extendStaticListElementListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extendStaticListElementListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_extendStaticListElementListAST ;
 
} ; // End of GALGAS_extendStaticListElementListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_extendStaticListElementListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_extendStaticListElementListAST (const GALGAS_extendStaticListElementListAST & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_extendStaticListExpressionAST current_mExpression (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfExpression (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_extendStaticListElementListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticListElementListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @extensionDeclarationListAST list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extensionDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_extensionDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_extensionDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mTypeName,
                                                  const class GALGAS_functionDeclarationListAST & in_mProcedureDeclarationListAST,
                                                  const class GALGAS_structurePropertyListAST & in_mPropertyList,
                                                  const class GALGAS_systemRoutineDeclarationListAST & in_mSVCListAST,
                                                  const class GALGAS_guardDeclarationListAST & in_mGuardListAST
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_extensionDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_extensionDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_functionDeclarationListAST & inOperand1,
                                                                                      const class GALGAS_structurePropertyListAST & inOperand2,
                                                                                      const class GALGAS_systemRoutineDeclarationListAST & inOperand3,
                                                                                      const class GALGAS_guardDeclarationListAST & inOperand4
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_extensionDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_functionDeclarationListAST & inOperand1,
                                                      const class GALGAS_structurePropertyListAST & inOperand2,
                                                      const class GALGAS_systemRoutineDeclarationListAST & inOperand3,
                                                      const class GALGAS_guardDeclarationListAST & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_extensionDeclarationListAST add_operation (const GALGAS_extensionDeclarationListAST & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_functionDeclarationListAST constinArgument1,
                                                       class GALGAS_structurePropertyListAST constinArgument2,
                                                       class GALGAS_systemRoutineDeclarationListAST constinArgument3,
                                                       class GALGAS_guardDeclarationListAST constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_functionDeclarationListAST & outArgument1,
                                                  class GALGAS_structurePropertyListAST & outArgument2,
                                                  class GALGAS_systemRoutineDeclarationListAST & outArgument3,
                                                  class GALGAS_guardDeclarationListAST & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_functionDeclarationListAST & outArgument1,
                                                 class GALGAS_structurePropertyListAST & outArgument2,
                                                 class GALGAS_systemRoutineDeclarationListAST & outArgument3,
                                                 class GALGAS_guardDeclarationListAST & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_functionDeclarationListAST & outArgument1,
                                                       class GALGAS_structurePropertyListAST & outArgument2,
                                                       class GALGAS_systemRoutineDeclarationListAST & outArgument3,
                                                       class GALGAS_guardDeclarationListAST & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_functionDeclarationListAST & outArgument1,
                                               class GALGAS_structurePropertyListAST & outArgument2,
                                               class GALGAS_systemRoutineDeclarationListAST & outArgument3,
                                               class GALGAS_guardDeclarationListAST & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_functionDeclarationListAST & outArgument1,
                                              class GALGAS_structurePropertyListAST & outArgument2,
                                              class GALGAS_systemRoutineDeclarationListAST & outArgument3,
                                              class GALGAS_guardDeclarationListAST & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_guardDeclarationListAST getter_mGuardListASTAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDeclarationListAST getter_mProcedureDeclarationListASTAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_structurePropertyListAST getter_mPropertyListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_systemRoutineDeclarationListAST getter_mSVCListASTAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extensionDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extensionDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extensionDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_extensionDeclarationListAST ;
 
} ; // End of GALGAS_extensionDeclarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_extensionDeclarationListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_extensionDeclarationListAST (const GALGAS_extensionDeclarationListAST & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_functionDeclarationListAST current_mProcedureDeclarationListAST (LOCATION_ARGS) const ;
  public : class GALGAS_structurePropertyListAST current_mPropertyList (LOCATION_ARGS) const ;
  public : class GALGAS_systemRoutineDeclarationListAST current_mSVCListAST (LOCATION_ARGS) const ;
  public : class GALGAS_guardDeclarationListAST current_mGuardListAST (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_extensionDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionDeclarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @externProcedureDeclarationListAST list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externProcedureDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_externProcedureDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_externProcedureDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mExternProcedureName,
                                                  const class GALGAS_mode & in_mMode,
                                                  const class GALGAS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                  const class GALGAS_lstring & in_mReturnTypeName,
                                                  const class GALGAS_lstring & in_mRoutineNameForGeneration,
                                                  const class GALGAS_location & in_mEndOfProcLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externProcedureDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externProcedureDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_externProcedureDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_mode & inOperand1,
                                                                                            const class GALGAS_routineFormalArgumentListAST & inOperand2,
                                                                                            const class GALGAS_lstring & inOperand3,
                                                                                            const class GALGAS_lstring & inOperand4,
                                                                                            const class GALGAS_location & inOperand5
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_externProcedureDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_mode & inOperand1,
                                                      const class GALGAS_routineFormalArgumentListAST & inOperand2,
                                                      const class GALGAS_lstring & inOperand3,
                                                      const class GALGAS_lstring & inOperand4,
                                                      const class GALGAS_location & inOperand5
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_externProcedureDeclarationListAST add_operation (const GALGAS_externProcedureDeclarationListAST & inOperand,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_mode constinArgument1,
                                                       class GALGAS_routineFormalArgumentListAST constinArgument2,
                                                       class GALGAS_lstring constinArgument3,
                                                       class GALGAS_lstring constinArgument4,
                                                       class GALGAS_location constinArgument5,
                                                       class GALGAS_uint constinArgument6,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_mode & outArgument1,
                                                  class GALGAS_routineFormalArgumentListAST & outArgument2,
                                                  class GALGAS_lstring & outArgument3,
                                                  class GALGAS_lstring & outArgument4,
                                                  class GALGAS_location & outArgument5,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_mode & outArgument1,
                                                 class GALGAS_routineFormalArgumentListAST & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 class GALGAS_lstring & outArgument4,
                                                 class GALGAS_location & outArgument5,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_mode & outArgument1,
                                                       class GALGAS_routineFormalArgumentListAST & outArgument2,
                                                       class GALGAS_lstring & outArgument3,
                                                       class GALGAS_lstring & outArgument4,
                                                       class GALGAS_location & outArgument5,
                                                       class GALGAS_uint constinArgument6,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_mode & outArgument1,
                                               class GALGAS_routineFormalArgumentListAST & outArgument2,
                                               class GALGAS_lstring & outArgument3,
                                               class GALGAS_lstring & outArgument4,
                                               class GALGAS_location & outArgument5,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_mode & outArgument1,
                                              class GALGAS_routineFormalArgumentListAST & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              class GALGAS_lstring & outArgument4,
                                              class GALGAS_location & outArgument5,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfProcLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExternProcedureNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_mProcFormalArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReturnTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineNameForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externProcedureDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externProcedureDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externProcedureDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_externProcedureDeclarationListAST ;
 
} ; // End of GALGAS_externProcedureDeclarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_externProcedureDeclarationListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_externProcedureDeclarationListAST (const GALGAS_externProcedureDeclarationListAST & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mExternProcedureName (LOCATION_ARGS) const ;
  public : class GALGAS_mode current_mMode (LOCATION_ARGS) const ;
  public : class GALGAS_routineFormalArgumentListAST current_mProcFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mReturnTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mRoutineNameForGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfProcLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_externProcedureDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureDeclarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @initListAST list                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_initListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_initListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_initListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_initAST & in_mInit
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_initListAST extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_initListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_initListAST constructor_listWithValue (const class GALGAS_initAST & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_initListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_initAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_initListAST add_operation (const GALGAS_initListAST & inOperand,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_initAST constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_initAST & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_initAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_initAST & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_initAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_initAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_initAST getter_mInitAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_initListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_initListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_initListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_initListAST ;
 
} ; // End of GALGAS_initListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_initListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_initListAST (const GALGAS_initListAST & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_initAST current_mInit (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_initListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @isrDeclarationListAST list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_isrDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_isrDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_isrDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mISRName,
                                                  const class GALGAS_mode & in_mMode,
                                                  const class GALGAS_lstring & in_mModuleName,
                                                  const class GALGAS_instructionListAST & in_mISRInstructionList,
                                                  const class GALGAS_location & in_mEndOfISRDeclaration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_isrDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_isrDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_isrDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_mode & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                const class GALGAS_instructionListAST & inOperand3,
                                                                                const class GALGAS_location & inOperand4
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_isrDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_mode & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_instructionListAST & inOperand3,
                                                      const class GALGAS_location & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_isrDeclarationListAST add_operation (const GALGAS_isrDeclarationListAST & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_mode constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_instructionListAST constinArgument3,
                                                       class GALGAS_location constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_mode & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  class GALGAS_instructionListAST & outArgument3,
                                                  class GALGAS_location & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_mode & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_instructionListAST & outArgument3,
                                                 class GALGAS_location & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_mode & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_instructionListAST & outArgument3,
                                                       class GALGAS_location & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_mode & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_instructionListAST & outArgument3,
                                               class GALGAS_location & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_mode & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_instructionListAST & outArgument3,
                                              class GALGAS_location & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfISRDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mISRInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mISRNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mModuleNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_isrDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_isrDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_isrDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_isrDeclarationListAST ;
 
} ; // End of GALGAS_isrDeclarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_isrDeclarationListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_isrDeclarationListAST (const GALGAS_isrDeclarationListAST & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mISRName (LOCATION_ARGS) const ;
  public : class GALGAS_mode current_mMode (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mModuleName (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListAST current_mISRInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfISRDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_isrDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_isrDeclarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @requiredProcedureDeclarationListAST list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_requiredProcedureDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_requiredProcedureDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_requiredProcedureDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mName,
                                                  const class GALGAS_mode & in_mExecutionMode,
                                                  const class GALGAS_bool & in_mIsExported,
                                                  const class GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                  const class GALGAS_location & in_mEndOfProcLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_requiredProcedureDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_requiredProcedureDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_requiredProcedureDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_mode & inOperand1,
                                                                                              const class GALGAS_bool & inOperand2,
                                                                                              const class GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                                              const class GALGAS_location & inOperand4
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_requiredProcedureDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_mode & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      const class GALGAS_routineFormalArgumentListAST & inOperand3,
                                                      const class GALGAS_location & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_requiredProcedureDeclarationListAST add_operation (const GALGAS_requiredProcedureDeclarationListAST & inOperand,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_mode constinArgument1,
                                                       class GALGAS_bool constinArgument2,
                                                       class GALGAS_routineFormalArgumentListAST constinArgument3,
                                                       class GALGAS_location constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_mode & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  class GALGAS_routineFormalArgumentListAST & outArgument3,
                                                  class GALGAS_location & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_mode & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 class GALGAS_routineFormalArgumentListAST & outArgument3,
                                                 class GALGAS_location & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_mode & outArgument1,
                                                       class GALGAS_bool & outArgument2,
                                                       class GALGAS_routineFormalArgumentListAST & outArgument3,
                                                       class GALGAS_location & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_mode & outArgument1,
                                               class GALGAS_bool & outArgument2,
                                               class GALGAS_routineFormalArgumentListAST & outArgument3,
                                               class GALGAS_location & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_mode & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              class GALGAS_routineFormalArgumentListAST & outArgument3,
                                              class GALGAS_location & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfProcLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mExecutionModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_mFormalArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsExportedAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_requiredProcedureDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_requiredProcedureDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_requiredProcedureDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_requiredProcedureDeclarationListAST ;
 
} ; // End of GALGAS_requiredProcedureDeclarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_requiredProcedureDeclarationListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_requiredProcedureDeclarationListAST (const GALGAS_requiredProcedureDeclarationListAST & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
  public : class GALGAS_mode current_mExecutionMode (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsExported (LOCATION_ARGS) const ;
  public : class GALGAS_routineFormalArgumentListAST current_mFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfProcLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_requiredProcedureDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_requiredProcedureDeclarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @taskEntryListAST list                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_taskEntryListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_taskEntryListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_taskEntryListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mEntryName,
                                                  const class GALGAS_routineFormalArgumentListAST & in_mEntryFormalArgumentList,
                                                  const class GALGAS_lstring & in_mEntryReturnTypeName,
                                                  const class GALGAS_lstringlist & in_mEntryPath
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_taskEntryListAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_taskEntryListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_taskEntryListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_routineFormalArgumentListAST & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2,
                                                                           const class GALGAS_lstringlist & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_taskEntryListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_routineFormalArgumentListAST & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_lstringlist & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_taskEntryListAST add_operation (const GALGAS_taskEntryListAST & inOperand,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_routineFormalArgumentListAST constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_lstringlist constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_routineFormalArgumentListAST & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  class GALGAS_lstringlist & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_routineFormalArgumentListAST & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_lstringlist & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_routineFormalArgumentListAST & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_lstringlist & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_routineFormalArgumentListAST & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_lstringlist & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_routineFormalArgumentListAST & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_lstringlist & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_mEntryFormalArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEntryNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mEntryPathAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEntryReturnTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskEntryListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskEntryListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskEntryListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_taskEntryListAST ;
 
} ; // End of GALGAS_taskEntryListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_taskEntryListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_taskEntryListAST (const GALGAS_taskEntryListAST & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mEntryName (LOCATION_ARGS) const ;
  public : class GALGAS_routineFormalArgumentListAST current_mEntryFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mEntryReturnTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mEntryPath (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_taskEntryListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskEntryListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @taskGuardListAST list                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_taskGuardListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_taskGuardListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_taskGuardListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mGuardName,
                                                  const class GALGAS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                                  const class GALGAS_lstringlist & in_mGuardPath
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_taskGuardListAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_taskGuardListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_taskGuardListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_routineFormalArgumentListAST & inOperand1,
                                                                           const class GALGAS_lstringlist & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_taskGuardListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_routineFormalArgumentListAST & inOperand1,
                                                      const class GALGAS_lstringlist & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_taskGuardListAST add_operation (const GALGAS_taskGuardListAST & inOperand,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_routineFormalArgumentListAST constinArgument1,
                                                       class GALGAS_lstringlist constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_routineFormalArgumentListAST & outArgument1,
                                                  class GALGAS_lstringlist & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_routineFormalArgumentListAST & outArgument1,
                                                 class GALGAS_lstringlist & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_routineFormalArgumentListAST & outArgument1,
                                                       class GALGAS_lstringlist & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_routineFormalArgumentListAST & outArgument1,
                                               class GALGAS_lstringlist & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_routineFormalArgumentListAST & outArgument1,
                                              class GALGAS_lstringlist & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_mGuardFormalArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGuardNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mGuardPathAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskGuardListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskGuardListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskGuardListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_taskGuardListAST ;
 
} ; // End of GALGAS_taskGuardListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_taskGuardListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_taskGuardListAST (const GALGAS_taskGuardListAST & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mGuardName (LOCATION_ARGS) const ;
  public : class GALGAS_routineFormalArgumentListAST current_mGuardFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mGuardPath (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_taskGuardListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskGuardListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @taskListAST list                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_taskListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_taskListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_taskListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mTaskName,
                                                  const class GALGAS_lbigint & in_mPriority,
                                                  const class GALGAS_lbigint & in_mStackSize,
                                                  const class GALGAS_structurePropertyListAST & in_mVarList,
                                                  const class GALGAS_functionDeclarationListAST & in_mTaskFunctionList,
                                                  const class GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                  const class GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                  const class GALGAS_taskEntryListAST & in_mTaskEntryListAST,
                                                  const class GALGAS_taskGuardListAST & in_mTaskGuardListAST,
                                                  const class GALGAS_location & in_mEndOfTaskDeclaration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_taskListAST extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_taskListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_taskListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_lbigint & inOperand1,
                                                                      const class GALGAS_lbigint & inOperand2,
                                                                      const class GALGAS_structurePropertyListAST & inOperand3,
                                                                      const class GALGAS_functionDeclarationListAST & inOperand4,
                                                                      const class GALGAS_taskSetupListAST & inOperand5,
                                                                      const class GALGAS_syncInstructionBranchListAST & inOperand6,
                                                                      const class GALGAS_taskEntryListAST & inOperand7,
                                                                      const class GALGAS_taskGuardListAST & inOperand8,
                                                                      const class GALGAS_location & inOperand9
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_taskListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lbigint & inOperand1,
                                                      const class GALGAS_lbigint & inOperand2,
                                                      const class GALGAS_structurePropertyListAST & inOperand3,
                                                      const class GALGAS_functionDeclarationListAST & inOperand4,
                                                      const class GALGAS_taskSetupListAST & inOperand5,
                                                      const class GALGAS_syncInstructionBranchListAST & inOperand6,
                                                      const class GALGAS_taskEntryListAST & inOperand7,
                                                      const class GALGAS_taskGuardListAST & inOperand8,
                                                      const class GALGAS_location & inOperand9
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_taskListAST add_operation (const GALGAS_taskListAST & inOperand,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lbigint constinArgument1,
                                                       class GALGAS_lbigint constinArgument2,
                                                       class GALGAS_structurePropertyListAST constinArgument3,
                                                       class GALGAS_functionDeclarationListAST constinArgument4,
                                                       class GALGAS_taskSetupListAST constinArgument5,
                                                       class GALGAS_syncInstructionBranchListAST constinArgument6,
                                                       class GALGAS_taskEntryListAST constinArgument7,
                                                       class GALGAS_taskGuardListAST constinArgument8,
                                                       class GALGAS_location constinArgument9,
                                                       class GALGAS_uint constinArgument10,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lbigint & outArgument1,
                                                  class GALGAS_lbigint & outArgument2,
                                                  class GALGAS_structurePropertyListAST & outArgument3,
                                                  class GALGAS_functionDeclarationListAST & outArgument4,
                                                  class GALGAS_taskSetupListAST & outArgument5,
                                                  class GALGAS_syncInstructionBranchListAST & outArgument6,
                                                  class GALGAS_taskEntryListAST & outArgument7,
                                                  class GALGAS_taskGuardListAST & outArgument8,
                                                  class GALGAS_location & outArgument9,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lbigint & outArgument1,
                                                 class GALGAS_lbigint & outArgument2,
                                                 class GALGAS_structurePropertyListAST & outArgument3,
                                                 class GALGAS_functionDeclarationListAST & outArgument4,
                                                 class GALGAS_taskSetupListAST & outArgument5,
                                                 class GALGAS_syncInstructionBranchListAST & outArgument6,
                                                 class GALGAS_taskEntryListAST & outArgument7,
                                                 class GALGAS_taskGuardListAST & outArgument8,
                                                 class GALGAS_location & outArgument9,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lbigint & outArgument1,
                                                       class GALGAS_lbigint & outArgument2,
                                                       class GALGAS_structurePropertyListAST & outArgument3,
                                                       class GALGAS_functionDeclarationListAST & outArgument4,
                                                       class GALGAS_taskSetupListAST & outArgument5,
                                                       class GALGAS_syncInstructionBranchListAST & outArgument6,
                                                       class GALGAS_taskEntryListAST & outArgument7,
                                                       class GALGAS_taskGuardListAST & outArgument8,
                                                       class GALGAS_location & outArgument9,
                                                       class GALGAS_uint constinArgument10,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lbigint & outArgument1,
                                               class GALGAS_lbigint & outArgument2,
                                               class GALGAS_structurePropertyListAST & outArgument3,
                                               class GALGAS_functionDeclarationListAST & outArgument4,
                                               class GALGAS_taskSetupListAST & outArgument5,
                                               class GALGAS_syncInstructionBranchListAST & outArgument6,
                                               class GALGAS_taskEntryListAST & outArgument7,
                                               class GALGAS_taskGuardListAST & outArgument8,
                                               class GALGAS_location & outArgument9,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lbigint & outArgument1,
                                              class GALGAS_lbigint & outArgument2,
                                              class GALGAS_structurePropertyListAST & outArgument3,
                                              class GALGAS_functionDeclarationListAST & outArgument4,
                                              class GALGAS_taskSetupListAST & outArgument5,
                                              class GALGAS_syncInstructionBranchListAST & outArgument6,
                                              class GALGAS_taskEntryListAST & outArgument7,
                                              class GALGAS_taskGuardListAST & outArgument8,
                                              class GALGAS_location & outArgument9,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfTaskDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syncInstructionBranchListAST getter_mGuardedCommandListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mPriorityAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mStackSizeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskEntryListAST getter_mTaskEntryListASTAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDeclarationListAST getter_mTaskFunctionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskGuardListAST getter_mTaskGuardListASTAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTaskNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskSetupListAST getter_mTaskSetupListASTAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_structurePropertyListAST getter_mVarListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_taskListAST ;
 
} ; // End of GALGAS_taskListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_taskListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_taskListAST (const GALGAS_taskListAST & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mTaskName (LOCATION_ARGS) const ;
  public : class GALGAS_lbigint current_mPriority (LOCATION_ARGS) const ;
  public : class GALGAS_lbigint current_mStackSize (LOCATION_ARGS) const ;
  public : class GALGAS_structurePropertyListAST current_mVarList (LOCATION_ARGS) const ;
  public : class GALGAS_functionDeclarationListAST current_mTaskFunctionList (LOCATION_ARGS) const ;
  public : class GALGAS_taskSetupListAST current_mTaskSetupListAST (LOCATION_ARGS) const ;
  public : class GALGAS_syncInstructionBranchListAST current_mGuardedCommandList (LOCATION_ARGS) const ;
  public : class GALGAS_taskEntryListAST current_mTaskEntryListAST (LOCATION_ARGS) const ;
  public : class GALGAS_taskGuardListAST current_mTaskGuardListAST (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfTaskDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_taskListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @taskSetupListAST list                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_taskSetupListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_taskSetupListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_taskSetupListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lbigint & in_mTaskSetupPriority,
                                                  const class GALGAS_instructionListAST & in_mTaskSetupInstructionList,
                                                  const class GALGAS_location & in_mEndOfTaskSetupDeclaration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_taskSetupListAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_taskSetupListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_taskSetupListAST constructor_listWithValue (const class GALGAS_lbigint & inOperand0,
                                                                           const class GALGAS_instructionListAST & inOperand1,
                                                                           const class GALGAS_location & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_taskSetupListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lbigint & inOperand0,
                                                      const class GALGAS_instructionListAST & inOperand1,
                                                      const class GALGAS_location & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_taskSetupListAST add_operation (const GALGAS_taskSetupListAST & inOperand,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lbigint constinArgument0,
                                                       class GALGAS_instructionListAST constinArgument1,
                                                       class GALGAS_location constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lbigint & outArgument0,
                                                  class GALGAS_instructionListAST & outArgument1,
                                                  class GALGAS_location & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lbigint & outArgument0,
                                                 class GALGAS_instructionListAST & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lbigint & outArgument0,
                                                       class GALGAS_instructionListAST & outArgument1,
                                                       class GALGAS_location & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lbigint & outArgument0,
                                               class GALGAS_instructionListAST & outArgument1,
                                               class GALGAS_location & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lbigint & outArgument0,
                                              class GALGAS_instructionListAST & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfTaskSetupDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mTaskSetupInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mTaskSetupPriorityAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskSetupListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskSetupListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskSetupListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_taskSetupListAST ;
 
} ; // End of GALGAS_taskSetupListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_taskSetupListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_taskSetupListAST (const GALGAS_taskSetupListAST & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lbigint current_mTaskSetupPriority (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListAST current_mTaskSetupInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfTaskSetupDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_taskSetupListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSetupListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @ast struct                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ast : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_declarationListAST mProperty_mDeclarationListAST ;

  public : GALGAS_extensionDeclarationListAST mProperty_mExtensionDeclarationListAST ;

  public : GALGAS_extendStaticArrayDeclarationAST mProperty_mExtendStaticArrayDeclarationAST ;

  public : GALGAS_functionDeclarationListAST mProperty_mStandAloneFunctionDeclarationListAST ;

  public : GALGAS_requiredProcedureDeclarationListAST mProperty_mRequiredProcListAST ;

  public : GALGAS_externProcedureDeclarationListAST mProperty_mExternProcListAST ;

  public : GALGAS_isrDeclarationListAST mProperty_mISRDeclarationListAST ;

  public : GALGAS_systemRoutineDeclarationListAST mProperty_mStandAloneSystemRoutineListAST ;

  public : GALGAS_lstringlist mProperty_mTargetListAST ;

  public : GALGAS_taskListAST mProperty_mTaskListAST ;

  public : GALGAS_checkTargetListAST mProperty_mCheckTargetListAST ;

  public : GALGAS_driverDeclarationListAST mProperty_mDriverDeclarationListAST ;

  public : GALGAS_driverInstanciationListAST mProperty_mRequiredDriverListAST ;

  public : GALGAS_uint mProperty_mTypeDeclarationIndex ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ast constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_ast (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_ast (void) ;

//--------------------------------- Native constructor
  public : GALGAS_ast (const GALGAS_declarationListAST & in_mDeclarationListAST,
                       const GALGAS_extensionDeclarationListAST & in_mExtensionDeclarationListAST,
                       const GALGAS_extendStaticArrayDeclarationAST & in_mExtendStaticArrayDeclarationAST,
                       const GALGAS_functionDeclarationListAST & in_mStandAloneFunctionDeclarationListAST,
                       const GALGAS_requiredProcedureDeclarationListAST & in_mRequiredProcListAST,
                       const GALGAS_externProcedureDeclarationListAST & in_mExternProcListAST,
                       const GALGAS_isrDeclarationListAST & in_mISRDeclarationListAST,
                       const GALGAS_systemRoutineDeclarationListAST & in_mStandAloneSystemRoutineListAST,
                       const GALGAS_lstringlist & in_mTargetListAST,
                       const GALGAS_taskListAST & in_mTaskListAST,
                       const GALGAS_checkTargetListAST & in_mCheckTargetListAST,
                       const GALGAS_driverDeclarationListAST & in_mDriverDeclarationListAST,
                       const GALGAS_driverInstanciationListAST & in_mRequiredDriverListAST,
                       const GALGAS_uint & in_mTypeDeclarationIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ast extractObject (const GALGAS_object & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ast constructor_new (const class GALGAS_declarationListAST & inOperand0,
                                                    const class GALGAS_extensionDeclarationListAST & inOperand1,
                                                    const class GALGAS_extendStaticArrayDeclarationAST & inOperand2,
                                                    const class GALGAS_functionDeclarationListAST & inOperand3,
                                                    const class GALGAS_requiredProcedureDeclarationListAST & inOperand4,
                                                    const class GALGAS_externProcedureDeclarationListAST & inOperand5,
                                                    const class GALGAS_isrDeclarationListAST & inOperand6,
                                                    const class GALGAS_systemRoutineDeclarationListAST & inOperand7,
                                                    const class GALGAS_lstringlist & inOperand8,
                                                    const class GALGAS_taskListAST & inOperand9,
                                                    const class GALGAS_checkTargetListAST & inOperand10,
                                                    const class GALGAS_driverDeclarationListAST & inOperand11,
                                                    const class GALGAS_driverInstanciationListAST & inOperand12,
                                                    const class GALGAS_uint & inOperand13
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ast & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_checkTargetListAST getter_mCheckTargetListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_declarationListAST getter_mDeclarationListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_driverDeclarationListAST getter_mDriverDeclarationListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extendStaticArrayDeclarationAST getter_mExtendStaticArrayDeclarationAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extensionDeclarationListAST getter_mExtensionDeclarationListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externProcedureDeclarationListAST getter_mExternProcListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_isrDeclarationListAST getter_mISRDeclarationListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_driverInstanciationListAST getter_mRequiredDriverListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_requiredProcedureDeclarationListAST getter_mRequiredProcListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDeclarationListAST getter_mStandAloneFunctionDeclarationListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_systemRoutineDeclarationListAST getter_mStandAloneSystemRoutineListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mTargetListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskListAST getter_mTaskListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTypeDeclarationIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ast class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ast ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @driverDeclarationAST struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_driverDeclarationAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mDriverName ;

  public : GALGAS_lstringlist mProperty_mDriverDependanceList ;

  public : GALGAS_driverPropertyListAST mProperty_mDriverPropertyListAST ;

  public : GALGAS_functionDeclarationListAST mProperty_mDriverFunctionDeclarationListAST ;

  public : GALGAS_systemRoutineDeclarationListAST mProperty_mDriverSystemRoutineListAST ;

  public : GALGAS_guardDeclarationListAST mProperty_mDriverGuardListAST ;

  public : GALGAS_initListAST mProperty_mDriverInitListAST ;

  public : GALGAS_bootListAST mProperty_mDriverBootListAST ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_driverDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_driverDeclarationAST (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_driverDeclarationAST (void) ;

//--------------------------------- Native constructor
  public : GALGAS_driverDeclarationAST (const GALGAS_lstring & in_mDriverName,
                                        const GALGAS_lstringlist & in_mDriverDependanceList,
                                        const GALGAS_driverPropertyListAST & in_mDriverPropertyListAST,
                                        const GALGAS_functionDeclarationListAST & in_mDriverFunctionDeclarationListAST,
                                        const GALGAS_systemRoutineDeclarationListAST & in_mDriverSystemRoutineListAST,
                                        const GALGAS_guardDeclarationListAST & in_mDriverGuardListAST,
                                        const GALGAS_initListAST & in_mDriverInitListAST,
                                        const GALGAS_bootListAST & in_mDriverBootListAST) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_driverDeclarationAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_driverDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_lstringlist & inOperand1,
                                                                     const class GALGAS_driverPropertyListAST & inOperand2,
                                                                     const class GALGAS_functionDeclarationListAST & inOperand3,
                                                                     const class GALGAS_systemRoutineDeclarationListAST & inOperand4,
                                                                     const class GALGAS_guardDeclarationListAST & inOperand5,
                                                                     const class GALGAS_initListAST & inOperand6,
                                                                     const class GALGAS_bootListAST & inOperand7
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_driverDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bootListAST getter_mDriverBootListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mDriverDependanceList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDeclarationListAST getter_mDriverFunctionDeclarationListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardDeclarationListAST getter_mDriverGuardListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_initListAST getter_mDriverInitListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDriverName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_driverPropertyListAST getter_mDriverPropertyListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_systemRoutineDeclarationListAST getter_mDriverSystemRoutineListAST (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_driverDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverDeclarationAST ;

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
                                                    class GALGAS_enumerationConstantList & outArgument1,
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
                                                                                     GALGAS_enumerationConstantList & outArgument1,
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

class GALGAS_configurationDeclarationAST : public GALGAS_abstractDeclarationAST {
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

class cPtr_configurationDeclarationAST : public cPtr_abstractDeclarationAST {
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
    kEnum_noCode,
    kEnum_code
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
  public : static class GALGAS_interruptionPanicCode constructor_code (const class GALGAS_lbigint & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_interruptionPanicCode constructor_noCode (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_interruptionPanicCode & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_code (class GALGAS_lbigint & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoCode (LOCATION_ARGS) const ;


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

class cEnumAssociatedValues_interruptionPanicCode_code : public cEnumAssociatedValues {
  public : const GALGAS_lbigint mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_interruptionPanicCode_code (const GALGAS_lbigint & inAssociatedValue0
                                                             COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_interruptionPanicCode_code (void) {}
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
//                                             Function 'isrSlotTypeName'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_isrSlotTypeName (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

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
//                 Extension getter '@sectionImplementationScheme sectionStackByteSize' (as function)                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint extensionGetter_sectionStackByteSize (const class GALGAS_sectionImplementationScheme & inObject,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @abstractDecoratedDeclaration class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractDecoratedDeclaration : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractDecoratedDeclaration (void) ;

//---
  public : inline const class cPtr_abstractDecoratedDeclaration * ptr (void) const { return (const cPtr_abstractDecoratedDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractDecoratedDeclaration (const cPtr_abstractDecoratedDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractDecoratedDeclaration extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractDecoratedDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractDecoratedDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDecoratedDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @abstractDecoratedDeclaration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractDecoratedDeclaration : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractDecoratedDeclaration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @abstractGenerationIR class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractGenerationIR : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractGenerationIR (void) ;

//---
  public : inline const class cPtr_abstractGenerationIR * ptr (void) const { return (const cPtr_abstractGenerationIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractGenerationIR (const cPtr_abstractGenerationIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractGenerationIR extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractGenerationIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractGenerationIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractGenerationIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @abstractGenerationIR class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractGenerationIR : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractGenerationIR (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @enumerationConstantList_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumerationConstantList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mConstantName ;

  public : GALGAS_bigint mProperty_mConstantValue ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumerationConstantList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_enumerationConstantList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_enumerationConstantList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_enumerationConstantList_2D_element (const GALGAS_lstring & in_mConstantName,
                                                      const GALGAS_bigint & in_mConstantValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumerationConstantList_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumerationConstantList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_bigint & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumerationConstantList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mConstantValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumerationConstantList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationConstantList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @classConstantMap map                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_classConstantMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_classConstantMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_classConstantMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_classConstantMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_classConstantMap (const GALGAS_classConstantMap & inSource) ;
  public : GALGAS_classConstantMap & operator = (const GALGAS_classConstantMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_classConstantMap extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_classConstantMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_classConstantMap constructor_mapWithMapToOverride (const class GALGAS_classConstantMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bigint & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_bigint constinArgument1,
                                                   class GALGAS_lstring constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMClassTypeNameForKey (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_bigint constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_bigint & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mClassTypeNameForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_classConstantMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_classConstantMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                              const GALGAS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_classConstantMap ;
 
} ; // End of GALGAS_classConstantMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_classConstantMap : public cGenericAbstractEnumerator {
  public : cEnumerator_classConstantMap (const GALGAS_classConstantMap & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_bigint current_mIndex (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mClassTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_classConstantMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classConstantMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@classConstantMap' map                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_classConstantMap : public cMapElement {
//--- Map attributes
  public : GALGAS_bigint mProperty_mIndex ;
  public : GALGAS_lstring mProperty_mClassTypeName ;

//--- Constructor
  public : cMapElement_classConstantMap (const GALGAS_lstring & inKey,
                                         const GALGAS_bigint & in_mIndex,
                                         const GALGAS_lstring & in_mClassTypeName
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
//                                         @classConstantMap_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_classConstantMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_bigint mProperty_mIndex ;

  public : GALGAS_lstring mProperty_mClassTypeName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_classConstantMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_classConstantMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_classConstantMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_classConstantMap_2D_element (const GALGAS_lstring & in_lkey,
                                               const GALGAS_bigint & in_mIndex,
                                               const GALGAS_lstring & in_mClassTypeName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_classConstantMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_classConstantMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_bigint & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_classConstantMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mClassTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_classConstantMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classConstantMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @structurePropertyListAST_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_structurePropertyListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mPropertyName ;

  public : GALGAS_bool mProperty_mIsConstant ;

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
                                                       const GALGAS_bool & in_mIsConstant,
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
                                                                                    const class GALGAS_bool & inOperand2,
                                                                                    const class GALGAS_lstring & inOperand3,
                                                                                    const class GALGAS_structurePropertyInitOptionalExpressionAST & inOperand4
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

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsConstant (LOCATION_ARGS) const ;

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
//                                    @functionDeclarationListAST_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_mode mProperty_mMode ;

  public : GALGAS_bool mProperty_mPublicFunction ;

  public : GALGAS_lstring mProperty_mFunctionName ;

  public : GALGAS_lstringlist mProperty_mFunctionAttributeList ;

  public : GALGAS_routineFormalArgumentListAST mProperty_mFunctionFormalArgumentList ;

  public : GALGAS_lstring mProperty_mFunctionReturnTypeName ;

  public : GALGAS_instructionListAST mProperty_mFunctionInstructionList ;

  public : GALGAS_location mProperty_mEndOfFunctionDeclaration ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_functionDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_functionDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_functionDeclarationListAST_2D_element (const GALGAS_mode & in_mMode,
                                                         const GALGAS_bool & in_mPublicFunction,
                                                         const GALGAS_lstring & in_mFunctionName,
                                                         const GALGAS_lstringlist & in_mFunctionAttributeList,
                                                         const GALGAS_routineFormalArgumentListAST & in_mFunctionFormalArgumentList,
                                                         const GALGAS_lstring & in_mFunctionReturnTypeName,
                                                         const GALGAS_instructionListAST & in_mFunctionInstructionList,
                                                         const GALGAS_location & in_mEndOfFunctionDeclaration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_functionDeclarationListAST_2D_element constructor_new (const class GALGAS_mode & inOperand0,
                                                                                      const class GALGAS_bool & inOperand1,
                                                                                      const class GALGAS_lstring & inOperand2,
                                                                                      const class GALGAS_lstringlist & inOperand3,
                                                                                      const class GALGAS_routineFormalArgumentListAST & inOperand4,
                                                                                      const class GALGAS_lstring & inOperand5,
                                                                                      const class GALGAS_instructionListAST & inOperand6,
                                                                                      const class GALGAS_location & inOperand7
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfFunctionDeclaration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFunctionAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_mFunctionFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mFunctionInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionReturnTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPublicFunction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @systemRoutineDeclarationListAST_2D_element struct                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_systemRoutineDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mName ;

  public : GALGAS_routineKind mProperty_mRoutineKind ;

  public : GALGAS_bool mProperty_mPublic ;

  public : GALGAS_lstringlist mProperty_mAttributeList ;

  public : GALGAS_routineFormalArgumentListAST mProperty_mFormalArgumentList ;

  public : GALGAS_lstring mProperty_mReturnTypeName ;

  public : GALGAS_instructionListAST mProperty_mInstructionList ;

  public : GALGAS_location mProperty_mEndOfInstructionListLocation ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_systemRoutineDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_systemRoutineDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_systemRoutineDeclarationListAST_2D_element (const GALGAS_lstring & in_mName,
                                                              const GALGAS_routineKind & in_mRoutineKind,
                                                              const GALGAS_bool & in_mPublic,
                                                              const GALGAS_lstringlist & in_mAttributeList,
                                                              const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                              const GALGAS_lstring & in_mReturnTypeName,
                                                              const GALGAS_instructionListAST & in_mInstructionList,
                                                              const GALGAS_location & in_mEndOfInstructionListLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_systemRoutineDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_systemRoutineDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_routineKind & inOperand1,
                                                                                           const class GALGAS_bool & inOperand2,
                                                                                           const class GALGAS_lstringlist & inOperand3,
                                                                                           const class GALGAS_routineFormalArgumentListAST & inOperand4,
                                                                                           const class GALGAS_lstring & inOperand5,
                                                                                           const class GALGAS_instructionListAST & inOperand6,
                                                                                           const class GALGAS_location & inOperand7
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_systemRoutineDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionListLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_mFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPublic (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReturnTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineKind getter_mRoutineKind (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_systemRoutineDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_systemRoutineDeclarationListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @guardDeclarationListAST_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guardDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mGuardName ;

  public : GALGAS_bool mProperty_mIsPublic ;

  public : GALGAS_lstringlist mProperty_mGuardAttributeList ;

  public : GALGAS_routineFormalArgumentListAST mProperty_mGuardFormalArgumentList ;

  public : GALGAS_guardKind mProperty_mGuardKind ;

  public : GALGAS_instructionListAST mProperty_mGuardInstructionList ;

  public : GALGAS_location mProperty_mEndOfGuardDeclaration ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_guardDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_guardDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_guardDeclarationListAST_2D_element (const GALGAS_lstring & in_mGuardName,
                                                      const GALGAS_bool & in_mIsPublic,
                                                      const GALGAS_lstringlist & in_mGuardAttributeList,
                                                      const GALGAS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                                      const GALGAS_guardKind & in_mGuardKind,
                                                      const GALGAS_instructionListAST & in_mGuardInstructionList,
                                                      const GALGAS_location & in_mEndOfGuardDeclaration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_guardDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guardDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_bool & inOperand1,
                                                                                   const class GALGAS_lstringlist & inOperand2,
                                                                                   const class GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                                   const class GALGAS_guardKind & inOperand4,
                                                                                   const class GALGAS_instructionListAST & inOperand5,
                                                                                   const class GALGAS_location & inOperand6
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_guardDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfGuardDeclaration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mGuardAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_mGuardFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mGuardInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardKind getter_mGuardKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGuardName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPublic (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_guardDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardDeclarationListAST_2D_element ;

