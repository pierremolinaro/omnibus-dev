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

//--- Syntax error message for terminal '$?$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__3F_ = "the '\?' or '\?selector:' delimitor" ;

//--- Syntax error message for terminal '$?!$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__3F__21_ = "the '\?!' or '\?!selector:' delimitor" ;

//--- Syntax error message for terminal '$!$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__21_ = "the '!' or '!selector:' delimitor" ;

//--- Syntax error message for terminal '$!?$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__21__3F_ = "the '!\?' or '!\?selector:' delimitor" ;

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

//--- Syntax error message for terminal '$until$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_until = "the 'until' keyword" ;

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

//---------------------------------------------------------------------------------------------------------------------*
//                getMessageForTerminal                                                                                *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_plm_5F_lexique::getMessageForTerminal (const int16_t inTerminalIndex) const {
  static const char * syntaxErrorMessageArray [117] = {kEndOfSourceLexicalErrorMessage,
    gSyntaxErrorMessage_plm_5F_lexique_identifier,
    gSyntaxErrorMessage_plm_5F_lexique__40_attribute,
    gSyntaxErrorMessage_plm_5F_lexique__24_type,
    gSyntaxErrorMessage_plm_5F_lexique_integer,
    gSyntaxErrorMessage_plm_5F_lexique__22_string_22_,
    gSyntaxErrorMessage_plm_5F_lexique_comment,
    gSyntaxErrorMessage_plm_5F_lexique__3F_,
    gSyntaxErrorMessage_plm_5F_lexique__3F__21_,
    gSyntaxErrorMessage_plm_5F_lexique__21_,
    gSyntaxErrorMessage_plm_5F_lexique__21__3F_,
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
    gSyntaxErrorMessage_plm_5F_lexique_until,
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
    gSyntaxErrorMessage_plm_5F_lexique__21__25__3D_} ;
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

//--- Unicode string for '$until$'
static const utf32 kUnicodeString_plm_5F_lexique_until [] = {
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
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

static const int32_t ktable_size_plm_5F_lexique_delimitorsList = 49 ;

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
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__2E__2E__3C_, 3, C_Lexique_plm_5F_lexique::kToken__2E__2E__3C_)
} ;

int16_t C_Lexique_plm_5F_lexique::search_into_delimitorsList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_plm_5F_lexique_delimitorsList, ktable_size_plm_5F_lexique_delimitorsList) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//             Key words table 'keyWordList'                            *
//---------------------------------------------------------------------------------------------------------------------*

static const int32_t ktable_size_plm_5F_lexique_keyWordList = 57 ;

