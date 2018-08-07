//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "OC_Lexique.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    E X T E R N    R O U T I N E S                                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    E X T E R N    F U N C T I O N S                                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N                                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

enum {plm_lexique_1_,
  plm_lexique_1_identifier,
  plm_lexique_1__23_groupName,
  plm_lexique_1__40_attribute,
  plm_lexique_1__24_type,
  plm_lexique_1_integer,
  plm_lexique_1__22_string_22_,
  plm_lexique_1_comment,
  plm_lexique_1_commentMark,
  plm_lexique_1__3F_selector_3A_,
  plm_lexique_1__3F__21_selector_3A_,
  plm_lexique_1__21_selector_3A_,
  plm_lexique_1__21__3F_selector_3A_,
  plm_lexique_1_addressof,
  plm_lexique_1_and,
  plm_lexique_1_assert,
  plm_lexique_1_boot,
  plm_lexique_1_case,
  plm_lexique_1_check,
  plm_lexique_1_convert,
  plm_lexique_1_driver,
  plm_lexique_1_else,
  plm_lexique_1_enum,
  plm_lexique_1_exit,
  plm_lexique_1_extend,
  plm_lexique_1_extern,
  plm_lexique_1_for,
  plm_lexique_1_func,
  plm_lexique_1_guard,
  plm_lexique_1_if,
  plm_lexique_1_import,
  plm_lexique_1_in,
  plm_lexique_1_interrupt,
  plm_lexique_1_let,
  plm_lexique_1_no,
  plm_lexique_1_nop,
  plm_lexique_1_not,
  plm_lexique_1_on,
  plm_lexique_1_opaque,
  plm_lexique_1_option,
  plm_lexique_1_or,
  plm_lexique_1_panic,
  plm_lexique_1_primitive,
  plm_lexique_1_public,
  plm_lexique_1_registers,
  plm_lexique_1_required,
  plm_lexique_1_section,
  plm_lexique_1_self,
  plm_lexique_1_service,
  plm_lexique_1_sizeof,
  plm_lexique_1_startup,
  plm_lexique_1_struct,
  plm_lexique_1_staticArray,
  plm_lexique_1_switch,
  plm_lexique_1_sync,
  plm_lexique_1_target,
  plm_lexique_1_task,
  plm_lexique_1_truncate,
  plm_lexique_1_typealias,
  plm_lexique_1_var,
  plm_lexique_1_user,
  plm_lexique_1_while,
  plm_lexique_1_xor,
  plm_lexique_1_yes,
  plm_lexique_1__3A_,
  plm_lexique_1__2E_,
  plm_lexique_1__2C_,
  plm_lexique_1__7B_,
  plm_lexique_1__7D_,
  plm_lexique_1__3D_,
  plm_lexique_1__28_,
  plm_lexique_1__29_,
  plm_lexique_1__5F_,
  plm_lexique_1__3D__3D_,
  plm_lexique_1__2260_,
  plm_lexique_1__3C_,
  plm_lexique_1__2264_,
  plm_lexique_1__3E_,
  plm_lexique_1__2265_,
  plm_lexique_1__5B_,
  plm_lexique_1__5D_,
  plm_lexique_1__3C__3C_,
  plm_lexique_1__3E__3E_,
  plm_lexique_1__7E_,
  plm_lexique_1__2D__3E_,
  plm_lexique_1__2E__2E__3C_,
  plm_lexique_1__2E__2E__2E_,
  plm_lexique_1__7C_,
  plm_lexique_1__7C__3D_,
  plm_lexique_1__26_,
  plm_lexique_1__26__3D_,
  plm_lexique_1__5E_,
  plm_lexique_1__5E__3D_,
  plm_lexique_1__2B_,
  plm_lexique_1__2B__25_,
  plm_lexique_1__2B__3D_,
  plm_lexique_1__2B__25__3D_,
  plm_lexique_1__2D_,
  plm_lexique_1__2D__25_,
  plm_lexique_1__2D__3D_,
  plm_lexique_1__2D__25__3D_,
  plm_lexique_1__2A_,
  plm_lexique_1__2A__25_,
  plm_lexique_1__2A__3D_,
  plm_lexique_1__2A__25__3D_,
  plm_lexique_1__2F_,
  plm_lexique_1__21__2F_,
  plm_lexique_1__2F__3D_,
  plm_lexique_1__21__2F__3D_,
  plm_lexique_1__25_,
  plm_lexique_1__21__25_,
  plm_lexique_1__25__3D_,
  plm_lexique_1__21__25__3D_,
  plm_lexique_1__3C__3C__3D_,
  plm_lexique_1__3E__3E__3D_,
  plm_lexique_1__3A__3A_,
  plm_lexique_1__2022_,
  plm_lexique_1__3B_
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        U N I C O D E    T E S T    F U N C T I O N S                                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     S C A N N E R    C L A S S                                                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@interface OC_Lexique_plm_lexique : OC_Lexique {
//--- Attributes
  @private NSMutableString * mLexicalAttribute_bigInteger ;
  @private NSMutableString * mLexicalAttribute_tokenString ;

}

- (NSUInteger) terminalVocabularyCount ;

- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal ;

- (void) parseLexicalTokenForLexicalColoring ;

- (NSUInteger) styleCount ;

- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex ;

- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex ;

- (NSString *) indexingDirectory ;

- (NSArray *) indexingTitles ; // Array of NSString

- (BOOL) isTemplateLexique ;

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex ;

@end

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

