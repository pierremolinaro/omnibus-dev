#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-0.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     L E X I Q U E                                                                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#include "strings/unicode_character_cpp.h"
#include "galgas2/scanner_actions.h"
#include "galgas2/cLexiqueIntrospection.h"

//---------------------------------------------------------------------------------------------------------------------*

cTokenFor_plm_5F_lexique::cTokenFor_plm_5F_lexique (void) :
mLexicalAttribute_bigInteger (),
mLexicalAttribute_tokenString () {
}

//---------------------------------------------------------------------------------------------------------------------*

C_Lexique_plm_5F_lexique::C_Lexique_plm_5F_lexique (C_Compiler * inCallerCompiler,
                                                    const C_String & inSourceFileName
                                                    COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

C_Lexique_plm_5F_lexique::C_Lexique_plm_5F_lexique (C_Compiler * inCallerCompiler,
                                                    const C_String & inSourceString,
                                                    const C_String & inStringForError
                                                    COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*
//                 I N D E X I N G    D I R E C T O R Y                                                                *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_plm_5F_lexique::indexingDirectory (void) const {
  return "" ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                        Lexical error message list                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

static const char * gLexicalMessage_plm_5F_lexique_attributeError = "in an attribute name, a letter, a digit or a dot should follow the '@' character" ;

static const char * gLexicalMessage_plm_5F_lexique_binaryDigitError = "0b should be followed by a binary digit" ;

static const char * gLexicalMessage_plm_5F_lexique_hexDigitError = "0x should be followed by a hexadecimal digit" ;

static const char * gLexicalMessage_plm_5F_lexique_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_plm_5F_lexique_internalError = "internal error" ;

static const char * gLexicalMessage_plm_5F_lexique_typeError = "in a type name, a letter or a digit should follow the '$' character" ;

//---------------------------------------------------------------------------------------------------------------------*
//          Syntax error messages, for every terminal symbol                                                           *
//---------------------------------------------------------------------------------------------------------------------*

//--- Syntax error message for terminal '$identifier$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_identifier = "an identifier" ;

//--- Syntax error message for terminal '$@attribute$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__40_attribute = "an attribute @..." ;

//--- Syntax error message for terminal '$$type$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__24_type = "a type $..." ;

//--- Syntax error message for terminal '$integer$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_integer = "a literal integer" ;

//--- Syntax error message for terminal '$"string"$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__22_string_22_ = "a literal character string \"...\"" ;

//--- Syntax error message for terminal '$comment$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_comment = "a comment" ;

//--- Syntax error message for terminal '$?selector:$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__3F_selector_3A_ = "the '\?' or '\?selector:' delimitor" ;

//--- Syntax error message for terminal '$?!selector:$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__3F__21_selector_3A_ = "the '\?!' or '\?!selector:' delimitor" ;

//--- Syntax error message for terminal '$!selector:$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__21_selector_3A_ = "the '!' or '!selector:' delimitor" ;

//--- Syntax error message for terminal '$!?selector:$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__21__3F_selector_3A_ = "the '!\?' or '!\?selector:' delimitor" ;

//--- Syntax error message for terminal '$addressof$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_addressof = "the 'addressof' keyword" ;

//--- Syntax error message for terminal '$and$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_and = "the 'and' keyword" ;

//--- Syntax error message for terminal '$assert$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_assert = "the 'assert' keyword" ;

//--- Syntax error message for terminal '$at$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_at = "the 'at' keyword" ;

//--- Syntax error message for terminal '$boot$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_boot = "the 'boot' keyword" ;

//--- Syntax error message for terminal '$case$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_case = "the 'case' keyword" ;

//--- Syntax error message for terminal '$check$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_check = "the 'check' keyword" ;

//--- Syntax error message for terminal '$convert$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_convert = "the 'convert' keyword" ;

//--- Syntax error message for terminal '$do$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_do = "the 'do' keyword" ;

//--- Syntax error message for terminal '$else$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_else = "the 'else' keyword" ;

//--- Syntax error message for terminal '$enum$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_enum = "the 'enum' keyword" ;

//--- Syntax error message for terminal '$exit$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_exit = "the 'exit' keyword" ;

//--- Syntax error message for terminal '$extend$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_extend = "the 'extend' keyword" ;

//--- Syntax error message for terminal '$extension$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_extension = "the 'extension' keyword" ;

//--- Syntax error message for terminal '$extern$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_extern = "the 'extern' keyword" ;

//--- Syntax error message for terminal '$for$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_for = "the 'for' keyword" ;

//--- Syntax error message for terminal '$func$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_func = "the 'func' keyword" ;

//--- Syntax error message for terminal '$guard$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_guard = "the 'guard' keyword" ;

//--- Syntax error message for terminal '$if$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_if = "the 'if' keyword" ;

//--- Syntax error message for terminal '$import$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_import = "the 'import' keyword" ;

//--- Syntax error message for terminal '$in$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_in = "the 'in' keyword" ;

//--- Syntax error message for terminal '$init$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_init = "the 'init' keyword" ;

//--- Syntax error message for terminal '$isr$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_isr = "the 'isr' keyword" ;

//--- Syntax error message for terminal '$let$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_let = "the 'let' keyword" ;

//--- Syntax error message for terminal '$loop$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_loop = "the 'loop' keyword" ;

//--- Syntax error message for terminal '$module$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_module = "the 'module' keyword" ;

//--- Syntax error message for terminal '$no$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_no = "the 'no' keyword" ;

//--- Syntax error message for terminal '$nop$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_nop = "the 'nop' keyword" ;

//--- Syntax error message for terminal '$not$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_not = "the 'not' keyword" ;

//--- Syntax error message for terminal '$on$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_on = "the 'on' keyword" ;

//--- Syntax error message for terminal '$or$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_or = "the 'or' keyword" ;

//--- Syntax error message for terminal '$panic$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_panic = "the 'panic' keyword" ;

//--- Syntax error message for terminal '$primitive$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_primitive = "the 'primitive' keyword" ;

//--- Syntax error message for terminal '$priority$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_priority = "the 'priority' keyword" ;

//--- Syntax error message for terminal '$public$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_public = "the 'public' keyword" ;

//--- Syntax error message for terminal '$register$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_register = "the 'register' keyword" ;

//--- Syntax error message for terminal '$required$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_required = "the 'required' keyword" ;

//--- Syntax error message for terminal '$safe$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_safe = "the 'safe' keyword" ;

//--- Syntax error message for terminal '$section$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_section = "the 'section' keyword" ;

//--- Syntax error message for terminal '$self$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_self = "the 'self' keyword" ;

//--- Syntax error message for terminal '$service$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_service = "the 'service' keyword" ;

//--- Syntax error message for terminal '$setup$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_setup = "the 'setup' keyword" ;

//--- Syntax error message for terminal '$sizeof$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_sizeof = "the 'sizeof' keyword" ;

//--- Syntax error message for terminal '$struct$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_struct = "the 'struct' keyword" ;

//--- Syntax error message for terminal '$stackSize$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_stackSize = "the 'stackSize' keyword" ;

//--- Syntax error message for terminal '$staticArray$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_staticArray = "the 'staticArray' keyword" ;

//--- Syntax error message for terminal '$switch$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_switch = "the 'switch' keyword" ;

//--- Syntax error message for terminal '$sync$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_sync = "the 'sync' keyword" ;

//--- Syntax error message for terminal '$system$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_system = "the 'system' keyword" ;

//--- Syntax error message for terminal '$target$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_target = "the 'target' keyword" ;

//--- Syntax error message for terminal '$task$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_task = "the 'task' keyword" ;

//--- Syntax error message for terminal '$truncate$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_truncate = "the 'truncate' keyword" ;

//--- Syntax error message for terminal '$type$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_type = "the 'type' keyword" ;

//--- Syntax error message for terminal '$var$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_var = "the 'var' keyword" ;

//--- Syntax error message for terminal '$user$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_user = "the 'user' keyword" ;

//--- Syntax error message for terminal '$when$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_when = "the 'when' keyword" ;

//--- Syntax error message for terminal '$while$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_while = "the 'while' keyword" ;

//--- Syntax error message for terminal '$xor$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_xor = "the 'xor' keyword" ;

//--- Syntax error message for terminal '$yes$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_yes = "the 'yes' keyword" ;

//--- Syntax error message for terminal '$:$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__3A_ = "the ':' delimitor" ;

//--- Syntax error message for terminal '$.$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__2E_ = "the '.' delimitor" ;

//--- Syntax error message for terminal '$,$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__2C_ = "the ',' delimitor" ;

//--- Syntax error message for terminal '$;$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__3B_ = "the ';' delimitor" ;

//--- Syntax error message for terminal '${$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__7B_ = "the '{' delimitor" ;

//--- Syntax error message for terminal '$}$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__7D_ = "the '}' delimitor" ;

//--- Syntax error message for terminal '$=$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__3D_ = "the '=' delimitor" ;

//--- Syntax error message for terminal '$($' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__28_ = "the '(' delimitor" ;

//--- Syntax error message for terminal '$)$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__29_ = "the ')' delimitor" ;

//--- Syntax error message for terminal '$_$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__5F_ = "the '_' delimitor" ;

//--- Syntax error message for terminal '$==$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__3D__3D_ = "the '==' delimitor" ;

//--- Syntax error message for terminal '$≠$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__2260_ = "the '\xE2""\x89""\xA0""' delimitor" ;

//--- Syntax error message for terminal '$<$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__3C_ = "the '<' delimitor" ;

//--- Syntax error message for terminal '$≤$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__2264_ = "the '\xE2""\x89""\xA4""' delimitor" ;

//--- Syntax error message for terminal '$>$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__3E_ = "the '>' delimitor" ;

//--- Syntax error message for terminal '$≥$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__2265_ = "the '\xE2""\x89""\xA5""' delimitor" ;

//--- Syntax error message for terminal '$[$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__5B_ = "the '[' delimitor" ;

//--- Syntax error message for terminal '$]$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__5D_ = "the ']' delimitor" ;

//--- Syntax error message for terminal '$<<$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__3C__3C_ = "the '<<' delimitor" ;

//--- Syntax error message for terminal '$>>$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__3E__3E_ = "the '>>' delimitor" ;

//--- Syntax error message for terminal '$~$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__7E_ = "the '~' delimitor" ;

//--- Syntax error message for terminal '$->$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__2D__3E_ = "the '->' delimitor" ;

//--- Syntax error message for terminal '$..<$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__2E__2E__3C_ = "the '..<' delimitor" ;

//--- Syntax error message for terminal '$|$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__7C_ = "the '|' delimitor" ;

//--- Syntax error message for terminal '$|=$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__7C__3D_ = "the '|=' delimitor" ;

//--- Syntax error message for terminal '$&$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__26_ = "the '&' delimitor" ;

//--- Syntax error message for terminal '$&=$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__26__3D_ = "the '&=' delimitor" ;

//--- Syntax error message for terminal '$^$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__5E_ = "the '^' delimitor" ;

//--- Syntax error message for terminal '$^=$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__5E__3D_ = "the '^=' delimitor" ;

//--- Syntax error message for terminal '$+$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__2B_ = "the '+' delimitor" ;

//--- Syntax error message for terminal '$+%$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__2B__25_ = "the '+%' delimitor" ;

//--- Syntax error message for terminal '$+=$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__2B__3D_ = "the '+=' delimitor" ;

//--- Syntax error message for terminal '$+%=$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__2B__25__3D_ = "the '+%=' delimitor" ;

//--- Syntax error message for terminal '$-$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__2D_ = "the '-' delimitor" ;

//--- Syntax error message for terminal '$-%$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__2D__25_ = "the '-%' delimitor" ;

//--- Syntax error message for terminal '$-=$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__2D__3D_ = "the '-=' delimitor" ;

//--- Syntax error message for terminal '$-%=$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__2D__25__3D_ = "the '-%=' delimitor" ;

//--- Syntax error message for terminal '$*$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__2A_ = "the '*' delimitor" ;

//--- Syntax error message for terminal '$*%$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__2A__25_ = "the '*%' delimitor" ;

//--- Syntax error message for terminal '$*=$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__2A__3D_ = "the '*=' delimitor" ;

//--- Syntax error message for terminal '$*%=$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__2A__25__3D_ = "the '*%=' delimitor" ;

//--- Syntax error message for terminal '$/$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__2F_ = "the '/' delimitor" ;

//--- Syntax error message for terminal '$!/$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__21__2F_ = "the '!/' delimitor" ;

//--- Syntax error message for terminal '$/=$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__2F__3D_ = "the '/=' delimitor" ;

//--- Syntax error message for terminal '$!/=$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__21__2F__3D_ = "the '!/=' delimitor" ;

//--- Syntax error message for terminal '$%$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__25_ = "the '%' delimitor" ;

//--- Syntax error message for terminal '$!%$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__21__25_ = "the '!%' delimitor" ;

//--- Syntax error message for terminal '$%=$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__25__3D_ = "the '%=' delimitor" ;

//--- Syntax error message for terminal '$!%=$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__21__25__3D_ = "the '!%=' delimitor" ;

//--- Syntax error message for terminal '$<<=$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__3C__3C__3D_ = "the '<<=' delimitor" ;

//--- Syntax error message for terminal '$>>=$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__3E__3E__3D_ = "the '>>=' delimitor" ;

//---------------------------------------------------------------------------------------------------------------------*
//                getMessageForTerminal                                                                                *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_plm_5F_lexique::getMessageForTerminal (const int16_t inTerminalIndex) const {
  static const char * syntaxErrorMessageArray [121] = {kEndOfSourceLexicalErrorMessage,
    gSyntaxErrorMessage_plm_5F_lexique_identifier,
    gSyntaxErrorMessage_plm_5F_lexique__40_attribute,
    gSyntaxErrorMessage_plm_5F_lexique__24_type,
    gSyntaxErrorMessage_plm_5F_lexique_integer,
    gSyntaxErrorMessage_plm_5F_lexique__22_string_22_,
    gSyntaxErrorMessage_plm_5F_lexique_comment,
    gSyntaxErrorMessage_plm_5F_lexique__3F_selector_3A_,
    gSyntaxErrorMessage_plm_5F_lexique__3F__21_selector_3A_,
    gSyntaxErrorMessage_plm_5F_lexique__21_selector_3A_,
    gSyntaxErrorMessage_plm_5F_lexique__21__3F_selector_3A_,
    gSyntaxErrorMessage_plm_5F_lexique_addressof,
    gSyntaxErrorMessage_plm_5F_lexique_and,
    gSyntaxErrorMessage_plm_5F_lexique_assert,
    gSyntaxErrorMessage_plm_5F_lexique_at,
    gSyntaxErrorMessage_plm_5F_lexique_boot,
    gSyntaxErrorMessage_plm_5F_lexique_case,
    gSyntaxErrorMessage_plm_5F_lexique_check,
    gSyntaxErrorMessage_plm_5F_lexique_convert,
    gSyntaxErrorMessage_plm_5F_lexique_do,
    gSyntaxErrorMessage_plm_5F_lexique_else,
    gSyntaxErrorMessage_plm_5F_lexique_enum,
    gSyntaxErrorMessage_plm_5F_lexique_exit,
    gSyntaxErrorMessage_plm_5F_lexique_extend,
    gSyntaxErrorMessage_plm_5F_lexique_extension,
    gSyntaxErrorMessage_plm_5F_lexique_extern,
    gSyntaxErrorMessage_plm_5F_lexique_for,
    gSyntaxErrorMessage_plm_5F_lexique_func,
    gSyntaxErrorMessage_plm_5F_lexique_guard,
    gSyntaxErrorMessage_plm_5F_lexique_if,
    gSyntaxErrorMessage_plm_5F_lexique_import,
    gSyntaxErrorMessage_plm_5F_lexique_in,
    gSyntaxErrorMessage_plm_5F_lexique_init,
    gSyntaxErrorMessage_plm_5F_lexique_isr,
    gSyntaxErrorMessage_plm_5F_lexique_let,
    gSyntaxErrorMessage_plm_5F_lexique_loop,
    gSyntaxErrorMessage_plm_5F_lexique_module,
    gSyntaxErrorMessage_plm_5F_lexique_no,
    gSyntaxErrorMessage_plm_5F_lexique_nop,
    gSyntaxErrorMessage_plm_5F_lexique_not,
    gSyntaxErrorMessage_plm_5F_lexique_on,
    gSyntaxErrorMessage_plm_5F_lexique_or,
    gSyntaxErrorMessage_plm_5F_lexique_panic,
    gSyntaxErrorMessage_plm_5F_lexique_primitive,
    gSyntaxErrorMessage_plm_5F_lexique_priority,
    gSyntaxErrorMessage_plm_5F_lexique_public,
    gSyntaxErrorMessage_plm_5F_lexique_register,
    gSyntaxErrorMessage_plm_5F_lexique_required,
    gSyntaxErrorMessage_plm_5F_lexique_safe,
    gSyntaxErrorMessage_plm_5F_lexique_section,
    gSyntaxErrorMessage_plm_5F_lexique_self,
    gSyntaxErrorMessage_plm_5F_lexique_service,
    gSyntaxErrorMessage_plm_5F_lexique_setup,
    gSyntaxErrorMessage_plm_5F_lexique_sizeof,
    gSyntaxErrorMessage_plm_5F_lexique_struct,
    gSyntaxErrorMessage_plm_5F_lexique_stackSize,
    gSyntaxErrorMessage_plm_5F_lexique_staticArray,
    gSyntaxErrorMessage_plm_5F_lexique_switch,
    gSyntaxErrorMessage_plm_5F_lexique_sync,
    gSyntaxErrorMessage_plm_5F_lexique_system,
    gSyntaxErrorMessage_plm_5F_lexique_target,
    gSyntaxErrorMessage_plm_5F_lexique_task,
    gSyntaxErrorMessage_plm_5F_lexique_truncate,
    gSyntaxErrorMessage_plm_5F_lexique_type,
    gSyntaxErrorMessage_plm_5F_lexique_var,
    gSyntaxErrorMessage_plm_5F_lexique_user,
    gSyntaxErrorMessage_plm_5F_lexique_when,
    gSyntaxErrorMessage_plm_5F_lexique_while,
    gSyntaxErrorMessage_plm_5F_lexique_xor,
    gSyntaxErrorMessage_plm_5F_lexique_yes,
    gSyntaxErrorMessage_plm_5F_lexique__3A_,
    gSyntaxErrorMessage_plm_5F_lexique__2E_,
    gSyntaxErrorMessage_plm_5F_lexique__2C_,
    gSyntaxErrorMessage_plm_5F_lexique__3B_,
    gSyntaxErrorMessage_plm_5F_lexique__7B_,
    gSyntaxErrorMessage_plm_5F_lexique__7D_,
    gSyntaxErrorMessage_plm_5F_lexique__3D_,
    gSyntaxErrorMessage_plm_5F_lexique__28_,
    gSyntaxErrorMessage_plm_5F_lexique__29_,
    gSyntaxErrorMessage_plm_5F_lexique__5F_,
    gSyntaxErrorMessage_plm_5F_lexique__3D__3D_,
    gSyntaxErrorMessage_plm_5F_lexique__2260_,
    gSyntaxErrorMessage_plm_5F_lexique__3C_,
    gSyntaxErrorMessage_plm_5F_lexique__2264_,
    gSyntaxErrorMessage_plm_5F_lexique__3E_,
    gSyntaxErrorMessage_plm_5F_lexique__2265_,
    gSyntaxErrorMessage_plm_5F_lexique__5B_,
    gSyntaxErrorMessage_plm_5F_lexique__5D_,
    gSyntaxErrorMessage_plm_5F_lexique__3C__3C_,
    gSyntaxErrorMessage_plm_5F_lexique__3E__3E_,
    gSyntaxErrorMessage_plm_5F_lexique__7E_,
    gSyntaxErrorMessage_plm_5F_lexique__2D__3E_,
    gSyntaxErrorMessage_plm_5F_lexique__2E__2E__3C_,
    gSyntaxErrorMessage_plm_5F_lexique__7C_,
    gSyntaxErrorMessage_plm_5F_lexique__7C__3D_,
    gSyntaxErrorMessage_plm_5F_lexique__26_,
    gSyntaxErrorMessage_plm_5F_lexique__26__3D_,
    gSyntaxErrorMessage_plm_5F_lexique__5E_,
    gSyntaxErrorMessage_plm_5F_lexique__5E__3D_,
    gSyntaxErrorMessage_plm_5F_lexique__2B_,
    gSyntaxErrorMessage_plm_5F_lexique__2B__25_,
    gSyntaxErrorMessage_plm_5F_lexique__2B__3D_,
    gSyntaxErrorMessage_plm_5F_lexique__2B__25__3D_,
    gSyntaxErrorMessage_plm_5F_lexique__2D_,
    gSyntaxErrorMessage_plm_5F_lexique__2D__25_,
    gSyntaxErrorMessage_plm_5F_lexique__2D__3D_,
    gSyntaxErrorMessage_plm_5F_lexique__2D__25__3D_,
    gSyntaxErrorMessage_plm_5F_lexique__2A_,
    gSyntaxErrorMessage_plm_5F_lexique__2A__25_,
    gSyntaxErrorMessage_plm_5F_lexique__2A__3D_,
    gSyntaxErrorMessage_plm_5F_lexique__2A__25__3D_,
    gSyntaxErrorMessage_plm_5F_lexique__2F_,
    gSyntaxErrorMessage_plm_5F_lexique__21__2F_,
    gSyntaxErrorMessage_plm_5F_lexique__2F__3D_,
    gSyntaxErrorMessage_plm_5F_lexique__21__2F__3D_,
    gSyntaxErrorMessage_plm_5F_lexique__25_,
    gSyntaxErrorMessage_plm_5F_lexique__21__25_,
    gSyntaxErrorMessage_plm_5F_lexique__25__3D_,
    gSyntaxErrorMessage_plm_5F_lexique__21__25__3D_,
    gSyntaxErrorMessage_plm_5F_lexique__3C__3C__3D_,
    gSyntaxErrorMessage_plm_5F_lexique__3E__3E__3D_} ;
  return syntaxErrorMessageArray [inTerminalIndex] ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                      U N I C O D E    S T R I N G S                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

//--- Unicode string for '$_21__25_$'
static const utf32 kUnicodeString_plm_5F_lexique__21__25_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('%'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_21__25__3D_$'
static const utf32 kUnicodeString_plm_5F_lexique__21__25__3D_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('%'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_21__2F_$'
static const utf32 kUnicodeString_plm_5F_lexique__21__2F_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('/'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_21__2F__3D_$'
static const utf32 kUnicodeString_plm_5F_lexique__21__2F__3D_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('/'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_25_$'
static const utf32 kUnicodeString_plm_5F_lexique__25_ [] = {
  TO_UNICODE ('%'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_25__3D_$'
static const utf32 kUnicodeString_plm_5F_lexique__25__3D_ [] = {
  TO_UNICODE ('%'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26_$'
static const utf32 kUnicodeString_plm_5F_lexique__26_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__3D_$'
static const utf32 kUnicodeString_plm_5F_lexique__26__3D_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_28_$'
static const utf32 kUnicodeString_plm_5F_lexique__28_ [] = {
  TO_UNICODE ('('),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_29_$'
static const utf32 kUnicodeString_plm_5F_lexique__29_ [] = {
  TO_UNICODE (')'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2A_$'
static const utf32 kUnicodeString_plm_5F_lexique__2A_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2A__25_$'
static const utf32 kUnicodeString_plm_5F_lexique__2A__25_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE ('%'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2A__25__3D_$'
static const utf32 kUnicodeString_plm_5F_lexique__2A__25__3D_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE ('%'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2A__3D_$'
static const utf32 kUnicodeString_plm_5F_lexique__2A__3D_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B_$'
static const utf32 kUnicodeString_plm_5F_lexique__2B_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B__25_$'
static const utf32 kUnicodeString_plm_5F_lexique__2B__25_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE ('%'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B__25__3D_$'
static const utf32 kUnicodeString_plm_5F_lexique__2B__25__3D_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE ('%'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B__3D_$'
static const utf32 kUnicodeString_plm_5F_lexique__2B__3D_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2C_$'
static const utf32 kUnicodeString_plm_5F_lexique__2C_ [] = {
  TO_UNICODE (','),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D_$'
static const utf32 kUnicodeString_plm_5F_lexique__2D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__25_$'
static const utf32 kUnicodeString_plm_5F_lexique__2D__25_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('%'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__25__3D_$'
static const utf32 kUnicodeString_plm_5F_lexique__2D__25__3D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('%'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__3D_$'
static const utf32 kUnicodeString_plm_5F_lexique__2D__3D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__3E_$'
static const utf32 kUnicodeString_plm_5F_lexique__2D__3E_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E_$'
static const utf32 kUnicodeString_plm_5F_lexique__2E_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E__2E__3C_$'
static const utf32 kUnicodeString_plm_5F_lexique__2E__2E__3C_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
  TO_UNICODE ('<'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2F_$'
static const utf32 kUnicodeString_plm_5F_lexique__2F_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2F__2F_$'
static const utf32 kUnicodeString_plm_5F_lexique__2F__2F_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE ('/'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2F__3D_$'
static const utf32 kUnicodeString_plm_5F_lexique__2F__3D_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_30_b$'
static const utf32 kUnicodeString_plm_5F_lexique__30_b [] = {
  TO_UNICODE ('0'),
  TO_UNICODE ('b'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_30_x$'
static const utf32 kUnicodeString_plm_5F_lexique__30_x [] = {
  TO_UNICODE ('0'),
  TO_UNICODE ('x'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A_$'
static const utf32 kUnicodeString_plm_5F_lexique__3A_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3B_$'
static const utf32 kUnicodeString_plm_5F_lexique__3B_ [] = {
  TO_UNICODE (';'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3C_$'
static const utf32 kUnicodeString_plm_5F_lexique__3C_ [] = {
  TO_UNICODE ('<'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3C__3C_$'
static const utf32 kUnicodeString_plm_5F_lexique__3C__3C_ [] = {
  TO_UNICODE ('<'),
  TO_UNICODE ('<'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3C__3C__3D_$'
static const utf32 kUnicodeString_plm_5F_lexique__3C__3C__3D_ [] = {
  TO_UNICODE ('<'),
  TO_UNICODE ('<'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D_$'
static const utf32 kUnicodeString_plm_5F_lexique__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D__3D_$'
static const utf32 kUnicodeString_plm_5F_lexique__3D__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E_$'
static const utf32 kUnicodeString_plm_5F_lexique__3E_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E__3E_$'
static const utf32 kUnicodeString_plm_5F_lexique__3E__3E_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E__3E__3D_$'
static const utf32 kUnicodeString_plm_5F_lexique__3E__3E__3D_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE ('>'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5B_$'
static const utf32 kUnicodeString_plm_5F_lexique__5B_ [] = {
  TO_UNICODE ('['),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C__22_$'
static const utf32 kUnicodeString_plm_5F_lexique__5C__22_ [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('\"'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5D_$'
static const utf32 kUnicodeString_plm_5F_lexique__5D_ [] = {
  TO_UNICODE (']'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5E_$'
static const utf32 kUnicodeString_plm_5F_lexique__5E_ [] = {
  TO_UNICODE ('^'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5E__3D_$'
static const utf32 kUnicodeString_plm_5F_lexique__5E__3D_ [] = {
  TO_UNICODE ('^'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5F_$'
static const utf32 kUnicodeString_plm_5F_lexique__5F_ [] = {
  TO_UNICODE ('_'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$addressof$'
static const utf32 kUnicodeString_plm_5F_lexique_addressof [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('d'),
  TO_UNICODE ('d'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE ('o'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$and$'
static const utf32 kUnicodeString_plm_5F_lexique_and [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$assert$'
static const utf32 kUnicodeString_plm_5F_lexique_assert [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$at$'
static const utf32 kUnicodeString_plm_5F_lexique_at [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$boot$'
static const utf32 kUnicodeString_plm_5F_lexique_boot [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$case$'
static const utf32 kUnicodeString_plm_5F_lexique_case [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$check$'
static const utf32 kUnicodeString_plm_5F_lexique_check [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$convert$'
static const utf32 kUnicodeString_plm_5F_lexique_convert [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$do$'
static const utf32 kUnicodeString_plm_5F_lexique_do [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$else$'
static const utf32 kUnicodeString_plm_5F_lexique_else [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$enum$'
static const utf32 kUnicodeString_plm_5F_lexique_enum [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$exit$'
static const utf32 kUnicodeString_plm_5F_lexique_exit [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$extend$'
static const utf32 kUnicodeString_plm_5F_lexique_extend [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$extension$'
static const utf32 kUnicodeString_plm_5F_lexique_extension [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$extern$'
static const utf32 kUnicodeString_plm_5F_lexique_extern [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$for$'
static const utf32 kUnicodeString_plm_5F_lexique_for [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$func$'
static const utf32 kUnicodeString_plm_5F_lexique_func [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$guard$'
static const utf32 kUnicodeString_plm_5F_lexique_guard [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('u'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$if$'
static const utf32 kUnicodeString_plm_5F_lexique_if [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$import$'
static const utf32 kUnicodeString_plm_5F_lexique_import [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$in$'
static const utf32 kUnicodeString_plm_5F_lexique_in [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$init$'
static const utf32 kUnicodeString_plm_5F_lexique_init [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$isr$'
static const utf32 kUnicodeString_plm_5F_lexique_isr [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$let$'
static const utf32 kUnicodeString_plm_5F_lexique_let [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$loop$'
static const utf32 kUnicodeString_plm_5F_lexique_loop [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$module$'
static const utf32 kUnicodeString_plm_5F_lexique_module [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$no$'
static const utf32 kUnicodeString_plm_5F_lexique_no [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$nop$'
static const utf32 kUnicodeString_plm_5F_lexique_nop [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$not$'
static const utf32 kUnicodeString_plm_5F_lexique_not [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$on$'
static const utf32 kUnicodeString_plm_5F_lexique_on [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$or$'
static const utf32 kUnicodeString_plm_5F_lexique_or [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$panic$'
static const utf32 kUnicodeString_plm_5F_lexique_panic [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$primitive$'
static const utf32 kUnicodeString_plm_5F_lexique_primitive [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$priority$'
static const utf32 kUnicodeString_plm_5F_lexique_priority [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$public$'
static const utf32 kUnicodeString_plm_5F_lexique_public [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('u'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$register$'
static const utf32 kUnicodeString_plm_5F_lexique_register [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('g'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$required$'
static const utf32 kUnicodeString_plm_5F_lexique_required [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('q'),
  TO_UNICODE ('u'),
  TO_UNICODE ('i'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$safe$'
static const utf32 kUnicodeString_plm_5F_lexique_safe [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('a'),
  TO_UNICODE ('f'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$section$'
static const utf32 kUnicodeString_plm_5F_lexique_section [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$self$'
static const utf32 kUnicodeString_plm_5F_lexique_self [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$service$'
static const utf32 kUnicodeString_plm_5F_lexique_service [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('v'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$setup$'
static const utf32 kUnicodeString_plm_5F_lexique_setup [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('u'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$sizeof$'
static const utf32 kUnicodeString_plm_5F_lexique_sizeof [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('z'),
  TO_UNICODE ('e'),
  TO_UNICODE ('o'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$stackSize$'
static const utf32 kUnicodeString_plm_5F_lexique_stackSize [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE ('S'),
  TO_UNICODE ('i'),
  TO_UNICODE ('z'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$staticArray$'
static const utf32 kUnicodeString_plm_5F_lexique_staticArray [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE ('A'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$struct$'
static const utf32 kUnicodeString_plm_5F_lexique_struct [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$switch$'
static const utf32 kUnicodeString_plm_5F_lexique_switch [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$sync$'
static const utf32 kUnicodeString_plm_5F_lexique_sync [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('y'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$system$'
static const utf32 kUnicodeString_plm_5F_lexique_system [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('y'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$target$'
static const utf32 kUnicodeString_plm_5F_lexique_target [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$task$'
static const utf32 kUnicodeString_plm_5F_lexique_task [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('k'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$truncate$'
static const utf32 kUnicodeString_plm_5F_lexique_truncate [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$type$'
static const utf32 kUnicodeString_plm_5F_lexique_type [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('y'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$user$'
static const utf32 kUnicodeString_plm_5F_lexique_user [] = {
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$var$'
static const utf32 kUnicodeString_plm_5F_lexique_var [] = {
  TO_UNICODE ('v'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$when$'
static const utf32 kUnicodeString_plm_5F_lexique_when [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$while$'
static const utf32 kUnicodeString_plm_5F_lexique_while [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$xor$'
static const utf32 kUnicodeString_plm_5F_lexique_xor [] = {
  TO_UNICODE ('x'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$yes$'
static const utf32 kUnicodeString_plm_5F_lexique_yes [] = {
  TO_UNICODE ('y'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7B_$'
static const utf32 kUnicodeString_plm_5F_lexique__7B_ [] = {
  TO_UNICODE ('{'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7C_$'
static const utf32 kUnicodeString_plm_5F_lexique__7C_ [] = {
  TO_UNICODE ('|'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7C__3D_$'
static const utf32 kUnicodeString_plm_5F_lexique__7C__3D_ [] = {
  TO_UNICODE ('|'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7D_$'
static const utf32 kUnicodeString_plm_5F_lexique__7D_ [] = {
  TO_UNICODE ('}'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7E_$'
static const utf32 kUnicodeString_plm_5F_lexique__7E_ [] = {
  TO_UNICODE ('~'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2260_$'
static const utf32 kUnicodeString_plm_5F_lexique__2260_ [] = {
  TO_UNICODE (8800),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2264_$'
static const utf32 kUnicodeString_plm_5F_lexique__2264_ [] = {
  TO_UNICODE (8804),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2265_$'
static const utf32 kUnicodeString_plm_5F_lexique__2265_ [] = {
  TO_UNICODE (8805),
  TO_UNICODE (0)
} ;

//---------------------------------------------------------------------------------------------------------------------*
//             Key words table 'delimitorsList'                            *
//---------------------------------------------------------------------------------------------------------------------*

static const int32_t ktable_size_plm_5F_lexique_delimitorsList = 51 ;

static const C_unicode_lexique_table_entry ktable_for_plm_5F_lexique_delimitorsList [ktable_size_plm_5F_lexique_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__25_, 1, C_Lexique_plm_5F_lexique::kToken__25_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__26_, 1, C_Lexique_plm_5F_lexique::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__28_, 1, C_Lexique_plm_5F_lexique::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__29_, 1, C_Lexique_plm_5F_lexique::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__2A_, 1, C_Lexique_plm_5F_lexique::kToken__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__2B_, 1, C_Lexique_plm_5F_lexique::kToken__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__2C_, 1, C_Lexique_plm_5F_lexique::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__2D_, 1, C_Lexique_plm_5F_lexique::kToken__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__2E_, 1, C_Lexique_plm_5F_lexique::kToken__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__2F_, 1, C_Lexique_plm_5F_lexique::kToken__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__3A_, 1, C_Lexique_plm_5F_lexique::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__3B_, 1, C_Lexique_plm_5F_lexique::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__3C_, 1, C_Lexique_plm_5F_lexique::kToken__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__3D_, 1, C_Lexique_plm_5F_lexique::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__3E_, 1, C_Lexique_plm_5F_lexique::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__5B_, 1, C_Lexique_plm_5F_lexique::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__5D_, 1, C_Lexique_plm_5F_lexique::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__5E_, 1, C_Lexique_plm_5F_lexique::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__5F_, 1, C_Lexique_plm_5F_lexique::kToken__5F_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__7B_, 1, C_Lexique_plm_5F_lexique::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__7C_, 1, C_Lexique_plm_5F_lexique::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__7D_, 1, C_Lexique_plm_5F_lexique::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__7E_, 1, C_Lexique_plm_5F_lexique::kToken__7E_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__2260_, 1, C_Lexique_plm_5F_lexique::kToken__2260_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__2264_, 1, C_Lexique_plm_5F_lexique::kToken__2264_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__2265_, 1, C_Lexique_plm_5F_lexique::kToken__2265_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__21__25_, 2, C_Lexique_plm_5F_lexique::kToken__21__25_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__21__2F_, 2, C_Lexique_plm_5F_lexique::kToken__21__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__25__3D_, 2, C_Lexique_plm_5F_lexique::kToken__25__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__26__3D_, 2, C_Lexique_plm_5F_lexique::kToken__26__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__2A__25_, 2, C_Lexique_plm_5F_lexique::kToken__2A__25_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__2A__3D_, 2, C_Lexique_plm_5F_lexique::kToken__2A__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__2B__25_, 2, C_Lexique_plm_5F_lexique::kToken__2B__25_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__2B__3D_, 2, C_Lexique_plm_5F_lexique::kToken__2B__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__2D__25_, 2, C_Lexique_plm_5F_lexique::kToken__2D__25_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__2D__3D_, 2, C_Lexique_plm_5F_lexique::kToken__2D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__2D__3E_, 2, C_Lexique_plm_5F_lexique::kToken__2D__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__2F__3D_, 2, C_Lexique_plm_5F_lexique::kToken__2F__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__3C__3C_, 2, C_Lexique_plm_5F_lexique::kToken__3C__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__3D__3D_, 2, C_Lexique_plm_5F_lexique::kToken__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__3E__3E_, 2, C_Lexique_plm_5F_lexique::kToken__3E__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__5E__3D_, 2, C_Lexique_plm_5F_lexique::kToken__5E__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__7C__3D_, 2, C_Lexique_plm_5F_lexique::kToken__7C__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__21__25__3D_, 3, C_Lexique_plm_5F_lexique::kToken__21__25__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__21__2F__3D_, 3, C_Lexique_plm_5F_lexique::kToken__21__2F__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__2A__25__3D_, 3, C_Lexique_plm_5F_lexique::kToken__2A__25__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__2B__25__3D_, 3, C_Lexique_plm_5F_lexique::kToken__2B__25__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__2D__25__3D_, 3, C_Lexique_plm_5F_lexique::kToken__2D__25__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__2E__2E__3C_, 3, C_Lexique_plm_5F_lexique::kToken__2E__2E__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__3C__3C__3D_, 3, C_Lexique_plm_5F_lexique::kToken__3C__3C__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__3E__3E__3D_, 3, C_Lexique_plm_5F_lexique::kToken__3E__3E__3D_)
} ;

int16_t C_Lexique_plm_5F_lexique::search_into_delimitorsList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_plm_5F_lexique_delimitorsList, ktable_size_plm_5F_lexique_delimitorsList) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//             Key words table 'keyWordList'                            *
//---------------------------------------------------------------------------------------------------------------------*

static const int32_t ktable_size_plm_5F_lexique_keyWordList = 59 ;

static const C_unicode_lexique_table_entry ktable_for_plm_5F_lexique_keyWordList [ktable_size_plm_5F_lexique_keyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_at, 2, C_Lexique_plm_5F_lexique::kToken_at),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_do, 2, C_Lexique_plm_5F_lexique::kToken_do),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_if, 2, C_Lexique_plm_5F_lexique::kToken_if),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_in, 2, C_Lexique_plm_5F_lexique::kToken_in),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_no, 2, C_Lexique_plm_5F_lexique::kToken_no),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_on, 2, C_Lexique_plm_5F_lexique::kToken_on),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_or, 2, C_Lexique_plm_5F_lexique::kToken_or),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_and, 3, C_Lexique_plm_5F_lexique::kToken_and),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_for, 3, C_Lexique_plm_5F_lexique::kToken_for),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_isr, 3, C_Lexique_plm_5F_lexique::kToken_isr),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_let, 3, C_Lexique_plm_5F_lexique::kToken_let),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_nop, 3, C_Lexique_plm_5F_lexique::kToken_nop),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_not, 3, C_Lexique_plm_5F_lexique::kToken_not),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_var, 3, C_Lexique_plm_5F_lexique::kToken_var),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_xor, 3, C_Lexique_plm_5F_lexique::kToken_xor),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_yes, 3, C_Lexique_plm_5F_lexique::kToken_yes),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_boot, 4, C_Lexique_plm_5F_lexique::kToken_boot),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_case, 4, C_Lexique_plm_5F_lexique::kToken_case),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_else, 4, C_Lexique_plm_5F_lexique::kToken_else),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_enum, 4, C_Lexique_plm_5F_lexique::kToken_enum),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_exit, 4, C_Lexique_plm_5F_lexique::kToken_exit),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_func, 4, C_Lexique_plm_5F_lexique::kToken_func),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_init, 4, C_Lexique_plm_5F_lexique::kToken_init),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_loop, 4, C_Lexique_plm_5F_lexique::kToken_loop),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_safe, 4, C_Lexique_plm_5F_lexique::kToken_safe),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_self, 4, C_Lexique_plm_5F_lexique::kToken_self),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_sync, 4, C_Lexique_plm_5F_lexique::kToken_sync),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_task, 4, C_Lexique_plm_5F_lexique::kToken_task),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_type, 4, C_Lexique_plm_5F_lexique::kToken_type),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_user, 4, C_Lexique_plm_5F_lexique::kToken_user),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_when, 4, C_Lexique_plm_5F_lexique::kToken_when),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_check, 5, C_Lexique_plm_5F_lexique::kToken_check),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_guard, 5, C_Lexique_plm_5F_lexique::kToken_guard),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_panic, 5, C_Lexique_plm_5F_lexique::kToken_panic),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_setup, 5, C_Lexique_plm_5F_lexique::kToken_setup),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_while, 5, C_Lexique_plm_5F_lexique::kToken_while),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_assert, 6, C_Lexique_plm_5F_lexique::kToken_assert),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_extend, 6, C_Lexique_plm_5F_lexique::kToken_extend),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_extern, 6, C_Lexique_plm_5F_lexique::kToken_extern),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_import, 6, C_Lexique_plm_5F_lexique::kToken_import),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_module, 6, C_Lexique_plm_5F_lexique::kToken_module),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_public, 6, C_Lexique_plm_5F_lexique::kToken_public),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_sizeof, 6, C_Lexique_plm_5F_lexique::kToken_sizeof),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_struct, 6, C_Lexique_plm_5F_lexique::kToken_struct),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_switch, 6, C_Lexique_plm_5F_lexique::kToken_switch),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_system, 6, C_Lexique_plm_5F_lexique::kToken_system),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_target, 6, C_Lexique_plm_5F_lexique::kToken_target),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_convert, 7, C_Lexique_plm_5F_lexique::kToken_convert),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_section, 7, C_Lexique_plm_5F_lexique::kToken_section),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_service, 7, C_Lexique_plm_5F_lexique::kToken_service),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_priority, 8, C_Lexique_plm_5F_lexique::kToken_priority),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_register, 8, C_Lexique_plm_5F_lexique::kToken_register),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_required, 8, C_Lexique_plm_5F_lexique::kToken_required),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_truncate, 8, C_Lexique_plm_5F_lexique::kToken_truncate),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_addressof, 9, C_Lexique_plm_5F_lexique::kToken_addressof),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_extension, 9, C_Lexique_plm_5F_lexique::kToken_extension),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_primitive, 9, C_Lexique_plm_5F_lexique::kToken_primitive),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_stackSize, 9, C_Lexique_plm_5F_lexique::kToken_stackSize),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_staticArray, 11, C_Lexique_plm_5F_lexique::kToken_staticArray)
} ;

int16_t C_Lexique_plm_5F_lexique::search_into_keyWordList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_plm_5F_lexique_keyWordList, ktable_size_plm_5F_lexique_keyWordList) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                          getCurrentTokenString                                                                      *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_plm_5F_lexique::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_plm_5F_lexique * ptr = (const cTokenFor_plm_5F_lexique *) inTokenPtr ;
  C_String s ;
  if (ptr == NULL) {
    s.appendCString("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString("$$") ;
      break ;
    case kToken_identifier:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("identifier") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__40_attribute:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("@attribute") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__24_type:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("$type") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_integer:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("integer") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_bigInteger.decimalString ()) ;
      break ;
    case kToken__22_string_22_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\"string\"") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("comment") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3F_selector_3A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\?selector:") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__3F__21_selector_3A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\?!selector:") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__21_selector_3A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!selector:") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__21__3F_selector_3A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!\?selector:") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_addressof:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("addressof") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_and:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("and") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_assert:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("assert") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_at:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("at") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_boot:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("boot") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_case:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("case") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_check:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("check") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_convert:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("convert") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_do:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("do") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_else:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("else") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_enum:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("enum") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_exit:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("exit") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_extend:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("extend") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_extension:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("extension") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_extern:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("extern") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_for:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("for") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_func:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("func") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_guard:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("guard") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_if:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("if") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_import:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("import") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_in:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("in") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_init:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("init") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_isr:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("isr") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_let:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("let") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_loop:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("loop") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_module:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("module") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_no:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("no") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_nop:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("nop") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_not:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("not") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_on:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("on") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_or:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("or") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_panic:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("panic") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_primitive:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("primitive") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_priority:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("priority") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_public:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("public") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_register:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("register") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_required:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("required") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_safe:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("safe") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_section:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("section") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_self:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("self") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_service:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("service") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_setup:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("setup") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_sizeof:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("sizeof") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_struct:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("struct") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_stackSize:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("stackSize") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_staticArray:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("staticArray") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_switch:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("switch") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_sync:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("sync") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_system:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("system") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_target:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("target") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_task:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("task") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_truncate:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("truncate") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_type:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("type") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_var:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("var") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_user:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("user") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_when:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("when") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_while:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("while") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_xor:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("xor") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_yes:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("yes") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (":") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (".") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (",") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (";") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("{") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("}") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__28_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("(") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__29_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (")") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("_") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3D__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("==") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2260_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\xE2""\x89""\xA0""") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2264_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\xE2""\x89""\xA4""") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (">") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2265_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\xE2""\x89""\xA5""") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("[") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("]") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C__3C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<<") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (">>") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("~") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("->") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2E__2E__3C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("..<") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("|") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7C__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("|=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("^") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5E__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("^=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("+") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B__25_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("+%") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("+=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B__25__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("+%=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("-") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D__25_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("-%") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("-=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D__25__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("-%=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("*") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2A__25_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("*%") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2A__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("*=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2A__25__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("*%=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("/") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21__2F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!/") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2F__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("/=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21__2F__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!/=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("%") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21__25_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!%") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("%=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21__25__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!%=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C__3C__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<<=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E__3E__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (">>=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Template Delimiters                                                                       *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                           Template Replacements                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//            Terminal Symbols as end of script in template mark                                                       *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//            Unicode test functions                                                                                   *
//---------------------------------------------------------------------------------------------------------------------*
 
//---------------------------------------------------------------------------------------------------------------------*
//               P A R S E    L E X I C A L    T O K E N                                                               *
//---------------------------------------------------------------------------------------------------------------------*

bool C_Lexique_plm_5F_lexique::parseLexicalToken (void) {
  cTokenFor_plm_5F_lexique token ;
  mLoop = true ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    token.mLexicalAttribute_bigInteger.setToZero () ;
    token.mLexicalAttribute_tokenString.setLengthToZero () ;
    mTokenStartLocation = mCurrentLocation ;
    try{
      if (testForCharWithFunction (isUnicodeLetter)) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        if (token.mTokenCode == -1) {
          token.mTokenCode = search_into_keyWordList (token.mLexicalAttribute_tokenString) ;
        }
        if (token.mTokenCode == -1) {
          token.mTokenCode = kToken_identifier ;
        }
        enterToken (token) ;
      }else if (testForInputUTF32Char (TO_UNICODE ('@'))) {
        if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('.'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
        }else{
          lexicalError (gLexicalMessage_plm_5F_lexique_attributeError COMMA_LINE_AND_SOURCE_FILE) ;
        }
        token.mTokenCode = kToken__40_attribute ;
        enterToken (token) ;
      }else if (testForInputUTF32Char (TO_UNICODE ('$'))) {
        if (testForCharWithFunction (isUnicodeLetter)) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
        }else{
          lexicalError (gLexicalMessage_plm_5F_lexique_typeError COMMA_LINE_AND_SOURCE_FILE) ;
        }
        token.mTokenCode = kToken__24_type ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__30_b, 2, true)) {
        do {
          if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('1'))) {
          ::scanner_routine_enterBinaryDigitIntoBigInt (*this, previousChar (), token.mLexicalAttribute_bigInteger, gLexicalMessage_plm_5F_lexique_internalError) ;
          do {
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('1'))) {
              ::scanner_routine_enterBinaryDigitIntoBigInt (*this, previousChar (), token.mLexicalAttribute_bigInteger, gLexicalMessage_plm_5F_lexique_internalError) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          token.mTokenCode = kToken_integer ;
          enterToken (token) ;
        }else{
          lexicalError (gLexicalMessage_plm_5F_lexique_binaryDigitError COMMA_LINE_AND_SOURCE_FILE) ;
        }
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__30_x, 2, true)) {
        do {
          if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
          ::scanner_routine_enterHexDigitIntoBigInt (*this, previousChar (), token.mLexicalAttribute_bigInteger, gLexicalMessage_plm_5F_lexique_internalError) ;
          do {
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
              ::scanner_routine_enterHexDigitIntoBigInt (*this, previousChar (), token.mLexicalAttribute_bigInteger, gLexicalMessage_plm_5F_lexique_internalError) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          token.mTokenCode = kToken_integer ;
          enterToken (token) ;
        }else{
          lexicalError (gLexicalMessage_plm_5F_lexique_hexDigitError COMMA_LINE_AND_SOURCE_FILE) ;
        }
      }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
        ::scanner_routine_enterDecimalDigitIntoBigInt (*this, previousChar (), token.mLexicalAttribute_bigInteger, gLexicalMessage_plm_5F_lexique_internalError) ;
        do {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            ::scanner_routine_enterDecimalDigitIntoBigInt (*this, previousChar (), token.mLexicalAttribute_bigInteger, gLexicalMessage_plm_5F_lexique_internalError) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        token.mTokenCode = kToken_integer ;
        enterToken (token) ;
      }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
        do {
          if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__5C__22_, 2, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\"')) ;
          }else if (testForInputUTF32Char (TO_UNICODE (' ')) || testForInputUTF32Char (TO_UNICODE ('!')) || testForInputUTF32CharRange (TO_UNICODE ('#'), TO_UNICODE (65533))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
          token.mTokenCode = kToken__22_string_22_ ;
          enterToken (token) ;
        }else{
          lexicalError (gLexicalMessage_plm_5F_lexique_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
        }
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2F__2F_, 2, true)) {
        do {
          if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        enterDroppedTerminal (kToken_comment) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__3E__3E__3D_, 3, true)) {
        token.mTokenCode = kToken__3E__3E__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__3C__3C__3D_, 3, true)) {
        token.mTokenCode = kToken__3C__3C__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2E__2E__3C_, 3, true)) {
        token.mTokenCode = kToken__2E__2E__3C_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2D__25__3D_, 3, true)) {
        token.mTokenCode = kToken__2D__25__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2B__25__3D_, 3, true)) {
        token.mTokenCode = kToken__2B__25__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2A__25__3D_, 3, true)) {
        token.mTokenCode = kToken__2A__25__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__21__2F__3D_, 3, true)) {
        token.mTokenCode = kToken__21__2F__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__21__25__3D_, 3, true)) {
        token.mTokenCode = kToken__21__25__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__7C__3D_, 2, true)) {
        token.mTokenCode = kToken__7C__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__5E__3D_, 2, true)) {
        token.mTokenCode = kToken__5E__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__3E__3E_, 2, true)) {
        token.mTokenCode = kToken__3E__3E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__3D__3D_, 2, true)) {
        token.mTokenCode = kToken__3D__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__3C__3C_, 2, true)) {
        token.mTokenCode = kToken__3C__3C_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2F__3D_, 2, true)) {
        token.mTokenCode = kToken__2F__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2D__3E_, 2, true)) {
        token.mTokenCode = kToken__2D__3E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2D__3D_, 2, true)) {
        token.mTokenCode = kToken__2D__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2D__25_, 2, true)) {
        token.mTokenCode = kToken__2D__25_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2B__3D_, 2, true)) {
        token.mTokenCode = kToken__2B__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2B__25_, 2, true)) {
        token.mTokenCode = kToken__2B__25_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2A__3D_, 2, true)) {
        token.mTokenCode = kToken__2A__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2A__25_, 2, true)) {
        token.mTokenCode = kToken__2A__25_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__26__3D_, 2, true)) {
        token.mTokenCode = kToken__26__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__25__3D_, 2, true)) {
        token.mTokenCode = kToken__25__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__21__2F_, 2, true)) {
        token.mTokenCode = kToken__21__2F_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__21__25_, 2, true)) {
        token.mTokenCode = kToken__21__25_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2265_, 1, true)) {
        token.mTokenCode = kToken__2265_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2264_, 1, true)) {
        token.mTokenCode = kToken__2264_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2260_, 1, true)) {
        token.mTokenCode = kToken__2260_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__7E_, 1, true)) {
        token.mTokenCode = kToken__7E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__7D_, 1, true)) {
        token.mTokenCode = kToken__7D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__7C_, 1, true)) {
        token.mTokenCode = kToken__7C_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__7B_, 1, true)) {
        token.mTokenCode = kToken__7B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__5F_, 1, true)) {
        token.mTokenCode = kToken__5F_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__5E_, 1, true)) {
        token.mTokenCode = kToken__5E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__5D_, 1, true)) {
        token.mTokenCode = kToken__5D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__5B_, 1, true)) {
        token.mTokenCode = kToken__5B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__3E_, 1, true)) {
        token.mTokenCode = kToken__3E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__3D_, 1, true)) {
        token.mTokenCode = kToken__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__3C_, 1, true)) {
        token.mTokenCode = kToken__3C_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__3B_, 1, true)) {
        token.mTokenCode = kToken__3B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__3A_, 1, true)) {
        token.mTokenCode = kToken__3A_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2F_, 1, true)) {
        token.mTokenCode = kToken__2F_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2E_, 1, true)) {
        token.mTokenCode = kToken__2E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2D_, 1, true)) {
        token.mTokenCode = kToken__2D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2C_, 1, true)) {
        token.mTokenCode = kToken__2C_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2B_, 1, true)) {
        token.mTokenCode = kToken__2B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2A_, 1, true)) {
        token.mTokenCode = kToken__2A_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__29_, 1, true)) {
        token.mTokenCode = kToken__29_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__28_, 1, true)) {
        token.mTokenCode = kToken__28_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__26_, 1, true)) {
        token.mTokenCode = kToken__26_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__25_, 1, true)) {
        token.mTokenCode = kToken__25_ ;
        enterToken (token) ;
      }else if (testForInputUTF32Char (TO_UNICODE ('\?'))) {
        const C_LocationInSource currentLocationForTag_onlyInterrogationMark = mCurrentLocation ;
        const C_LocationInSource endLocationForTag_onlyInterrogationMark = mTokenEndLocation ;
        const utf32 currentCharForTag_onlyInterrogationMark = mCurrentChar ;
        if (testForInputUTF32Char (TO_UNICODE ('!'))) {
          const C_LocationInSource currentLocationForTag_onlyExclamationInterrogationMark = mCurrentLocation ;
          const C_LocationInSource endLocationForTag_onlyExclamationInterrogationMark = mTokenEndLocation ;
          const utf32 currentCharForTag_onlyExclamationInterrogationMark = mCurrentChar ;
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
            do {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
              }else{
                mLoop = false ;
              }
            }while (mLoop) ;
            mLoop = true ;
            if (testForInputUTF32Char (TO_UNICODE (':'))) {
              token.mTokenCode = kToken__3F__21_selector_3A_ ;
              enterToken (token) ;
            }else{
              ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
              mCurrentLocation = currentLocationForTag_onlyExclamationInterrogationMark ;
              mTokenEndLocation = endLocationForTag_onlyExclamationInterrogationMark ;
              mCurrentChar = currentCharForTag_onlyExclamationInterrogationMark ;
              token.mTokenCode = kToken__3F__21_selector_3A_ ;
              enterToken (token) ;
            }
          }else{
            token.mTokenCode = kToken__3F__21_selector_3A_ ;
            enterToken (token) ;
          }
        }else if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          if (testForInputUTF32Char (TO_UNICODE (':'))) {
            token.mTokenCode = kToken__3F_selector_3A_ ;
            enterToken (token) ;
          }else{
            ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
            mCurrentLocation = currentLocationForTag_onlyInterrogationMark ;
            mTokenEndLocation = endLocationForTag_onlyInterrogationMark ;
            mCurrentChar = currentCharForTag_onlyInterrogationMark ;
            token.mTokenCode = kToken__3F_selector_3A_ ;
            enterToken (token) ;
          }
        }else{
          token.mTokenCode = kToken__3F_selector_3A_ ;
          enterToken (token) ;
        }
      }else if (testForInputUTF32Char (TO_UNICODE ('!'))) {
        const C_LocationInSource currentLocationForTag_onlyExclamationMark = mCurrentLocation ;
        const C_LocationInSource endLocationForTag_onlyExclamationMark = mTokenEndLocation ;
        const utf32 currentCharForTag_onlyExclamationMark = mCurrentChar ;
        if (testForInputUTF32Char (TO_UNICODE ('\?'))) {
          const C_LocationInSource currentLocationForTag_onlyInterrogationExclamationMark = mCurrentLocation ;
          const C_LocationInSource endLocationForTag_onlyInterrogationExclamationMark = mTokenEndLocation ;
          const utf32 currentCharForTag_onlyInterrogationExclamationMark = mCurrentChar ;
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
            do {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
              }else{
                mLoop = false ;
              }
            }while (mLoop) ;
            mLoop = true ;
            if (testForInputUTF32Char (TO_UNICODE (':'))) {
              token.mTokenCode = kToken__21__3F_selector_3A_ ;
              enterToken (token) ;
            }else{
              ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
              mCurrentLocation = currentLocationForTag_onlyInterrogationExclamationMark ;
              mTokenEndLocation = endLocationForTag_onlyInterrogationExclamationMark ;
              mCurrentChar = currentCharForTag_onlyInterrogationExclamationMark ;
              token.mTokenCode = kToken__21__3F_selector_3A_ ;
              enterToken (token) ;
            }
          }else{
            token.mTokenCode = kToken__21__3F_selector_3A_ ;
            enterToken (token) ;
          }
        }else if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          if (testForInputUTF32Char (TO_UNICODE (':'))) {
            token.mTokenCode = kToken__21_selector_3A_ ;
            enterToken (token) ;
          }else{
            ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
            mCurrentLocation = currentLocationForTag_onlyExclamationMark ;
            mTokenEndLocation = endLocationForTag_onlyExclamationMark ;
            mCurrentChar = currentCharForTag_onlyExclamationMark ;
            token.mTokenCode = kToken__21_selector_3A_ ;
            enterToken (token) ;
          }
        }else{
          token.mTokenCode = kToken__21_selector_3A_ ;
          enterToken (token) ;
        }
      }else if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE (' '))) {
      }else if (testForInputUTF32Char (TO_UNICODE ('\0'))) { // End of source text ? 
        token.mTokenCode = kToken_ ; // Empty string code
      }else{ // Unknown input character
        unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;
        token.mTokenCode = -1 ; // No token
        advance () ; // ... go throught unknown character
      }
    }catch (const C_lexicalErrorException &) {
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
  }
  if (UNICODE_VALUE (mCurrentChar) == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         E N T E R    T O K E N                                                                      *
//---------------------------------------------------------------------------------------------------------------------*

void C_Lexique_plm_5F_lexique::enterToken (cTokenFor_plm_5F_lexique & ioToken) {
  cTokenFor_plm_5F_lexique * ptr = NULL ;
  macroMyNew (ptr, cTokenFor_plm_5F_lexique ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_bigInteger = ioToken.mLexicalAttribute_bigInteger ;
  ptr->mLexicalAttribute_tokenString = ioToken.mLexicalAttribute_tokenString ;
  enterTokenFromPointer (ptr) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//               A T T R I B U T E   A C C E S S                                                                       *
//---------------------------------------------------------------------------------------------------------------------*

C_BigInt C_Lexique_plm_5F_lexique::attributeValue_bigInteger (void) const {
  cTokenFor_plm_5F_lexique * ptr = (cTokenFor_plm_5F_lexique *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_bigInteger ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_plm_5F_lexique::attributeValue_tokenString (void) const {
  cTokenFor_plm_5F_lexique * ptr = (cTokenFor_plm_5F_lexique *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_tokenString ;
}

//---------------------------------------------------------------------------------------------------------------------*
//         A S S I G N    F R O M    A T T R I B U T E                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint C_Lexique_plm_5F_lexique::synthetizedAttribute_bigInteger (void) const {
  cTokenFor_plm_5F_lexique * ptr = (cTokenFor_plm_5F_lexique *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_plm_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_bigint value (ptr->mLexicalAttribute_bigInteger) ;
  GALGAS_lbigint result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring C_Lexique_plm_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_plm_5F_lexique * ptr = (cTokenFor_plm_5F_lexique *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_plm_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_tokenString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         I N T R O S P E C T I O N                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist C_Lexique_plm_5F_lexique::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("@attribute") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("$type") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("integer") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\"string\"") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?selector:") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?!selector:") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!selector:") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!\?selector:") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("addressof") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("and") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("assert") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("at") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("boot") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("case") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("check") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("convert") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("do") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("else") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("enum") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("exit") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("extend") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("extension") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("extern") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("for") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("func") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("guard") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("if") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("import") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("in") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("init") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("isr") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("let") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("loop") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("module") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("no") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("nop") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("not") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("on") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("or") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("panic") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("primitive") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("priority") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("public") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("register") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("required") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("safe") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("section") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("self") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("service") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("setup") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sizeof") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("struct") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("stackSize") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("staticArray") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("switch") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sync") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("system") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("target") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("task") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("truncate") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("type") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("var") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("user") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("when") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("while") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("xor") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("yes") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (":") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (".") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (",") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (";") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("{") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("}") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("(") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (")") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("_") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("==") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\xE2""\x89""\xA0""") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\xE2""\x89""\xA4""") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\xE2""\x89""\xA5""") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("[") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("]") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">>") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("~") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("->") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("..<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("|") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("|=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("^") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("^=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("+") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("+%") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("+=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("+%=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("-") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("-%") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("-=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("-%=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("*") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("*%") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("*=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("*%=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("/") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!/") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("/=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!/=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!%") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!%=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<<=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">>=") COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void getKeywordLists_plm_5F_lexique (TC_UniqueArray <C_String> & ioList) {
  ioList.appendObject ("plm_lexique:delimitorsList") ;
  ioList.appendObject ("plm_lexique:keyWordList") ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void getKeywordsForIdentifier_plm_5F_lexique (const C_String & inIdentifier,
                                                     bool & ioFound,
                                                     TC_UniqueArray <C_String> & ioList) {
  if (inIdentifier == "plm_lexique:delimitorsList") {
    ioFound = true ;
    ioList.appendObject ("%") ;
    ioList.appendObject ("&") ;
    ioList.appendObject ("(") ;
    ioList.appendObject (")") ;
    ioList.appendObject ("*") ;
    ioList.appendObject ("+") ;
    ioList.appendObject (",") ;
    ioList.appendObject ("-") ;
    ioList.appendObject (".") ;
    ioList.appendObject ("/") ;
    ioList.appendObject (":") ;
    ioList.appendObject (";") ;
    ioList.appendObject ("<") ;
    ioList.appendObject ("=") ;
    ioList.appendObject (">") ;
    ioList.appendObject ("[") ;
    ioList.appendObject ("]") ;
    ioList.appendObject ("^") ;
    ioList.appendObject ("_") ;
    ioList.appendObject ("{") ;
    ioList.appendObject ("|") ;
    ioList.appendObject ("}") ;
    ioList.appendObject ("~") ;
    ioList.appendObject ("\xE2""\x89""\xA0""") ;
    ioList.appendObject ("\xE2""\x89""\xA4""") ;
    ioList.appendObject ("\xE2""\x89""\xA5""") ;
    ioList.appendObject ("!%") ;
    ioList.appendObject ("!/") ;
    ioList.appendObject ("%=") ;
    ioList.appendObject ("&=") ;
    ioList.appendObject ("*%") ;
    ioList.appendObject ("*=") ;
    ioList.appendObject ("+%") ;
    ioList.appendObject ("+=") ;
    ioList.appendObject ("-%") ;
    ioList.appendObject ("-=") ;
    ioList.appendObject ("->") ;
    ioList.appendObject ("/=") ;
    ioList.appendObject ("<<") ;
    ioList.appendObject ("==") ;
    ioList.appendObject (">>") ;
    ioList.appendObject ("^=") ;
    ioList.appendObject ("|=") ;
    ioList.appendObject ("!%=") ;
    ioList.appendObject ("!/=") ;
    ioList.appendObject ("*%=") ;
    ioList.appendObject ("+%=") ;
    ioList.appendObject ("-%=") ;
    ioList.appendObject ("..<") ;
    ioList.appendObject ("<<=") ;
    ioList.appendObject (">>=") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "plm_lexique:keyWordList") {
    ioFound = true ;
    ioList.appendObject ("at") ;
    ioList.appendObject ("do") ;
    ioList.appendObject ("if") ;
    ioList.appendObject ("in") ;
    ioList.appendObject ("no") ;
    ioList.appendObject ("on") ;
    ioList.appendObject ("or") ;
    ioList.appendObject ("and") ;
    ioList.appendObject ("for") ;
    ioList.appendObject ("isr") ;
    ioList.appendObject ("let") ;
    ioList.appendObject ("nop") ;
    ioList.appendObject ("not") ;
    ioList.appendObject ("var") ;
    ioList.appendObject ("xor") ;
    ioList.appendObject ("yes") ;
    ioList.appendObject ("boot") ;
    ioList.appendObject ("case") ;
    ioList.appendObject ("else") ;
    ioList.appendObject ("enum") ;
    ioList.appendObject ("exit") ;
    ioList.appendObject ("func") ;
    ioList.appendObject ("init") ;
    ioList.appendObject ("loop") ;
    ioList.appendObject ("safe") ;
    ioList.appendObject ("self") ;
    ioList.appendObject ("sync") ;
    ioList.appendObject ("task") ;
    ioList.appendObject ("type") ;
    ioList.appendObject ("user") ;
    ioList.appendObject ("when") ;
    ioList.appendObject ("check") ;
    ioList.appendObject ("guard") ;
    ioList.appendObject ("panic") ;
    ioList.appendObject ("setup") ;
    ioList.appendObject ("while") ;
    ioList.appendObject ("assert") ;
    ioList.appendObject ("extend") ;
    ioList.appendObject ("extern") ;
    ioList.appendObject ("import") ;
    ioList.appendObject ("module") ;
    ioList.appendObject ("public") ;
    ioList.appendObject ("sizeof") ;
    ioList.appendObject ("struct") ;
    ioList.appendObject ("switch") ;
    ioList.appendObject ("system") ;
    ioList.appendObject ("target") ;
    ioList.appendObject ("convert") ;
    ioList.appendObject ("section") ;
    ioList.appendObject ("service") ;
    ioList.appendObject ("priority") ;
    ioList.appendObject ("register") ;
    ioList.appendObject ("required") ;
    ioList.appendObject ("truncate") ;
    ioList.appendObject ("addressof") ;
    ioList.appendObject ("extension") ;
    ioList.appendObject ("primitive") ;
    ioList.appendObject ("stackSize") ;
    ioList.appendObject ("staticArray") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static cLexiqueIntrospection lexiqueIntrospection_plm_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_plm_5F_lexique, getKeywordsForIdentifier_plm_5F_lexique) ;

//---------------------------------------------------------------------------------------------------------------------*
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

uint32_t C_Lexique_plm_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [121] = {0,
    0 /* plm_lexique_1_identifier */,
    2 /* plm_lexique_1__40_attribute */,
    3 /* plm_lexique_1__24_type */,
    4 /* plm_lexique_1_integer */,
    5 /* plm_lexique_1__22_string_22_ */,
    6 /* plm_lexique_1_comment */,
    8 /* plm_lexique_1__3F_selector_3A_ */,
    8 /* plm_lexique_1__3F__21_selector_3A_ */,
    8 /* plm_lexique_1__21_selector_3A_ */,
    8 /* plm_lexique_1__21__3F_selector_3A_ */,
    1 /* plm_lexique_1_addressof */,
    1 /* plm_lexique_1_and */,
    1 /* plm_lexique_1_assert */,
    1 /* plm_lexique_1_at */,
    1 /* plm_lexique_1_boot */,
    1 /* plm_lexique_1_case */,
    1 /* plm_lexique_1_check */,
    1 /* plm_lexique_1_convert */,
    1 /* plm_lexique_1_do */,
    1 /* plm_lexique_1_else */,
    1 /* plm_lexique_1_enum */,
    1 /* plm_lexique_1_exit */,
    1 /* plm_lexique_1_extend */,
    1 /* plm_lexique_1_extension */,
    1 /* plm_lexique_1_extern */,
    1 /* plm_lexique_1_for */,
    1 /* plm_lexique_1_func */,
    1 /* plm_lexique_1_guard */,
    1 /* plm_lexique_1_if */,
    1 /* plm_lexique_1_import */,
    1 /* plm_lexique_1_in */,
    1 /* plm_lexique_1_init */,
    1 /* plm_lexique_1_isr */,
    1 /* plm_lexique_1_let */,
    1 /* plm_lexique_1_loop */,
    1 /* plm_lexique_1_module */,
    1 /* plm_lexique_1_no */,
    1 /* plm_lexique_1_nop */,
    1 /* plm_lexique_1_not */,
    1 /* plm_lexique_1_on */,
    1 /* plm_lexique_1_or */,
    1 /* plm_lexique_1_panic */,
    1 /* plm_lexique_1_primitive */,
    1 /* plm_lexique_1_priority */,
    1 /* plm_lexique_1_public */,
    1 /* plm_lexique_1_register */,
    1 /* plm_lexique_1_required */,
    1 /* plm_lexique_1_safe */,
    1 /* plm_lexique_1_section */,
    1 /* plm_lexique_1_self */,
    1 /* plm_lexique_1_service */,
    1 /* plm_lexique_1_setup */,
    1 /* plm_lexique_1_sizeof */,
    1 /* plm_lexique_1_struct */,
    1 /* plm_lexique_1_stackSize */,
    1 /* plm_lexique_1_staticArray */,
    1 /* plm_lexique_1_switch */,
    1 /* plm_lexique_1_sync */,
    1 /* plm_lexique_1_system */,
    1 /* plm_lexique_1_target */,
    1 /* plm_lexique_1_task */,
    1 /* plm_lexique_1_truncate */,
    1 /* plm_lexique_1_type */,
    1 /* plm_lexique_1_var */,
    1 /* plm_lexique_1_user */,
    1 /* plm_lexique_1_when */,
    1 /* plm_lexique_1_while */,
    1 /* plm_lexique_1_xor */,
    1 /* plm_lexique_1_yes */,
    7 /* plm_lexique_1__3A_ */,
    7 /* plm_lexique_1__2E_ */,
    7 /* plm_lexique_1__2C_ */,
    7 /* plm_lexique_1__3B_ */,
    7 /* plm_lexique_1__7B_ */,
    7 /* plm_lexique_1__7D_ */,
    7 /* plm_lexique_1__3D_ */,
    7 /* plm_lexique_1__28_ */,
    7 /* plm_lexique_1__29_ */,
    7 /* plm_lexique_1__5F_ */,
    7 /* plm_lexique_1__3D__3D_ */,
    7 /* plm_lexique_1__2260_ */,
    7 /* plm_lexique_1__3C_ */,
    7 /* plm_lexique_1__2264_ */,
    7 /* plm_lexique_1__3E_ */,
    7 /* plm_lexique_1__2265_ */,
    7 /* plm_lexique_1__5B_ */,
    7 /* plm_lexique_1__5D_ */,
    7 /* plm_lexique_1__3C__3C_ */,
    7 /* plm_lexique_1__3E__3E_ */,
    7 /* plm_lexique_1__7E_ */,
    7 /* plm_lexique_1__2D__3E_ */,
    7 /* plm_lexique_1__2E__2E__3C_ */,
    7 /* plm_lexique_1__7C_ */,
    7 /* plm_lexique_1__7C__3D_ */,
    7 /* plm_lexique_1__26_ */,
    7 /* plm_lexique_1__26__3D_ */,
    7 /* plm_lexique_1__5E_ */,
    7 /* plm_lexique_1__5E__3D_ */,
    7 /* plm_lexique_1__2B_ */,
    7 /* plm_lexique_1__2B__25_ */,
    7 /* plm_lexique_1__2B__3D_ */,
    7 /* plm_lexique_1__2B__25__3D_ */,
    7 /* plm_lexique_1__2D_ */,
    7 /* plm_lexique_1__2D__25_ */,
    7 /* plm_lexique_1__2D__3D_ */,
    7 /* plm_lexique_1__2D__25__3D_ */,
    7 /* plm_lexique_1__2A_ */,
    7 /* plm_lexique_1__2A__25_ */,
    7 /* plm_lexique_1__2A__3D_ */,
    7 /* plm_lexique_1__2A__25__3D_ */,
    7 /* plm_lexique_1__2F_ */,
    7 /* plm_lexique_1__21__2F_ */,
    7 /* plm_lexique_1__2F__3D_ */,
    7 /* plm_lexique_1__21__2F__3D_ */,
    7 /* plm_lexique_1__25_ */,
    7 /* plm_lexique_1__21__25_ */,
    7 /* plm_lexique_1__25__3D_ */,
    7 /* plm_lexique_1__21__25__3D_ */,
    7 /* plm_lexique_1__3C__3C__3D_ */,
    7 /* plm_lexique_1__3E__3E__3D_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                                            *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_plm_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
  C_String result ;
  if (inStyleIndex < 9) {
    static const char * kStyleArray [9] = {
      "",
      "keywordsStyle",
      "attributeStyle",
      "typeStyle",
      "integerStyle",
      "stringStyle",
      "commentStyle",
      "delimitersStyle",
      "selectorStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_import_5F_file_i0_ (GALGAS_lstringlist & ioArgument_ioImportedFileList,
                                                                   C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_import) COMMA_SOURCE_FILE ("syntax-grammar.galgas", 14)) ;
  GALGAS_lstring var_importedFile_758 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("syntax-grammar.galgas", 15)) ;
  ioArgument_ioImportedFileList.addAssign_operation (var_importedFile_758  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 16)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_importedFile_758.getter_string (HERE).getter_pathExtension (SOURCE_FILE ("syntax-grammar.galgas", 17)).objectCompare (GALGAS_string ("plm"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_importedFile_758.getter_location (SOURCE_FILE ("syntax-grammar.galgas", 18)), GALGAS_string ("the pah extension should be .plm"), fixItArray1  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 18)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_import_5F_file_i0_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_import) COMMA_SOURCE_FILE ("syntax-grammar.galgas", 14)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("syntax-grammar.galgas", 15)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_start_5F_symbol_i1_ (GALGAS_ast & ioArgument_ioAst,
                                                                    GALGAS_lstringlist & outArgument_outImportedFileList,
                                                                    GALGAS_location & outArgument_outEndOfSourceFile,
                                                                    C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outImportedFileList.drop () ; // Release 'out' argument
  outArgument_outEndOfSourceFile.drop () ; // Release 'out' argument
  outArgument_outImportedFileList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("syntax-grammar.galgas", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_0 (inCompiler)) {
    case 2: {
      nt_declaration_ (ioArgument_ioAst, inCompiler) ;
    } break ;
    case 3: {
      nt_function_ (ioArgument_ioAst.mProperty_mStandAloneFunctionDeclarationListAST, inCompiler) ;
    } break ;
    case 4: {
      nt_system_5F_routine_ (ioArgument_ioAst.mProperty_mStandAloneSystemRoutineListAST, inCompiler) ;
    } break ;
    case 5: {
      nt_isr_ (ioArgument_ioAst.mProperty_mISRDeclarationListAST, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("syntax-grammar.galgas", 39)), inCompiler) ;
    } break ;
    case 6: {
      nt_import_5F_file_ (outArgument_outImportedFileList, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outEndOfSourceFile = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_start_5F_symbol_i1_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_0 (inCompiler)) {
    case 2: {
      nt_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_function_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_system_5F_routine_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_isr_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_import_5F_file_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i2_ (GALGAS_ast & ioArgument_ioAST,
                                                                C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_type) COMMA_SOURCE_FILE ("declaration-type.galgas", 10)) ;
  GALGAS_lstring var_newTypeName_592 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-type.galgas", 11)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("declaration-type.galgas", 12)) ;
  GALGAS_abstractDeclarationAST var_declaration_653 ;
  nt_declaration_5F_type_ (var_newTypeName_592, var_declaration_653, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (var_declaration_653  COMMA_SOURCE_FILE ("declaration-type.galgas", 14)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i2_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_type) COMMA_SOURCE_FILE ("declaration-type.galgas", 10)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-type.galgas", 11)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("declaration-type.galgas", 12)) ;
  nt_declaration_5F_type_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_5F_type_i3_ (const GALGAS_lstring constinArgument_inNewTypeName,
                                                                        GALGAS_abstractDeclarationAST & outArgument_outDeclaration,
                                                                        C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outDeclaration.drop () ; // Release 'out' argument
  GALGAS_lstring var_elementTypeName_1436 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("type-array.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("type-array.galgas", 28)) ;
  GALGAS_expressionAST var_sizeExpression_1481 ;
  nt_expression_ (var_sizeExpression_1481, inCompiler) ;
  GALGAS_location var_sizeExpressionLocation_1512 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("type-array.galgas", 31)) ;
  outArgument_outDeclaration = GALGAS_typeArrayDeclarationAST::constructor_new (constinArgument_inNewTypeName, var_elementTypeName_1436, var_sizeExpression_1481, var_sizeExpressionLocation_1512  COMMA_SOURCE_FILE ("type-array.galgas", 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_5F_type_i3_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("type-array.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("type-array.galgas", 28)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("type-array.galgas", 31)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i4_ (GALGAS_ast & ioArgument_ioAST,
                                                                C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_enum) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 26)) ;
  GALGAS_lstring var_enumName_1295 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 28)) ;
  GALGAS_enumerationConstantList var_enumCaseList_1345 = GALGAS_enumerationConstantList::constructor_emptyList (SOURCE_FILE ("type-enumeration-declaration.galgas", 29)) ;
  GALGAS_bigint var_idx_1362 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_case) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 32)) ;
    GALGAS_lstring var_constantName_1428 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 33)) ;
    var_enumCaseList_1345.addAssign_operation (var_constantName_1428, var_idx_1362  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 34)) ;
    var_idx_1362 = var_idx_1362.add_operation (GALGAS_uint ((uint32_t) 1U).getter_bigint (SOURCE_FILE ("type-enumeration-declaration.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 35)) ;
    switch (select_plm_5F_syntax_1 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 38)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_enumerationDeclarationAST::constructor_new (var_enumName_1295, var_enumCaseList_1345  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 39))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i4_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_enum) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 26)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_case) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 32)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 33)) ;
    switch (select_plm_5F_syntax_1 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 38)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i5_ (GALGAS_structurePropertyListAST & ioArgument_ioFieldListAST,
                                                                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_public_2222 ;
  switch (select_plm_5F_syntax_2 (inCompiler)) {
  case 1: {
    var_public_2222 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_public) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 51)) ;
    var_public_2222 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  nt_struct_5F_property_5F_declaration_ (var_public_2222, ioArgument_ioFieldListAST, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i5_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_public) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  nt_struct_5F_property_5F_declaration_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_private_5F_struct_5F_property_5F_declaration_i6_ (GALGAS_structurePropertyListAST & ioArgument_ioFieldListAST,
                                                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  nt_struct_5F_property_5F_declaration_ (GALGAS_bool (false), ioArgument_ioFieldListAST, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_private_5F_struct_5F_property_5F_declaration_i6_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_struct_5F_property_5F_declaration_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_struct_5F_property_5F_declaration_i7_ (const GALGAS_bool constinArgument_isPublic,
                                                                                      GALGAS_structurePropertyListAST & ioArgument_ioFieldListAST,
                                                                                      C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_constant_2888 ;
  switch (select_plm_5F_syntax_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_var) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 68)) ;
    var_constant_2888 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_let) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 71)) ;
    var_constant_2888 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_fieldName_3015 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 74)) ;
  switch (select_plm_5F_syntax_4 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_typeName_3055 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 76)) ;
    switch (select_plm_5F_syntax_5 (inCompiler)) {
    case 1: {
      ioArgument_ioFieldListAST.addAssign_operation (var_fieldName_3015, var_constant_2888, constinArgument_isPublic, var_typeName_3055, GALGAS_structurePropertyInitOptionalExpressionAST::constructor_noExpression (SOURCE_FILE ("type-structure-declaration.galgas", 78))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 78)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 80)) ;
      GALGAS_expressionAST var_initExpression_3212 ;
      nt_expression_ (var_initExpression_3212, inCompiler) ;
      ioArgument_ioFieldListAST.addAssign_operation (var_fieldName_3015, var_constant_2888, constinArgument_isPublic, var_typeName_3055, GALGAS_structurePropertyInitOptionalExpressionAST::constructor_expression (var_initExpression_3212  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 82))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 82)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 85)) ;
    GALGAS_expressionAST var_initExpression_3390 ;
    nt_expression_ (var_initExpression_3390, inCompiler) ;
    ioArgument_ioFieldListAST.addAssign_operation (var_fieldName_3015, var_constant_2888, constinArgument_isPublic, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 87)), GALGAS_structurePropertyInitOptionalExpressionAST::constructor_expression (var_initExpression_3390  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 87))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 87)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_struct_5F_property_5F_declaration_i7_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_var) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 68)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_let) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 71)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 74)) ;
  switch (select_plm_5F_syntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 76)) ;
    switch (select_plm_5F_syntax_5 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 80)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 85)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i8_ (GALGAS_ast & ioArgument_ioAST,
                                                                C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_struct) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 94)) ;
  GALGAS_lstring var_structureName_3720 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 95)) ;
  GALGAS_lstringlist var_attributeList_3751 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 96)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_6 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_3811 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__40_attribute) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 99)) ;
      var_attributeList_3751.addAssign_operation (var_attribute_3811  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 100)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 102)) ;
  GALGAS_functionDeclarationListAST var_procedureDeclarationListAST_3922 = GALGAS_functionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 103)) ;
  GALGAS_structurePropertyListAST var_fieldList_3967 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 104)) ;
  GALGAS_systemRoutineDeclarationListAST var_systemRoutineListAST_4030 = GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 105)) ;
  GALGAS_guardDeclarationListAST var_guardListAST_4077 = GALGAS_guardDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 106)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_plm_5F_syntax_7 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (var_fieldList_3967, inCompiler) ;
    } break ;
    case 3: {
      nt_function_ (var_procedureDeclarationListAST_3922, inCompiler) ;
    } break ;
    case 4: {
      nt_system_5F_routine_ (var_systemRoutineListAST_4030, inCompiler) ;
    } break ;
    case 5: {
      nt_guard_ (var_guardListAST_4077, inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 117)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 119)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_structureDeclarationAST::constructor_new (var_structureName_3720, var_attributeList_3751, GALGAS_bool (true), var_fieldList_3967, var_procedureDeclarationListAST_3922, var_systemRoutineListAST_4030, var_guardListAST_4077  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 120))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 120)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i8_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_struct) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 94)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 95)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__40_attribute) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 99)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 102)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_plm_5F_syntax_7 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_function_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_system_5F_routine_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_guard_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 117)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 119)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_5F_type_i9_ (const GALGAS_lstring constinArgument_inNewTypeName,
                                                                        GALGAS_abstractDeclarationAST & outArgument_outDeclaration,
                                                                        C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outDeclaration.drop () ; // Release 'out' argument
  GALGAS_lstring var_aliasedTypeName_1357 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("type-alias.galgas", 25)) ;
  outArgument_outDeclaration = GALGAS_typeAliasDeclaration::constructor_new (constinArgument_inNewTypeName, var_aliasedTypeName_1357  COMMA_SOURCE_FILE ("type-alias.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_5F_type_i9_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("type-alias.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i10_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_extension) COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 22)) ;
  GALGAS_lstring var_typeName_1207 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 23)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 24)) ;
  GALGAS_functionDeclarationListAST var_procedureDeclarationListAST_1275 = GALGAS_functionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-extension-declaration.galgas", 25)) ;
  GALGAS_structurePropertyListAST var_propertyList_1323 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("type-extension-declaration.galgas", 26)) ;
  GALGAS_systemRoutineDeclarationListAST var_svcListAST_1376 = GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-extension-declaration.galgas", 27)) ;
  GALGAS_guardDeclarationListAST var_guardListAST_1423 = GALGAS_guardDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-extension-declaration.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_8 (inCompiler)) {
    case 2: {
      nt_property_5F_in_5F_extension_ (var_propertyList_1323, inCompiler) ;
    } break ;
    case 3: {
      nt_function_ (var_procedureDeclarationListAST_1275, inCompiler) ;
    } break ;
    case 4: {
      nt_system_5F_routine_ (var_svcListAST_1376, inCompiler) ;
    } break ;
    case 5: {
      nt_guard_ (var_guardListAST_1423, inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 39)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 41)) ;
  ioArgument_ioAST.mProperty_mExtensionDeclarationListAST.addAssign_operation (var_typeName_1207, var_procedureDeclarationListAST_1275, var_propertyList_1323, var_svcListAST_1376, var_guardListAST_1423  COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i10_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_extension) COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 22)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 23)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 24)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_8 (inCompiler)) {
    case 2: {
      nt_property_5F_in_5F_extension_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_function_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_system_5F_routine_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_guard_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 39)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 41)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_property_5F_in_5F_extension_i11_ (GALGAS_structurePropertyListAST & ioArgument_ioPropertyList,
                                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_public_2042 ;
  switch (select_plm_5F_syntax_9 (inCompiler)) {
  case 1: {
    var_public_2042 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_public) COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 57)) ;
    var_public_2042 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_constant_2143 ;
  switch (select_plm_5F_syntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_var) COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 62)) ;
    var_constant_2143 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_let) COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 65)) ;
    var_constant_2143 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_fieldName_2270 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 68)) ;
  GALGAS_lstring var_typeName_2297 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 69)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 70)) ;
  GALGAS_expressionAST var_initExpression_2342 ;
  nt_expression_ (var_initExpression_2342, inCompiler) ;
  ioArgument_ioPropertyList.addAssign_operation (var_fieldName_2270, var_constant_2143, var_public_2042, var_typeName_2297, GALGAS_structurePropertyInitOptionalExpressionAST::constructor_expression (var_initExpression_2342  COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 72))  COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_property_5F_in_5F_extension_i11_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_public) COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  switch (select_plm_5F_syntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_var) COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 62)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_let) COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 65)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 68)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 69)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 70)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_5F_type_i12_ (const GALGAS_lstring constinArgument_inNewTypeName,
                                                                         GALGAS_abstractDeclarationAST & outArgument_outDeclaration,
                                                                         C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outDeclaration.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 28)) ;
  GALGAS_expressionAST var_sizeExpression_1461 ;
  nt_expression_ (var_sizeExpression_1461, inCompiler) ;
  GALGAS_location var_sizeExpressionLocation_1492 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 31)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 32)) ;
  GALGAS_lstringlist var_attributeList_1556 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 33)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_11 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_1616 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__40_attribute) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 36)) ;
      var_attributeList_1556.addAssign_operation (var_attribute_1616  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 37)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outDeclaration = GALGAS_opaqueTypeDeclarationAST::constructor_new (constinArgument_inNewTypeName, var_attributeList_1556, var_sizeExpression_1461, var_sizeExpressionLocation_1492  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_5F_type_i12_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 28)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 31)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_11 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__40_attribute) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 36)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i13_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_register) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 54)) ;
  GALGAS_controlRegisterList var_registerDeclarationList_2382 = GALGAS_controlRegisterList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 55)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_registerDeclaration_ (var_registerDeclarationList_2382, inCompiler) ;
    switch (select_plm_5F_syntax_12 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_registerTypeName_2505 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 60)) ;
  GALGAS_controlRegisterBitSliceList var_registerBitSliceList_2559 = GALGAS_controlRegisterBitSliceList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 61)) ;
  switch (select_plm_5F_syntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 64)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_controlRegisterBitSlice var_registerBitSlice_2655 ;
      switch (select_plm_5F_syntax_15 (inCompiler)) {
      case 1: {
        GALGAS_lbigint var_unusedBitCount_2719 = inCompiler->synthetizedAttribute_bigInteger () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 68)) ;
        var_registerBitSlice_2655 = GALGAS_controlRegisterBitSlice::constructor_unusedBits (var_unusedBitCount_2719  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 69)) ;
      } break ;
      case 2: {
        GALGAS_lstring var_bitName_2831 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 71)) ;
        switch (select_plm_5F_syntax_16 (inCompiler)) {
        case 1: {
          var_registerBitSlice_2655 = GALGAS_controlRegisterBitSlice::constructor_namedBit (var_bitName_2831, GALGAS_lbigint::constructor_new (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 73)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 73))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 73))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 73)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 75)) ;
          GALGAS_lbigint var_bitCount_3003 = inCompiler->synthetizedAttribute_bigInteger () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 76)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 77)) ;
          var_registerBitSlice_2655 = GALGAS_controlRegisterBitSlice::constructor_namedBit (var_bitName_2831, var_bitCount_3003  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 78)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      default:
        break ;
      }
      var_registerBitSliceList_2559.addAssign_operation (var_registerBitSlice_2655  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 81)) ;
      switch (select_plm_5F_syntax_14 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 83)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 85)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_controlRegisterDeclarationAST::constructor_new (var_registerDeclarationList_2382, var_registerTypeName_2505, var_registerBitSliceList_2559, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 91))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 87))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 87)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i13_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_register) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 54)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_registerDeclaration_parse (inCompiler) ;
    switch (select_plm_5F_syntax_12 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 60)) ;
  switch (select_plm_5F_syntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 64)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_plm_5F_syntax_15 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 68)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 71)) ;
        switch (select_plm_5F_syntax_16 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 75)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 76)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 77)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      default:
        break ;
      }
      switch (select_plm_5F_syntax_14 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 83)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 85)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_registerDeclaration_i14_ (GALGAS_controlRegisterList & ioArgument_ioRegisterDeclarationList,
                                                                         C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_lstring var_registerName_3635 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 98)) ;
  GALGAS_lstringlist var_attributeList_3666 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 99)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_17 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_3726 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__40_attribute) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 102)) ;
      var_attributeList_3666.addAssign_operation (var_attribute_3726  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 103)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_plm_5F_syntax_18 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_at) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 106)) ;
    GALGAS_expressionAST var_registerAddress_3830 ;
    nt_expression_ (var_registerAddress_3830, inCompiler) ;
    ioArgument_ioRegisterDeclarationList.addAssign_operation (var_registerName_3635, GALGAS_controlRegisterKind::constructor_scalar (SOURCE_FILE ("declaration-control-register.galgas", 110)), var_attributeList_3666, var_registerAddress_3830, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 113))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 108)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 115)) ;
    GALGAS_expressionAST var_sizeExpression_4024 ;
    nt_expression_ (var_sizeExpression_4024, inCompiler) ;
    GALGAS_location var_sizeExpressionLocation_4057 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 117)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 118)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_at) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 119)) ;
    GALGAS_expressionAST var_baseAddressExpression_4141 ;
    nt_expression_ (var_baseAddressExpression_4141, inCompiler) ;
    GALGAS_location var_baseAddressExpressionLocation_4181 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 121)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 122)) ;
    GALGAS_expressionAST var_arrayElementSizeExpression_4259 ;
    nt_expression_ (var_arrayElementSizeExpression_4259, inCompiler) ;
    GALGAS_location var_arrayElementSizeExpressionLocation_4304 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 124)) ;
    ioArgument_ioRegisterDeclarationList.addAssign_operation (var_registerName_3635, GALGAS_controlRegisterKind::constructor_registerArray (var_sizeExpression_4024, var_sizeExpressionLocation_4057, var_arrayElementSizeExpression_4259, var_arrayElementSizeExpressionLocation_4304  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 127)), var_attributeList_3666, var_baseAddressExpression_4141, var_baseAddressExpressionLocation_4181  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 125)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_registerDeclaration_i14_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 98)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__40_attribute) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 102)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_plm_5F_syntax_18 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_at) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 106)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 115)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 118)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_at) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 119)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 122)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i15_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_let) COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 26)) ;
  GALGAS_lstring var_constantName_1364 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 27)) ;
  GALGAS_lstring var_typeName_1386 ;
  switch (select_plm_5F_syntax_19 (inCompiler)) {
  case 1: {
    var_typeName_1386 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-constant.galgas", 30)) ;
  } break ;
  case 2: {
    var_typeName_1386 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 32)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 34)) ;
  GALGAS_expressionAST var_expression_1523 ;
  nt_expression_ (var_expression_1523, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_globalConstantDeclarationAST::constructor_new (var_constantName_1364, var_typeName_1386, var_expression_1523  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 36))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i15_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_let) COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 26)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 27)) ;
  switch (select_plm_5F_syntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 32)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 34)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i16_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_var) COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 72)) ;
  GALGAS_lstring var_varName_2650 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 73)) ;
  GALGAS_lstring var_typeName_2672 ;
  switch (select_plm_5F_syntax_20 (inCompiler)) {
  case 1: {
    var_typeName_2672 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-variable.galgas", 76)) ;
  } break ;
  case 2: {
    var_typeName_2672 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 78)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 80)) ;
  GALGAS_expressionAST var_expression_2809 ;
  nt_expression_ (var_expression_2809, inCompiler) ;
  ioArgument_ioAST.mProperty_mGlobalVarDeclarationListAST.addAssign_operation (var_typeName_2672, var_varName_2650, var_expression_2809, GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 103)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i16_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_var) COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 72)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 73)) ;
  switch (select_plm_5F_syntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 78)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 80)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_module_5F_property_i17_ (GALGAS_modulePropertyListAST & ioArgument_ioPropertyList,
                                                                        C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_constant_2496 ;
  switch (select_plm_5F_syntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_var) COMMA_SOURCE_FILE ("declaration-module.galgas", 61)) ;
    var_constant_2496 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_let) COMMA_SOURCE_FILE ("declaration-module.galgas", 64)) ;
    var_constant_2496 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_fieldName_2623 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-module.galgas", 67)) ;
  switch (select_plm_5F_syntax_22 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_typeName_2663 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-module.galgas", 69)) ;
    switch (select_plm_5F_syntax_23 (inCompiler)) {
    case 1: {
      ioArgument_ioPropertyList.addAssign_operation (var_fieldName_2623, var_constant_2496, var_typeName_2663, GALGAS_structurePropertyInitOptionalExpressionAST::constructor_noExpression (SOURCE_FILE ("declaration-module.galgas", 71))  COMMA_SOURCE_FILE ("declaration-module.galgas", 71)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("declaration-module.galgas", 73)) ;
      GALGAS_expressionAST var_initExpression_2810 ;
      nt_expression_ (var_initExpression_2810, inCompiler) ;
      ioArgument_ioPropertyList.addAssign_operation (var_fieldName_2623, var_constant_2496, var_typeName_2663, GALGAS_structurePropertyInitOptionalExpressionAST::constructor_expression (var_initExpression_2810  COMMA_SOURCE_FILE ("declaration-module.galgas", 75))  COMMA_SOURCE_FILE ("declaration-module.galgas", 75)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("declaration-module.galgas", 78)) ;
    GALGAS_expressionAST var_initExpression_2979 ;
    nt_expression_ (var_initExpression_2979, inCompiler) ;
    ioArgument_ioPropertyList.addAssign_operation (var_fieldName_2623, var_constant_2496, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-module.galgas", 80)), GALGAS_structurePropertyInitOptionalExpressionAST::constructor_expression (var_initExpression_2979  COMMA_SOURCE_FILE ("declaration-module.galgas", 80))  COMMA_SOURCE_FILE ("declaration-module.galgas", 80)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_module_5F_property_i17_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_var) COMMA_SOURCE_FILE ("declaration-module.galgas", 61)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_let) COMMA_SOURCE_FILE ("declaration-module.galgas", 64)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-module.galgas", 67)) ;
  switch (select_plm_5F_syntax_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-module.galgas", 69)) ;
    switch (select_plm_5F_syntax_23 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("declaration-module.galgas", 73)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("declaration-module.galgas", 78)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i18_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_module) COMMA_SOURCE_FILE ("declaration-module.galgas", 87)) ;
  GALGAS_lstring var_moduleName_3303 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-module.galgas", 88)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-module.galgas", 89)) ;
  GALGAS_functionDeclarationListAST var_functionDeclarationListAST_3370 = GALGAS_functionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-module.galgas", 90)) ;
  GALGAS_modulePropertyListAST var_modulePropertyListAST_3424 = GALGAS_modulePropertyListAST::constructor_emptyList (SOURCE_FILE ("declaration-module.galgas", 91)) ;
  GALGAS_guardDeclarationListAST var_guardListAST_3471 = GALGAS_guardDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-module.galgas", 92)) ;
  GALGAS_systemRoutineDeclarationListAST var_svcListAST_3524 = GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-module.galgas", 93)) ;
  GALGAS_initListAST var_initList_3555 = GALGAS_initListAST::constructor_emptyList (SOURCE_FILE ("declaration-module.galgas", 94)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_24 (inCompiler)) {
    case 2: {
      GALGAS_initAST var_init_3616 ;
      nt_declaration_5F_init_ (var_init_3616, var_moduleName_3303, inCompiler) ;
      var_initList_3555.addAssign_operation (var_init_3616  COMMA_SOURCE_FILE ("declaration-module.galgas", 98)) ;
    } break ;
    case 3: {
      nt_isr_ (ioArgument_ioAST.mProperty_mISRDeclarationListAST, var_moduleName_3303, inCompiler) ;
    } break ;
    case 4: {
      nt_module_5F_property_ (var_modulePropertyListAST_3424, inCompiler) ;
    } break ;
    case 5: {
      nt_function_ (var_functionDeclarationListAST_3370, inCompiler) ;
    } break ;
    case 6: {
      nt_system_5F_routine_ (var_svcListAST_3524, inCompiler) ;
    } break ;
    case 7: {
      nt_guard_ (var_guardListAST_3471, inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("declaration-module.galgas", 110)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-module.galgas", 112)) ;
  ioArgument_ioAST.mProperty_mModuleDeclarationListAST.addAssign_operation (GALGAS_moduleDeclarationAST::constructor_new (var_moduleName_3303, var_modulePropertyListAST_3424, var_functionDeclarationListAST_3370, var_svcListAST_3524, var_guardListAST_3471, var_initList_3555  COMMA_SOURCE_FILE ("declaration-module.galgas", 114))  COMMA_SOURCE_FILE ("declaration-module.galgas", 114)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i18_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_module) COMMA_SOURCE_FILE ("declaration-module.galgas", 87)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-module.galgas", 88)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-module.galgas", 89)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_24 (inCompiler)) {
    case 2: {
      nt_declaration_5F_init_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_isr_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_module_5F_property_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_function_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_system_5F_routine_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_guard_parse (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("declaration-module.galgas", 110)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-module.galgas", 112)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i19_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_module) COMMA_SOURCE_FILE ("declaration-module.galgas", 127)) ;
  GALGAS_lstring var_moduleName_4391 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-module.galgas", 128)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("declaration-module.galgas", 129)) ;
  GALGAS_moduleInstanciationArgumentListAST var_moduleInstanciationArgumentList_4471 = GALGAS_moduleInstanciationArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-module.galgas", 130)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_25 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_4530 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_) COMMA_SOURCE_FILE ("declaration-module.galgas", 133)) ;
      GALGAS_expressionAST var_expression_4565 ;
      nt_expression_ (var_expression_4565, inCompiler) ;
      var_moduleInstanciationArgumentList_4471.addAssign_operation (var_selector_4530, var_expression_4565  COMMA_SOURCE_FILE ("declaration-module.galgas", 135)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("declaration-module.galgas", 137)) ;
  ioArgument_ioAST.mProperty_mRequiredModuleListAST.addAssign_operation (var_moduleName_4391, var_moduleInstanciationArgumentList_4471  COMMA_SOURCE_FILE ("declaration-module.galgas", 138)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i19_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_module) COMMA_SOURCE_FILE ("declaration-module.galgas", 127)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-module.galgas", 128)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("declaration-module.galgas", 129)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_) COMMA_SOURCE_FILE ("declaration-module.galgas", 133)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("declaration-module.galgas", 137)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i20_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_staticArray) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 61)) ;
  GALGAS_lstring var_staticListName_2603 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 62)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 63)) ;
  GALGAS_staticListPropertyListAST var_propertyList_2655 = GALGAS_staticListPropertyListAST::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_staticArrayProperty_ (var_propertyList_2655, inCompiler) ;
    switch (select_plm_5F_syntax_26 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 69)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_staticListAST::constructor_new (var_staticListName_2603, var_propertyList_2655, GALGAS_staticListValueListAST::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 70))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 70))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 70)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i20_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_staticArray) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 61)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 62)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 63)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_staticArrayProperty_parse (inCompiler) ;
    switch (select_plm_5F_syntax_26 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 69)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_staticArrayProperty_i21_ (GALGAS_staticListPropertyListAST & ioArgument_ioPropertyList,
                                                                         C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_let) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 76)) ;
  GALGAS_lstring var_propertyName_3076 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 77)) ;
  switch (select_plm_5F_syntax_27 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_typeName_3116 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 79)) ;
    ioArgument_ioPropertyList.addAssign_operation (var_propertyName_3076, GALGAS_staticListPropertyTypeAST::constructor_valueType (var_typeName_3116  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 80))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 80)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_func) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 82)) ;
    GALGAS_mode var_mode_3225 ;
    nt_mode_ (var_mode_3225, inCompiler) ;
    GALGAS_routineFormalArgumentListAST var_formalArgs_3292 ;
    nt_procedure_5F_formal_5F_arguments_ (var_formalArgs_3292, inCompiler) ;
    GALGAS_lstring var_returnType_3318 ;
    switch (select_plm_5F_syntax_28 (inCompiler)) {
    case 1: {
      var_returnType_3318 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 87)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 89)) ;
      var_returnType_3318 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 90)) ;
    } break ;
    default:
      break ;
    }
    ioArgument_ioPropertyList.addAssign_operation (var_propertyName_3076, GALGAS_staticListPropertyTypeAST::constructor_function (var_mode_3225, var_formalArgs_3292, var_returnType_3318  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 92))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 92)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_staticArrayProperty_i21_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_let) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 76)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 77)) ;
  switch (select_plm_5F_syntax_27 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 79)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_func) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 82)) ;
    nt_mode_parse (inCompiler) ;
    nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
    switch (select_plm_5F_syntax_28 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 89)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 90)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i22_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_extend) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 101)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_staticArray) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 102)) ;
  GALGAS_lstring var_staticListName_3913 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 103)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 104)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_extendStaticListElementListAST var_expressions_3982 = GALGAS_extendStaticListElementListAST::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 106)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      nt_staticArray_5F_exp_ (var_expressions_3982, inCompiler) ;
      switch (select_plm_5F_syntax_30 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 110)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    ioArgument_ioAST.mProperty_mExtendStaticArrayDeclarationAST.addAssign_operation (var_staticListName_3913, var_expressions_3982  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 112)) ;
    switch (select_plm_5F_syntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 114)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 116)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i22_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_extend) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 101)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_staticArray) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 102)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 103)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 104)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      nt_staticArray_5F_exp_parse (inCompiler) ;
      switch (select_plm_5F_syntax_30 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 110)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    switch (select_plm_5F_syntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 114)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 116)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_staticArray_5F_exp_i23_ (GALGAS_extendStaticListElementListAST & ioArgument_ioExpressions,
                                                                        C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_31 (inCompiler)) {
  case 1: {
    GALGAS_expressionAST var_exp_4428 ;
    nt_expression_ (var_exp_4428, inCompiler) ;
    ioArgument_ioExpressions.addAssign_operation (GALGAS_extendStaticListExpressionAST::constructor_expression (var_exp_4428  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 124)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 124))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 124)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_func) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 126)) ;
    GALGAS_lstring var_functionName_4539 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 127)) ;
    GALGAS_routineFormalArgumentListAST var_formalArgs_4606 ;
    nt_procedure_5F_formal_5F_arguments_ (var_formalArgs_4606, inCompiler) ;
    ioArgument_ioExpressions.addAssign_operation (GALGAS_extendStaticListExpressionAST::constructor_function (var_functionName_4539, var_formalArgs_4606  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 130)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 131))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 129)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_staticArray_5F_exp_i23_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_31 (inCompiler)) {
  case 1: {
    nt_expression_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_func) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 126)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 127)) ;
    nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i24_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_task) COMMA_SOURCE_FILE ("declaration-task.galgas", 44)) ;
  GALGAS_lstring var_taskName_1844 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-task.galgas", 45)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_priority) COMMA_SOURCE_FILE ("declaration-task.galgas", 46)) ;
  GALGAS_lbigint var_priority_1896 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("declaration-task.galgas", 47)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_stackSize) COMMA_SOURCE_FILE ("declaration-task.galgas", 48)) ;
  GALGAS_lbigint var_stackSize_1950 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("declaration-task.galgas", 49)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-task.galgas", 50)) ;
  GALGAS_structurePropertyListAST var_taskVarList_2000 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 51)) ;
  GALGAS_functionDeclarationListAST var_taskProcList_2050 = GALGAS_functionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 52)) ;
  GALGAS_taskSetupListAST var_taskInitListAST_2093 = GALGAS_taskSetupListAST::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 53)) ;
  GALGAS_syncInstructionBranchListAST var_branchList_2143 = GALGAS_syncInstructionBranchListAST::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 54)) ;
  nt_taskBody_ (var_taskVarList_2000, var_taskProcList_2050, var_taskInitListAST_2093, var_branchList_2143, inCompiler) ;
  GALGAS_location var_endOfTask_2241 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 56)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-task.galgas", 57)) ;
  ioArgument_ioAST.mProperty_mTaskListAST.addAssign_operation (var_taskName_1844, var_priority_1896, var_stackSize_1950, var_taskVarList_2000, var_taskProcList_2050, var_taskInitListAST_2093, var_branchList_2143, var_endOfTask_2241  COMMA_SOURCE_FILE ("declaration-task.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i24_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_task) COMMA_SOURCE_FILE ("declaration-task.galgas", 44)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-task.galgas", 45)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_priority) COMMA_SOURCE_FILE ("declaration-task.galgas", 46)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("declaration-task.galgas", 47)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_stackSize) COMMA_SOURCE_FILE ("declaration-task.galgas", 48)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("declaration-task.galgas", 49)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-task.galgas", 50)) ;
  nt_taskBody_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-task.galgas", 57)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_taskBody_i25_ (GALGAS_structurePropertyListAST & ioArgument_taskVarList,
                                                              GALGAS_functionDeclarationListAST & ioArgument_taskProcList,
                                                              GALGAS_taskSetupListAST & ioArgument_taskInitListAST,
                                                              GALGAS_syncInstructionBranchListAST & ioArgument_branchList,
                                                              C_Lexique_plm_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_32 (inCompiler)) {
    case 2: {
      nt_private_5F_struct_5F_property_5F_declaration_ (ioArgument_taskVarList, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_func) COMMA_SOURCE_FILE ("declaration-task.galgas", 80)) ;
      GALGAS_lstring var_procName_2936 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-task.galgas", 81)) ;
      GALGAS_routineFormalArgumentListAST var_formalArgumentList_3041 ;
      nt_procedure_5F_formal_5F_arguments_ (var_formalArgumentList_3041, inCompiler) ;
      GALGAS_lstring var_returnTypeName_3071 ;
      switch (select_plm_5F_syntax_33 (inCompiler)) {
      case 1: {
        var_returnTypeName_3071 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 85)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("declaration-task.galgas", 87)) ;
        var_returnTypeName_3071 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-task.galgas", 88)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-task.galgas", 90)) ;
      GALGAS_instructionListAST var_instructionList_3239 ;
      nt_instructionList_ (var_instructionList_3239, inCompiler) ;
      GALGAS_location var_endOfProc_3259 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 92)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-task.galgas", 93)) ;
      ioArgument_taskProcList.addAssign_operation (GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-task.galgas", 94)), GALGAS_bool (false), var_procName_2936, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 94)), var_formalArgumentList_3041, var_returnTypeName_3071, var_instructionList_3239, var_endOfProc_3259  COMMA_SOURCE_FILE ("declaration-task.galgas", 94)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_setup) COMMA_SOURCE_FILE ("declaration-task.galgas", 96)) ;
      GALGAS_lbigint var_priority_3467 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("declaration-task.galgas", 97)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-task.galgas", 98)) ;
      GALGAS_instructionListAST var_instructionList_3522 ;
      nt_instructionList_ (var_instructionList_3522, inCompiler) ;
      GALGAS_location var_endOfInit_3542 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 100)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-task.galgas", 101)) ;
      ioArgument_taskInitListAST.addAssign_operation (var_priority_3467, var_instructionList_3522, var_endOfInit_3542  COMMA_SOURCE_FILE ("declaration-task.galgas", 102)) ;
    } break ;
    case 5: {
      GALGAS_guardedCommandAST var_guardedCommand_3705 ;
      nt_guarded_5F_command_ (var_guardedCommand_3705, inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-task.galgas", 105)) ;
      GALGAS_instructionListAST var_instructionList_3760 ;
      nt_instructionList_ (var_instructionList_3760, inCompiler) ;
      GALGAS_location var_endOfInstructions_3788 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 107)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-task.galgas", 108)) ;
      ioArgument_branchList.addAssign_operation (var_guardedCommand_3705, var_instructionList_3760, var_endOfInstructions_3788  COMMA_SOURCE_FILE ("declaration-task.galgas", 109)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_taskBody_i25_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_32 (inCompiler)) {
    case 2: {
      nt_private_5F_struct_5F_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_func) COMMA_SOURCE_FILE ("declaration-task.galgas", 80)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-task.galgas", 81)) ;
      nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
      switch (select_plm_5F_syntax_33 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("declaration-task.galgas", 87)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-task.galgas", 88)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-task.galgas", 90)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-task.galgas", 93)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_setup) COMMA_SOURCE_FILE ("declaration-task.galgas", 96)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("declaration-task.galgas", 97)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-task.galgas", 98)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-task.galgas", 101)) ;
    } break ;
    case 5: {
      nt_guarded_5F_command_parse (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-task.galgas", 105)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-task.galgas", 108)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i26_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_panic) COMMA_SOURCE_FILE ("panic.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_setup) COMMA_SOURCE_FILE ("panic.galgas", 22)) ;
  GALGAS_lbigint var_priority_1159 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("panic.galgas", 23)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("panic.galgas", 24)) ;
  GALGAS_instructionListAST var_instructionList_1210 ;
  nt_instructionList_ (var_instructionList_1210, inCompiler) ;
  GALGAS_location var_endOfInstructionList_1239 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 26)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("panic.galgas", 27)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_panicAST::constructor_new (GALGAS_bool (true), var_instructionList_1210, var_endOfInstructionList_1239, var_priority_1159  COMMA_SOURCE_FILE ("panic.galgas", 28))  COMMA_SOURCE_FILE ("panic.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i26_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_panic) COMMA_SOURCE_FILE ("panic.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_setup) COMMA_SOURCE_FILE ("panic.galgas", 22)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("panic.galgas", 23)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("panic.galgas", 24)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("panic.galgas", 27)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i27_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_panic) COMMA_SOURCE_FILE ("panic.galgas", 39)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_loop) COMMA_SOURCE_FILE ("panic.galgas", 40)) ;
  GALGAS_lbigint var_priority_1613 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("panic.galgas", 41)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("panic.galgas", 42)) ;
  GALGAS_instructionListAST var_instructionList_1664 ;
  nt_instructionList_ (var_instructionList_1664, inCompiler) ;
  GALGAS_location var_endOfInstructionList_1693 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 44)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("panic.galgas", 45)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_panicAST::constructor_new (GALGAS_bool (false), var_instructionList_1664, var_endOfInstructionList_1693, var_priority_1613  COMMA_SOURCE_FILE ("panic.galgas", 46))  COMMA_SOURCE_FILE ("panic.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i27_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_panic) COMMA_SOURCE_FILE ("panic.galgas", 39)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_loop) COMMA_SOURCE_FILE ("panic.galgas", 40)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("panic.galgas", 41)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("panic.galgas", 42)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("panic.galgas", 45)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_system_5F_routine_i28_ (GALGAS_systemRoutineDeclarationListAST & ioArgument_ioSVCListAST,
                                                                       C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_public_1264 ;
  switch (select_plm_5F_syntax_34 (inCompiler)) {
  case 1: {
    var_public_1264 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_public) COMMA_SOURCE_FILE ("declaration-svc.galgas", 29)) ;
    var_public_1264 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_system) COMMA_SOURCE_FILE ("declaration-svc.galgas", 32)) ;
  GALGAS_routineKind var_routineKind_1388 ;
  switch (select_plm_5F_syntax_35 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_section) COMMA_SOURCE_FILE ("declaration-svc.galgas", 35)) ;
    var_routineKind_1388 = GALGAS_routineKind::constructor_section (SOURCE_FILE ("declaration-svc.galgas", 36)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_safe) COMMA_SOURCE_FILE ("declaration-svc.galgas", 38)) ;
    var_routineKind_1388 = GALGAS_routineKind::constructor_safe (SOURCE_FILE ("declaration-svc.galgas", 39)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_primitive) COMMA_SOURCE_FILE ("declaration-svc.galgas", 41)) ;
    var_routineKind_1388 = GALGAS_routineKind::constructor_primitive (SOURCE_FILE ("declaration-svc.galgas", 42)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_service) COMMA_SOURCE_FILE ("declaration-svc.galgas", 44)) ;
    var_routineKind_1388 = GALGAS_routineKind::constructor_service (SOURCE_FILE ("declaration-svc.galgas", 45)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_name_1633 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-svc.galgas", 47)) ;
  GALGAS_lstringlist var_attributeList_1664 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-svc.galgas", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_36 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_1724 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__40_attribute) COMMA_SOURCE_FILE ("declaration-svc.galgas", 51)) ;
      var_attributeList_1664.addAssign_operation (var_attribute_1724  COMMA_SOURCE_FILE ("declaration-svc.galgas", 52)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_routineFormalArgumentListAST var_formalArgumentList_1839 ;
  nt_procedure_5F_formal_5F_arguments_ (var_formalArgumentList_1839, inCompiler) ;
  GALGAS_lstring var_returnTypeName_1867 ;
  switch (select_plm_5F_syntax_37 (inCompiler)) {
  case 1: {
    var_returnTypeName_1867 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 57)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("declaration-svc.galgas", 59)) ;
    var_returnTypeName_1867 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-svc.galgas", 60)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-svc.galgas", 62)) ;
  GALGAS_instructionListAST var_instructionList_2019 ;
  nt_instructionList_ (var_instructionList_2019, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-svc.galgas", 64)) ;
  ioArgument_ioSVCListAST.addAssign_operation (var_name_1633, var_routineKind_1388, var_public_1264, var_attributeList_1664, var_formalArgumentList_1839, var_returnTypeName_1867, var_instructionList_2019, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 73))  COMMA_SOURCE_FILE ("declaration-svc.galgas", 65)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_system_5F_routine_i28_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_public) COMMA_SOURCE_FILE ("declaration-svc.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_system) COMMA_SOURCE_FILE ("declaration-svc.galgas", 32)) ;
  switch (select_plm_5F_syntax_35 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_section) COMMA_SOURCE_FILE ("declaration-svc.galgas", 35)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_safe) COMMA_SOURCE_FILE ("declaration-svc.galgas", 38)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_primitive) COMMA_SOURCE_FILE ("declaration-svc.galgas", 41)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_service) COMMA_SOURCE_FILE ("declaration-svc.galgas", 44)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-svc.galgas", 47)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_36 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__40_attribute) COMMA_SOURCE_FILE ("declaration-svc.galgas", 51)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
  switch (select_plm_5F_syntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("declaration-svc.galgas", 59)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-svc.galgas", 60)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-svc.galgas", 62)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-svc.galgas", 64)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i29_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_boot) COMMA_SOURCE_FILE ("declaration-boot.galgas", 20)) ;
  GALGAS_lbigint var_priority_1100 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("declaration-boot.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-boot.galgas", 22)) ;
  GALGAS_instructionListAST var_instructionList_1151 ;
  nt_instructionList_ (var_instructionList_1151, inCompiler) ;
  GALGAS_location var_endOfInit_1169 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-boot.galgas", 24)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-boot.galgas", 25)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_bootAST::constructor_new (var_instructionList_1151, var_endOfInit_1169, var_priority_1100  COMMA_SOURCE_FILE ("declaration-boot.galgas", 26))  COMMA_SOURCE_FILE ("declaration-boot.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i29_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_boot) COMMA_SOURCE_FILE ("declaration-boot.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("declaration-boot.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-boot.galgas", 22)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-boot.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i30_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_initAST var_init_1293 ;
  nt_declaration_5F_init_ (var_init_1293, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 27)), inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (var_init_1293  COMMA_SOURCE_FILE ("declaration-init.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i30_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_declaration_5F_init_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_5F_init_i31_ (GALGAS_initAST & outArgument_outInit,
                                                                         const GALGAS_lstring constinArgument_inModuleName,
                                                                         C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outInit.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_init) COMMA_SOURCE_FILE ("declaration-init.galgas", 34)) ;
  GALGAS_lbigint var_priority_1593 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("declaration-init.galgas", 35)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-init.galgas", 36)) ;
  GALGAS_instructionListAST var_instructionList_1644 ;
  nt_instructionList_ (var_instructionList_1644, inCompiler) ;
  GALGAS_location var_endOfInit_1662 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 38)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-init.galgas", 39)) ;
  outArgument_outInit = GALGAS_initAST::constructor_new (constinArgument_inModuleName, var_instructionList_1644, var_endOfInit_1662, var_priority_1593  COMMA_SOURCE_FILE ("declaration-init.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_5F_init_i31_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_init) COMMA_SOURCE_FILE ("declaration-init.galgas", 34)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("declaration-init.galgas", 35)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-init.galgas", 36)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-init.galgas", 39)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_function_i32_ (GALGAS_functionDeclarationListAST & ioArgument_ioProcListAST,
                                                              C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_public_2572 ;
  switch (select_plm_5F_syntax_38 (inCompiler)) {
  case 1: {
    var_public_2572 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_public) COMMA_SOURCE_FILE ("declaration-func.galgas", 70)) ;
    var_public_2572 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_mode var_mode_2703 ;
  GALGAS_lstring var_procName_2728 ;
  GALGAS_lstringlist var_attributeList_2764 ;
  GALGAS_routineFormalArgumentListAST var_procFormalArgumentList_2814 ;
  nt_function_5F_header_ (var_mode_2703, var_procName_2728, var_attributeList_2764, var_procFormalArgumentList_2814, inCompiler) ;
  GALGAS_lstring var_returnTypeName_2842 ;
  switch (select_plm_5F_syntax_39 (inCompiler)) {
  case 1: {
    var_returnTypeName_2842 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 80)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("declaration-func.galgas", 82)) ;
    var_returnTypeName_2842 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-func.galgas", 83)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-func.galgas", 85)) ;
  GALGAS_instructionListAST var_instructionList_2994 ;
  nt_instructionList_ (var_instructionList_2994, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-func.galgas", 87)) ;
  ioArgument_ioProcListAST.addAssign_operation (var_mode_2703, var_public_2572, var_procName_2728, var_attributeList_2764, var_procFormalArgumentList_2814, var_returnTypeName_2842, var_instructionList_2994, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 96))  COMMA_SOURCE_FILE ("declaration-func.galgas", 88)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_function_i32_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_public) COMMA_SOURCE_FILE ("declaration-func.galgas", 70)) ;
  } break ;
  default:
    break ;
  }
  nt_function_5F_header_parse (inCompiler) ;
  switch (select_plm_5F_syntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("declaration-func.galgas", 82)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-func.galgas", 83)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-func.galgas", 85)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-func.galgas", 87)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_mode_i33_ (GALGAS_mode & outArgument_outMode,
                                                          C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outMode.drop () ; // Release 'out' argument
  switch (select_plm_5F_syntax_40 (inCompiler)) {
  case 1: {
    outArgument_outMode = GALGAS_mode::constructor_anyMode (SOURCE_FILE ("declaration-func.galgas", 103)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_user) COMMA_SOURCE_FILE ("declaration-func.galgas", 105)) ;
    outArgument_outMode = GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-func.galgas", 106)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_panic) COMMA_SOURCE_FILE ("declaration-func.galgas", 108)) ;
    outArgument_outMode = GALGAS_mode::constructor_panicMode (SOURCE_FILE ("declaration-func.galgas", 109)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_boot) COMMA_SOURCE_FILE ("declaration-func.galgas", 111)) ;
    outArgument_outMode = GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-func.galgas", 112)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_init) COMMA_SOURCE_FILE ("declaration-func.galgas", 114)) ;
    outArgument_outMode = GALGAS_mode::constructor_initMode (SOURCE_FILE ("declaration-func.galgas", 115)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_section) COMMA_SOURCE_FILE ("declaration-func.galgas", 117)) ;
    outArgument_outMode = GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("declaration-func.galgas", 118)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_service) COMMA_SOURCE_FILE ("declaration-func.galgas", 120)) ;
    outArgument_outMode = GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-func.galgas", 121)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_primitive) COMMA_SOURCE_FILE ("declaration-func.galgas", 123)) ;
    outArgument_outMode = GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("declaration-func.galgas", 124)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_guard) COMMA_SOURCE_FILE ("declaration-func.galgas", 126)) ;
    outArgument_outMode = GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-func.galgas", 127)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_safe) COMMA_SOURCE_FILE ("declaration-func.galgas", 129)) ;
    outArgument_outMode = GALGAS_mode::constructor_safeMode (SOURCE_FILE ("declaration-func.galgas", 130)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_mode_i33_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_user) COMMA_SOURCE_FILE ("declaration-func.galgas", 105)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_panic) COMMA_SOURCE_FILE ("declaration-func.galgas", 108)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_boot) COMMA_SOURCE_FILE ("declaration-func.galgas", 111)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_init) COMMA_SOURCE_FILE ("declaration-func.galgas", 114)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_section) COMMA_SOURCE_FILE ("declaration-func.galgas", 117)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_service) COMMA_SOURCE_FILE ("declaration-func.galgas", 120)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_primitive) COMMA_SOURCE_FILE ("declaration-func.galgas", 123)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_guard) COMMA_SOURCE_FILE ("declaration-func.galgas", 126)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_safe) COMMA_SOURCE_FILE ("declaration-func.galgas", 129)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_function_5F_header_i34_ (GALGAS_mode & outArgument_outMode,
                                                                        GALGAS_lstring & outArgument_outProcName,
                                                                        GALGAS_lstringlist & outArgument_outAttributeList,
                                                                        GALGAS_routineFormalArgumentListAST & outArgument_outProcFormalArgumentList,
                                                                        C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outMode.drop () ; // Release 'out' argument
  outArgument_outProcName.drop () ; // Release 'out' argument
  outArgument_outAttributeList.drop () ; // Release 'out' argument
  outArgument_outProcFormalArgumentList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_func) COMMA_SOURCE_FILE ("declaration-func.galgas", 143)) ;
  nt_mode_ (outArgument_outMode, inCompiler) ;
  outArgument_outProcName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-func.galgas", 145)) ;
  outArgument_outAttributeList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-func.galgas", 146)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_41 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_4299 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__40_attribute) COMMA_SOURCE_FILE ("declaration-func.galgas", 149)) ;
      outArgument_outAttributeList.addAssign_operation (var_attribute_4299  COMMA_SOURCE_FILE ("declaration-func.galgas", 150)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_ (outArgument_outProcFormalArgumentList, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_function_5F_header_i34_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_func) COMMA_SOURCE_FILE ("declaration-func.galgas", 143)) ;
  nt_mode_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-func.galgas", 145)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_41 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__40_attribute) COMMA_SOURCE_FILE ("declaration-func.galgas", 149)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_procedure_5F_formal_5F_arguments_i35_ (GALGAS_routineFormalArgumentListAST & outArgument_outProcFormalArgumentList,
                                                                                      C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outProcFormalArgumentList.drop () ; // Release 'out' argument
  outArgument_outProcFormalArgumentList = GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-func.galgas", 158)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("declaration-func.galgas", 159)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_42 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_4755 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_) COMMA_SOURCE_FILE ("declaration-func.galgas", 162)) ;
      GALGAS_lstring var_formalArgumentName_4798 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-func.galgas", 163)) ;
      GALGAS_lstring var_formalArgumentTypeName_4841 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-func.galgas", 164)) ;
      outArgument_outProcFormalArgumentList.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_output (SOURCE_FILE ("declaration-func.galgas", 166)), var_selector_4755, var_formalArgumentTypeName_4841, var_formalArgumentName_4798  COMMA_SOURCE_FILE ("declaration-func.galgas", 165)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_5045 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3F__21_selector_3A_) COMMA_SOURCE_FILE ("declaration-func.galgas", 171)) ;
      GALGAS_lstring var_formalArgumentName_5088 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-func.galgas", 172)) ;
      GALGAS_lstring var_formalArgumentTypeName_5131 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-func.galgas", 173)) ;
      outArgument_outProcFormalArgumentList.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_inputOutput (SOURCE_FILE ("declaration-func.galgas", 175)), var_selector_5045, var_formalArgumentTypeName_5131, var_formalArgumentName_5088  COMMA_SOURCE_FILE ("declaration-func.galgas", 174)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_5339 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_) COMMA_SOURCE_FILE ("declaration-func.galgas", 180)) ;
      GALGAS_lstring var_formalArgumentName_5382 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-func.galgas", 181)) ;
      GALGAS_lstring var_formalArgumentTypeName_5425 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-func.galgas", 182)) ;
      outArgument_outProcFormalArgumentList.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("declaration-func.galgas", 184)), var_selector_5339, var_formalArgumentTypeName_5425, var_formalArgumentName_5382  COMMA_SOURCE_FILE ("declaration-func.galgas", 183)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("declaration-func.galgas", 189)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_procedure_5F_formal_5F_arguments_i35_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("declaration-func.galgas", 159)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_) COMMA_SOURCE_FILE ("declaration-func.galgas", 162)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-func.galgas", 163)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-func.galgas", 164)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3F__21_selector_3A_) COMMA_SOURCE_FILE ("declaration-func.galgas", 171)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-func.galgas", 172)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-func.galgas", 173)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_) COMMA_SOURCE_FILE ("declaration-func.galgas", 180)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-func.galgas", 181)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-func.galgas", 182)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("declaration-func.galgas", 189)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i36_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_required) COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 22)) ;
  GALGAS_mode var_mode_1169 ;
  GALGAS_lstring var_procName_1194 ;
  GALGAS_lstringlist var_attributeList_1230 ;
  GALGAS_routineFormalArgumentListAST var_procFormalArgumentList_1280 ;
  nt_function_5F_header_ (var_mode_1169, var_procName_1194, var_attributeList_1230, var_procFormalArgumentList_1280, inCompiler) ;
  GALGAS_bool var_isGlobal_1297 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_1342 (var_attributeList_1230, kENUMERATION_UP) ;
  while (enumerator_1342.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_1342.current_mValue (HERE).getter_string (HERE).objectCompare (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 30)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("@").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 31))) ;
      inCompiler->emitSemanticError (enumerator_1342.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 31)), GALGAS_string ("invalid attribute"), fixItArray1  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 31)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_2 = var_isGlobal_1297.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
        inCompiler->emitSemanticError (enumerator_1342.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 33)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 33)) ;
      }else if (kBoolFalse == test_2) {
        var_isGlobal_1297 = GALGAS_bool (true) ;
      }
    }
    enumerator_1342.gotoNextObject () ;
  }
  ioArgument_ioAST.mProperty_mRequiredProcListAST.addAssign_operation (var_procName_1194, var_mode_1169, var_isGlobal_1297, var_procFormalArgumentList_1280, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 43))  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i36_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_required) COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 22)) ;
  nt_function_5F_header_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i37_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_extern) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 23)) ;
  GALGAS_mode var_mode_1219 ;
  GALGAS_lstring var_procName_1244 ;
  GALGAS_lstringlist var_attributeList_1287 ;
  GALGAS_routineFormalArgumentListAST var_procFormalArgumentList_1337 ;
  nt_function_5F_header_ (var_mode_1219, var_procName_1244, var_attributeList_1287, var_procFormalArgumentList_1337, inCompiler) ;
  GALGAS_lstring var_returnTypeName_1365 ;
  switch (select_plm_5F_syntax_43 (inCompiler)) {
  case 1: {
    var_returnTypeName_1365 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 31)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 33)) ;
    var_returnTypeName_1365 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 34)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 36)) ;
  GALGAS_lstring var_llvmName_1503 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 37)) ;
  ioArgument_ioAST.mProperty_mExternProcListAST.addAssign_operation (var_procName_1244, var_mode_1219, var_procFormalArgumentList_1337, var_returnTypeName_1365, var_llvmName_1503, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 38))  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i37_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_extern) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 23)) ;
  nt_function_5F_header_parse (inCompiler) ;
  switch (select_plm_5F_syntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 33)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 34)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 36)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 37)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_isr_i38_ (GALGAS_isrDeclarationListAST & ioArgument_ioISRListAST,
                                                         const GALGAS_lstring constinArgument_inModuleName,
                                                         C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_isr) COMMA_SOURCE_FILE ("declaration-isr.galgas", 22)) ;
  GALGAS_mode var_mode_1168 ;
  switch (select_plm_5F_syntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_service) COMMA_SOURCE_FILE ("declaration-isr.galgas", 25)) ;
    var_mode_1168 = GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-isr.galgas", 26)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_section) COMMA_SOURCE_FILE ("declaration-isr.galgas", 28)) ;
    var_mode_1168 = GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("declaration-isr.galgas", 29)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_safe) COMMA_SOURCE_FILE ("declaration-isr.galgas", 31)) ;
    var_mode_1168 = GALGAS_mode::constructor_safeMode (SOURCE_FILE ("declaration-isr.galgas", 32)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_isrName_1352 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-isr.galgas", 34)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-isr.galgas", 35)) ;
  GALGAS_instructionListAST var_instructionList_1403 ;
  nt_instructionList_ (var_instructionList_1403, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-isr.galgas", 37)) ;
  ioArgument_ioISRListAST.addAssign_operation (var_isrName_1352, var_mode_1168, constinArgument_inModuleName, var_instructionList_1403, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 43))  COMMA_SOURCE_FILE ("declaration-isr.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_isr_i38_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_isr) COMMA_SOURCE_FILE ("declaration-isr.galgas", 22)) ;
  switch (select_plm_5F_syntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_service) COMMA_SOURCE_FILE ("declaration-isr.galgas", 25)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_section) COMMA_SOURCE_FILE ("declaration-isr.galgas", 28)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_safe) COMMA_SOURCE_FILE ("declaration-isr.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-isr.galgas", 34)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-isr.galgas", 35)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-isr.galgas", 37)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_guard_i39_ (GALGAS_guardDeclarationListAST & ioArgument_ioGuardListAST,
                                                           C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_public_1438 ;
  switch (select_plm_5F_syntax_45 (inCompiler)) {
  case 1: {
    var_public_1438 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_public) COMMA_SOURCE_FILE ("declaration-guard.galgas", 35)) ;
    var_public_1438 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_guard) COMMA_SOURCE_FILE ("declaration-guard.galgas", 38)) ;
  GALGAS_lstring var_guardName_1564 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-guard.galgas", 39)) ;
  GALGAS_lstringlist var_attributeList_1595 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_46 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_1655 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__40_attribute) COMMA_SOURCE_FILE ("declaration-guard.galgas", 43)) ;
      var_attributeList_1595.addAssign_operation (var_attribute_1655  COMMA_SOURCE_FILE ("declaration-guard.galgas", 44)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_routineFormalArgumentListAST var_guardFormalArgumentList_1775 ;
  nt_procedure_5F_formal_5F_arguments_ (var_guardFormalArgumentList_1775, inCompiler) ;
  GALGAS_guardKind var_guardKind_1800 ;
  switch (select_plm_5F_syntax_47 (inCompiler)) {
  case 1: {
    var_guardKind_1800 = GALGAS_guardKind::constructor_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 49)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("declaration-guard.galgas", 51)) ;
    GALGAS_callInstructionAST var_instruction_1897 ;
    nt_procedure_5F_call_ (var_instruction_1897, inCompiler) ;
    var_guardKind_1800 = GALGAS_guardKind::constructor_convenienceGuard (var_instruction_1897  COMMA_SOURCE_FILE ("declaration-guard.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-guard.galgas", 55)) ;
  GALGAS_instructionListAST var_instructionList_2012 ;
  nt_instructionList_ (var_instructionList_2012, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-guard.galgas", 57)) ;
  ioArgument_ioGuardListAST.addAssign_operation (var_guardName_1564, var_public_1438, var_attributeList_1595, var_guardFormalArgumentList_1775, var_guardKind_1800, var_instructionList_2012, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 65))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_guard_i39_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_public) COMMA_SOURCE_FILE ("declaration-guard.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_guard) COMMA_SOURCE_FILE ("declaration-guard.galgas", 38)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-guard.galgas", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_46 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__40_attribute) COMMA_SOURCE_FILE ("declaration-guard.galgas", 43)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
  switch (select_plm_5F_syntax_47 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("declaration-guard.galgas", 51)) ;
    nt_procedure_5F_call_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-guard.galgas", 55)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-guard.galgas", 57)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i40_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  nt_guard_ (ioArgument_ioAST.mProperty_mGuardListAST, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i40_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_guard_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_i41_ (GALGAS_expressionAST & outArgument_outExpression,
                                                                C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_logical_5F_xor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_48 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_or) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 20)) ;
      GALGAS_location var_operatorLocation_1069 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 21)) ;
      GALGAS_expressionAST var_rightExpression_1138 ;
      nt_expression_5F_logical_5F_xor_ (var_rightExpression_1138, inCompiler) ;
      GALGAS_booleanShortCircuitAndOperatorExpressionAST var_andExpression_1214 = GALGAS_booleanShortCircuitAndOperatorExpressionAST::constructor_new (GALGAS_prefixOperatorExpressionAST::constructor_new (var_operatorLocation_1069, GALGAS_prefixOperator::constructor_notOperator (SOURCE_FILE ("expression-operator-priority.galgas", 25)), outArgument_outExpression  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 25)), var_operatorLocation_1069, GALGAS_prefixOperatorExpressionAST::constructor_new (var_operatorLocation_1069, GALGAS_prefixOperator::constructor_notOperator (SOURCE_FILE ("expression-operator-priority.galgas", 27)), var_rightExpression_1138  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 27))  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 24)) ;
      outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::constructor_new (var_operatorLocation_1069, GALGAS_prefixOperator::constructor_notOperator (SOURCE_FILE ("expression-operator-priority.galgas", 31)), var_andExpression_1214  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 29)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_i41_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_logical_5F_xor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_48 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_or) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 20)) ;
      nt_expression_5F_logical_5F_xor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_logical_5F_xor_i42_ (GALGAS_expressionAST & outArgument_outExpression,
                                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_logical_5F_and_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_49 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_xor) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 43)) ;
      GALGAS_location var_operatorLocation_1924 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 44)) ;
      GALGAS_expressionAST var_rightExpression_1993 ;
      nt_expression_5F_logical_5F_and_ (var_rightExpression_1993, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_1924, GALGAS_infixOperator::constructor_booleanXorOp (SOURCE_FILE ("expression-operator-priority.galgas", 49)), var_rightExpression_1993  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 46)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_logical_5F_xor_i42_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_logical_5F_and_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_49 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_xor) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 43)) ;
      nt_expression_5F_logical_5F_and_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_logical_5F_and_i43_ (GALGAS_expressionAST & outArgument_outExpression,
                                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_bitwise_5F_or_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_50 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_and) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 61)) ;
      GALGAS_location var_operatorLocation_2456 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 62)) ;
      GALGAS_expressionAST var_rightExpression_2524 ;
      nt_expression_5F_bitwise_5F_or_ (var_rightExpression_2524, inCompiler) ;
      outArgument_outExpression = GALGAS_booleanShortCircuitAndOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_2456, var_rightExpression_2524  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 64)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_logical_5F_and_i43_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_or_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_50 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_and) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 61)) ;
      nt_expression_5F_bitwise_5F_or_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_bitwise_5F_or_i44_ (GALGAS_expressionAST & outArgument_outExpression,
                                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_bitwise_5F_xor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_51 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7C_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 78)) ;
      GALGAS_location var_operatorLocation_2979 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 79)) ;
      GALGAS_expressionAST var_rightExpression_3048 ;
      nt_expression_5F_bitwise_5F_xor_ (var_rightExpression_3048, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_2979, GALGAS_infixOperator::constructor_orOp (SOURCE_FILE ("expression-operator-priority.galgas", 84)), var_rightExpression_3048  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 81)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_bitwise_5F_or_i44_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_xor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_51 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7C_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 78)) ;
      nt_expression_5F_bitwise_5F_xor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_bitwise_5F_xor_i45_ (GALGAS_expressionAST & outArgument_outExpression,
                                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_bitwise_5F_and_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_52 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5E_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 96)) ;
      GALGAS_location var_operatorLocation_3502 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 97)) ;
      GALGAS_expressionAST var_rightExpression_3571 ;
      nt_expression_5F_bitwise_5F_and_ (var_rightExpression_3571, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_3502, GALGAS_infixOperator::constructor_xorOp (SOURCE_FILE ("expression-operator-priority.galgas", 102)), var_rightExpression_3571  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 99)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_bitwise_5F_xor_i45_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_and_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_52 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5E_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 96)) ;
      nt_expression_5F_bitwise_5F_and_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_bitwise_5F_and_i46_ (GALGAS_expressionAST & outArgument_outExpression,
                                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_equality_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_53 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__26_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 114)) ;
      GALGAS_location var_operatorLocation_4024 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 115)) ;
      GALGAS_expressionAST var_rightExpression_4090 ;
      nt_expression_5F_equality_ (var_rightExpression_4090, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_4024, GALGAS_infixOperator::constructor_andOp (SOURCE_FILE ("expression-operator-priority.galgas", 120)), var_rightExpression_4090  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 117)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_bitwise_5F_and_i46_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_equality_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_53 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__26_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 114)) ;
      nt_expression_5F_equality_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_equality_i47_ (GALGAS_expressionAST & outArgument_outExpression,
                                                                            C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_comparison_ (outArgument_outExpression, inCompiler) ;
  switch (select_plm_5F_syntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D__3D_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 132)) ;
    GALGAS_location var_operatorLocation_4539 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 133)) ;
    GALGAS_expressionAST var_rightExpression_4607 ;
    nt_expression_5F_comparison_ (var_rightExpression_4607, inCompiler) ;
    outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_4539, GALGAS_infixOperator::constructor_equal (SOURCE_FILE ("expression-operator-priority.galgas", 138)), var_rightExpression_4607  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 135)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2260_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 142)) ;
    GALGAS_location var_operatorLocation_4805 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 143)) ;
    GALGAS_expressionAST var_rightExpression_4873 ;
    nt_expression_5F_comparison_ (var_rightExpression_4873, inCompiler) ;
    outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_4805, GALGAS_infixOperator::constructor_nonEqual (SOURCE_FILE ("expression-operator-priority.galgas", 148)), var_rightExpression_4873  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 145)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_equality_i47_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_comparison_parse (inCompiler) ;
  switch (select_plm_5F_syntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D__3D_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 132)) ;
    nt_expression_5F_comparison_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2260_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 142)) ;
    nt_expression_5F_comparison_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_comparison_i48_ (GALGAS_expressionAST & outArgument_outExpression,
                                                                              C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_shift_ (outArgument_outExpression, inCompiler) ;
  switch (select_plm_5F_syntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2264_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 160)) ;
    GALGAS_location var_operatorLocation_5321 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 161)) ;
    GALGAS_expressionAST var_rightExpression_5384 ;
    nt_expression_5F_shift_ (var_rightExpression_5384, inCompiler) ;
    outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_5321, GALGAS_infixOperator::constructor_infEqual (SOURCE_FILE ("expression-operator-priority.galgas", 166)), var_rightExpression_5384  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 163)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2265_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 170)) ;
    GALGAS_location var_operatorLocation_5585 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 171)) ;
    GALGAS_expressionAST var_rightExpression_5648 ;
    nt_expression_5F_shift_ (var_rightExpression_5648, inCompiler) ;
    outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_5585, GALGAS_infixOperator::constructor_supEqual (SOURCE_FILE ("expression-operator-priority.galgas", 176)), var_rightExpression_5648  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 173)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3C_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 180)) ;
    GALGAS_location var_operatorLocation_5849 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 181)) ;
    GALGAS_expressionAST var_rightExpression_5912 ;
    nt_expression_5F_shift_ (var_rightExpression_5912, inCompiler) ;
    outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_5849, GALGAS_infixOperator::constructor_strictInf (SOURCE_FILE ("expression-operator-priority.galgas", 186)), var_rightExpression_5912  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 183)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3E_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 190)) ;
    GALGAS_location var_operatorLocation_6114 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 191)) ;
    GALGAS_expressionAST var_rightExpression_6177 ;
    nt_expression_5F_shift_ (var_rightExpression_6177, inCompiler) ;
    outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_6114, GALGAS_infixOperator::constructor_strictSup (SOURCE_FILE ("expression-operator-priority.galgas", 196)), var_rightExpression_6177  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 193)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_comparison_i48_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_shift_parse (inCompiler) ;
  switch (select_plm_5F_syntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2264_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 160)) ;
    nt_expression_5F_shift_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2265_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 170)) ;
    nt_expression_5F_shift_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3C_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 180)) ;
    nt_expression_5F_shift_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3E_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 190)) ;
    nt_expression_5F_shift_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_shift_i49_ (GALGAS_expressionAST & outArgument_outExpression,
                                                                         C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_addition_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_56 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3C__3C_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 208)) ;
      GALGAS_location var_operatorLocation_6628 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 209)) ;
      GALGAS_expressionAST var_rightExpression_6694 ;
      nt_expression_5F_addition_ (var_rightExpression_6694, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_6628, GALGAS_infixOperator::constructor_leftShiftOp (SOURCE_FILE ("expression-operator-priority.galgas", 214)), var_rightExpression_6694  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 211)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3E__3E_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 218)) ;
      GALGAS_location var_operatorLocation_6902 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 219)) ;
      GALGAS_expressionAST var_rightExpression_6968 ;
      nt_expression_5F_addition_ (var_rightExpression_6968, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_6902, GALGAS_infixOperator::constructor_rightShiftOp (SOURCE_FILE ("expression-operator-priority.galgas", 224)), var_rightExpression_6968  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 221)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_shift_i49_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_addition_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_56 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3C__3C_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 208)) ;
      nt_expression_5F_addition_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3E__3E_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 218)) ;
      nt_expression_5F_addition_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_addition_i50_ (GALGAS_expressionAST & outArgument_outExpression,
                                                                            C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_product_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_57 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2B_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 236)) ;
      GALGAS_location var_operatorLocation_7423 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 237)) ;
      GALGAS_expressionAST var_rightExpression_7488 ;
      nt_expression_5F_product_ (var_rightExpression_7488, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_7423, GALGAS_infixOperator::constructor_addOp (SOURCE_FILE ("expression-operator-priority.galgas", 242)), var_rightExpression_7488  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 239)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2B__25_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 246)) ;
      GALGAS_location var_operatorLocation_7690 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 247)) ;
      GALGAS_expressionAST var_rightExpression_7755 ;
      nt_expression_5F_product_ (var_rightExpression_7755, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_7690, GALGAS_infixOperator::constructor_addOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 252)), var_rightExpression_7755  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 249)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 256)) ;
      GALGAS_location var_operatorLocation_7961 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 257)) ;
      GALGAS_expressionAST var_rightExpression_8026 ;
      nt_expression_5F_product_ (var_rightExpression_8026, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_7961, GALGAS_infixOperator::constructor_subOp (SOURCE_FILE ("expression-operator-priority.galgas", 262)), var_rightExpression_8026  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 259)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__25_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 266)) ;
      GALGAS_location var_operatorLocation_8228 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 267)) ;
      GALGAS_expressionAST var_rightExpression_8293 ;
      nt_expression_5F_product_ (var_rightExpression_8293, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_8228, GALGAS_infixOperator::constructor_subOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 272)), var_rightExpression_8293  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 269)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_addition_i50_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_product_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_57 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2B_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 236)) ;
      nt_expression_5F_product_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2B__25_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 246)) ;
      nt_expression_5F_product_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 256)) ;
      nt_expression_5F_product_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__25_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 266)) ;
      nt_expression_5F_product_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_product_i51_ (GALGAS_expressionAST & outArgument_outExpression,
                                                                           C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_58 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2A_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 284)) ;
      GALGAS_location var_operatorLocation_8734 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 285)) ;
      GALGAS_expressionAST var_rightExpression_8788 ;
      nt_primary_ (var_rightExpression_8788, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_8734, GALGAS_infixOperator::constructor_mulOp (SOURCE_FILE ("expression-operator-priority.galgas", 290)), var_rightExpression_8788  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 287)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2A__25_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 294)) ;
      GALGAS_location var_operatorLocation_8990 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 295)) ;
      GALGAS_expressionAST var_rightExpression_9044 ;
      nt_primary_ (var_rightExpression_9044, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_8990, GALGAS_infixOperator::constructor_mulOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 300)), var_rightExpression_9044  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 297)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__25_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 304)) ;
      GALGAS_location var_operatorLocation_9250 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 305)) ;
      GALGAS_expressionAST var_rightExpression_9304 ;
      nt_primary_ (var_rightExpression_9304, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_9250, GALGAS_infixOperator::constructor_modOp (SOURCE_FILE ("expression-operator-priority.galgas", 310)), var_rightExpression_9304  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 307)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21__25_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 314)) ;
      GALGAS_location var_operatorLocation_9506 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 315)) ;
      GALGAS_expressionAST var_rightExpression_9560 ;
      nt_primary_ (var_rightExpression_9560, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_9506, GALGAS_infixOperator::constructor_modOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 320)), var_rightExpression_9560  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 317)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2F_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 324)) ;
      GALGAS_location var_operatorLocation_9766 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 325)) ;
      GALGAS_expressionAST var_rightExpression_9820 ;
      nt_primary_ (var_rightExpression_9820, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_9766, GALGAS_infixOperator::constructor_divOp (SOURCE_FILE ("expression-operator-priority.galgas", 330)), var_rightExpression_9820  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 327)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21__2F_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 334)) ;
      GALGAS_location var_operatorLocation_10022 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 335)) ;
      GALGAS_expressionAST var_rightExpression_10076 ;
      nt_primary_ (var_rightExpression_10076, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_10022, GALGAS_infixOperator::constructor_divOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 340)), var_rightExpression_10076  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 337)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_product_i51_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_58 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2A_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 284)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2A__25_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 294)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__25_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 304)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21__25_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 314)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2F_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 324)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21__2F_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 334)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i52_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7E_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 349)) ;
  GALGAS_location var_operatorLocation_10452 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 350)) ;
  GALGAS_expressionAST var_expression_10499 ;
  nt_primary_ (var_expression_10499, inCompiler) ;
  outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::constructor_new (var_operatorLocation_10452, GALGAS_prefixOperator::constructor_unsignedComplement (SOURCE_FILE ("expression-operator-priority.galgas", 354)), var_expression_10499  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 352)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i52_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7E_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 349)) ;
  nt_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i53_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_not) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 362)) ;
  GALGAS_location var_operatorLocation_10840 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 363)) ;
  GALGAS_expressionAST var_expression_10887 ;
  nt_primary_ (var_expression_10887, inCompiler) ;
  outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::constructor_new (var_operatorLocation_10840, GALGAS_prefixOperator::constructor_notOperator (SOURCE_FILE ("expression-operator-priority.galgas", 367)), var_expression_10887  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 365)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i53_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_not) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 362)) ;
  nt_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i54_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 375)) ;
  GALGAS_location var_operatorLocation_11219 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 376)) ;
  GALGAS_expressionAST var_expression_11266 ;
  nt_primary_ (var_expression_11266, inCompiler) ;
  outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::constructor_new (var_operatorLocation_11219, GALGAS_prefixOperator::constructor_minus (SOURCE_FILE ("expression-operator-priority.galgas", 380)), var_expression_11266  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 378)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i54_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 375)) ;
  nt_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i55_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__25_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 388)) ;
  GALGAS_location var_operatorLocation_11593 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 389)) ;
  GALGAS_expressionAST var_expression_11640 ;
  nt_primary_ (var_expression_11640, inCompiler) ;
  outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::constructor_new (var_operatorLocation_11593, GALGAS_prefixOperator::constructor_minusNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 393)), var_expression_11640  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 391)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i55_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__25_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 388)) ;
  nt_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i56_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 401)) ;
  nt_expression_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 403)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i56_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 401)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 403)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i57_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_convert) COMMA_SOURCE_FILE ("expression-convert.galgas", 20)) ;
  GALGAS_lstring var_typeName_1093 ;
  switch (select_plm_5F_syntax_59 (inCompiler)) {
  case 1: {
    var_typeName_1093 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 23)) ;
  } break ;
  case 2: {
    var_typeName_1093 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("expression-convert.galgas", 25)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression-convert.galgas", 27)) ;
  nt_expression_ (outArgument_outExpression, inCompiler) ;
  GALGAS_location var_endOfExpression_1235 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression-convert.galgas", 30)) ;
  outArgument_outExpression = GALGAS_convertExpressionAST::constructor_new (outArgument_outExpression, var_typeName_1093, var_endOfExpression_1235  COMMA_SOURCE_FILE ("expression-convert.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i57_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_convert) COMMA_SOURCE_FILE ("expression-convert.galgas", 20)) ;
  switch (select_plm_5F_syntax_59 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("expression-convert.galgas", 25)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression-convert.galgas", 27)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression-convert.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i58_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_extend) COMMA_SOURCE_FILE ("expression-extend.galgas", 20)) ;
  GALGAS_lstring var_typeName_1093 ;
  switch (select_plm_5F_syntax_60 (inCompiler)) {
  case 1: {
    var_typeName_1093 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 23)) ;
  } break ;
  case 2: {
    var_typeName_1093 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("expression-extend.galgas", 25)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression-extend.galgas", 27)) ;
  nt_expression_ (outArgument_outExpression, inCompiler) ;
  GALGAS_location var_endOfExpression_1235 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression-extend.galgas", 30)) ;
  outArgument_outExpression = GALGAS_extendExpressionAST::constructor_new (outArgument_outExpression, var_typeName_1093, var_endOfExpression_1235  COMMA_SOURCE_FILE ("expression-extend.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i58_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_extend) COMMA_SOURCE_FILE ("expression-extend.galgas", 20)) ;
  switch (select_plm_5F_syntax_60 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("expression-extend.galgas", 25)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression-extend.galgas", 27)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression-extend.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i59_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_truncate) COMMA_SOURCE_FILE ("expression-truncate.galgas", 20)) ;
  GALGAS_lstring var_typeName_1095 ;
  switch (select_plm_5F_syntax_61 (inCompiler)) {
  case 1: {
    var_typeName_1095 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 23)) ;
  } break ;
  case 2: {
    var_typeName_1095 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("expression-truncate.galgas", 25)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression-truncate.galgas", 27)) ;
  nt_expression_ (outArgument_outExpression, inCompiler) ;
  GALGAS_location var_endOfExpression_1237 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression-truncate.galgas", 30)) ;
  outArgument_outExpression = GALGAS_truncateExpressionAST::constructor_new (outArgument_outExpression, var_typeName_1095, var_endOfExpression_1237  COMMA_SOURCE_FILE ("expression-truncate.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i59_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_truncate) COMMA_SOURCE_FILE ("expression-truncate.galgas", 20)) ;
  switch (select_plm_5F_syntax_61 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("expression-truncate.galgas", 25)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression-truncate.galgas", 27)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression-truncate.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i60_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_addressof) COMMA_SOURCE_FILE ("expression-addressof.galgas", 18)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression-addressof.galgas", 19)) ;
  GALGAS_LValueAST var_lvalue_1050 ;
  nt_lvalue_ (var_lvalue_1050, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression-addressof.galgas", 21)) ;
  outArgument_outExpression = GALGAS_addressofExpressionAST::constructor_new (var_lvalue_1050  COMMA_SOURCE_FILE ("expression-addressof.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i60_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_addressof) COMMA_SOURCE_FILE ("expression-addressof.galgas", 18)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression-addressof.galgas", 19)) ;
  nt_lvalue_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression-addressof.galgas", 21)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i61_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_sizeof) COMMA_SOURCE_FILE ("expression-sizeof.galgas", 24)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression-sizeof.galgas", 25)) ;
  GALGAS_LValueAST var_lvalue_1230 ;
  nt_lvalue_ (var_lvalue_1230, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression-sizeof.galgas", 27)) ;
  outArgument_outExpression = GALGAS_sizeofExpressionAST::constructor_new (var_lvalue_1230  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i61_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_sizeof) COMMA_SOURCE_FILE ("expression-sizeof.galgas", 24)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression-sizeof.galgas", 25)) ;
  nt_lvalue_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression-sizeof.galgas", 27)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i62_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_sizeof) COMMA_SOURCE_FILE ("expression-sizeof.galgas", 34)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression-sizeof.galgas", 35)) ;
  GALGAS_lstring var_typeName_1517 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("expression-sizeof.galgas", 36)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression-sizeof.galgas", 37)) ;
  outArgument_outExpression = GALGAS_sizeofTypeAST::constructor_new (var_typeName_1517  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i62_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_sizeof) COMMA_SOURCE_FILE ("expression-sizeof.galgas", 34)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression-sizeof.galgas", 35)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("expression-sizeof.galgas", 36)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression-sizeof.galgas", 37)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i63_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_1206 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 25)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 26)) ;
  GALGAS_functionCallEffectiveParameterListAST var_parameterList_1271 = GALGAS_functionCallEffectiveParameterListAST::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_62 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_1330 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_) COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 30)) ;
      GALGAS_expressionAST var_expression_1365 ;
      nt_expression_ (var_expression_1365, inCompiler) ;
      var_parameterList_1271.addAssign_operation (var_selector_1330, var_expression_1365  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 32)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_location var_errorLocation_1440 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 34)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 35)) ;
  outArgument_outExpression = GALGAS_constructorCallAST::constructor_new (var_typeName_1206, var_parameterList_1271, var_errorLocation_1440  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i63_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 25)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_62 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_) COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 30)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i64_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_optionalTypeName_1113 ;
  switch (select_plm_5F_syntax_63 (inCompiler)) {
  case 1: {
    var_optionalTypeName_1113 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 22))  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 22)) ;
  } break ;
  case 2: {
    var_optionalTypeName_1113 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 24)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 26)) ;
  GALGAS_lstring var_constantName_1258 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 27)) ;
  GALGAS_primaryInExpressionAccessListAST var_accessList_1332 ;
  nt_expression_5F_access_5F_list_ (var_accessList_1332, inCompiler) ;
  outArgument_outExpression = GALGAS_typedConstantCallAST::constructor_new (var_optionalTypeName_1113, var_constantName_1258, var_accessList_1332  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i64_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_63 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 24)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 26)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 27)) ;
  nt_expression_5F_access_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i65_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_ifExpressionAST var_if_5F_expression_1226 ;
  nt_expression_5F_if_ (var_if_5F_expression_1226, inCompiler) ;
  outArgument_outExpression = var_if_5F_expression_1226 ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i65_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_if_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_if_i66_ (GALGAS_ifExpressionAST & outArgument_outExpression,
                                                                      C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_if) COMMA_SOURCE_FILE ("expression-if.galgas", 30)) ;
  GALGAS_expressionAST var_ifExpression_1492 ;
  nt_expression_ (var_ifExpression_1492, inCompiler) ;
  GALGAS_location var_ifExpressionEndLocation_1534 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 32)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("expression-if.galgas", 33)) ;
  GALGAS_expressionAST var_thenExpression_1587 ;
  nt_expression_ (var_thenExpression_1587, inCompiler) ;
  GALGAS_location var_thenExpressionEndLocation_1631 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 35)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("expression-if.galgas", 36)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_else) COMMA_SOURCE_FILE ("expression-if.galgas", 37)) ;
  GALGAS_expressionAST var_elseExpression_1692 ;
  switch (select_plm_5F_syntax_64 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("expression-if.galgas", 40)) ;
    nt_expression_ (var_elseExpression_1692, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("expression-if.galgas", 42)) ;
  } break ;
  case 2: {
    GALGAS_ifExpressionAST var_else_5F_if_5F_expression_1811 ;
    nt_expression_5F_if_ (var_else_5F_if_5F_expression_1811, inCompiler) ;
    var_elseExpression_1692 = var_else_5F_if_5F_expression_1811 ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_elseExpressionEndLocation_1905 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 47)) ;
  outArgument_outExpression = GALGAS_ifExpressionAST::constructor_new (var_ifExpression_1492, var_ifExpressionEndLocation_1534, var_thenExpression_1587, var_thenExpressionEndLocation_1631, var_elseExpression_1692, var_elseExpressionEndLocation_1905  COMMA_SOURCE_FILE ("expression-if.galgas", 48)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_if_i66_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_if) COMMA_SOURCE_FILE ("expression-if.galgas", 30)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("expression-if.galgas", 33)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("expression-if.galgas", 36)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_else) COMMA_SOURCE_FILE ("expression-if.galgas", 37)) ;
  switch (select_plm_5F_syntax_64 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("expression-if.galgas", 40)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("expression-if.galgas", 42)) ;
  } break ;
  case 2: {
    nt_expression_5F_if_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i67_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lbigint var_integerLiteral_1057 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalIntegerInExpressionAST::constructor_new (var_integerLiteral_1057  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i67_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i68_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_stringLiteral_1055 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalStringInExpressionAST::constructor_new (var_stringLiteral_1055  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i68_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i69_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_yes) COMMA_SOURCE_FILE ("expression-true-false.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalBooleanInExpressionAST::constructor_new (GALGAS_bool (true)  COMMA_SOURCE_FILE ("expression-true-false.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i69_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_yes) COMMA_SOURCE_FILE ("expression-true-false.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i70_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_no) COMMA_SOURCE_FILE ("expression-true-false.galgas", 25)) ;
  outArgument_outExpression = GALGAS_literalBooleanInExpressionAST::constructor_new (GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-true-false.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i70_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_no) COMMA_SOURCE_FILE ("expression-true-false.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i71_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 27)) ;
  GALGAS_lstring var_registerName_1343 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 28)) ;
  GALGAS_registerIntegerFieldListAST var_integerFieldValues_1395 = GALGAS_registerIntegerFieldListAST::constructor_emptyList (SOURCE_FILE ("expression-cst-registre.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_registerFieldName_1453 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 31)) ;
    GALGAS_expressionAST var_expression_1488 ;
    nt_expression_ (var_expression_1488, inCompiler) ;
    var_integerFieldValues_1395.addAssign_operation (var_registerFieldName_1453, var_expression_1488, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 33))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 33)) ;
    switch (select_plm_5F_syntax_65 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 36)) ;
  outArgument_outExpression = GALGAS_registerConstantExpressionAST::constructor_new (var_registerName_1343, var_integerFieldValues_1395  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 37)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i71_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 31)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_plm_5F_syntax_65 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 36)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i72_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_receiver_1637 ;
  switch (select_plm_5F_syntax_66 (inCompiler)) {
  case 1: {
    var_receiver_1637 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression-primary.galgas", 36)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_self) COMMA_SOURCE_FILE ("expression-primary.galgas", 38)) ;
    var_receiver_1637 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_primaryInExpressionAccessListAST var_accessList_1834 ;
  nt_expression_5F_access_5F_list_ (var_accessList_1834, inCompiler) ;
  outArgument_outExpression = GALGAS_primaryInExpressionAST::constructor_new (var_receiver_1637, var_accessList_1834  COMMA_SOURCE_FILE ("expression-primary.galgas", 44)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i72_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_66 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression-primary.galgas", 36)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_self) COMMA_SOURCE_FILE ("expression-primary.galgas", 38)) ;
  } break ;
  default:
    break ;
  }
  nt_expression_5F_access_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_access_5F_list_i73_ (GALGAS_primaryInExpressionAccessListAST & outArgument_outAccessList,
                                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outAccessList.drop () ; // Release 'out' argument
  outArgument_outAccessList = GALGAS_primaryInExpressionAccessListAST::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 50)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_67 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("expression-primary.galgas", 53)) ;
      GALGAS_lstring var_propertyName_2219 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression-primary.galgas", 54)) ;
      outArgument_outAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_property (var_propertyName_2219  COMMA_SOURCE_FILE ("expression-primary.galgas", 55))  COMMA_SOURCE_FILE ("expression-primary.galgas", 55)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("expression-primary.galgas", 57)) ;
      GALGAS_expressionAST var_expression_2329 ;
      nt_expression_ (var_expression_2329, inCompiler) ;
      GALGAS_location var_endOfIndex_2350 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 59)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("expression-primary.galgas", 60)) ;
      outArgument_outAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_arrayAccess (var_expression_2329, var_endOfIndex_2350  COMMA_SOURCE_FILE ("expression-primary.galgas", 61))  COMMA_SOURCE_FILE ("expression-primary.galgas", 61)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("expression-primary.galgas", 63)) ;
      GALGAS_lstring var_methodName_2512 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression-primary.galgas", 64)) ;
      GALGAS_effectiveArgumentListAST var_arguments_2556 ;
      GALGAS_location var_endOfArguments_2576 ;
      nt_effective_5F_parameters_ (var_arguments_2556, var_endOfArguments_2576, inCompiler) ;
      outArgument_outAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_funcCall (var_methodName_2512, var_arguments_2556, var_endOfArguments_2576  COMMA_SOURCE_FILE ("expression-primary.galgas", 66))  COMMA_SOURCE_FILE ("expression-primary.galgas", 66)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_access_5F_list_i73_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_67 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("expression-primary.galgas", 53)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression-primary.galgas", 54)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("expression-primary.galgas", 57)) ;
      nt_expression_parse (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("expression-primary.galgas", 60)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("expression-primary.galgas", 63)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression-primary.galgas", 64)) ;
      nt_effective_5F_parameters_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i74_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_standaloneFunctionName_1138 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 20)) ;
  GALGAS_effectiveArgumentListAST var_arguments_1180 ;
  GALGAS_location var_endOfArguments_1200 ;
  nt_effective_5F_parameters_ (var_arguments_1180, var_endOfArguments_1200, inCompiler) ;
  outArgument_outExpression = GALGAS_standaloneFunctionInExpressionAST::constructor_new (var_standaloneFunctionName_1138, var_arguments_1180, var_endOfArguments_1200  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i74_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 20)) ;
  nt_effective_5F_parameters_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instructionList_i75_ (GALGAS_instructionListAST & outArgument_outInstructionList,
                                                                     C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("instructionList.galgas", 24)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_68 (inCompiler)) {
    case 2: {
      nt_instruction_ (outArgument_outInstructionList, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("instructionList.galgas", 29)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instructionList_i75_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_68 (inCompiler)) {
    case 2: {
      nt_instruction_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("instructionList.galgas", 29)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i76_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_check) COMMA_SOURCE_FILE ("directive-check.galgas", 18)) ;
  GALGAS_location var_loc_1045 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("directive-check.galgas", 19)) ;
  GALGAS_expressionAST var_expression_1110 ;
  nt_expression_ (var_expression_1110, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_checkInstructionAST::constructor_new (var_loc_1045, var_expression_1110  COMMA_SOURCE_FILE ("directive-check.galgas", 21))  COMMA_SOURCE_FILE ("directive-check.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i76_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_check) COMMA_SOURCE_FILE ("directive-check.galgas", 18)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i77_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_LValueAST var_assignmentTargetAST_1094 ;
  nt_lvalue_ (var_assignmentTargetAST_1094, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 21)) ;
  GALGAS_expressionAST var_sourceExpression_1166 ;
  nt_expression_ (var_sourceExpression_1166, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_assignmentInstructionAST::constructor_new (var_assignmentTargetAST_1094.getter_mIdentifier (HERE).getter_location (HERE), var_assignmentTargetAST_1094, var_sourceExpression_1166  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 24))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 24)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i77_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_lvalue_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_assignment_5F_operator_i78_ (GALGAS_infixOperator & outArgument_outInfixOperator,
                                                                            GALGAS_location & outArgument_outOperatorLocation,
                                                                            C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outInfixOperator.drop () ; // Release 'out' argument
  outArgument_outOperatorLocation.drop () ; // Release 'out' argument
  switch (select_plm_5F_syntax_69 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7C__3D_) COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 11)) ;
    outArgument_outInfixOperator = GALGAS_infixOperator::constructor_orOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 12)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__26__3D_) COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 14)) ;
    outArgument_outInfixOperator = GALGAS_infixOperator::constructor_andOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 15)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5E__3D_) COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 17)) ;
    outArgument_outInfixOperator = GALGAS_infixOperator::constructor_xorOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 18)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2B__3D_) COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 20)) ;
    outArgument_outInfixOperator = GALGAS_infixOperator::constructor_addOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 21)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2B__25__3D_) COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 23)) ;
    outArgument_outInfixOperator = GALGAS_infixOperator::constructor_addOpNoOvf (SOURCE_FILE ("instruction-assignment-operator.galgas", 24)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3D_) COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 26)) ;
    outArgument_outInfixOperator = GALGAS_infixOperator::constructor_subOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 27)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__25__3D_) COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 29)) ;
    outArgument_outInfixOperator = GALGAS_infixOperator::constructor_subOpNoOvf (SOURCE_FILE ("instruction-assignment-operator.galgas", 30)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2A__3D_) COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 32)) ;
    outArgument_outInfixOperator = GALGAS_infixOperator::constructor_mulOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 33)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2A__25__3D_) COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 35)) ;
    outArgument_outInfixOperator = GALGAS_infixOperator::constructor_mulOpNoOvf (SOURCE_FILE ("instruction-assignment-operator.galgas", 36)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3C__3C__3D_) COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 38)) ;
    outArgument_outInfixOperator = GALGAS_infixOperator::constructor_leftShiftOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 39)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3E__3E__3D_) COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 41)) ;
    outArgument_outInfixOperator = GALGAS_infixOperator::constructor_rightShiftOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 42)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outOperatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 44)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_assignment_5F_operator_i78_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_69 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7C__3D_) COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 11)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__26__3D_) COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 14)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5E__3D_) COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 17)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2B__3D_) COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 20)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2B__25__3D_) COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 23)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3D_) COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 26)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__25__3D_) COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 29)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2A__3D_) COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 32)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2A__25__3D_) COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 35)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3C__3C__3D_) COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 38)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3E__3E__3D_) COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i79_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_LValueAST var_lvalue_1464 ;
  nt_lvalue_ (var_lvalue_1464, inCompiler) ;
  GALGAS_location var_instructionLocation_1492 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 52)) ;
  GALGAS_infixOperator var_infixOperator_1581 ;
  GALGAS_location var_operatorLocation_1603 ;
  nt_assignment_5F_operator_ (var_infixOperator_1581, var_operatorLocation_1603, inCompiler) ;
  GALGAS_expressionAST var_rightExpression_1680 ;
  nt_expression_ (var_rightExpression_1680, inCompiler) ;
  GALGAS_primaryInExpressionAccessListAST var_accessList_1760 = GALGAS_primaryInExpressionAccessListAST::constructor_emptyList (SOURCE_FILE ("instruction-assignment-operator.galgas", 58)) ;
  cEnumerator_accessInAssignmentListAST enumerator_1804 (var_lvalue_1464.getter_mAccessList (HERE), kENUMERATION_UP) ;
  while (enumerator_1804.hasCurrentObject ()) {
    switch (enumerator_1804.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_1911 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_1804.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_1911->mAssociatedValue0 ;
        var_accessList_1760.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_property (extractedValue_name  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 62))  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 62)) ;
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_2054 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_1804.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_index = extractPtr_2054->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_2054->mAssociatedValue1 ;
        var_accessList_1760.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_arrayAccess (extractedValue_index, extractedValue_endOfIndex  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 64))  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 64)) ;
      }
      break ;
    }
    enumerator_1804.gotoNextObject () ;
  }
  GALGAS_primaryInExpressionAST var_leftExpression_2095 = GALGAS_primaryInExpressionAST::constructor_new (var_lvalue_1464.getter_mIdentifier (HERE), var_accessList_1760  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 67)) ;
  GALGAS_infixOperatorExpressionAST var_expression_2178 = GALGAS_infixOperatorExpressionAST::constructor_new (var_leftExpression_2095, var_operatorLocation_1603, var_infixOperator_1581, var_rightExpression_1680  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 68)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_assignmentInstructionAST::constructor_new (var_instructionLocation_1492, var_lvalue_1464, var_expression_2178  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 75))  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 75)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i79_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_lvalue_parse (inCompiler) ;
  nt_assignment_5F_operator_parse (inCompiler) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i80_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_var) COMMA_SOURCE_FILE ("instruction-var.galgas", 27)) ;
  GALGAS_lstring var_varName_1339 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-var.galgas", 28)) ;
  GALGAS_lstring var_optionalTypeName_1369 ;
  switch (select_plm_5F_syntax_70 (inCompiler)) {
  case 1: {
    var_optionalTypeName_1369 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-var.galgas", 31)) ;
  } break ;
  case 2: {
    var_optionalTypeName_1369 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("instruction-var.galgas", 33)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("instruction-var.galgas", 35)) ;
  GALGAS_expressionAST var_expression_1522 ;
  nt_expression_ (var_expression_1522, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_varInstructionWithAssignmentAST::constructor_new (var_varName_1339.getter_location (HERE), var_varName_1339, var_optionalTypeName_1369, var_expression_1522  COMMA_SOURCE_FILE ("instruction-var.galgas", 37))  COMMA_SOURCE_FILE ("instruction-var.galgas", 37)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i80_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_var) COMMA_SOURCE_FILE ("instruction-var.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-var.galgas", 28)) ;
  switch (select_plm_5F_syntax_70 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("instruction-var.galgas", 33)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("instruction-var.galgas", 35)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i81_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_var) COMMA_SOURCE_FILE ("instruction-var.galgas", 48)) ;
  GALGAS_lstring var_varName_1904 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-var.galgas", 49)) ;
  GALGAS_lstring var_typeName_1931 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("instruction-var.galgas", 50)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_varInstructionAST::constructor_new (var_varName_1904.getter_location (HERE), var_varName_1904, var_typeName_1931  COMMA_SOURCE_FILE ("instruction-var.galgas", 51))  COMMA_SOURCE_FILE ("instruction-var.galgas", 51)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i81_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_var) COMMA_SOURCE_FILE ("instruction-var.galgas", 48)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-var.galgas", 49)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("instruction-var.galgas", 50)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i82_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_let) COMMA_SOURCE_FILE ("instruction-let.galgas", 20)) ;
  GALGAS_lstring var_varName_1133 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-let.galgas", 21)) ;
  GALGAS_lstring var_optionalTypeName_1163 ;
  switch (select_plm_5F_syntax_71 (inCompiler)) {
  case 1: {
    var_optionalTypeName_1163 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-let.galgas", 24)) ;
  } break ;
  case 2: {
    var_optionalTypeName_1163 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("instruction-let.galgas", 26)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("instruction-let.galgas", 28)) ;
  GALGAS_expressionAST var_expression_1316 ;
  nt_expression_ (var_expression_1316, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_letInstructionWithAssignmentAST::constructor_new (var_varName_1133.getter_location (HERE), var_varName_1133, var_optionalTypeName_1163, var_expression_1316  COMMA_SOURCE_FILE ("instruction-let.galgas", 30))  COMMA_SOURCE_FILE ("instruction-let.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i82_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_let) COMMA_SOURCE_FILE ("instruction-let.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-let.galgas", 21)) ;
  switch (select_plm_5F_syntax_71 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("instruction-let.galgas", 26)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("instruction-let.galgas", 28)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i83_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_nop) COMMA_SOURCE_FILE ("instruction-nop.galgas", 17)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_letInstructionNOP::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-nop.galgas", 18))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 18))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i83_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_nop) COMMA_SOURCE_FILE ("instruction-nop.galgas", 17)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i84_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_assert) COMMA_SOURCE_FILE ("instruction-assert.galgas", 18)) ;
  GALGAS_location var_loc_1047 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 19)) ;
  GALGAS_expressionAST var_expression_1112 ;
  nt_expression_ (var_expression_1112, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_assertInstructionAST::constructor_new (var_loc_1047, var_expression_1112  COMMA_SOURCE_FILE ("instruction-assert.galgas", 21))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i84_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_assert) COMMA_SOURCE_FILE ("instruction-assert.galgas", 18)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i85_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_panic) COMMA_SOURCE_FILE ("instruction-panic.galgas", 18)) ;
  GALGAS_location var_loc_1049 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 19)) ;
  GALGAS_expressionAST var_codeExpression_1118 ;
  nt_expression_ (var_codeExpression_1118, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_panicInstructionAST::constructor_new (var_loc_1049, var_codeExpression_1118  COMMA_SOURCE_FILE ("instruction-panic.galgas", 21))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i85_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_panic) COMMA_SOURCE_FILE ("instruction-panic.galgas", 18)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i86_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_ifInstructionAST var_ifInstruction_1325 ;
  nt_if_5F_instruction_ (var_ifInstruction_1325, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (var_ifInstruction_1325  COMMA_SOURCE_FILE ("instruction-if.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i86_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_if_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_if_5F_instruction_i87_ (GALGAS_ifInstructionAST & outArgument_outIfInstruction,
                                                                       C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outIfInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_if) COMMA_SOURCE_FILE ("instruction-if.galgas", 32)) ;
  GALGAS_location var_instructionLocation_1593 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 33)) ;
  GALGAS_bool var_staticIfExpression_1639 ;
  switch (select_plm_5F_syntax_72 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_attributeValue_1690 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__40_attribute) COMMA_SOURCE_FILE ("instruction-if.galgas", 36)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_attributeValue_1690.getter_string (HERE).objectCompare (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 37)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_staticIfExpression_1639 = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 42))) ;
      inCompiler->emitSemanticError (var_attributeValue_1690.getter_location (SOURCE_FILE ("instruction-if.galgas", 40)), GALGAS_string ("the attribute should be \"@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 40)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 40)), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 40)) ;
      var_staticIfExpression_1639.drop () ; // Release error dropped variable
    }
  } break ;
  case 2: {
    var_staticIfExpression_1639 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GALGAS_expressionAST var_testExpression_2071 ;
  nt_expression_ (var_testExpression_2071, inCompiler) ;
  GALGAS_location var_testExpressionEndLocation_2105 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 48)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("instruction-if.galgas", 49)) ;
  GALGAS_instructionListAST var_thenInstructionList_2177 ;
  nt_instructionList_ (var_thenInstructionList_2177, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("instruction-if.galgas", 51)) ;
  GALGAS_location var_endOfThenBranch_2209 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 52)) ;
  GALGAS_instructionListAST var_elseInstructionList_2270 ;
  switch (select_plm_5F_syntax_73 (inCompiler)) {
  case 1: {
    var_elseInstructionList_2270 = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 55)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_else) COMMA_SOURCE_FILE ("instruction-if.galgas", 57)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("instruction-if.galgas", 58)) ;
    nt_instructionList_ (var_elseInstructionList_2270, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("instruction-if.galgas", 60)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_else) COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
    GALGAS_ifInstructionAST var_ifInstruction_2459 ;
    nt_if_5F_instruction_ (var_ifInstruction_2459, inCompiler) ;
    GALGAS_instructionListAST temp_2 = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 64)) ;
    temp_2.addAssign_operation (var_ifInstruction_2459  COMMA_SOURCE_FILE ("instruction-if.galgas", 64)) ;
    var_elseInstructionList_2270 = temp_2 ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfElseBranch_2536 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 66)) ;
  outArgument_outIfInstruction = GALGAS_ifInstructionAST::constructor_new (var_instructionLocation_1593, var_testExpression_2071, var_testExpressionEndLocation_2105, var_staticIfExpression_1639, var_thenInstructionList_2177, var_endOfThenBranch_2209, var_elseInstructionList_2270, var_endOfElseBranch_2536, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 76))  COMMA_SOURCE_FILE ("instruction-if.galgas", 67)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_if_5F_instruction_i87_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_if) COMMA_SOURCE_FILE ("instruction-if.galgas", 32)) ;
  switch (select_plm_5F_syntax_72 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__40_attribute) COMMA_SOURCE_FILE ("instruction-if.galgas", 36)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("instruction-if.galgas", 49)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("instruction-if.galgas", 51)) ;
  switch (select_plm_5F_syntax_73 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_else) COMMA_SOURCE_FILE ("instruction-if.galgas", 57)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("instruction-if.galgas", 58)) ;
    nt_instructionList_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("instruction-if.galgas", 60)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_else) COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
    nt_if_5F_instruction_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_guarded_5F_command_i88_ (GALGAS_guardedCommandAST & outArgument_outGuardedCommand,
                                                                        C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outGuardedCommand.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_on) COMMA_SOURCE_FILE ("instruction-sync.galgas", 43)) ;
  GALGAS_expressionAST var_expression_2066 ;
  GALGAS_location var_endOfExp_2089 ;
  GALGAS_bool var_warnsOnStaticExpression_2123 ;
  switch (select_plm_5F_syntax_74 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("instruction-sync.galgas", 48)) ;
    nt_expression_ (var_expression_2066, inCompiler) ;
    var_endOfExp_2089 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 50)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("instruction-sync.galgas", 51)) ;
    var_warnsOnStaticExpression_2123 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    var_expression_2066 = GALGAS_literalBooleanInExpressionAST::constructor_new (GALGAS_bool (true)  COMMA_SOURCE_FILE ("instruction-sync.galgas", 54)) ;
    var_endOfExp_2089 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 55)) ;
    var_warnsOnStaticExpression_2123 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_receiverName_2418 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-sync.galgas", 58)) ;
  GALGAS_lstring var_guardName_2441 ;
  switch (select_plm_5F_syntax_75 (inCompiler)) {
  case 1: {
    var_guardName_2441 = var_receiverName_2418 ;
    var_receiverName_2418 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 62)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("instruction-sync.galgas", 64)) ;
    var_guardName_2441 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-sync.galgas", 65)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_effectiveArgumentListAST var_effectiveParameterList_2625 ;
  GALGAS_location joker_2627 ; // Joker input parameter
  nt_effective_5F_parameters_ (var_effectiveParameterList_2625, joker_2627, inCompiler) ;
  joker_2627.drop () ; // Release temporary input variables (joker in source)
  GALGAS_bool var_isWhileCommand_2653 ;
  switch (select_plm_5F_syntax_76 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_exit) COMMA_SOURCE_FILE ("instruction-sync.galgas", 70)) ;
    var_isWhileCommand_2653 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    var_isWhileCommand_2653 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  outArgument_outGuardedCommand = GALGAS_guardedCommandAST::constructor_boolAndSync (var_isWhileCommand_2653, var_expression_2066, var_warnsOnStaticExpression_2123, var_endOfExp_2089, var_receiverName_2418, var_guardName_2441, var_effectiveParameterList_2625  COMMA_SOURCE_FILE ("instruction-sync.galgas", 75)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_guarded_5F_command_i88_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_on) COMMA_SOURCE_FILE ("instruction-sync.galgas", 43)) ;
  switch (select_plm_5F_syntax_74 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("instruction-sync.galgas", 48)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("instruction-sync.galgas", 51)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-sync.galgas", 58)) ;
  switch (select_plm_5F_syntax_75 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("instruction-sync.galgas", 64)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-sync.galgas", 65)) ;
  } break ;
  default:
    break ;
  }
  nt_effective_5F_parameters_parse (inCompiler) ;
  switch (select_plm_5F_syntax_76 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_exit) COMMA_SOURCE_FILE ("instruction-sync.galgas", 70)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_guarded_5F_command_i89_ (GALGAS_guardedCommandAST & outArgument_outGuardedCommand,
                                                                        C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outGuardedCommand.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_on) COMMA_SOURCE_FILE ("instruction-sync.galgas", 89)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("instruction-sync.galgas", 90)) ;
  GALGAS_expressionAST var_expression_3315 ;
  nt_expression_ (var_expression_3315, inCompiler) ;
  GALGAS_location var_endOfExp_3332 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 92)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("instruction-sync.galgas", 93)) ;
  GALGAS_bool var_isWhileCommand_3382 ;
  switch (select_plm_5F_syntax_77 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_exit) COMMA_SOURCE_FILE ("instruction-sync.galgas", 96)) ;
    var_isWhileCommand_3382 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    var_isWhileCommand_3382 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  outArgument_outGuardedCommand = GALGAS_guardedCommandAST::constructor_boolean (var_isWhileCommand_3382, var_expression_3315, var_endOfExp_3332  COMMA_SOURCE_FILE ("instruction-sync.galgas", 101)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_guarded_5F_command_i89_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_on) COMMA_SOURCE_FILE ("instruction-sync.galgas", 89)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("instruction-sync.galgas", 90)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("instruction-sync.galgas", 93)) ;
  switch (select_plm_5F_syntax_77 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_exit) COMMA_SOURCE_FILE ("instruction-sync.galgas", 96)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i90_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_sync) COMMA_SOURCE_FILE ("instruction-sync.galgas", 111)) ;
  GALGAS_location var_startLocation_3842 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 112)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("instruction-sync.galgas", 113)) ;
  GALGAS_syncInstructionBranchListAST var_onInstructionBranchList_3925 = GALGAS_syncInstructionBranchListAST::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 114)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_guardedCommandAST var_guardedCommand_4004 ;
    nt_guarded_5F_command_ (var_guardedCommand_4004, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("instruction-sync.galgas", 117)) ;
    GALGAS_instructionListAST var_instructionList_4059 ;
    nt_instructionList_ (var_instructionList_4059, inCompiler) ;
    var_onInstructionBranchList_3925.addAssign_operation (var_guardedCommand_4004, var_instructionList_4059, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 119))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 119)) ;
    switch (select_plm_5F_syntax_78 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_syncInstructionAST::constructor_new (var_startLocation_3842, var_onInstructionBranchList_3925, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 122))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 122))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 122)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("instruction-sync.galgas", 123)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i90_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_sync) COMMA_SOURCE_FILE ("instruction-sync.galgas", 111)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("instruction-sync.galgas", 113)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_guarded_5F_command_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("instruction-sync.galgas", 117)) ;
    nt_instructionList_parse (inCompiler) ;
    switch (select_plm_5F_syntax_78 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("instruction-sync.galgas", 123)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i91_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_while) COMMA_SOURCE_FILE ("instruction-while.galgas", 21)) ;
  GALGAS_location var_instructionLocation_1185 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 22)) ;
  GALGAS_expressionAST var_testExpression_1254 ;
  nt_expression_ (var_testExpression_1254, inCompiler) ;
  GALGAS_location var_testExpressionEndLocation_1288 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 24)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("instruction-while.galgas", 25)) ;
  GALGAS_instructionListAST var_instructionList_1356 ;
  nt_instructionList_ (var_instructionList_1356, inCompiler) ;
  GALGAS_location var_endOfInstruction_1381 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("instruction-while.galgas", 28)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_whileInstructionAST::constructor_new (var_instructionLocation_1185, var_testExpression_1254, var_testExpressionEndLocation_1288, var_instructionList_1356, var_endOfInstruction_1381  COMMA_SOURCE_FILE ("instruction-while.galgas", 29))  COMMA_SOURCE_FILE ("instruction-while.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i91_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_while) COMMA_SOURCE_FILE ("instruction-while.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("instruction-while.galgas", 25)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("instruction-while.galgas", 28)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i92_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_for) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 24)) ;
  GALGAS_lstring var_varName_1253 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 25)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_in) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 26)) ;
  GALGAS_lstring var_iteratedObject_1299 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 27)) ;
  GALGAS_bool var_staticWhileExpression_1329 = GALGAS_bool (false) ;
  GALGAS_expressionAST var_whileExpression_1372 ;
  switch (select_plm_5F_syntax_79 (inCompiler)) {
  case 1: {
    var_whileExpression_1372 = GALGAS_literalBooleanInExpressionAST::constructor_new (GALGAS_bool (true)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 31)) ;
    var_staticWhileExpression_1329 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_while) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 34)) ;
    switch (select_plm_5F_syntax_80 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_attributeValue_1561 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__40_attribute) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 36)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_attributeValue_1561.getter_string (HERE).objectCompare (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 37)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_staticWhileExpression_1329 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 41))) ;
        inCompiler->emitSemanticError (var_attributeValue_1561.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 40)), GALGAS_string ("the attribute should be \"@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 40)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 40)), fixItArray1  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 40)) ;
      }
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    nt_expression_ (var_whileExpression_1372, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOf_5F_whileExpression_5F_instruction_1935 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 47)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 48)) ;
  GALGAS_instructionListAST var_instructionList_2003 ;
  nt_instructionList_ (var_instructionList_2003, inCompiler) ;
  GALGAS_location var_endOfInstruction_2028 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 50)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 51)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_forInstructionAST::constructor_new (var_varName_1253.getter_location (HERE), var_varName_1253, var_iteratedObject_1299, var_whileExpression_1372, var_endOf_5F_whileExpression_5F_instruction_1935, var_staticWhileExpression_1329, var_instructionList_2003, var_endOfInstruction_2028  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 52))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i92_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_for) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 24)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 25)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_in) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 26)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 27)) ;
  switch (select_plm_5F_syntax_79 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_while) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 34)) ;
    switch (select_plm_5F_syntax_80 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__40_attribute) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 36)) ;
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 48)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 51)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i93_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_for) COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 25)) ;
  GALGAS_lstring var_varName_1334 ;
  switch (select_plm_5F_syntax_81 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5F_) COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 28)) ;
    var_varName_1334 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 29)) ;
  } break ;
  case 2: {
    var_varName_1334 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_typeName_1451 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 33)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_in) COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 34)) ;
  GALGAS_expressionAST var_lowerBoundExpression_1518 ;
  nt_expression_ (var_lowerBoundExpression_1518, inCompiler) ;
  GALGAS_location var_endOf_5F_lowerBoundExpression_5F_instruction_1565 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 36)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E__2E__3C_) COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 37)) ;
  GALGAS_expressionAST var_upperBoundExpression_1650 ;
  nt_expression_ (var_upperBoundExpression_1650, inCompiler) ;
  GALGAS_location var_endOf_5F_upperBoundExpression_5F_instruction_1697 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 39)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 40)) ;
  GALGAS_instructionListAST var_instructionList_1765 ;
  nt_instructionList_ (var_instructionList_1765, inCompiler) ;
  GALGAS_location var_endOfInstruction_1790 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 42)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 43)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_forLowerUpperBoundInstructionAST::constructor_new (var_varName_1334.getter_location (HERE), var_varName_1334, var_typeName_1451, var_lowerBoundExpression_1518, var_endOf_5F_lowerBoundExpression_5F_instruction_1565, var_upperBoundExpression_1650, var_endOf_5F_upperBoundExpression_5F_instruction_1697, var_instructionList_1765, var_endOfInstruction_1790  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 44))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 44)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i93_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_for) COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 25)) ;
  switch (select_plm_5F_syntax_81 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5F_) COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 28)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 33)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_in) COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 34)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E__2E__3C_) COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 37)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 40)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 43)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i94_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_callInstructionAST var_routineCallInstruction_1593 ;
  nt_procedure_5F_call_ (var_routineCallInstruction_1593, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (var_routineCallInstruction_1593  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i94_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_procedure_5F_call_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_procedure_5F_call_i95_ (GALGAS_callInstructionAST & outArgument_outInstruction,
                                                                       C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation_1859 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 39)) ;
  GALGAS_LValueAST var_assignmentTargetAST_1914 ;
  nt_lvalue_ (var_assignmentTargetAST_1914, inCompiler) ;
  GALGAS_effectiveArgumentListAST var_arguments_1956 ;
  GALGAS_location var_endOfArguments_1976 ;
  nt_effective_5F_parameters_ (var_arguments_1956, var_endOfArguments_1976, inCompiler) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_assignmentTargetAST_1914.getter_mAccessList (SOURCE_FILE ("instruction-procedure-call.galgas", 42)).getter_length (SOURCE_FILE ("instruction-procedure-call.galgas", 42)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsNotEqual, var_assignmentTargetAST_1914.getter_mIdentifier (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 42)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outInstruction = GALGAS_standAloneProcedureCallInstructionAST::constructor_new (var_instructionLocation_1859, var_arguments_1956, var_endOfArguments_1976, var_assignmentTargetAST_1914.getter_mIdentifier (HERE)  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 43)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outInstruction = GALGAS_procedureCallInstructionAST::constructor_new (var_instructionLocation_1859, var_arguments_1956, var_endOfArguments_1976, var_assignmentTargetAST_1914.getter_mIdentifier (HERE), var_assignmentTargetAST_1914.getter_mAccessList (HERE)  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 50)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_procedure_5F_call_i95_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_lvalue_parse (inCompiler) ;
  nt_effective_5F_parameters_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i96_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_switch) COMMA_SOURCE_FILE ("instruction-switch.galgas", 28)) ;
  GALGAS_location var_instructionLocation_1406 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 29)) ;
  GALGAS_expressionAST var_switchExpression_1477 ;
  nt_expression_ (var_switchExpression_1477, inCompiler) ;
  GALGAS_location var_switchExpressionEndLocation_1513 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 31)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 32)) ;
  GALGAS_switchCaseListAST var_switchCaseList_1576 = GALGAS_switchCaseListAST::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 33)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_case) COMMA_SOURCE_FILE ("instruction-switch.galgas", 35)) ;
    GALGAS_lstringlist var_caseIdentifiers_1640 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 36)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_caseIdf_1692 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
      var_caseIdentifiers_1640.addAssign_operation (var_caseIdf_1692  COMMA_SOURCE_FILE ("instruction-switch.galgas", 39)) ;
      switch (select_plm_5F_syntax_83 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 41)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 43)) ;
    GALGAS_instructionListAST var_instructionList_1817 ;
    nt_instructionList_ (var_instructionList_1817, inCompiler) ;
    var_switchCaseList_1576.addAssign_operation (var_caseIdentifiers_1640, var_instructionList_1817  COMMA_SOURCE_FILE ("instruction-switch.galgas", 45)) ;
    switch (select_plm_5F_syntax_82 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_location var_endOfInstruction_1918 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 49)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_switchInstructionAST::constructor_new (var_instructionLocation_1406, var_switchExpression_1477, var_switchExpressionEndLocation_1513, var_switchCaseList_1576, var_endOfInstruction_1918  COMMA_SOURCE_FILE ("instruction-switch.galgas", 50))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 50)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i96_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_switch) COMMA_SOURCE_FILE ("instruction-switch.galgas", 28)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_case) COMMA_SOURCE_FILE ("instruction-switch.galgas", 35)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
      switch (select_plm_5F_syntax_83 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 41)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 43)) ;
    nt_instructionList_parse (inCompiler) ;
    switch (select_plm_5F_syntax_82 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 49)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_lvalue_i97_ (GALGAS_LValueAST & outArgument_outAssignmentTargetAST,
                                                            C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outAssignmentTargetAST.drop () ; // Release 'out' argument
  GALGAS_lstring var_receiver_1485 ;
  switch (select_plm_5F_syntax_84 (inCompiler)) {
  case 1: {
    var_receiver_1485 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("lvalue.galgas", 35)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_self) COMMA_SOURCE_FILE ("lvalue.galgas", 37)) ;
    var_receiver_1485 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 38)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_accessInAssignmentListAST var_accessList_1670 = GALGAS_accessInAssignmentListAST::constructor_emptyList (SOURCE_FILE ("lvalue.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_85 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("lvalue.galgas", 44)) ;
      GALGAS_lstring var_propertyName_1743 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("lvalue.galgas", 45)) ;
      var_accessList_1670.addAssign_operation (GALGAS_accessInAssignmentAST::constructor_property (var_propertyName_1743  COMMA_SOURCE_FILE ("lvalue.galgas", 46))  COMMA_SOURCE_FILE ("lvalue.galgas", 46)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("lvalue.galgas", 48)) ;
      GALGAS_expressionAST var_expression_1850 ;
      nt_expression_ (var_expression_1850, inCompiler) ;
      GALGAS_location var_endOfIndex_1871 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 50)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("lvalue.galgas", 51)) ;
      var_accessList_1670.addAssign_operation (GALGAS_accessInAssignmentAST::constructor_arrayAccess (var_expression_1850, var_endOfIndex_1871  COMMA_SOURCE_FILE ("lvalue.galgas", 52))  COMMA_SOURCE_FILE ("lvalue.galgas", 52)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outAssignmentTargetAST = GALGAS_LValueAST::constructor_new (var_receiver_1485, var_accessList_1670  COMMA_SOURCE_FILE ("lvalue.galgas", 54)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_lvalue_i97_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_84 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("lvalue.galgas", 35)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_self) COMMA_SOURCE_FILE ("lvalue.galgas", 37)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_85 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("lvalue.galgas", 44)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("lvalue.galgas", 45)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("lvalue.galgas", 48)) ;
      nt_expression_parse (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("lvalue.galgas", 51)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_effective_5F_parameters_i98_ (GALGAS_effectiveArgumentListAST & outArgument_outEffectiveParameterList,
                                                                             GALGAS_location & outArgument_outEndOfArgs,
                                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outEndOfArgs.drop () ; // Release 'out' argument
  outArgument_outEffectiveParameterList = GALGAS_effectiveArgumentListAST::constructor_emptyList (SOURCE_FILE ("effective-parameters.galgas", 41)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_86 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_2024 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 45)) ;
      GALGAS_expressionAST var_expression_2059 ;
      nt_expression_ (var_expression_2059, inCompiler) ;
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_output (var_expression_2059, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 47))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 47)), var_selector_2024  COMMA_SOURCE_FILE ("effective-parameters.galgas", 47)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_2190 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21__3F_selector_3A_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 49)) ;
      GALGAS_lstring var_effectiveParameterName_2237 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("effective-parameters.galgas", 50)) ;
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_outputInput (var_effectiveParameterName_2237  COMMA_SOURCE_FILE ("effective-parameters.galgas", 51)), var_selector_2190  COMMA_SOURCE_FILE ("effective-parameters.galgas", 51)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_2370 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21__3F_selector_3A_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 53)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_self) COMMA_SOURCE_FILE ("effective-parameters.galgas", 54)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 55)) ;
      GALGAS_lstring var_effectiveParameterName_2440 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("effective-parameters.galgas", 56)) ;
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_outputInputSelfVariable (var_effectiveParameterName_2440  COMMA_SOURCE_FILE ("effective-parameters.galgas", 57)), var_selector_2370  COMMA_SOURCE_FILE ("effective-parameters.galgas", 57)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_selector_2584 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 59)) ;
      GALGAS_lstring var_effectiveParameterName_2631 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("effective-parameters.galgas", 60)) ;
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_input (var_effectiveParameterName_2631  COMMA_SOURCE_FILE ("effective-parameters.galgas", 61)), var_selector_2584  COMMA_SOURCE_FILE ("effective-parameters.galgas", 61)) ;
    } break ;
    case 6: {
      GALGAS_lstring var_selector_2757 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 63)) ;
      GALGAS_bool var_constant_2778 ;
      switch (select_plm_5F_syntax_87 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_var) COMMA_SOURCE_FILE ("effective-parameters.galgas", 66)) ;
        var_constant_2778 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_let) COMMA_SOURCE_FILE ("effective-parameters.galgas", 69)) ;
        var_constant_2778 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_effectiveParameterName_2934 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("effective-parameters.galgas", 72)) ;
      GALGAS_lstring var_typeName_2958 ;
      switch (select_plm_5F_syntax_88 (inCompiler)) {
      case 1: {
        var_typeName_2958 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("effective-parameters.galgas", 75)) ;
      } break ;
      case 2: {
        var_typeName_2958 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("effective-parameters.galgas", 77)) ;
      } break ;
      default:
        break ;
      }
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_inputWithType (var_constant_2778, var_typeName_2958, var_effectiveParameterName_2934  COMMA_SOURCE_FILE ("effective-parameters.galgas", 80)), var_selector_2757  COMMA_SOURCE_FILE ("effective-parameters.galgas", 79)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outEndOfArgs = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 83)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 84)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_effective_5F_parameters_i98_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_86 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 45)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21__3F_selector_3A_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 49)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("effective-parameters.galgas", 50)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21__3F_selector_3A_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 53)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_self) COMMA_SOURCE_FILE ("effective-parameters.galgas", 54)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 55)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("effective-parameters.galgas", 56)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 59)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("effective-parameters.galgas", 60)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 63)) ;
      switch (select_plm_5F_syntax_87 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_var) COMMA_SOURCE_FILE ("effective-parameters.galgas", 66)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_let) COMMA_SOURCE_FILE ("effective-parameters.galgas", 69)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("effective-parameters.galgas", 72)) ;
      switch (select_plm_5F_syntax_88 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("effective-parameters.galgas", 77)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 84)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i99_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_target) COMMA_SOURCE_FILE ("target-generation.galgas", 10)) ;
  GALGAS_lstring var_targetName_595 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("target-generation.galgas", 11)) ;
  ioArgument_ioAST.mProperty_mTargetListAST.addAssign_operation (var_targetName_595  COMMA_SOURCE_FILE ("target-generation.galgas", 12)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i99_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_target) COMMA_SOURCE_FILE ("target-generation.galgas", 10)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("target-generation.galgas", 11)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i100_ (GALGAS_ast & ioArgument_ioAST,
                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_check) COMMA_SOURCE_FILE ("declaration-check-target.galgas", 10)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_target) COMMA_SOURCE_FILE ("declaration-check-target.galgas", 11)) ;
  GALGAS_location var_targetConstructLocation_608 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-check-target.galgas", 12)) ;
  GALGAS_lstringlist var_acceptedTargetList_661 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-check-target.galgas", 13)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_targetName_710 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("declaration-check-target.galgas", 15)) ;
    var_acceptedTargetList_661.addAssign_operation (var_targetName_710  COMMA_SOURCE_FILE ("declaration-check-target.galgas", 16)) ;
    switch (select_plm_5F_syntax_89 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("declaration-check-target.galgas", 18)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioAST.mProperty_mCheckTargetListAST.addAssign_operation (var_targetConstructLocation_608, var_acceptedTargetList_661  COMMA_SOURCE_FILE ("declaration-check-target.galgas", 20)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i100_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_check) COMMA_SOURCE_FILE ("declaration-check-target.galgas", 10)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_target) COMMA_SOURCE_FILE ("declaration-check-target.galgas", 11)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("declaration-check-target.galgas", 15)) ;
    switch (select_plm_5F_syntax_89 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("declaration-check-target.galgas", 18)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_key_i0_ (const GALGAS_string constinArgument_inKey,
                                                                                                    C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_lstring var_key_3314 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("configuration.galgas", 88)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_key_3314.getter_string (HERE).objectCompare (constinArgument_inKey)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    appendFixItActions (fixItArray1, kFixItReplace, constinArgument_inKey) ;
    inCompiler->emitSemanticError (var_key_3314.getter_location (SOURCE_FILE ("configuration.galgas", 90)), GALGAS_string ("invalid key"), fixItArray1  COMMA_SOURCE_FILE ("configuration.galgas", 90)) ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("configuration.galgas", 92)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_key_i0_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("configuration.galgas", 88)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("configuration.galgas", 92)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_ (GALGAS__32_lstringlist & outArgument_outPythonUtilityToolList,
                                                                                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outPythonUtilityToolList.drop () ; // Release 'out' argument
  nt_key_ (GALGAS_string ("PYTHON_UTILITIES"), inCompiler) ;
  outArgument_outPythonUtilityToolList = GALGAS__32_lstringlist::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 99)) ;
  switch (select_plm_5F_target_5F_specific_5F_syntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_relativePath_3753 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 103)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("configuration.galgas", 104)) ;
      GALGAS_lstring var_destinationFile_3806 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 105)) ;
      outArgument_outPythonUtilityToolList.addAssign_operation (var_relativePath_3753, var_destinationFile_3806  COMMA_SOURCE_FILE ("configuration.galgas", 106)) ;
      switch (select_plm_5F_target_5F_specific_5F_syntax_1 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("configuration.galgas", 108)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_key_parse (inCompiler) ;
  switch (select_plm_5F_target_5F_specific_5F_syntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 103)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("configuration.galgas", 104)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 105)) ;
      switch (select_plm_5F_target_5F_specific_5F_syntax_1 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("configuration.galgas", 108)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_section_5F_specification_i2_ (GALGAS_sectionImplementationScheme & outArgument_outSectionImplementation,
                                                                                                                         C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outSectionImplementation.drop () ; // Release 'out' argument
  nt_key_ (GALGAS_string ("SECTION"), inCompiler) ;
  switch (select_plm_5F_target_5F_specific_5F_syntax_2 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_sectionHandler_4199 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 118)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 119)) ;
    GALGAS_lbigint var_sectionPushedRegisterByteSize_4260 = inCompiler->synthetizedAttribute_bigInteger () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 120)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 121)) ;
    GALGAS_lstring var_sectionDispatcherHeader_4316 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 122)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 123)) ;
    GALGAS_lstring var_sectionDispatcherEntry_4371 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 124)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 125)) ;
    GALGAS_lstring var_sectionDispatcherInvocation_4431 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 126)) ;
    outArgument_outSectionImplementation = GALGAS_sectionImplementationScheme::constructor_svc (var_sectionPushedRegisterByteSize_4260, var_sectionHandler_4199, var_sectionDispatcherEntry_4371, var_sectionDispatcherHeader_4316, var_sectionDispatcherInvocation_4431  COMMA_SOURCE_FILE ("configuration.galgas", 127)) ;
  } break ;
  case 2: {
    GALGAS_lstring var_sectionDisableInterrupt_4816 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 135)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 136)) ;
    GALGAS_lstring var_sectionEnableInterrupt_4871 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 137)) ;
    outArgument_outSectionImplementation = GALGAS_sectionImplementationScheme::constructor_function (var_sectionDisableInterrupt_4816.getter_string (SOURCE_FILE ("configuration.galgas", 139)), var_sectionEnableInterrupt_4871.getter_string (SOURCE_FILE ("configuration.galgas", 140))  COMMA_SOURCE_FILE ("configuration.galgas", 138)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_section_5F_specification_i2_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_key_parse (inCompiler) ;
  switch (select_plm_5F_target_5F_specific_5F_syntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 118)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 119)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 120)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 121)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 122)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 123)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 124)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 125)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 126)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 135)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 136)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 137)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i3_ (GALGAS_ast & ioArgument_ioAST,
                                                                                                                                 GALGAS_lstringlist & outArgument_outImportedFileList,
                                                                                                                                 GALGAS_location & outArgument_outEndOfSourceFile,
                                                                                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outImportedFileList.drop () ; // Release 'out' argument
  outArgument_outEndOfSourceFile.drop () ; // Release 'out' argument
  GALGAS__32_lstringlist var_python_5F_utilityToolList_5394 ;
  nt_python_5F_utility_5F_tool_5F_list_ (var_python_5F_utilityToolList_5394, inCompiler) ;
  nt_key_ (GALGAS_string ("PYTHON_BUILD"), inCompiler) ;
  GALGAS_lstring var_python_5F_build_5453 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 154)) ;
  nt_key_ (GALGAS_string ("LINKER_SCRIPT"), inCompiler) ;
  GALGAS_lstring var_linkerScript_5513 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 156)) ;
  nt_key_ (GALGAS_string ("PANIC"), inCompiler) ;
  GALGAS_lstring var_panicCodeTypeName_5568 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("configuration.galgas", 158)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 159)) ;
  GALGAS_lstring var_panicLineTypeName_5613 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("configuration.galgas", 160)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 161)) ;
  GALGAS_lstring var_targetPanic_5F_LL_5F_filePath_5665 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 162)) ;
  nt_key_ (GALGAS_string ("POINTER_BIT_COUNT"), inCompiler) ;
  GALGAS_lbigint var_pointerSize_5727 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 164)) ;
  nt_key_ (GALGAS_string ("SYSTEM_STACK_SIZE"), inCompiler) ;
  GALGAS_lbigint var_systemStackSize_5793 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 166)) ;
  nt_key_ (GALGAS_string ("NOP"), inCompiler) ;
  GALGAS_lstring var_nopInstructionStringInLLVM_5857 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 168)) ;
  nt_key_ (GALGAS_string ("SERVICE"), inCompiler) ;
  GALGAS_lstring var_serviceHandler_5913 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 170)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 171)) ;
  GALGAS_lbigint var_servicePushedRegisterByteSize_5970 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 172)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 173)) ;
  GALGAS_lstring var_serviceDispatcherHeader_6022 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 174)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 175)) ;
  GALGAS_lstring var_serviceDispatcherEntry_6073 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 176)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 177)) ;
  GALGAS_lstring var_serviceEntry_6114 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 178)) ;
  GALGAS_sectionImplementationScheme var_sectionImplementation_6169 ;
  nt_section_5F_specification_ (var_sectionImplementation_6169, inCompiler) ;
  nt_key_ (GALGAS_string ("C_FILES"), inCompiler) ;
  GALGAS_lstringlist var_C_5F_definitionFiles_6225 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 181)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_fileRelativePath_6280 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 183)) ;
    var_C_5F_definitionFiles_6225.addAssign_operation (var_fileRelativePath_6280  COMMA_SOURCE_FILE ("configuration.galgas", 184)) ;
    switch (select_plm_5F_target_5F_specific_5F_syntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("configuration.galgas", 186)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_key_ (GALGAS_string ("S_FILES"), inCompiler) ;
  GALGAS_lstringlist var_S_5F_definitionFiles_6409 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 189)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GALGAS_lstring var_fileRelativePath_6464 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 191)) ;
    var_S_5F_definitionFiles_6409.addAssign_operation (var_fileRelativePath_6464  COMMA_SOURCE_FILE ("configuration.galgas", 192)) ;
    switch (select_plm_5F_target_5F_specific_5F_syntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("configuration.galgas", 194)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  nt_key_ (GALGAS_string ("LL_FILES"), inCompiler) ;
  GALGAS_lstringlist var_LL_5F_definitionFiles_6595 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 197)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GALGAS_lstring var_fileRelativePath_6650 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 199)) ;
    var_LL_5F_definitionFiles_6595.addAssign_operation (var_fileRelativePath_6650  COMMA_SOURCE_FILE ("configuration.galgas", 200)) ;
    switch (select_plm_5F_target_5F_specific_5F_syntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("configuration.galgas", 202)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  outArgument_outImportedFileList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 204)) ;
  nt_key_ (GALGAS_string ("PLM_FILES"), inCompiler) ;
  switch (select_plm_5F_target_5F_specific_5F_syntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GALGAS_lstring var_relativeFilePath_6848 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 209)) ;
      outArgument_outImportedFileList.addAssign_operation (var_relativeFilePath_6848  COMMA_SOURCE_FILE ("configuration.galgas", 210)) ;
      switch (select_plm_5F_target_5F_specific_5F_syntax_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("configuration.galgas", 212)) ;
      } break ;
      default:
        repeatFlag_3 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  nt_key_ (GALGAS_string ("INTERRUPT_HANDLER"), inCompiler) ;
  GALGAS_lstring var_xtrInterruptHandler_7010 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 216)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 217)) ;
  GALGAS_lbigint var_stackedUserRegisterOnInterruptByteSize_7076 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 218)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 219)) ;
  GALGAS_lstring var_undefinedInterruptHandler_7130 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 220)) ;
  GALGAS_interruptionConfigurationList var_interruptionConfigurationList_7191 ;
  GALGAS_enumerationConstantList var_interruptConstantList_7218 ;
  nt_interruptConfigList_ (var_interruptionConfigurationList_7191, var_interruptConstantList_7218, inCompiler) ;
  GALGAS_targetParameters var_parameters_7238 = GALGAS_targetParameters::constructor_new (var_python_5F_utilityToolList_5394, var_python_5F_build_5453, var_targetPanic_5F_LL_5F_filePath_5665, var_linkerScript_5513, var_pointerSize_5727, var_systemStackSize_5793, var_stackedUserRegisterOnInterruptByteSize_7076, var_nopInstructionStringInLLVM_5857, var_serviceHandler_5913, var_servicePushedRegisterByteSize_5970, var_sectionImplementation_6169, var_C_5F_definitionFiles_6225, var_S_5F_definitionFiles_6409, var_LL_5F_definitionFiles_6595, var_xtrInterruptHandler_7010, var_undefinedInterruptHandler_7130, var_serviceDispatcherEntry_6073, var_serviceDispatcherHeader_6022, var_serviceEntry_6114  COMMA_SOURCE_FILE ("configuration.galgas", 222)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_configurationDeclarationAST::constructor_new (var_panicCodeTypeName_5568, var_panicLineTypeName_5613, var_parameters_7238, var_interruptionConfigurationList_7191  COMMA_SOURCE_FILE ("configuration.galgas", 243))  COMMA_SOURCE_FILE ("configuration.galgas", 243)) ;
  outArgument_outEndOfSourceFile = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 249)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_enumerationDeclarationAST::constructor_new (GALGAS_lstring::constructor_new (function_isrSlotTypeName (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 251)), var_xtrInterruptHandler_7010.getter_location (HERE)  COMMA_SOURCE_FILE ("configuration.galgas", 251)), var_interruptConstantList_7218  COMMA_SOURCE_FILE ("configuration.galgas", 250))  COMMA_SOURCE_FILE ("configuration.galgas", 250)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i3_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_python_5F_utility_5F_tool_5F_list_parse (inCompiler) ;
  nt_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 154)) ;
  nt_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 156)) ;
  nt_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("configuration.galgas", 158)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 159)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("configuration.galgas", 160)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 161)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 162)) ;
  nt_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 164)) ;
  nt_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 166)) ;
  nt_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 168)) ;
  nt_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 170)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 171)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 172)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 173)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 174)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 175)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 176)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 177)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 178)) ;
  nt_section_5F_specification_parse (inCompiler) ;
  nt_key_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 183)) ;
    switch (select_plm_5F_target_5F_specific_5F_syntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("configuration.galgas", 186)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_key_parse (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 191)) ;
    switch (select_plm_5F_target_5F_specific_5F_syntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("configuration.galgas", 194)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  nt_key_parse (inCompiler) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 199)) ;
    switch (select_plm_5F_target_5F_specific_5F_syntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("configuration.galgas", 202)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  nt_key_parse (inCompiler) ;
  switch (select_plm_5F_target_5F_specific_5F_syntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 209)) ;
      switch (select_plm_5F_target_5F_specific_5F_syntax_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("configuration.galgas", 212)) ;
      } break ;
      default:
        repeatFlag_3 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  nt_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 216)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 217)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 218)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 219)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 220)) ;
  nt_interruptConfigList_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_interruptConfigList_i4_ (GALGAS_interruptionConfigurationList & outArgument_interruptionConfigurationList,
                                                                                                                    GALGAS_enumerationConstantList & outArgument_outEnumerationConstantList,
                                                                                                                    C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_interruptionConfigurationList.drop () ; // Release 'out' argument
  outArgument_outEnumerationConstantList.drop () ; // Release 'out' argument
  outArgument_interruptionConfigurationList = GALGAS_interruptionConfigurationList::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 262)) ;
  outArgument_outEnumerationConstantList = GALGAS_enumerationConstantList::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 263)) ;
  nt_key_ (GALGAS_string ("INTERRUPTS"), inCompiler) ;
  switch (select_plm_5F_target_5F_specific_5F_syntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_interruptName_8626 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("configuration.galgas", 268)) ;
      GALGAS_interruptionPanicCode var_interruptionPanicCode_8679 ;
      switch (select_plm_5F_target_5F_specific_5F_syntax_10 (inCompiler)) {
      case 1: {
        var_interruptionPanicCode_8679 = GALGAS_interruptionPanicCode::constructor_noCode (SOURCE_FILE ("configuration.galgas", 271)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("configuration.galgas", 273)) ;
        GALGAS_lbigint var_panicCode_8797 = inCompiler->synthetizedAttribute_bigInteger () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 274)) ;
        var_interruptionPanicCode_8679 = GALGAS_interruptionPanicCode::constructor_code (var_panicCode_8797  COMMA_SOURCE_FILE ("configuration.galgas", 275)) ;
        outArgument_outEnumerationConstantList.addAssign_operation (var_interruptName_8626, var_panicCode_8797.getter_bigint (SOURCE_FILE ("configuration.galgas", 276))  COMMA_SOURCE_FILE ("configuration.galgas", 276)) ;
      } break ;
      default:
        break ;
      }
      outArgument_interruptionConfigurationList.addAssign_operation (var_interruptName_8626, var_interruptionPanicCode_8679  COMMA_SOURCE_FILE ("configuration.galgas", 278)) ;
      switch (select_plm_5F_target_5F_specific_5F_syntax_9 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("configuration.galgas", 280)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_interruptConfigList_i4_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_key_parse (inCompiler) ;
  switch (select_plm_5F_target_5F_specific_5F_syntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("configuration.galgas", 268)) ;
      switch (select_plm_5F_target_5F_specific_5F_syntax_10 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("configuration.galgas", 273)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 274)) ;
      } break ;
      default:
        break ;
      }
      switch (select_plm_5F_target_5F_specific_5F_syntax_9 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("configuration.galgas", 280)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_interruptionPanicCode_code::cEnumAssociatedValues_interruptionPanicCode_code (const GALGAS_lbigint & inAssociatedValue0
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_interruptionPanicCode_code::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_interruptionPanicCode_code::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_interruptionPanicCode_code * ptr = dynamic_cast<const cEnumAssociatedValues_interruptionPanicCode_code *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode::GALGAS_interruptionPanicCode (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode GALGAS_interruptionPanicCode::constructor_noCode (UNUSED_LOCATION_ARGS) {
  GALGAS_interruptionPanicCode result ;
  result.mEnum = kEnum_noCode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode GALGAS_interruptionPanicCode::constructor_code (const GALGAS_lbigint & inAssociatedValue0
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_interruptionPanicCode result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_code ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_interruptionPanicCode_code (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionPanicCode::method_code (GALGAS_lbigint & outAssociatedValue0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_code) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @interruptionPanicCode code invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_interruptionPanicCode_code * ptr = (const cEnumAssociatedValues_interruptionPanicCode_code *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_interruptionPanicCode [3] = {
  "(not built)",
  "noCode",
  "code"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_interruptionPanicCode::getter_isNoCode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noCode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_interruptionPanicCode::getter_isCode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_code == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionPanicCode::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<enum @interruptionPanicCode: " << gEnumNameArrayFor_interruptionPanicCode [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_interruptionPanicCode::objectCompare (const GALGAS_interruptionPanicCode & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @interruptionPanicCode type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_interruptionPanicCode ("interruptionPanicCode",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_interruptionPanicCode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptionPanicCode ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_interruptionPanicCode::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptionPanicCode (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode GALGAS_interruptionPanicCode::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_interruptionPanicCode result ;
  const GALGAS_interruptionPanicCode * p = (const GALGAS_interruptionPanicCode *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_interruptionPanicCode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptionPanicCode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@interruptionConfigurationList' list                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_interruptionConfigurationList : public cCollectionElement {
  public : GALGAS_interruptionConfigurationList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_interruptionConfigurationList (const GALGAS_lstring & in_mInterruptName,
                                                             const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode
                                                             COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_interruptionConfigurationList::cCollectionElement_interruptionConfigurationList (const GALGAS_lstring & in_mInterruptName,
                                                                                                    const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInterruptName, in_mInterruptionPanicCode) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_interruptionConfigurationList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_interruptionConfigurationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_interruptionConfigurationList (mObject.mProperty_mInterruptName, mObject.mProperty_mInterruptionPanicCode COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_interruptionConfigurationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInterruptName" ":" ;
  mObject.mProperty_mInterruptName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInterruptionPanicCode" ":" ;
  mObject.mProperty_mInterruptionPanicCode.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_interruptionConfigurationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_interruptionConfigurationList * operand = (cCollectionElement_interruptionConfigurationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_interruptionConfigurationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList::GALGAS_interruptionConfigurationList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList::GALGAS_interruptionConfigurationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_interruptionConfigurationList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_interruptionPanicCode & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_interruptionConfigurationList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_interruptionConfigurationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_interruptionConfigurationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionConfigurationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_lstring & in_mInterruptName,
                                                                      const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_interruptionConfigurationList * p = NULL ;
  macroMyNew (p, cCollectionElement_interruptionConfigurationList (in_mInterruptName,
                                                                   in_mInterruptionPanicCode COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionConfigurationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_interruptionPanicCode & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_interruptionConfigurationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionConfigurationList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_interruptionPanicCode inOperand1,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_interruptionConfigurationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionConfigurationList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                 GALGAS_interruptionPanicCode & outOperand1,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
      outOperand0 = p->mObject.mProperty_mInterruptName ;
      outOperand1 = p->mObject.mProperty_mInterruptionPanicCode ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionConfigurationList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                            GALGAS_interruptionPanicCode & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    outOperand0 = p->mObject.mProperty_mInterruptName ;
    outOperand1 = p->mObject.mProperty_mInterruptionPanicCode ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionConfigurationList::setter_popLast (GALGAS_lstring & outOperand0,
                                                           GALGAS_interruptionPanicCode & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    outOperand0 = p->mObject.mProperty_mInterruptName ;
    outOperand1 = p->mObject.mProperty_mInterruptionPanicCode ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionConfigurationList::method_first (GALGAS_lstring & outOperand0,
                                                         GALGAS_interruptionPanicCode & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    outOperand0 = p->mObject.mProperty_mInterruptName ;
    outOperand1 = p->mObject.mProperty_mInterruptionPanicCode ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionConfigurationList::method_last (GALGAS_lstring & outOperand0,
                                                        GALGAS_interruptionPanicCode & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    outOperand0 = p->mObject.mProperty_mInterruptName ;
    outOperand1 = p->mObject.mProperty_mInterruptionPanicCode ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::add_operation (const GALGAS_interruptionConfigurationList & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_interruptionConfigurationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_interruptionConfigurationList result = GALGAS_interruptionConfigurationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_interruptionConfigurationList result = GALGAS_interruptionConfigurationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_interruptionConfigurationList result = GALGAS_interruptionConfigurationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionConfigurationList::plusAssign_operation (const GALGAS_interruptionConfigurationList inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_interruptionConfigurationList::getter_mInterruptNameAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    result = p->mObject.mProperty_mInterruptName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode GALGAS_interruptionConfigurationList::getter_mInterruptionPanicCodeAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
  GALGAS_interruptionPanicCode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    result = p->mObject.mProperty_mInterruptionPanicCode ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_interruptionConfigurationList::cEnumerator_interruptionConfigurationList (const GALGAS_interruptionConfigurationList & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList_2D_element cEnumerator_interruptionConfigurationList::current (LOCATION_ARGS) const {
  const cCollectionElement_interruptionConfigurationList * p = (const cCollectionElement_interruptionConfigurationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_interruptionConfigurationList::current_mInterruptName (LOCATION_ARGS) const {
  const cCollectionElement_interruptionConfigurationList * p = (const cCollectionElement_interruptionConfigurationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
  return p->mObject.mProperty_mInterruptName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode cEnumerator_interruptionConfigurationList::current_mInterruptionPanicCode (LOCATION_ARGS) const {
  const cCollectionElement_interruptionConfigurationList * p = (const cCollectionElement_interruptionConfigurationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
  return p->mObject.mProperty_mInterruptionPanicCode ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @interruptionConfigurationList type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_interruptionConfigurationList ("interruptionConfigurationList",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_interruptionConfigurationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptionConfigurationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_interruptionConfigurationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptionConfigurationList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_interruptionConfigurationList result ;
  const GALGAS_interruptionConfigurationList * p = (const GALGAS_interruptionConfigurationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_interruptionConfigurationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptionConfigurationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_sectionImplementationScheme_svc::cEnumAssociatedValues_sectionImplementationScheme_svc (const GALGAS_lbigint & inAssociatedValue0,
                                                                                                              const GALGAS_lstring & inAssociatedValue1,
                                                                                                              const GALGAS_lstring & inAssociatedValue2,
                                                                                                              const GALGAS_lstring & inAssociatedValue3,
                                                                                                              const GALGAS_lstring & inAssociatedValue4
                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3),
mAssociatedValue4 (inAssociatedValue4) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_sectionImplementationScheme_svc::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  mAssociatedValue4.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_sectionImplementationScheme_svc::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_sectionImplementationScheme_svc * ptr = dynamic_cast<const cEnumAssociatedValues_sectionImplementationScheme_svc *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue3.objectCompare (ptr->mAssociatedValue3) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue4.objectCompare (ptr->mAssociatedValue4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_sectionImplementationScheme_function::cEnumAssociatedValues_sectionImplementationScheme_function (const GALGAS_string & inAssociatedValue0,
                                                                                                                        const GALGAS_string & inAssociatedValue1
                                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_sectionImplementationScheme_function::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_sectionImplementationScheme_function::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_sectionImplementationScheme_function * ptr = dynamic_cast<const cEnumAssociatedValues_sectionImplementationScheme_function *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionImplementationScheme::GALGAS_sectionImplementationScheme (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionImplementationScheme GALGAS_sectionImplementationScheme::constructor_none (UNUSED_LOCATION_ARGS) {
  GALGAS_sectionImplementationScheme result ;
  result.mEnum = kEnum_none ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionImplementationScheme GALGAS_sectionImplementationScheme::constructor_svc (const GALGAS_lbigint & inAssociatedValue0,
                                                                                        const GALGAS_lstring & inAssociatedValue1,
                                                                                        const GALGAS_lstring & inAssociatedValue2,
                                                                                        const GALGAS_lstring & inAssociatedValue3,
                                                                                        const GALGAS_lstring & inAssociatedValue4
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sectionImplementationScheme result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid () && inAssociatedValue4.isValid ()) {
    result.mEnum = kEnum_svc ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_sectionImplementationScheme_svc (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3, inAssociatedValue4 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionImplementationScheme GALGAS_sectionImplementationScheme::constructor_function (const GALGAS_string & inAssociatedValue0,
                                                                                             const GALGAS_string & inAssociatedValue1
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_sectionImplementationScheme result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_function ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_sectionImplementationScheme_function (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionImplementationScheme::method_svc (GALGAS_lbigint & outAssociatedValue0,
                                                     GALGAS_lstring & outAssociatedValue1,
                                                     GALGAS_lstring & outAssociatedValue2,
                                                     GALGAS_lstring & outAssociatedValue3,
                                                     GALGAS_lstring & outAssociatedValue4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_svc) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    outAssociatedValue4.drop () ;
    C_String s ;
    s << "method @sectionImplementationScheme svc invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_sectionImplementationScheme_svc * ptr = (const cEnumAssociatedValues_sectionImplementationScheme_svc *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
    outAssociatedValue4 = ptr->mAssociatedValue4 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionImplementationScheme::method_function (GALGAS_string & outAssociatedValue0,
                                                          GALGAS_string & outAssociatedValue1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_function) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @sectionImplementationScheme function invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_sectionImplementationScheme_function * ptr = (const cEnumAssociatedValues_sectionImplementationScheme_function *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_sectionImplementationScheme [4] = {
  "(not built)",
  "none",
  "svc",
  "function"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_sectionImplementationScheme::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_none == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_sectionImplementationScheme::getter_isSvc (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_svc == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_sectionImplementationScheme::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_function == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionImplementationScheme::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<enum @sectionImplementationScheme: " << gEnumNameArrayFor_sectionImplementationScheme [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_sectionImplementationScheme::objectCompare (const GALGAS_sectionImplementationScheme & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @sectionImplementationScheme type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sectionImplementationScheme ("sectionImplementationScheme",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sectionImplementationScheme::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sectionImplementationScheme ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sectionImplementationScheme::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sectionImplementationScheme (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionImplementationScheme GALGAS_sectionImplementationScheme::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sectionImplementationScheme result ;
  const GALGAS_sectionImplementationScheme * p = (const GALGAS_sectionImplementationScheme *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sectionImplementationScheme *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sectionImplementationScheme", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension Getter '@sectionImplementationScheme sectionStackByteSize'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint extensionGetter_sectionStackByteSize (const GALGAS_sectionImplementationScheme & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const GALGAS_sectionImplementationScheme temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_sectionImplementationScheme::kNotBuilt:
    break ;
  case GALGAS_sectionImplementationScheme::kEnum_svc:
    {
      const cEnumAssociatedValues_sectionImplementationScheme_svc * extractPtr_1475 = (const cEnumAssociatedValues_sectionImplementationScheme_svc *) (temp_0.unsafePointer ()) ;
      const GALGAS_lbigint extractedValue_sectionPushedRegisterByteSize = extractPtr_1475->mAssociatedValue0 ;
      result_result = extractedValue_sectionPushedRegisterByteSize.getter_bigint (HERE) ;
    }
    break ;
  case GALGAS_sectionImplementationScheme::kEnum_function:
    {
      result_result = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 35)) ;
    }
    break ;
  case GALGAS_sectionImplementationScheme::kEnum_none:
    {
      result_result = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 36)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractDeclarationAST::objectCompare (const GALGAS_abstractDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDeclarationAST::GALGAS_abstractDeclarationAST (void) :
AC_GALGAS_class (false) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDeclarationAST::GALGAS_abstractDeclarationAST (const cPtr_abstractDeclarationAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @abstractDeclarationAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractDeclarationAST::cPtr_abstractDeclarationAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @abstractDeclarationAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractDeclarationAST ("abstractDeclarationAST",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDeclarationAST GALGAS_abstractDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractDeclarationAST result ;
  const GALGAS_abstractDeclarationAST * p = (const GALGAS_abstractDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_expressionAST::objectCompare (const GALGAS_expressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST::GALGAS_expressionAST (void) :
AC_GALGAS_class (false) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST::GALGAS_expressionAST (const cPtr_expressionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @expressionAST class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_expressionAST::cPtr_expressionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @expressionAST type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionAST ("expressionAST",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_expressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_expressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_expressionAST::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_expressionAST result ;
  const GALGAS_expressionAST * p = (const GALGAS_expressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_expressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractDecoratedDeclaration::objectCompare (const GALGAS_abstractDecoratedDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDecoratedDeclaration::GALGAS_abstractDecoratedDeclaration (void) :
AC_GALGAS_class (false) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDecoratedDeclaration::GALGAS_abstractDecoratedDeclaration (const cPtr_abstractDecoratedDeclaration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDecoratedDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @abstractDecoratedDeclaration class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractDecoratedDeclaration::cPtr_abstractDecoratedDeclaration (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @abstractDecoratedDeclaration type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractDecoratedDeclaration ("abstractDecoratedDeclaration",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractDecoratedDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractDecoratedDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractDecoratedDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDecoratedDeclaration GALGAS_abstractDecoratedDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractDecoratedDeclaration result ;
  const GALGAS_abstractDecoratedDeclaration * p = (const GALGAS_abstractDecoratedDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractDecoratedDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDecoratedDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractGenerationIR::objectCompare (const GALGAS_abstractGenerationIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractGenerationIR::GALGAS_abstractGenerationIR (void) :
AC_GALGAS_class (false) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractGenerationIR::GALGAS_abstractGenerationIR (const cPtr_abstractGenerationIR * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractGenerationIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @abstractGenerationIR class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractGenerationIR::cPtr_abstractGenerationIR (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @abstractGenerationIR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractGenerationIR ("abstractGenerationIR",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractGenerationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractGenerationIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractGenerationIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractGenerationIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractGenerationIR GALGAS_abstractGenerationIR::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractGenerationIR result ;
  const GALGAS_abstractGenerationIR * p = (const GALGAS_abstractGenerationIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractGenerationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractGenerationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@enumerationConstantList' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_enumerationConstantList : public cCollectionElement {
  public : GALGAS_enumerationConstantList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_enumerationConstantList (const GALGAS_lstring & in_mConstantName,
                                                       const GALGAS_bigint & in_mConstantValue
                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_enumerationConstantList::cCollectionElement_enumerationConstantList (const GALGAS_lstring & in_mConstantName,
                                                                                        const GALGAS_bigint & in_mConstantValue
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantName, in_mConstantValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_enumerationConstantList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_enumerationConstantList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_enumerationConstantList (mObject.mProperty_mConstantName, mObject.mProperty_mConstantValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_enumerationConstantList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantName" ":" ;
  mObject.mProperty_mConstantName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantValue" ":" ;
  mObject.mProperty_mConstantValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_enumerationConstantList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_enumerationConstantList * operand = (cCollectionElement_enumerationConstantList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_enumerationConstantList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList::GALGAS_enumerationConstantList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList::GALGAS_enumerationConstantList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumerationConstantList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_bigint & inOperand1
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_enumerationConstantList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumerationConstantList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_enumerationConstantList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationConstantList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mConstantName,
                                                                const GALGAS_bigint & in_mConstantValue
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationConstantList * p = NULL ;
  macroMyNew (p, cCollectionElement_enumerationConstantList (in_mConstantName,
                                                             in_mConstantValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationConstantList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_bigint & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumerationConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationConstantList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_bigint inOperand1,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumerationConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationConstantList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           GALGAS_bigint & outOperand1,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
      outOperand0 = p->mObject.mProperty_mConstantName ;
      outOperand1 = p->mObject.mProperty_mConstantValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationConstantList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                      GALGAS_bigint & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mConstantValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationConstantList::setter_popLast (GALGAS_lstring & outOperand0,
                                                     GALGAS_bigint & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mConstantValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationConstantList::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_bigint & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mConstantValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationConstantList::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_bigint & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mConstantValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::add_operation (const GALGAS_enumerationConstantList & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_enumerationConstantList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationConstantList result = GALGAS_enumerationConstantList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationConstantList result = GALGAS_enumerationConstantList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationConstantList result = GALGAS_enumerationConstantList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationConstantList::plusAssign_operation (const GALGAS_enumerationConstantList inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumerationConstantList::getter_mConstantNameAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    result = p->mObject.mProperty_mConstantName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_enumerationConstantList::getter_mConstantValueAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
  GALGAS_bigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    result = p->mObject.mProperty_mConstantValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_enumerationConstantList::cEnumerator_enumerationConstantList (const GALGAS_enumerationConstantList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList_2D_element cEnumerator_enumerationConstantList::current (LOCATION_ARGS) const {
  const cCollectionElement_enumerationConstantList * p = (const cCollectionElement_enumerationConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_enumerationConstantList::current_mConstantName (LOCATION_ARGS) const {
  const cCollectionElement_enumerationConstantList * p = (const cCollectionElement_enumerationConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
  return p->mObject.mProperty_mConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_enumerationConstantList::current_mConstantValue (LOCATION_ARGS) const {
  const cCollectionElement_enumerationConstantList * p = (const cCollectionElement_enumerationConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
  return p->mObject.mProperty_mConstantValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @enumerationConstantList type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationConstantList ("enumerationConstantList",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumerationConstantList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationConstantList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumerationConstantList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationConstantList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumerationConstantList result ;
  const GALGAS_enumerationConstantList * p = (const GALGAS_enumerationConstantList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumerationConstantList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationConstantList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_classConstantMap::cMapElement_classConstantMap (const GALGAS_lstring & inKey,
                                                            const GALGAS_bigint & in_mIndex,
                                                            const GALGAS_lstring & in_mClassTypeName
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex),
mProperty_mClassTypeName (in_mClassTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_classConstantMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mClassTypeName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_classConstantMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_classConstantMap (mProperty_lkey, mProperty_mIndex, mProperty_mClassTypeName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_classConstantMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mProperty_mIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mClassTypeName" ":" ;
  mProperty_mClassTypeName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_classConstantMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_classConstantMap * operand = (cMapElement_classConstantMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassTypeName.objectCompare (operand->mProperty_mClassTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap::GALGAS_classConstantMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap::GALGAS_classConstantMap (const GALGAS_classConstantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap & GALGAS_classConstantMap::operator = (const GALGAS_classConstantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap GALGAS_classConstantMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_classConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap GALGAS_classConstantMap::constructor_mapWithMapToOverride (const GALGAS_classConstantMap & inMapToOverride
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_classConstantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap GALGAS_classConstantMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_classConstantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classConstantMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                   const GALGAS_bigint & inArgument0,
                                                   const GALGAS_lstring & inArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_classConstantMap * p = NULL ;
  macroMyNew (p, cMapElement_classConstantMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@classConstantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classConstantMap::setter_insertKey (GALGAS_lstring inKey,
                                                GALGAS_bigint inArgument0,
                                                GALGAS_lstring inArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_classConstantMap * p = NULL ;
  macroMyNew (p, cMapElement_classConstantMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_classConstantMap_searchKey = "there is no '%K' constant" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classConstantMap::method_searchKey (GALGAS_lstring inKey,
                                                GALGAS_bigint & outArgument0,
                                                GALGAS_lstring & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_classConstantMap * p = (const cMapElement_classConstantMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_classConstantMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_classConstantMap) ;
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mClassTypeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_classConstantMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classConstantMap * p = (const cMapElement_classConstantMap *) attributes ;
  GALGAS_bigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classConstantMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_classConstantMap::getter_mClassTypeNameForKey (const GALGAS_string & inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classConstantMap * p = (const cMapElement_classConstantMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classConstantMap) ;
    result = p->mProperty_mClassTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classConstantMap::setter_setMIndexForKey (GALGAS_bigint inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_classConstantMap * p = (cMapElement_classConstantMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classConstantMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classConstantMap::setter_setMClassTypeNameForKey (GALGAS_lstring inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_classConstantMap * p = (cMapElement_classConstantMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classConstantMap) ;
    p->mProperty_mClassTypeName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_classConstantMap * GALGAS_classConstantMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_classConstantMap * result = (cMapElement_classConstantMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_classConstantMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_classConstantMap::cEnumerator_classConstantMap (const GALGAS_classConstantMap & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap_2D_element cEnumerator_classConstantMap::current (LOCATION_ARGS) const {
  const cMapElement_classConstantMap * p = (const cMapElement_classConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classConstantMap) ;
  return GALGAS_classConstantMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex, p->mProperty_mClassTypeName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_classConstantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_classConstantMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_classConstantMap * p = (const cMapElement_classConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classConstantMap) ;
  return p->mProperty_mIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_classConstantMap::current_mClassTypeName (LOCATION_ARGS) const {
  const cMapElement_classConstantMap * p = (const cMapElement_classConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classConstantMap) ;
  return p->mProperty_mClassTypeName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @classConstantMap type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classConstantMap ("classConstantMap",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_classConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_classConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classConstantMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap GALGAS_classConstantMap::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_classConstantMap result ;
  const GALGAS_classConstantMap * p = (const GALGAS_classConstantMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classConstantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classConstantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@structurePropertyListAST' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_structurePropertyListAST : public cCollectionElement {
  public : GALGAS_structurePropertyListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_structurePropertyListAST (const GALGAS_lstring & in_mPropertyName,
                                                        const GALGAS_bool & in_mIsConstant,
                                                        const GALGAS_bool & in_mIsPublic,
                                                        const GALGAS_lstring & in_mPropertyTypeName,
                                                        const GALGAS_structurePropertyInitOptionalExpressionAST & in_mInitialisation
                                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_structurePropertyListAST::cCollectionElement_structurePropertyListAST (const GALGAS_lstring & in_mPropertyName,
                                                                                          const GALGAS_bool & in_mIsConstant,
                                                                                          const GALGAS_bool & in_mIsPublic,
                                                                                          const GALGAS_lstring & in_mPropertyTypeName,
                                                                                          const GALGAS_structurePropertyInitOptionalExpressionAST & in_mInitialisation
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mIsConstant, in_mIsPublic, in_mPropertyTypeName, in_mInitialisation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_structurePropertyListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_structurePropertyListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_structurePropertyListAST (mObject.mProperty_mPropertyName, mObject.mProperty_mIsConstant, mObject.mProperty_mIsPublic, mObject.mProperty_mPropertyTypeName, mObject.mProperty_mInitialisation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_structurePropertyListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyName" ":" ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsConstant" ":" ;
  mObject.mProperty_mIsConstant.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsPublic" ":" ;
  mObject.mProperty_mIsPublic.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyTypeName" ":" ;
  mObject.mProperty_mPropertyTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitialisation" ":" ;
  mObject.mProperty_mInitialisation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_structurePropertyListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_structurePropertyListAST * operand = (cCollectionElement_structurePropertyListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_structurePropertyListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST::GALGAS_structurePropertyListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST::GALGAS_structurePropertyListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_structurePropertyListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_bool & inOperand1,
                                                                                            const GALGAS_bool & inOperand2,
                                                                                            const GALGAS_lstring & inOperand3,
                                                                                            const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand4
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_structurePropertyListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_structurePropertyListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_structurePropertyListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_lstring & in_mPropertyName,
                                                                 const GALGAS_bool & in_mIsConstant,
                                                                 const GALGAS_bool & in_mIsPublic,
                                                                 const GALGAS_lstring & in_mPropertyTypeName,
                                                                 const GALGAS_structurePropertyInitOptionalExpressionAST & in_mInitialisation
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_structurePropertyListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_structurePropertyListAST (in_mPropertyName,
                                                              in_mIsConstant,
                                                              in_mIsPublic,
                                                              in_mPropertyTypeName,
                                                              in_mInitialisation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                           const GALGAS_bool & inOperand1,
                                                           const GALGAS_bool & inOperand2,
                                                           const GALGAS_lstring & inOperand3,
                                                           const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand4
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_structurePropertyListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_bool inOperand1,
                                                            const GALGAS_bool inOperand2,
                                                            const GALGAS_lstring inOperand3,
                                                            const GALGAS_structurePropertyInitOptionalExpressionAST inOperand4,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_structurePropertyListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_bool & outOperand1,
                                                            GALGAS_bool & outOperand2,
                                                            GALGAS_lstring & outOperand3,
                                                            GALGAS_structurePropertyInitOptionalExpressionAST & outOperand4,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
      outOperand0 = p->mObject.mProperty_mPropertyName ;
      outOperand1 = p->mObject.mProperty_mIsConstant ;
      outOperand2 = p->mObject.mProperty_mIsPublic ;
      outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
      outOperand4 = p->mObject.mProperty_mInitialisation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                       GALGAS_bool & outOperand1,
                                                       GALGAS_bool & outOperand2,
                                                       GALGAS_lstring & outOperand3,
                                                       GALGAS_structurePropertyInitOptionalExpressionAST & outOperand4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mIsConstant ;
    outOperand2 = p->mObject.mProperty_mIsPublic ;
    outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand4 = p->mObject.mProperty_mInitialisation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                      GALGAS_bool & outOperand1,
                                                      GALGAS_bool & outOperand2,
                                                      GALGAS_lstring & outOperand3,
                                                      GALGAS_structurePropertyInitOptionalExpressionAST & outOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mIsConstant ;
    outOperand2 = p->mObject.mProperty_mIsPublic ;
    outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand4 = p->mObject.mProperty_mInitialisation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::method_first (GALGAS_lstring & outOperand0,
                                                    GALGAS_bool & outOperand1,
                                                    GALGAS_bool & outOperand2,
                                                    GALGAS_lstring & outOperand3,
                                                    GALGAS_structurePropertyInitOptionalExpressionAST & outOperand4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mIsConstant ;
    outOperand2 = p->mObject.mProperty_mIsPublic ;
    outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand4 = p->mObject.mProperty_mInitialisation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::method_last (GALGAS_lstring & outOperand0,
                                                   GALGAS_bool & outOperand1,
                                                   GALGAS_bool & outOperand2,
                                                   GALGAS_lstring & outOperand3,
                                                   GALGAS_structurePropertyInitOptionalExpressionAST & outOperand4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mIsConstant ;
    outOperand2 = p->mObject.mProperty_mIsPublic ;
    outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand4 = p->mObject.mProperty_mInitialisation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::add_operation (const GALGAS_structurePropertyListAST & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_structurePropertyListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_structurePropertyListAST result = GALGAS_structurePropertyListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_structurePropertyListAST result = GALGAS_structurePropertyListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_structurePropertyListAST result = GALGAS_structurePropertyListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::plusAssign_operation (const GALGAS_structurePropertyListAST inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structurePropertyListAST::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_structurePropertyListAST::getter_mIsConstantAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    result = p->mObject.mProperty_mIsConstant ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_structurePropertyListAST::getter_mIsPublicAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    result = p->mObject.mProperty_mIsPublic ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structurePropertyListAST::getter_mPropertyTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    result = p->mObject.mProperty_mPropertyTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyInitOptionalExpressionAST GALGAS_structurePropertyListAST::getter_mInitialisationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  GALGAS_structurePropertyInitOptionalExpressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    result = p->mObject.mProperty_mInitialisation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_structurePropertyListAST::cEnumerator_structurePropertyListAST (const GALGAS_structurePropertyListAST & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST_2D_element cEnumerator_structurePropertyListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_structurePropertyListAST::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_structurePropertyListAST::current_mIsConstant (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mIsConstant ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_structurePropertyListAST::current_mIsPublic (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mIsPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_structurePropertyListAST::current_mPropertyTypeName (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mPropertyTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyInitOptionalExpressionAST cEnumerator_structurePropertyListAST::current_mInitialisation (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mInitialisation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @structurePropertyListAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structurePropertyListAST ("structurePropertyListAST",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structurePropertyListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structurePropertyListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structurePropertyListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structurePropertyListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_structurePropertyListAST result ;
  const GALGAS_structurePropertyListAST * p = (const GALGAS_structurePropertyListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structurePropertyListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structurePropertyListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@functionDeclarationListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_functionDeclarationListAST : public cCollectionElement {
  public : GALGAS_functionDeclarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_functionDeclarationListAST (const GALGAS_mode & in_mMode,
                                                          const GALGAS_bool & in_mPublicFunction,
                                                          const GALGAS_lstring & in_mFunctionName,
                                                          const GALGAS_lstringlist & in_mFunctionAttributeList,
                                                          const GALGAS_routineFormalArgumentListAST & in_mFunctionFormalArgumentList,
                                                          const GALGAS_lstring & in_mFunctionReturnTypeName,
                                                          const GALGAS_instructionListAST & in_mFunctionInstructionList,
                                                          const GALGAS_location & in_mEndOfFunctionDeclaration
                                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_functionDeclarationListAST::cCollectionElement_functionDeclarationListAST (const GALGAS_mode & in_mMode,
                                                                                              const GALGAS_bool & in_mPublicFunction,
                                                                                              const GALGAS_lstring & in_mFunctionName,
                                                                                              const GALGAS_lstringlist & in_mFunctionAttributeList,
                                                                                              const GALGAS_routineFormalArgumentListAST & in_mFunctionFormalArgumentList,
                                                                                              const GALGAS_lstring & in_mFunctionReturnTypeName,
                                                                                              const GALGAS_instructionListAST & in_mFunctionInstructionList,
                                                                                              const GALGAS_location & in_mEndOfFunctionDeclaration
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMode, in_mPublicFunction, in_mFunctionName, in_mFunctionAttributeList, in_mFunctionFormalArgumentList, in_mFunctionReturnTypeName, in_mFunctionInstructionList, in_mEndOfFunctionDeclaration) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_functionDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_functionDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_functionDeclarationListAST (mObject.mProperty_mMode, mObject.mProperty_mPublicFunction, mObject.mProperty_mFunctionName, mObject.mProperty_mFunctionAttributeList, mObject.mProperty_mFunctionFormalArgumentList, mObject.mProperty_mFunctionReturnTypeName, mObject.mProperty_mFunctionInstructionList, mObject.mProperty_mEndOfFunctionDeclaration COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_functionDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMode" ":" ;
  mObject.mProperty_mMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPublicFunction" ":" ;
  mObject.mProperty_mPublicFunction.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFunctionName" ":" ;
  mObject.mProperty_mFunctionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFunctionAttributeList" ":" ;
  mObject.mProperty_mFunctionAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFunctionFormalArgumentList" ":" ;
  mObject.mProperty_mFunctionFormalArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFunctionReturnTypeName" ":" ;
  mObject.mProperty_mFunctionReturnTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFunctionInstructionList" ":" ;
  mObject.mProperty_mFunctionInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfFunctionDeclaration" ":" ;
  mObject.mProperty_mEndOfFunctionDeclaration.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_functionDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_functionDeclarationListAST * operand = (cCollectionElement_functionDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_functionDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST::GALGAS_functionDeclarationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST::GALGAS_functionDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_functionDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionDeclarationListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_functionDeclarationListAST::constructor_listWithValue (const GALGAS_mode & inOperand0,
                                                                                                const GALGAS_bool & inOperand1,
                                                                                                const GALGAS_lstring & inOperand2,
                                                                                                const GALGAS_lstringlist & inOperand3,
                                                                                                const GALGAS_routineFormalArgumentListAST & inOperand4,
                                                                                                const GALGAS_lstring & inOperand5,
                                                                                                const GALGAS_instructionListAST & inOperand6,
                                                                                                const GALGAS_location & inOperand7
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_functionDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_functionDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_functionDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_mode & in_mMode,
                                                                   const GALGAS_bool & in_mPublicFunction,
                                                                   const GALGAS_lstring & in_mFunctionName,
                                                                   const GALGAS_lstringlist & in_mFunctionAttributeList,
                                                                   const GALGAS_routineFormalArgumentListAST & in_mFunctionFormalArgumentList,
                                                                   const GALGAS_lstring & in_mFunctionReturnTypeName,
                                                                   const GALGAS_instructionListAST & in_mFunctionInstructionList,
                                                                   const GALGAS_location & in_mEndOfFunctionDeclaration
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_functionDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_functionDeclarationListAST (in_mMode,
                                                                in_mPublicFunction,
                                                                in_mFunctionName,
                                                                in_mFunctionAttributeList,
                                                                in_mFunctionFormalArgumentList,
                                                                in_mFunctionReturnTypeName,
                                                                in_mFunctionInstructionList,
                                                                in_mEndOfFunctionDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionDeclarationListAST::addAssign_operation (const GALGAS_mode & inOperand0,
                                                             const GALGAS_bool & inOperand1,
                                                             const GALGAS_lstring & inOperand2,
                                                             const GALGAS_lstringlist & inOperand3,
                                                             const GALGAS_routineFormalArgumentListAST & inOperand4,
                                                             const GALGAS_lstring & inOperand5,
                                                             const GALGAS_instructionListAST & inOperand6,
                                                             const GALGAS_location & inOperand7
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_functionDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionDeclarationListAST::setter_insertAtIndex (const GALGAS_mode inOperand0,
                                                              const GALGAS_bool inOperand1,
                                                              const GALGAS_lstring inOperand2,
                                                              const GALGAS_lstringlist inOperand3,
                                                              const GALGAS_routineFormalArgumentListAST inOperand4,
                                                              const GALGAS_lstring inOperand5,
                                                              const GALGAS_instructionListAST inOperand6,
                                                              const GALGAS_location inOperand7,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_functionDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionDeclarationListAST::setter_removeAtIndex (GALGAS_mode & outOperand0,
                                                              GALGAS_bool & outOperand1,
                                                              GALGAS_lstring & outOperand2,
                                                              GALGAS_lstringlist & outOperand3,
                                                              GALGAS_routineFormalArgumentListAST & outOperand4,
                                                              GALGAS_lstring & outOperand5,
                                                              GALGAS_instructionListAST & outOperand6,
                                                              GALGAS_location & outOperand7,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_functionDeclarationListAST * p = (cCollectionElement_functionDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      outOperand7.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mMode ;
      outOperand1 = p->mObject.mProperty_mPublicFunction ;
      outOperand2 = p->mObject.mProperty_mFunctionName ;
      outOperand3 = p->mObject.mProperty_mFunctionAttributeList ;
      outOperand4 = p->mObject.mProperty_mFunctionFormalArgumentList ;
      outOperand5 = p->mObject.mProperty_mFunctionReturnTypeName ;
      outOperand6 = p->mObject.mProperty_mFunctionInstructionList ;
      outOperand7 = p->mObject.mProperty_mEndOfFunctionDeclaration ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionDeclarationListAST::setter_popFirst (GALGAS_mode & outOperand0,
                                                         GALGAS_bool & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_lstringlist & outOperand3,
                                                         GALGAS_routineFormalArgumentListAST & outOperand4,
                                                         GALGAS_lstring & outOperand5,
                                                         GALGAS_instructionListAST & outOperand6,
                                                         GALGAS_location & outOperand7,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionDeclarationListAST * p = (cCollectionElement_functionDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mMode ;
    outOperand1 = p->mObject.mProperty_mPublicFunction ;
    outOperand2 = p->mObject.mProperty_mFunctionName ;
    outOperand3 = p->mObject.mProperty_mFunctionAttributeList ;
    outOperand4 = p->mObject.mProperty_mFunctionFormalArgumentList ;
    outOperand5 = p->mObject.mProperty_mFunctionReturnTypeName ;
    outOperand6 = p->mObject.mProperty_mFunctionInstructionList ;
    outOperand7 = p->mObject.mProperty_mEndOfFunctionDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionDeclarationListAST::setter_popLast (GALGAS_mode & outOperand0,
                                                        GALGAS_bool & outOperand1,
                                                        GALGAS_lstring & outOperand2,
                                                        GALGAS_lstringlist & outOperand3,
                                                        GALGAS_routineFormalArgumentListAST & outOperand4,
                                                        GALGAS_lstring & outOperand5,
                                                        GALGAS_instructionListAST & outOperand6,
                                                        GALGAS_location & outOperand7,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionDeclarationListAST * p = (cCollectionElement_functionDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mMode ;
    outOperand1 = p->mObject.mProperty_mPublicFunction ;
    outOperand2 = p->mObject.mProperty_mFunctionName ;
    outOperand3 = p->mObject.mProperty_mFunctionAttributeList ;
    outOperand4 = p->mObject.mProperty_mFunctionFormalArgumentList ;
    outOperand5 = p->mObject.mProperty_mFunctionReturnTypeName ;
    outOperand6 = p->mObject.mProperty_mFunctionInstructionList ;
    outOperand7 = p->mObject.mProperty_mEndOfFunctionDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionDeclarationListAST::method_first (GALGAS_mode & outOperand0,
                                                      GALGAS_bool & outOperand1,
                                                      GALGAS_lstring & outOperand2,
                                                      GALGAS_lstringlist & outOperand3,
                                                      GALGAS_routineFormalArgumentListAST & outOperand4,
                                                      GALGAS_lstring & outOperand5,
                                                      GALGAS_instructionListAST & outOperand6,
                                                      GALGAS_location & outOperand7,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionDeclarationListAST * p = (cCollectionElement_functionDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mMode ;
    outOperand1 = p->mObject.mProperty_mPublicFunction ;
    outOperand2 = p->mObject.mProperty_mFunctionName ;
    outOperand3 = p->mObject.mProperty_mFunctionAttributeList ;
    outOperand4 = p->mObject.mProperty_mFunctionFormalArgumentList ;
    outOperand5 = p->mObject.mProperty_mFunctionReturnTypeName ;
    outOperand6 = p->mObject.mProperty_mFunctionInstructionList ;
    outOperand7 = p->mObject.mProperty_mEndOfFunctionDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionDeclarationListAST::method_last (GALGAS_mode & outOperand0,
                                                     GALGAS_bool & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     GALGAS_lstringlist & outOperand3,
                                                     GALGAS_routineFormalArgumentListAST & outOperand4,
                                                     GALGAS_lstring & outOperand5,
                                                     GALGAS_instructionListAST & outOperand6,
                                                     GALGAS_location & outOperand7,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionDeclarationListAST * p = (cCollectionElement_functionDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mMode ;
    outOperand1 = p->mObject.mProperty_mPublicFunction ;
    outOperand2 = p->mObject.mProperty_mFunctionName ;
    outOperand3 = p->mObject.mProperty_mFunctionAttributeList ;
    outOperand4 = p->mObject.mProperty_mFunctionFormalArgumentList ;
    outOperand5 = p->mObject.mProperty_mFunctionReturnTypeName ;
    outOperand6 = p->mObject.mProperty_mFunctionInstructionList ;
    outOperand7 = p->mObject.mProperty_mEndOfFunctionDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_functionDeclarationListAST::add_operation (const GALGAS_functionDeclarationListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_functionDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_functionDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_functionDeclarationListAST result = GALGAS_functionDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_functionDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_functionDeclarationListAST result = GALGAS_functionDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_functionDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_functionDeclarationListAST result = GALGAS_functionDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionDeclarationListAST::plusAssign_operation (const GALGAS_functionDeclarationListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_functionDeclarationListAST::getter_mModeAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionDeclarationListAST * p = (cCollectionElement_functionDeclarationListAST *) attributes.ptr () ;
  GALGAS_mode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
    result = p->mObject.mProperty_mMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_functionDeclarationListAST::getter_mPublicFunctionAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionDeclarationListAST * p = (cCollectionElement_functionDeclarationListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
    result = p->mObject.mProperty_mPublicFunction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionDeclarationListAST::getter_mFunctionNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionDeclarationListAST * p = (cCollectionElement_functionDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
    result = p->mObject.mProperty_mFunctionName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_functionDeclarationListAST::getter_mFunctionAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionDeclarationListAST * p = (cCollectionElement_functionDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
    result = p->mObject.mProperty_mFunctionAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListAST GALGAS_functionDeclarationListAST::getter_mFunctionFormalArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionDeclarationListAST * p = (cCollectionElement_functionDeclarationListAST *) attributes.ptr () ;
  GALGAS_routineFormalArgumentListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
    result = p->mObject.mProperty_mFunctionFormalArgumentList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionDeclarationListAST::getter_mFunctionReturnTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionDeclarationListAST * p = (cCollectionElement_functionDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
    result = p->mObject.mProperty_mFunctionReturnTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_functionDeclarationListAST::getter_mFunctionInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionDeclarationListAST * p = (cCollectionElement_functionDeclarationListAST *) attributes.ptr () ;
  GALGAS_instructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
    result = p->mObject.mProperty_mFunctionInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_functionDeclarationListAST::getter_mEndOfFunctionDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionDeclarationListAST * p = (cCollectionElement_functionDeclarationListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
    result = p->mObject.mProperty_mEndOfFunctionDeclaration ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_functionDeclarationListAST::cEnumerator_functionDeclarationListAST (const GALGAS_functionDeclarationListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element cEnumerator_functionDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_functionDeclarationListAST * p = (const cCollectionElement_functionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode cEnumerator_functionDeclarationListAST::current_mMode (LOCATION_ARGS) const {
  const cCollectionElement_functionDeclarationListAST * p = (const cCollectionElement_functionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
  return p->mObject.mProperty_mMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_functionDeclarationListAST::current_mPublicFunction (LOCATION_ARGS) const {
  const cCollectionElement_functionDeclarationListAST * p = (const cCollectionElement_functionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
  return p->mObject.mProperty_mPublicFunction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_functionDeclarationListAST::current_mFunctionName (LOCATION_ARGS) const {
  const cCollectionElement_functionDeclarationListAST * p = (const cCollectionElement_functionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
  return p->mObject.mProperty_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_functionDeclarationListAST::current_mFunctionAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_functionDeclarationListAST * p = (const cCollectionElement_functionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
  return p->mObject.mProperty_mFunctionAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListAST cEnumerator_functionDeclarationListAST::current_mFunctionFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_functionDeclarationListAST * p = (const cCollectionElement_functionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
  return p->mObject.mProperty_mFunctionFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_functionDeclarationListAST::current_mFunctionReturnTypeName (LOCATION_ARGS) const {
  const cCollectionElement_functionDeclarationListAST * p = (const cCollectionElement_functionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
  return p->mObject.mProperty_mFunctionReturnTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cEnumerator_functionDeclarationListAST::current_mFunctionInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_functionDeclarationListAST * p = (const cCollectionElement_functionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
  return p->mObject.mProperty_mFunctionInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_functionDeclarationListAST::current_mEndOfFunctionDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_functionDeclarationListAST * p = (const cCollectionElement_functionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
  return p->mObject.mProperty_mEndOfFunctionDeclaration ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @functionDeclarationListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionDeclarationListAST ("functionDeclarationListAST",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionDeclarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_functionDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_functionDeclarationListAST result ;
  const GALGAS_functionDeclarationListAST * p = (const GALGAS_functionDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Class for element of '@systemRoutineDeclarationListAST' list                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_systemRoutineDeclarationListAST : public cCollectionElement {
  public : GALGAS_systemRoutineDeclarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_systemRoutineDeclarationListAST (const GALGAS_lstring & in_mName,
                                                               const GALGAS_routineKind & in_mRoutineKind,
                                                               const GALGAS_bool & in_mPublic,
                                                               const GALGAS_lstringlist & in_mAttributeList,
                                                               const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                               const GALGAS_lstring & in_mReturnTypeName,
                                                               const GALGAS_instructionListAST & in_mInstructionList,
                                                               const GALGAS_location & in_mEndOfInstructionListLocation
                                                               COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_systemRoutineDeclarationListAST::cCollectionElement_systemRoutineDeclarationListAST (const GALGAS_lstring & in_mName,
                                                                                                        const GALGAS_routineKind & in_mRoutineKind,
                                                                                                        const GALGAS_bool & in_mPublic,
                                                                                                        const GALGAS_lstringlist & in_mAttributeList,
                                                                                                        const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                                                        const GALGAS_lstring & in_mReturnTypeName,
                                                                                                        const GALGAS_instructionListAST & in_mInstructionList,
                                                                                                        const GALGAS_location & in_mEndOfInstructionListLocation
                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mRoutineKind, in_mPublic, in_mAttributeList, in_mFormalArgumentList, in_mReturnTypeName, in_mInstructionList, in_mEndOfInstructionListLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_systemRoutineDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_systemRoutineDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_systemRoutineDeclarationListAST (mObject.mProperty_mName, mObject.mProperty_mRoutineKind, mObject.mProperty_mPublic, mObject.mProperty_mAttributeList, mObject.mProperty_mFormalArgumentList, mObject.mProperty_mReturnTypeName, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfInstructionListLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_systemRoutineDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineKind" ":" ;
  mObject.mProperty_mRoutineKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPublic" ":" ;
  mObject.mProperty_mPublic.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeList" ":" ;
  mObject.mProperty_mAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentList" ":" ;
  mObject.mProperty_mFormalArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnTypeName" ":" ;
  mObject.mProperty_mReturnTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfInstructionListLocation" ":" ;
  mObject.mProperty_mEndOfInstructionListLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_systemRoutineDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_systemRoutineDeclarationListAST * operand = (cCollectionElement_systemRoutineDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_systemRoutineDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST::GALGAS_systemRoutineDeclarationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST::GALGAS_systemRoutineDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_systemRoutineDeclarationListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST GALGAS_systemRoutineDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_routineKind & inOperand1,
                                                                                                          const GALGAS_bool & inOperand2,
                                                                                                          const GALGAS_lstringlist & inOperand3,
                                                                                                          const GALGAS_routineFormalArgumentListAST & inOperand4,
                                                                                                          const GALGAS_lstring & inOperand5,
                                                                                                          const GALGAS_instructionListAST & inOperand6,
                                                                                                          const GALGAS_location & inOperand7
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_systemRoutineDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_systemRoutineDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_systemRoutineDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_systemRoutineDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                        const GALGAS_lstring & in_mName,
                                                                        const GALGAS_routineKind & in_mRoutineKind,
                                                                        const GALGAS_bool & in_mPublic,
                                                                        const GALGAS_lstringlist & in_mAttributeList,
                                                                        const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                        const GALGAS_lstring & in_mReturnTypeName,
                                                                        const GALGAS_instructionListAST & in_mInstructionList,
                                                                        const GALGAS_location & in_mEndOfInstructionListLocation
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_systemRoutineDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_systemRoutineDeclarationListAST (in_mName,
                                                                     in_mRoutineKind,
                                                                     in_mPublic,
                                                                     in_mAttributeList,
                                                                     in_mFormalArgumentList,
                                                                     in_mReturnTypeName,
                                                                     in_mInstructionList,
                                                                     in_mEndOfInstructionListLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_systemRoutineDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_routineKind & inOperand1,
                                                                  const GALGAS_bool & inOperand2,
                                                                  const GALGAS_lstringlist & inOperand3,
                                                                  const GALGAS_routineFormalArgumentListAST & inOperand4,
                                                                  const GALGAS_lstring & inOperand5,
                                                                  const GALGAS_instructionListAST & inOperand6,
                                                                  const GALGAS_location & inOperand7
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_systemRoutineDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_systemRoutineDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                   const GALGAS_routineKind inOperand1,
                                                                   const GALGAS_bool inOperand2,
                                                                   const GALGAS_lstringlist inOperand3,
                                                                   const GALGAS_routineFormalArgumentListAST inOperand4,
                                                                   const GALGAS_lstring inOperand5,
                                                                   const GALGAS_instructionListAST inOperand6,
                                                                   const GALGAS_location inOperand7,
                                                                   const GALGAS_uint inInsertionIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_systemRoutineDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_systemRoutineDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                   GALGAS_routineKind & outOperand1,
                                                                   GALGAS_bool & outOperand2,
                                                                   GALGAS_lstringlist & outOperand3,
                                                                   GALGAS_routineFormalArgumentListAST & outOperand4,
                                                                   GALGAS_lstring & outOperand5,
                                                                   GALGAS_instructionListAST & outOperand6,
                                                                   GALGAS_location & outOperand7,
                                                                   const GALGAS_uint inRemoveIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_systemRoutineDeclarationListAST * p = (cCollectionElement_systemRoutineDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      outOperand7.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mName ;
      outOperand1 = p->mObject.mProperty_mRoutineKind ;
      outOperand2 = p->mObject.mProperty_mPublic ;
      outOperand3 = p->mObject.mProperty_mAttributeList ;
      outOperand4 = p->mObject.mProperty_mFormalArgumentList ;
      outOperand5 = p->mObject.mProperty_mReturnTypeName ;
      outOperand6 = p->mObject.mProperty_mInstructionList ;
      outOperand7 = p->mObject.mProperty_mEndOfInstructionListLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_systemRoutineDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                              GALGAS_routineKind & outOperand1,
                                                              GALGAS_bool & outOperand2,
                                                              GALGAS_lstringlist & outOperand3,
                                                              GALGAS_routineFormalArgumentListAST & outOperand4,
                                                              GALGAS_lstring & outOperand5,
                                                              GALGAS_instructionListAST & outOperand6,
                                                              GALGAS_location & outOperand7,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_systemRoutineDeclarationListAST * p = (cCollectionElement_systemRoutineDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mRoutineKind ;
    outOperand2 = p->mObject.mProperty_mPublic ;
    outOperand3 = p->mObject.mProperty_mAttributeList ;
    outOperand4 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand5 = p->mObject.mProperty_mReturnTypeName ;
    outOperand6 = p->mObject.mProperty_mInstructionList ;
    outOperand7 = p->mObject.mProperty_mEndOfInstructionListLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_systemRoutineDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                             GALGAS_routineKind & outOperand1,
                                                             GALGAS_bool & outOperand2,
                                                             GALGAS_lstringlist & outOperand3,
                                                             GALGAS_routineFormalArgumentListAST & outOperand4,
                                                             GALGAS_lstring & outOperand5,
                                                             GALGAS_instructionListAST & outOperand6,
                                                             GALGAS_location & outOperand7,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_systemRoutineDeclarationListAST * p = (cCollectionElement_systemRoutineDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mRoutineKind ;
    outOperand2 = p->mObject.mProperty_mPublic ;
    outOperand3 = p->mObject.mProperty_mAttributeList ;
    outOperand4 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand5 = p->mObject.mProperty_mReturnTypeName ;
    outOperand6 = p->mObject.mProperty_mInstructionList ;
    outOperand7 = p->mObject.mProperty_mEndOfInstructionListLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_systemRoutineDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                           GALGAS_routineKind & outOperand1,
                                                           GALGAS_bool & outOperand2,
                                                           GALGAS_lstringlist & outOperand3,
                                                           GALGAS_routineFormalArgumentListAST & outOperand4,
                                                           GALGAS_lstring & outOperand5,
                                                           GALGAS_instructionListAST & outOperand6,
                                                           GALGAS_location & outOperand7,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_systemRoutineDeclarationListAST * p = (cCollectionElement_systemRoutineDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mRoutineKind ;
    outOperand2 = p->mObject.mProperty_mPublic ;
    outOperand3 = p->mObject.mProperty_mAttributeList ;
    outOperand4 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand5 = p->mObject.mProperty_mReturnTypeName ;
    outOperand6 = p->mObject.mProperty_mInstructionList ;
    outOperand7 = p->mObject.mProperty_mEndOfInstructionListLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_systemRoutineDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                          GALGAS_routineKind & outOperand1,
                                                          GALGAS_bool & outOperand2,
                                                          GALGAS_lstringlist & outOperand3,
                                                          GALGAS_routineFormalArgumentListAST & outOperand4,
                                                          GALGAS_lstring & outOperand5,
                                                          GALGAS_instructionListAST & outOperand6,
                                                          GALGAS_location & outOperand7,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_systemRoutineDeclarationListAST * p = (cCollectionElement_systemRoutineDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mRoutineKind ;
    outOperand2 = p->mObject.mProperty_mPublic ;
    outOperand3 = p->mObject.mProperty_mAttributeList ;
    outOperand4 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand5 = p->mObject.mProperty_mReturnTypeName ;
    outOperand6 = p->mObject.mProperty_mInstructionList ;
    outOperand7 = p->mObject.mProperty_mEndOfInstructionListLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST GALGAS_systemRoutineDeclarationListAST::add_operation (const GALGAS_systemRoutineDeclarationListAST & inOperand,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_systemRoutineDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST GALGAS_systemRoutineDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_systemRoutineDeclarationListAST result = GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST GALGAS_systemRoutineDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_systemRoutineDeclarationListAST result = GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST GALGAS_systemRoutineDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_systemRoutineDeclarationListAST result = GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_systemRoutineDeclarationListAST::plusAssign_operation (const GALGAS_systemRoutineDeclarationListAST inOperand,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_systemRoutineDeclarationListAST::getter_mNameAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_systemRoutineDeclarationListAST * p = (cCollectionElement_systemRoutineDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_systemRoutineDeclarationListAST::getter_mRoutineKindAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_systemRoutineDeclarationListAST * p = (cCollectionElement_systemRoutineDeclarationListAST *) attributes.ptr () ;
  GALGAS_routineKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
    result = p->mObject.mProperty_mRoutineKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_systemRoutineDeclarationListAST::getter_mPublicAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_systemRoutineDeclarationListAST * p = (cCollectionElement_systemRoutineDeclarationListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
    result = p->mObject.mProperty_mPublic ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_systemRoutineDeclarationListAST::getter_mAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_systemRoutineDeclarationListAST * p = (cCollectionElement_systemRoutineDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
    result = p->mObject.mProperty_mAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListAST GALGAS_systemRoutineDeclarationListAST::getter_mFormalArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_systemRoutineDeclarationListAST * p = (cCollectionElement_systemRoutineDeclarationListAST *) attributes.ptr () ;
  GALGAS_routineFormalArgumentListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
    result = p->mObject.mProperty_mFormalArgumentList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_systemRoutineDeclarationListAST::getter_mReturnTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_systemRoutineDeclarationListAST * p = (cCollectionElement_systemRoutineDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
    result = p->mObject.mProperty_mReturnTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_systemRoutineDeclarationListAST::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_systemRoutineDeclarationListAST * p = (cCollectionElement_systemRoutineDeclarationListAST *) attributes.ptr () ;
  GALGAS_instructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_systemRoutineDeclarationListAST::getter_mEndOfInstructionListLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_systemRoutineDeclarationListAST * p = (cCollectionElement_systemRoutineDeclarationListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
    result = p->mObject.mProperty_mEndOfInstructionListLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_systemRoutineDeclarationListAST::cEnumerator_systemRoutineDeclarationListAST (const GALGAS_systemRoutineDeclarationListAST & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST_2D_element cEnumerator_systemRoutineDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_systemRoutineDeclarationListAST * p = (const cCollectionElement_systemRoutineDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_systemRoutineDeclarationListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_systemRoutineDeclarationListAST * p = (const cCollectionElement_systemRoutineDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
  return p->mObject.mProperty_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind cEnumerator_systemRoutineDeclarationListAST::current_mRoutineKind (LOCATION_ARGS) const {
  const cCollectionElement_systemRoutineDeclarationListAST * p = (const cCollectionElement_systemRoutineDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
  return p->mObject.mProperty_mRoutineKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_systemRoutineDeclarationListAST::current_mPublic (LOCATION_ARGS) const {
  const cCollectionElement_systemRoutineDeclarationListAST * p = (const cCollectionElement_systemRoutineDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
  return p->mObject.mProperty_mPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_systemRoutineDeclarationListAST::current_mAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_systemRoutineDeclarationListAST * p = (const cCollectionElement_systemRoutineDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
  return p->mObject.mProperty_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListAST cEnumerator_systemRoutineDeclarationListAST::current_mFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_systemRoutineDeclarationListAST * p = (const cCollectionElement_systemRoutineDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
  return p->mObject.mProperty_mFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_systemRoutineDeclarationListAST::current_mReturnTypeName (LOCATION_ARGS) const {
  const cCollectionElement_systemRoutineDeclarationListAST * p = (const cCollectionElement_systemRoutineDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
  return p->mObject.mProperty_mReturnTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cEnumerator_systemRoutineDeclarationListAST::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_systemRoutineDeclarationListAST * p = (const cCollectionElement_systemRoutineDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
  return p->mObject.mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_systemRoutineDeclarationListAST::current_mEndOfInstructionListLocation (LOCATION_ARGS) const {
  const cCollectionElement_systemRoutineDeclarationListAST * p = (const cCollectionElement_systemRoutineDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
  return p->mObject.mProperty_mEndOfInstructionListLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @systemRoutineDeclarationListAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_systemRoutineDeclarationListAST ("systemRoutineDeclarationListAST",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_systemRoutineDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_systemRoutineDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_systemRoutineDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_systemRoutineDeclarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST GALGAS_systemRoutineDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_systemRoutineDeclarationListAST result ;
  const GALGAS_systemRoutineDeclarationListAST * p = (const GALGAS_systemRoutineDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_systemRoutineDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("systemRoutineDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@guardDeclarationListAST' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_guardDeclarationListAST : public cCollectionElement {
  public : GALGAS_guardDeclarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_guardDeclarationListAST (const GALGAS_lstring & in_mGuardName,
                                                       const GALGAS_bool & in_mIsPublic,
                                                       const GALGAS_lstringlist & in_mGuardAttributeList,
                                                       const GALGAS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                                       const GALGAS_guardKind & in_mGuardKind,
                                                       const GALGAS_instructionListAST & in_mGuardInstructionList,
                                                       const GALGAS_location & in_mEndOfGuardDeclaration
                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_guardDeclarationListAST::cCollectionElement_guardDeclarationListAST (const GALGAS_lstring & in_mGuardName,
                                                                                        const GALGAS_bool & in_mIsPublic,
                                                                                        const GALGAS_lstringlist & in_mGuardAttributeList,
                                                                                        const GALGAS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                                                                        const GALGAS_guardKind & in_mGuardKind,
                                                                                        const GALGAS_instructionListAST & in_mGuardInstructionList,
                                                                                        const GALGAS_location & in_mEndOfGuardDeclaration
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGuardName, in_mIsPublic, in_mGuardAttributeList, in_mGuardFormalArgumentList, in_mGuardKind, in_mGuardInstructionList, in_mEndOfGuardDeclaration) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_guardDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_guardDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_guardDeclarationListAST (mObject.mProperty_mGuardName, mObject.mProperty_mIsPublic, mObject.mProperty_mGuardAttributeList, mObject.mProperty_mGuardFormalArgumentList, mObject.mProperty_mGuardKind, mObject.mProperty_mGuardInstructionList, mObject.mProperty_mEndOfGuardDeclaration COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_guardDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuardName" ":" ;
  mObject.mProperty_mGuardName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsPublic" ":" ;
  mObject.mProperty_mIsPublic.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuardAttributeList" ":" ;
  mObject.mProperty_mGuardAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuardFormalArgumentList" ":" ;
  mObject.mProperty_mGuardFormalArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuardKind" ":" ;
  mObject.mProperty_mGuardKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuardInstructionList" ":" ;
  mObject.mProperty_mGuardInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfGuardDeclaration" ":" ;
  mObject.mProperty_mEndOfGuardDeclaration.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_guardDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_guardDeclarationListAST * operand = (cCollectionElement_guardDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_guardDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST::GALGAS_guardDeclarationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST::GALGAS_guardDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST GALGAS_guardDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_guardDeclarationListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST GALGAS_guardDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_bool & inOperand1,
                                                                                          const GALGAS_lstringlist & inOperand2,
                                                                                          const GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                                          const GALGAS_guardKind & inOperand4,
                                                                                          const GALGAS_instructionListAST & inOperand5,
                                                                                          const GALGAS_location & inOperand6
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_guardDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_guardDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_guardDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mGuardName,
                                                                const GALGAS_bool & in_mIsPublic,
                                                                const GALGAS_lstringlist & in_mGuardAttributeList,
                                                                const GALGAS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                                                const GALGAS_guardKind & in_mGuardKind,
                                                                const GALGAS_instructionListAST & in_mGuardInstructionList,
                                                                const GALGAS_location & in_mEndOfGuardDeclaration
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_guardDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_guardDeclarationListAST (in_mGuardName,
                                                             in_mIsPublic,
                                                             in_mGuardAttributeList,
                                                             in_mGuardFormalArgumentList,
                                                             in_mGuardKind,
                                                             in_mGuardInstructionList,
                                                             in_mEndOfGuardDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_bool & inOperand1,
                                                          const GALGAS_lstringlist & inOperand2,
                                                          const GALGAS_routineFormalArgumentListAST & inOperand3,
                                                          const GALGAS_guardKind & inOperand4,
                                                          const GALGAS_instructionListAST & inOperand5,
                                                          const GALGAS_location & inOperand6
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guardDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_bool inOperand1,
                                                           const GALGAS_lstringlist inOperand2,
                                                           const GALGAS_routineFormalArgumentListAST inOperand3,
                                                           const GALGAS_guardKind inOperand4,
                                                           const GALGAS_instructionListAST inOperand5,
                                                           const GALGAS_location inOperand6,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_guardDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           GALGAS_bool & outOperand1,
                                                           GALGAS_lstringlist & outOperand2,
                                                           GALGAS_routineFormalArgumentListAST & outOperand3,
                                                           GALGAS_guardKind & outOperand4,
                                                           GALGAS_instructionListAST & outOperand5,
                                                           GALGAS_location & outOperand6,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_guardDeclarationListAST * p = (cCollectionElement_guardDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_guardDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mGuardName ;
      outOperand1 = p->mObject.mProperty_mIsPublic ;
      outOperand2 = p->mObject.mProperty_mGuardAttributeList ;
      outOperand3 = p->mObject.mProperty_mGuardFormalArgumentList ;
      outOperand4 = p->mObject.mProperty_mGuardKind ;
      outOperand5 = p->mObject.mProperty_mGuardInstructionList ;
      outOperand6 = p->mObject.mProperty_mEndOfGuardDeclaration ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                      GALGAS_bool & outOperand1,
                                                      GALGAS_lstringlist & outOperand2,
                                                      GALGAS_routineFormalArgumentListAST & outOperand3,
                                                      GALGAS_guardKind & outOperand4,
                                                      GALGAS_instructionListAST & outOperand5,
                                                      GALGAS_location & outOperand6,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guardDeclarationListAST * p = (cCollectionElement_guardDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guardDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mGuardName ;
    outOperand1 = p->mObject.mProperty_mIsPublic ;
    outOperand2 = p->mObject.mProperty_mGuardAttributeList ;
    outOperand3 = p->mObject.mProperty_mGuardFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mGuardKind ;
    outOperand5 = p->mObject.mProperty_mGuardInstructionList ;
    outOperand6 = p->mObject.mProperty_mEndOfGuardDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                     GALGAS_bool & outOperand1,
                                                     GALGAS_lstringlist & outOperand2,
                                                     GALGAS_routineFormalArgumentListAST & outOperand3,
                                                     GALGAS_guardKind & outOperand4,
                                                     GALGAS_instructionListAST & outOperand5,
                                                     GALGAS_location & outOperand6,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guardDeclarationListAST * p = (cCollectionElement_guardDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guardDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mGuardName ;
    outOperand1 = p->mObject.mProperty_mIsPublic ;
    outOperand2 = p->mObject.mProperty_mGuardAttributeList ;
    outOperand3 = p->mObject.mProperty_mGuardFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mGuardKind ;
    outOperand5 = p->mObject.mProperty_mGuardInstructionList ;
    outOperand6 = p->mObject.mProperty_mEndOfGuardDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_bool & outOperand1,
                                                   GALGAS_lstringlist & outOperand2,
                                                   GALGAS_routineFormalArgumentListAST & outOperand3,
                                                   GALGAS_guardKind & outOperand4,
                                                   GALGAS_instructionListAST & outOperand5,
                                                   GALGAS_location & outOperand6,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guardDeclarationListAST * p = (cCollectionElement_guardDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guardDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mGuardName ;
    outOperand1 = p->mObject.mProperty_mIsPublic ;
    outOperand2 = p->mObject.mProperty_mGuardAttributeList ;
    outOperand3 = p->mObject.mProperty_mGuardFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mGuardKind ;
    outOperand5 = p->mObject.mProperty_mGuardInstructionList ;
    outOperand6 = p->mObject.mProperty_mEndOfGuardDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_bool & outOperand1,
                                                  GALGAS_lstringlist & outOperand2,
                                                  GALGAS_routineFormalArgumentListAST & outOperand3,
                                                  GALGAS_guardKind & outOperand4,
                                                  GALGAS_instructionListAST & outOperand5,
                                                  GALGAS_location & outOperand6,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guardDeclarationListAST * p = (cCollectionElement_guardDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guardDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mGuardName ;
    outOperand1 = p->mObject.mProperty_mIsPublic ;
    outOperand2 = p->mObject.mProperty_mGuardAttributeList ;
    outOperand3 = p->mObject.mProperty_mGuardFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mGuardKind ;
    outOperand5 = p->mObject.mProperty_mGuardInstructionList ;
    outOperand6 = p->mObject.mProperty_mEndOfGuardDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST GALGAS_guardDeclarationListAST::add_operation (const GALGAS_guardDeclarationListAST & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_guardDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST GALGAS_guardDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_guardDeclarationListAST result = GALGAS_guardDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST GALGAS_guardDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_guardDeclarationListAST result = GALGAS_guardDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST GALGAS_guardDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_guardDeclarationListAST result = GALGAS_guardDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardDeclarationListAST::plusAssign_operation (const GALGAS_guardDeclarationListAST inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guardDeclarationListAST::getter_mGuardNameAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guardDeclarationListAST * p = (cCollectionElement_guardDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guardDeclarationListAST) ;
    result = p->mObject.mProperty_mGuardName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardDeclarationListAST::getter_mIsPublicAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guardDeclarationListAST * p = (cCollectionElement_guardDeclarationListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guardDeclarationListAST) ;
    result = p->mObject.mProperty_mIsPublic ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_guardDeclarationListAST::getter_mGuardAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guardDeclarationListAST * p = (cCollectionElement_guardDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guardDeclarationListAST) ;
    result = p->mObject.mProperty_mGuardAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListAST GALGAS_guardDeclarationListAST::getter_mGuardFormalArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guardDeclarationListAST * p = (cCollectionElement_guardDeclarationListAST *) attributes.ptr () ;
  GALGAS_routineFormalArgumentListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guardDeclarationListAST) ;
    result = p->mObject.mProperty_mGuardFormalArgumentList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKind GALGAS_guardDeclarationListAST::getter_mGuardKindAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guardDeclarationListAST * p = (cCollectionElement_guardDeclarationListAST *) attributes.ptr () ;
  GALGAS_guardKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guardDeclarationListAST) ;
    result = p->mObject.mProperty_mGuardKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_guardDeclarationListAST::getter_mGuardInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guardDeclarationListAST * p = (cCollectionElement_guardDeclarationListAST *) attributes.ptr () ;
  GALGAS_instructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guardDeclarationListAST) ;
    result = p->mObject.mProperty_mGuardInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_guardDeclarationListAST::getter_mEndOfGuardDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guardDeclarationListAST * p = (cCollectionElement_guardDeclarationListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_guardDeclarationListAST) ;
    result = p->mObject.mProperty_mEndOfGuardDeclaration ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_guardDeclarationListAST::cEnumerator_guardDeclarationListAST (const GALGAS_guardDeclarationListAST & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST_2D_element cEnumerator_guardDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_guardDeclarationListAST * p = (const cCollectionElement_guardDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guardDeclarationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_guardDeclarationListAST::current_mGuardName (LOCATION_ARGS) const {
  const cCollectionElement_guardDeclarationListAST * p = (const cCollectionElement_guardDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guardDeclarationListAST) ;
  return p->mObject.mProperty_mGuardName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_guardDeclarationListAST::current_mIsPublic (LOCATION_ARGS) const {
  const cCollectionElement_guardDeclarationListAST * p = (const cCollectionElement_guardDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guardDeclarationListAST) ;
  return p->mObject.mProperty_mIsPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_guardDeclarationListAST::current_mGuardAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_guardDeclarationListAST * p = (const cCollectionElement_guardDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guardDeclarationListAST) ;
  return p->mObject.mProperty_mGuardAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentListAST cEnumerator_guardDeclarationListAST::current_mGuardFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_guardDeclarationListAST * p = (const cCollectionElement_guardDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guardDeclarationListAST) ;
  return p->mObject.mProperty_mGuardFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKind cEnumerator_guardDeclarationListAST::current_mGuardKind (LOCATION_ARGS) const {
  const cCollectionElement_guardDeclarationListAST * p = (const cCollectionElement_guardDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guardDeclarationListAST) ;
  return p->mObject.mProperty_mGuardKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cEnumerator_guardDeclarationListAST::current_mGuardInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_guardDeclarationListAST * p = (const cCollectionElement_guardDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guardDeclarationListAST) ;
  return p->mObject.mProperty_mGuardInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_guardDeclarationListAST::current_mEndOfGuardDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_guardDeclarationListAST * p = (const cCollectionElement_guardDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guardDeclarationListAST) ;
  return p->mObject.mProperty_mEndOfGuardDeclaration ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @guardDeclarationListAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardDeclarationListAST ("guardDeclarationListAST",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guardDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guardDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardDeclarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST GALGAS_guardDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_guardDeclarationListAST result ;
  const GALGAS_guardDeclarationListAST * p = (const GALGAS_guardDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression::cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression (const GALGAS_expressionAST & inAssociatedValue0
                                                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression::description (C_String & ioString,
                                                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * ptr = dynamic_cast<const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyInitOptionalExpressionAST::GALGAS_structurePropertyInitOptionalExpressionAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyInitOptionalExpressionAST GALGAS_structurePropertyInitOptionalExpressionAST::constructor_expression (const GALGAS_expressionAST & inAssociatedValue0
                                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_structurePropertyInitOptionalExpressionAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_expression ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyInitOptionalExpressionAST GALGAS_structurePropertyInitOptionalExpressionAST::constructor_noExpression (UNUSED_LOCATION_ARGS) {
  GALGAS_structurePropertyInitOptionalExpressionAST result ;
  result.mEnum = kEnum_noExpression ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyInitOptionalExpressionAST::method_expression (GALGAS_expressionAST & outAssociatedValue0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_expression) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @structurePropertyInitOptionalExpressionAST expression invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * ptr = (const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_structurePropertyInitOptionalExpressionAST [3] = {
  "(not built)",
  "expression",
  "noExpression"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_structurePropertyInitOptionalExpressionAST::getter_isExpression (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_expression == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_structurePropertyInitOptionalExpressionAST::getter_isNoExpression (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noExpression == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyInitOptionalExpressionAST::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<enum @structurePropertyInitOptionalExpressionAST: " << gEnumNameArrayFor_structurePropertyInitOptionalExpressionAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_structurePropertyInitOptionalExpressionAST::objectCompare (const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @structurePropertyInitOptionalExpressionAST type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structurePropertyInitOptionalExpressionAST ("structurePropertyInitOptionalExpressionAST",
                                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structurePropertyInitOptionalExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structurePropertyInitOptionalExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structurePropertyInitOptionalExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structurePropertyInitOptionalExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyInitOptionalExpressionAST GALGAS_structurePropertyInitOptionalExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_structurePropertyInitOptionalExpressionAST result ;
  const GALGAS_structurePropertyInitOptionalExpressionAST * p = (const GALGAS_structurePropertyInitOptionalExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structurePropertyInitOptionalExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structurePropertyInitOptionalExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@propertyList' list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_propertyList : public cCollectionElement {
  public : GALGAS_propertyList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_propertyList (const GALGAS_string & in_mPropertyName,
                                            const GALGAS_PLMType & in_mType
                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_propertyList::cCollectionElement_propertyList (const GALGAS_string & in_mPropertyName,
                                                                  const GALGAS_PLMType & in_mType
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_propertyList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_propertyList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_propertyList (mObject.mProperty_mPropertyName, mObject.mProperty_mType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_propertyList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyName" ":" ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_propertyList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_propertyList * operand = (cCollectionElement_propertyList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_propertyList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList::GALGAS_propertyList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList::GALGAS_propertyList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList GALGAS_propertyList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList GALGAS_propertyList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                    const GALGAS_PLMType & inOperand1
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_propertyList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_propertyList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_propertyList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_string & in_mPropertyName,
                                                     const GALGAS_PLMType & in_mType
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyList * p = NULL ;
  macroMyNew (p, cCollectionElement_propertyList (in_mPropertyName,
                                                  in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::addAssign_operation (const GALGAS_string & inOperand0,
                                               const GALGAS_PLMType & inOperand1
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_propertyList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                const GALGAS_PLMType inOperand1,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_propertyList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                GALGAS_PLMType & outOperand1,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_propertyList) ;
      outOperand0 = p->mObject.mProperty_mPropertyName ;
      outOperand1 = p->mObject.mProperty_mType ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::setter_popFirst (GALGAS_string & outOperand0,
                                           GALGAS_PLMType & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::setter_popLast (GALGAS_string & outOperand0,
                                          GALGAS_PLMType & outOperand1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::method_first (GALGAS_string & outOperand0,
                                        GALGAS_PLMType & outOperand1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::method_last (GALGAS_string & outOperand0,
                                       GALGAS_PLMType & outOperand1,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList GALGAS_propertyList::add_operation (const GALGAS_propertyList & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList GALGAS_propertyList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_propertyList result = GALGAS_propertyList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList GALGAS_propertyList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_propertyList result = GALGAS_propertyList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList GALGAS_propertyList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_propertyList result = GALGAS_propertyList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::plusAssign_operation (const GALGAS_propertyList inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_propertyList::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_propertyList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_propertyList::cEnumerator_propertyList (const GALGAS_propertyList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element cEnumerator_propertyList::current (LOCATION_ARGS) const {
  const cCollectionElement_propertyList * p = (const cCollectionElement_propertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_propertyList::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_propertyList * p = (const cCollectionElement_propertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyList) ;
  return p->mObject.mProperty_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cEnumerator_propertyList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_propertyList * p = (const cCollectionElement_propertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyList) ;
  return p->mObject.mProperty_mType ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @propertyList type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyList ("propertyList",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_propertyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_propertyList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList GALGAS_propertyList::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_propertyList result ;
  const GALGAS_propertyList * p = (const GALGAS_propertyList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