static const C_unicode_lexique_table_entry ktable_for_plm_5F_lexique_keyWordList [ktable_size_plm_5F_lexique_keyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_at, 2, C_Lexique_plm_5F_lexique::kToken_at),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_do, 2, C_Lexique_plm_5F_lexique::kToken_do),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_if, 2, C_Lexique_plm_5F_lexique::kToken_if),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_in, 2, C_Lexique_plm_5F_lexique::kToken_in),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_no, 2, C_Lexique_plm_5F_lexique::kToken_no),
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
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_until, 5, C_Lexique_plm_5F_lexique::kToken_until),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_while, 5, C_Lexique_plm_5F_lexique::kToken_while),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_assert, 6, C_Lexique_plm_5F_lexique::kToken_assert),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_extend, 6, C_Lexique_plm_5F_lexique::kToken_extend),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_extern, 6, C_Lexique_plm_5F_lexique::kToken_extern),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_import, 6, C_Lexique_plm_5F_lexique::kToken_import),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_module, 6, C_Lexique_plm_5F_lexique::kToken_module),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_public, 6, C_Lexique_plm_5F_lexique::kToken_public),
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
    case kToken__3F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\?") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__3F__21_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\?!") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__21_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__21__3F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!\?") ;
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
    case kToken_until:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("until") ;
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
              token.mTokenCode = kToken__3F__21_ ;
              enterToken (token) ;
            }else{
              ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
              mCurrentLocation = currentLocationForTag_onlyExclamationInterrogationMark ;
              mTokenEndLocation = endLocationForTag_onlyExclamationInterrogationMark ;
              mCurrentChar = currentCharForTag_onlyExclamationInterrogationMark ;
              token.mTokenCode = kToken__3F__21_ ;
              enterToken (token) ;
            }
          }else{
            token.mTokenCode = kToken__3F__21_ ;
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
            token.mTokenCode = kToken__3F_ ;
            enterToken (token) ;
          }else{
            ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
            mCurrentLocation = currentLocationForTag_onlyInterrogationMark ;
            mTokenEndLocation = endLocationForTag_onlyInterrogationMark ;
            mCurrentChar = currentCharForTag_onlyInterrogationMark ;
            token.mTokenCode = kToken__3F_ ;
            enterToken (token) ;
          }
        }else{
          token.mTokenCode = kToken__3F_ ;
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
              token.mTokenCode = kToken__21__3F_ ;
              enterToken (token) ;
            }else{
              ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
              mCurrentLocation = currentLocationForTag_onlyInterrogationExclamationMark ;
              mTokenEndLocation = endLocationForTag_onlyInterrogationExclamationMark ;
              mCurrentChar = currentCharForTag_onlyInterrogationExclamationMark ;
              token.mTokenCode = kToken__21__3F_ ;
              enterToken (token) ;
            }
          }else{
            token.mTokenCode = kToken__21__3F_ ;
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
            token.mTokenCode = kToken__21_ ;
            enterToken (token) ;
          }else{
            ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
            mCurrentLocation = currentLocationForTag_onlyExclamationMark ;
            mTokenEndLocation = endLocationForTag_onlyExclamationMark ;
            mCurrentChar = currentCharForTag_onlyExclamationMark ;
            token.mTokenCode = kToken__21_ ;
            enterToken (token) ;
          }
        }else{
          token.mTokenCode = kToken__21_ ;
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
  result.addAssign_operation (GALGAS_string ("\?") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?!") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!\?") COMMA_THERE) ;
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
  result.addAssign_operation (GALGAS_string ("until") COMMA_THERE) ;
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
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "plm_lexique:keyWordList") {
    ioFound = true ;
    ioList.appendObject ("at") ;
    ioList.appendObject ("do") ;
    ioList.appendObject ("if") ;
    ioList.appendObject ("in") ;
    ioList.appendObject ("no") ;
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
    ioList.appendObject ("until") ;
    ioList.appendObject ("while") ;
    ioList.appendObject ("assert") ;
    ioList.appendObject ("extend") ;
    ioList.appendObject ("extern") ;
    ioList.appendObject ("import") ;
    ioList.appendObject ("module") ;
    ioList.appendObject ("public") ;
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
  static const uint32_t kTerminalSymbolStyles [117] = {0,
    0 /* plm_lexique_1_identifier */,
    2 /* plm_lexique_1__40_attribute */,
    3 /* plm_lexique_1__24_type */,
    4 /* plm_lexique_1_integer */,
    5 /* plm_lexique_1__22_string_22_ */,
    6 /* plm_lexique_1_comment */,
    8 /* plm_lexique_1__3F_ */,
    8 /* plm_lexique_1__3F__21_ */,
    8 /* plm_lexique_1__21_ */,
    8 /* plm_lexique_1__21__3F_ */,
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
    1 /* plm_lexique_1_until */,
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
    7 /* plm_lexique_1__21__25__3D_ */
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
//                                                                                                                     *
//                            Abstract extension getter '@abstractDeclarationAST location'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_abstractDeclarationAST_location> gExtensionGetterTable_abstractDeclarationAST_location ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_location (const int32_t inClassIndex,
                                    enterExtensionGetter_abstractDeclarationAST_location inGetter) {
  gExtensionGetterTable_abstractDeclarationAST_location.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_abstractDeclarationAST_location (void) {
  gExtensionGetterTable_abstractDeclarationAST_location.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractDeclarationAST_location (NULL,
                                                            freeExtensionGetter_abstractDeclarationAST_location) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location callExtensionGetter_location (const cPtr_abstractDeclarationAST * inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_location result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractDeclarationAST_location f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractDeclarationAST_location.count ()) {
      f = gExtensionGetterTable_abstractDeclarationAST_location (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractDeclarationAST_location.count ()) {
           f = gExtensionGetterTable_abstractDeclarationAST_location (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractDeclarationAST_location.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@declarationListAST' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_declarationListAST : public cCollectionElement {
  public : GALGAS_declarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_declarationListAST (const GALGAS_abstractDeclarationAST & in_mDeclaration
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

cCollectionElement_declarationListAST::cCollectionElement_declarationListAST (const GALGAS_abstractDeclarationAST & in_mDeclaration
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclaration) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_declarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_declarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_declarationListAST (mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_declarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclaration" ":" ;
  mObject.mProperty_mDeclaration.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_declarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_declarationListAST * operand = (cCollectionElement_declarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_declarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationListAST::GALGAS_declarationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationListAST::GALGAS_declarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationListAST GALGAS_declarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_declarationListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationListAST GALGAS_declarationListAST::constructor_listWithValue (const GALGAS_abstractDeclarationAST & inOperand0
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_declarationListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_declarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_declarationListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_abstractDeclarationAST & in_mDeclaration
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_declarationListAST (in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declarationListAST::addAssign_operation (const GALGAS_abstractDeclarationAST & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_declarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declarationListAST::setter_insertAtIndex (const GALGAS_abstractDeclarationAST inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_declarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declarationListAST::setter_removeAtIndex (GALGAS_abstractDeclarationAST & outOperand0,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
      outOperand0 = p->mObject.mProperty_mDeclaration ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declarationListAST::setter_popFirst (GALGAS_abstractDeclarationAST & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declarationListAST::setter_popLast (GALGAS_abstractDeclarationAST & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declarationListAST::method_first (GALGAS_abstractDeclarationAST & outOperand0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declarationListAST::method_last (GALGAS_abstractDeclarationAST & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationListAST GALGAS_declarationListAST::add_operation (const GALGAS_declarationListAST & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_declarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationListAST GALGAS_declarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_declarationListAST result = GALGAS_declarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationListAST GALGAS_declarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_declarationListAST result = GALGAS_declarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationListAST GALGAS_declarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_declarationListAST result = GALGAS_declarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declarationListAST::plusAssign_operation (const GALGAS_declarationListAST inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDeclarationAST GALGAS_declarationListAST::getter_mDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  GALGAS_abstractDeclarationAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    result = p->mObject.mProperty_mDeclaration ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_declarationListAST::cEnumerator_declarationListAST (const GALGAS_declarationListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationListAST_2D_element cEnumerator_declarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_declarationListAST * p = (const cCollectionElement_declarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDeclarationAST cEnumerator_declarationListAST::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_declarationListAST * p = (const cCollectionElement_declarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
  return p->mObject.mProperty_mDeclaration ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @declarationListAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declarationListAST ("declarationListAST",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_declarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_declarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationListAST GALGAS_declarationListAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_declarationListAST result ;
  const GALGAS_declarationListAST * p = (const GALGAS_declarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@checkTargetListAST' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_checkTargetListAST : public cCollectionElement {
  public : GALGAS_checkTargetListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_checkTargetListAST (const GALGAS_location & in_mTargetConstructLocation,
                                                  const GALGAS_lstringlist & in_mAcceptedTargetList
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

cCollectionElement_checkTargetListAST::cCollectionElement_checkTargetListAST (const GALGAS_location & in_mTargetConstructLocation,
                                                                              const GALGAS_lstringlist & in_mAcceptedTargetList
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTargetConstructLocation, in_mAcceptedTargetList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_checkTargetListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_checkTargetListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_checkTargetListAST (mObject.mProperty_mTargetConstructLocation, mObject.mProperty_mAcceptedTargetList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_checkTargetListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetConstructLocation" ":" ;
  mObject.mProperty_mTargetConstructLocation.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAcceptedTargetList" ":" ;
  mObject.mProperty_mAcceptedTargetList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_checkTargetListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_checkTargetListAST * operand = (cCollectionElement_checkTargetListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_checkTargetListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkTargetListAST::GALGAS_checkTargetListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkTargetListAST::GALGAS_checkTargetListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_checkTargetListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::constructor_listWithValue (const GALGAS_location & inOperand0,
                                                                                const GALGAS_lstringlist & inOperand1
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_checkTargetListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_checkTargetListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_checkTargetListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_checkTargetListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_location & in_mTargetConstructLocation,
                                                           const GALGAS_lstringlist & in_mAcceptedTargetList
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_checkTargetListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_checkTargetListAST (in_mTargetConstructLocation,
                                                        in_mAcceptedTargetList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_checkTargetListAST::addAssign_operation (const GALGAS_location & inOperand0,
                                                     const GALGAS_lstringlist & inOperand1
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_checkTargetListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_checkTargetListAST::setter_insertAtIndex (const GALGAS_location inOperand0,
                                                      const GALGAS_lstringlist inOperand1,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_checkTargetListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_checkTargetListAST::setter_removeAtIndex (GALGAS_location & outOperand0,
                                                      GALGAS_lstringlist & outOperand1,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
      outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
      outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_checkTargetListAST::setter_popFirst (GALGAS_location & outOperand0,
                                                 GALGAS_lstringlist & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
    outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_checkTargetListAST::setter_popLast (GALGAS_location & outOperand0,
                                                GALGAS_lstringlist & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
    outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_checkTargetListAST::method_first (GALGAS_location & outOperand0,
                                              GALGAS_lstringlist & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
    outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_checkTargetListAST::method_last (GALGAS_location & outOperand0,
                                             GALGAS_lstringlist & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
    outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::add_operation (const GALGAS_checkTargetListAST & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_checkTargetListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_checkTargetListAST result = GALGAS_checkTargetListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_checkTargetListAST result = GALGAS_checkTargetListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_checkTargetListAST result = GALGAS_checkTargetListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_checkTargetListAST::plusAssign_operation (const GALGAS_checkTargetListAST inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_checkTargetListAST::getter_mTargetConstructLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    result = p->mObject.mProperty_mTargetConstructLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_checkTargetListAST::getter_mAcceptedTargetListAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    result = p->mObject.mProperty_mAcceptedTargetList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_checkTargetListAST::cEnumerator_checkTargetListAST (const GALGAS_checkTargetListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkTargetListAST_2D_element cEnumerator_checkTargetListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_checkTargetListAST * p = (const cCollectionElement_checkTargetListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_checkTargetListAST::current_mTargetConstructLocation (LOCATION_ARGS) const {
  const cCollectionElement_checkTargetListAST * p = (const cCollectionElement_checkTargetListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
  return p->mObject.mProperty_mTargetConstructLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_checkTargetListAST::current_mAcceptedTargetList (LOCATION_ARGS) const {
  const cCollectionElement_checkTargetListAST * p = (const cCollectionElement_checkTargetListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
  return p->mObject.mProperty_mAcceptedTargetList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @checkTargetListAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_checkTargetListAST ("checkTargetListAST",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_checkTargetListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkTargetListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_checkTargetListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_checkTargetListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_checkTargetListAST result ;
  const GALGAS_checkTargetListAST * p = (const GALGAS_checkTargetListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_checkTargetListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkTargetListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@globalVarDeclarationList' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_globalVarDeclarationList : public cCollectionElement {
  public : GALGAS_globalVarDeclarationList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_globalVarDeclarationList (const GALGAS_lstring & in_mTypeName,
                                                        const GALGAS_lstring & in_mVarName,
                                                        const GALGAS_expressionAST & in_mSourceExpression,
                                                        const GALGAS_bool & in_mAllowedAccessToAll
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

cCollectionElement_globalVarDeclarationList::cCollectionElement_globalVarDeclarationList (const GALGAS_lstring & in_mTypeName,
                                                                                          const GALGAS_lstring & in_mVarName,
                                                                                          const GALGAS_expressionAST & in_mSourceExpression,
                                                                                          const GALGAS_bool & in_mAllowedAccessToAll
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mVarName, in_mSourceExpression, in_mAllowedAccessToAll) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_globalVarDeclarationList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_globalVarDeclarationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_globalVarDeclarationList (mObject.mProperty_mTypeName, mObject.mProperty_mVarName, mObject.mProperty_mSourceExpression, mObject.mProperty_mAllowedAccessToAll COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_globalVarDeclarationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeName" ":" ;
  mObject.mProperty_mTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mVarName" ":" ;
  mObject.mProperty_mVarName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSourceExpression" ":" ;
  mObject.mProperty_mSourceExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAllowedAccessToAll" ":" ;
  mObject.mProperty_mAllowedAccessToAll.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_globalVarDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_globalVarDeclarationList * operand = (cCollectionElement_globalVarDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_globalVarDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList::GALGAS_globalVarDeclarationList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList::GALGAS_globalVarDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList GALGAS_globalVarDeclarationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_globalVarDeclarationList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList GALGAS_globalVarDeclarationList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_expressionAST & inOperand2,
                                                                                            const GALGAS_bool & inOperand3
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_globalVarDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_globalVarDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_globalVarDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVarDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_lstring & in_mTypeName,
                                                                 const GALGAS_lstring & in_mVarName,
                                                                 const GALGAS_expressionAST & in_mSourceExpression,
                                                                 const GALGAS_bool & in_mAllowedAccessToAll
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_globalVarDeclarationList * p = NULL ;
  macroMyNew (p, cCollectionElement_globalVarDeclarationList (in_mTypeName,
                                                              in_mVarName,
                                                              in_mSourceExpression,
                                                              in_mAllowedAccessToAll COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVarDeclarationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                           const GALGAS_lstring & inOperand1,
                                                           const GALGAS_expressionAST & inOperand2,
                                                           const GALGAS_bool & inOperand3
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_globalVarDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVarDeclarationList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_lstring inOperand1,
                                                            const GALGAS_expressionAST inOperand2,
                                                            const GALGAS_bool inOperand3,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_globalVarDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVarDeclarationList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_expressionAST & outOperand2,
                                                            GALGAS_bool & outOperand3,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_globalVarDeclarationList * p = (cCollectionElement_globalVarDeclarationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_globalVarDeclarationList) ;
      outOperand0 = p->mObject.mProperty_mTypeName ;
      outOperand1 = p->mObject.mProperty_mVarName ;
      outOperand2 = p->mObject.mProperty_mSourceExpression ;
      outOperand3 = p->mObject.mProperty_mAllowedAccessToAll ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVarDeclarationList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_expressionAST & outOperand2,
                                                       GALGAS_bool & outOperand3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalVarDeclarationList * p = (cCollectionElement_globalVarDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalVarDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mVarName ;
    outOperand2 = p->mObject.mProperty_mSourceExpression ;
    outOperand3 = p->mObject.mProperty_mAllowedAccessToAll ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVarDeclarationList::setter_popLast (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_expressionAST & outOperand2,
                                                      GALGAS_bool & outOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalVarDeclarationList * p = (cCollectionElement_globalVarDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalVarDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mVarName ;
    outOperand2 = p->mObject.mProperty_mSourceExpression ;
    outOperand3 = p->mObject.mProperty_mAllowedAccessToAll ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVarDeclarationList::method_first (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_expressionAST & outOperand2,
                                                    GALGAS_bool & outOperand3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalVarDeclarationList * p = (cCollectionElement_globalVarDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalVarDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mVarName ;
    outOperand2 = p->mObject.mProperty_mSourceExpression ;
    outOperand3 = p->mObject.mProperty_mAllowedAccessToAll ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVarDeclarationList::method_last (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_expressionAST & outOperand2,
                                                   GALGAS_bool & outOperand3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalVarDeclarationList * p = (cCollectionElement_globalVarDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalVarDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mVarName ;
    outOperand2 = p->mObject.mProperty_mSourceExpression ;
    outOperand3 = p->mObject.mProperty_mAllowedAccessToAll ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList GALGAS_globalVarDeclarationList::add_operation (const GALGAS_globalVarDeclarationList & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_globalVarDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList GALGAS_globalVarDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_globalVarDeclarationList result = GALGAS_globalVarDeclarationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList GALGAS_globalVarDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_globalVarDeclarationList result = GALGAS_globalVarDeclarationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList GALGAS_globalVarDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_globalVarDeclarationList result = GALGAS_globalVarDeclarationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVarDeclarationList::plusAssign_operation (const GALGAS_globalVarDeclarationList inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalVarDeclarationList::getter_mTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalVarDeclarationList * p = (cCollectionElement_globalVarDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_globalVarDeclarationList) ;
    result = p->mObject.mProperty_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalVarDeclarationList::getter_mVarNameAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalVarDeclarationList * p = (cCollectionElement_globalVarDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_globalVarDeclarationList) ;
    result = p->mObject.mProperty_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_globalVarDeclarationList::getter_mSourceExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalVarDeclarationList * p = (cCollectionElement_globalVarDeclarationList *) attributes.ptr () ;
  GALGAS_expressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_globalVarDeclarationList) ;
    result = p->mObject.mProperty_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_globalVarDeclarationList::getter_mAllowedAccessToAllAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalVarDeclarationList * p = (cCollectionElement_globalVarDeclarationList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_globalVarDeclarationList) ;
    result = p->mObject.mProperty_mAllowedAccessToAll ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_globalVarDeclarationList::cEnumerator_globalVarDeclarationList (const GALGAS_globalVarDeclarationList & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList_2D_element cEnumerator_globalVarDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_globalVarDeclarationList * p = (const cCollectionElement_globalVarDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalVarDeclarationList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_globalVarDeclarationList::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_globalVarDeclarationList * p = (const cCollectionElement_globalVarDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalVarDeclarationList) ;
  return p->mObject.mProperty_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_globalVarDeclarationList::current_mVarName (LOCATION_ARGS) const {
  const cCollectionElement_globalVarDeclarationList * p = (const cCollectionElement_globalVarDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalVarDeclarationList) ;
  return p->mObject.mProperty_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cEnumerator_globalVarDeclarationList::current_mSourceExpression (LOCATION_ARGS) const {
  const cCollectionElement_globalVarDeclarationList * p = (const cCollectionElement_globalVarDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalVarDeclarationList) ;
  return p->mObject.mProperty_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_globalVarDeclarationList::current_mAllowedAccessToAll (LOCATION_ARGS) const {
  const cCollectionElement_globalVarDeclarationList * p = (const cCollectionElement_globalVarDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalVarDeclarationList) ;
  return p->mObject.mProperty_mAllowedAccessToAll ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @globalVarDeclarationList type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalVarDeclarationList ("globalVarDeclarationList",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalVarDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalVarDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalVarDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalVarDeclarationList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList GALGAS_globalVarDeclarationList::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_globalVarDeclarationList result ;
  const GALGAS_globalVarDeclarationList * p = (const GALGAS_globalVarDeclarationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalVarDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalVarDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@extensionDeclarationListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_extensionDeclarationListAST : public cCollectionElement {
  public : GALGAS_extensionDeclarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_extensionDeclarationListAST (const GALGAS_lstring & in_mTypeName,
                                                           const GALGAS_functionDeclarationListAST & in_mProcedureDeclarationListAST,
                                                           const GALGAS_structurePropertyListAST & in_mPropertyList,
                                                           const GALGAS_systemRoutineDeclarationListAST & in_mSVCListAST,
                                                           const GALGAS_guardDeclarationListAST & in_mGuardListAST
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

cCollectionElement_extensionDeclarationListAST::cCollectionElement_extensionDeclarationListAST (const GALGAS_lstring & in_mTypeName,
                                                                                                const GALGAS_functionDeclarationListAST & in_mProcedureDeclarationListAST,
                                                                                                const GALGAS_structurePropertyListAST & in_mPropertyList,
                                                                                                const GALGAS_systemRoutineDeclarationListAST & in_mSVCListAST,
                                                                                                const GALGAS_guardDeclarationListAST & in_mGuardListAST
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mProcedureDeclarationListAST, in_mPropertyList, in_mSVCListAST, in_mGuardListAST) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_extensionDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_extensionDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_extensionDeclarationListAST (mObject.mProperty_mTypeName, mObject.mProperty_mProcedureDeclarationListAST, mObject.mProperty_mPropertyList, mObject.mProperty_mSVCListAST, mObject.mProperty_mGuardListAST COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_extensionDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeName" ":" ;
  mObject.mProperty_mTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProcedureDeclarationListAST" ":" ;
  mObject.mProperty_mProcedureDeclarationListAST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyList" ":" ;
  mObject.mProperty_mPropertyList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSVCListAST" ":" ;
  mObject.mProperty_mSVCListAST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuardListAST" ":" ;
  mObject.mProperty_mGuardListAST.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_extensionDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_extensionDeclarationListAST * operand = (cCollectionElement_extensionDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_extensionDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST::GALGAS_extensionDeclarationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST::GALGAS_extensionDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST GALGAS_extensionDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionDeclarationListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST GALGAS_extensionDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_functionDeclarationListAST & inOperand1,
                                                                                                  const GALGAS_structurePropertyListAST & inOperand2,
                                                                                                  const GALGAS_systemRoutineDeclarationListAST & inOperand3,
                                                                                                  const GALGAS_guardDeclarationListAST & inOperand4
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_extensionDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_extensionDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_extensionDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mTypeName,
                                                                    const GALGAS_functionDeclarationListAST & in_mProcedureDeclarationListAST,
                                                                    const GALGAS_structurePropertyListAST & in_mPropertyList,
                                                                    const GALGAS_systemRoutineDeclarationListAST & in_mSVCListAST,
                                                                    const GALGAS_guardDeclarationListAST & in_mGuardListAST
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_extensionDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_extensionDeclarationListAST (in_mTypeName,
                                                                 in_mProcedureDeclarationListAST,
                                                                 in_mPropertyList,
                                                                 in_mSVCListAST,
                                                                 in_mGuardListAST COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_functionDeclarationListAST & inOperand1,
                                                              const GALGAS_structurePropertyListAST & inOperand2,
                                                              const GALGAS_systemRoutineDeclarationListAST & inOperand3,
                                                              const GALGAS_guardDeclarationListAST & inOperand4
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_extensionDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_functionDeclarationListAST inOperand1,
                                                               const GALGAS_structurePropertyListAST inOperand2,
                                                               const GALGAS_systemRoutineDeclarationListAST inOperand3,
                                                               const GALGAS_guardDeclarationListAST inOperand4,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_extensionDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_functionDeclarationListAST & outOperand1,
                                                               GALGAS_structurePropertyListAST & outOperand2,
                                                               GALGAS_systemRoutineDeclarationListAST & outOperand3,
                                                               GALGAS_guardDeclarationListAST & outOperand4,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_extensionDeclarationListAST * p = (cCollectionElement_extensionDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_extensionDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mTypeName ;
      outOperand1 = p->mObject.mProperty_mProcedureDeclarationListAST ;
      outOperand2 = p->mObject.mProperty_mPropertyList ;
      outOperand3 = p->mObject.mProperty_mSVCListAST ;
      outOperand4 = p->mObject.mProperty_mGuardListAST ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_functionDeclarationListAST & outOperand1,
                                                          GALGAS_structurePropertyListAST & outOperand2,
                                                          GALGAS_systemRoutineDeclarationListAST & outOperand3,
                                                          GALGAS_guardDeclarationListAST & outOperand4,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extensionDeclarationListAST * p = (cCollectionElement_extensionDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extensionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mProcedureDeclarationListAST ;
    outOperand2 = p->mObject.mProperty_mPropertyList ;
    outOperand3 = p->mObject.mProperty_mSVCListAST ;
    outOperand4 = p->mObject.mProperty_mGuardListAST ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_functionDeclarationListAST & outOperand1,
                                                         GALGAS_structurePropertyListAST & outOperand2,
                                                         GALGAS_systemRoutineDeclarationListAST & outOperand3,
                                                         GALGAS_guardDeclarationListAST & outOperand4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extensionDeclarationListAST * p = (cCollectionElement_extensionDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extensionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mProcedureDeclarationListAST ;
    outOperand2 = p->mObject.mProperty_mPropertyList ;
    outOperand3 = p->mObject.mProperty_mSVCListAST ;
    outOperand4 = p->mObject.mProperty_mGuardListAST ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_functionDeclarationListAST & outOperand1,
                                                       GALGAS_structurePropertyListAST & outOperand2,
                                                       GALGAS_systemRoutineDeclarationListAST & outOperand3,
                                                       GALGAS_guardDeclarationListAST & outOperand4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extensionDeclarationListAST * p = (cCollectionElement_extensionDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extensionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mProcedureDeclarationListAST ;
    outOperand2 = p->mObject.mProperty_mPropertyList ;
    outOperand3 = p->mObject.mProperty_mSVCListAST ;
    outOperand4 = p->mObject.mProperty_mGuardListAST ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_functionDeclarationListAST & outOperand1,
                                                      GALGAS_structurePropertyListAST & outOperand2,
                                                      GALGAS_systemRoutineDeclarationListAST & outOperand3,
                                                      GALGAS_guardDeclarationListAST & outOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extensionDeclarationListAST * p = (cCollectionElement_extensionDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extensionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mProcedureDeclarationListAST ;
    outOperand2 = p->mObject.mProperty_mPropertyList ;
    outOperand3 = p->mObject.mProperty_mSVCListAST ;
    outOperand4 = p->mObject.mProperty_mGuardListAST ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST GALGAS_extensionDeclarationListAST::add_operation (const GALGAS_extensionDeclarationListAST & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_extensionDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST GALGAS_extensionDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_extensionDeclarationListAST result = GALGAS_extensionDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST GALGAS_extensionDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_extensionDeclarationListAST result = GALGAS_extensionDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST GALGAS_extensionDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_extensionDeclarationListAST result = GALGAS_extensionDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionDeclarationListAST::plusAssign_operation (const GALGAS_extensionDeclarationListAST inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionDeclarationListAST::getter_mTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extensionDeclarationListAST * p = (cCollectionElement_extensionDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extensionDeclarationListAST) ;
    result = p->mObject.mProperty_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_extensionDeclarationListAST::getter_mProcedureDeclarationListASTAtIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extensionDeclarationListAST * p = (cCollectionElement_extensionDeclarationListAST *) attributes.ptr () ;
  GALGAS_functionDeclarationListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extensionDeclarationListAST) ;
    result = p->mObject.mProperty_mProcedureDeclarationListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST GALGAS_extensionDeclarationListAST::getter_mPropertyListAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extensionDeclarationListAST * p = (cCollectionElement_extensionDeclarationListAST *) attributes.ptr () ;
  GALGAS_structurePropertyListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extensionDeclarationListAST) ;
    result = p->mObject.mProperty_mPropertyList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST GALGAS_extensionDeclarationListAST::getter_mSVCListASTAtIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extensionDeclarationListAST * p = (cCollectionElement_extensionDeclarationListAST *) attributes.ptr () ;
  GALGAS_systemRoutineDeclarationListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extensionDeclarationListAST) ;
    result = p->mObject.mProperty_mSVCListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST GALGAS_extensionDeclarationListAST::getter_mGuardListASTAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extensionDeclarationListAST * p = (cCollectionElement_extensionDeclarationListAST *) attributes.ptr () ;
  GALGAS_guardDeclarationListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extensionDeclarationListAST) ;
    result = p->mObject.mProperty_mGuardListAST ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_extensionDeclarationListAST::cEnumerator_extensionDeclarationListAST (const GALGAS_extensionDeclarationListAST & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST_2D_element cEnumerator_extensionDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_extensionDeclarationListAST * p = (const cCollectionElement_extensionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extensionDeclarationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_extensionDeclarationListAST::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_extensionDeclarationListAST * p = (const cCollectionElement_extensionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extensionDeclarationListAST) ;
  return p->mObject.mProperty_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST cEnumerator_extensionDeclarationListAST::current_mProcedureDeclarationListAST (LOCATION_ARGS) const {
  const cCollectionElement_extensionDeclarationListAST * p = (const cCollectionElement_extensionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extensionDeclarationListAST) ;
  return p->mObject.mProperty_mProcedureDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST cEnumerator_extensionDeclarationListAST::current_mPropertyList (LOCATION_ARGS) const {
  const cCollectionElement_extensionDeclarationListAST * p = (const cCollectionElement_extensionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extensionDeclarationListAST) ;
  return p->mObject.mProperty_mPropertyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST cEnumerator_extensionDeclarationListAST::current_mSVCListAST (LOCATION_ARGS) const {
  const cCollectionElement_extensionDeclarationListAST * p = (const cCollectionElement_extensionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extensionDeclarationListAST) ;
  return p->mObject.mProperty_mSVCListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST cEnumerator_extensionDeclarationListAST::current_mGuardListAST (LOCATION_ARGS) const {
  const cCollectionElement_extensionDeclarationListAST * p = (const cCollectionElement_extensionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extensionDeclarationListAST) ;
  return p->mObject.mProperty_mGuardListAST ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @extensionDeclarationListAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionDeclarationListAST ("extensionDeclarationListAST",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionDeclarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST GALGAS_extensionDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_extensionDeclarationListAST result ;
  const GALGAS_extensionDeclarationListAST * p = (const GALGAS_extensionDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
                                                          const GALGAS_routineFormalArgumentList & in_mFunctionFormalArgumentList,
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
                                                                                              const GALGAS_routineFormalArgumentList & in_mFunctionFormalArgumentList,
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
                                                                                                const GALGAS_routineFormalArgumentList & inOperand4,
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
                                                                   const GALGAS_routineFormalArgumentList & in_mFunctionFormalArgumentList,
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
                                                             const GALGAS_routineFormalArgumentList & inOperand4,
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
                                                              const GALGAS_routineFormalArgumentList inOperand4,
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
                                                              GALGAS_routineFormalArgumentList & outOperand4,
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
                                                         GALGAS_routineFormalArgumentList & outOperand4,
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
                                                        GALGAS_routineFormalArgumentList & outOperand4,
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
                                                      GALGAS_routineFormalArgumentList & outOperand4,
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
                                                     GALGAS_routineFormalArgumentList & outOperand4,
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

GALGAS_routineFormalArgumentList GALGAS_functionDeclarationListAST::getter_mFunctionFormalArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionDeclarationListAST * p = (cCollectionElement_functionDeclarationListAST *) attributes.ptr () ;
  GALGAS_routineFormalArgumentList result ;
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

GALGAS_routineFormalArgumentList cEnumerator_functionDeclarationListAST::current_mFunctionFormalArgumentList (LOCATION_ARGS) const {
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
//                          Class for element of '@requiredProcedureDeclarationListAST' list                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_requiredProcedureDeclarationListAST : public cCollectionElement {
  public : GALGAS_requiredProcedureDeclarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_requiredProcedureDeclarationListAST (const GALGAS_lstring & in_mName,
                                                                   const GALGAS_mode & in_mExecutionMode,
                                                                   const GALGAS_bool & in_mIsExported,
                                                                   const GALGAS_routineFormalArgumentList & in_mFormalArgumentList,
                                                                   const GALGAS_location & in_mEndOfProcLocation
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

cCollectionElement_requiredProcedureDeclarationListAST::cCollectionElement_requiredProcedureDeclarationListAST (const GALGAS_lstring & in_mName,
                                                                                                                const GALGAS_mode & in_mExecutionMode,
                                                                                                                const GALGAS_bool & in_mIsExported,
                                                                                                                const GALGAS_routineFormalArgumentList & in_mFormalArgumentList,
                                                                                                                const GALGAS_location & in_mEndOfProcLocation
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mExecutionMode, in_mIsExported, in_mFormalArgumentList, in_mEndOfProcLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_requiredProcedureDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_requiredProcedureDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_requiredProcedureDeclarationListAST (mObject.mProperty_mName, mObject.mProperty_mExecutionMode, mObject.mProperty_mIsExported, mObject.mProperty_mFormalArgumentList, mObject.mProperty_mEndOfProcLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_requiredProcedureDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExecutionMode" ":" ;
  mObject.mProperty_mExecutionMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsExported" ":" ;
  mObject.mProperty_mIsExported.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentList" ":" ;
  mObject.mProperty_mFormalArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfProcLocation" ":" ;
  mObject.mProperty_mEndOfProcLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_requiredProcedureDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_requiredProcedureDeclarationListAST * operand = (cCollectionElement_requiredProcedureDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_requiredProcedureDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST::GALGAS_requiredProcedureDeclarationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST::GALGAS_requiredProcedureDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST GALGAS_requiredProcedureDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_requiredProcedureDeclarationListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST GALGAS_requiredProcedureDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_mode & inOperand1,
                                                                                                                  const GALGAS_bool & inOperand2,
                                                                                                                  const GALGAS_routineFormalArgumentList & inOperand3,
                                                                                                                  const GALGAS_location & inOperand4
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_requiredProcedureDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_requiredProcedureDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_requiredProcedureDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GALGAS_lstring & in_mName,
                                                                            const GALGAS_mode & in_mExecutionMode,
                                                                            const GALGAS_bool & in_mIsExported,
                                                                            const GALGAS_routineFormalArgumentList & in_mFormalArgumentList,
                                                                            const GALGAS_location & in_mEndOfProcLocation
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_requiredProcedureDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_requiredProcedureDeclarationListAST (in_mName,
                                                                         in_mExecutionMode,
                                                                         in_mIsExported,
                                                                         in_mFormalArgumentList,
                                                                         in_mEndOfProcLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_mode & inOperand1,
                                                                      const GALGAS_bool & inOperand2,
                                                                      const GALGAS_routineFormalArgumentList & inOperand3,
                                                                      const GALGAS_location & inOperand4
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_requiredProcedureDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                       const GALGAS_mode inOperand1,
                                                                       const GALGAS_bool inOperand2,
                                                                       const GALGAS_routineFormalArgumentList inOperand3,
                                                                       const GALGAS_location inOperand4,
                                                                       const GALGAS_uint inInsertionIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_requiredProcedureDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                       GALGAS_mode & outOperand1,
                                                                       GALGAS_bool & outOperand2,
                                                                       GALGAS_routineFormalArgumentList & outOperand3,
                                                                       GALGAS_location & outOperand4,
                                                                       const GALGAS_uint inRemoveIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mName ;
      outOperand1 = p->mObject.mProperty_mExecutionMode ;
      outOperand2 = p->mObject.mProperty_mIsExported ;
      outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
      outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                  GALGAS_mode & outOperand1,
                                                                  GALGAS_bool & outOperand2,
                                                                  GALGAS_routineFormalArgumentList & outOperand3,
                                                                  GALGAS_location & outOperand4,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                 GALGAS_mode & outOperand1,
                                                                 GALGAS_bool & outOperand2,
                                                                 GALGAS_routineFormalArgumentList & outOperand3,
                                                                 GALGAS_location & outOperand4,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                               GALGAS_mode & outOperand1,
                                                               GALGAS_bool & outOperand2,
                                                               GALGAS_routineFormalArgumentList & outOperand3,
                                                               GALGAS_location & outOperand4,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                              GALGAS_mode & outOperand1,
                                                              GALGAS_bool & outOperand2,
                                                              GALGAS_routineFormalArgumentList & outOperand3,
                                                              GALGAS_location & outOperand4,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST GALGAS_requiredProcedureDeclarationListAST::add_operation (const GALGAS_requiredProcedureDeclarationListAST & inOperand,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_requiredProcedureDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST GALGAS_requiredProcedureDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_requiredProcedureDeclarationListAST result = GALGAS_requiredProcedureDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST GALGAS_requiredProcedureDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_requiredProcedureDeclarationListAST result = GALGAS_requiredProcedureDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST GALGAS_requiredProcedureDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_requiredProcedureDeclarationListAST result = GALGAS_requiredProcedureDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST::plusAssign_operation (const GALGAS_requiredProcedureDeclarationListAST inOperand,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_requiredProcedureDeclarationListAST::getter_mNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_requiredProcedureDeclarationListAST::getter_mExecutionModeAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_mode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mExecutionMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_requiredProcedureDeclarationListAST::getter_mIsExportedAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mIsExported ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentList GALGAS_requiredProcedureDeclarationListAST::getter_mFormalArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_routineFormalArgumentList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mFormalArgumentList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_requiredProcedureDeclarationListAST::getter_mEndOfProcLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredProcedureDeclarationListAST * p = (cCollectionElement_requiredProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mEndOfProcLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_requiredProcedureDeclarationListAST::cEnumerator_requiredProcedureDeclarationListAST (const GALGAS_requiredProcedureDeclarationListAST & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element cEnumerator_requiredProcedureDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_requiredProcedureDeclarationListAST * p = (const cCollectionElement_requiredProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_requiredProcedureDeclarationListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_requiredProcedureDeclarationListAST * p = (const cCollectionElement_requiredProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode cEnumerator_requiredProcedureDeclarationListAST::current_mExecutionMode (LOCATION_ARGS) const {
  const cCollectionElement_requiredProcedureDeclarationListAST * p = (const cCollectionElement_requiredProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mExecutionMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_requiredProcedureDeclarationListAST::current_mIsExported (LOCATION_ARGS) const {
  const cCollectionElement_requiredProcedureDeclarationListAST * p = (const cCollectionElement_requiredProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mIsExported ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentList cEnumerator_requiredProcedureDeclarationListAST::current_mFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_requiredProcedureDeclarationListAST * p = (const cCollectionElement_requiredProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_requiredProcedureDeclarationListAST::current_mEndOfProcLocation (LOCATION_ARGS) const {
  const cCollectionElement_requiredProcedureDeclarationListAST * p = (const cCollectionElement_requiredProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mEndOfProcLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @requiredProcedureDeclarationListAST type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_requiredProcedureDeclarationListAST ("requiredProcedureDeclarationListAST",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_requiredProcedureDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_requiredProcedureDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_requiredProcedureDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_requiredProcedureDeclarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST GALGAS_requiredProcedureDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_requiredProcedureDeclarationListAST result ;
  const GALGAS_requiredProcedureDeclarationListAST * p = (const GALGAS_requiredProcedureDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_requiredProcedureDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("requiredProcedureDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Class for element of '@externProcedureDeclarationListAST' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_externProcedureDeclarationListAST : public cCollectionElement {
  public : GALGAS_externProcedureDeclarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_externProcedureDeclarationListAST (const GALGAS_lstring & in_mExternProcedureName,
                                                                 const GALGAS_mode & in_mMode,
                                                                 const GALGAS_routineFormalArgumentList & in_mProcFormalArgumentList,
                                                                 const GALGAS_lstring & in_mReturnTypeName,
                                                                 const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                                 const GALGAS_location & in_mEndOfProcLocation
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

cCollectionElement_externProcedureDeclarationListAST::cCollectionElement_externProcedureDeclarationListAST (const GALGAS_lstring & in_mExternProcedureName,
                                                                                                            const GALGAS_mode & in_mMode,
                                                                                                            const GALGAS_routineFormalArgumentList & in_mProcFormalArgumentList,
                                                                                                            const GALGAS_lstring & in_mReturnTypeName,
                                                                                                            const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                                                                            const GALGAS_location & in_mEndOfProcLocation
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExternProcedureName, in_mMode, in_mProcFormalArgumentList, in_mReturnTypeName, in_mRoutineNameForGeneration, in_mEndOfProcLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_externProcedureDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_externProcedureDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externProcedureDeclarationListAST (mObject.mProperty_mExternProcedureName, mObject.mProperty_mMode, mObject.mProperty_mProcFormalArgumentList, mObject.mProperty_mReturnTypeName, mObject.mProperty_mRoutineNameForGeneration, mObject.mProperty_mEndOfProcLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_externProcedureDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExternProcedureName" ":" ;
  mObject.mProperty_mExternProcedureName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMode" ":" ;
  mObject.mProperty_mMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProcFormalArgumentList" ":" ;
  mObject.mProperty_mProcFormalArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnTypeName" ":" ;
  mObject.mProperty_mReturnTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineNameForGeneration" ":" ;
  mObject.mProperty_mRoutineNameForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfProcLocation" ":" ;
  mObject.mProperty_mEndOfProcLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_externProcedureDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externProcedureDeclarationListAST * operand = (cCollectionElement_externProcedureDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externProcedureDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST::GALGAS_externProcedureDeclarationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST::GALGAS_externProcedureDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST GALGAS_externProcedureDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externProcedureDeclarationListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST GALGAS_externProcedureDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_mode & inOperand1,
                                                                                                              const GALGAS_routineFormalArgumentList & inOperand2,
                                                                                                              const GALGAS_lstring & inOperand3,
                                                                                                              const GALGAS_lstring & inOperand4,
                                                                                                              const GALGAS_location & inOperand5
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_externProcedureDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_externProcedureDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_lstring & in_mExternProcedureName,
                                                                          const GALGAS_mode & in_mMode,
                                                                          const GALGAS_routineFormalArgumentList & in_mProcFormalArgumentList,
                                                                          const GALGAS_lstring & in_mReturnTypeName,
                                                                          const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                                          const GALGAS_location & in_mEndOfProcLocation
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_externProcedureDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_externProcedureDeclarationListAST (in_mExternProcedureName,
                                                                       in_mMode,
                                                                       in_mProcFormalArgumentList,
                                                                       in_mReturnTypeName,
                                                                       in_mRoutineNameForGeneration,
                                                                       in_mEndOfProcLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_mode & inOperand1,
                                                                    const GALGAS_routineFormalArgumentList & inOperand2,
                                                                    const GALGAS_lstring & inOperand3,
                                                                    const GALGAS_lstring & inOperand4,
                                                                    const GALGAS_location & inOperand5
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externProcedureDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                     const GALGAS_mode inOperand1,
                                                                     const GALGAS_routineFormalArgumentList inOperand2,
                                                                     const GALGAS_lstring inOperand3,
                                                                     const GALGAS_lstring inOperand4,
                                                                     const GALGAS_location inOperand5,
                                                                     const GALGAS_uint inInsertionIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externProcedureDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                     GALGAS_mode & outOperand1,
                                                                     GALGAS_routineFormalArgumentList & outOperand2,
                                                                     GALGAS_lstring & outOperand3,
                                                                     GALGAS_lstring & outOperand4,
                                                                     GALGAS_location & outOperand5,
                                                                     const GALGAS_uint inRemoveIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mExternProcedureName ;
      outOperand1 = p->mObject.mProperty_mMode ;
      outOperand2 = p->mObject.mProperty_mProcFormalArgumentList ;
      outOperand3 = p->mObject.mProperty_mReturnTypeName ;
      outOperand4 = p->mObject.mProperty_mRoutineNameForGeneration ;
      outOperand5 = p->mObject.mProperty_mEndOfProcLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                GALGAS_mode & outOperand1,
                                                                GALGAS_routineFormalArgumentList & outOperand2,
                                                                GALGAS_lstring & outOperand3,
                                                                GALGAS_lstring & outOperand4,
                                                                GALGAS_location & outOperand5,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand3 = p->mObject.mProperty_mReturnTypeName ;
    outOperand4 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand5 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                               GALGAS_mode & outOperand1,
                                                               GALGAS_routineFormalArgumentList & outOperand2,
                                                               GALGAS_lstring & outOperand3,
                                                               GALGAS_lstring & outOperand4,
                                                               GALGAS_location & outOperand5,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand3 = p->mObject.mProperty_mReturnTypeName ;
    outOperand4 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand5 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                             GALGAS_mode & outOperand1,
                                                             GALGAS_routineFormalArgumentList & outOperand2,
                                                             GALGAS_lstring & outOperand3,
                                                             GALGAS_lstring & outOperand4,
                                                             GALGAS_location & outOperand5,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand3 = p->mObject.mProperty_mReturnTypeName ;
    outOperand4 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand5 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                            GALGAS_mode & outOperand1,
                                                            GALGAS_routineFormalArgumentList & outOperand2,
                                                            GALGAS_lstring & outOperand3,
                                                            GALGAS_lstring & outOperand4,
                                                            GALGAS_location & outOperand5,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand3 = p->mObject.mProperty_mReturnTypeName ;
    outOperand4 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand5 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST GALGAS_externProcedureDeclarationListAST::add_operation (const GALGAS_externProcedureDeclarationListAST & inOperand,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externProcedureDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST GALGAS_externProcedureDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_externProcedureDeclarationListAST result = GALGAS_externProcedureDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST GALGAS_externProcedureDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_externProcedureDeclarationListAST result = GALGAS_externProcedureDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST GALGAS_externProcedureDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_externProcedureDeclarationListAST result = GALGAS_externProcedureDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST::plusAssign_operation (const GALGAS_externProcedureDeclarationListAST inOperand,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externProcedureDeclarationListAST::getter_mExternProcedureNameAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mExternProcedureName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_externProcedureDeclarationListAST::getter_mModeAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_mode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentList GALGAS_externProcedureDeclarationListAST::getter_mProcFormalArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_routineFormalArgumentList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mProcFormalArgumentList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externProcedureDeclarationListAST::getter_mReturnTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mReturnTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externProcedureDeclarationListAST::getter_mRoutineNameForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mRoutineNameForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_externProcedureDeclarationListAST::getter_mEndOfProcLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externProcedureDeclarationListAST * p = (cCollectionElement_externProcedureDeclarationListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
    result = p->mObject.mProperty_mEndOfProcLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_externProcedureDeclarationListAST::cEnumerator_externProcedureDeclarationListAST (const GALGAS_externProcedureDeclarationListAST & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST_2D_element cEnumerator_externProcedureDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_externProcedureDeclarationListAST * p = (const cCollectionElement_externProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externProcedureDeclarationListAST::current_mExternProcedureName (LOCATION_ARGS) const {
  const cCollectionElement_externProcedureDeclarationListAST * p = (const cCollectionElement_externProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mExternProcedureName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode cEnumerator_externProcedureDeclarationListAST::current_mMode (LOCATION_ARGS) const {
  const cCollectionElement_externProcedureDeclarationListAST * p = (const cCollectionElement_externProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineFormalArgumentList cEnumerator_externProcedureDeclarationListAST::current_mProcFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_externProcedureDeclarationListAST * p = (const cCollectionElement_externProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mProcFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externProcedureDeclarationListAST::current_mReturnTypeName (LOCATION_ARGS) const {
  const cCollectionElement_externProcedureDeclarationListAST * p = (const cCollectionElement_externProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mReturnTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externProcedureDeclarationListAST::current_mRoutineNameForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_externProcedureDeclarationListAST * p = (const cCollectionElement_externProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mRoutineNameForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_externProcedureDeclarationListAST::current_mEndOfProcLocation (LOCATION_ARGS) const {
  const cCollectionElement_externProcedureDeclarationListAST * p = (const cCollectionElement_externProcedureDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externProcedureDeclarationListAST) ;
  return p->mObject.mProperty_mEndOfProcLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @externProcedureDeclarationListAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externProcedureDeclarationListAST ("externProcedureDeclarationListAST",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externProcedureDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externProcedureDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externProcedureDeclarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST GALGAS_externProcedureDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureDeclarationListAST result ;
  const GALGAS_externProcedureDeclarationListAST * p = (const GALGAS_externProcedureDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externProcedureDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@isrDeclarationListAST' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_isrDeclarationListAST : public cCollectionElement {
  public : GALGAS_isrDeclarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_isrDeclarationListAST (const GALGAS_lstring & in_mISRName,
                                                     const GALGAS_mode & in_mMode,
                                                     const GALGAS_lstring & in_mModuleName,
                                                     const GALGAS_instructionListAST & in_mISRInstructionList,
                                                     const GALGAS_location & in_mEndOfISRDeclaration
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

cCollectionElement_isrDeclarationListAST::cCollectionElement_isrDeclarationListAST (const GALGAS_lstring & in_mISRName,
                                                                                    const GALGAS_mode & in_mMode,
                                                                                    const GALGAS_lstring & in_mModuleName,
                                                                                    const GALGAS_instructionListAST & in_mISRInstructionList,
                                                                                    const GALGAS_location & in_mEndOfISRDeclaration
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mISRName, in_mMode, in_mModuleName, in_mISRInstructionList, in_mEndOfISRDeclaration) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_isrDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_isrDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_isrDeclarationListAST (mObject.mProperty_mISRName, mObject.mProperty_mMode, mObject.mProperty_mModuleName, mObject.mProperty_mISRInstructionList, mObject.mProperty_mEndOfISRDeclaration COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_isrDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mISRName" ":" ;
  mObject.mProperty_mISRName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMode" ":" ;
  mObject.mProperty_mMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModuleName" ":" ;
  mObject.mProperty_mModuleName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mISRInstructionList" ":" ;
  mObject.mProperty_mISRInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfISRDeclaration" ":" ;
  mObject.mProperty_mEndOfISRDeclaration.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_isrDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_isrDeclarationListAST * operand = (cCollectionElement_isrDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_isrDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST::GALGAS_isrDeclarationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST::GALGAS_isrDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST GALGAS_isrDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_isrDeclarationListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST GALGAS_isrDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_mode & inOperand1,
                                                                                      const GALGAS_lstring & inOperand2,
                                                                                      const GALGAS_instructionListAST & inOperand3,
                                                                                      const GALGAS_location & inOperand4
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_isrDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_isrDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_isrDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_lstring & in_mISRName,
                                                              const GALGAS_mode & in_mMode,
                                                              const GALGAS_lstring & in_mModuleName,
                                                              const GALGAS_instructionListAST & in_mISRInstructionList,
                                                              const GALGAS_location & in_mEndOfISRDeclaration
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_isrDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_isrDeclarationListAST (in_mISRName,
                                                           in_mMode,
                                                           in_mModuleName,
                                                           in_mISRInstructionList,
                                                           in_mEndOfISRDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_mode & inOperand1,
                                                        const GALGAS_lstring & inOperand2,
                                                        const GALGAS_instructionListAST & inOperand3,
                                                        const GALGAS_location & inOperand4
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_isrDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_mode inOperand1,
                                                         const GALGAS_lstring inOperand2,
                                                         const GALGAS_instructionListAST inOperand3,
                                                         const GALGAS_location inOperand4,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_isrDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_mode & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_instructionListAST & outOperand3,
                                                         GALGAS_location & outOperand4,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mISRName ;
      outOperand1 = p->mObject.mProperty_mMode ;
      outOperand2 = p->mObject.mProperty_mModuleName ;
      outOperand3 = p->mObject.mProperty_mISRInstructionList ;
      outOperand4 = p->mObject.mProperty_mEndOfISRDeclaration ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_mode & outOperand1,
                                                    GALGAS_lstring & outOperand2,
                                                    GALGAS_instructionListAST & outOperand3,
                                                    GALGAS_location & outOperand4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mISRName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mModuleName ;
    outOperand3 = p->mObject.mProperty_mISRInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfISRDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_mode & outOperand1,
                                                   GALGAS_lstring & outOperand2,
                                                   GALGAS_instructionListAST & outOperand3,
                                                   GALGAS_location & outOperand4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mISRName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mModuleName ;
    outOperand3 = p->mObject.mProperty_mISRInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfISRDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                 GALGAS_mode & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 GALGAS_instructionListAST & outOperand3,
                                                 GALGAS_location & outOperand4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mISRName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mModuleName ;
    outOperand3 = p->mObject.mProperty_mISRInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfISRDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                GALGAS_mode & outOperand1,
                                                GALGAS_lstring & outOperand2,
                                                GALGAS_instructionListAST & outOperand3,
                                                GALGAS_location & outOperand4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mISRName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mModuleName ;
    outOperand3 = p->mObject.mProperty_mISRInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfISRDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST GALGAS_isrDeclarationListAST::add_operation (const GALGAS_isrDeclarationListAST & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_isrDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST GALGAS_isrDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_isrDeclarationListAST result = GALGAS_isrDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST GALGAS_isrDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_isrDeclarationListAST result = GALGAS_isrDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST GALGAS_isrDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_isrDeclarationListAST result = GALGAS_isrDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST::plusAssign_operation (const GALGAS_isrDeclarationListAST inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_isrDeclarationListAST::getter_mISRNameAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    result = p->mObject.mProperty_mISRName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode GALGAS_isrDeclarationListAST::getter_mModeAtIndex (const GALGAS_uint & inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  GALGAS_mode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    result = p->mObject.mProperty_mMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_isrDeclarationListAST::getter_mModuleNameAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    result = p->mObject.mProperty_mModuleName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_isrDeclarationListAST::getter_mISRInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  GALGAS_instructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    result = p->mObject.mProperty_mISRInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_isrDeclarationListAST::getter_mEndOfISRDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    result = p->mObject.mProperty_mEndOfISRDeclaration ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_isrDeclarationListAST::cEnumerator_isrDeclarationListAST (const GALGAS_isrDeclarationListAST & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST_2D_element cEnumerator_isrDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_isrDeclarationListAST * p = (const cCollectionElement_isrDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_isrDeclarationListAST::current_mISRName (LOCATION_ARGS) const {
  const cCollectionElement_isrDeclarationListAST * p = (const cCollectionElement_isrDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
  return p->mObject.mProperty_mISRName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mode cEnumerator_isrDeclarationListAST::current_mMode (LOCATION_ARGS) const {
  const cCollectionElement_isrDeclarationListAST * p = (const cCollectionElement_isrDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
  return p->mObject.mProperty_mMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_isrDeclarationListAST::current_mModuleName (LOCATION_ARGS) const {
  const cCollectionElement_isrDeclarationListAST * p = (const cCollectionElement_isrDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
  return p->mObject.mProperty_mModuleName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cEnumerator_isrDeclarationListAST::current_mISRInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_isrDeclarationListAST * p = (const cCollectionElement_isrDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
  return p->mObject.mProperty_mISRInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_isrDeclarationListAST::current_mEndOfISRDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_isrDeclarationListAST * p = (const cCollectionElement_isrDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
  return p->mObject.mProperty_mEndOfISRDeclaration ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @isrDeclarationListAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_isrDeclarationListAST ("isrDeclarationListAST",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_isrDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_isrDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_isrDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_isrDeclarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST GALGAS_isrDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_isrDeclarationListAST result ;
  const GALGAS_isrDeclarationListAST * p = (const GALGAS_isrDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_isrDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("isrDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
                                                               const GALGAS_routineFormalArgumentList & in_mFormalArgumentList,
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
                                                                                                        const GALGAS_routineFormalArgumentList & in_mFormalArgumentList,
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
                                                                                                          const GALGAS_routineFormalArgumentList & inOperand4,
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
                                                                        const GALGAS_routineFormalArgumentList & in_mFormalArgumentList,
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
                                                                  const GALGAS_routineFormalArgumentList & inOperand4,
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
                                                                   const GALGAS_routineFormalArgumentList inOperand4,
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
                                                                   GALGAS_routineFormalArgumentList & outOperand4,
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
                                                              GALGAS_routineFormalArgumentList & outOperand4,
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
                                                             GALGAS_routineFormalArgumentList & outOperand4,
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
                                                           GALGAS_routineFormalArgumentList & outOperand4,
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
                                                          GALGAS_routineFormalArgumentList & outOperand4,
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

GALGAS_routineFormalArgumentList GALGAS_systemRoutineDeclarationListAST::getter_mFormalArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_systemRoutineDeclarationListAST * p = (cCollectionElement_systemRoutineDeclarationListAST *) attributes.ptr () ;
  GALGAS_routineFormalArgumentList result ;
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

GALGAS_routineFormalArgumentList cEnumerator_systemRoutineDeclarationListAST::current_mFormalArgumentList (LOCATION_ARGS) const {
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
                                                       const GALGAS_routineFormalArgumentList & in_mGuardFormalArgumentList,
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
                                                                                        const GALGAS_routineFormalArgumentList & in_mGuardFormalArgumentList,
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
                                                                                          const GALGAS_routineFormalArgumentList & inOperand3,
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
                                                                const GALGAS_routineFormalArgumentList & in_mGuardFormalArgumentList,
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
                                                          const GALGAS_routineFormalArgumentList & inOperand3,
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
                                                           const GALGAS_routineFormalArgumentList inOperand3,
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
                                                           GALGAS_routineFormalArgumentList & outOperand3,
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
                                                      GALGAS_routineFormalArgumentList & outOperand3,
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
                                                     GALGAS_routineFormalArgumentList & outOperand3,
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
                                                   GALGAS_routineFormalArgumentList & outOperand3,
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
                                                  GALGAS_routineFormalArgumentList & outOperand3,
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

GALGAS_routineFormalArgumentList GALGAS_guardDeclarationListAST::getter_mGuardFormalArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guardDeclarationListAST * p = (cCollectionElement_guardDeclarationListAST *) attributes.ptr () ;
  GALGAS_routineFormalArgumentList result ;
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

GALGAS_routineFormalArgumentList cEnumerator_guardDeclarationListAST::current_mGuardFormalArgumentList (LOCATION_ARGS) const {
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
//                                                                                                                     *
//                                    Class for element of '@bootList' sorted list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cSortedListElement_bootList : public cSortedListElement {
  public : GALGAS_bootList_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_bootList (const GALGAS_location & in_mBootLocation,
                                        const GALGAS_instructionListAST & in_mInstructionList,
                                        const GALGAS_location & in_mEndOfBootLocation,
                                        const GALGAS_bigint & in_mPriority,
                                        const GALGAS_location & in_mPriorityLocation
                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public : virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement_bootList::cSortedListElement_bootList (const GALGAS_location & in_mBootLocation,
                                                          const GALGAS_instructionListAST & in_mInstructionList,
                                                          const GALGAS_location & in_mEndOfBootLocation,
                                                          const GALGAS_bigint & in_mPriority,
                                                          const GALGAS_location & in_mPriorityLocation
                                                          COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mBootLocation, in_mInstructionList, in_mEndOfBootLocation, in_mPriority, in_mPriorityLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cSortedListElement_bootList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement * cSortedListElement_bootList::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_bootList (mObject.mProperty_mBootLocation, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfBootLocation, mObject.mProperty_mPriority, mObject.mProperty_mPriorityLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cSortedListElement_bootList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBootLocation" ":" ;
  mObject.mProperty_mBootLocation.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfBootLocation" ":" ;
  mObject.mProperty_mEndOfBootLocation.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPriority" ":" ;
  mObject.mProperty_mPriority.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPriorityLocation" ":" ;
  mObject.mProperty_mPriorityLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_bootList::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_bootList * operand = (cSortedListElement_bootList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_bootList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootList::GALGAS_bootList (void) :
AC_GALGAS_sortedlist () {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_bootList::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_bootList * operand = (const cSortedListElement_bootList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_bootList) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mPriority.objectCompare (operand->mObject.mProperty_mPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootList GALGAS_bootList::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_bootList result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootList GALGAS_bootList::constructor_sortedListWithValue (const GALGAS_location & inOperand0,
                                                                  const GALGAS_instructionListAST & inOperand1,
                                                                  const GALGAS_location & inOperand2,
                                                                  const GALGAS_bigint & inOperand3,
                                                                  const GALGAS_location & inOperand4
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_bootList result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_bootList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootList::addAssign_operation (const GALGAS_location & inOperand0,
                                           const GALGAS_instructionListAST & inOperand1,
                                           const GALGAS_location & inOperand2,
                                           const GALGAS_bigint & inOperand3,
                                           const GALGAS_location & inOperand4
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_bootList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootList::plusAssign_operation (const GALGAS_bootList inOperand,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootList::setter_popSmallest (GALGAS_location & outOperand0,
                                          GALGAS_instructionListAST & outOperand1,
                                          GALGAS_location & outOperand2,
                                          GALGAS_bigint & outOperand3,
                                          GALGAS_location & outOperand4,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_bootList * p = (cSortedListElement_bootList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_bootList) ;
    outOperand0 = p->mObject.mProperty_mBootLocation ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfBootLocation ;
    outOperand3 = p->mObject.mProperty_mPriority ;
    outOperand4 = p->mObject.mProperty_mPriorityLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootList::setter_popGreatest (GALGAS_location & outOperand0,
                                          GALGAS_instructionListAST & outOperand1,
                                          GALGAS_location & outOperand2,
                                          GALGAS_bigint & outOperand3,
                                          GALGAS_location & outOperand4,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_bootList * p = (cSortedListElement_bootList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_bootList) ;
    outOperand0 = p->mObject.mProperty_mBootLocation ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfBootLocation ;
    outOperand3 = p->mObject.mProperty_mPriority ;
    outOperand4 = p->mObject.mProperty_mPriorityLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootList::method_smallest (GALGAS_location & outOperand0,
                                       GALGAS_instructionListAST & outOperand1,
                                       GALGAS_location & outOperand2,
                                       GALGAS_bigint & outOperand3,
                                       GALGAS_location & outOperand4,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_bootList * p = (cSortedListElement_bootList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_bootList) ;
    outOperand0 = p->mObject.mProperty_mBootLocation ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfBootLocation ;
    outOperand3 = p->mObject.mProperty_mPriority ;
    outOperand4 = p->mObject.mProperty_mPriorityLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootList::method_greatest (GALGAS_location & outOperand0,
                                       GALGAS_instructionListAST & outOperand1,
                                       GALGAS_location & outOperand2,
                                       GALGAS_bigint & outOperand3,
                                       GALGAS_location & outOperand4,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_bootList * p = (cSortedListElement_bootList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_bootList) ;
    outOperand0 = p->mObject.mProperty_mBootLocation ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfBootLocation ;
    outOperand3 = p->mObject.mProperty_mPriority ;
    outOperand4 = p->mObject.mProperty_mPriorityLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_bootList::cEnumerator_bootList (const GALGAS_bootList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootList_2D_element cEnumerator_bootList::current (LOCATION_ARGS) const {
  const cSortedListElement_bootList * p = (const cSortedListElement_bootList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_bootList) ;
  return p->mObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_bootList::current_mBootLocation (LOCATION_ARGS) const {
  const cSortedListElement_bootList * p = (const cSortedListElement_bootList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_bootList) ;
  return p->mObject.mProperty_mBootLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cEnumerator_bootList::current_mInstructionList (LOCATION_ARGS) const {
  const cSortedListElement_bootList * p = (const cSortedListElement_bootList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_bootList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_bootList::current_mEndOfBootLocation (LOCATION_ARGS) const {
  const cSortedListElement_bootList * p = (const cSortedListElement_bootList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_bootList) ;
  return p->mObject.mProperty_mEndOfBootLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_bootList::current_mPriority (LOCATION_ARGS) const {
  const cSortedListElement_bootList * p = (const cSortedListElement_bootList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_bootList) ;
  return p->mObject.mProperty_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_bootList::current_mPriorityLocation (LOCATION_ARGS) const {
  const cSortedListElement_bootList * p = (const cSortedListElement_bootList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_bootList) ;
  return p->mObject.mProperty_mPriorityLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @bootList type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bootList ("bootList",
                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bootList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bootList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bootList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootList GALGAS_bootList::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_bootList result ;
  const GALGAS_bootList * p = (const GALGAS_bootList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bootList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bootList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@initList' sorted list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cSortedListElement_initList : public cSortedListElement {
  public : GALGAS_initList_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_initList (const GALGAS_location & in_mInitLocation,
                                        const GALGAS_lstring & in_mSelfTypeName,
                                        const GALGAS_string & in_mGlobalVarName,
                                        const GALGAS_instructionListAST & in_mInstructionList,
                                        const GALGAS_location & in_mEndOfInitLocation,
                                        const GALGAS_lbigint & in_mPriority
                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public : virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement_initList::cSortedListElement_initList (const GALGAS_location & in_mInitLocation,
                                                          const GALGAS_lstring & in_mSelfTypeName,
                                                          const GALGAS_string & in_mGlobalVarName,
                                                          const GALGAS_instructionListAST & in_mInstructionList,
                                                          const GALGAS_location & in_mEndOfInitLocation,
                                                          const GALGAS_lbigint & in_mPriority
                                                          COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mInitLocation, in_mSelfTypeName, in_mGlobalVarName, in_mInstructionList, in_mEndOfInitLocation, in_mPriority) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cSortedListElement_initList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement * cSortedListElement_initList::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_initList (mObject.mProperty_mInitLocation, mObject.mProperty_mSelfTypeName, mObject.mProperty_mGlobalVarName, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfInitLocation, mObject.mProperty_mPriority COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cSortedListElement_initList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitLocation" ":" ;
  mObject.mProperty_mInitLocation.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelfTypeName" ":" ;
  mObject.mProperty_mSelfTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGlobalVarName" ":" ;
  mObject.mProperty_mGlobalVarName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfInitLocation" ":" ;
  mObject.mProperty_mEndOfInitLocation.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPriority" ":" ;
  mObject.mProperty_mPriority.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_initList::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_initList * operand = (cSortedListElement_initList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_initList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList::GALGAS_initList (void) :
AC_GALGAS_sortedlist () {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_initList::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_initList * operand = (const cSortedListElement_initList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_initList) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mPriority.objectCompare (operand->mObject.mProperty_mPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList GALGAS_initList::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_initList result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList GALGAS_initList::constructor_sortedListWithValue (const GALGAS_location & inOperand0,
                                                                  const GALGAS_lstring & inOperand1,
                                                                  const GALGAS_string & inOperand2,
                                                                  const GALGAS_instructionListAST & inOperand3,
                                                                  const GALGAS_location & inOperand4,
                                                                  const GALGAS_lbigint & inOperand5
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_initList result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_initList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initList::addAssign_operation (const GALGAS_location & inOperand0,
                                           const GALGAS_lstring & inOperand1,
                                           const GALGAS_string & inOperand2,
                                           const GALGAS_instructionListAST & inOperand3,
                                           const GALGAS_location & inOperand4,
                                           const GALGAS_lbigint & inOperand5
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_initList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initList::plusAssign_operation (const GALGAS_initList inOperand,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initList::setter_popSmallest (GALGAS_location & outOperand0,
                                          GALGAS_lstring & outOperand1,
                                          GALGAS_string & outOperand2,
                                          GALGAS_instructionListAST & outOperand3,
                                          GALGAS_location & outOperand4,
                                          GALGAS_lbigint & outOperand5,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_initList * p = (cSortedListElement_initList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_initList) ;
    outOperand0 = p->mObject.mProperty_mInitLocation ;
    outOperand1 = p->mObject.mProperty_mSelfTypeName ;
    outOperand2 = p->mObject.mProperty_mGlobalVarName ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfInitLocation ;
    outOperand5 = p->mObject.mProperty_mPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initList::setter_popGreatest (GALGAS_location & outOperand0,
                                          GALGAS_lstring & outOperand1,
                                          GALGAS_string & outOperand2,
                                          GALGAS_instructionListAST & outOperand3,
                                          GALGAS_location & outOperand4,
                                          GALGAS_lbigint & outOperand5,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_initList * p = (cSortedListElement_initList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_initList) ;
    outOperand0 = p->mObject.mProperty_mInitLocation ;
    outOperand1 = p->mObject.mProperty_mSelfTypeName ;
    outOperand2 = p->mObject.mProperty_mGlobalVarName ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfInitLocation ;
    outOperand5 = p->mObject.mProperty_mPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initList::method_smallest (GALGAS_location & outOperand0,
                                       GALGAS_lstring & outOperand1,
                                       GALGAS_string & outOperand2,
                                       GALGAS_instructionListAST & outOperand3,
                                       GALGAS_location & outOperand4,
                                       GALGAS_lbigint & outOperand5,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_initList * p = (cSortedListElement_initList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_initList) ;
    outOperand0 = p->mObject.mProperty_mInitLocation ;
    outOperand1 = p->mObject.mProperty_mSelfTypeName ;
    outOperand2 = p->mObject.mProperty_mGlobalVarName ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfInitLocation ;
    outOperand5 = p->mObject.mProperty_mPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initList::method_greatest (GALGAS_location & outOperand0,
                                       GALGAS_lstring & outOperand1,
                                       GALGAS_string & outOperand2,
                                       GALGAS_instructionListAST & outOperand3,
                                       GALGAS_location & outOperand4,
                                       GALGAS_lbigint & outOperand5,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_initList * p = (cSortedListElement_initList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_initList) ;
    outOperand0 = p->mObject.mProperty_mInitLocation ;
    outOperand1 = p->mObject.mProperty_mSelfTypeName ;
    outOperand2 = p->mObject.mProperty_mGlobalVarName ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfInitLocation ;
    outOperand5 = p->mObject.mProperty_mPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_initList::cEnumerator_initList (const GALGAS_initList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList_2D_element cEnumerator_initList::current (LOCATION_ARGS) const {
  const cSortedListElement_initList * p = (const cSortedListElement_initList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_initList) ;
  return p->mObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_initList::current_mInitLocation (LOCATION_ARGS) const {
  const cSortedListElement_initList * p = (const cSortedListElement_initList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_initList) ;
  return p->mObject.mProperty_mInitLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_initList::current_mSelfTypeName (LOCATION_ARGS) const {
  const cSortedListElement_initList * p = (const cSortedListElement_initList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_initList) ;
  return p->mObject.mProperty_mSelfTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_initList::current_mGlobalVarName (LOCATION_ARGS) const {
  const cSortedListElement_initList * p = (const cSortedListElement_initList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_initList) ;
  return p->mObject.mProperty_mGlobalVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cEnumerator_initList::current_mInstructionList (LOCATION_ARGS) const {
  const cSortedListElement_initList * p = (const cSortedListElement_initList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_initList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_initList::current_mEndOfInitLocation (LOCATION_ARGS) const {
  const cSortedListElement_initList * p = (const cSortedListElement_initList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_initList) ;
  return p->mObject.mProperty_mEndOfInitLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cEnumerator_initList::current_mPriority (LOCATION_ARGS) const {
  const cSortedListElement_initList * p = (const cSortedListElement_initList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_initList) ;
  return p->mObject.mProperty_mPriority ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @initList type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initList ("initList",
                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList GALGAS_initList::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_initList result ;
  const GALGAS_initList * p = (const GALGAS_initList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@panicClauseListAST' sorted list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cSortedListElement_panicClauseListAST : public cSortedListElement {
  public : GALGAS_panicClauseListAST_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_panicClauseListAST (const GALGAS_bool & in_mIsSetup,
                                                  const GALGAS_instructionListAST & in_mPanicInstructionList,
                                                  const GALGAS_location & in_mEndOfPanicInstructions,
                                                  const GALGAS_lbigint & in_mPriority
                                                  COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public : virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement_panicClauseListAST::cSortedListElement_panicClauseListAST (const GALGAS_bool & in_mIsSetup,
                                                                              const GALGAS_instructionListAST & in_mPanicInstructionList,
                                                                              const GALGAS_location & in_mEndOfPanicInstructions,
                                                                              const GALGAS_lbigint & in_mPriority
                                                                              COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mIsSetup, in_mPanicInstructionList, in_mEndOfPanicInstructions, in_mPriority) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cSortedListElement_panicClauseListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement * cSortedListElement_panicClauseListAST::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_panicClauseListAST (mObject.mProperty_mIsSetup, mObject.mProperty_mPanicInstructionList, mObject.mProperty_mEndOfPanicInstructions, mObject.mProperty_mPriority COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cSortedListElement_panicClauseListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsSetup" ":" ;
  mObject.mProperty_mIsSetup.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPanicInstructionList" ":" ;
  mObject.mProperty_mPanicInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfPanicInstructions" ":" ;
  mObject.mProperty_mEndOfPanicInstructions.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPriority" ":" ;
  mObject.mProperty_mPriority.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_panicClauseListAST::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_panicClauseListAST * operand = (cSortedListElement_panicClauseListAST *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_panicClauseListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicClauseListAST::GALGAS_panicClauseListAST (void) :
AC_GALGAS_sortedlist () {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_panicClauseListAST::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_panicClauseListAST * operand = (const cSortedListElement_panicClauseListAST *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_panicClauseListAST) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mPriority.objectCompare (operand->mObject.mProperty_mPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicClauseListAST GALGAS_panicClauseListAST::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_panicClauseListAST result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicClauseListAST GALGAS_panicClauseListAST::constructor_sortedListWithValue (const GALGAS_bool & inOperand0,
                                                                                      const GALGAS_instructionListAST & inOperand1,
                                                                                      const GALGAS_location & inOperand2,
                                                                                      const GALGAS_lbigint & inOperand3
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_panicClauseListAST result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_panicClauseListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicClauseListAST::addAssign_operation (const GALGAS_bool & inOperand0,
                                                     const GALGAS_instructionListAST & inOperand1,
                                                     const GALGAS_location & inOperand2,
                                                     const GALGAS_lbigint & inOperand3
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_panicClauseListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicClauseListAST::plusAssign_operation (const GALGAS_panicClauseListAST inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicClauseListAST::setter_popSmallest (GALGAS_bool & outOperand0,
                                                    GALGAS_instructionListAST & outOperand1,
                                                    GALGAS_location & outOperand2,
                                                    GALGAS_lbigint & outOperand3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_panicClauseListAST * p = (cSortedListElement_panicClauseListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_panicClauseListAST) ;
    outOperand0 = p->mObject.mProperty_mIsSetup ;
    outOperand1 = p->mObject.mProperty_mPanicInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPanicInstructions ;
    outOperand3 = p->mObject.mProperty_mPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicClauseListAST::setter_popGreatest (GALGAS_bool & outOperand0,
                                                    GALGAS_instructionListAST & outOperand1,
                                                    GALGAS_location & outOperand2,
                                                    GALGAS_lbigint & outOperand3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_panicClauseListAST * p = (cSortedListElement_panicClauseListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_panicClauseListAST) ;
    outOperand0 = p->mObject.mProperty_mIsSetup ;
    outOperand1 = p->mObject.mProperty_mPanicInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPanicInstructions ;
    outOperand3 = p->mObject.mProperty_mPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicClauseListAST::method_smallest (GALGAS_bool & outOperand0,
                                                 GALGAS_instructionListAST & outOperand1,
                                                 GALGAS_location & outOperand2,
                                                 GALGAS_lbigint & outOperand3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_panicClauseListAST * p = (cSortedListElement_panicClauseListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_panicClauseListAST) ;
    outOperand0 = p->mObject.mProperty_mIsSetup ;
    outOperand1 = p->mObject.mProperty_mPanicInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPanicInstructions ;
    outOperand3 = p->mObject.mProperty_mPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicClauseListAST::method_greatest (GALGAS_bool & outOperand0,
                                                 GALGAS_instructionListAST & outOperand1,
                                                 GALGAS_location & outOperand2,
                                                 GALGAS_lbigint & outOperand3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_panicClauseListAST * p = (cSortedListElement_panicClauseListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_panicClauseListAST) ;
    outOperand0 = p->mObject.mProperty_mIsSetup ;
    outOperand1 = p->mObject.mProperty_mPanicInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPanicInstructions ;
    outOperand3 = p->mObject.mProperty_mPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_panicClauseListAST::cEnumerator_panicClauseListAST (const GALGAS_panicClauseListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicClauseListAST_2D_element cEnumerator_panicClauseListAST::current (LOCATION_ARGS) const {
  const cSortedListElement_panicClauseListAST * p = (const cSortedListElement_panicClauseListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_panicClauseListAST) ;
  return p->mObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_panicClauseListAST::current_mIsSetup (LOCATION_ARGS) const {
  const cSortedListElement_panicClauseListAST * p = (const cSortedListElement_panicClauseListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_panicClauseListAST) ;
  return p->mObject.mProperty_mIsSetup ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cEnumerator_panicClauseListAST::current_mPanicInstructionList (LOCATION_ARGS) const {
  const cSortedListElement_panicClauseListAST * p = (const cSortedListElement_panicClauseListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_panicClauseListAST) ;
  return p->mObject.mProperty_mPanicInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_panicClauseListAST::current_mEndOfPanicInstructions (LOCATION_ARGS) const {
  const cSortedListElement_panicClauseListAST * p = (const cSortedListElement_panicClauseListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_panicClauseListAST) ;
  return p->mObject.mProperty_mEndOfPanicInstructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cEnumerator_panicClauseListAST::current_mPriority (LOCATION_ARGS) const {
  const cSortedListElement_panicClauseListAST * p = (const cSortedListElement_panicClauseListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_panicClauseListAST) ;
  return p->mObject.mProperty_mPriority ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @panicClauseListAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_panicClauseListAST ("panicClauseListAST",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_panicClauseListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicClauseListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_panicClauseListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicClauseListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicClauseListAST GALGAS_panicClauseListAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_panicClauseListAST result ;
  const GALGAS_panicClauseListAST * p = (const GALGAS_panicClauseListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_panicClauseListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicClauseListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Class for element of '@taskList' list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_taskList : public cCollectionElement {
  public : GALGAS_taskList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_taskList (const GALGAS_lstring & in_mTaskName,
                                        const GALGAS_lbigint & in_mPriority,
                                        const GALGAS_lbigint & in_mStackSize,
                                        const GALGAS_structurePropertyListAST & in_mVarList,
                                        const GALGAS_functionDeclarationListAST & in_mTaskProcList,
                                        const GALGAS_taskInitListAST & in_mTaskInitListAST,
                                        const GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                        const GALGAS_location & in_mEndOfTaskDeclaration
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

cCollectionElement_taskList::cCollectionElement_taskList (const GALGAS_lstring & in_mTaskName,
                                                          const GALGAS_lbigint & in_mPriority,
                                                          const GALGAS_lbigint & in_mStackSize,
                                                          const GALGAS_structurePropertyListAST & in_mVarList,
                                                          const GALGAS_functionDeclarationListAST & in_mTaskProcList,
                                                          const GALGAS_taskInitListAST & in_mTaskInitListAST,
                                                          const GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                          const GALGAS_location & in_mEndOfTaskDeclaration
                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTaskName, in_mPriority, in_mStackSize, in_mVarList, in_mTaskProcList, in_mTaskInitListAST, in_mGuardedCommandList, in_mEndOfTaskDeclaration) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_taskList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_taskList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_taskList (mObject.mProperty_mTaskName, mObject.mProperty_mPriority, mObject.mProperty_mStackSize, mObject.mProperty_mVarList, mObject.mProperty_mTaskProcList, mObject.mProperty_mTaskInitListAST, mObject.mProperty_mGuardedCommandList, mObject.mProperty_mEndOfTaskDeclaration COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_taskList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskName" ":" ;
  mObject.mProperty_mTaskName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPriority" ":" ;
  mObject.mProperty_mPriority.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStackSize" ":" ;
  mObject.mProperty_mStackSize.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mVarList" ":" ;
  mObject.mProperty_mVarList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskProcList" ":" ;
  mObject.mProperty_mTaskProcList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskInitListAST" ":" ;
  mObject.mProperty_mTaskInitListAST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuardedCommandList" ":" ;
  mObject.mProperty_mGuardedCommandList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfTaskDeclaration" ":" ;
  mObject.mProperty_mEndOfTaskDeclaration.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_taskList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_taskList * operand = (cCollectionElement_taskList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_taskList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList::GALGAS_taskList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList::GALGAS_taskList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList GALGAS_taskList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList GALGAS_taskList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_lbigint & inOperand1,
                                                            const GALGAS_lbigint & inOperand2,
                                                            const GALGAS_structurePropertyListAST & inOperand3,
                                                            const GALGAS_functionDeclarationListAST & inOperand4,
                                                            const GALGAS_taskInitListAST & inOperand5,
                                                            const GALGAS_syncInstructionBranchListAST & inOperand6,
                                                            const GALGAS_location & inOperand7
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_taskList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_taskList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_taskList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const GALGAS_lstring & in_mTaskName,
                                                 const GALGAS_lbigint & in_mPriority,
                                                 const GALGAS_lbigint & in_mStackSize,
                                                 const GALGAS_structurePropertyListAST & in_mVarList,
                                                 const GALGAS_functionDeclarationListAST & in_mTaskProcList,
                                                 const GALGAS_taskInitListAST & in_mTaskInitListAST,
                                                 const GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                 const GALGAS_location & in_mEndOfTaskDeclaration
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_taskList * p = NULL ;
  macroMyNew (p, cCollectionElement_taskList (in_mTaskName,
                                              in_mPriority,
                                              in_mStackSize,
                                              in_mVarList,
                                              in_mTaskProcList,
                                              in_mTaskInitListAST,
                                              in_mGuardedCommandList,
                                              in_mEndOfTaskDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                           const GALGAS_lbigint & inOperand1,
                                           const GALGAS_lbigint & inOperand2,
                                           const GALGAS_structurePropertyListAST & inOperand3,
                                           const GALGAS_functionDeclarationListAST & inOperand4,
                                           const GALGAS_taskInitListAST & inOperand5,
                                           const GALGAS_syncInstructionBranchListAST & inOperand6,
                                           const GALGAS_location & inOperand7
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_taskList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                            const GALGAS_lbigint inOperand1,
                                            const GALGAS_lbigint inOperand2,
                                            const GALGAS_structurePropertyListAST inOperand3,
                                            const GALGAS_functionDeclarationListAST inOperand4,
                                            const GALGAS_taskInitListAST inOperand5,
                                            const GALGAS_syncInstructionBranchListAST inOperand6,
                                            const GALGAS_location inOperand7,
                                            const GALGAS_uint inInsertionIndex,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_taskList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                            GALGAS_lbigint & outOperand1,
                                            GALGAS_lbigint & outOperand2,
                                            GALGAS_structurePropertyListAST & outOperand3,
                                            GALGAS_functionDeclarationListAST & outOperand4,
                                            GALGAS_taskInitListAST & outOperand5,
                                            GALGAS_syncInstructionBranchListAST & outOperand6,
                                            GALGAS_location & outOperand7,
                                            const GALGAS_uint inRemoveIndex,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_taskList * p = (cCollectionElement_taskList *) attributes.ptr () ;
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
      macroValidSharedObject (p, cCollectionElement_taskList) ;
      outOperand0 = p->mObject.mProperty_mTaskName ;
      outOperand1 = p->mObject.mProperty_mPriority ;
      outOperand2 = p->mObject.mProperty_mStackSize ;
      outOperand3 = p->mObject.mProperty_mVarList ;
      outOperand4 = p->mObject.mProperty_mTaskProcList ;
      outOperand5 = p->mObject.mProperty_mTaskInitListAST ;
      outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
      outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskList::setter_popFirst (GALGAS_lstring & outOperand0,
                                       GALGAS_lbigint & outOperand1,
                                       GALGAS_lbigint & outOperand2,
                                       GALGAS_structurePropertyListAST & outOperand3,
                                       GALGAS_functionDeclarationListAST & outOperand4,
                                       GALGAS_taskInitListAST & outOperand5,
                                       GALGAS_syncInstructionBranchListAST & outOperand6,
                                       GALGAS_location & outOperand7,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskList * p = (cCollectionElement_taskList *) attributes.ptr () ;
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
    macroValidSharedObject (p, cCollectionElement_taskList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mPriority ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mVarList ;
    outOperand4 = p->mObject.mProperty_mTaskProcList ;
    outOperand5 = p->mObject.mProperty_mTaskInitListAST ;
    outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskList::setter_popLast (GALGAS_lstring & outOperand0,
                                      GALGAS_lbigint & outOperand1,
                                      GALGAS_lbigint & outOperand2,
                                      GALGAS_structurePropertyListAST & outOperand3,
                                      GALGAS_functionDeclarationListAST & outOperand4,
                                      GALGAS_taskInitListAST & outOperand5,
                                      GALGAS_syncInstructionBranchListAST & outOperand6,
                                      GALGAS_location & outOperand7,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskList * p = (cCollectionElement_taskList *) attributes.ptr () ;
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
    macroValidSharedObject (p, cCollectionElement_taskList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mPriority ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mVarList ;
    outOperand4 = p->mObject.mProperty_mTaskProcList ;
    outOperand5 = p->mObject.mProperty_mTaskInitListAST ;
    outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskList::method_first (GALGAS_lstring & outOperand0,
                                    GALGAS_lbigint & outOperand1,
                                    GALGAS_lbigint & outOperand2,
                                    GALGAS_structurePropertyListAST & outOperand3,
                                    GALGAS_functionDeclarationListAST & outOperand4,
                                    GALGAS_taskInitListAST & outOperand5,
                                    GALGAS_syncInstructionBranchListAST & outOperand6,
                                    GALGAS_location & outOperand7,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskList * p = (cCollectionElement_taskList *) attributes.ptr () ;
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
    macroValidSharedObject (p, cCollectionElement_taskList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mPriority ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mVarList ;
    outOperand4 = p->mObject.mProperty_mTaskProcList ;
    outOperand5 = p->mObject.mProperty_mTaskInitListAST ;
    outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskList::method_last (GALGAS_lstring & outOperand0,
                                   GALGAS_lbigint & outOperand1,
                                   GALGAS_lbigint & outOperand2,
                                   GALGAS_structurePropertyListAST & outOperand3,
                                   GALGAS_functionDeclarationListAST & outOperand4,
                                   GALGAS_taskInitListAST & outOperand5,
                                   GALGAS_syncInstructionBranchListAST & outOperand6,
                                   GALGAS_location & outOperand7,
                                   C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskList * p = (cCollectionElement_taskList *) attributes.ptr () ;
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
    macroValidSharedObject (p, cCollectionElement_taskList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mPriority ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mVarList ;
    outOperand4 = p->mObject.mProperty_mTaskProcList ;
    outOperand5 = p->mObject.mProperty_mTaskInitListAST ;
    outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList GALGAS_taskList::add_operation (const GALGAS_taskList & inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_taskList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList GALGAS_taskList::getter_subListWithRange (const GALGAS_range & inRange,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_taskList result = GALGAS_taskList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList GALGAS_taskList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_taskList result = GALGAS_taskList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList GALGAS_taskList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_taskList result = GALGAS_taskList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskList::plusAssign_operation (const GALGAS_taskList inOperand,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_taskList::getter_mTaskNameAtIndex (const GALGAS_uint & inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskList * p = (cCollectionElement_taskList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskList) ;
    result = p->mObject.mProperty_mTaskName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_taskList::getter_mPriorityAtIndex (const GALGAS_uint & inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskList * p = (cCollectionElement_taskList *) attributes.ptr () ;
  GALGAS_lbigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskList) ;
    result = p->mObject.mProperty_mPriority ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_taskList::getter_mStackSizeAtIndex (const GALGAS_uint & inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskList * p = (cCollectionElement_taskList *) attributes.ptr () ;
  GALGAS_lbigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskList) ;
    result = p->mObject.mProperty_mStackSize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST GALGAS_taskList::getter_mVarListAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskList * p = (cCollectionElement_taskList *) attributes.ptr () ;
  GALGAS_structurePropertyListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskList) ;
    result = p->mObject.mProperty_mVarList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_taskList::getter_mTaskProcListAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskList * p = (cCollectionElement_taskList *) attributes.ptr () ;
  GALGAS_functionDeclarationListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskList) ;
    result = p->mObject.mProperty_mTaskProcList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST GALGAS_taskList::getter_mTaskInitListASTAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskList * p = (cCollectionElement_taskList *) attributes.ptr () ;
  GALGAS_taskInitListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskList) ;
    result = p->mObject.mProperty_mTaskInitListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListAST GALGAS_taskList::getter_mGuardedCommandListAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskList * p = (cCollectionElement_taskList *) attributes.ptr () ;
  GALGAS_syncInstructionBranchListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskList) ;
    result = p->mObject.mProperty_mGuardedCommandList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_taskList::getter_mEndOfTaskDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskList * p = (cCollectionElement_taskList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskList) ;
    result = p->mObject.mProperty_mEndOfTaskDeclaration ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_taskList::cEnumerator_taskList (const GALGAS_taskList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList_2D_element cEnumerator_taskList::current (LOCATION_ARGS) const {
  const cCollectionElement_taskList * p = (const cCollectionElement_taskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_taskList::current_mTaskName (LOCATION_ARGS) const {
  const cCollectionElement_taskList * p = (const cCollectionElement_taskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskList) ;
  return p->mObject.mProperty_mTaskName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cEnumerator_taskList::current_mPriority (LOCATION_ARGS) const {
  const cCollectionElement_taskList * p = (const cCollectionElement_taskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskList) ;
  return p->mObject.mProperty_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cEnumerator_taskList::current_mStackSize (LOCATION_ARGS) const {
  const cCollectionElement_taskList * p = (const cCollectionElement_taskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskList) ;
  return p->mObject.mProperty_mStackSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST cEnumerator_taskList::current_mVarList (LOCATION_ARGS) const {
  const cCollectionElement_taskList * p = (const cCollectionElement_taskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskList) ;
  return p->mObject.mProperty_mVarList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST cEnumerator_taskList::current_mTaskProcList (LOCATION_ARGS) const {
  const cCollectionElement_taskList * p = (const cCollectionElement_taskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskList) ;
  return p->mObject.mProperty_mTaskProcList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST cEnumerator_taskList::current_mTaskInitListAST (LOCATION_ARGS) const {
  const cCollectionElement_taskList * p = (const cCollectionElement_taskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskList) ;
  return p->mObject.mProperty_mTaskInitListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListAST cEnumerator_taskList::current_mGuardedCommandList (LOCATION_ARGS) const {
  const cCollectionElement_taskList * p = (const cCollectionElement_taskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskList) ;
  return p->mObject.mProperty_mGuardedCommandList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_taskList::current_mEndOfTaskDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_taskList * p = (const cCollectionElement_taskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskList) ;
  return p->mObject.mProperty_mEndOfTaskDeclaration ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @taskList type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskList ("taskList",
                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList GALGAS_taskList::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_taskList result ;
  const GALGAS_taskList * p = (const GALGAS_taskList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@moduleDeclarationListAST' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_moduleDeclarationListAST : public cCollectionElement {
  public : GALGAS_moduleDeclarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_moduleDeclarationListAST (const GALGAS_moduleDeclarationAST & in_mModule
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

cCollectionElement_moduleDeclarationListAST::cCollectionElement_moduleDeclarationListAST (const GALGAS_moduleDeclarationAST & in_mModule
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mModule) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_moduleDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_moduleDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_moduleDeclarationListAST (mObject.mProperty_mModule COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_moduleDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModule" ":" ;
  mObject.mProperty_mModule.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_moduleDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_moduleDeclarationListAST * operand = (cCollectionElement_moduleDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_moduleDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationListAST::GALGAS_moduleDeclarationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationListAST::GALGAS_moduleDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationListAST GALGAS_moduleDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_moduleDeclarationListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationListAST GALGAS_moduleDeclarationListAST::constructor_listWithValue (const GALGAS_moduleDeclarationAST & inOperand0
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_moduleDeclarationListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_moduleDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_moduleDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_moduleDeclarationAST & in_mModule
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_moduleDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_moduleDeclarationListAST (in_mModule COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleDeclarationListAST::addAssign_operation (const GALGAS_moduleDeclarationAST & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_moduleDeclarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleDeclarationListAST::setter_insertAtIndex (const GALGAS_moduleDeclarationAST inOperand0,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_moduleDeclarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleDeclarationListAST::setter_removeAtIndex (GALGAS_moduleDeclarationAST & outOperand0,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_moduleDeclarationListAST * p = (cCollectionElement_moduleDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_moduleDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mModule ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleDeclarationListAST::setter_popFirst (GALGAS_moduleDeclarationAST & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_moduleDeclarationListAST * p = (cCollectionElement_moduleDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_moduleDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mModule ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleDeclarationListAST::setter_popLast (GALGAS_moduleDeclarationAST & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_moduleDeclarationListAST * p = (cCollectionElement_moduleDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_moduleDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mModule ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleDeclarationListAST::method_first (GALGAS_moduleDeclarationAST & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_moduleDeclarationListAST * p = (cCollectionElement_moduleDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_moduleDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mModule ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleDeclarationListAST::method_last (GALGAS_moduleDeclarationAST & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_moduleDeclarationListAST * p = (cCollectionElement_moduleDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_moduleDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mModule ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationListAST GALGAS_moduleDeclarationListAST::add_operation (const GALGAS_moduleDeclarationListAST & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_moduleDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationListAST GALGAS_moduleDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_moduleDeclarationListAST result = GALGAS_moduleDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationListAST GALGAS_moduleDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_moduleDeclarationListAST result = GALGAS_moduleDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationListAST GALGAS_moduleDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_moduleDeclarationListAST result = GALGAS_moduleDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleDeclarationListAST::plusAssign_operation (const GALGAS_moduleDeclarationListAST inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationAST GALGAS_moduleDeclarationListAST::getter_mModuleAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_moduleDeclarationListAST * p = (cCollectionElement_moduleDeclarationListAST *) attributes.ptr () ;
  GALGAS_moduleDeclarationAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_moduleDeclarationListAST) ;
    result = p->mObject.mProperty_mModule ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_moduleDeclarationListAST::cEnumerator_moduleDeclarationListAST (const GALGAS_moduleDeclarationListAST & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationListAST_2D_element cEnumerator_moduleDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_moduleDeclarationListAST * p = (const cCollectionElement_moduleDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_moduleDeclarationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationAST cEnumerator_moduleDeclarationListAST::current_mModule (LOCATION_ARGS) const {
  const cCollectionElement_moduleDeclarationListAST * p = (const cCollectionElement_moduleDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_moduleDeclarationListAST) ;
  return p->mObject.mProperty_mModule ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @moduleDeclarationListAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduleDeclarationListAST ("moduleDeclarationListAST",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_moduleDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduleDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_moduleDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduleDeclarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationListAST GALGAS_moduleDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_moduleDeclarationListAST result ;
  const GALGAS_moduleDeclarationListAST * p = (const GALGAS_moduleDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduleDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduleDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@moduleInstanciationListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_moduleInstanciationListAST : public cCollectionElement {
  public : GALGAS_moduleInstanciationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_moduleInstanciationListAST (const GALGAS_lstring & in_mModuleName,
                                                          const GALGAS_moduleInstanciationArgumentListAST & in_mModuleInstanciationArgumentList
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

cCollectionElement_moduleInstanciationListAST::cCollectionElement_moduleInstanciationListAST (const GALGAS_lstring & in_mModuleName,
                                                                                              const GALGAS_moduleInstanciationArgumentListAST & in_mModuleInstanciationArgumentList
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mModuleName, in_mModuleInstanciationArgumentList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_moduleInstanciationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_moduleInstanciationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_moduleInstanciationListAST (mObject.mProperty_mModuleName, mObject.mProperty_mModuleInstanciationArgumentList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_moduleInstanciationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModuleName" ":" ;
  mObject.mProperty_mModuleName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModuleInstanciationArgumentList" ":" ;
  mObject.mProperty_mModuleInstanciationArgumentList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_moduleInstanciationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_moduleInstanciationListAST * operand = (cCollectionElement_moduleInstanciationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_moduleInstanciationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationListAST::GALGAS_moduleInstanciationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationListAST::GALGAS_moduleInstanciationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationListAST GALGAS_moduleInstanciationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_moduleInstanciationListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationListAST GALGAS_moduleInstanciationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_moduleInstanciationArgumentListAST & inOperand1
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_moduleInstanciationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_moduleInstanciationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_moduleInstanciationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lstring & in_mModuleName,
                                                                   const GALGAS_moduleInstanciationArgumentListAST & in_mModuleInstanciationArgumentList
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_moduleInstanciationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_moduleInstanciationListAST (in_mModuleName,
                                                                in_mModuleInstanciationArgumentList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_moduleInstanciationArgumentListAST & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_moduleInstanciationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                              const GALGAS_moduleInstanciationArgumentListAST inOperand1,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_moduleInstanciationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                              GALGAS_moduleInstanciationArgumentListAST & outOperand1,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_moduleInstanciationListAST * p = (cCollectionElement_moduleInstanciationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_moduleInstanciationListAST) ;
      outOperand0 = p->mObject.mProperty_mModuleName ;
      outOperand1 = p->mObject.mProperty_mModuleInstanciationArgumentList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                         GALGAS_moduleInstanciationArgumentListAST & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_moduleInstanciationListAST * p = (cCollectionElement_moduleInstanciationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_moduleInstanciationListAST) ;
    outOperand0 = p->mObject.mProperty_mModuleName ;
    outOperand1 = p->mObject.mProperty_mModuleInstanciationArgumentList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                        GALGAS_moduleInstanciationArgumentListAST & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_moduleInstanciationListAST * p = (cCollectionElement_moduleInstanciationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_moduleInstanciationListAST) ;
    outOperand0 = p->mObject.mProperty_mModuleName ;
    outOperand1 = p->mObject.mProperty_mModuleInstanciationArgumentList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationListAST::method_first (GALGAS_lstring & outOperand0,
                                                      GALGAS_moduleInstanciationArgumentListAST & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_moduleInstanciationListAST * p = (cCollectionElement_moduleInstanciationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_moduleInstanciationListAST) ;
    outOperand0 = p->mObject.mProperty_mModuleName ;
    outOperand1 = p->mObject.mProperty_mModuleInstanciationArgumentList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationListAST::method_last (GALGAS_lstring & outOperand0,
                                                     GALGAS_moduleInstanciationArgumentListAST & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_moduleInstanciationListAST * p = (cCollectionElement_moduleInstanciationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_moduleInstanciationListAST) ;
    outOperand0 = p->mObject.mProperty_mModuleName ;
    outOperand1 = p->mObject.mProperty_mModuleInstanciationArgumentList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationListAST GALGAS_moduleInstanciationListAST::add_operation (const GALGAS_moduleInstanciationListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_moduleInstanciationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationListAST GALGAS_moduleInstanciationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_moduleInstanciationListAST result = GALGAS_moduleInstanciationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationListAST GALGAS_moduleInstanciationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_moduleInstanciationListAST result = GALGAS_moduleInstanciationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationListAST GALGAS_moduleInstanciationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_moduleInstanciationListAST result = GALGAS_moduleInstanciationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationListAST::plusAssign_operation (const GALGAS_moduleInstanciationListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_moduleInstanciationListAST::getter_mModuleNameAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_moduleInstanciationListAST * p = (cCollectionElement_moduleInstanciationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_moduleInstanciationListAST) ;
    result = p->mObject.mProperty_mModuleName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentListAST GALGAS_moduleInstanciationListAST::getter_mModuleInstanciationArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                             C_Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_moduleInstanciationListAST * p = (cCollectionElement_moduleInstanciationListAST *) attributes.ptr () ;
  GALGAS_moduleInstanciationArgumentListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_moduleInstanciationListAST) ;
    result = p->mObject.mProperty_mModuleInstanciationArgumentList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_moduleInstanciationListAST::cEnumerator_moduleInstanciationListAST (const GALGAS_moduleInstanciationListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationListAST_2D_element cEnumerator_moduleInstanciationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_moduleInstanciationListAST * p = (const cCollectionElement_moduleInstanciationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_moduleInstanciationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_moduleInstanciationListAST::current_mModuleName (LOCATION_ARGS) const {
  const cCollectionElement_moduleInstanciationListAST * p = (const cCollectionElement_moduleInstanciationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_moduleInstanciationListAST) ;
  return p->mObject.mProperty_mModuleName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentListAST cEnumerator_moduleInstanciationListAST::current_mModuleInstanciationArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_moduleInstanciationListAST * p = (const cCollectionElement_moduleInstanciationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_moduleInstanciationListAST) ;
  return p->mObject.mProperty_mModuleInstanciationArgumentList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @moduleInstanciationListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduleInstanciationListAST ("moduleInstanciationListAST",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_moduleInstanciationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduleInstanciationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_moduleInstanciationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduleInstanciationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationListAST GALGAS_moduleInstanciationListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_moduleInstanciationListAST result ;
  const GALGAS_moduleInstanciationListAST * p = (const GALGAS_moduleInstanciationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduleInstanciationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduleInstanciationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
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
  GALGAS_lstring var_enumName_1345 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 34)) ;
  GALGAS_lstringlist var_enumCaseList_1523 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-enumeration-declaration.galgas", 35)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_case) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 37)) ;
    GALGAS_lstring var_constantName_1589 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 38)) ;
    var_enumCaseList_1523.addAssign_operation (var_constantName_1589  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 39)) ;
    switch (select_plm_5F_syntax_1 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 42)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_enumerationDeclaration::constructor_new (var_enumName_1345, var_enumCaseList_1523  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 43))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i4_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_enum) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 26)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_case) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 37)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 38)) ;
    switch (select_plm_5F_syntax_1 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 42)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i5_ (GALGAS_structurePropertyListAST & ioArgument_ioFieldListAST,
                                                                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_public_2187 ;
  switch (select_plm_5F_syntax_2 (inCompiler)) {
  case 1: {
    var_public_2187 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_public) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 50)) ;
    var_public_2187 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  nt_struct_5F_property_5F_declaration_ (var_public_2187, ioArgument_ioFieldListAST, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i5_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_public) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 50)) ;
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
  GALGAS_bool var_constant_2853 ;
  switch (select_plm_5F_syntax_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_var) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 67)) ;
    var_constant_2853 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_let) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 70)) ;
    var_constant_2853 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_fieldName_2980 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 73)) ;
  switch (select_plm_5F_syntax_4 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_typeName_3020 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 75)) ;
    switch (select_plm_5F_syntax_5 (inCompiler)) {
    case 1: {
      ioArgument_ioFieldListAST.addAssign_operation (var_fieldName_2980, var_constant_2853, constinArgument_isPublic, var_typeName_3020, GALGAS_structurePropertyInitOptionalExpressionAST::constructor_noExpression (SOURCE_FILE ("type-structure-declaration.galgas", 77))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 77)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 79)) ;
      GALGAS_expressionAST var_initExpression_3177 ;
      nt_expression_ (var_initExpression_3177, inCompiler) ;
      ioArgument_ioFieldListAST.addAssign_operation (var_fieldName_2980, var_constant_2853, constinArgument_isPublic, var_typeName_3020, GALGAS_structurePropertyInitOptionalExpressionAST::constructor_expression (var_initExpression_3177  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 81))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 81)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 84)) ;
    GALGAS_expressionAST var_initExpression_3355 ;
    nt_expression_ (var_initExpression_3355, inCompiler) ;
    ioArgument_ioFieldListAST.addAssign_operation (var_fieldName_2980, var_constant_2853, constinArgument_isPublic, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 86)), GALGAS_structurePropertyInitOptionalExpressionAST::constructor_expression (var_initExpression_3355  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 86))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 86)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_struct_5F_property_5F_declaration_i7_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_var) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 67)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_let) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 70)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 73)) ;
  switch (select_plm_5F_syntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 75)) ;
    switch (select_plm_5F_syntax_5 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 79)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 84)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_struct) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 93)) ;
  GALGAS_lstring var_structureName_3685 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 94)) ;
  GALGAS_lstringlist var_attributeList_3716 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 95)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_6 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_3776 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__40_attribute) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 98)) ;
      var_attributeList_3716.addAssign_operation (var_attribute_3776  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 99)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 101)) ;
  GALGAS_functionDeclarationListAST var_procedureDeclarationListAST_3887 = GALGAS_functionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 102)) ;
  GALGAS_structurePropertyListAST var_fieldList_3932 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 103)) ;
  GALGAS_systemRoutineDeclarationListAST var_systemRoutineListAST_3995 = GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 104)) ;
  GALGAS_guardDeclarationListAST var_guardListAST_4042 = GALGAS_guardDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 105)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_plm_5F_syntax_7 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (var_fieldList_3932, inCompiler) ;
    } break ;
    case 3: {
      nt_function_ (var_procedureDeclarationListAST_3887, inCompiler) ;
    } break ;
    case 4: {
      nt_system_5F_routine_ (var_systemRoutineListAST_3995, inCompiler) ;
    } break ;
    case 5: {
      nt_guard_ (var_guardListAST_4042, inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 116)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 118)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_structureDeclarationAST::constructor_new (var_structureName_3685, var_attributeList_3716, var_fieldList_3932, var_procedureDeclarationListAST_3887, var_systemRoutineListAST_3995, var_guardListAST_4042  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 119))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i8_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_struct) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 93)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 94)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__40_attribute) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 98)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 101)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 116)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 118)) ;
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
  GALGAS_bool var_constant_2468 ;
  switch (select_plm_5F_syntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_var) COMMA_SOURCE_FILE ("declaration-module.galgas", 60)) ;
    var_constant_2468 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_let) COMMA_SOURCE_FILE ("declaration-module.galgas", 63)) ;
    var_constant_2468 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_fieldName_2595 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-module.galgas", 66)) ;
  switch (select_plm_5F_syntax_22 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_typeName_2635 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-module.galgas", 68)) ;
    switch (select_plm_5F_syntax_23 (inCompiler)) {
    case 1: {
      ioArgument_ioPropertyList.addAssign_operation (var_fieldName_2595, var_constant_2468, var_typeName_2635, GALGAS_structurePropertyInitOptionalExpressionAST::constructor_noExpression (SOURCE_FILE ("declaration-module.galgas", 70))  COMMA_SOURCE_FILE ("declaration-module.galgas", 70)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("declaration-module.galgas", 72)) ;
      GALGAS_expressionAST var_initExpression_2782 ;
      nt_expression_ (var_initExpression_2782, inCompiler) ;
      ioArgument_ioPropertyList.addAssign_operation (var_fieldName_2595, var_constant_2468, var_typeName_2635, GALGAS_structurePropertyInitOptionalExpressionAST::constructor_expression (var_initExpression_2782  COMMA_SOURCE_FILE ("declaration-module.galgas", 74))  COMMA_SOURCE_FILE ("declaration-module.galgas", 74)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("declaration-module.galgas", 77)) ;
    GALGAS_expressionAST var_initExpression_2951 ;
    nt_expression_ (var_initExpression_2951, inCompiler) ;
    ioArgument_ioPropertyList.addAssign_operation (var_fieldName_2595, var_constant_2468, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-module.galgas", 79)), GALGAS_structurePropertyInitOptionalExpressionAST::constructor_expression (var_initExpression_2951  COMMA_SOURCE_FILE ("declaration-module.galgas", 79))  COMMA_SOURCE_FILE ("declaration-module.galgas", 79)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_module_5F_property_i17_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_var) COMMA_SOURCE_FILE ("declaration-module.galgas", 60)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_let) COMMA_SOURCE_FILE ("declaration-module.galgas", 63)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-module.galgas", 66)) ;
  switch (select_plm_5F_syntax_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-module.galgas", 68)) ;
    switch (select_plm_5F_syntax_23 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("declaration-module.galgas", 72)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("declaration-module.galgas", 77)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_module) COMMA_SOURCE_FILE ("declaration-module.galgas", 86)) ;
  GALGAS_lstring var_moduleName_3275 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-module.galgas", 87)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-module.galgas", 88)) ;
  GALGAS_functionDeclarationListAST var_functionDeclarationListAST_3342 = GALGAS_functionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-module.galgas", 89)) ;
  GALGAS_modulePropertyListAST var_modulePropertyListAST_3396 = GALGAS_modulePropertyListAST::constructor_emptyList (SOURCE_FILE ("declaration-module.galgas", 90)) ;
  GALGAS_guardDeclarationListAST var_guardListAST_3443 = GALGAS_guardDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-module.galgas", 91)) ;
  GALGAS_systemRoutineDeclarationListAST var_svcListAST_3496 = GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-module.galgas", 92)) ;
  GALGAS_initList var_initList_3524 = GALGAS_initList::constructor_emptySortedList (SOURCE_FILE ("declaration-module.galgas", 93)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_24 (inCompiler)) {
    case 2: {
      nt_declaration_5F_init_ (var_initList_3524, inCompiler) ;
    } break ;
    case 3: {
      nt_isr_ (ioArgument_ioAST.mProperty_mISRDeclarationListAST, var_moduleName_3275, inCompiler) ;
    } break ;
    case 4: {
      nt_module_5F_property_ (var_modulePropertyListAST_3396, inCompiler) ;
    } break ;
    case 5: {
      nt_function_ (var_functionDeclarationListAST_3342, inCompiler) ;
    } break ;
    case 6: {
      nt_system_5F_routine_ (var_svcListAST_3496, inCompiler) ;
    } break ;
    case 7: {
      nt_guard_ (var_guardListAST_3443, inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("declaration-module.galgas", 108)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-module.galgas", 110)) ;
  ioArgument_ioAST.mProperty_mModuleDeclarationListAST.addAssign_operation (GALGAS_moduleDeclarationAST::constructor_new (var_moduleName_3275, var_modulePropertyListAST_3396, var_functionDeclarationListAST_3342, var_svcListAST_3496, var_guardListAST_3443, var_initList_3524  COMMA_SOURCE_FILE ("declaration-module.galgas", 112))  COMMA_SOURCE_FILE ("declaration-module.galgas", 112)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i18_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_module) COMMA_SOURCE_FILE ("declaration-module.galgas", 86)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-module.galgas", 87)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-module.galgas", 88)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("declaration-module.galgas", 108)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-module.galgas", 110)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i19_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_module) COMMA_SOURCE_FILE ("declaration-module.galgas", 125)) ;
  GALGAS_lstring var_moduleName_4325 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-module.galgas", 126)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("declaration-module.galgas", 127)) ;
  GALGAS_moduleInstanciationArgumentListAST var_moduleInstanciationArgumentList_4405 = GALGAS_moduleInstanciationArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-module.galgas", 128)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_25 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_4455 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21_) COMMA_SOURCE_FILE ("declaration-module.galgas", 131)) ;
      GALGAS_expressionAST var_expression_4490 ;
      nt_expression_ (var_expression_4490, inCompiler) ;
      var_moduleInstanciationArgumentList_4405.addAssign_operation (var_selector_4455, var_expression_4490  COMMA_SOURCE_FILE ("declaration-module.galgas", 133)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("declaration-module.galgas", 135)) ;
  ioArgument_ioAST.mProperty_mRequiredModuleListAST.addAssign_operation (var_moduleName_4325, var_moduleInstanciationArgumentList_4405  COMMA_SOURCE_FILE ("declaration-module.galgas", 136)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i19_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_module) COMMA_SOURCE_FILE ("declaration-module.galgas", 125)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-module.galgas", 126)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("declaration-module.galgas", 127)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21_) COMMA_SOURCE_FILE ("declaration-module.galgas", 131)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("declaration-module.galgas", 135)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i20_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_staticArray) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 45)) ;
  GALGAS_lstring var_staticListName_2068 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 46)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 47)) ;
  GALGAS_staticArrayPropertyListAST var_propertyList_2121 = GALGAS_staticArrayPropertyListAST::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_staticArrayProperty_ (var_propertyList_2121, inCompiler) ;
    switch (select_plm_5F_syntax_26 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 53)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_staticArrayAST::constructor_new (var_staticListName_2068, var_propertyList_2121  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 54))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 54)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i20_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_staticArray) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 45)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 46)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 47)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 53)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_staticArrayProperty_i21_ (GALGAS_staticArrayPropertyListAST & ioArgument_ioPropertyList,
                                                                         C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_let) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 60)) ;
  GALGAS_lstring var_propertyName_2540 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 61)) ;
  switch (select_plm_5F_syntax_27 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_typeName_2580 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 63)) ;
    ioArgument_ioPropertyList.addAssign_operation (var_propertyName_2540, GALGAS_staticArrayPropertyTypeAST::constructor_valueType (var_typeName_2580  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 64))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 64)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_func) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 66)) ;
    GALGAS_mode var_mode_2689 ;
    nt_mode_ (var_mode_2689, inCompiler) ;
    GALGAS_routineFormalArgumentList var_formalArgs_2756 ;
    nt_procedure_5F_formal_5F_arguments_ (var_formalArgs_2756, inCompiler) ;
    GALGAS_lstring var_returnType_2782 ;
    switch (select_plm_5F_syntax_28 (inCompiler)) {
    case 1: {
      var_returnType_2782 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 71)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 73)) ;
      var_returnType_2782 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 74)) ;
    } break ;
    default:
      break ;
    }
    ioArgument_ioPropertyList.addAssign_operation (var_propertyName_2540, GALGAS_staticArrayPropertyTypeAST::constructor_function (var_mode_2689, var_formalArgs_2756, var_returnType_2782  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 76))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 76)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_staticArrayProperty_i21_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_let) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 60)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 61)) ;
  switch (select_plm_5F_syntax_27 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 63)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_func) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 66)) ;
    nt_mode_parse (inCompiler) ;
    nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
    switch (select_plm_5F_syntax_28 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 73)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 74)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_extend) COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 45)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_staticArray) COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 46)) ;
  GALGAS_lstring var_staticListName_2171 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 47)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_extendStaticArrayExpressionListAST var_expressions_2244 = GALGAS_extendStaticArrayExpressionListAST::constructor_emptyList (SOURCE_FILE ("declaration-extend-static-array.galgas", 50)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      nt_staticArray_5F_exp_ (var_expressions_2244, inCompiler) ;
      switch (select_plm_5F_syntax_30 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 54)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_extendStaticArrayDeclarationAST::constructor_new (var_staticListName_2171, var_expressions_2244  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 56))  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 56)) ;
    switch (select_plm_5F_syntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 58)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 60)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i22_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_extend) COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 45)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_staticArray) COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 46)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 47)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      nt_staticArray_5F_exp_parse (inCompiler) ;
      switch (select_plm_5F_syntax_30 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 54)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    switch (select_plm_5F_syntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 58)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 60)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_staticArray_5F_exp_i23_ (GALGAS_extendStaticArrayExpressionListAST & ioArgument_ioExpressions,
                                                                        C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_31 (inCompiler)) {
  case 1: {
    GALGAS_expressionAST var_exp_2721 ;
    nt_expression_ (var_exp_2721, inCompiler) ;
    ioArgument_ioExpressions.addAssign_operation (GALGAS_extendStaticArrayExpressionAST::constructor_expression (var_exp_2721  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 68)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 68))  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 68)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_func) COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 70)) ;
    GALGAS_lstring var_functionName_2832 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 71)) ;
    GALGAS_routineFormalArgumentList var_formalArgs_2899 ;
    nt_procedure_5F_formal_5F_arguments_ (var_formalArgs_2899, inCompiler) ;
    ioArgument_ioExpressions.addAssign_operation (GALGAS_extendStaticArrayExpressionAST::constructor_function (var_functionName_2832, var_formalArgs_2899  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 74)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 75))  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 73)) ;
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
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_func) COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 70)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 71)) ;
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
  GALGAS_lstring var_taskName_1819 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-task.galgas", 45)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_priority) COMMA_SOURCE_FILE ("declaration-task.galgas", 46)) ;
  GALGAS_lbigint var_priority_1871 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("declaration-task.galgas", 47)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_stackSize) COMMA_SOURCE_FILE ("declaration-task.galgas", 48)) ;
  GALGAS_lbigint var_stackSize_1925 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("declaration-task.galgas", 49)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-task.galgas", 50)) ;
  GALGAS_structurePropertyListAST var_taskVarList_1975 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 51)) ;
  GALGAS_functionDeclarationListAST var_taskProcList_2025 = GALGAS_functionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 52)) ;
  GALGAS_taskInitListAST var_taskInitListAST_2067 = GALGAS_taskInitListAST::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 53)) ;
  GALGAS_syncInstructionBranchListAST var_branchList_2117 = GALGAS_syncInstructionBranchListAST::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 54)) ;
  nt_taskBody_ (var_taskVarList_1975, var_taskProcList_2025, var_taskInitListAST_2067, var_branchList_2117, inCompiler) ;
  GALGAS_location var_endOfTask_2215 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 56)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-task.galgas", 57)) ;
  ioArgument_ioAST.mProperty_mTaskListAST.addAssign_operation (var_taskName_1819, var_priority_1871, var_stackSize_1925, var_taskVarList_1975, var_taskProcList_2025, var_taskInitListAST_2067, var_branchList_2117, var_endOfTask_2215  COMMA_SOURCE_FILE ("declaration-task.galgas", 58)) ;
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
                                                              GALGAS_taskInitListAST & ioArgument_taskInitListAST,
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
      GALGAS_lstring var_procName_2909 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-task.galgas", 81)) ;
      GALGAS_routineFormalArgumentList var_formalArgumentList_3011 ;
      nt_procedure_5F_formal_5F_arguments_ (var_formalArgumentList_3011, inCompiler) ;
      GALGAS_lstring var_returnTypeName_3041 ;
      switch (select_plm_5F_syntax_33 (inCompiler)) {
      case 1: {
        var_returnTypeName_3041 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 85)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("declaration-task.galgas", 87)) ;
        var_returnTypeName_3041 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-task.galgas", 88)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-task.galgas", 90)) ;
      GALGAS_instructionListAST var_instructionList_3209 ;
      nt_instructionList_ (var_instructionList_3209, inCompiler) ;
      GALGAS_location var_endOfProc_3229 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 92)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-task.galgas", 93)) ;
      ioArgument_taskProcList.addAssign_operation (GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-task.galgas", 94)), GALGAS_bool (false), var_procName_2909, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 94)), var_formalArgumentList_3011, var_returnTypeName_3041, var_instructionList_3209, var_endOfProc_3229  COMMA_SOURCE_FILE ("declaration-task.galgas", 94)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_setup) COMMA_SOURCE_FILE ("declaration-task.galgas", 96)) ;
      GALGAS_lbigint var_priority_3437 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("declaration-task.galgas", 97)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-task.galgas", 98)) ;
      GALGAS_instructionListAST var_instructionList_3492 ;
      nt_instructionList_ (var_instructionList_3492, inCompiler) ;
      GALGAS_location var_endOfInit_3512 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 100)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-task.galgas", 101)) ;
      ioArgument_taskInitListAST.addAssign_operation (var_priority_3437, var_instructionList_3492, var_endOfInit_3512  COMMA_SOURCE_FILE ("declaration-task.galgas", 102)) ;
    } break ;
    case 5: {
      GALGAS_guardedCommandAST var_guardedCommand_3675 ;
      nt_guarded_5F_command_ (var_guardedCommand_3675, inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-task.galgas", 105)) ;
      GALGAS_instructionListAST var_instructionList_3730 ;
      nt_instructionList_ (var_instructionList_3730, inCompiler) ;
      GALGAS_location var_endOfInstructions_3758 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 107)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-task.galgas", 108)) ;
      ioArgument_branchList.addAssign_operation (var_guardedCommand_3675, var_instructionList_3730, var_endOfInstructions_3758  COMMA_SOURCE_FILE ("declaration-task.galgas", 109)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_panic) COMMA_SOURCE_FILE ("panic.galgas", 23)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_setup) COMMA_SOURCE_FILE ("panic.galgas", 24)) ;
  GALGAS_lbigint var_priority_1165 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("panic.galgas", 25)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("panic.galgas", 26)) ;
  GALGAS_instructionListAST var_instructionList_1216 ;
  nt_instructionList_ (var_instructionList_1216, inCompiler) ;
  GALGAS_location var_endOfInstructionList_1245 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("panic.galgas", 29)) ;
  ioArgument_ioAST.mProperty_mPanicClauseListAST.addAssign_operation (GALGAS_bool (true), var_instructionList_1216, var_endOfInstructionList_1245, var_priority_1165  COMMA_SOURCE_FILE ("panic.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i26_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_panic) COMMA_SOURCE_FILE ("panic.galgas", 23)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_setup) COMMA_SOURCE_FILE ("panic.galgas", 24)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("panic.galgas", 25)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("panic.galgas", 26)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("panic.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i27_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_panic) COMMA_SOURCE_FILE ("panic.galgas", 40)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_loop) COMMA_SOURCE_FILE ("panic.galgas", 41)) ;
  GALGAS_lbigint var_priority_1596 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("panic.galgas", 42)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("panic.galgas", 43)) ;
  GALGAS_instructionListAST var_instructionList_1647 ;
  nt_instructionList_ (var_instructionList_1647, inCompiler) ;
  GALGAS_location var_endOfInstructionList_1676 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 45)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("panic.galgas", 46)) ;
  ioArgument_ioAST.mProperty_mPanicClauseListAST.addAssign_operation (GALGAS_bool (false), var_instructionList_1647, var_endOfInstructionList_1676, var_priority_1596  COMMA_SOURCE_FILE ("panic.galgas", 47)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i27_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_panic) COMMA_SOURCE_FILE ("panic.galgas", 40)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_loop) COMMA_SOURCE_FILE ("panic.galgas", 41)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("panic.galgas", 42)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("panic.galgas", 43)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("panic.galgas", 46)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_system_5F_routine_i28_ (GALGAS_systemRoutineDeclarationListAST & ioArgument_ioSVCListAST,
                                                                       C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_public_1261 ;
  switch (select_plm_5F_syntax_34 (inCompiler)) {
  case 1: {
    var_public_1261 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_public) COMMA_SOURCE_FILE ("declaration-svc.galgas", 29)) ;
    var_public_1261 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_system) COMMA_SOURCE_FILE ("declaration-svc.galgas", 32)) ;
  GALGAS_routineKind var_routineKind_1385 ;
  switch (select_plm_5F_syntax_35 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_section) COMMA_SOURCE_FILE ("declaration-svc.galgas", 35)) ;
    var_routineKind_1385 = GALGAS_routineKind::constructor_section (SOURCE_FILE ("declaration-svc.galgas", 36)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_safe) COMMA_SOURCE_FILE ("declaration-svc.galgas", 38)) ;
    var_routineKind_1385 = GALGAS_routineKind::constructor_safe (SOURCE_FILE ("declaration-svc.galgas", 39)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_primitive) COMMA_SOURCE_FILE ("declaration-svc.galgas", 41)) ;
    var_routineKind_1385 = GALGAS_routineKind::constructor_primitive (SOURCE_FILE ("declaration-svc.galgas", 42)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_service) COMMA_SOURCE_FILE ("declaration-svc.galgas", 44)) ;
    var_routineKind_1385 = GALGAS_routineKind::constructor_service (SOURCE_FILE ("declaration-svc.galgas", 45)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_name_1630 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-svc.galgas", 47)) ;
  GALGAS_lstringlist var_attributeList_1661 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-svc.galgas", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_36 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_1721 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__40_attribute) COMMA_SOURCE_FILE ("declaration-svc.galgas", 51)) ;
      var_attributeList_1661.addAssign_operation (var_attribute_1721  COMMA_SOURCE_FILE ("declaration-svc.galgas", 52)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_routineFormalArgumentList var_formalArgumentList_1836 ;
  nt_procedure_5F_formal_5F_arguments_ (var_formalArgumentList_1836, inCompiler) ;
  GALGAS_lstring var_returnTypeName_1864 ;
  switch (select_plm_5F_syntax_37 (inCompiler)) {
  case 1: {
    var_returnTypeName_1864 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 57)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("declaration-svc.galgas", 59)) ;
    var_returnTypeName_1864 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-svc.galgas", 60)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-svc.galgas", 62)) ;
  GALGAS_instructionListAST var_instructionList_2016 ;
  nt_instructionList_ (var_instructionList_2016, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-svc.galgas", 64)) ;
  ioArgument_ioSVCListAST.addAssign_operation (var_name_1630, var_routineKind_1385, var_public_1261, var_attributeList_1661, var_formalArgumentList_1836, var_returnTypeName_1864, var_instructionList_2016, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 73))  COMMA_SOURCE_FILE ("declaration-svc.galgas", 65)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_boot) COMMA_SOURCE_FILE ("declaration-boot.galgas", 24)) ;
  GALGAS_lbigint var_priority_1152 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("declaration-boot.galgas", 25)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-boot.galgas", 26)) ;
  GALGAS_instructionListAST var_instructionList_1203 ;
  nt_instructionList_ (var_instructionList_1203, inCompiler) ;
  GALGAS_location var_endOfInit_1221 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-boot.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-boot.galgas", 29)) ;
  ioArgument_ioAST.mProperty_mBootListAST.addAssign_operation (var_priority_1152.getter_location (HERE), var_instructionList_1203, var_endOfInit_1221, var_priority_1152.getter_bigint (HERE), var_priority_1152.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-boot.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i29_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_boot) COMMA_SOURCE_FILE ("declaration-boot.galgas", 24)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("declaration-boot.galgas", 25)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-boot.galgas", 26)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-boot.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i30_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  nt_declaration_5F_init_ (ioArgument_ioAST.mProperty_mInitListAST, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i30_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_declaration_5F_init_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_5F_init_i31_ (GALGAS_initList & ioArgument_ioInitList,
                                                                         C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_init) COMMA_SOURCE_FILE ("declaration-init.galgas", 31)) ;
  GALGAS_lbigint var_priority_1428 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("declaration-init.galgas", 32)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-init.galgas", 33)) ;
  GALGAS_instructionListAST var_instructionList_1479 ;
  nt_instructionList_ (var_instructionList_1479, inCompiler) ;
  GALGAS_location var_endOfInit_1497 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 35)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-init.galgas", 36)) ;
  ioArgument_ioInitList.addAssign_operation (var_priority_1428.getter_location (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-init.galgas", 39)), GALGAS_string::makeEmptyString (), var_instructionList_1479, var_endOfInit_1497, var_priority_1428  COMMA_SOURCE_FILE ("declaration-init.galgas", 37)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_5F_init_i31_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_init) COMMA_SOURCE_FILE ("declaration-init.galgas", 31)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("declaration-init.galgas", 32)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-init.galgas", 33)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-init.galgas", 36)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_function_i32_ (GALGAS_functionDeclarationListAST & ioArgument_ioProcListAST,
                                                              C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_public_2566 ;
  switch (select_plm_5F_syntax_38 (inCompiler)) {
  case 1: {
    var_public_2566 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_public) COMMA_SOURCE_FILE ("declaration-func.galgas", 70)) ;
    var_public_2566 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_mode var_mode_2697 ;
  GALGAS_lstring var_procName_2722 ;
  GALGAS_lstringlist var_attributeList_2758 ;
  GALGAS_routineFormalArgumentList var_procFormalArgumentList_2808 ;
  nt_function_5F_header_ (var_mode_2697, var_procName_2722, var_attributeList_2758, var_procFormalArgumentList_2808, inCompiler) ;
  GALGAS_lstring var_returnTypeName_2836 ;
  switch (select_plm_5F_syntax_39 (inCompiler)) {
  case 1: {
    var_returnTypeName_2836 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 80)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("declaration-func.galgas", 82)) ;
    var_returnTypeName_2836 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-func.galgas", 83)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-func.galgas", 85)) ;
  GALGAS_instructionListAST var_instructionList_2988 ;
  nt_instructionList_ (var_instructionList_2988, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-func.galgas", 87)) ;
  ioArgument_ioProcListAST.addAssign_operation (var_mode_2697, var_public_2566, var_procName_2722, var_attributeList_2758, var_procFormalArgumentList_2808, var_returnTypeName_2836, var_instructionList_2988, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 96))  COMMA_SOURCE_FILE ("declaration-func.galgas", 88)) ;
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
                                                                        GALGAS_routineFormalArgumentList & outArgument_outProcFormalArgumentList,
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
      GALGAS_lstring var_attribute_4290 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__40_attribute) COMMA_SOURCE_FILE ("declaration-func.galgas", 149)) ;
      outArgument_outAttributeList.addAssign_operation (var_attribute_4290  COMMA_SOURCE_FILE ("declaration-func.galgas", 150)) ;
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_procedure_5F_formal_5F_arguments_i35_ (GALGAS_routineFormalArgumentList & outArgument_outProcFormalArgumentList,
                                                                                      C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outProcFormalArgumentList.drop () ; // Release 'out' argument
  outArgument_outProcFormalArgumentList = GALGAS_routineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("declaration-func.galgas", 158)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("declaration-func.galgas", 159)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_42 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_4734 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21_) COMMA_SOURCE_FILE ("declaration-func.galgas", 162)) ;
      GALGAS_lstring var_formalArgumentName_4777 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-func.galgas", 163)) ;
      GALGAS_lstring var_formalArgumentTypeName_4820 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-func.galgas", 164)) ;
      outArgument_outProcFormalArgumentList.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_output (SOURCE_FILE ("declaration-func.galgas", 166)), var_selector_4734, var_formalArgumentTypeName_4820, var_formalArgumentName_4777  COMMA_SOURCE_FILE ("declaration-func.galgas", 165)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_5015 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3F__21_) COMMA_SOURCE_FILE ("declaration-func.galgas", 171)) ;
      GALGAS_lstring var_formalArgumentName_5058 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-func.galgas", 172)) ;
      GALGAS_lstring var_formalArgumentTypeName_5101 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-func.galgas", 173)) ;
      outArgument_outProcFormalArgumentList.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_inputOutput (SOURCE_FILE ("declaration-func.galgas", 175)), var_selector_5015, var_formalArgumentTypeName_5101, var_formalArgumentName_5058  COMMA_SOURCE_FILE ("declaration-func.galgas", 174)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_5300 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3F_) COMMA_SOURCE_FILE ("declaration-func.galgas", 180)) ;
      GALGAS_lstring var_formalArgumentName_5343 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-func.galgas", 181)) ;
      GALGAS_lstring var_formalArgumentTypeName_5386 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-func.galgas", 182)) ;
      outArgument_outProcFormalArgumentList.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("declaration-func.galgas", 184)), var_selector_5300, var_formalArgumentTypeName_5386, var_formalArgumentName_5343  COMMA_SOURCE_FILE ("declaration-func.galgas", 183)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21_) COMMA_SOURCE_FILE ("declaration-func.galgas", 162)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-func.galgas", 163)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-func.galgas", 164)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3F__21_) COMMA_SOURCE_FILE ("declaration-func.galgas", 171)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-func.galgas", 172)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-func.galgas", 173)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3F_) COMMA_SOURCE_FILE ("declaration-func.galgas", 180)) ;
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
  GALGAS_mode var_mode_1166 ;
  GALGAS_lstring var_procName_1191 ;
  GALGAS_lstringlist var_attributeList_1227 ;
  GALGAS_routineFormalArgumentList var_procFormalArgumentList_1277 ;
  nt_function_5F_header_ (var_mode_1166, var_procName_1191, var_attributeList_1227, var_procFormalArgumentList_1277, inCompiler) ;
  GALGAS_bool var_isGlobal_1294 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_1339 (var_attributeList_1227, kENUMERATION_UP) ;
  while (enumerator_1339.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_1339.current_mValue (HERE).getter_string (HERE).objectCompare (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 30)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("@").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 31))) ;
      inCompiler->emitSemanticError (enumerator_1339.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 31)), GALGAS_string ("invalid attribute"), fixItArray1  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 31)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_2 = var_isGlobal_1294.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
        inCompiler->emitSemanticError (enumerator_1339.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 33)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 33)) ;
      }else if (kBoolFalse == test_2) {
        var_isGlobal_1294 = GALGAS_bool (true) ;
      }
    }
    enumerator_1339.gotoNextObject () ;
  }
  ioArgument_ioAST.mProperty_mRequiredProcListAST.addAssign_operation (var_procName_1191, var_mode_1166, var_isGlobal_1294, var_procFormalArgumentList_1277, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 43))  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 38)) ;
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
  GALGAS_mode var_mode_1216 ;
  GALGAS_lstring var_procName_1241 ;
  GALGAS_lstringlist var_attributeList_1284 ;
  GALGAS_routineFormalArgumentList var_procFormalArgumentList_1334 ;
  nt_function_5F_header_ (var_mode_1216, var_procName_1241, var_attributeList_1284, var_procFormalArgumentList_1334, inCompiler) ;
  GALGAS_lstring var_returnTypeName_1362 ;
  switch (select_plm_5F_syntax_43 (inCompiler)) {
  case 1: {
    var_returnTypeName_1362 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 31)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 33)) ;
    var_returnTypeName_1362 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 34)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 36)) ;
  GALGAS_lstring var_llvmName_1500 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 37)) ;
  ioArgument_ioAST.mProperty_mExternProcListAST.addAssign_operation (var_procName_1241, var_mode_1216, var_procFormalArgumentList_1334, var_returnTypeName_1362, var_llvmName_1500, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 38))  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 38)) ;
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
  GALGAS_bool var_public_1435 ;
  switch (select_plm_5F_syntax_45 (inCompiler)) {
  case 1: {
    var_public_1435 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_public) COMMA_SOURCE_FILE ("declaration-guard.galgas", 35)) ;
    var_public_1435 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_guard) COMMA_SOURCE_FILE ("declaration-guard.galgas", 38)) ;
  GALGAS_lstring var_guardName_1561 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("declaration-guard.galgas", 39)) ;
  GALGAS_lstringlist var_attributeList_1592 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_46 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_1652 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__40_attribute) COMMA_SOURCE_FILE ("declaration-guard.galgas", 43)) ;
      var_attributeList_1592.addAssign_operation (var_attribute_1652  COMMA_SOURCE_FILE ("declaration-guard.galgas", 44)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_routineFormalArgumentList var_guardFormalArgumentList_1772 ;
  nt_procedure_5F_formal_5F_arguments_ (var_guardFormalArgumentList_1772, inCompiler) ;
  GALGAS_guardKind var_guardKind_1797 ;
  switch (select_plm_5F_syntax_47 (inCompiler)) {
  case 1: {
    var_guardKind_1797 = GALGAS_guardKind::constructor_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 49)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("declaration-guard.galgas", 51)) ;
    GALGAS_callInstructionAST var_instruction_1894 ;
    nt_procedure_5F_call_ (var_instruction_1894, inCompiler) ;
    var_guardKind_1797 = GALGAS_guardKind::constructor_convenienceGuard (var_instruction_1894  COMMA_SOURCE_FILE ("declaration-guard.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("declaration-guard.galgas", 55)) ;
  GALGAS_instructionListAST var_instructionList_2009 ;
  nt_instructionList_ (var_instructionList_2009, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("declaration-guard.galgas", 57)) ;
  ioArgument_ioGuardListAST.addAssign_operation (var_guardName_1561, var_public_1435, var_attributeList_1592, var_guardFormalArgumentList_1772, var_guardKind_1797, var_instructionList_2009, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 65))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 58)) ;
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
  nt_expression_ (outArgument_outExpression, inCompiler) ;
  GALGAS_location var_endOfExpression_1127 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 22)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("expression-convert.galgas", 23)) ;
  GALGAS_lstring var_typeIdentifier_1185 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("expression-convert.galgas", 24)) ;
  outArgument_outExpression = GALGAS_convertExpressionAST::constructor_new (outArgument_outExpression, var_typeIdentifier_1185, var_endOfExpression_1127  COMMA_SOURCE_FILE ("expression-convert.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i57_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_convert) COMMA_SOURCE_FILE ("expression-convert.galgas", 20)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("expression-convert.galgas", 23)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("expression-convert.galgas", 24)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i58_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_extend) COMMA_SOURCE_FILE ("expression-extend.galgas", 20)) ;
  nt_expression_ (outArgument_outExpression, inCompiler) ;
  GALGAS_location var_endOfExpression_1125 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 22)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("expression-extend.galgas", 23)) ;
  GALGAS_lstring var_typeIdentifier_1183 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("expression-extend.galgas", 24)) ;
  outArgument_outExpression = GALGAS_extendExpressionAST::constructor_new (outArgument_outExpression, var_typeIdentifier_1183, var_endOfExpression_1125  COMMA_SOURCE_FILE ("expression-extend.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i58_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_extend) COMMA_SOURCE_FILE ("expression-extend.galgas", 20)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("expression-extend.galgas", 23)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("expression-extend.galgas", 24)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i59_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_truncate) COMMA_SOURCE_FILE ("expression-truncate.galgas", 20)) ;
  nt_expression_ (outArgument_outExpression, inCompiler) ;
  GALGAS_location var_endOfExpression_1129 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 22)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("expression-truncate.galgas", 23)) ;
  GALGAS_lstring var_typeIdentifier_1187 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("expression-truncate.galgas", 24)) ;
  outArgument_outExpression = GALGAS_truncateExpressionAST::constructor_new (outArgument_outExpression, var_typeIdentifier_1187, var_endOfExpression_1129  COMMA_SOURCE_FILE ("expression-truncate.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i59_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_truncate) COMMA_SOURCE_FILE ("expression-truncate.galgas", 20)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("expression-truncate.galgas", 23)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("expression-truncate.galgas", 24)) ;
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
  GALGAS_lstring var_typeName_1206 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 25)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 26)) ;
  GALGAS_functionCallEffectiveParameterListAST var_parameterList_1271 = GALGAS_functionCallEffectiveParameterListAST::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_59 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_1321 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21_) COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 30)) ;
      GALGAS_expressionAST var_expression_1356 ;
      nt_expression_ (var_expression_1356, inCompiler) ;
      var_parameterList_1271.addAssign_operation (var_selector_1321, var_expression_1356  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 32)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_location var_errorLocation_1431 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 34)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 35)) ;
  outArgument_outExpression = GALGAS_constructorCallAST::constructor_new (var_typeName_1206, var_parameterList_1271, var_errorLocation_1431  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i61_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 25)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_59 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21_) COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 30)) ;
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i62_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_optionalTypeName_1065 ;
  switch (select_plm_5F_syntax_60 (inCompiler)) {
  case 1: {
    var_optionalTypeName_1065 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 21))  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 21)) ;
  } break ;
  case 2: {
    var_optionalTypeName_1065 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 23)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 25)) ;
  GALGAS_lstring var_constantName_1210 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 26)) ;
  outArgument_outExpression = GALGAS_typedConstantCallAST::constructor_new (var_optionalTypeName_1065, var_constantName_1210  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i62_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_60 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 23)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 25)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 26)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i63_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_if) COMMA_SOURCE_FILE ("expression-if.galgas", 23)) ;
  GALGAS_expressionAST var_ifExpression_1231 ;
  nt_expression_ (var_ifExpression_1231, inCompiler) ;
  GALGAS_location var_ifExpressionEndLocation_1273 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 25)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("expression-if.galgas", 26)) ;
  GALGAS_expressionAST var_thenExpression_1326 ;
  nt_expression_ (var_thenExpression_1326, inCompiler) ;
  GALGAS_location var_thenExpressionEndLocation_1370 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("expression-if.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_else) COMMA_SOURCE_FILE ("expression-if.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("expression-if.galgas", 31)) ;
  GALGAS_expressionAST var_elseExpression_1442 ;
  nt_expression_ (var_elseExpression_1442, inCompiler) ;
  GALGAS_location var_elseExpressionEndLocation_1486 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 33)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("expression-if.galgas", 34)) ;
  outArgument_outExpression = GALGAS_ifExpressionAST::constructor_new (var_ifExpression_1231, var_ifExpressionEndLocation_1273, var_thenExpression_1326, var_thenExpressionEndLocation_1370, var_elseExpression_1442, var_elseExpressionEndLocation_1486  COMMA_SOURCE_FILE ("expression-if.galgas", 35)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i63_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_if) COMMA_SOURCE_FILE ("expression-if.galgas", 23)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("expression-if.galgas", 26)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("expression-if.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_else) COMMA_SOURCE_FILE ("expression-if.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("expression-if.galgas", 31)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("expression-if.galgas", 34)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i64_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lbigint var_integerLiteral_1057 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalIntegerInExpressionAST::constructor_new (var_integerLiteral_1057  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i64_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i65_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_stringLiteral_1055 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalStringInExpressionAST::constructor_new (var_stringLiteral_1055  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i65_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i66_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_yes) COMMA_SOURCE_FILE ("expression-true-false.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalBooleanInExpressionAST::constructor_new (GALGAS_bool (true)  COMMA_SOURCE_FILE ("expression-true-false.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i66_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_yes) COMMA_SOURCE_FILE ("expression-true-false.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i67_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_no) COMMA_SOURCE_FILE ("expression-true-false.galgas", 25)) ;
  outArgument_outExpression = GALGAS_literalBooleanInExpressionAST::constructor_new (GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-true-false.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i67_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_no) COMMA_SOURCE_FILE ("expression-true-false.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i68_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_registerNameAsTypeName_1372 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 29)) ;
  GALGAS_lstringlist var_booleanFieldNames_1415 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("expression-cst-registre.galgas", 30)) ;
  GALGAS_registerIntegerFieldListAST var_integerFieldValues_1472 = GALGAS_registerIntegerFieldListAST::constructor_emptyList (SOURCE_FILE ("expression-cst-registre.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_registerFieldName_1530 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 33)) ;
    switch (select_plm_5F_syntax_62 (inCompiler)) {
    case 1: {
      var_booleanFieldNames_1415.addAssign_operation (var_registerFieldName_1530  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 35)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 37)) ;
      GALGAS_expressionAST var_expression_1649 ;
      nt_expression_ (var_expression_1649, inCompiler) ;
      var_integerFieldValues_1472.addAssign_operation (var_registerFieldName_1530, var_expression_1649, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 39))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 39)) ;
    } break ;
    default:
      break ;
    }
    switch (select_plm_5F_syntax_61 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 42)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 44)) ;
  outArgument_outExpression = GALGAS_registerConstantExpressionAST::constructor_new (var_registerNameAsTypeName_1372, var_booleanFieldNames_1415, var_integerFieldValues_1472  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i68_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 33)) ;
    switch (select_plm_5F_syntax_62 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 37)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_plm_5F_syntax_61 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 42)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 44)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i69_ (GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_receiver_1637 ;
  switch (select_plm_5F_syntax_63 (inCompiler)) {
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
  GALGAS_primaryInExpressionAccessListAST var_accessList_1838 = GALGAS_primaryInExpressionAccessListAST::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_64 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("expression-primary.galgas", 45)) ;
      GALGAS_lstring var_propertyName_1911 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression-primary.galgas", 46)) ;
      var_accessList_1838.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_property (var_propertyName_1911  COMMA_SOURCE_FILE ("expression-primary.galgas", 47))  COMMA_SOURCE_FILE ("expression-primary.galgas", 47)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("expression-primary.galgas", 49)) ;
      GALGAS_expressionAST var_expression_2018 ;
      nt_expression_ (var_expression_2018, inCompiler) ;
      GALGAS_location var_endOfIndex_2039 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 51)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("expression-primary.galgas", 52)) ;
      var_accessList_1838.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_arrayAccess (var_expression_2018, var_endOfIndex_2039  COMMA_SOURCE_FILE ("expression-primary.galgas", 53))  COMMA_SOURCE_FILE ("expression-primary.galgas", 53)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("expression-primary.galgas", 55)) ;
      GALGAS_lstring var_methodName_2198 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression-primary.galgas", 56)) ;
      GALGAS_effectiveArgumentListAST var_arguments_2242 ;
      GALGAS_location var_endOfArguments_2262 ;
      nt_effective_5F_parameters_ (var_arguments_2242, var_endOfArguments_2262, inCompiler) ;
      var_accessList_1838.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_funcCall (var_methodName_2198, var_arguments_2242, var_endOfArguments_2262  COMMA_SOURCE_FILE ("expression-primary.galgas", 58))  COMMA_SOURCE_FILE ("expression-primary.galgas", 58)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outExpression = GALGAS_primaryInExpressionAST::constructor_new (var_receiver_1637, var_accessList_1838  COMMA_SOURCE_FILE ("expression-primary.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i69_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_63 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression-primary.galgas", 36)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_self) COMMA_SOURCE_FILE ("expression-primary.galgas", 38)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_64 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("expression-primary.galgas", 45)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression-primary.galgas", 46)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("expression-primary.galgas", 49)) ;
      nt_expression_parse (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("expression-primary.galgas", 52)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("expression-primary.galgas", 55)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression-primary.galgas", 56)) ;
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i70_ (GALGAS_expressionAST & outArgument_outExpression,
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i70_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 20)) ;
  nt_effective_5F_parameters_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instructionList_i71_ (GALGAS_instructionListAST & outArgument_outInstructionList,
                                                                     C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("instructionList.galgas", 24)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_65 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instructionList_i71_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_65 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i72_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_check) COMMA_SOURCE_FILE ("directive-check.galgas", 18)) ;
  GALGAS_location var_loc_1045 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("directive-check.galgas", 19)) ;
  GALGAS_expressionAST var_expression_1110 ;
  nt_expression_ (var_expression_1110, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_checkInstructionAST::constructor_new (var_loc_1045, var_expression_1110  COMMA_SOURCE_FILE ("directive-check.galgas", 21))  COMMA_SOURCE_FILE ("directive-check.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i72_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_check) COMMA_SOURCE_FILE ("directive-check.galgas", 18)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i73_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_LValueAST var_assignmentTargetAST_1094 ;
  nt_lvalue_ (var_assignmentTargetAST_1094, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 21)) ;
  GALGAS_expressionAST var_sourceExpression_1166 ;
  nt_expression_ (var_sourceExpression_1166, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_assignmentInstructionAST::constructor_new (var_assignmentTargetAST_1094.getter_mIdentifier (HERE).getter_location (HERE), var_assignmentTargetAST_1094, var_sourceExpression_1166  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 24))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 24)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i73_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_lvalue_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_assignment_5F_operator_i74_ (GALGAS_infixOperator & outArgument_outInfixOperator,
                                                                            GALGAS_location & outArgument_outOperatorLocation,
                                                                            C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outInfixOperator.drop () ; // Release 'out' argument
  outArgument_outOperatorLocation.drop () ; // Release 'out' argument
  switch (select_plm_5F_syntax_66 (inCompiler)) {
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
  default:
    break ;
  }
  outArgument_outOperatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_assignment_5F_operator_i74_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_66 (inCompiler)) {
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
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i75_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_LValueAST var_lvalue_1349 ;
  nt_lvalue_ (var_lvalue_1349, inCompiler) ;
  GALGAS_location var_instructionLocation_1377 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 46)) ;
  GALGAS_infixOperator var_infixOperator_1466 ;
  GALGAS_location var_operatorLocation_1488 ;
  nt_assignment_5F_operator_ (var_infixOperator_1466, var_operatorLocation_1488, inCompiler) ;
  GALGAS_expressionAST var_rightExpression_1565 ;
  nt_expression_ (var_rightExpression_1565, inCompiler) ;
  GALGAS_primaryInExpressionAccessListAST var_accessList_1645 = GALGAS_primaryInExpressionAccessListAST::constructor_emptyList (SOURCE_FILE ("instruction-assignment-operator.galgas", 52)) ;
  cEnumerator_accessInAssignmentListAST enumerator_1689 (var_lvalue_1349.getter_mAccessList (HERE), kENUMERATION_UP) ;
  while (enumerator_1689.hasCurrentObject ()) {
    switch (enumerator_1689.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_1796 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_1689.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_1796->mAssociatedValue0 ;
        var_accessList_1645.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_property (extractedValue_name  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 56))  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 56)) ;
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_1939 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_1689.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_index = extractPtr_1939->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_1939->mAssociatedValue1 ;
        var_accessList_1645.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_arrayAccess (extractedValue_index, extractedValue_endOfIndex  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 58))  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 58)) ;
      }
      break ;
    }
    enumerator_1689.gotoNextObject () ;
  }
  GALGAS_primaryInExpressionAST var_leftExpression_1980 = GALGAS_primaryInExpressionAST::constructor_new (var_lvalue_1349.getter_mIdentifier (HERE), var_accessList_1645  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 61)) ;
  GALGAS_infixOperatorExpressionAST var_expression_2063 = GALGAS_infixOperatorExpressionAST::constructor_new (var_leftExpression_1980, var_operatorLocation_1488, var_infixOperator_1466, var_rightExpression_1565  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 62)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_assignmentInstructionAST::constructor_new (var_instructionLocation_1377, var_lvalue_1349, var_expression_2063  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 69))  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 69)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i75_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_lvalue_parse (inCompiler) ;
  nt_assignment_5F_operator_parse (inCompiler) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i76_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_var) COMMA_SOURCE_FILE ("instruction-var.galgas", 27)) ;
  GALGAS_lstring var_varName_1339 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-var.galgas", 28)) ;
  GALGAS_lstring var_optionalTypeName_1369 ;
  switch (select_plm_5F_syntax_67 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i76_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_var) COMMA_SOURCE_FILE ("instruction-var.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-var.galgas", 28)) ;
  switch (select_plm_5F_syntax_67 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i77_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_var) COMMA_SOURCE_FILE ("instruction-var.galgas", 48)) ;
  GALGAS_lstring var_varName_1904 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-var.galgas", 49)) ;
  GALGAS_lstring var_typeName_1931 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("instruction-var.galgas", 50)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_varInstructionAST::constructor_new (var_varName_1904.getter_location (HERE), var_varName_1904, var_typeName_1931  COMMA_SOURCE_FILE ("instruction-var.galgas", 51))  COMMA_SOURCE_FILE ("instruction-var.galgas", 51)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i77_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_var) COMMA_SOURCE_FILE ("instruction-var.galgas", 48)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-var.galgas", 49)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("instruction-var.galgas", 50)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i78_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_let) COMMA_SOURCE_FILE ("instruction-let.galgas", 20)) ;
  GALGAS_lstring var_varName_1133 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-let.galgas", 21)) ;
  GALGAS_lstring var_optionalTypeName_1163 ;
  switch (select_plm_5F_syntax_68 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i78_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_let) COMMA_SOURCE_FILE ("instruction-let.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-let.galgas", 21)) ;
  switch (select_plm_5F_syntax_68 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i79_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_nop) COMMA_SOURCE_FILE ("instruction-nop.galgas", 17)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_letInstructionNOP::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-nop.galgas", 18))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 18))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i79_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_nop) COMMA_SOURCE_FILE ("instruction-nop.galgas", 17)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i80_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_assert) COMMA_SOURCE_FILE ("instruction-assert.galgas", 18)) ;
  GALGAS_location var_loc_1047 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 19)) ;
  GALGAS_expressionAST var_expression_1112 ;
  nt_expression_ (var_expression_1112, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_assertInstructionAST::constructor_new (var_loc_1047, var_expression_1112  COMMA_SOURCE_FILE ("instruction-assert.galgas", 21))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i80_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_assert) COMMA_SOURCE_FILE ("instruction-assert.galgas", 18)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i81_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_panic) COMMA_SOURCE_FILE ("instruction-panic.galgas", 18)) ;
  GALGAS_location var_loc_1049 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 19)) ;
  GALGAS_expressionAST var_codeExpression_1118 ;
  nt_expression_ (var_codeExpression_1118, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_panicInstructionAST::constructor_new (var_loc_1049, var_codeExpression_1118  COMMA_SOURCE_FILE ("instruction-panic.galgas", 21))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i81_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_panic) COMMA_SOURCE_FILE ("instruction-panic.galgas", 18)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i82_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_ifInstructionAST var_ifInstruction_1325 ;
  nt_if_5F_instruction_ (var_ifInstruction_1325, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (var_ifInstruction_1325  COMMA_SOURCE_FILE ("instruction-if.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i82_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_if_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_if_5F_instruction_i83_ (GALGAS_ifInstructionAST & outArgument_outIfInstruction,
                                                                       C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outIfInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_if) COMMA_SOURCE_FILE ("instruction-if.galgas", 32)) ;
  GALGAS_location var_instructionLocation_1593 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 33)) ;
  GALGAS_bool var_staticIfExpression_1639 ;
  switch (select_plm_5F_syntax_69 (inCompiler)) {
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
  switch (select_plm_5F_syntax_70 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_if_5F_instruction_i83_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_if) COMMA_SOURCE_FILE ("instruction-if.galgas", 32)) ;
  switch (select_plm_5F_syntax_69 (inCompiler)) {
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
  switch (select_plm_5F_syntax_70 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_guarded_5F_command_i84_ (GALGAS_guardedCommandAST & outArgument_outGuardedCommand,
                                                                        C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outGuardedCommand.drop () ; // Release 'out' argument
  switch (select_plm_5F_syntax_71 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_when) COMMA_SOURCE_FILE ("instruction-sync.galgas", 48)) ;
    GALGAS_expressionAST var_expression_2308 ;
    nt_expression_ (var_expression_2308, inCompiler) ;
    GALGAS_location var_endOfExp_2327 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 50)) ;
    GALGAS_bool var_isWhileCommand_2371 ;
    switch (select_plm_5F_syntax_72 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_until) COMMA_SOURCE_FILE ("instruction-sync.galgas", 53)) ;
      var_isWhileCommand_2371 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_while) COMMA_SOURCE_FILE ("instruction-sync.galgas", 56)) ;
      var_isWhileCommand_2371 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_name_2525 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-sync.galgas", 59)) ;
    GALGAS_lstring var_guardName_2550 ;
    switch (select_plm_5F_syntax_73 (inCompiler)) {
    case 1: {
      var_guardName_2550 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 62)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("instruction-sync.galgas", 64)) ;
      var_guardName_2550 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-sync.galgas", 65)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_effectiveArgumentListAST var_effectiveParameterList_2713 ;
    GALGAS_location joker_2715 ; // Joker input parameter
    nt_effective_5F_parameters_ (var_effectiveParameterList_2713, joker_2715, inCompiler) ;
    joker_2715.drop () ; // Release temporary input variables (joker in source)
    outArgument_outGuardedCommand = GALGAS_guardedCommandAST::constructor_boolAndSync (var_isWhileCommand_2371, var_expression_2308, var_endOfExp_2327, var_name_2525, var_guardName_2550, var_effectiveParameterList_2713  COMMA_SOURCE_FILE ("instruction-sync.galgas", 68)) ;
  } break ;
  case 2: {
    GALGAS_bool var_isWhileCommand_3025 ;
    switch (select_plm_5F_syntax_74 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_until) COMMA_SOURCE_FILE ("instruction-sync.galgas", 79)) ;
      var_isWhileCommand_3025 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_while) COMMA_SOURCE_FILE ("instruction-sync.galgas", 82)) ;
      var_isWhileCommand_3025 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_name_3179 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-sync.galgas", 85)) ;
    switch (select_plm_5F_syntax_75 (inCompiler)) {
    case 1: {
      GALGAS_effectiveArgumentListAST var_effectiveParameterList_3251 ;
      GALGAS_location joker_3253 ; // Joker input parameter
      nt_effective_5F_parameters_ (var_effectiveParameterList_3251, joker_3253, inCompiler) ;
      joker_3253.drop () ; // Release temporary input variables (joker in source)
      outArgument_outGuardedCommand = GALGAS_guardedCommandAST::constructor_synchronization (var_isWhileCommand_3025, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 90)), var_name_3179, var_effectiveParameterList_3251  COMMA_SOURCE_FILE ("instruction-sync.galgas", 88)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("instruction-sync.galgas", 95)) ;
      GALGAS_lstring var_guardName_3537 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-sync.galgas", 96)) ;
      GALGAS_effectiveArgumentListAST var_effectiveParameterList_3596 ;
      GALGAS_location joker_3598 ; // Joker input parameter
      nt_effective_5F_parameters_ (var_effectiveParameterList_3596, joker_3598, inCompiler) ;
      joker_3598.drop () ; // Release temporary input variables (joker in source)
      outArgument_outGuardedCommand = GALGAS_guardedCommandAST::constructor_synchronization (var_isWhileCommand_3025, var_name_3179, var_guardName_3537, var_effectiveParameterList_3596  COMMA_SOURCE_FILE ("instruction-sync.galgas", 98)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_guarded_5F_command_i84_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_71 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_when) COMMA_SOURCE_FILE ("instruction-sync.galgas", 48)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_plm_5F_syntax_72 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_until) COMMA_SOURCE_FILE ("instruction-sync.galgas", 53)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_while) COMMA_SOURCE_FILE ("instruction-sync.galgas", 56)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-sync.galgas", 59)) ;
    switch (select_plm_5F_syntax_73 (inCompiler)) {
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
  } break ;
  case 2: {
    switch (select_plm_5F_syntax_74 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_until) COMMA_SOURCE_FILE ("instruction-sync.galgas", 79)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_while) COMMA_SOURCE_FILE ("instruction-sync.galgas", 82)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-sync.galgas", 85)) ;
    switch (select_plm_5F_syntax_75 (inCompiler)) {
    case 1: {
      nt_effective_5F_parameters_parse (inCompiler) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("instruction-sync.galgas", 95)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-sync.galgas", 96)) ;
      nt_effective_5F_parameters_parse (inCompiler) ;
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i85_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_sync) COMMA_SOURCE_FILE ("instruction-sync.galgas", 111)) ;
  GALGAS_location var_startLocation_4066 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 112)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("instruction-sync.galgas", 113)) ;
  GALGAS_syncInstructionBranchListAST var_onInstructionBranchList_4149 = GALGAS_syncInstructionBranchListAST::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 114)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_guardedCommandAST var_guardedCommand_4228 ;
    nt_guarded_5F_command_ (var_guardedCommand_4228, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("instruction-sync.galgas", 117)) ;
    GALGAS_instructionListAST var_instructionList_4283 ;
    nt_instructionList_ (var_instructionList_4283, inCompiler) ;
    var_onInstructionBranchList_4149.addAssign_operation (var_guardedCommand_4228, var_instructionList_4283, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 119))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 119)) ;
    switch (select_plm_5F_syntax_76 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_syncInstructionAST::constructor_new (var_startLocation_4066, var_onInstructionBranchList_4149, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 122))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 122))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 122)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("instruction-sync.galgas", 123)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i85_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_sync) COMMA_SOURCE_FILE ("instruction-sync.galgas", 111)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("instruction-sync.galgas", 113)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_guarded_5F_command_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("instruction-sync.galgas", 117)) ;
    nt_instructionList_parse (inCompiler) ;
    switch (select_plm_5F_syntax_76 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i86_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_loop) COMMA_SOURCE_FILE ("instruction-while.galgas", 21)) ;
  GALGAS_location var_instructionLocation_1184 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 22)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_while) COMMA_SOURCE_FILE ("instruction-while.galgas", 23)) ;
  GALGAS_expressionAST var_testExpression_1265 ;
  nt_expression_ (var_testExpression_1265, inCompiler) ;
  GALGAS_location var_testExpressionEndLocation_1299 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 25)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("instruction-while.galgas", 26)) ;
  GALGAS_instructionListAST var_instructionList_1367 ;
  nt_instructionList_ (var_instructionList_1367, inCompiler) ;
  GALGAS_location var_endOfInstruction_1392 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("instruction-while.galgas", 29)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_whileInstructionAST::constructor_new (var_instructionLocation_1184, var_testExpression_1265, var_testExpressionEndLocation_1299, var_instructionList_1367, var_endOfInstruction_1392  COMMA_SOURCE_FILE ("instruction-while.galgas", 30))  COMMA_SOURCE_FILE ("instruction-while.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i86_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_loop) COMMA_SOURCE_FILE ("instruction-while.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_while) COMMA_SOURCE_FILE ("instruction-while.galgas", 23)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("instruction-while.galgas", 26)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("instruction-while.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i87_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_for) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 24)) ;
  GALGAS_lstring var_varName_1253 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 25)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_in) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 26)) ;
  GALGAS_lstring var_iteratedObject_1299 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 27)) ;
  GALGAS_bool var_staticWhileExpression_1329 = GALGAS_bool (false) ;
  GALGAS_expressionAST var_whileExpression_1372 ;
  switch (select_plm_5F_syntax_77 (inCompiler)) {
  case 1: {
    var_whileExpression_1372 = GALGAS_literalBooleanInExpressionAST::constructor_new (GALGAS_bool (true)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 31)) ;
    var_staticWhileExpression_1329 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_while) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 34)) ;
    switch (select_plm_5F_syntax_78 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i87_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_for) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 24)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 25)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_in) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 26)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 27)) ;
  switch (select_plm_5F_syntax_77 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_while) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 34)) ;
    switch (select_plm_5F_syntax_78 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i88_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_for) COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 25)) ;
  GALGAS_lstring var_varName_1334 ;
  switch (select_plm_5F_syntax_79 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i88_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_for) COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 25)) ;
  switch (select_plm_5F_syntax_79 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i89_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_callInstructionAST var_routineCallInstruction_1593 ;
  nt_procedure_5F_call_ (var_routineCallInstruction_1593, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (var_routineCallInstruction_1593  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i89_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_procedure_5F_call_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_procedure_5F_call_i90_ (GALGAS_callInstructionAST & outArgument_outInstruction,
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_procedure_5F_call_i90_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_lvalue_parse (inCompiler) ;
  nt_effective_5F_parameters_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i91_ (GALGAS_instructionListAST & ioArgument_ioInstructionList,
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
      switch (select_plm_5F_syntax_81 (inCompiler)) {
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
    switch (select_plm_5F_syntax_80 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i91_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_switch) COMMA_SOURCE_FILE ("instruction-switch.galgas", 28)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_case) COMMA_SOURCE_FILE ("instruction-switch.galgas", 35)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
      switch (select_plm_5F_syntax_81 (inCompiler)) {
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
    switch (select_plm_5F_syntax_80 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_lvalue_i92_ (GALGAS_LValueAST & outArgument_outAssignmentTargetAST,
                                                            C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outAssignmentTargetAST.drop () ; // Release 'out' argument
  GALGAS_lstring var_receiver_1485 ;
  switch (select_plm_5F_syntax_82 (inCompiler)) {
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
    switch (select_plm_5F_syntax_83 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_lvalue_i92_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_82 (inCompiler)) {
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
    switch (select_plm_5F_syntax_83 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_effective_5F_parameters_i93_ (GALGAS_effectiveArgumentListAST & outArgument_outEffectiveParameterList,
                                                                             GALGAS_location & outArgument_outEndOfArgs,
                                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outEndOfArgs.drop () ; // Release 'out' argument
  outArgument_outEffectiveParameterList = GALGAS_effectiveArgumentListAST::constructor_emptyList (SOURCE_FILE ("effective-parameters.galgas", 41)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_84 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_2015 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 45)) ;
      GALGAS_expressionAST var_expression_2050 ;
      nt_expression_ (var_expression_2050, inCompiler) ;
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_output (var_expression_2050, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 47))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 47)), var_selector_2015  COMMA_SOURCE_FILE ("effective-parameters.galgas", 47)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_2172 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21__3F_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 49)) ;
      GALGAS_lstring var_effectiveParameterName_2219 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("effective-parameters.galgas", 50)) ;
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_outputInput (var_effectiveParameterName_2219  COMMA_SOURCE_FILE ("effective-parameters.galgas", 51)), var_selector_2172  COMMA_SOURCE_FILE ("effective-parameters.galgas", 51)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_2343 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21__3F_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 53)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_self) COMMA_SOURCE_FILE ("effective-parameters.galgas", 54)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 55)) ;
      GALGAS_lstring var_effectiveParameterName_2413 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("effective-parameters.galgas", 56)) ;
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_outputInputSelfVariable (var_effectiveParameterName_2413  COMMA_SOURCE_FILE ("effective-parameters.galgas", 57)), var_selector_2343  COMMA_SOURCE_FILE ("effective-parameters.galgas", 57)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_selector_2548 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3F_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 59)) ;
      GALGAS_lstring var_effectiveParameterName_2595 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("effective-parameters.galgas", 60)) ;
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_input (var_effectiveParameterName_2595  COMMA_SOURCE_FILE ("effective-parameters.galgas", 61)), var_selector_2548  COMMA_SOURCE_FILE ("effective-parameters.galgas", 61)) ;
    } break ;
    case 6: {
      GALGAS_lstring var_selector_2712 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3F_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 63)) ;
      GALGAS_bool var_constant_2733 ;
      switch (select_plm_5F_syntax_85 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_var) COMMA_SOURCE_FILE ("effective-parameters.galgas", 66)) ;
        var_constant_2733 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_let) COMMA_SOURCE_FILE ("effective-parameters.galgas", 69)) ;
        var_constant_2733 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_effectiveParameterName_2889 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("effective-parameters.galgas", 72)) ;
      GALGAS_lstring var_typeName_2913 ;
      switch (select_plm_5F_syntax_86 (inCompiler)) {
      case 1: {
        var_typeName_2913 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("effective-parameters.galgas", 75)) ;
      } break ;
      case 2: {
        var_typeName_2913 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("effective-parameters.galgas", 77)) ;
      } break ;
      default:
        break ;
      }
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_inputWithType (var_constant_2733, var_typeName_2913, var_effectiveParameterName_2889  COMMA_SOURCE_FILE ("effective-parameters.galgas", 80)), var_selector_2712  COMMA_SOURCE_FILE ("effective-parameters.galgas", 79)) ;
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_effective_5F_parameters_i93_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_84 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 45)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21__3F_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 49)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("effective-parameters.galgas", 50)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__21__3F_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 53)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_self) COMMA_SOURCE_FILE ("effective-parameters.galgas", 54)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 55)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("effective-parameters.galgas", 56)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3F_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 59)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("effective-parameters.galgas", 60)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3F_) COMMA_SOURCE_FILE ("effective-parameters.galgas", 63)) ;
      switch (select_plm_5F_syntax_85 (inCompiler)) {
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
      switch (select_plm_5F_syntax_86 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i94_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_target) COMMA_SOURCE_FILE ("target-generation.galgas", 10)) ;
  GALGAS_lstring var_targetName_595 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("target-generation.galgas", 11)) ;
  ioArgument_ioAST.mProperty_mTargetListAST.addAssign_operation (var_targetName_595  COMMA_SOURCE_FILE ("target-generation.galgas", 12)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i94_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_target) COMMA_SOURCE_FILE ("target-generation.galgas", 10)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("target-generation.galgas", 11)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i95_ (GALGAS_ast & ioArgument_ioAST,
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
    switch (select_plm_5F_syntax_87 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i95_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_check) COMMA_SOURCE_FILE ("declaration-check-target.galgas", 10)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_target) COMMA_SOURCE_FILE ("declaration-check-target.galgas", 11)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("declaration-check-target.galgas", 15)) ;
    switch (select_plm_5F_syntax_87 (inCompiler)) {
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

