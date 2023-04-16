//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "OC_Lexique.h"

//----------------------------------------------------------------------------------------------------------------------
//
//                    E X T E R N    R O U T I N E S
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                    E X T E R N    F U N C T I O N S
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//
//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N
//
//----------------------------------------------------------------------------------------------------------------------

enum {omnibus_lexique_1_,
  omnibus_lexique_1_identifier,
  omnibus_lexique_1__40_attribute,
  omnibus_lexique_1_integer,
  omnibus_lexique_1__22_string_22_,
  omnibus_lexique_1_comment,
  omnibus_lexique_1_commentMark,
  omnibus_lexique_1__3F_selector_3A_,
  omnibus_lexique_1__3F__21_selector_3A_,
  omnibus_lexique_1__21_selector_3A_,
  omnibus_lexique_1__21__3F_selector_3A_,
  omnibus_lexique_1__24_type,
  omnibus_lexique_1__A9_group,
  omnibus_lexique_1_addressof,
  omnibus_lexique_1_assert,
  omnibus_lexique_1_boot,
  omnibus_lexique_1_case,
  omnibus_lexique_1_convert,
  omnibus_lexique_1_ctAssert,
  omnibus_lexique_1_compiletime,
  omnibus_lexique_1_driver,
  omnibus_lexique_1_else,
  omnibus_lexique_1_enum,
  omnibus_lexique_1_event,
  omnibus_lexique_1_extend,
  omnibus_lexique_1_extern,
  omnibus_lexique_1_for,
  omnibus_lexique_1_func,
  omnibus_lexique_1_guard,
  omnibus_lexique_1_if,
  omnibus_lexique_1_import,
  omnibus_lexique_1_in,
  omnibus_lexique_1_interrupt,
  omnibus_lexique_1_let,
  omnibus_lexique_1_llvm,
  omnibus_lexique_1_no,
  omnibus_lexique_1_not,
  omnibus_lexique_1_opaque,
  omnibus_lexique_1_option,
  omnibus_lexique_1_panic,
  omnibus_lexique_1_primitive,
  omnibus_lexique_1_public,
  omnibus_lexique_1_registers,
  omnibus_lexique_1_required,
  omnibus_lexique_1_safe,
  omnibus_lexique_1_section,
  omnibus_lexique_1_self,
  omnibus_lexique_1_service,
  omnibus_lexique_1_sizeof,
  omnibus_lexique_1_startup,
  omnibus_lexique_1_struct,
  omnibus_lexique_1_staticArray,
  omnibus_lexique_1_switch,
  omnibus_lexique_1_sync,
  omnibus_lexique_1_target,
  omnibus_lexique_1_task,
  omnibus_lexique_1_truncate,
  omnibus_lexique_1_typealias,
  omnibus_lexique_1_var,
  omnibus_lexique_1_until,
  omnibus_lexique_1_user,
  omnibus_lexique_1_where,
  omnibus_lexique_1_when,
  omnibus_lexique_1_while,
  omnibus_lexique_1_yes,
  omnibus_lexique_1__3A_,
  omnibus_lexique_1__2E_,
  omnibus_lexique_1__2C_,
  omnibus_lexique_1__7B_,
  omnibus_lexique_1__7D_,
  omnibus_lexique_1__3D_,
  omnibus_lexique_1__28_,
  omnibus_lexique_1__29_,
  omnibus_lexique_1__5F_,
  omnibus_lexique_1__3D__3D_,
  omnibus_lexique_1__2260_,
  omnibus_lexique_1__3C_,
  omnibus_lexique_1__2264_,
  omnibus_lexique_1__3E_,
  omnibus_lexique_1__2265_,
  omnibus_lexique_1__5B_,
  omnibus_lexique_1__5D_,
  omnibus_lexique_1__5D__21_,
  omnibus_lexique_1__3C__3C_,
  omnibus_lexique_1__3E__3E_,
  omnibus_lexique_1__7E_,
  omnibus_lexique_1__7C__7C_,
  omnibus_lexique_1__26__26_,
  omnibus_lexique_1__2D__3E_,
  omnibus_lexique_1__2E__2E__3C_,
  omnibus_lexique_1__2E__2E__2E_,
  omnibus_lexique_1__7C_,
  omnibus_lexique_1__7C__3D_,
  omnibus_lexique_1__26_,
  omnibus_lexique_1__26__3D_,
  omnibus_lexique_1__5E_,
  omnibus_lexique_1__5E__3D_,
  omnibus_lexique_1__2B_,
  omnibus_lexique_1__2B__25_,
  omnibus_lexique_1__2B__3D_,
  omnibus_lexique_1__2B__25__3D_,
  omnibus_lexique_1__2D_,
  omnibus_lexique_1__2D__25_,
  omnibus_lexique_1__2D__3D_,
  omnibus_lexique_1__2D__25__3D_,
  omnibus_lexique_1__2A_,
  omnibus_lexique_1__2A__25_,
  omnibus_lexique_1__2A__3D_,
  omnibus_lexique_1__2A__25__3D_,
  omnibus_lexique_1__2F_,
  omnibus_lexique_1__21__2F_,
  omnibus_lexique_1__2F__3D_,
  omnibus_lexique_1__21__2F__3D_,
  omnibus_lexique_1__25_,
  omnibus_lexique_1__21__25_,
  omnibus_lexique_1__25__3D_,
  omnibus_lexique_1__21__25__3D_,
  omnibus_lexique_1__3C__3C__3D_,
  omnibus_lexique_1__3E__3E__3D_
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//                     S C A N N E R    C L A S S
//
//----------------------------------------------------------------------------------------------------------------------

@interface OC_Lexique_omnibus_lexique : OC_Lexique {
//--- Attributes
  @protected NSMutableString * mLexicalAttribute_bigInteger ;
  @protected NSMutableString * mLexicalAttribute_tokenString ;

}

- (NSUInteger) terminalVocabularyCount ;

- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal ;

- (BOOL) internalParseLexicalTokenForLexicalColoring ;

- (void) parseLexicalTokenForLexicalColoring ;

- (NSUInteger) styleCount ;

- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex ;

- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex ;

- (NSArray *) indexingTitles ; // Array of NSString

- (BOOL) isTemplateLexique ;

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex ;

@end

//----------------------------------------------------------------------------------------------------------------------
//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

