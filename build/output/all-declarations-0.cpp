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

//--- Syntax error message for terminal '$commentMark$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_commentMark = "a comment" ;

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

//--- Syntax error message for terminal '$boot$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_boot = "the 'boot' keyword" ;

//--- Syntax error message for terminal '$case$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_case = "the 'case' keyword" ;

//--- Syntax error message for terminal '$check$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_check = "the 'check' keyword" ;

//--- Syntax error message for terminal '$convert$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_convert = "the 'convert' keyword" ;

//--- Syntax error message for terminal '$driver$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_driver = "the 'driver' keyword" ;

//--- Syntax error message for terminal '$else$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_else = "the 'else' keyword" ;

//--- Syntax error message for terminal '$enum$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_enum = "the 'enum' keyword" ;

//--- Syntax error message for terminal '$exit$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_exit = "the 'exit' keyword" ;

//--- Syntax error message for terminal '$extend$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_extend = "the 'extend' keyword" ;

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

//--- Syntax error message for terminal '$interrupt$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_interrupt = "the 'interrupt' keyword" ;

//--- Syntax error message for terminal '$let$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_let = "the 'let' keyword" ;

//--- Syntax error message for terminal '$loop$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_loop = "the 'loop' keyword" ;

//--- Syntax error message for terminal '$no$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_no = "the 'no' keyword" ;

//--- Syntax error message for terminal '$nop$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_nop = "the 'nop' keyword" ;

//--- Syntax error message for terminal '$not$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_not = "the 'not' keyword" ;

//--- Syntax error message for terminal '$on$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_on = "the 'on' keyword" ;

//--- Syntax error message for terminal '$opaque$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_opaque = "the 'opaque' keyword" ;

//--- Syntax error message for terminal '$or$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_or = "the 'or' keyword" ;

//--- Syntax error message for terminal '$panic$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_panic = "the 'panic' keyword" ;

//--- Syntax error message for terminal '$primitive$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_primitive = "the 'primitive' keyword" ;

//--- Syntax error message for terminal '$public$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_public = "the 'public' keyword" ;

//--- Syntax error message for terminal '$registers$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_registers = "the 'registers' keyword" ;

//--- Syntax error message for terminal '$required$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_required = "the 'required' keyword" ;

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

//--- Syntax error message for terminal '$typealias$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_typealias = "the 'typealias' keyword" ;

//--- Syntax error message for terminal '$var$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_var = "the 'var' keyword" ;

//--- Syntax error message for terminal '$user$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_user = "the 'user' keyword" ;

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

//--- Syntax error message for terminal '$...$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__2E__2E__2E_ = "the '...' delimitor" ;

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
  C_String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 117)) {
    static const char * syntaxErrorMessageArray [117] = {kEndOfSourceLexicalErrorMessage,
        gSyntaxErrorMessage_plm_5F_lexique_identifier,
        gSyntaxErrorMessage_plm_5F_lexique__40_attribute,
        gSyntaxErrorMessage_plm_5F_lexique__24_type,
        gSyntaxErrorMessage_plm_5F_lexique_integer,
        gSyntaxErrorMessage_plm_5F_lexique__22_string_22_,
        gSyntaxErrorMessage_plm_5F_lexique_comment,
        gSyntaxErrorMessage_plm_5F_lexique_commentMark,
        gSyntaxErrorMessage_plm_5F_lexique__3F_selector_3A_,
        gSyntaxErrorMessage_plm_5F_lexique__3F__21_selector_3A_,
        gSyntaxErrorMessage_plm_5F_lexique__21_selector_3A_,
        gSyntaxErrorMessage_plm_5F_lexique__21__3F_selector_3A_,
        gSyntaxErrorMessage_plm_5F_lexique_addressof,
        gSyntaxErrorMessage_plm_5F_lexique_and,
        gSyntaxErrorMessage_plm_5F_lexique_assert,
        gSyntaxErrorMessage_plm_5F_lexique_boot,
        gSyntaxErrorMessage_plm_5F_lexique_case,
        gSyntaxErrorMessage_plm_5F_lexique_check,
        gSyntaxErrorMessage_plm_5F_lexique_convert,
        gSyntaxErrorMessage_plm_5F_lexique_driver,
        gSyntaxErrorMessage_plm_5F_lexique_else,
        gSyntaxErrorMessage_plm_5F_lexique_enum,
        gSyntaxErrorMessage_plm_5F_lexique_exit,
        gSyntaxErrorMessage_plm_5F_lexique_extend,
        gSyntaxErrorMessage_plm_5F_lexique_extern,
        gSyntaxErrorMessage_plm_5F_lexique_for,
        gSyntaxErrorMessage_plm_5F_lexique_func,
        gSyntaxErrorMessage_plm_5F_lexique_guard,
        gSyntaxErrorMessage_plm_5F_lexique_if,
        gSyntaxErrorMessage_plm_5F_lexique_import,
        gSyntaxErrorMessage_plm_5F_lexique_in,
        gSyntaxErrorMessage_plm_5F_lexique_init,
        gSyntaxErrorMessage_plm_5F_lexique_interrupt,
        gSyntaxErrorMessage_plm_5F_lexique_let,
        gSyntaxErrorMessage_plm_5F_lexique_loop,
        gSyntaxErrorMessage_plm_5F_lexique_no,
        gSyntaxErrorMessage_plm_5F_lexique_nop,
        gSyntaxErrorMessage_plm_5F_lexique_not,
        gSyntaxErrorMessage_plm_5F_lexique_on,
        gSyntaxErrorMessage_plm_5F_lexique_opaque,
        gSyntaxErrorMessage_plm_5F_lexique_or,
        gSyntaxErrorMessage_plm_5F_lexique_panic,
        gSyntaxErrorMessage_plm_5F_lexique_primitive,
        gSyntaxErrorMessage_plm_5F_lexique_public,
        gSyntaxErrorMessage_plm_5F_lexique_registers,
        gSyntaxErrorMessage_plm_5F_lexique_required,
        gSyntaxErrorMessage_plm_5F_lexique_section,
        gSyntaxErrorMessage_plm_5F_lexique_self,
        gSyntaxErrorMessage_plm_5F_lexique_service,
        gSyntaxErrorMessage_plm_5F_lexique_setup,
        gSyntaxErrorMessage_plm_5F_lexique_sizeof,
        gSyntaxErrorMessage_plm_5F_lexique_struct,
        gSyntaxErrorMessage_plm_5F_lexique_staticArray,
        gSyntaxErrorMessage_plm_5F_lexique_switch,
        gSyntaxErrorMessage_plm_5F_lexique_sync,
        gSyntaxErrorMessage_plm_5F_lexique_system,
        gSyntaxErrorMessage_plm_5F_lexique_target,
        gSyntaxErrorMessage_plm_5F_lexique_task,
        gSyntaxErrorMessage_plm_5F_lexique_truncate,
        gSyntaxErrorMessage_plm_5F_lexique_typealias,
        gSyntaxErrorMessage_plm_5F_lexique_var,
        gSyntaxErrorMessage_plm_5F_lexique_user,
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
        gSyntaxErrorMessage_plm_5F_lexique__2E__2E__2E_,
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
        gSyntaxErrorMessage_plm_5F_lexique__3E__3E__3D_
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
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

//--- Unicode string for '$_2E__2E__2E_$'
static const utf32 kUnicodeString_plm_5F_lexique__2E__2E__2E_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
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

//--- Unicode string for '$_2F__2F__21_$'
static const utf32 kUnicodeString_plm_5F_lexique__2F__2F__21_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE ('/'),
  TO_UNICODE ('!'),
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

//--- Unicode string for '$driver$'
static const utf32 kUnicodeString_plm_5F_lexique_driver [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
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

//--- Unicode string for '$interrupt$'
static const utf32 kUnicodeString_plm_5F_lexique_interrupt [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
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

//--- Unicode string for '$opaque$'
static const utf32 kUnicodeString_plm_5F_lexique_opaque [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE ('a'),
  TO_UNICODE ('q'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
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

//--- Unicode string for '$registers$'
static const utf32 kUnicodeString_plm_5F_lexique_registers [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('g'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('s'),
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

//--- Unicode string for '$typealias$'
static const utf32 kUnicodeString_plm_5F_lexique_typealias [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('y'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
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

static const int32_t ktable_size_plm_5F_lexique_delimitorsList = 52 ;

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
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__2E__2E__2E_, 3, C_Lexique_plm_5F_lexique::kToken__2E__2E__2E_),
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

static const int32_t ktable_size_plm_5F_lexique_keyWordList = 53 ;

static const C_unicode_lexique_table_entry ktable_for_plm_5F_lexique_keyWordList [ktable_size_plm_5F_lexique_keyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_if, 2, C_Lexique_plm_5F_lexique::kToken_if),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_in, 2, C_Lexique_plm_5F_lexique::kToken_in),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_no, 2, C_Lexique_plm_5F_lexique::kToken_no),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_on, 2, C_Lexique_plm_5F_lexique::kToken_on),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_or, 2, C_Lexique_plm_5F_lexique::kToken_or),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_and, 3, C_Lexique_plm_5F_lexique::kToken_and),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_for, 3, C_Lexique_plm_5F_lexique::kToken_for),
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
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_self, 4, C_Lexique_plm_5F_lexique::kToken_self),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_sync, 4, C_Lexique_plm_5F_lexique::kToken_sync),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_task, 4, C_Lexique_plm_5F_lexique::kToken_task),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_user, 4, C_Lexique_plm_5F_lexique::kToken_user),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_check, 5, C_Lexique_plm_5F_lexique::kToken_check),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_guard, 5, C_Lexique_plm_5F_lexique::kToken_guard),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_panic, 5, C_Lexique_plm_5F_lexique::kToken_panic),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_setup, 5, C_Lexique_plm_5F_lexique::kToken_setup),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_while, 5, C_Lexique_plm_5F_lexique::kToken_while),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_assert, 6, C_Lexique_plm_5F_lexique::kToken_assert),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_driver, 6, C_Lexique_plm_5F_lexique::kToken_driver),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_extend, 6, C_Lexique_plm_5F_lexique::kToken_extend),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_extern, 6, C_Lexique_plm_5F_lexique::kToken_extern),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_import, 6, C_Lexique_plm_5F_lexique::kToken_import),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_opaque, 6, C_Lexique_plm_5F_lexique::kToken_opaque),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_public, 6, C_Lexique_plm_5F_lexique::kToken_public),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_sizeof, 6, C_Lexique_plm_5F_lexique::kToken_sizeof),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_struct, 6, C_Lexique_plm_5F_lexique::kToken_struct),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_switch, 6, C_Lexique_plm_5F_lexique::kToken_switch),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_system, 6, C_Lexique_plm_5F_lexique::kToken_system),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_target, 6, C_Lexique_plm_5F_lexique::kToken_target),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_convert, 7, C_Lexique_plm_5F_lexique::kToken_convert),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_section, 7, C_Lexique_plm_5F_lexique::kToken_section),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_service, 7, C_Lexique_plm_5F_lexique::kToken_service),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_required, 8, C_Lexique_plm_5F_lexique::kToken_required),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_truncate, 8, C_Lexique_plm_5F_lexique::kToken_truncate),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_addressof, 9, C_Lexique_plm_5F_lexique::kToken_addressof),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_interrupt, 9, C_Lexique_plm_5F_lexique::kToken_interrupt),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_primitive, 9, C_Lexique_plm_5F_lexique::kToken_primitive),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_registers, 9, C_Lexique_plm_5F_lexique::kToken_registers),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_typealias, 9, C_Lexique_plm_5F_lexique::kToken_typealias),
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
    case kToken_commentMark:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("commentMark") ;
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
    case kToken_driver:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("driver") ;
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
    case kToken_interrupt:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("interrupt") ;
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
    case kToken_opaque:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("opaque") ;
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
    case kToken_public:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("public") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_registers:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("registers") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_required:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("required") ;
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
    case kToken_typealias:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("typealias") ;
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
    case kToken__2E__2E__2E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("...") ;
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
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2F__2F__21_, 3, true)) {
        do {
          if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        enterDroppedTerminal (kToken_commentMark) ;
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
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2E__2E__2E_, 3, true)) {
        token.mTokenCode = kToken__2E__2E__2E_ ;
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
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
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
        }else if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
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
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
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
        }else if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
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
  // ptr->mIsOptional = ioToken.mIsOptional ;
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
  cTokenFor_plm_5F_lexique * ptr = (cTokenFor_plm_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_bigInteger ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_plm_5F_lexique::attributeValue_tokenString (void) const {
  cTokenFor_plm_5F_lexique * ptr = (cTokenFor_plm_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//---------------------------------------------------------------------------------------------------------------------*
//         A S S I G N    F R O M    A T T R I B U T E                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint C_Lexique_plm_5F_lexique::synthetizedAttribute_bigInteger (void) const {
  cTokenFor_plm_5F_lexique * ptr = (cTokenFor_plm_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_plm_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_bigint value (ptr->mLexicalAttribute_bigInteger) ;
  GALGAS_lbigint result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring C_Lexique_plm_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_plm_5F_lexique * ptr = (cTokenFor_plm_5F_lexique *) currentTokenPtr (HERE) ;
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
  result.addAssign_operation (GALGAS_string ("commentMark") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?selector:") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?!selector:") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!selector:") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!\?selector:") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("addressof") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("and") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("assert") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("boot") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("case") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("check") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("convert") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("driver") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("else") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("enum") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("exit") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("extend") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("extern") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("for") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("func") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("guard") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("if") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("import") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("in") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("init") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("interrupt") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("let") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("loop") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("no") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("nop") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("not") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("on") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("opaque") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("or") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("panic") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("primitive") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("public") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("registers") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("required") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("section") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("self") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("service") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("setup") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sizeof") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("struct") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("staticArray") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("switch") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sync") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("system") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("target") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("task") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("truncate") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("typealias") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("var") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("user") COMMA_THERE) ;
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
  result.addAssign_operation (GALGAS_string ("...") COMMA_THERE) ;
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
    ioList.appendObject ("...") ;
    ioList.appendObject ("..<") ;
    ioList.appendObject ("<<=") ;
    ioList.appendObject (">>=") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "plm_lexique:keyWordList") {
    ioFound = true ;
    ioList.appendObject ("if") ;
    ioList.appendObject ("in") ;
    ioList.appendObject ("no") ;
    ioList.appendObject ("on") ;
    ioList.appendObject ("or") ;
    ioList.appendObject ("and") ;
    ioList.appendObject ("for") ;
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
    ioList.appendObject ("self") ;
    ioList.appendObject ("sync") ;
    ioList.appendObject ("task") ;
    ioList.appendObject ("user") ;
    ioList.appendObject ("check") ;
    ioList.appendObject ("guard") ;
    ioList.appendObject ("panic") ;
    ioList.appendObject ("setup") ;
    ioList.appendObject ("while") ;
    ioList.appendObject ("assert") ;
    ioList.appendObject ("driver") ;
    ioList.appendObject ("extend") ;
    ioList.appendObject ("extern") ;
    ioList.appendObject ("import") ;
    ioList.appendObject ("opaque") ;
    ioList.appendObject ("public") ;
    ioList.appendObject ("sizeof") ;
    ioList.appendObject ("struct") ;
    ioList.appendObject ("switch") ;
    ioList.appendObject ("system") ;
    ioList.appendObject ("target") ;
    ioList.appendObject ("convert") ;
    ioList.appendObject ("section") ;
    ioList.appendObject ("service") ;
    ioList.appendObject ("required") ;
    ioList.appendObject ("truncate") ;
    ioList.appendObject ("addressof") ;
    ioList.appendObject ("interrupt") ;
    ioList.appendObject ("primitive") ;
    ioList.appendObject ("registers") ;
    ioList.appendObject ("typealias") ;
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
    6 /* plm_lexique_1_commentMark */,
    8 /* plm_lexique_1__3F_selector_3A_ */,
    8 /* plm_lexique_1__3F__21_selector_3A_ */,
    8 /* plm_lexique_1__21_selector_3A_ */,
    8 /* plm_lexique_1__21__3F_selector_3A_ */,
    1 /* plm_lexique_1_addressof */,
    1 /* plm_lexique_1_and */,
    1 /* plm_lexique_1_assert */,
    1 /* plm_lexique_1_boot */,
    1 /* plm_lexique_1_case */,
    1 /* plm_lexique_1_check */,
    1 /* plm_lexique_1_convert */,
    1 /* plm_lexique_1_driver */,
    1 /* plm_lexique_1_else */,
    1 /* plm_lexique_1_enum */,
    1 /* plm_lexique_1_exit */,
    1 /* plm_lexique_1_extend */,
    1 /* plm_lexique_1_extern */,
    1 /* plm_lexique_1_for */,
    1 /* plm_lexique_1_func */,
    1 /* plm_lexique_1_guard */,
    1 /* plm_lexique_1_if */,
    1 /* plm_lexique_1_import */,
    1 /* plm_lexique_1_in */,
    1 /* plm_lexique_1_init */,
    1 /* plm_lexique_1_interrupt */,
    1 /* plm_lexique_1_let */,
    1 /* plm_lexique_1_loop */,
    1 /* plm_lexique_1_no */,
    1 /* plm_lexique_1_nop */,
    1 /* plm_lexique_1_not */,
    1 /* plm_lexique_1_on */,
    1 /* plm_lexique_1_opaque */,
    1 /* plm_lexique_1_or */,
    1 /* plm_lexique_1_panic */,
    1 /* plm_lexique_1_primitive */,
    1 /* plm_lexique_1_public */,
    1 /* plm_lexique_1_registers */,
    1 /* plm_lexique_1_required */,
    1 /* plm_lexique_1_section */,
    1 /* plm_lexique_1_self */,
    1 /* plm_lexique_1_service */,
    1 /* plm_lexique_1_setup */,
    1 /* plm_lexique_1_sizeof */,
    1 /* plm_lexique_1_struct */,
    1 /* plm_lexique_1_staticArray */,
    1 /* plm_lexique_1_switch */,
    1 /* plm_lexique_1_sync */,
    1 /* plm_lexique_1_system */,
    1 /* plm_lexique_1_target */,
    1 /* plm_lexique_1_task */,
    1 /* plm_lexique_1_truncate */,
    1 /* plm_lexique_1_typealias */,
    1 /* plm_lexique_1_var */,
    1 /* plm_lexique_1_user */,
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
    7 /* plm_lexique_1__2E__2E__2E_ */,
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
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_import COMMA_SOURCE_FILE ("syntax-grammar.galgas", 10)) ;
  GALGAS_lstring var_importedFile_622 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("syntax-grammar.galgas", 11)) ;
  ioArgument_ioImportedFileList.addAssign_operation (var_importedFile_622  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 12)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_importedFile_622.getter_string (HERE).getter_pathExtension (SOURCE_FILE ("syntax-grammar.galgas", 13)).objectCompare (GALGAS_string ("plm"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_importedFile_622.getter_location (SOURCE_FILE ("syntax-grammar.galgas", 14)), GALGAS_string ("the pah extension should be .plm"), fixItArray1  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 14)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_import_5F_file_i0_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_import COMMA_SOURCE_FILE ("syntax-grammar.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("syntax-grammar.galgas", 11)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_start_5F_symbol_i1_ (GALGAS_ast & ioArgument_ioAST,
                                                                    GALGAS_lstringlist & outArgument_outImportedFileList,
                                                                    GALGAS_location & outArgument_outEndOfSourceFile,
                                                                    C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outImportedFileList.drop () ; // Release 'out' argument
  outArgument_outEndOfSourceFile.drop () ; // Release 'out' argument
  outArgument_outImportedFileList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("syntax-grammar.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_0 (inCompiler)) {
    case 2: {
      nt_declaration_ (ioArgument_ioAST, inCompiler) ;
    } break ;
    case 3: {
      GALGAS_functionDeclarationListAST var_standAloneFunctionDeclarationListAST_1223 = GALGAS_functionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("syntax-grammar.galgas", 31)) ;
      nt_function_ (ioArgument_ioAST, var_standAloneFunctionDeclarationListAST_1223, inCompiler) ;
      ioArgument_ioAST.mProperty_mStandAloneFunctionDeclarationListAST.plusAssign_operation(var_standAloneFunctionDeclarationListAST_1223, inCompiler  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 33)) ;
    } break ;
    case 4: {
      GALGAS_systemRoutineDeclarationListAST var_standAloneSystemRoutineListAST_1462 = GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (SOURCE_FILE ("syntax-grammar.galgas", 35)) ;
      nt_system_5F_routine_ (ioArgument_ioAST, var_standAloneSystemRoutineListAST_1462, inCompiler) ;
      ioArgument_ioAST.mProperty_mStandAloneSystemRoutineListAST.plusAssign_operation(var_standAloneSystemRoutineListAST_1462, inCompiler  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 37)) ;
    } break ;
    case 5: {
      nt_import_5F_file_ (outArgument_outImportedFileList, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outEndOfSourceFile = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 41)) ;
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
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_typealias COMMA_SOURCE_FILE ("declaration-type.galgas", 25)) ;
  GALGAS_lstring var_newTypeName_1309 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("declaration-type.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type.galgas", 27)) ;
  GALGAS_lstring var_typeName_1361 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1361, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_newTypeDeclaration::constructor_new (var_newTypeName_1309, var_typeName_1361  COMMA_SOURCE_FILE ("declaration-type.galgas", 29))  COMMA_SOURCE_FILE ("declaration-type.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i2_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_typealias COMMA_SOURCE_FILE ("declaration-type.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("declaration-type.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type.galgas", 27)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_type_5F_definition_i3_ (GALGAS_ast & /* ioArgument_ioAST */,
                                                                       GALGAS_lstring & outArgument_outTypeName,
                                                                       C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("declaration-type.galgas", 35)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_type_5F_definition_i3_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("declaration-type.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_type_5F_definition_i4_ (GALGAS_ast & ioArgument_ioAST,
                                                                       GALGAS_lstring & outArgument_outTypeName,
                                                                       C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  GALGAS_lstring var_elementTypeName_1169 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-array.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-array.galgas", 22)) ;
  GALGAS_expressionAST var_sizeExpression_1222 ;
  nt_expression_ (ioArgument_ioAST, var_sizeExpression_1222, inCompiler) ;
  GALGAS_location var_sizeExpressionLocation_1253 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-array.galgas", 25)) ;
  outArgument_outTypeName = GALGAS_string ("anonymous.").add_operation (ioArgument_ioAST.getter_mTypeDeclarationIndex (HERE).getter_string (SOURCE_FILE ("type-array.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 26)).getter_here (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 26)) ;
  ioArgument_ioAST.mProperty_mTypeDeclarationIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 27)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_typeArrayDeclarationAST::constructor_new (outArgument_outTypeName, var_elementTypeName_1169, var_sizeExpression_1222, var_sizeExpressionLocation_1253  COMMA_SOURCE_FILE ("type-array.galgas", 28))  COMMA_SOURCE_FILE ("type-array.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_type_5F_definition_i4_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-array.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-array.galgas", 22)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-array.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_type_5F_definition_i5_ (GALGAS_ast & ioArgument_ioAST,
                                                                       GALGAS_lstring & outArgument_outTypeName,
                                                                       C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 19)) ;
  GALGAS_lstring var_elementTypeName_1122 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 21)) ;
  outArgument_outTypeName = GALGAS_string ("anonymous.").add_operation (ioArgument_ioAST.getter_mTypeDeclarationIndex (HERE).getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 22)).getter_here (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 22)) ;
  ioArgument_ioAST.mProperty_mTypeDeclarationIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 23)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_typeDynamicArrayDeclarationAST::constructor_new (outArgument_outTypeName, var_elementTypeName_1122  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 24))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 24)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_type_5F_definition_i5_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 21)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i6_ (GALGAS_ast & ioArgument_ioAST,
                                                                C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 26)) ;
  GALGAS_lstring var_enumName_1295 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 28)) ;
  GALGAS_enumerationConstantList var_enumCaseList_1345 = GALGAS_enumerationConstantList::constructor_emptyList (SOURCE_FILE ("type-enumeration-declaration.galgas", 29)) ;
  GALGAS_bigint var_idx_1362 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_case COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 32)) ;
    GALGAS_lstring var_constantName_1428 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 33)) ;
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
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 38)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_enumerationDeclarationAST::constructor_new (var_enumName_1295, var_enumCaseList_1345  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 39))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i6_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_case COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 32)) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 33)) ;
    switch (select_plm_5F_syntax_1 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 38)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i7_ (GALGAS_ast & ioArgument_ioAST,
                                                                                                                 GALGAS_structurePropertyListAST & ioArgument_ioFieldListAST,
                                                                                                                 const GALGAS_bool constinArgument_isSingletonObject,
                                                                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_public_2432 ;
  switch (select_plm_5F_syntax_2 (inCompiler)) {
  case 1: {
    var_public_2432 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_public COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 59)) ;
    var_public_2432 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  nt_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_public_2432, ioArgument_ioFieldListAST, constinArgument_isSingletonObject, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i7_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_public COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 59)) ;
  } break ;
  default:
    break ;
  }
  nt_struct_5F_property_5F_declaration_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_private_5F_struct_5F_property_5F_declaration_i8_ (GALGAS_ast & ioArgument_ioAST,
                                                                                                 GALGAS_structurePropertyListAST & ioArgument_ioFieldListAST,
                                                                                                 const GALGAS_bool constinArgument_isSingletonObject,
                                                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  nt_struct_5F_property_5F_declaration_ (ioArgument_ioAST, GALGAS_bool (false), ioArgument_ioFieldListAST, constinArgument_isSingletonObject, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_private_5F_struct_5F_property_5F_declaration_i8_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_struct_5F_property_5F_declaration_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_struct_5F_property_5F_declaration_i9_ (GALGAS_ast & ioArgument_ioAST,
                                                                                      const GALGAS_bool constinArgument_isPublic,
                                                                                      GALGAS_structurePropertyListAST & ioArgument_ioFieldListAST,
                                                                                      const GALGAS_bool constinArgument_isSingletonObject,
                                                                                      C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_constant_3266 ;
  switch (select_plm_5F_syntax_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_var COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 85)) ;
    var_constant_3266 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 88)) ;
    var_constant_3266 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_fieldName_3393 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 91)) ;
  switch (select_plm_5F_syntax_4 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_typeName_3451 ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_3451, inCompiler) ;
    switch (select_plm_5F_syntax_5 (inCompiler)) {
    case 1: {
      ioArgument_ioFieldListAST.addAssign_operation (var_fieldName_3393, GALGAS_propertyAttributeList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 95)), var_constant_3266, constinArgument_isPublic, var_typeName_3451, GALGAS_structurePropertyInitOptionalExpressionAST::constructor_noExpression (SOURCE_FILE ("type-structure-declaration.galgas", 95)), constinArgument_isSingletonObject  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 95)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 97)) ;
      GALGAS_expressionAST var_initExpression_3639 ;
      nt_expression_ (ioArgument_ioAST, var_initExpression_3639, inCompiler) ;
      ioArgument_ioFieldListAST.addAssign_operation (var_fieldName_3393, GALGAS_propertyAttributeList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 101)), var_constant_3266, constinArgument_isPublic, var_typeName_3451, GALGAS_structurePropertyInitOptionalExpressionAST::constructor_expression (var_initExpression_3639  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 105)), constinArgument_isSingletonObject  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 99)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 109)) ;
    GALGAS_expressionAST var_initExpression_3919 ;
    nt_expression_ (ioArgument_ioAST, var_initExpression_3919, inCompiler) ;
    ioArgument_ioFieldListAST.addAssign_operation (var_fieldName_3393, GALGAS_propertyAttributeList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 113)), var_constant_3266, constinArgument_isPublic, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 116)), GALGAS_structurePropertyInitOptionalExpressionAST::constructor_expression (var_initExpression_3919  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 117)), constinArgument_isSingletonObject  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 111)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_struct_5F_property_5F_declaration_i9_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_var COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 85)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 88)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 91)) ;
  switch (select_plm_5F_syntax_4 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_parse (inCompiler) ;
    switch (select_plm_5F_syntax_5 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 97)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 109)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_structure_5F_function_i10_ (GALGAS_ast & ioArgument_ioAST,
                                                                           GALGAS_functionDeclarationListAST & ioArgument_ioProcListAST,
                                                                           C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_public_4350 ;
  switch (select_plm_5F_syntax_6 (inCompiler)) {
  case 1: {
    var_public_4350 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_public COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 129)) ;
    var_public_4350 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_func COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 132)) ;
  GALGAS_lstring var_procName_4474 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 133)) ;
  GALGAS_lstringlist var_attributeList_4505 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 134)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_7 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_4565 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 137)) ;
      var_attributeList_4505.addAssign_operation (var_attribute_4565  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 138)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_routineFormalArgumentListAST var_procFormalArgumentList_4677 ;
  nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_procFormalArgumentList_4677, inCompiler) ;
  GALGAS_lstring var_returnTypeName_4705 ;
  switch (select_plm_5F_syntax_8 (inCompiler)) {
  case 1: {
    var_returnTypeName_4705 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 143)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 145)) ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_4705, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 148)) ;
  GALGAS_instructionListAST var_instructionList_4882 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_4882, inCompiler) ;
  ioArgument_ioProcListAST.addAssign_operation (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 151)), var_public_4350, var_procName_4474, var_attributeList_4505, var_procFormalArgumentList_4677, var_returnTypeName_4705, var_instructionList_4882, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 158))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 150)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 159)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_structure_5F_function_i10_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_public COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 129)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_func COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 132)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 133)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 137)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
  switch (select_plm_5F_syntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 145)) ;
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 148)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 159)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i11_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 165)) ;
  GALGAS_lstring var_structureName_5274 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 166)) ;
  GALGAS_lstringlist var_attributeList_5305 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 167)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_9 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_5365 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 170)) ;
      var_attributeList_5305.addAssign_operation (var_attribute_5365  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 171)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 173)) ;
  GALGAS_functionDeclarationListAST var_procedureDeclarationListAST_5476 = GALGAS_functionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 174)) ;
  GALGAS_structurePropertyListAST var_fieldList_5521 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 175)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_plm_5F_syntax_10 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_fieldList_5521, GALGAS_bool (false), inCompiler) ;
    } break ;
    case 3: {
      nt_structure_5F_function_ (ioArgument_ioAST, var_procedureDeclarationListAST_5476, inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 182)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 184)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_structureDeclarationAST::constructor_new (var_structureName_5274, var_attributeList_5305, GALGAS_bool (true), var_fieldList_5521, var_procedureDeclarationListAST_5476, GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 191)), GALGAS_guardDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 192)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 185))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 185)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i11_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 165)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 166)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 170)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 173)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_plm_5F_syntax_10 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_structure_5F_function_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 182)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 184)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i12_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 22)) ;
  GALGAS_lstring var_structureName_1252 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 24)) ;
  GALGAS_functionDeclarationListAST var_procedureDeclarationListAST_1320 = GALGAS_functionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-sync-declaration.galgas", 25)) ;
  GALGAS_structurePropertyListAST var_fieldList_1365 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("type-sync-declaration.galgas", 26)) ;
  GALGAS_systemRoutineDeclarationListAST var_systemRoutineListAST_1428 = GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-sync-declaration.galgas", 27)) ;
  GALGAS_guardDeclarationListAST var_guardListAST_1475 = GALGAS_guardDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-sync-declaration.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_11 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_fieldList_1365, GALGAS_bool (false), inCompiler) ;
    } break ;
    case 3: {
      nt_function_ (ioArgument_ioAST, var_procedureDeclarationListAST_1320, inCompiler) ;
    } break ;
    case 4: {
      nt_system_5F_routine_ (ioArgument_ioAST, var_systemRoutineListAST_1428, inCompiler) ;
    } break ;
    case 5: {
      nt_guard_ (ioArgument_ioAST, var_guardListAST_1475, inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 39)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 41)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_syncDeclarationAST::constructor_new (var_structureName_1252, var_fieldList_1365, var_procedureDeclarationListAST_1320, var_systemRoutineListAST_1428, var_guardListAST_1475  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 42))  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i12_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 24)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_11 (inCompiler)) {
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
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 39)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 41)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i13_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 22)) ;
  GALGAS_lstring var_typeName_1204 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 24)) ;
  GALGAS_functionDeclarationListAST var_procedureDeclarationListAST_1272 = GALGAS_functionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-extension-declaration.galgas", 25)) ;
  GALGAS_structurePropertyListAST var_propertyList_1320 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("type-extension-declaration.galgas", 26)) ;
  GALGAS_systemRoutineDeclarationListAST var_svcListAST_1373 = GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-extension-declaration.galgas", 27)) ;
  GALGAS_guardDeclarationListAST var_guardListAST_1420 = GALGAS_guardDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-extension-declaration.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_12 (inCompiler)) {
    case 2: {
      nt_property_5F_in_5F_extension_ (ioArgument_ioAST, var_propertyList_1320, inCompiler) ;
    } break ;
    case 3: {
      nt_function_ (ioArgument_ioAST, var_procedureDeclarationListAST_1272, inCompiler) ;
    } break ;
    case 4: {
      nt_system_5F_routine_ (ioArgument_ioAST, var_svcListAST_1373, inCompiler) ;
    } break ;
    case 5: {
      nt_guard_ (ioArgument_ioAST, var_guardListAST_1420, inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 39)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 41)) ;
  ioArgument_ioAST.mProperty_mExtensionDeclarationListAST.addAssign_operation (var_typeName_1204, var_procedureDeclarationListAST_1272, var_propertyList_1320, var_svcListAST_1373, var_guardListAST_1420  COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i13_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 24)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_12 (inCompiler)) {
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
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 39)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 41)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_property_5F_in_5F_extension_i14_ (GALGAS_ast & ioArgument_ioAST,
                                                                                 GALGAS_structurePropertyListAST & ioArgument_ioPropertyList,
                                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_public_2084 ;
  switch (select_plm_5F_syntax_13 (inCompiler)) {
  case 1: {
    var_public_2084 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_public COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 57)) ;
    var_public_2084 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_constant_2185 ;
  switch (select_plm_5F_syntax_14 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_var COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 62)) ;
    var_constant_2185 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 65)) ;
    var_constant_2185 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_fieldName_2312 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 68)) ;
  GALGAS_lstring var_typeName_2356 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_2356, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 70)) ;
  GALGAS_expressionAST var_initExpression_2409 ;
  nt_expression_ (ioArgument_ioAST, var_initExpression_2409, inCompiler) ;
  ioArgument_ioPropertyList.addAssign_operation (var_fieldName_2312, GALGAS_propertyAttributeList::constructor_emptyList (SOURCE_FILE ("type-extension-declaration.galgas", 72)), var_constant_2185, var_public_2084, var_typeName_2356, GALGAS_structurePropertyInitOptionalExpressionAST::constructor_expression (var_initExpression_2409  COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 72)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_property_5F_in_5F_extension_i14_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_public COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  switch (select_plm_5F_syntax_14 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_var COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 62)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 65)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 68)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-extension-declaration.galgas", 70)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i15_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_opaque COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 21)) ;
  GALGAS_lstring var_opaqueTypeName_1166 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 22)) ;
  GALGAS_lstringlist var_attributeList_1197 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 23)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_15 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_1257 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 26)) ;
      var_attributeList_1197.addAssign_operation (var_attribute_1257  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 27)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 29)) ;
  GALGAS_expressionAST var_sizeExpression_1352 ;
  nt_expression_ (ioArgument_ioAST, var_sizeExpression_1352, inCompiler) ;
  GALGAS_location var_sizeExpressionLocation_1383 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 32)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_typeOpaqueDefinitionDeclaration::constructor_new (var_opaqueTypeName_1166, var_sizeExpression_1352, var_sizeExpressionLocation_1383, var_attributeList_1197  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 33))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i15_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_opaque COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 26)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 29)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 32)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i16_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 74)) ;
  GALGAS_registerGroupListAST var_registerGroupListAST_3104 = GALGAS_registerGroupListAST::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_registerGroupName_3162 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 77)) ;
    GALGAS_lbigint var_registerGroupBaseAddress_3217 = inCompiler->synthetizedAttribute_bigInteger () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 78)) ;
    GALGAS_controlRegisterGroupKindAST var_groupKind_3237 = GALGAS_controlRegisterGroupKindAST::constructor_single (var_registerGroupBaseAddress_3217  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 79)) ;
    var_registerGroupListAST_3104.addAssign_operation (var_registerGroupName_3162, var_groupKind_3237  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 80)) ;
    switch (select_plm_5F_syntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 82)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 84)) ;
  GALGAS_controlRegisterDeclarationList var_controlRegisterDeclarationList_3491 = GALGAS_controlRegisterDeclarationList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 85)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_plm_5F_syntax_17 (inCompiler)) {
    case 2: {
      GALGAS_controlRegisterNameListAST var_registerDeclarationList_3575 = GALGAS_controlRegisterNameListAST::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 88)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        nt_registerDeclaration_ (ioArgument_ioAST, var_registerDeclarationList_3575, inCompiler) ;
        switch (select_plm_5F_syntax_18 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
      GALGAS_lstring var_registerTypeName_3716 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("declaration-control-register.galgas", 93)) ;
      GALGAS_controlRegisterBitSliceList var_registerBitSliceList_3772 = GALGAS_controlRegisterBitSliceList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 94)) ;
      switch (select_plm_5F_syntax_19 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 97)) ;
        bool repeatFlag_3 = true ;
        while (repeatFlag_3) {
          GALGAS_controlRegisterBitSlice var_registerBitSlice_3878 ;
          switch (select_plm_5F_syntax_21 (inCompiler)) {
          case 1: {
            GALGAS_lbigint var_unusedBitCount_3946 = inCompiler->synthetizedAttribute_bigInteger () ;
            inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 101)) ;
            var_registerBitSlice_3878 = GALGAS_controlRegisterBitSlice::constructor_unusedBits (var_unusedBitCount_3946  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 102)) ;
          } break ;
          case 2: {
            GALGAS_lstring var_bitName_4064 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 104)) ;
            switch (select_plm_5F_syntax_22 (inCompiler)) {
            case 1: {
              var_registerBitSlice_3878 = GALGAS_controlRegisterBitSlice::constructor_namedBit (var_bitName_4064, GALGAS_lbigint::constructor_new (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 106)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 106))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 106))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 106)) ;
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 108)) ;
              GALGAS_lbigint var_bitCount_4246 = inCompiler->synthetizedAttribute_bigInteger () ;
              inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 109)) ;
              var_registerBitSlice_3878 = GALGAS_controlRegisterBitSlice::constructor_namedBit (var_bitName_4064, var_bitCount_4246  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 110)) ;
            } break ;
            default:
              break ;
            }
          } break ;
          default:
            break ;
          }
          var_registerBitSliceList_3772.addAssign_operation (var_registerBitSlice_3878  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 113)) ;
          switch (select_plm_5F_syntax_20 (inCompiler)) {
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 115)) ;
          } break ;
          default:
            repeatFlag_3 = false ;
            break ;
          }
        }
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 117)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_location var_endOfBitSlice_4489 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 119)) ;
      var_controlRegisterDeclarationList_3491.addAssign_operation (var_registerDeclarationList_3575, var_registerTypeName_3716, var_registerBitSliceList_3772, var_endOfBitSlice_4489  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 120)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_controlRegisterGroupDeclarationAST::constructor_new (var_registerGroupListAST_3104, var_controlRegisterDeclarationList_3491  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 122))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 122)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 126)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i16_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 74)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 77)) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 78)) ;
    switch (select_plm_5F_syntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 82)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 84)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_plm_5F_syntax_17 (inCompiler)) {
    case 2: {
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        nt_registerDeclaration_parse (inCompiler) ;
        switch (select_plm_5F_syntax_18 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("declaration-control-register.galgas", 93)) ;
      switch (select_plm_5F_syntax_19 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 97)) ;
        bool repeatFlag_3 = true ;
        while (repeatFlag_3) {
          switch (select_plm_5F_syntax_21 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 101)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 104)) ;
            switch (select_plm_5F_syntax_22 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 108)) ;
              inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 109)) ;
            } break ;
            default:
              break ;
            }
          } break ;
          default:
            break ;
          }
          switch (select_plm_5F_syntax_20 (inCompiler)) {
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 115)) ;
          } break ;
          default:
            repeatFlag_3 = false ;
            break ;
          }
        }
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 117)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 126)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_registerDeclaration_i17_ (GALGAS_ast & ioArgument_ioAST,
                                                                         GALGAS_controlRegisterNameListAST & ioArgument_ioRegisterDeclarationList,
                                                                         C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_lstring var_registerName_5052 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 132)) ;
  GALGAS_lstringlist var_attributeList_5083 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 133)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_23 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_5143 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 136)) ;
      var_attributeList_5083.addAssign_operation (var_attribute_5143  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 137)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_plm_5F_syntax_24 (inCompiler)) {
  case 1: {
    GALGAS_expressionAST var_registerAddress_5244 ;
    nt_expression_ (ioArgument_ioAST, var_registerAddress_5244, inCompiler) ;
    ioArgument_ioRegisterDeclarationList.addAssign_operation (var_registerName_5052, GALGAS_controlRegisterKind::constructor_scalar (SOURCE_FILE ("declaration-control-register.galgas", 143)), var_attributeList_5083, var_registerAddress_5244, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 146))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 141)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 148)) ;
    GALGAS_expressionAST var_sizeExpression_5446 ;
    nt_expression_ (ioArgument_ioAST, var_sizeExpression_5446, inCompiler) ;
    GALGAS_location var_sizeExpressionLocation_5479 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 150)) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 151)) ;
    GALGAS_expressionAST var_baseAddressExpression_5560 ;
    nt_expression_ (ioArgument_ioAST, var_baseAddressExpression_5560, inCompiler) ;
    GALGAS_location var_baseAddressExpressionLocation_5600 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 153)) ;
    GALGAS_lstring var_attribute_5651 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 154)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_attribute_5651.getter_string (HERE).objectCompare (GALGAS_string ("inc"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("@inc")) ;
      inCompiler->emitSemanticError (var_attribute_5651.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 156)), GALGAS_string ("attribute should be @inc"), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 156)) ;
    }
    GALGAS_expressionAST var_arrayElementSizeExpression_5838 ;
    nt_expression_ (ioArgument_ioAST, var_arrayElementSizeExpression_5838, inCompiler) ;
    GALGAS_location var_arrayElementSizeExpressionLocation_5883 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 159)) ;
    ioArgument_ioRegisterDeclarationList.addAssign_operation (var_registerName_5052, GALGAS_controlRegisterKind::constructor_registerArray (var_sizeExpression_5446, var_sizeExpressionLocation_5479, var_arrayElementSizeExpression_5838, var_arrayElementSizeExpressionLocation_5883  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 162)), var_attributeList_5083, var_baseAddressExpression_5560, var_baseAddressExpressionLocation_5600  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 160)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_registerDeclaration_i17_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 132)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 136)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_plm_5F_syntax_24 (inCompiler)) {
  case 1: {
    nt_expression_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 148)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 151)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 154)) ;
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
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 27)) ;
  GALGAS_lstring var_constantName_1394 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 28)) ;
  GALGAS_lstringlist var_attributeList_1425 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-global-constant.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_25 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_1485 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 32)) ;
      var_attributeList_1425.addAssign_operation (var_attribute_1485  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 33)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_typeName_1549 ;
  switch (select_plm_5F_syntax_26 (inCompiler)) {
  case 1: {
    var_typeName_1549 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-constant.galgas", 37)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1549, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 41)) ;
  GALGAS_expressionAST var_expression_1711 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1711, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_globalConstantDeclarationAST::constructor_new (var_constantName_1394, var_attributeList_1425, var_typeName_1549, var_expression_1711  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 43))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i18_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 32)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_plm_5F_syntax_26 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 41)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i19_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 20)) ;
  GALGAS_lstring var_syncInstanceName_1123 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 21)) ;
  GALGAS_lstring var_syncTypeName_1149 ;
  switch (select_plm_5F_syntax_27 (inCompiler)) {
  case 1: {
    var_syncTypeName_1149 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 24)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_syncTypeName_1149, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 28)) ;
  GALGAS_expressionAST var_expression_1316 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1316, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_syncToolInstanceDeclarationAST::constructor_new (var_syncTypeName_1149, var_syncInstanceName_1123, var_expression_1316  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 30))  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i19_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 21)) ;
  switch (select_plm_5F_syntax_27 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 28)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_driver_5F_property_i20_ (GALGAS_ast & ioArgument_ioAST,
                                                                        GALGAS_driverPropertyListAST & ioArgument_ioPropertyList,
                                                                        C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_constant_2851 ;
  switch (select_plm_5F_syntax_28 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_var COMMA_SOURCE_FILE ("declaration-driver.galgas", 71)) ;
    var_constant_2851 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-driver.galgas", 74)) ;
    var_constant_2851 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_fieldName_2978 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 77)) ;
  GALGAS_propertyAttributeList var_propertyAttributeList_3027 = GALGAS_propertyAttributeList::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 78)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_29 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_3087 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-driver.galgas", 81)) ;
      GALGAS_lbigint var_value_3114 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-driver.galgas", 82)) ;
      var_propertyAttributeList_3027.addAssign_operation (var_attribute_3087, var_value_3114  COMMA_SOURCE_FILE ("declaration-driver.galgas", 83)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_plm_5F_syntax_30 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_typeName_3228 ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_3228, inCompiler) ;
    switch (select_plm_5F_syntax_31 (inCompiler)) {
    case 1: {
      ioArgument_ioPropertyList.addAssign_operation (var_fieldName_2978, var_propertyAttributeList_3027, var_constant_2851, var_typeName_3228, GALGAS_structurePropertyInitOptionalExpressionAST::constructor_noExpression (SOURCE_FILE ("declaration-driver.galgas", 88))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 88)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 90)) ;
      GALGAS_expressionAST var_initExpression_3406 ;
      nt_expression_ (ioArgument_ioAST, var_initExpression_3406, inCompiler) ;
      ioArgument_ioPropertyList.addAssign_operation (var_fieldName_2978, var_propertyAttributeList_3027, var_constant_2851, var_typeName_3228, GALGAS_structurePropertyInitOptionalExpressionAST::constructor_expression (var_initExpression_3406  COMMA_SOURCE_FILE ("declaration-driver.galgas", 92))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 92)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 95)) ;
    GALGAS_expressionAST var_initExpression_3606 ;
    nt_expression_ (ioArgument_ioAST, var_initExpression_3606, inCompiler) ;
    ioArgument_ioPropertyList.addAssign_operation (var_fieldName_2978, var_propertyAttributeList_3027, var_constant_2851, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-driver.galgas", 97)), GALGAS_structurePropertyInitOptionalExpressionAST::constructor_expression (var_initExpression_3606  COMMA_SOURCE_FILE ("declaration-driver.galgas", 97))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 97)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_driver_5F_property_i20_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_28 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_var COMMA_SOURCE_FILE ("declaration-driver.galgas", 71)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-driver.galgas", 74)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 77)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-driver.galgas", 81)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-driver.galgas", 82)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_plm_5F_syntax_30 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_parse (inCompiler) ;
    switch (select_plm_5F_syntax_31 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 90)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 95)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i21_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 104)) ;
  GALGAS_lstring var_driverName_3953 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 105)) ;
  GALGAS_lstringlist var_driverDependenceList_3991 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 106)) ;
  switch (select_plm_5F_syntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 109)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_dependenceName_4078 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 111)) ;
      var_driverDependenceList_3991.addAssign_operation (var_dependenceName_4078  COMMA_SOURCE_FILE ("declaration-driver.galgas", 112)) ;
      switch (select_plm_5F_syntax_33 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 114)) ;
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
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 117)) ;
  GALGAS_functionDeclarationListAST var_functionDeclarationListAST_4242 = GALGAS_functionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 118)) ;
  GALGAS_driverPropertyListAST var_driverPropertyListAST_4296 = GALGAS_driverPropertyListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 119)) ;
  GALGAS_guardDeclarationListAST var_guardListAST_4343 = GALGAS_guardDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 120)) ;
  GALGAS_systemRoutineDeclarationListAST var_svcListAST_4396 = GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 121)) ;
  GALGAS_initListAST var_initList_4427 = GALGAS_initListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 122)) ;
  GALGAS_bootListAST var_bootListAST_4461 = GALGAS_bootListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 123)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_plm_5F_syntax_34 (inCompiler)) {
    case 2: {
      GALGAS_bootAST var_boot_4574 ;
      nt_declaration_5F_boot_ (ioArgument_ioAST, var_driverName_3953, var_driverDependenceList_3991, var_boot_4574, inCompiler) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_bootListAST_4461.getter_length (SOURCE_FILE ("declaration-driver.galgas", 127)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_boot_4574.getter_mBootLocation (SOURCE_FILE ("declaration-driver.galgas", 128)), GALGAS_string ("a driver supports at most one boot routine"), fixItArray3  COMMA_SOURCE_FILE ("declaration-driver.galgas", 128)) ;
      }
      var_bootListAST_4461.addAssign_operation (var_boot_4574  COMMA_SOURCE_FILE ("declaration-driver.galgas", 130)) ;
    } break ;
    case 3: {
      GALGAS_initAST var_init_4820 ;
      nt_declaration_5F_init_ (ioArgument_ioAST, var_driverName_3953, var_driverDependenceList_3991, var_init_4820, inCompiler) ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_initList_4427.getter_length (SOURCE_FILE ("declaration-driver.galgas", 133)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (var_init_4820.getter_mInitLocation (SOURCE_FILE ("declaration-driver.galgas", 134)), GALGAS_string ("a driver supports at most one init routine"), fixItArray5  COMMA_SOURCE_FILE ("declaration-driver.galgas", 134)) ;
      }
      var_initList_4427.addAssign_operation (var_init_4820  COMMA_SOURCE_FILE ("declaration-driver.galgas", 136)) ;
    } break ;
    case 4: {
      nt_isr_ (ioArgument_ioAST, var_driverName_3953, inCompiler) ;
    } break ;
    case 5: {
      nt_driver_5F_property_ (ioArgument_ioAST, var_driverPropertyListAST_4296, inCompiler) ;
    } break ;
    case 6: {
      nt_function_ (ioArgument_ioAST, var_functionDeclarationListAST_4242, inCompiler) ;
    } break ;
    case 7: {
      nt_system_5F_routine_ (ioArgument_ioAST, var_svcListAST_4396, inCompiler) ;
    } break ;
    case 8: {
      nt_guard_ (ioArgument_ioAST, var_guardListAST_4343, inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 148)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 150)) ;
  ioArgument_ioAST.mProperty_mDriverDeclarationListAST.addAssign_operation (GALGAS_driverDeclarationAST::constructor_new (var_driverName_3953, var_driverDependenceList_3991, var_driverPropertyListAST_4296, var_functionDeclarationListAST_4242, var_svcListAST_4396, var_guardListAST_4343, var_initList_4427, var_bootListAST_4461  COMMA_SOURCE_FILE ("declaration-driver.galgas", 152))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 152)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i21_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 104)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 105)) ;
  switch (select_plm_5F_syntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 109)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 111)) ;
      switch (select_plm_5F_syntax_33 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 114)) ;
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
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 117)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_plm_5F_syntax_34 (inCompiler)) {
    case 2: {
      nt_declaration_5F_boot_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_declaration_5F_init_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_isr_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_driver_5F_property_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_function_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_system_5F_routine_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_guard_parse (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 148)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 150)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i22_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 167)) ;
  GALGAS_lstring var_driverName_5767 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 168)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 169)) ;
  GALGAS_driverInstanciationArgumentListAST var_driverInstanciationArgumentList_5847 = GALGAS_driverInstanciationArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 170)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_35 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_5906 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 173)) ;
      GALGAS_expressionAST var_expression_5949 ;
      nt_expression_ (ioArgument_ioAST, var_expression_5949, inCompiler) ;
      var_driverInstanciationArgumentList_5847.addAssign_operation (var_selector_5906, var_expression_5949  COMMA_SOURCE_FILE ("declaration-driver.galgas", 175)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 177)) ;
  ioArgument_ioAST.mProperty_mRequiredDriverListAST.addAssign_operation (var_driverName_5767, var_driverInstanciationArgumentList_5847  COMMA_SOURCE_FILE ("declaration-driver.galgas", 178)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i22_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 167)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 168)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 169)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_35 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 173)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 177)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i23_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-array.galgas", 61)) ;
  GALGAS_lstring var_staticListName_2614 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-array.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-static-array.galgas", 63)) ;
  GALGAS_staticListPropertyListAST var_propertyList_2666 = GALGAS_staticListPropertyListAST::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_staticArrayProperty_ (ioArgument_ioAST, var_propertyList_2666, inCompiler) ;
    switch (select_plm_5F_syntax_36 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-static-array.galgas", 69)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_staticListAST::constructor_new (var_staticListName_2614, var_propertyList_2666, GALGAS_staticListValueListAST::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 70))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 70))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 70)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i23_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-array.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-array.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-static-array.galgas", 63)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_staticArrayProperty_parse (inCompiler) ;
    switch (select_plm_5F_syntax_36 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-static-array.galgas", 69)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_staticArrayProperty_i24_ (GALGAS_ast & ioArgument_ioAST,
                                                                         GALGAS_staticListPropertyListAST & ioArgument_ioPropertyList,
                                                                         C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-static-array.galgas", 76)) ;
  GALGAS_lstring var_propertyName_3107 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-array.galgas", 77)) ;
  switch (select_plm_5F_syntax_37 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_typeName_3164 ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_3164, inCompiler) ;
    ioArgument_ioPropertyList.addAssign_operation (var_propertyName_3107, GALGAS_staticListPropertyTypeAST::constructor_valueType (var_typeName_3164  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 80))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 80)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-array.galgas", 82)) ;
    GALGAS_mode var_mode_3273 ;
    nt_mode_ (var_mode_3273, inCompiler) ;
    GALGAS_lstringlist var_attributeList_3306 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 84)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_plm_5F_syntax_38 (inCompiler)) {
      case 2: {
        GALGAS_lstring var_attribute_3372 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-static-array.galgas", 87)) ;
        var_attributeList_3306.addAssign_operation (var_attribute_3372  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 88)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    GALGAS_routineFormalArgumentListAST var_formalArgs_3477 ;
    nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgs_3477, inCompiler) ;
    GALGAS_lstring var_returnType_3503 ;
    switch (select_plm_5F_syntax_39 (inCompiler)) {
    case 1: {
      var_returnType_3503 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 93)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-static-array.galgas", 95)) ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_returnType_3503, inCompiler) ;
    } break ;
    default:
      break ;
    }
    GALGAS_bool var_isSafe_3641 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_3688 (var_attributeList_3306, kENUMERATION_UP) ;
    while (enumerator_3688.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_3688.current_mValue (HERE).getter_string (HERE).objectCompare (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 100)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_isSafe_3641.boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (enumerator_3688.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-static-array.galgas", 102)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 102)) ;
        }else if (kBoolFalse == test_2) {
          var_isSafe_3641 = GALGAS_bool (true) ;
        }
      }else if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        appendFixItActions (fixItArray4, kFixItReplace, GALGAS_string ("@").add_operation (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 107))) ;
        inCompiler->emitSemanticError (enumerator_3688.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-static-array.galgas", 107)), GALGAS_string ("invalid attribute"), fixItArray4  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 107)) ;
      }
      enumerator_3688.gotoNextObject () ;
    }
    ioArgument_ioPropertyList.addAssign_operation (var_propertyName_3107, GALGAS_staticListPropertyTypeAST::constructor_function (var_mode_3273, var_isSafe_3641, var_formalArgs_3477, var_returnType_3503  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 110))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 110)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_staticArrayProperty_i24_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-static-array.galgas", 76)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-array.galgas", 77)) ;
  switch (select_plm_5F_syntax_37 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-array.galgas", 82)) ;
    nt_mode_parse (inCompiler) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_plm_5F_syntax_38 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-static-array.galgas", 87)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
    switch (select_plm_5F_syntax_39 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-static-array.galgas", 95)) ;
      nt_type_5F_definition_parse (inCompiler) ;
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i25_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("declaration-static-array.galgas", 119)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-array.galgas", 120)) ;
  GALGAS_lstring var_staticListName_4520 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-array.galgas", 121)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-static-array.galgas", 122)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_extendStaticListElementListAST var_expressions_4589 = GALGAS_extendStaticListElementListAST::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 124)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      nt_staticArray_5F_exp_ (ioArgument_ioAST, var_expressions_4589, inCompiler) ;
      switch (select_plm_5F_syntax_41 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-static-array.galgas", 128)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    ioArgument_ioAST.mProperty_mExtendStaticArrayDeclarationAST.addAssign_operation (var_staticListName_4520, var_expressions_4589  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 130)) ;
    switch (select_plm_5F_syntax_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("declaration-static-array.galgas", 132)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-static-array.galgas", 134)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i25_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("declaration-static-array.galgas", 119)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-array.galgas", 120)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-array.galgas", 121)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-static-array.galgas", 122)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      nt_staticArray_5F_exp_parse (inCompiler) ;
      switch (select_plm_5F_syntax_41 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-static-array.galgas", 128)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    switch (select_plm_5F_syntax_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("declaration-static-array.galgas", 132)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-static-array.galgas", 134)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_staticArray_5F_exp_i26_ (GALGAS_ast & ioArgument_ioAST,
                                                                        GALGAS_extendStaticListElementListAST & ioArgument_ioExpressions,
                                                                        C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_42 (inCompiler)) {
  case 1: {
    GALGAS_expressionAST var_exp_5064 ;
    nt_expression_ (ioArgument_ioAST, var_exp_5064, inCompiler) ;
    ioArgument_ioExpressions.addAssign_operation (GALGAS_extendStaticListExpressionAST::constructor_expression (var_exp_5064  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 142)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 142))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 142)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-array.galgas", 144)) ;
    GALGAS_lstring var_functionName_5175 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-array.galgas", 145)) ;
    GALGAS_routineFormalArgumentListAST var_formalArgs_5234 ;
    nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgs_5234, inCompiler) ;
    ioArgument_ioExpressions.addAssign_operation (GALGAS_extendStaticListExpressionAST::constructor_function (var_functionName_5175, var_formalArgs_5234  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 148)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 149))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 147)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_staticArray_5F_exp_i26_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_42 (inCompiler)) {
  case 1: {
    nt_expression_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-array.galgas", 144)) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-array.galgas", 145)) ;
    nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i27_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_task COMMA_SOURCE_FILE ("task-declaration.galgas", 44)) ;
  GALGAS_lstring var_taskName_1848 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 45)) ;
  GALGAS_lstring var_prioriryAttribute_1888 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 46)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_prioriryAttribute_1888.getter_string (HERE).objectCompare (GALGAS_string ("priority"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_prioriryAttribute_1888.getter_location (SOURCE_FILE ("task-declaration.galgas", 48)), GALGAS_string ("this attribute should be @priority"), fixItArray1  COMMA_SOURCE_FILE ("task-declaration.galgas", 48)) ;
  }
  GALGAS_lbigint var_priority_2053 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("task-declaration.galgas", 50)) ;
  GALGAS_lstring var_stackSizeAttribute_2094 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 51)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_stackSizeAttribute_2094.getter_string (HERE).objectCompare (GALGAS_string ("stacksize"))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (var_stackSizeAttribute_2094.getter_location (SOURCE_FILE ("task-declaration.galgas", 53)), GALGAS_string ("this attribute should be @stacksize"), fixItArray3  COMMA_SOURCE_FILE ("task-declaration.galgas", 53)) ;
  }
  GALGAS_lbigint var_stackSize_2264 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("task-declaration.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 56)) ;
  GALGAS_structurePropertyListAST var_taskVarList_2314 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 57)) ;
  GALGAS_functionDeclarationListAST var_taskProcList_2364 = GALGAS_functionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 58)) ;
  GALGAS_taskSetupListAST var_taskInitListAST_2407 = GALGAS_taskSetupListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 59)) ;
  GALGAS_syncInstructionBranchListAST var_branchList_2457 = GALGAS_syncInstructionBranchListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 60)) ;
  bool repeatFlag_4 = true ;
  while (repeatFlag_4) {
    switch (select_plm_5F_syntax_43 (inCompiler)) {
    case 2: {
      nt_private_5F_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_taskVarList_2314, GALGAS_bool (true), inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_func COMMA_SOURCE_FILE ("task-declaration.galgas", 65)) ;
      GALGAS_lstring var_procName_2611 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 66)) ;
      GALGAS_routineFormalArgumentListAST var_formalArgumentList_2708 ;
      nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_2708, inCompiler) ;
      GALGAS_lstring var_returnTypeName_2738 ;
      switch (select_plm_5F_syntax_44 (inCompiler)) {
      case 1: {
        var_returnTypeName_2738 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 70)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 72)) ;
        nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_2738, inCompiler) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 75)) ;
      GALGAS_instructionListAST var_instructionList_2931 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_2931, inCompiler) ;
      var_taskProcList_2364.addAssign_operation (GALGAS_mode::constructor_userMode (SOURCE_FILE ("task-declaration.galgas", 77)), GALGAS_bool (false), var_procName_2611, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 77)), var_formalArgumentList_2708, var_returnTypeName_2738, var_instructionList_2931, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 77))  COMMA_SOURCE_FILE ("task-declaration.galgas", 77)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 78)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_setup COMMA_SOURCE_FILE ("task-declaration.galgas", 80)) ;
      GALGAS_lbigint var_priority_3118 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("task-declaration.galgas", 81)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 82)) ;
      GALGAS_instructionListAST var_instructionList_3181 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_3181, inCompiler) ;
      GALGAS_location var_endOfInit_3201 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 84)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 85)) ;
      var_taskInitListAST_2407.addAssign_operation (var_priority_3118, var_instructionList_3181, var_endOfInit_3201  COMMA_SOURCE_FILE ("task-declaration.galgas", 86)) ;
    } break ;
    case 5: {
      GALGAS_guardedCommandAST var_guardedCommand_3372 ;
      nt_guarded_5F_command_ (ioArgument_ioAST, var_guardedCommand_3372, inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 89)) ;
      GALGAS_instructionListAST var_instructionList_3435 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_3435, inCompiler) ;
      GALGAS_location var_endOfInstructions_3463 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 91)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 92)) ;
      var_branchList_2457.addAssign_operation (var_guardedCommand_3372, var_instructionList_3435, var_endOfInstructions_3463  COMMA_SOURCE_FILE ("task-declaration.galgas", 93)) ;
    } break ;
    default:
      repeatFlag_4 = false ;
      break ;
    }
  }
  GALGAS_location var_endOfTask_3588 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 95)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 96)) ;
  ioArgument_ioAST.mProperty_mTaskListAST.addAssign_operation (var_taskName_1848, var_priority_2053, var_stackSize_2264, var_taskVarList_2314, var_taskProcList_2364, var_taskInitListAST_2407, var_branchList_2457, var_endOfTask_3588  COMMA_SOURCE_FILE ("task-declaration.galgas", 97)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i27_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_task COMMA_SOURCE_FILE ("task-declaration.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("task-declaration.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("task-declaration.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 56)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_43 (inCompiler)) {
    case 2: {
      nt_private_5F_struct_5F_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_func COMMA_SOURCE_FILE ("task-declaration.galgas", 65)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 66)) ;
      nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
      switch (select_plm_5F_syntax_44 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 72)) ;
        nt_type_5F_definition_parse (inCompiler) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 75)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 78)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_setup COMMA_SOURCE_FILE ("task-declaration.galgas", 80)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("task-declaration.galgas", 81)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 82)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 85)) ;
    } break ;
    case 5: {
      nt_guarded_5F_command_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 89)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 92)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 96)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i28_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("panic.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_setup COMMA_SOURCE_FILE ("panic.galgas", 22)) ;
  GALGAS_lbigint var_priority_1159 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("panic.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("panic.galgas", 24)) ;
  GALGAS_instructionListAST var_instructionList_1218 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1218, inCompiler) ;
  GALGAS_location var_endOfInstructionList_1247 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("panic.galgas", 27)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_panicAST::constructor_new (GALGAS_bool (true), var_instructionList_1218, var_endOfInstructionList_1247, var_priority_1159  COMMA_SOURCE_FILE ("panic.galgas", 28))  COMMA_SOURCE_FILE ("panic.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i28_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("panic.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_setup COMMA_SOURCE_FILE ("panic.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("panic.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("panic.galgas", 24)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("panic.galgas", 27)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i29_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("panic.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_loop COMMA_SOURCE_FILE ("panic.galgas", 40)) ;
  GALGAS_lbigint var_priority_1621 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("panic.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("panic.galgas", 42)) ;
  GALGAS_instructionListAST var_instructionList_1680 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1680, inCompiler) ;
  GALGAS_location var_endOfInstructionList_1709 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("panic.galgas", 45)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_panicAST::constructor_new (GALGAS_bool (false), var_instructionList_1680, var_endOfInstructionList_1709, var_priority_1621  COMMA_SOURCE_FILE ("panic.galgas", 46))  COMMA_SOURCE_FILE ("panic.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i29_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("panic.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_loop COMMA_SOURCE_FILE ("panic.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("panic.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("panic.galgas", 42)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("panic.galgas", 45)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_system_5F_routine_5F_prefix_i30_ (GALGAS_bool & outArgument_public,
                                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_public.drop () ; // Release 'out' argument
  switch (select_plm_5F_syntax_45 (inCompiler)) {
  case 1: {
    outArgument_public = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 28)) ;
    outArgument_public = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_system COMMA_SOURCE_FILE ("declaration-svc.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_system_5F_routine_5F_prefix_i30_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 28)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_system COMMA_SOURCE_FILE ("declaration-svc.galgas", 31)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_system_5F_routine_i31_ (GALGAS_ast & ioArgument_ioAST,
                                                                       GALGAS_systemRoutineDeclarationListAST & ioArgument_ioSVCListAST,
                                                                       C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_public_1570 ;
  nt_system_5F_routine_5F_prefix_ (var_public_1570, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-svc.galgas", 38)) ;
  GALGAS_lstring var_name_1611 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 39)) ;
  GALGAS_lstringlist var_attributeList_1642 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-svc.galgas", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_46 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_1702 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 43)) ;
      var_attributeList_1642.addAssign_operation (var_attribute_1702  COMMA_SOURCE_FILE ("declaration-svc.galgas", 44)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_routineFormalArgumentListAST var_formalArgumentList_1809 ;
  nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_1809, inCompiler) ;
  GALGAS_lstring var_returnTypeName_1837 ;
  switch (select_plm_5F_syntax_47 (inCompiler)) {
  case 1: {
    var_returnTypeName_1837 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 49)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 51)) ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_1837, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 54)) ;
  GALGAS_instructionListAST var_instructionList_2014 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_2014, inCompiler) ;
  ioArgument_ioSVCListAST.addAssign_operation (var_name_1611, GALGAS_routineKind::constructor_section (SOURCE_FILE ("declaration-svc.galgas", 58)), var_public_1570, var_attributeList_1642, var_formalArgumentList_1809, var_returnTypeName_1837, var_instructionList_2014, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 64))  COMMA_SOURCE_FILE ("declaration-svc.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 65)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_system_5F_routine_i31_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_system_5F_routine_5F_prefix_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-svc.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_46 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 43)) ;
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
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 51)) ;
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 54)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 65)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_system_5F_routine_i32_ (GALGAS_ast & ioArgument_ioAST,
                                                                       GALGAS_systemRoutineDeclarationListAST & ioArgument_ioSVCListAST,
                                                                       C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_public_2531 ;
  nt_system_5F_routine_5F_prefix_ (var_public_2531, inCompiler) ;
  GALGAS_routineKind var_routineKind_2560 ;
  switch (select_plm_5F_syntax_48 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-svc.galgas", 76)) ;
    var_routineKind_2560 = GALGAS_routineKind::constructor_primitive (SOURCE_FILE ("declaration-svc.galgas", 77)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-svc.galgas", 79)) ;
    var_routineKind_2560 = GALGAS_routineKind::constructor_service (SOURCE_FILE ("declaration-svc.galgas", 80)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_name_2707 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 82)) ;
  GALGAS_lstringlist var_attributeList_2738 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-svc.galgas", 83)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_49 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_2798 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 86)) ;
      var_attributeList_2738.addAssign_operation (var_attribute_2798  COMMA_SOURCE_FILE ("declaration-svc.galgas", 87)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_routineFormalArgumentListAST var_formalArgumentList_2911 ;
  nt_procedure_5F_input_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_2911, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 90)) ;
  GALGAS_instructionListAST var_instructionList_2970 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_2970, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 92)) ;
  ioArgument_ioSVCListAST.addAssign_operation (var_name_2707, var_routineKind_2560, var_public_2531, var_attributeList_2738, var_formalArgumentList_2911, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 99)), var_instructionList_2970, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 101))  COMMA_SOURCE_FILE ("declaration-svc.galgas", 93)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_system_5F_routine_i32_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_system_5F_routine_5F_prefix_parse (inCompiler) ;
  switch (select_plm_5F_syntax_48 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-svc.galgas", 76)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-svc.galgas", 79)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 82)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_49 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 86)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_procedure_5F_input_5F_formal_5F_arguments_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 90)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 92)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_procedure_5F_input_5F_formal_5F_arguments_i33_ (GALGAS_ast & ioArgument_ioAST,
                                                                                               GALGAS_routineFormalArgumentListAST & outArgument_outProcFormalArgumentList,
                                                                                               C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outProcFormalArgumentList.drop () ; // Release 'out' argument
  outArgument_outProcFormalArgumentList = GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-svc.galgas", 107)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 108)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_50 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_3481 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 111)) ;
      GALGAS_lstring var_formalArgumentName_3524 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 112)) ;
      GALGAS_lstring var_formalArgumentTypeName_3585 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_3585, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("declaration-svc.galgas", 115)), var_selector_3481, var_formalArgumentTypeName_3585, var_formalArgumentName_3524  COMMA_SOURCE_FILE ("declaration-svc.galgas", 114)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 120)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_procedure_5F_input_5F_formal_5F_arguments_i33_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 108)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_50 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 111)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 112)) ;
      nt_type_5F_definition_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 120)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_5F_boot_i34_ (GALGAS_ast & ioArgument_ioAST,
                                                                         const GALGAS_lstring constinArgument_inDriverName,
                                                                         const GALGAS_lstringlist constinArgument_inDependanceList,
                                                                         GALGAS_bootAST & outArgument_outBoot,
                                                                         C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outBoot.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-boot.galgas", 22)) ;
  GALGAS_location var_bootLocation_1235 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-boot.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-boot.galgas", 24)) ;
  GALGAS_instructionListAST var_instructionList_1311 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1311, inCompiler) ;
  GALGAS_location var_endOfInit_1329 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-boot.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-boot.galgas", 27)) ;
  outArgument_outBoot = GALGAS_bootAST::constructor_new (constinArgument_inDriverName, constinArgument_inDependanceList, var_bootLocation_1235, var_instructionList_1311, var_endOfInit_1329  COMMA_SOURCE_FILE ("declaration-boot.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_5F_boot_i34_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-boot.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-boot.galgas", 24)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-boot.galgas", 27)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_5F_init_i35_ (GALGAS_ast & ioArgument_ioAST,
                                                                         const GALGAS_lstring constinArgument_inDriverName,
                                                                         const GALGAS_lstringlist constinArgument_inDependanceList,
                                                                         GALGAS_initAST & outArgument_outInit,
                                                                         C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outInit.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_init COMMA_SOURCE_FILE ("declaration-init.galgas", 28)) ;
  GALGAS_location var_initLocation_1399 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-init.galgas", 30)) ;
  GALGAS_instructionListAST var_instructionList_1475 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1475, inCompiler) ;
  GALGAS_location var_endOfInit_1493 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-init.galgas", 33)) ;
  outArgument_outInit = GALGAS_initAST::constructor_new (constinArgument_inDriverName, constinArgument_inDependanceList, var_initLocation_1399, var_instructionList_1475, var_endOfInit_1493  COMMA_SOURCE_FILE ("declaration-init.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_5F_init_i35_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_init COMMA_SOURCE_FILE ("declaration-init.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-init.galgas", 30)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-init.galgas", 33)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_function_i36_ (GALGAS_ast & ioArgument_ioAST,
                                                              GALGAS_functionDeclarationListAST & ioArgument_ioProcListAST,
                                                              C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_public_2585 ;
  switch (select_plm_5F_syntax_51 (inCompiler)) {
  case 1: {
    var_public_2585 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-func.galgas", 70)) ;
    var_public_2585 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_mode var_mode_2730 ;
  GALGAS_lstring var_procName_2755 ;
  GALGAS_lstringlist var_attributeList_2791 ;
  GALGAS_routineFormalArgumentListAST var_procFormalArgumentList_2841 ;
  nt_function_5F_header_ (ioArgument_ioAST, var_mode_2730, var_procName_2755, var_attributeList_2791, var_procFormalArgumentList_2841, inCompiler) ;
  GALGAS_lstring var_returnTypeName_2869 ;
  switch (select_plm_5F_syntax_52 (inCompiler)) {
  case 1: {
    var_returnTypeName_2869 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 81)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-func.galgas", 83)) ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_2869, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-func.galgas", 86)) ;
  GALGAS_instructionListAST var_instructionList_3046 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_3046, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-func.galgas", 88)) ;
  ioArgument_ioProcListAST.addAssign_operation (var_mode_2730, var_public_2585, var_procName_2755, var_attributeList_2791, var_procFormalArgumentList_2841, var_returnTypeName_2869, var_instructionList_3046, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 97))  COMMA_SOURCE_FILE ("declaration-func.galgas", 89)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_function_i36_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-func.galgas", 70)) ;
  } break ;
  default:
    break ;
  }
  nt_function_5F_header_parse (inCompiler) ;
  switch (select_plm_5F_syntax_52 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-func.galgas", 83)) ;
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-func.galgas", 86)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-func.galgas", 88)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_mode_i37_ (GALGAS_mode & outArgument_outMode,
                                                          C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outMode.drop () ; // Release 'out' argument
  switch (select_plm_5F_syntax_53 (inCompiler)) {
  case 1: {
    outArgument_outMode = GALGAS_mode::constructor_anyMode (SOURCE_FILE ("declaration-func.galgas", 104)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-func.galgas", 106)) ;
    outArgument_outMode = GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-func.galgas", 107)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("declaration-func.galgas", 109)) ;
    outArgument_outMode = GALGAS_mode::constructor_panicMode (SOURCE_FILE ("declaration-func.galgas", 110)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-func.galgas", 112)) ;
    outArgument_outMode = GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-func.galgas", 113)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_init COMMA_SOURCE_FILE ("declaration-func.galgas", 115)) ;
    outArgument_outMode = GALGAS_mode::constructor_initMode (SOURCE_FILE ("declaration-func.galgas", 116)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-func.galgas", 118)) ;
    outArgument_outMode = GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("declaration-func.galgas", 119)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-func.galgas", 121)) ;
    outArgument_outMode = GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-func.galgas", 122)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-func.galgas", 124)) ;
    outArgument_outMode = GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("declaration-func.galgas", 125)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-func.galgas", 127)) ;
    outArgument_outMode = GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-func.galgas", 128)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_mode_i37_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-func.galgas", 106)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("declaration-func.galgas", 109)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-func.galgas", 112)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_init COMMA_SOURCE_FILE ("declaration-func.galgas", 115)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-func.galgas", 118)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-func.galgas", 121)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-func.galgas", 124)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-func.galgas", 127)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_function_5F_header_i38_ (GALGAS_ast & ioArgument_ioAST,
                                                                        GALGAS_mode & outArgument_outMode,
                                                                        GALGAS_lstring & outArgument_outProcName,
                                                                        GALGAS_lstringlist & outArgument_outAttributeList,
                                                                        GALGAS_routineFormalArgumentListAST & outArgument_outProcFormalArgumentList,
                                                                        C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outMode.drop () ; // Release 'out' argument
  outArgument_outProcName.drop () ; // Release 'out' argument
  outArgument_outAttributeList.drop () ; // Release 'out' argument
  outArgument_outProcFormalArgumentList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-func.galgas", 142)) ;
  nt_mode_ (outArgument_outMode, inCompiler) ;
  outArgument_outProcName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-func.galgas", 144)) ;
  outArgument_outAttributeList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-func.galgas", 145)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_54 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_4322 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-func.galgas", 148)) ;
      outArgument_outAttributeList.addAssign_operation (var_attribute_4322  COMMA_SOURCE_FILE ("declaration-func.galgas", 149)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, outArgument_outProcFormalArgumentList, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_function_5F_header_i38_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-func.galgas", 142)) ;
  nt_mode_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-func.galgas", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_54 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-func.galgas", 148)) ;
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_procedure_5F_formal_5F_arguments_i39_ (GALGAS_ast & ioArgument_ioAST,
                                                                                      GALGAS_routineFormalArgumentListAST & outArgument_outProcFormalArgumentList,
                                                                                      C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outProcFormalArgumentList.drop () ; // Release 'out' argument
  outArgument_outProcFormalArgumentList = GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-func.galgas", 157)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-func.galgas", 158)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_55 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_4768 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-func.galgas", 161)) ;
      GALGAS_lstring var_formalArgumentName_4811 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-func.galgas", 162)) ;
      GALGAS_lstring var_formalArgumentTypeName_4872 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_4872, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_output (SOURCE_FILE ("declaration-func.galgas", 165)), var_selector_4768, var_formalArgumentTypeName_4872, var_formalArgumentName_4811  COMMA_SOURCE_FILE ("declaration-func.galgas", 164)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_5076 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-func.galgas", 170)) ;
      GALGAS_lstring var_formalArgumentName_5119 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-func.galgas", 171)) ;
      GALGAS_lstring var_formalArgumentTypeName_5179 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_5179, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_inputOutput (SOURCE_FILE ("declaration-func.galgas", 174)), var_selector_5076, var_formalArgumentTypeName_5179, var_formalArgumentName_5119  COMMA_SOURCE_FILE ("declaration-func.galgas", 173)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_5387 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-func.galgas", 179)) ;
      GALGAS_lstring var_formalArgumentName_5430 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-func.galgas", 180)) ;
      GALGAS_lstring var_formalArgumentTypeName_5491 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_5491, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("declaration-func.galgas", 183)), var_selector_5387, var_formalArgumentTypeName_5491, var_formalArgumentName_5430  COMMA_SOURCE_FILE ("declaration-func.galgas", 182)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-func.galgas", 188)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_procedure_5F_formal_5F_arguments_i39_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-func.galgas", 158)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_55 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-func.galgas", 161)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-func.galgas", 162)) ;
      nt_type_5F_definition_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-func.galgas", 170)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-func.galgas", 171)) ;
      nt_type_5F_definition_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-func.galgas", 179)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-func.galgas", 180)) ;
      nt_type_5F_definition_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-func.galgas", 188)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i40_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_required COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 23)) ;
  GALGAS_mode var_mode_1199 ;
  GALGAS_lstring var_procName_1224 ;
  GALGAS_lstringlist var_attributeList_1260 ;
  GALGAS_routineFormalArgumentListAST var_procFormalArgumentList_1310 ;
  nt_function_5F_header_ (ioArgument_ioAST, var_mode_1199, var_procName_1224, var_attributeList_1260, var_procFormalArgumentList_1310, inCompiler) ;
  GALGAS_bool var_isGlobal_1327 = GALGAS_bool (false) ;
  GALGAS_bool var_isSafe_1350 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_1395 (var_attributeList_1260, kENUMERATION_UP) ;
  while (enumerator_1395.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1395.current_mValue (HERE).getter_string (HERE).objectCompare (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 33)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_isGlobal_1327.boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
        inCompiler->emitSemanticError (enumerator_1395.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 35)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 35)) ;
      }else if (kBoolFalse == test_1) {
        var_isGlobal_1327 = GALGAS_bool (true) ;
      }
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_1395.current_mValue (HERE).getter_string (HERE).objectCompare (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 39)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        const enumGalgasBool test_4 = var_isSafe_1350.boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          fixItArray5.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (enumerator_1395.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 41)), GALGAS_string ("duplicated attribute"), fixItArray5  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 41)) ;
        }else if (kBoolFalse == test_4) {
          var_isSafe_1350 = GALGAS_bool (true) ;
        }
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        appendFixItActions (fixItArray6, kFixItReplace, GALGAS_string ("@").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 46))) ;
        appendFixItActions (fixItArray6, kFixItReplace, GALGAS_string ("@").add_operation (function_safeAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 46))) ;
        inCompiler->emitSemanticError (enumerator_1395.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 46)), GALGAS_string ("invalid attribute"), fixItArray6  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 46)) ;
      }
    }
    enumerator_1395.gotoNextObject () ;
  }
  ioArgument_ioAST.mProperty_mRequiredProcListAST.addAssign_operation (var_procName_1224, var_mode_1199, var_isGlobal_1327, var_isSafe_1350, var_procFormalArgumentList_1310, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 55))  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i40_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_required COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 23)) ;
  nt_function_5F_header_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i41_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 24)) ;
  GALGAS_mode var_mode_1263 ;
  GALGAS_lstring var_procName_1288 ;
  GALGAS_lstringlist var_attributeList_1324 ;
  GALGAS_routineFormalArgumentListAST var_procFormalArgumentList_1374 ;
  nt_function_5F_header_ (ioArgument_ioAST, var_mode_1263, var_procName_1288, var_attributeList_1324, var_procFormalArgumentList_1374, inCompiler) ;
  GALGAS_lstring var_returnTypeName_1402 ;
  switch (select_plm_5F_syntax_56 (inCompiler)) {
  case 1: {
    var_returnTypeName_1402 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 33)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 35)) ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_1402, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 38)) ;
  GALGAS_lstring var_llvmName_1557 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 39)) ;
  ioArgument_ioAST.mProperty_mExternProcListAST.addAssign_operation (var_procName_1288, var_mode_1263, var_attributeList_1324, var_procFormalArgumentList_1374, var_returnTypeName_1402, var_llvmName_1557, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 40))  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i41_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 24)) ;
  nt_function_5F_header_parse (inCompiler) ;
  switch (select_plm_5F_syntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 35)) ;
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 39)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_isr_i42_ (GALGAS_ast & ioArgument_ioAST,
                                                         const GALGAS_lstring constinArgument_inModuleName,
                                                         C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("declaration-isr.galgas", 22)) ;
  GALGAS_mode var_mode_1149 ;
  switch (select_plm_5F_syntax_57 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-isr.galgas", 25)) ;
    var_mode_1149 = GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-isr.galgas", 26)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-isr.galgas", 28)) ;
    var_mode_1149 = GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("declaration-isr.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_isrName_1290 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-isr.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 32)) ;
  GALGAS_instructionListAST var_instructionList_1349 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1349, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 34)) ;
  ioArgument_ioAST.mProperty_mISRDeclarationListAST.addAssign_operation (var_isrName_1290, var_mode_1149, constinArgument_inModuleName, var_instructionList_1349, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 40))  COMMA_SOURCE_FILE ("declaration-isr.galgas", 35)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_isr_i42_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("declaration-isr.galgas", 22)) ;
  switch (select_plm_5F_syntax_57 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-isr.galgas", 25)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-isr.galgas", 28)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-isr.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 32)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 34)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_guard_i43_ (GALGAS_ast & ioArgument_ioAST,
                                                           GALGAS_guardDeclarationListAST & ioArgument_ioGuardList,
                                                           C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_public_1448 ;
  switch (select_plm_5F_syntax_58 (inCompiler)) {
  case 1: {
    var_public_1448 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-guard.galgas", 35)) ;
    var_public_1448 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-guard.galgas", 38)) ;
  GALGAS_lstring var_guardName_1574 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-guard.galgas", 39)) ;
  GALGAS_lstringlist var_attributeList_1605 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_59 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_1665 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-guard.galgas", 43)) ;
      var_attributeList_1605.addAssign_operation (var_attribute_1665  COMMA_SOURCE_FILE ("declaration-guard.galgas", 44)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_routineFormalArgumentListAST var_guardFormalArgumentList_1777 ;
  nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_guardFormalArgumentList_1777, inCompiler) ;
  GALGAS_guardKind var_guardKind_1802 ;
  switch (select_plm_5F_syntax_60 (inCompiler)) {
  case 1: {
    var_guardKind_1802 = GALGAS_guardKind::constructor_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 49)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 51)) ;
    GALGAS_callInstructionAST var_instruction_1907 ;
    nt_procedure_5F_call_ (ioArgument_ioAST, var_instruction_1907, inCompiler) ;
    var_guardKind_1802 = GALGAS_guardKind::constructor_convenienceGuard (var_instruction_1907  COMMA_SOURCE_FILE ("declaration-guard.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 55)) ;
  GALGAS_instructionListAST var_instructionList_2030 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_2030, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 57)) ;
  ioArgument_ioGuardList.addAssign_operation (var_guardName_1574, var_public_1448, var_attributeList_1605, var_guardFormalArgumentList_1777, var_guardKind_1802, var_instructionList_2030, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 65))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_guard_i43_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_58 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-guard.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-guard.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-guard.galgas", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_59 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-guard.galgas", 43)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
  switch (select_plm_5F_syntax_60 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 51)) ;
    nt_procedure_5F_call_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 55)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 57)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_i44_ (GALGAS_ast & ioArgument_ioAST,
                                                                GALGAS_expressionAST & outArgument_outExpression,
                                                                C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_logical_5F_xor_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_61 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_or COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 20)) ;
      GALGAS_location var_operatorLocation_1090 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 21)) ;
      GALGAS_expressionAST var_rightExpression_1167 ;
      nt_expression_5F_logical_5F_xor_ (ioArgument_ioAST, var_rightExpression_1167, inCompiler) ;
      GALGAS_booleanShortCircuitAndOperatorExpressionAST var_andExpression_1243 = GALGAS_booleanShortCircuitAndOperatorExpressionAST::constructor_new (GALGAS_prefixOperatorExpressionAST::constructor_new (var_operatorLocation_1090, GALGAS_prefixOperator::constructor_notOperator (SOURCE_FILE ("expression-operator-priority.galgas", 25)), outArgument_outExpression  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 25)), var_operatorLocation_1090, GALGAS_prefixOperatorExpressionAST::constructor_new (var_operatorLocation_1090, GALGAS_prefixOperator::constructor_notOperator (SOURCE_FILE ("expression-operator-priority.galgas", 27)), var_rightExpression_1167  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 27))  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 24)) ;
      outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::constructor_new (var_operatorLocation_1090, GALGAS_prefixOperator::constructor_notOperator (SOURCE_FILE ("expression-operator-priority.galgas", 31)), var_andExpression_1243  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 29)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_i44_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_logical_5F_xor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_61 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_or COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 20)) ;
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_logical_5F_xor_i45_ (GALGAS_ast & ioArgument_ioAST,
                                                                                  GALGAS_expressionAST & outArgument_outExpression,
                                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_logical_5F_and_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_62 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_xor COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 43)) ;
      GALGAS_location var_operatorLocation_1974 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 44)) ;
      GALGAS_expressionAST var_rightExpression_2051 ;
      nt_expression_5F_logical_5F_and_ (ioArgument_ioAST, var_rightExpression_2051, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_1974, GALGAS_infixOperator::constructor_booleanXorOp (SOURCE_FILE ("expression-operator-priority.galgas", 49)), var_rightExpression_2051  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 46)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_logical_5F_xor_i45_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_logical_5F_and_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_62 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_xor COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 43)) ;
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_logical_5F_and_i46_ (GALGAS_ast & ioArgument_ioAST,
                                                                                  GALGAS_expressionAST & outArgument_outExpression,
                                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_bitwise_5F_or_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_63 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_and COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 61)) ;
      GALGAS_location var_operatorLocation_2535 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 62)) ;
      GALGAS_expressionAST var_rightExpression_2611 ;
      nt_expression_5F_bitwise_5F_or_ (ioArgument_ioAST, var_rightExpression_2611, inCompiler) ;
      outArgument_outExpression = GALGAS_booleanShortCircuitAndOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_2535, var_rightExpression_2611  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 64)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_logical_5F_and_i46_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_or_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_63 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_and COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 61)) ;
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_bitwise_5F_or_i47_ (GALGAS_ast & ioArgument_ioAST,
                                                                                 GALGAS_expressionAST & outArgument_outExpression,
                                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_bitwise_5F_xor_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_64 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 78)) ;
      GALGAS_location var_operatorLocation_3087 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 79)) ;
      GALGAS_expressionAST var_rightExpression_3164 ;
      nt_expression_5F_bitwise_5F_xor_ (ioArgument_ioAST, var_rightExpression_3164, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_3087, GALGAS_infixOperator::constructor_orOp (SOURCE_FILE ("expression-operator-priority.galgas", 84)), var_rightExpression_3164  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 81)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_bitwise_5F_or_i47_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_xor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_64 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 78)) ;
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_bitwise_5F_xor_i48_ (GALGAS_ast & ioArgument_ioAST,
                                                                                  GALGAS_expressionAST & outArgument_outExpression,
                                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_bitwise_5F_and_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_65 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 96)) ;
      GALGAS_location var_operatorLocation_3639 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 97)) ;
      GALGAS_expressionAST var_rightExpression_3716 ;
      nt_expression_5F_bitwise_5F_and_ (ioArgument_ioAST, var_rightExpression_3716, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_3639, GALGAS_infixOperator::constructor_xorOp (SOURCE_FILE ("expression-operator-priority.galgas", 102)), var_rightExpression_3716  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 99)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_bitwise_5F_xor_i48_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_and_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_65 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 96)) ;
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_bitwise_5F_and_i49_ (GALGAS_ast & ioArgument_ioAST,
                                                                                  GALGAS_expressionAST & outArgument_outExpression,
                                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_equality_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_66 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 114)) ;
      GALGAS_location var_operatorLocation_4190 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 115)) ;
      GALGAS_expressionAST var_rightExpression_4264 ;
      nt_expression_5F_equality_ (ioArgument_ioAST, var_rightExpression_4264, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_4190, GALGAS_infixOperator::constructor_andOp (SOURCE_FILE ("expression-operator-priority.galgas", 120)), var_rightExpression_4264  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 117)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_bitwise_5F_and_i49_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_equality_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_66 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 114)) ;
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_equality_i50_ (GALGAS_ast & ioArgument_ioAST,
                                                                            GALGAS_expressionAST & outArgument_outExpression,
                                                                            C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_comparison_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  switch (select_plm_5F_syntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 132)) ;
    GALGAS_location var_operatorLocation_4734 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 133)) ;
    GALGAS_expressionAST var_rightExpression_4810 ;
    nt_expression_5F_comparison_ (ioArgument_ioAST, var_rightExpression_4810, inCompiler) ;
    outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_4734, GALGAS_infixOperator::constructor_equal (SOURCE_FILE ("expression-operator-priority.galgas", 138)), var_rightExpression_4810  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 135)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 142)) ;
    GALGAS_location var_operatorLocation_5008 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 143)) ;
    GALGAS_expressionAST var_rightExpression_5084 ;
    nt_expression_5F_comparison_ (ioArgument_ioAST, var_rightExpression_5084, inCompiler) ;
    outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_5008, GALGAS_infixOperator::constructor_nonEqual (SOURCE_FILE ("expression-operator-priority.galgas", 148)), var_rightExpression_5084  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 145)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_equality_i50_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_comparison_parse (inCompiler) ;
  switch (select_plm_5F_syntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 132)) ;
    nt_expression_5F_comparison_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 142)) ;
    nt_expression_5F_comparison_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_comparison_i51_ (GALGAS_ast & ioArgument_ioAST,
                                                                              GALGAS_expressionAST & outArgument_outExpression,
                                                                              C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_shift_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  switch (select_plm_5F_syntax_68 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 160)) ;
    GALGAS_location var_operatorLocation_5553 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 161)) ;
    GALGAS_expressionAST var_rightExpression_5624 ;
    nt_expression_5F_shift_ (ioArgument_ioAST, var_rightExpression_5624, inCompiler) ;
    outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_5553, GALGAS_infixOperator::constructor_infEqual (SOURCE_FILE ("expression-operator-priority.galgas", 166)), var_rightExpression_5624  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 163)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 170)) ;
    GALGAS_location var_operatorLocation_5825 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 171)) ;
    GALGAS_expressionAST var_rightExpression_5896 ;
    nt_expression_5F_shift_ (ioArgument_ioAST, var_rightExpression_5896, inCompiler) ;
    outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_5825, GALGAS_infixOperator::constructor_supEqual (SOURCE_FILE ("expression-operator-priority.galgas", 176)), var_rightExpression_5896  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 173)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 180)) ;
    GALGAS_location var_operatorLocation_6097 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 181)) ;
    GALGAS_expressionAST var_rightExpression_6168 ;
    nt_expression_5F_shift_ (ioArgument_ioAST, var_rightExpression_6168, inCompiler) ;
    outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_6097, GALGAS_infixOperator::constructor_strictInf (SOURCE_FILE ("expression-operator-priority.galgas", 186)), var_rightExpression_6168  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 183)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 190)) ;
    GALGAS_location var_operatorLocation_6370 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 191)) ;
    GALGAS_expressionAST var_rightExpression_6441 ;
    nt_expression_5F_shift_ (ioArgument_ioAST, var_rightExpression_6441, inCompiler) ;
    outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_6370, GALGAS_infixOperator::constructor_strictSup (SOURCE_FILE ("expression-operator-priority.galgas", 196)), var_rightExpression_6441  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 193)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_comparison_i51_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_shift_parse (inCompiler) ;
  switch (select_plm_5F_syntax_68 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 160)) ;
    nt_expression_5F_shift_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 170)) ;
    nt_expression_5F_shift_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 180)) ;
    nt_expression_5F_shift_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 190)) ;
    nt_expression_5F_shift_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_shift_i52_ (GALGAS_ast & ioArgument_ioAST,
                                                                         GALGAS_expressionAST & outArgument_outExpression,
                                                                         C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_addition_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_69 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 208)) ;
      GALGAS_location var_operatorLocation_6913 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 209)) ;
      GALGAS_expressionAST var_rightExpression_6987 ;
      nt_expression_5F_addition_ (ioArgument_ioAST, var_rightExpression_6987, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_6913, GALGAS_infixOperator::constructor_leftShiftOp (SOURCE_FILE ("expression-operator-priority.galgas", 214)), var_rightExpression_6987  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 211)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 218)) ;
      GALGAS_location var_operatorLocation_7195 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 219)) ;
      GALGAS_expressionAST var_rightExpression_7269 ;
      nt_expression_5F_addition_ (ioArgument_ioAST, var_rightExpression_7269, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_7195, GALGAS_infixOperator::constructor_rightShiftOp (SOURCE_FILE ("expression-operator-priority.galgas", 224)), var_rightExpression_7269  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 221)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_shift_i52_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_addition_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_69 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 208)) ;
      nt_expression_5F_addition_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 218)) ;
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_addition_i53_ (GALGAS_ast & ioArgument_ioAST,
                                                                            GALGAS_expressionAST & outArgument_outExpression,
                                                                            C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_product_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_70 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 236)) ;
      GALGAS_location var_operatorLocation_7745 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 237)) ;
      GALGAS_expressionAST var_rightExpression_7818 ;
      nt_expression_5F_product_ (ioArgument_ioAST, var_rightExpression_7818, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_7745, GALGAS_infixOperator::constructor_addOp (SOURCE_FILE ("expression-operator-priority.galgas", 242)), var_rightExpression_7818  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 239)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2B__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 246)) ;
      GALGAS_location var_operatorLocation_8020 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 247)) ;
      GALGAS_expressionAST var_rightExpression_8093 ;
      nt_expression_5F_product_ (ioArgument_ioAST, var_rightExpression_8093, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_8020, GALGAS_infixOperator::constructor_addOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 252)), var_rightExpression_8093  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 249)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 256)) ;
      GALGAS_location var_operatorLocation_8299 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 257)) ;
      GALGAS_expressionAST var_rightExpression_8372 ;
      nt_expression_5F_product_ (ioArgument_ioAST, var_rightExpression_8372, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_8299, GALGAS_infixOperator::constructor_subOp (SOURCE_FILE ("expression-operator-priority.galgas", 262)), var_rightExpression_8372  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 259)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 266)) ;
      GALGAS_location var_operatorLocation_8574 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 267)) ;
      GALGAS_expressionAST var_rightExpression_8647 ;
      nt_expression_5F_product_ (ioArgument_ioAST, var_rightExpression_8647, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_8574, GALGAS_infixOperator::constructor_subOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 272)), var_rightExpression_8647  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 269)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_addition_i53_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_product_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_70 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 236)) ;
      nt_expression_5F_product_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2B__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 246)) ;
      nt_expression_5F_product_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 256)) ;
      nt_expression_5F_product_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 266)) ;
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_product_i54_ (GALGAS_ast & ioArgument_ioAST,
                                                                           GALGAS_expressionAST & outArgument_outExpression,
                                                                           C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_71 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 284)) ;
      GALGAS_location var_operatorLocation_9109 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 285)) ;
      GALGAS_expressionAST var_rightExpression_9171 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_9171, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_9109, GALGAS_infixOperator::constructor_mulOp (SOURCE_FILE ("expression-operator-priority.galgas", 290)), var_rightExpression_9171  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 287)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2A__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 294)) ;
      GALGAS_location var_operatorLocation_9373 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 295)) ;
      GALGAS_expressionAST var_rightExpression_9435 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_9435, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_9373, GALGAS_infixOperator::constructor_mulOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 300)), var_rightExpression_9435  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 297)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 304)) ;
      GALGAS_location var_operatorLocation_9641 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 305)) ;
      GALGAS_expressionAST var_rightExpression_9703 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_9703, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_9641, GALGAS_infixOperator::constructor_modOp (SOURCE_FILE ("expression-operator-priority.galgas", 310)), var_rightExpression_9703  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 307)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 314)) ;
      GALGAS_location var_operatorLocation_9905 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 315)) ;
      GALGAS_expressionAST var_rightExpression_9967 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_9967, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_9905, GALGAS_infixOperator::constructor_modOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 320)), var_rightExpression_9967  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 317)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 324)) ;
      GALGAS_location var_operatorLocation_10173 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 325)) ;
      GALGAS_expressionAST var_rightExpression_10235 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_10235, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_10173, GALGAS_infixOperator::constructor_divOp (SOURCE_FILE ("expression-operator-priority.galgas", 330)), var_rightExpression_10235  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 327)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 334)) ;
      GALGAS_location var_operatorLocation_10437 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 335)) ;
      GALGAS_expressionAST var_rightExpression_10499 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_10499, inCompiler) ;
      outArgument_outExpression = GALGAS_infixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_10437, GALGAS_infixOperator::constructor_divOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 340)), var_rightExpression_10499  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 337)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_product_i54_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_71 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 284)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2A__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 294)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 304)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 314)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 324)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 334)) ;
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i55_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 349)) ;
  GALGAS_location var_operatorLocation_10888 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 350)) ;
  GALGAS_expressionAST var_expression_10943 ;
  nt_primary_ (ioArgument_ioAST, var_expression_10943, inCompiler) ;
  outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::constructor_new (var_operatorLocation_10888, GALGAS_prefixOperator::constructor_unsignedComplement (SOURCE_FILE ("expression-operator-priority.galgas", 354)), var_expression_10943  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 352)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i55_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 349)) ;
  nt_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i56_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_not COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 362)) ;
  GALGAS_location var_operatorLocation_11297 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 363)) ;
  GALGAS_expressionAST var_expression_11352 ;
  nt_primary_ (ioArgument_ioAST, var_expression_11352, inCompiler) ;
  outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::constructor_new (var_operatorLocation_11297, GALGAS_prefixOperator::constructor_notOperator (SOURCE_FILE ("expression-operator-priority.galgas", 367)), var_expression_11352  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 365)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i56_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_not COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 362)) ;
  nt_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i57_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 375)) ;
  GALGAS_location var_operatorLocation_11697 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 376)) ;
  GALGAS_expressionAST var_expression_11752 ;
  nt_primary_ (ioArgument_ioAST, var_expression_11752, inCompiler) ;
  outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::constructor_new (var_operatorLocation_11697, GALGAS_prefixOperator::constructor_minus (SOURCE_FILE ("expression-operator-priority.galgas", 380)), var_expression_11752  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 378)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i57_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 375)) ;
  nt_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i58_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 388)) ;
  GALGAS_location var_operatorLocation_12092 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 389)) ;
  GALGAS_expressionAST var_expression_12147 ;
  nt_primary_ (ioArgument_ioAST, var_expression_12147, inCompiler) ;
  outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::constructor_new (var_operatorLocation_12092, GALGAS_prefixOperator::constructor_minusNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 393)), var_expression_12147  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 391)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i58_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 388)) ;
  nt_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i59_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 401)) ;
  nt_expression_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 403)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i59_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 401)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 403)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i60_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_convert COMMA_SOURCE_FILE ("expression-convert.galgas", 20)) ;
  GALGAS_lstring var_typeName_1106 ;
  switch (select_plm_5F_syntax_72 (inCompiler)) {
  case 1: {
    var_typeName_1106 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 23)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1106, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-convert.galgas", 27)) ;
  nt_expression_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  GALGAS_location var_endOfExpression_1273 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-convert.galgas", 30)) ;
  outArgument_outExpression = GALGAS_convertExpressionAST::constructor_new (outArgument_outExpression, var_typeName_1106, var_endOfExpression_1273  COMMA_SOURCE_FILE ("expression-convert.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i60_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_convert COMMA_SOURCE_FILE ("expression-convert.galgas", 20)) ;
  switch (select_plm_5F_syntax_72 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-convert.galgas", 27)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-convert.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i61_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("expression-extend.galgas", 20)) ;
  GALGAS_lstring var_typeName_1106 ;
  switch (select_plm_5F_syntax_73 (inCompiler)) {
  case 1: {
    var_typeName_1106 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 23)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1106, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-extend.galgas", 27)) ;
  nt_expression_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  GALGAS_location var_endOfExpression_1273 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-extend.galgas", 30)) ;
  outArgument_outExpression = GALGAS_extendExpressionAST::constructor_new (outArgument_outExpression, var_typeName_1106, var_endOfExpression_1273  COMMA_SOURCE_FILE ("expression-extend.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i61_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("expression-extend.galgas", 20)) ;
  switch (select_plm_5F_syntax_73 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-extend.galgas", 27)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-extend.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i62_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_truncate COMMA_SOURCE_FILE ("expression-truncate.galgas", 20)) ;
  GALGAS_lstring var_typeName_1108 ;
  switch (select_plm_5F_syntax_74 (inCompiler)) {
  case 1: {
    var_typeName_1108 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 23)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1108, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-truncate.galgas", 27)) ;
  nt_expression_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  GALGAS_location var_endOfExpression_1275 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-truncate.galgas", 30)) ;
  outArgument_outExpression = GALGAS_truncateExpressionAST::constructor_new (outArgument_outExpression, var_typeName_1108, var_endOfExpression_1275  COMMA_SOURCE_FILE ("expression-truncate.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i62_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_truncate COMMA_SOURCE_FILE ("expression-truncate.galgas", 20)) ;
  switch (select_plm_5F_syntax_74 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-truncate.galgas", 27)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-truncate.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i63_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-addressof.galgas", 19)) ;
  GALGAS_LValueAST var_lvalue_1071 ;
  nt_lvalue_ (ioArgument_ioAST, var_lvalue_1071, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-addressof.galgas", 21)) ;
  outArgument_outExpression = GALGAS_addressofExpressionAST::constructor_new (var_lvalue_1071  COMMA_SOURCE_FILE ("expression-addressof.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i63_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-addressof.galgas", 19)) ;
  nt_lvalue_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-addressof.galgas", 21)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i64_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 25)) ;
  GALGAS_LValueAST var_lvalue_1251 ;
  nt_lvalue_ (ioArgument_ioAST, var_lvalue_1251, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 27)) ;
  outArgument_outExpression = GALGAS_sizeofExpressionAST::constructor_new (var_lvalue_1251  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i64_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 25)) ;
  nt_lvalue_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 27)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i65_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 35)) ;
  GALGAS_lstring var_typeName_1568 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1568, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 37)) ;
  outArgument_outExpression = GALGAS_sizeofTypeAST::constructor_new (var_typeName_1568  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i65_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 35)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 37)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i66_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_1236 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1236, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 26)) ;
  GALGAS_functionCallEffectiveParameterListAST var_parameterList_1301 = GALGAS_functionCallEffectiveParameterListAST::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_75 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_1360 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 30)) ;
      GALGAS_expressionAST var_expression_1403 ;
      nt_expression_ (ioArgument_ioAST, var_expression_1403, inCompiler) ;
      var_parameterList_1301.addAssign_operation (var_selector_1360, var_expression_1403  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 32)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_location var_errorLocation_1478 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 35)) ;
  outArgument_outExpression = GALGAS_constructorCallAST::constructor_new (var_typeName_1236, var_parameterList_1301, var_errorLocation_1478  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i66_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_75 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 30)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i67_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_optionalTypeName_1126 ;
  switch (select_plm_5F_syntax_76 (inCompiler)) {
  case 1: {
    var_optionalTypeName_1126 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 22))  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 22)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_optionalTypeName_1126, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 26)) ;
  GALGAS_lstring var_constantName_1288 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 27)) ;
  GALGAS_primaryInExpressionAccessListAST var_accessList_1370 ;
  nt_expression_5F_access_5F_list_ (ioArgument_ioAST, var_accessList_1370, inCompiler) ;
  outArgument_outExpression = GALGAS_typedConstantCallAST::constructor_new (var_optionalTypeName_1126, var_constantName_1288, var_accessList_1370  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i67_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_76 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 27)) ;
  nt_expression_5F_access_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i68_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_ifExpressionAST var_if_5F_expression_1247 ;
  nt_expression_5F_if_ (ioArgument_ioAST, var_if_5F_expression_1247, inCompiler) ;
  outArgument_outExpression = var_if_5F_expression_1247 ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i68_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_if_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_if_i69_ (GALGAS_ast & ioArgument_ioAST,
                                                                      GALGAS_ifExpressionAST & outArgument_outExpression,
                                                                      C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 30)) ;
  GALGAS_expressionAST var_ifExpression_1534 ;
  nt_expression_ (ioArgument_ioAST, var_ifExpression_1534, inCompiler) ;
  GALGAS_location var_ifExpressionEndLocation_1576 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas", 33)) ;
  GALGAS_expressionAST var_thenExpression_1637 ;
  nt_expression_ (ioArgument_ioAST, var_thenExpression_1637, inCompiler) ;
  GALGAS_location var_thenExpressionEndLocation_1681 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 37)) ;
  GALGAS_expressionAST var_elseExpression_1742 ;
  switch (select_plm_5F_syntax_77 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas", 40)) ;
    nt_expression_ (ioArgument_ioAST, var_elseExpression_1742, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas", 42)) ;
  } break ;
  case 2: {
    GALGAS_ifExpressionAST var_else_5F_if_5F_expression_1877 ;
    nt_expression_5F_if_ (ioArgument_ioAST, var_else_5F_if_5F_expression_1877, inCompiler) ;
    var_elseExpression_1742 = var_else_5F_if_5F_expression_1877 ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_elseExpressionEndLocation_1971 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 47)) ;
  outArgument_outExpression = GALGAS_ifExpressionAST::constructor_new (var_ifExpression_1534, var_ifExpressionEndLocation_1576, var_thenExpression_1637, var_thenExpressionEndLocation_1681, var_elseExpression_1742, var_elseExpressionEndLocation_1971  COMMA_SOURCE_FILE ("expression-if.galgas", 48)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_if_i69_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 30)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas", 33)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 37)) ;
  switch (select_plm_5F_syntax_77 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas", 40)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas", 42)) ;
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i70_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 28)) ;
  GALGAS_lstring var_typeName_1357 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 29)) ;
  GALGAS_integerSliceFieldListAST var_integerFieldValues_1406 = GALGAS_integerSliceFieldListAST::constructor_emptyList (SOURCE_FILE ("expression-integer-slice.galgas", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_sliceWidth_1457 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 32)) ;
    GALGAS_expressionAST var_expression_1500 ;
    nt_expression_ (ioArgument_ioAST, var_expression_1500, inCompiler) ;
    var_integerFieldValues_1406.addAssign_operation (var_sliceWidth_1457, var_expression_1500, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 34))  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 34)) ;
    switch (select_plm_5F_syntax_78 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_integerFieldValues_1406.getter_length (SOURCE_FILE ("expression-integer-slice.galgas", 37)).objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 38)), GALGAS_string ("this expression should contain two bit slices or more"), fixItArray2  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 38)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    outArgument_outExpression = GALGAS_integerSliceExpressionAST::constructor_new (var_typeName_1357, var_integerFieldValues_1406, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 40))  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 40)) ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i70_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 32)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_plm_5F_syntax_78 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 42)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i71_ (GALGAS_ast & /* ioArgument_ioAST */,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lbigint var_integerLiteral_1077 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalIntegerInExpressionAST::constructor_new (var_integerLiteral_1077  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i71_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i72_ (GALGAS_ast & /* ioArgument_ioAST */,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_stringLiteral_1075 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalStringInExpressionAST::constructor_new (var_stringLiteral_1075  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i72_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i73_ (GALGAS_ast & /* ioArgument_ioAST */,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("expression-true-false.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalBooleanInExpressionAST::constructor_new (GALGAS_bool (true)  COMMA_SOURCE_FILE ("expression-true-false.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i73_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("expression-true-false.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i74_ (GALGAS_ast & /* ioArgument_ioAST */,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_no COMMA_SOURCE_FILE ("expression-true-false.galgas", 25)) ;
  outArgument_outExpression = GALGAS_literalBooleanInExpressionAST::constructor_new (GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-true-false.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i74_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_no COMMA_SOURCE_FILE ("expression-true-false.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i75_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 28)) ;
  GALGAS_lstring var_registerGroupName_1391 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 30)) ;
  GALGAS_lstring var_registerName_1434 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 31)) ;
  GALGAS_registerIntegerFieldListAST var_integerFieldValues_1486 = GALGAS_registerIntegerFieldListAST::constructor_emptyList (SOURCE_FILE ("expression-register-value-from-slices.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_registerFieldName_1544 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 34)) ;
    GALGAS_expressionAST var_expression_1587 ;
    nt_expression_ (ioArgument_ioAST, var_expression_1587, inCompiler) ;
    var_integerFieldValues_1486.addAssign_operation (var_registerFieldName_1544, var_expression_1587, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 36))  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 36)) ;
    switch (select_plm_5F_syntax_79 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 39)) ;
  outArgument_outExpression = GALGAS_registerConstantExpressionAST::constructor_new (var_registerGroupName_1391, var_registerName_1434, var_integerFieldValues_1486  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i75_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 34)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_plm_5F_syntax_79 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 39)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i76_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_registerGroupName_1749 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary.galgas", 36)) ;
  GALGAS_primaryInExpressionAccessListAST var_accessList_1806 = GALGAS_primaryInExpressionAccessListAST::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 37)) ;
  GALGAS_lstring var_registerName_1846 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 38)) ;
  var_accessList_1806.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_register (var_registerName_1846  COMMA_SOURCE_FILE ("expression-primary.galgas", 39))  COMMA_SOURCE_FILE ("expression-primary.galgas", 39)) ;
  switch (select_plm_5F_syntax_80 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 42)) ;
    GALGAS_expressionAST var_expression_1967 ;
    nt_expression_ (ioArgument_ioAST, var_expression_1967, inCompiler) ;
    GALGAS_location var_endOfIndex_1988 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 44)) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 45)) ;
    var_accessList_1806.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_arrayAccess (var_expression_1967, var_endOfIndex_1988  COMMA_SOURCE_FILE ("expression-primary.galgas", 46))  COMMA_SOURCE_FILE ("expression-primary.galgas", 46)) ;
  } break ;
  default:
    break ;
  }
  switch (select_plm_5F_syntax_81 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary.galgas", 50)) ;
    GALGAS_lstring var_fieldName_2162 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 51)) ;
    var_accessList_1806.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_register (var_fieldName_2162  COMMA_SOURCE_FILE ("expression-primary.galgas", 52))  COMMA_SOURCE_FILE ("expression-primary.galgas", 52)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GALGAS_primaryInExpressionAST::constructor_new (var_registerGroupName_1749, var_accessList_1806  COMMA_SOURCE_FILE ("expression-primary.galgas", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i76_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 38)) ;
  switch (select_plm_5F_syntax_80 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 42)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 45)) ;
  } break ;
  default:
    break ;
  }
  switch (select_plm_5F_syntax_81 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary.galgas", 50)) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i77_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_receiver_2522 ;
  switch (select_plm_5F_syntax_82 (inCompiler)) {
  case 1: {
    var_receiver_2522 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 64)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_self COMMA_SOURCE_FILE ("expression-primary.galgas", 66)) ;
    var_receiver_2522 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_primaryInExpressionAccessListAST var_accessList_2727 ;
  nt_expression_5F_access_5F_list_ (ioArgument_ioAST, var_accessList_2727, inCompiler) ;
  outArgument_outExpression = GALGAS_primaryInExpressionAST::constructor_new (var_receiver_2522, var_accessList_2727  COMMA_SOURCE_FILE ("expression-primary.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i77_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_82 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 64)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_self COMMA_SOURCE_FILE ("expression-primary.galgas", 66)) ;
  } break ;
  default:
    break ;
  }
  nt_expression_5F_access_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_access_5F_list_i78_ (GALGAS_ast & ioArgument_ioAST,
                                                                                  GALGAS_primaryInExpressionAccessListAST & outArgument_outAccessList,
                                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outAccessList.drop () ; // Release 'out' argument
  outArgument_outAccessList = GALGAS_primaryInExpressionAccessListAST::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 78)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_83 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 81)) ;
      GALGAS_lstring var_propertyName_3125 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 82)) ;
      outArgument_outAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_property (var_propertyName_3125  COMMA_SOURCE_FILE ("expression-primary.galgas", 83))  COMMA_SOURCE_FILE ("expression-primary.galgas", 83)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 85)) ;
      GALGAS_lbigint var_low_3225 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 86)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 87)) ;
      GALGAS_lbigint var_high_3263 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 88)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 89)) ;
      outArgument_outAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_integerSlice (var_low_3225, var_high_3263  COMMA_SOURCE_FILE ("expression-primary.galgas", 90))  COMMA_SOURCE_FILE ("expression-primary.galgas", 90)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 92)) ;
      GALGAS_expressionAST var_expression_3396 ;
      nt_expression_ (ioArgument_ioAST, var_expression_3396, inCompiler) ;
      GALGAS_location var_endOfIndex_3417 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 94)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 95)) ;
      outArgument_outAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_arrayAccess (var_expression_3396, var_endOfIndex_3417  COMMA_SOURCE_FILE ("expression-primary.galgas", 96))  COMMA_SOURCE_FILE ("expression-primary.galgas", 96)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 98)) ;
      GALGAS_lstring var_methodName_3579 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 99)) ;
      GALGAS_effectiveArgumentListAST var_arguments_3631 ;
      GALGAS_location var_endOfArguments_3651 ;
      nt_effective_5F_parameters_ (ioArgument_ioAST, var_arguments_3631, var_endOfArguments_3651, inCompiler) ;
      outArgument_outAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_funcCall (var_methodName_3579, var_arguments_3631, var_endOfArguments_3651  COMMA_SOURCE_FILE ("expression-primary.galgas", 101))  COMMA_SOURCE_FILE ("expression-primary.galgas", 101)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_access_5F_list_i78_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_83 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 81)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 82)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 85)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 86)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 87)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 88)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 89)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 92)) ;
      nt_expression_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 95)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 98)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 99)) ;
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i79_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_standaloneFunctionName_1151 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 20)) ;
  GALGAS_effectiveArgumentListAST var_arguments_1201 ;
  GALGAS_location var_endOfArguments_1221 ;
  nt_effective_5F_parameters_ (ioArgument_ioAST, var_arguments_1201, var_endOfArguments_1221, inCompiler) ;
  outArgument_outExpression = GALGAS_standaloneFunctionInExpressionAST::constructor_new (var_standaloneFunctionName_1151, var_arguments_1201, var_endOfArguments_1221  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i79_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 20)) ;
  nt_effective_5F_parameters_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instructionList_i80_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_instructionListAST & outArgument_outInstructionList,
                                                                     C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("instructionList.galgas", 24)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_84 (inCompiler)) {
    case 2: {
      nt_instruction_ (ioArgument_ioAST, outArgument_outInstructionList, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("instructionList.galgas", 29)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instructionList_i80_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_84 (inCompiler)) {
    case 2: {
      nt_instruction_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("instructionList.galgas", 29)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i81_ (GALGAS_ast & ioArgument_ioAST,
                                                                 GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_check COMMA_SOURCE_FILE ("directive-check.galgas", 19)) ;
  GALGAS_lstring var_checkMessage_1097 ;
  switch (select_plm_5F_syntax_85 (inCompiler)) {
  case 1: {
    var_checkMessage_1097 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 22)) ;
  } break ;
  case 2: {
    var_checkMessage_1097 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("directive-check.galgas", 24)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("directive-check.galgas", 26)) ;
  GALGAS_expressionAST var_expression_1249 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1249, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_checkInstructionAST::constructor_new (var_checkMessage_1097.getter_location (HERE), var_checkMessage_1097, var_expression_1249  COMMA_SOURCE_FILE ("directive-check.galgas", 28))  COMMA_SOURCE_FILE ("directive-check.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("directive-check.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i81_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_check COMMA_SOURCE_FILE ("directive-check.galgas", 19)) ;
  switch (select_plm_5F_syntax_85 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("directive-check.galgas", 24)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("directive-check.galgas", 26)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("directive-check.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i82_ (GALGAS_ast & ioArgument_ioAST,
                                                                 GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_assert COMMA_SOURCE_FILE ("instruction-assert.galgas", 18)) ;
  GALGAS_location var_loc_1060 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 19)) ;
  GALGAS_expressionAST var_expression_1133 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1133, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_assertInstructionAST::constructor_new (var_loc_1060, var_expression_1133  COMMA_SOURCE_FILE ("instruction-assert.galgas", 21))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i82_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_assert COMMA_SOURCE_FILE ("instruction-assert.galgas", 18)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i83_ (GALGAS_ast & ioArgument_ioAST,
                                                                 GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_LValueAST var_assignmentTargetAST_1115 ;
  nt_lvalue_ (ioArgument_ioAST, var_assignmentTargetAST_1115, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 21)) ;
  GALGAS_expressionAST var_sourceExpression_1195 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_1195, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_assignmentInstructionAST::constructor_new (var_assignmentTargetAST_1115.getter_mIdentifier (HERE).getter_location (HERE), var_assignmentTargetAST_1115, var_sourceExpression_1195  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 24))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 24)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i83_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_lvalue_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i84_ (GALGAS_ast & ioArgument_ioAST,
                                                                 GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 37)) ;
  GALGAS_lstring var_typeName_1680 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 38)) ;
  GALGAS_sliceAssignmentListAST var_sliceAssignmentListAST_1731 = GALGAS_sliceAssignmentListAST::constructor_emptyList (SOURCE_FILE ("instruction-slice-assignment.galgas", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_sliceWidth_1782 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 41)) ;
    GALGAS_sliceTargetAST var_sliceKind_1814 ;
    switch (select_plm_5F_syntax_87 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 44)) ;
      var_sliceKind_1814 = GALGAS_sliceTargetAST::constructor_discarded (SOURCE_FILE ("instruction-slice-assignment.galgas", 45)) ;
    } break ;
    case 2: {
      GALGAS_LValueAST var_target_1916 ;
      nt_lvalue_ (ioArgument_ioAST, var_target_1916, inCompiler) ;
      var_sliceKind_1814 = GALGAS_sliceTargetAST::constructor_lValue (var_target_1916  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 48)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 50)) ;
      GALGAS_lstring var_varName_2018 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 51)) ;
      var_sliceKind_1814 = GALGAS_sliceTargetAST::constructor_varDeclaration (var_varName_2018  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 52)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 54)) ;
      GALGAS_lstring var_letName_2130 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 55)) ;
      var_sliceKind_1814 = GALGAS_sliceTargetAST::constructor_letDeclaration (var_letName_2130  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 56)) ;
    } break ;
    default:
      break ;
    }
    var_sliceAssignmentListAST_1731.addAssign_operation (var_sliceWidth_1782, var_sliceKind_1814  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 58)) ;
    switch (select_plm_5F_syntax_86 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 63)) ;
  GALGAS_expressionAST var_sourceExpression_2356 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_2356, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_sliceAssignmentInstructionAST::constructor_new (var_typeName_1680.getter_location (HERE), var_typeName_1680, var_sliceAssignmentListAST_1731, var_sourceExpression_2356, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 71))  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 66))  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 66)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i84_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 41)) ;
    switch (select_plm_5F_syntax_87 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 44)) ;
    } break ;
    case 2: {
      nt_lvalue_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 50)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 51)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 54)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 55)) ;
    } break ;
    default:
      break ;
    }
    switch (select_plm_5F_syntax_86 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 63)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i85_ (GALGAS_ast & ioArgument_ioAST,
                                                                 GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_lstring var_registerGroupName_1242 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 24)) ;
  GALGAS_lstring var_registerName_1285 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 25)) ;
  GALGAS_lstring var_attribute_1317 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 26)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_attribute_1317.getter_string (HERE).objectCompare (GALGAS_string ("bit"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("@bit")) ;
    inCompiler->emitSemanticError (var_attribute_1317.getter_location (SOURCE_FILE ("instruction-bit-banding.galgas", 28)), GALGAS_string ("attribute should be @bit"), fixItArray1  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 28)) ;
  }
  GALGAS_expressionAST var_bitExpression_1483 ;
  nt_expression_ (ioArgument_ioAST, var_bitExpression_1483, inCompiler) ;
  GALGAS_location var_bitExpressionLocation_1513 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 32)) ;
  GALGAS_expressionAST var_sourceExpression_1585 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_1585, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_bitbandInstructionAST::constructor_new (var_registerGroupName_1242.getter_location (HERE), var_registerGroupName_1242, var_registerName_1285, var_bitExpression_1483, var_bitExpressionLocation_1513, var_sourceExpression_1585, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 42))  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 35))  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 35)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i85_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 26)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 32)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_assignment_5F_combined_5F_with_5F_operator_i86_ (GALGAS_infixOperator & outArgument_outInfixOperator,
                                                                                                GALGAS_location & outArgument_outOperatorLocation,
                                                                                                C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outInfixOperator.drop () ; // Release 'out' argument
  outArgument_outOperatorLocation.drop () ; // Release 'out' argument
  switch (select_plm_5F_syntax_88 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 11)) ;
    outArgument_outInfixOperator = GALGAS_infixOperator::constructor_orOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 12)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 14)) ;
    outArgument_outInfixOperator = GALGAS_infixOperator::constructor_andOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 15)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 17)) ;
    outArgument_outInfixOperator = GALGAS_infixOperator::constructor_xorOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 18)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 20)) ;
    outArgument_outInfixOperator = GALGAS_infixOperator::constructor_addOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 21)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2B__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 23)) ;
    outArgument_outInfixOperator = GALGAS_infixOperator::constructor_addOpNoOvf (SOURCE_FILE ("instruction-assignment-operator.galgas", 24)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 26)) ;
    outArgument_outInfixOperator = GALGAS_infixOperator::constructor_subOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 27)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 29)) ;
    outArgument_outInfixOperator = GALGAS_infixOperator::constructor_subOpNoOvf (SOURCE_FILE ("instruction-assignment-operator.galgas", 30)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 32)) ;
    outArgument_outInfixOperator = GALGAS_infixOperator::constructor_mulOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 33)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2A__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 35)) ;
    outArgument_outInfixOperator = GALGAS_infixOperator::constructor_mulOpNoOvf (SOURCE_FILE ("instruction-assignment-operator.galgas", 36)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3C__3C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 38)) ;
    outArgument_outInfixOperator = GALGAS_infixOperator::constructor_leftShiftOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 39)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3E__3E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 41)) ;
    outArgument_outInfixOperator = GALGAS_infixOperator::constructor_rightShiftOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 42)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outOperatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 44)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_assignment_5F_combined_5F_with_5F_operator_i86_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_88 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 11)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 14)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 17)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 20)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2B__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 23)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 26)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 29)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 32)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2A__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 35)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3C__3C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 38)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3E__3E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i87_ (GALGAS_ast & ioArgument_ioAST,
                                                                 GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_LValueAST var_lvalue_1499 ;
  nt_lvalue_ (ioArgument_ioAST, var_lvalue_1499, inCompiler) ;
  GALGAS_location var_instructionLocation_1527 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 52)) ;
  GALGAS_infixOperator var_infixOperator_1630 ;
  GALGAS_location var_operatorLocation_1652 ;
  nt_assignment_5F_combined_5F_with_5F_operator_ (var_infixOperator_1630, var_operatorLocation_1652, inCompiler) ;
  GALGAS_expressionAST var_rightExpression_1737 ;
  nt_expression_ (ioArgument_ioAST, var_rightExpression_1737, inCompiler) ;
  GALGAS_primaryInExpressionAccessListAST var_accessList_1817 = GALGAS_primaryInExpressionAccessListAST::constructor_emptyList (SOURCE_FILE ("instruction-assignment-operator.galgas", 58)) ;
  cEnumerator_accessInAssignmentListAST enumerator_1861 (var_lvalue_1499.getter_mAccessList (HERE), kENUMERATION_UP) ;
  while (enumerator_1861.hasCurrentObject ()) {
    switch (enumerator_1861.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_register:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_register * extractPtr_1984 = (const cEnumAssociatedValues_accessInAssignmentAST_register *) (enumerator_1861.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_registerName = extractPtr_1984->mAssociatedValue0 ;
        var_accessList_1817.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_register (extractedValue_registerName  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 62))  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 62)) ;
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_2068 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_1861.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_2068->mAssociatedValue0 ;
        var_accessList_1817.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_property (extractedValue_name  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 64))  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 64)) ;
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_2211 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_1861.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_index = extractPtr_2211->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_2211->mAssociatedValue1 ;
        var_accessList_1817.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_arrayAccess (extractedValue_index, extractedValue_endOfIndex  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 66))  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 66)) ;
      }
      break ;
    }
    enumerator_1861.gotoNextObject () ;
  }
  GALGAS_primaryInExpressionAST var_leftExpression_2252 = GALGAS_primaryInExpressionAST::constructor_new (var_lvalue_1499.getter_mIdentifier (HERE), var_accessList_1817  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 69)) ;
  GALGAS_infixOperatorExpressionAST var_expression_2335 = GALGAS_infixOperatorExpressionAST::constructor_new (var_leftExpression_2252, var_operatorLocation_1652, var_infixOperator_1630, var_rightExpression_1737  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 70)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_assignmentInstructionAST::constructor_new (var_instructionLocation_1527, var_lvalue_1499, var_expression_2335  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 77))  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 77)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i87_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_lvalue_parse (inCompiler) ;
  nt_assignment_5F_combined_5F_with_5F_operator_parse (inCompiler) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i88_ (GALGAS_ast & ioArgument_ioAST,
                                                                 GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 27)) ;
  GALGAS_lstring var_varName_1352 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 28)) ;
  GALGAS_lstring var_optionalTypeName_1382 ;
  switch (select_plm_5F_syntax_89 (inCompiler)) {
  case 1: {
    var_optionalTypeName_1382 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-var.galgas", 31)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_optionalTypeName_1382, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas", 35)) ;
  GALGAS_expressionAST var_expression_1560 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1560, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_varInstructionWithAssignmentAST::constructor_new (var_varName_1352.getter_location (HERE), var_varName_1352, var_optionalTypeName_1382, var_expression_1560  COMMA_SOURCE_FILE ("instruction-var.galgas", 37))  COMMA_SOURCE_FILE ("instruction-var.galgas", 37)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i88_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 28)) ;
  switch (select_plm_5F_syntax_89 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas", 35)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i89_ (GALGAS_ast & ioArgument_ioAST,
                                                                 GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 48)) ;
  GALGAS_lstring var_varName_1955 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 49)) ;
  GALGAS_lstring var_typeName_1999 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1999, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_varInstructionAST::constructor_new (var_varName_1955.getter_location (HERE), var_varName_1955, var_typeName_1999  COMMA_SOURCE_FILE ("instruction-var.galgas", 51))  COMMA_SOURCE_FILE ("instruction-var.galgas", 51)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i89_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 49)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i90_ (GALGAS_ast & ioArgument_ioAST,
                                                                 GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 20)) ;
  GALGAS_lstring var_varName_1146 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 21)) ;
  GALGAS_lstring var_optionalTypeName_1176 ;
  switch (select_plm_5F_syntax_90 (inCompiler)) {
  case 1: {
    var_optionalTypeName_1176 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-let.galgas", 24)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_optionalTypeName_1176, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 28)) ;
  GALGAS_expressionAST var_expression_1354 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1354, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_letInstructionWithAssignmentAST::constructor_new (var_varName_1146.getter_location (HERE), var_varName_1146, var_optionalTypeName_1176, var_expression_1354  COMMA_SOURCE_FILE ("instruction-let.galgas", 30))  COMMA_SOURCE_FILE ("instruction-let.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i90_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 21)) ;
  switch (select_plm_5F_syntax_90 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 28)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i91_ (GALGAS_ast & /* ioArgument_ioAST */,
                                                                 GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("instruction-nop.galgas", 17)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_letInstructionNOP::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-nop.galgas", 18))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 18))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i91_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("instruction-nop.galgas", 17)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i92_ (GALGAS_ast & ioArgument_ioAST,
                                                                 GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("instruction-panic.galgas", 18)) ;
  GALGAS_location var_loc_1062 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 19)) ;
  GALGAS_expressionAST var_codeExpression_1139 ;
  nt_expression_ (ioArgument_ioAST, var_codeExpression_1139, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_panicInstructionAST::constructor_new (var_loc_1062, var_codeExpression_1139  COMMA_SOURCE_FILE ("instruction-panic.galgas", 21))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i92_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("instruction-panic.galgas", 18)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i93_ (GALGAS_ast & ioArgument_ioAST,
                                                                 GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_ifInstructionAST var_ifInstruction_1346 ;
  nt_if_5F_instruction_ (ioArgument_ioAST, var_ifInstruction_1346, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (var_ifInstruction_1346  COMMA_SOURCE_FILE ("instruction-if.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i93_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_if_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_if_5F_instruction_i94_ (GALGAS_ast & ioArgument_ioAST,
                                                                       GALGAS_ifInstructionAST & outArgument_outIfInstruction,
                                                                       C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outIfInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 32)) ;
  GALGAS_location var_instructionLocation_1627 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 33)) ;
  GALGAS_bool var_staticIfExpression_1673 ;
  switch (select_plm_5F_syntax_91 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_attributeValue_1724 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 36)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_attributeValue_1724.getter_string (HERE).objectCompare (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 37)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_staticIfExpression_1673 = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 42))) ;
      inCompiler->emitSemanticError (var_attributeValue_1724.getter_location (SOURCE_FILE ("instruction-if.galgas", 40)), GALGAS_string ("the attribute should be \"@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 40)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 40)), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 40)) ;
      var_staticIfExpression_1673.drop () ; // Release error dropped variable
    }
  } break ;
  case 2: {
    var_staticIfExpression_1673 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GALGAS_expressionAST var_testExpression_2113 ;
  nt_expression_ (ioArgument_ioAST, var_testExpression_2113, inCompiler) ;
  GALGAS_location var_testExpressionEndLocation_2147 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 49)) ;
  GALGAS_instructionListAST var_thenInstructionList_2227 ;
  nt_instructionList_ (ioArgument_ioAST, var_thenInstructionList_2227, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 51)) ;
  GALGAS_location var_endOfThenBranch_2259 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 52)) ;
  GALGAS_instructionListAST var_elseInstructionList_2320 ;
  switch (select_plm_5F_syntax_92 (inCompiler)) {
  case 1: {
    var_elseInstructionList_2320 = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 55)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 57)) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 58)) ;
    nt_instructionList_ (ioArgument_ioAST, var_elseInstructionList_2320, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 60)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
    GALGAS_ifInstructionAST var_ifInstruction_2525 ;
    nt_if_5F_instruction_ (ioArgument_ioAST, var_ifInstruction_2525, inCompiler) ;
    GALGAS_instructionListAST temp_2 = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 64)) ;
    temp_2.addAssign_operation (var_ifInstruction_2525  COMMA_SOURCE_FILE ("instruction-if.galgas", 64)) ;
    var_elseInstructionList_2320 = temp_2 ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfElseBranch_2602 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 66)) ;
  outArgument_outIfInstruction = GALGAS_ifInstructionAST::constructor_new (var_instructionLocation_1627, var_testExpression_2113, var_testExpressionEndLocation_2147, var_staticIfExpression_1673, var_thenInstructionList_2227, var_endOfThenBranch_2259, var_elseInstructionList_2320, var_endOfElseBranch_2602, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 76))  COMMA_SOURCE_FILE ("instruction-if.galgas", 67)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_if_5F_instruction_i94_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 32)) ;
  switch (select_plm_5F_syntax_91 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 36)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 49)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 51)) ;
  switch (select_plm_5F_syntax_92 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 57)) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 58)) ;
    nt_instructionList_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 60)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
    nt_if_5F_instruction_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_guarded_5F_command_i95_ (GALGAS_ast & ioArgument_ioAST,
                                                                        GALGAS_guardedCommandAST & outArgument_outGuardedCommand,
                                                                        C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outGuardedCommand.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_on COMMA_SOURCE_FILE ("instruction-sync.galgas", 43)) ;
  GALGAS_expressionAST var_expression_2064 ;
  GALGAS_location var_endOfExp_2087 ;
  GALGAS_bool var_warnsOnStaticExpression_2121 ;
  switch (select_plm_5F_syntax_93 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("instruction-sync.galgas", 48)) ;
    nt_expression_ (ioArgument_ioAST, var_expression_2064, inCompiler) ;
    var_endOfExp_2087 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 50)) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("instruction-sync.galgas", 51)) ;
    var_warnsOnStaticExpression_2121 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    var_expression_2064 = GALGAS_literalBooleanInExpressionAST::constructor_new (GALGAS_bool (true)  COMMA_SOURCE_FILE ("instruction-sync.galgas", 54)) ;
    var_endOfExp_2087 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 55)) ;
    var_warnsOnStaticExpression_2121 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lbool var_usesSelf_2409 ;
  switch (select_plm_5F_syntax_94 (inCompiler)) {
  case 1: {
    var_usesSelf_2409 = GALGAS_lbool::constructor_new (GALGAS_bool (false), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 60))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 60)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-sync.galgas", 62)) ;
    var_usesSelf_2409 = GALGAS_lbool::constructor_new (GALGAS_bool (true), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 63))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 63)) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-sync.galgas", 64)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstringlist var_nameList_2559 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 66)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_name_2604 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-sync.galgas", 68)) ;
    var_nameList_2559.addAssign_operation (var_name_2604  COMMA_SOURCE_FILE ("instruction-sync.galgas", 69)) ;
    switch (select_plm_5F_syntax_95 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-sync.galgas", 71)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_effectiveArgumentListAST var_effectiveParameterList_2719 ;
  GALGAS_location joker_2721 ; // Joker input parameter
  nt_effective_5F_parameters_ (ioArgument_ioAST, var_effectiveParameterList_2719, joker_2721, inCompiler) ;
  joker_2721.drop () ; // Release temporary input variables (joker in source)
  GALGAS_bool var_isExitCommand_2746 ;
  switch (select_plm_5F_syntax_96 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_exit COMMA_SOURCE_FILE ("instruction-sync.galgas", 76)) ;
    var_isExitCommand_2746 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    var_isExitCommand_2746 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  outArgument_outGuardedCommand = GALGAS_guardedCommandAST::constructor_boolAndSync (var_isExitCommand_2746, var_expression_2064, var_warnsOnStaticExpression_2121, var_endOfExp_2087, var_usesSelf_2409, var_nameList_2559, var_effectiveParameterList_2719  COMMA_SOURCE_FILE ("instruction-sync.galgas", 81)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_guarded_5F_command_i95_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_on COMMA_SOURCE_FILE ("instruction-sync.galgas", 43)) ;
  switch (select_plm_5F_syntax_93 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("instruction-sync.galgas", 48)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("instruction-sync.galgas", 51)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_plm_5F_syntax_94 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-sync.galgas", 62)) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-sync.galgas", 64)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-sync.galgas", 68)) ;
    switch (select_plm_5F_syntax_95 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-sync.galgas", 71)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_effective_5F_parameters_parse (inCompiler) ;
  switch (select_plm_5F_syntax_96 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_exit COMMA_SOURCE_FILE ("instruction-sync.galgas", 76)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_guarded_5F_command_i96_ (GALGAS_ast & ioArgument_ioAST,
                                                                        GALGAS_guardedCommandAST & outArgument_outGuardedCommand,
                                                                        C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outGuardedCommand.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_on COMMA_SOURCE_FILE ("instruction-sync.galgas", 95)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("instruction-sync.galgas", 96)) ;
  GALGAS_expressionAST var_expression_3407 ;
  nt_expression_ (ioArgument_ioAST, var_expression_3407, inCompiler) ;
  GALGAS_location var_endOfExp_3424 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 98)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("instruction-sync.galgas", 99)) ;
  GALGAS_bool var_isExitCommand_3473 ;
  switch (select_plm_5F_syntax_97 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_exit COMMA_SOURCE_FILE ("instruction-sync.galgas", 102)) ;
    var_isExitCommand_3473 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    var_isExitCommand_3473 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  outArgument_outGuardedCommand = GALGAS_guardedCommandAST::constructor_boolean (var_isExitCommand_3473, var_expression_3407, var_endOfExp_3424  COMMA_SOURCE_FILE ("instruction-sync.galgas", 107)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_guarded_5F_command_i96_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_on COMMA_SOURCE_FILE ("instruction-sync.galgas", 95)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("instruction-sync.galgas", 96)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("instruction-sync.galgas", 99)) ;
  switch (select_plm_5F_syntax_97 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_exit COMMA_SOURCE_FILE ("instruction-sync.galgas", 102)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i97_ (GALGAS_ast & ioArgument_ioAST,
                                                                 GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("instruction-sync.galgas", 117)) ;
  GALGAS_location var_startLocation_3942 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 118)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-sync.galgas", 119)) ;
  GALGAS_syncInstructionBranchListAST var_onInstructionBranchList_4025 = GALGAS_syncInstructionBranchListAST::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 120)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_guardedCommandAST var_guardedCommand_4112 ;
    nt_guarded_5F_command_ (ioArgument_ioAST, var_guardedCommand_4112, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-sync.galgas", 123)) ;
    GALGAS_instructionListAST var_instructionList_4175 ;
    nt_instructionList_ (ioArgument_ioAST, var_instructionList_4175, inCompiler) ;
    var_onInstructionBranchList_4025.addAssign_operation (var_guardedCommand_4112, var_instructionList_4175, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 125))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 125)) ;
    switch (select_plm_5F_syntax_98 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_syncInstructionAST::constructor_new (var_startLocation_3942, var_onInstructionBranchList_4025, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 128))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 128))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-sync.galgas", 129)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i97_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("instruction-sync.galgas", 117)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-sync.galgas", 119)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_guarded_5F_command_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-sync.galgas", 123)) ;
    nt_instructionList_parse (inCompiler) ;
    switch (select_plm_5F_syntax_98 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-sync.galgas", 129)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i98_ (GALGAS_ast & ioArgument_ioAST,
                                                                 GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-while.galgas", 21)) ;
  GALGAS_location var_instructionLocation_1198 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 22)) ;
  GALGAS_expressionAST var_testExpression_1275 ;
  nt_expression_ (ioArgument_ioAST, var_testExpression_1275, inCompiler) ;
  GALGAS_location var_testExpressionEndLocation_1309 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-while.galgas", 25)) ;
  GALGAS_instructionListAST var_instructionList_1386 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1386, inCompiler) ;
  GALGAS_location var_endOfInstruction_1411 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-while.galgas", 28)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_whileInstructionAST::constructor_new (var_instructionLocation_1198, var_testExpression_1275, var_testExpressionEndLocation_1309, var_instructionList_1386, var_endOfInstruction_1411  COMMA_SOURCE_FILE ("instruction-while.galgas", 29))  COMMA_SOURCE_FILE ("instruction-while.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i98_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-while.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-while.galgas", 25)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-while.galgas", 28)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i99_ (GALGAS_ast & ioArgument_ioAST,
                                                                 GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 24)) ;
  GALGAS_lstring var_varName_1266 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 26)) ;
  GALGAS_lstring var_iteratedObject_1312 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 27)) ;
  GALGAS_bool var_staticWhileExpression_1342 = GALGAS_bool (false) ;
  GALGAS_expressionAST var_whileExpression_1385 ;
  switch (select_plm_5F_syntax_99 (inCompiler)) {
  case 1: {
    var_whileExpression_1385 = GALGAS_literalBooleanInExpressionAST::constructor_new (GALGAS_bool (true)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 31)) ;
    var_staticWhileExpression_1342 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 34)) ;
    switch (select_plm_5F_syntax_100 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_attributeValue_1574 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 36)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_attributeValue_1574.getter_string (HERE).objectCompare (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 37)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_staticWhileExpression_1342 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 41))) ;
        inCompiler->emitSemanticError (var_attributeValue_1574.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 40)), GALGAS_string ("the attribute should be \"@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 40)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 40)), fixItArray1  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 40)) ;
      }
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    nt_expression_ (ioArgument_ioAST, var_whileExpression_1385, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOf_5F_whileExpression_5F_instruction_1956 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 48)) ;
  GALGAS_instructionListAST var_instructionList_2032 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_2032, inCompiler) ;
  GALGAS_location var_endOfInstruction_2057 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 51)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_forInstructionAST::constructor_new (var_varName_1266.getter_location (HERE), var_varName_1266, var_iteratedObject_1312, var_whileExpression_1385, var_endOf_5F_whileExpression_5F_instruction_1956, var_staticWhileExpression_1342, var_instructionList_2032, var_endOfInstruction_2057  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 52))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i99_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 27)) ;
  switch (select_plm_5F_syntax_99 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 34)) ;
    switch (select_plm_5F_syntax_100 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 36)) ;
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
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 48)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 51)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i100_ (GALGAS_ast & ioArgument_ioAST,
                                                                  GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 25)) ;
  GALGAS_lstring var_varName_1347 ;
  switch (select_plm_5F_syntax_101 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 28)) ;
    var_varName_1347 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 29)) ;
  } break ;
  case 2: {
    var_varName_1347 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_typeName_1481 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1481, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 34)) ;
  GALGAS_expressionAST var_lowerBoundExpression_1557 ;
  nt_expression_ (ioArgument_ioAST, var_lowerBoundExpression_1557, inCompiler) ;
  GALGAS_location var_endOf_5F_lowerBoundExpression_5F_instruction_1604 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 37)) ;
  GALGAS_expressionAST var_upperBoundExpression_1698 ;
  nt_expression_ (ioArgument_ioAST, var_upperBoundExpression_1698, inCompiler) ;
  GALGAS_location var_endOf_5F_upperBoundExpression_5F_instruction_1745 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 40)) ;
  GALGAS_instructionListAST var_instructionList_1821 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1821, inCompiler) ;
  GALGAS_location var_endOfInstruction_1846 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 43)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_forLowerUpperBoundInstructionAST::constructor_new (var_varName_1347.getter_location (HERE), var_varName_1347, var_typeName_1481, var_lowerBoundExpression_1557, var_endOf_5F_lowerBoundExpression_5F_instruction_1604, var_upperBoundExpression_1698, var_endOf_5F_upperBoundExpression_5F_instruction_1745, var_instructionList_1821, var_endOfInstruction_1846  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 44))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 44)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i100_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 25)) ;
  switch (select_plm_5F_syntax_101 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 28)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 34)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 37)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 40)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 43)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i101_ (GALGAS_ast & ioArgument_ioAST,
                                                                  GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_callInstructionAST var_routineCallInstruction_1614 ;
  nt_procedure_5F_call_ (ioArgument_ioAST, var_routineCallInstruction_1614, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (var_routineCallInstruction_1614  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i101_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_procedure_5F_call_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_procedure_5F_call_i102_ (GALGAS_ast & ioArgument_ioAST,
                                                                        GALGAS_callInstructionAST & outArgument_outInstruction,
                                                                        C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation_1893 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 39)) ;
  GALGAS_LValueAST var_assignmentTargetAST_1956 ;
  nt_lvalue_ (ioArgument_ioAST, var_assignmentTargetAST_1956, inCompiler) ;
  GALGAS_effectiveArgumentListAST var_arguments_2006 ;
  GALGAS_location var_endOfArguments_2026 ;
  nt_effective_5F_parameters_ (ioArgument_ioAST, var_arguments_2006, var_endOfArguments_2026, inCompiler) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_assignmentTargetAST_1956.getter_mAccessList (SOURCE_FILE ("instruction-procedure-call.galgas", 42)).getter_length (SOURCE_FILE ("instruction-procedure-call.galgas", 42)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsNotEqual, var_assignmentTargetAST_1956.getter_mIdentifier (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 42)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outInstruction = GALGAS_standAloneProcedureCallInstructionAST::constructor_new (var_instructionLocation_1893, var_arguments_2006, var_endOfArguments_2026, var_assignmentTargetAST_1956.getter_mIdentifier (HERE)  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 43)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outInstruction = GALGAS_procedureCallInstructionAST::constructor_new (var_instructionLocation_1893, var_arguments_2006, var_endOfArguments_2026, var_assignmentTargetAST_1956.getter_mIdentifier (HERE), var_assignmentTargetAST_1956.getter_mAccessList (HERE)  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 50)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_procedure_5F_call_i102_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_lvalue_parse (inCompiler) ;
  nt_effective_5F_parameters_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i103_ (GALGAS_ast & ioArgument_ioAST,
                                                                  GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 28)) ;
  GALGAS_location var_instructionLocation_1419 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 29)) ;
  GALGAS_expressionAST var_switchExpression_1498 ;
  nt_expression_ (ioArgument_ioAST, var_switchExpression_1498, inCompiler) ;
  GALGAS_location var_switchExpressionEndLocation_1534 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 32)) ;
  GALGAS_switchCaseListAST var_switchCaseList_1597 = GALGAS_switchCaseListAST::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 33)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 35)) ;
    GALGAS_lstringlist var_caseIdentifiers_1661 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 36)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_caseIdf_1713 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
      var_caseIdentifiers_1661.addAssign_operation (var_caseIdf_1713  COMMA_SOURCE_FILE ("instruction-switch.galgas", 39)) ;
      switch (select_plm_5F_syntax_103 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 41)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 43)) ;
    GALGAS_instructionListAST var_instructionList_1846 ;
    nt_instructionList_ (ioArgument_ioAST, var_instructionList_1846, inCompiler) ;
    var_switchCaseList_1597.addAssign_operation (var_caseIdentifiers_1661, var_instructionList_1846  COMMA_SOURCE_FILE ("instruction-switch.galgas", 45)) ;
    switch (select_plm_5F_syntax_102 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_location var_endOfInstruction_1947 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 49)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_switchInstructionAST::constructor_new (var_instructionLocation_1419, var_switchExpression_1498, var_switchExpressionEndLocation_1534, var_switchCaseList_1597, var_endOfInstruction_1947  COMMA_SOURCE_FILE ("instruction-switch.galgas", 50))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 50)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i103_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 28)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 35)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
      switch (select_plm_5F_syntax_103 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 41)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 43)) ;
    nt_instructionList_parse (inCompiler) ;
    switch (select_plm_5F_syntax_102 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 49)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_lvalue_i104_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_LValueAST & outArgument_outAssignmentTargetAST,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outAssignmentTargetAST.drop () ; // Release 'out' argument
  GALGAS_lstring var_registerGroupName_1548 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("lvalue.galgas", 34)) ;
  GALGAS_accessInAssignmentListAST var_accessList_1598 = GALGAS_accessInAssignmentListAST::constructor_emptyList (SOURCE_FILE ("lvalue.galgas", 35)) ;
  GALGAS_lstring var_registerName_1638 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 36)) ;
  var_accessList_1598.addAssign_operation (GALGAS_accessInAssignmentAST::constructor_register (var_registerName_1638  COMMA_SOURCE_FILE ("lvalue.galgas", 37))  COMMA_SOURCE_FILE ("lvalue.galgas", 37)) ;
  switch (select_plm_5F_syntax_104 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue.galgas", 40)) ;
    GALGAS_expressionAST var_expression_1759 ;
    nt_expression_ (ioArgument_ioAST, var_expression_1759, inCompiler) ;
    GALGAS_location var_endOfIndex_1780 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 42)) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue.galgas", 43)) ;
    var_accessList_1598.addAssign_operation (GALGAS_accessInAssignmentAST::constructor_arrayAccess (var_expression_1759, var_endOfIndex_1780  COMMA_SOURCE_FILE ("lvalue.galgas", 44))  COMMA_SOURCE_FILE ("lvalue.galgas", 44)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outAssignmentTargetAST = GALGAS_LValueAST::constructor_new (var_registerGroupName_1548, var_accessList_1598  COMMA_SOURCE_FILE ("lvalue.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_lvalue_i104_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("lvalue.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 36)) ;
  switch (select_plm_5F_syntax_104 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue.galgas", 40)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue.galgas", 43)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_lvalue_i105_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_LValueAST & outArgument_outAssignmentTargetAST,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outAssignmentTargetAST.drop () ; // Release 'out' argument
  GALGAS_lstring var_receiver_2174 ;
  switch (select_plm_5F_syntax_105 (inCompiler)) {
  case 1: {
    var_receiver_2174 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 55)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_self COMMA_SOURCE_FILE ("lvalue.galgas", 57)) ;
    var_receiver_2174 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 58)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_accessInAssignmentListAST var_accessList_2359 = GALGAS_accessInAssignmentListAST::constructor_emptyList (SOURCE_FILE ("lvalue.galgas", 61)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_106 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue.galgas", 64)) ;
      GALGAS_lstring var_propertyName_2432 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 65)) ;
      var_accessList_2359.addAssign_operation (GALGAS_accessInAssignmentAST::constructor_property (var_propertyName_2432  COMMA_SOURCE_FILE ("lvalue.galgas", 66))  COMMA_SOURCE_FILE ("lvalue.galgas", 66)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue.galgas", 68)) ;
      GALGAS_expressionAST var_expression_2547 ;
      nt_expression_ (ioArgument_ioAST, var_expression_2547, inCompiler) ;
      GALGAS_location var_endOfIndex_2568 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 70)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue.galgas", 71)) ;
      var_accessList_2359.addAssign_operation (GALGAS_accessInAssignmentAST::constructor_arrayAccess (var_expression_2547, var_endOfIndex_2568  COMMA_SOURCE_FILE ("lvalue.galgas", 72))  COMMA_SOURCE_FILE ("lvalue.galgas", 72)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outAssignmentTargetAST = GALGAS_LValueAST::constructor_new (var_receiver_2174, var_accessList_2359  COMMA_SOURCE_FILE ("lvalue.galgas", 74)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_lvalue_i105_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_105 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 55)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_self COMMA_SOURCE_FILE ("lvalue.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_106 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue.galgas", 64)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 65)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue.galgas", 68)) ;
      nt_expression_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue.galgas", 71)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_effective_5F_parameters_i106_ (GALGAS_ast & ioArgument_ioAST,
                                                                              GALGAS_effectiveArgumentListAST & outArgument_outEffectiveParameterList,
                                                                              GALGAS_location & outArgument_outEndOfArgs,
                                                                              C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outEndOfArgs.drop () ; // Release 'out' argument
  outArgument_outEffectiveParameterList = GALGAS_effectiveArgumentListAST::constructor_emptyList (SOURCE_FILE ("effective-parameters.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_107 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_2037 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 45)) ;
      GALGAS_expressionAST var_expression_2080 ;
      nt_expression_ (ioArgument_ioAST, var_expression_2080, inCompiler) ;
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_output (var_expression_2080, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 47))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 47)), var_selector_2037  COMMA_SOURCE_FILE ("effective-parameters.galgas", 47)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_2211 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 49)) ;
      GALGAS_lstring var_effectiveParameterName_2258 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 50)) ;
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_outputInput (var_effectiveParameterName_2258  COMMA_SOURCE_FILE ("effective-parameters.galgas", 51)), var_selector_2211  COMMA_SOURCE_FILE ("effective-parameters.galgas", 51)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_2391 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 53)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_self COMMA_SOURCE_FILE ("effective-parameters.galgas", 54)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 55)) ;
      GALGAS_lstring var_effectiveParameterName_2461 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 56)) ;
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_outputInputSelfVariable (var_effectiveParameterName_2461  COMMA_SOURCE_FILE ("effective-parameters.galgas", 57)), var_selector_2391  COMMA_SOURCE_FILE ("effective-parameters.galgas", 57)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_selector_2605 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 59)) ;
      GALGAS_lstring var_effectiveParameterName_2652 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 60)) ;
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_input (var_effectiveParameterName_2652  COMMA_SOURCE_FILE ("effective-parameters.galgas", 61)), var_selector_2605  COMMA_SOURCE_FILE ("effective-parameters.galgas", 61)) ;
    } break ;
    case 6: {
      GALGAS_lstring var_selector_2778 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 63)) ;
      GALGAS_bool var_constant_2799 ;
      switch (select_plm_5F_syntax_108 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_var COMMA_SOURCE_FILE ("effective-parameters.galgas", 66)) ;
        var_constant_2799 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("effective-parameters.galgas", 69)) ;
        var_constant_2799 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_effectiveParameterName_2955 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 72)) ;
      GALGAS_lstring var_typeName_2979 ;
      switch (select_plm_5F_syntax_109 (inCompiler)) {
      case 1: {
        var_typeName_2979 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("effective-parameters.galgas", 75)) ;
      } break ;
      case 2: {
        nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_2979, inCompiler) ;
      } break ;
      default:
        break ;
      }
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_inputWithType (var_constant_2799, var_typeName_2979, var_effectiveParameterName_2955  COMMA_SOURCE_FILE ("effective-parameters.galgas", 80)), var_selector_2778  COMMA_SOURCE_FILE ("effective-parameters.galgas", 79)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outEndOfArgs = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 83)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 84)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_effective_5F_parameters_i106_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_107 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 45)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 49)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 50)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 53)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_self COMMA_SOURCE_FILE ("effective-parameters.galgas", 54)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 55)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 56)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 59)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 60)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 63)) ;
      switch (select_plm_5F_syntax_108 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_var COMMA_SOURCE_FILE ("effective-parameters.galgas", 66)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("effective-parameters.galgas", 69)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 72)) ;
      switch (select_plm_5F_syntax_109 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        nt_type_5F_definition_parse (inCompiler) ;
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
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 84)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i107_ (GALGAS_ast & ioArgument_ioAST,
                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_target COMMA_SOURCE_FILE ("target-generation.galgas", 10)) ;
  GALGAS_lstring var_targetName_595 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("target-generation.galgas", 11)) ;
  ioArgument_ioAST.mProperty_mTargetListAST.addAssign_operation (var_targetName_595  COMMA_SOURCE_FILE ("target-generation.galgas", 12)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i107_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_target COMMA_SOURCE_FILE ("target-generation.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("target-generation.galgas", 11)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i108_ (GALGAS_ast & ioArgument_ioAST,
                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_check COMMA_SOURCE_FILE ("declaration-check-target.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_target COMMA_SOURCE_FILE ("declaration-check-target.galgas", 11)) ;
  GALGAS_location var_targetConstructLocation_608 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-check-target.galgas", 12)) ;
  GALGAS_lstringlist var_acceptedTargetList_661 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-check-target.galgas", 13)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_targetName_710 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 15)) ;
    var_acceptedTargetList_661.addAssign_operation (var_targetName_710  COMMA_SOURCE_FILE ("declaration-check-target.galgas", 16)) ;
    switch (select_plm_5F_syntax_110 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 18)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioAST.mProperty_mCheckTargetListAST.addAssign_operation (var_targetConstructLocation_608, var_acceptedTargetList_661  COMMA_SOURCE_FILE ("declaration-check-target.galgas", 20)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i108_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_check COMMA_SOURCE_FILE ("declaration-check-target.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_target COMMA_SOURCE_FILE ("declaration-check-target.galgas", 11)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 15)) ;
    switch (select_plm_5F_syntax_110 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 18)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_ (const GALGAS_string constinArgument_inKey,
                                                                                                                     C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_lstring var_key_2947 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("configuration.galgas", 82)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_key_2947.getter_string (HERE).objectCompare (constinArgument_inKey)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    appendFixItActions (fixItArray1, kFixItReplace, constinArgument_inKey) ;
    inCompiler->emitSemanticError (var_key_2947.getter_location (SOURCE_FILE ("configuration.galgas", 84)), GALGAS_string ("invalid key (found '").add_operation (var_key_2947.getter_string (SOURCE_FILE ("configuration.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 84)).add_operation (GALGAS_string ("', required '"), inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 84)).add_operation (constinArgument_inKey, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 84)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 84)), fixItArray1  COMMA_SOURCE_FILE ("configuration.galgas", 84)) ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("configuration.galgas", 86)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("configuration.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("configuration.galgas", 86)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_ (GALGAS__32_lstringlist & outArgument_outPythonUtilityToolList,
                                                                                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outPythonUtilityToolList.drop () ; // Release 'out' argument
  nt_configuration_5F_key_ (GALGAS_string ("PYTHON_UTILITIES"), inCompiler) ;
  outArgument_outPythonUtilityToolList = GALGAS__32_lstringlist::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 93)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_target_5F_specific_5F_syntax_0 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_relativePath_3437 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 96)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("configuration.galgas", 97)) ;
      GALGAS_lstring var_destinationFile_3486 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 98)) ;
      outArgument_outPythonUtilityToolList.addAssign_operation (var_relativePath_3437, var_destinationFile_3486  COMMA_SOURCE_FILE ("configuration.galgas", 99)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_configuration_5F_key_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_target_5F_specific_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 96)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("configuration.galgas", 97)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 98)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_ (GALGAS_ast & ioArgument_ioAST,
                                                                                                                                 GALGAS_lstringlist & outArgument_outImportedFileList,
                                                                                                                                 GALGAS_location & outArgument_outEndOfSourceFile,
                                                                                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outImportedFileList.drop () ; // Release 'out' argument
  outArgument_outEndOfSourceFile.drop () ; // Release 'out' argument
  GALGAS_location var_loc_3860 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 110)) ;
  GALGAS__32_lstringlist var_python_5F_utilityToolList_3936 ;
  nt_python_5F_utility_5F_tool_5F_list_ (var_python_5F_utilityToolList_3936, inCompiler) ;
  nt_configuration_5F_key_ (GALGAS_string ("PYTHON_BUILD"), inCompiler) ;
  GALGAS_lstring var_python_5F_build_4009 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 113)) ;
  nt_configuration_5F_key_ (GALGAS_string ("LINKER_SCRIPT"), inCompiler) ;
  GALGAS_lstring var_linkerScript_4083 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 115)) ;
  nt_configuration_5F_key_ (GALGAS_string ("PANIC_CODE_TYPE_NAME"), inCompiler) ;
  GALGAS_lstring var_panicCodeTypeName_4167 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("configuration.galgas", 117)) ;
  nt_configuration_5F_key_ (GALGAS_string ("PANIC_LINE_TYPE_NAME"), inCompiler) ;
  GALGAS_lstring var_panicLineTypeName_4252 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("configuration.galgas", 119)) ;
  nt_configuration_5F_key_ (GALGAS_string ("POINTER_BIT_COUNT"), inCompiler) ;
  GALGAS_lbigint var_pointerSize_4328 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 121)) ;
  nt_configuration_5F_key_ (GALGAS_string ("DYNAMIC_ARRAY"), inCompiler) ;
  GALGAS_bool var_handleDynamicArray_4398 ;
  switch (select_plm_5F_target_5F_specific_5F_syntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("configuration.galgas", 125)) ;
    var_handleDynamicArray_4398 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_no COMMA_SOURCE_FILE ("configuration.galgas", 128)) ;
    var_handleDynamicArray_4398 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  nt_configuration_5F_key_ (GALGAS_string ("SYSTEM_STACK_SIZE"), inCompiler) ;
  GALGAS_lbigint var_systemStackSize_4592 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 132)) ;
  nt_configuration_5F_key_ (GALGAS_string ("NOP"), inCompiler) ;
  GALGAS_lstring var_nopInstructionStringInLLVM_4670 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 134)) ;
  nt_configuration_5F_key_ (GALGAS_string ("BIT_BAND"), inCompiler) ;
  GALGAS_lbigint var_bitbandRegisterBaseAddress_4746 ;
  GALGAS_lbigint var_bitbandRegisterEndAddress_4785 ;
  GALGAS_lbigint var_bitbandRegisterRelocationAddress_4831 ;
  GALGAS_lbigint var_bitbandRegisterOffsetMultiplier_4876 ;
  GALGAS_lbigint var_bitbandRegisterBitMultiplier_4918 ;
  switch (select_plm_5F_target_5F_specific_5F_syntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_no COMMA_SOURCE_FILE ("configuration.galgas", 142)) ;
    var_bitbandRegisterBaseAddress_4746 = GALGAS_lbigint::constructor_new (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 143)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 143))  COMMA_SOURCE_FILE ("configuration.galgas", 143)) ;
    var_bitbandRegisterEndAddress_4785 = GALGAS_lbigint::constructor_new (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 144)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 144))  COMMA_SOURCE_FILE ("configuration.galgas", 144)) ;
    var_bitbandRegisterRelocationAddress_4831 = GALGAS_lbigint::constructor_new (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 145)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 145))  COMMA_SOURCE_FILE ("configuration.galgas", 145)) ;
    var_bitbandRegisterOffsetMultiplier_4876 = GALGAS_lbigint::constructor_new (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 146)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 146))  COMMA_SOURCE_FILE ("configuration.galgas", 146)) ;
    var_bitbandRegisterBitMultiplier_4918 = GALGAS_lbigint::constructor_new (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 147)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 147))  COMMA_SOURCE_FILE ("configuration.galgas", 147)) ;
  } break ;
  case 2: {
    var_bitbandRegisterBaseAddress_4746 = inCompiler->synthetizedAttribute_bigInteger () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 149)) ;
    var_bitbandRegisterEndAddress_4785 = inCompiler->synthetizedAttribute_bigInteger () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 150)) ;
    var_bitbandRegisterRelocationAddress_4831 = inCompiler->synthetizedAttribute_bigInteger () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 151)) ;
    var_bitbandRegisterOffsetMultiplier_4876 = inCompiler->synthetizedAttribute_bigInteger () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 152)) ;
    var_bitbandRegisterBitMultiplier_4918 = inCompiler->synthetizedAttribute_bigInteger () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  nt_configuration_5F_key_ (GALGAS_string ("SERVICE_HANDLER"), inCompiler) ;
  GALGAS_lstring var_serviceHandler_5541 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 156)) ;
  nt_configuration_5F_key_ (GALGAS_string ("SERVICE_SYSTEM_STACK_SIZE"), inCompiler) ;
  GALGAS_lbigint var_servicePushedRegisterByteSize_5643 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 158)) ;
  nt_configuration_5F_key_ (GALGAS_string ("SERVICE_DISPATCHER_HEADER"), inCompiler) ;
  GALGAS_lstring var_serviceDispatcherHeader_5740 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 160)) ;
  nt_configuration_5F_key_ (GALGAS_string ("SERVICE_DISPATCHER_ENTRY"), inCompiler) ;
  GALGAS_lstring var_serviceDispatcherEntry_5835 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 162)) ;
  nt_configuration_5F_key_ (GALGAS_string ("SERVICE_ENTRY_NO_RETURNED_VALUE"), inCompiler) ;
  GALGAS_lstring var_serviceEntryNoReturnedValue_5942 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 164)) ;
  nt_configuration_5F_key_ (GALGAS_string ("SERVICE_ENTRY_WITH_RETURNED_VALUE"), inCompiler) ;
  GALGAS_lstring var_serviceEntryReturnValue_6047 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 166)) ;
  nt_configuration_5F_key_ (GALGAS_string ("SECTION_HANDLER"), inCompiler) ;
  GALGAS_lstring var_sectionHandler_6125 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 168)) ;
  nt_configuration_5F_key_ (GALGAS_string ("SECTION_SYSTEM_STACK_SIZE"), inCompiler) ;
  GALGAS_lbigint var_sectionPushedRegisterByteSize_6227 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 170)) ;
  nt_configuration_5F_key_ (GALGAS_string ("SECTION_DISPATCHER_HEADER"), inCompiler) ;
  GALGAS_lstring var_sectionDispatcherHeader_6324 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 172)) ;
  nt_configuration_5F_key_ (GALGAS_string ("SECTION_DISPATCHER_ENTRY"), inCompiler) ;
  GALGAS_lstring var_sectionDispatcherEntry_6419 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 174)) ;
  nt_configuration_5F_key_ (GALGAS_string ("SECTION_ENTRY_FROM_ANY_MODE"), inCompiler) ;
  GALGAS_lstring var_sectionDispatcherInvocationFromAnyMode_6533 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 176)) ;
  nt_configuration_5F_key_ (GALGAS_string ("SECTION_ENTRY_FROM_USER_MODE"), inCompiler) ;
  GALGAS_lstring var_sectionDispatcherInvocationFromUserMode_6649 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 178)) ;
  nt_configuration_5F_key_ (GALGAS_string ("INTERRUPT_HANDLER"), inCompiler) ;
  GALGAS_lstring var_xtrInterruptHandler_6734 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 180)) ;
  nt_configuration_5F_key_ (GALGAS_string ("INTERRUPT_USER_STACK_SIZE"), inCompiler) ;
  GALGAS_lbigint var_stackedUserRegisterOnInterruptByteSize_6845 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 182)) ;
  nt_configuration_5F_key_ (GALGAS_string ("UNDEFINED_INTERRUPT"), inCompiler) ;
  GALGAS_lstring var_undefinedInterruptHandler_6938 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 184)) ;
  nt_configuration_5F_key_ (GALGAS_string ("C_FILES"), inCompiler) ;
  GALGAS_lstringlist var_C_5F_definitionFiles_7008 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 186)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_target_5F_specific_5F_syntax_3 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_fileRelativePath_7073 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 189)) ;
      var_C_5F_definitionFiles_7008.addAssign_operation (var_fileRelativePath_7073  COMMA_SOURCE_FILE ("configuration.galgas", 190)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_configuration_5F_key_ (GALGAS_string ("S_FILES"), inCompiler) ;
  GALGAS_lstringlist var_S_5F_definitionFiles_7196 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 193)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_plm_5F_target_5F_specific_5F_syntax_4 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_fileRelativePath_7261 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 196)) ;
      var_S_5F_definitionFiles_7196.addAssign_operation (var_fileRelativePath_7261  COMMA_SOURCE_FILE ("configuration.galgas", 197)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  nt_configuration_5F_key_ (GALGAS_string ("LL_FILES"), inCompiler) ;
  GALGAS_lstringlist var_LL_5F_definitionFiles_7386 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 200)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_plm_5F_target_5F_specific_5F_syntax_5 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_fileRelativePath_7451 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 203)) ;
      var_LL_5F_definitionFiles_7386.addAssign_operation (var_fileRelativePath_7451  COMMA_SOURCE_FILE ("configuration.galgas", 204)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  outArgument_outImportedFileList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 206)) ;
  nt_configuration_5F_key_ (GALGAS_string ("PLM_FILES"), inCompiler) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    switch (select_plm_5F_target_5F_specific_5F_syntax_6 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_relativeFilePath_7631 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 210)) ;
      outArgument_outImportedFileList.addAssign_operation (var_relativeFilePath_7631  COMMA_SOURCE_FILE ("configuration.galgas", 211)) ;
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  GALGAS_interruptionConfigurationList var_interruptionConfigurationList_7747 ;
  GALGAS_enumerationConstantList var_interruptConstantList_7774 ;
  nt_interruptConfigList_ (var_interruptionConfigurationList_7747, var_interruptConstantList_7774, inCompiler) ;
  GALGAS_uint var_ptrSize_7792 ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_pointerSize_4328.getter_bigint (HERE).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 215)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (var_pointerSize_4328.getter_location (SOURCE_FILE ("configuration.galgas", 216)), GALGAS_string ("zero size pointer is invalid"), fixItArray5  COMMA_SOURCE_FILE ("configuration.galgas", 216)) ;
    var_ptrSize_7792.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_4) {
    var_ptrSize_7792 = var_pointerSize_4328.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 218)) ;
  }
  GALGAS_targetParameters var_parameters_7974 = GALGAS_targetParameters::constructor_new (var_loc_3860, var_python_5F_utilityToolList_3936, var_python_5F_build_4009, var_linkerScript_4083, var_ptrSize_7792, var_handleDynamicArray_4398, var_systemStackSize_4592, var_stackedUserRegisterOnInterruptByteSize_6845, var_nopInstructionStringInLLVM_4670, var_bitbandRegisterBaseAddress_4746, var_bitbandRegisterEndAddress_4785, var_bitbandRegisterRelocationAddress_4831, var_bitbandRegisterOffsetMultiplier_4876, var_bitbandRegisterBitMultiplier_4918, var_sectionHandler_6125, var_sectionPushedRegisterByteSize_6227, var_sectionDispatcherHeader_6324, var_sectionDispatcherEntry_6419, var_sectionDispatcherInvocationFromAnyMode_6533, var_sectionDispatcherInvocationFromUserMode_6649, var_C_5F_definitionFiles_7008, var_S_5F_definitionFiles_7196, var_LL_5F_definitionFiles_7386, var_xtrInterruptHandler_6734, var_undefinedInterruptHandler_6938, var_serviceHandler_5541, var_servicePushedRegisterByteSize_5643, var_serviceDispatcherEntry_5835, var_serviceDispatcherHeader_5740, var_serviceEntryNoReturnedValue_5942, var_serviceEntryReturnValue_6047  COMMA_SOURCE_FILE ("configuration.galgas", 220)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_configurationDeclarationAST::constructor_new (var_panicCodeTypeName_4167, var_panicLineTypeName_4252, var_parameters_7974, var_interruptionConfigurationList_7747  COMMA_SOURCE_FILE ("configuration.galgas", 253))  COMMA_SOURCE_FILE ("configuration.galgas", 253)) ;
  outArgument_outEndOfSourceFile = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 259)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_enumerationDeclarationAST::constructor_new (GALGAS_lstring::constructor_new (function_isrSlotTypeName (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 261)), var_xtrInterruptHandler_6734.getter_location (HERE)  COMMA_SOURCE_FILE ("configuration.galgas", 261)), var_interruptConstantList_7774  COMMA_SOURCE_FILE ("configuration.galgas", 260))  COMMA_SOURCE_FILE ("configuration.galgas", 260)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_python_5F_utility_5F_tool_5F_list_parse (inCompiler) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 113)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 115)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("configuration.galgas", 117)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("configuration.galgas", 119)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 121)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  switch (select_plm_5F_target_5F_specific_5F_syntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("configuration.galgas", 125)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_no COMMA_SOURCE_FILE ("configuration.galgas", 128)) ;
  } break ;
  default:
    break ;
  }
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 132)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 134)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  switch (select_plm_5F_target_5F_specific_5F_syntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_no COMMA_SOURCE_FILE ("configuration.galgas", 142)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 149)) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 150)) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 151)) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 152)) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 156)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 158)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 160)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 162)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 164)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 166)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 168)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 170)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 172)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 174)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 176)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 178)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 180)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 182)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 184)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_target_5F_specific_5F_syntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 189)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_configuration_5F_key_parse (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_plm_5F_target_5F_specific_5F_syntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 196)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  nt_configuration_5F_key_parse (inCompiler) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_plm_5F_target_5F_specific_5F_syntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 203)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  nt_configuration_5F_key_parse (inCompiler) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    switch (select_plm_5F_target_5F_specific_5F_syntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 210)) ;
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  nt_interruptConfigList_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_ (GALGAS_interruptionConfigurationList & outArgument_interruptionConfigurationList,
                                                                                                                    GALGAS_enumerationConstantList & outArgument_outEnumerationConstantList,
                                                                                                                    C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_interruptionConfigurationList.drop () ; // Release 'out' argument
  outArgument_outEnumerationConstantList.drop () ; // Release 'out' argument
  outArgument_interruptionConfigurationList = GALGAS_interruptionConfigurationList::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 272)) ;
  outArgument_outEnumerationConstantList = GALGAS_enumerationConstantList::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 273)) ;
  nt_configuration_5F_key_ (GALGAS_string ("INTERRUPTS"), inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_target_5F_specific_5F_syntax_7 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_interruptName_9778 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("configuration.galgas", 277)) ;
      GALGAS_interruptionPanicCode var_interruptionPanicCode_9829 ;
      switch (select_plm_5F_target_5F_specific_5F_syntax_8 (inCompiler)) {
      case 1: {
        var_interruptionPanicCode_9829 = GALGAS_interruptionPanicCode::constructor_noCode (SOURCE_FILE ("configuration.galgas", 280)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("configuration.galgas", 282)) ;
        GALGAS_lbigint var_panicCode_9937 = inCompiler->synthetizedAttribute_bigInteger () ;
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 283)) ;
        var_interruptionPanicCode_9829 = GALGAS_interruptionPanicCode::constructor_code (var_panicCode_9937  COMMA_SOURCE_FILE ("configuration.galgas", 284)) ;
        outArgument_outEnumerationConstantList.addAssign_operation (var_interruptName_9778, var_panicCode_9937.getter_bigint (SOURCE_FILE ("configuration.galgas", 285))  COMMA_SOURCE_FILE ("configuration.galgas", 285)) ;
      } break ;
      default:
        break ;
      }
      outArgument_interruptionConfigurationList.addAssign_operation (var_interruptName_9778, var_interruptionPanicCode_9829  COMMA_SOURCE_FILE ("configuration.galgas", 287)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_configuration_5F_key_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_target_5F_specific_5F_syntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("configuration.galgas", 277)) ;
      switch (select_plm_5F_target_5F_specific_5F_syntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("configuration.galgas", 282)) ;
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 283)) ;
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
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_boolDecoratedDeclaration::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_boolDecoratedDeclaration::objectCompare (const GALGAS_boolDecoratedDeclaration & inOperand) const {
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

GALGAS_boolDecoratedDeclaration::GALGAS_boolDecoratedDeclaration (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolDecoratedDeclaration GALGAS_boolDecoratedDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_boolDecoratedDeclaration::constructor_new (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolDecoratedDeclaration::GALGAS_boolDecoratedDeclaration (const cPtr_boolDecoratedDeclaration * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolDecoratedDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolDecoratedDeclaration GALGAS_boolDecoratedDeclaration::constructor_new (LOCATION_ARGS) {
  GALGAS_boolDecoratedDeclaration result ;
  macroMyNew (result.mObjectPtr, cPtr_boolDecoratedDeclaration (THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @boolDecoratedDeclaration class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_boolDecoratedDeclaration::cPtr_boolDecoratedDeclaration (LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_boolDecoratedDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolDecoratedDeclaration ;
}

void cPtr_boolDecoratedDeclaration::description (C_String & ioString,
                                                 const int32_t /* inIndentation */) const {
  ioString << "[@boolDecoratedDeclaration]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_boolDecoratedDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolDecoratedDeclaration (THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @boolDecoratedDeclaration type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolDecoratedDeclaration ("boolDecoratedDeclaration",
                                                 & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_boolDecoratedDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolDecoratedDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_boolDecoratedDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolDecoratedDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolDecoratedDeclaration GALGAS_boolDecoratedDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_boolDecoratedDeclaration result ;
  const GALGAS_boolDecoratedDeclaration * p = (const GALGAS_boolDecoratedDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolDecoratedDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolDecoratedDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_boolIR::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_boolIR::objectCompare (const GALGAS_boolIR & inOperand) const {
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

GALGAS_boolIR::GALGAS_boolIR (void) :
GALGAS_abstractGenerationIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolIR GALGAS_boolIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_boolIR::constructor_new (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolIR::GALGAS_boolIR (const cPtr_boolIR * inSourcePtr) :
GALGAS_abstractGenerationIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolIR GALGAS_boolIR::constructor_new (LOCATION_ARGS) {
  GALGAS_boolIR result ;
  macroMyNew (result.mObjectPtr, cPtr_boolIR (THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                           Pointer class for @boolIR class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_boolIR::cPtr_boolIR (LOCATION_ARGS) :
cPtr_abstractGenerationIR (THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_boolIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolIR ;
}

void cPtr_boolIR::description (C_String & ioString,
                               const int32_t /* inIndentation */) const {
  ioString << "[@boolIR]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_boolIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolIR (THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @boolIR type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolIR ("boolIR",
                               & kTypeDescriptor_GALGAS_abstractGenerationIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_boolIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_boolIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolIR GALGAS_boolIR::extractObject (const GALGAS_object & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_boolIR result ;
  const GALGAS_boolIR * p = (const GALGAS_boolIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
                                                        const GALGAS_propertyAttributeList & in_mPropertyAttributeList,
                                                        const GALGAS_bool & in_mIsConstant,
                                                        const GALGAS_bool & in_mIsPublic,
                                                        const GALGAS_lstring & in_mPropertyTypeName,
                                                        const GALGAS_structurePropertyInitOptionalExpressionAST & in_mInitialisation,
                                                        const GALGAS_bool & in_mIsSingletonObject
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
                                                                                          const GALGAS_propertyAttributeList & in_mPropertyAttributeList,
                                                                                          const GALGAS_bool & in_mIsConstant,
                                                                                          const GALGAS_bool & in_mIsPublic,
                                                                                          const GALGAS_lstring & in_mPropertyTypeName,
                                                                                          const GALGAS_structurePropertyInitOptionalExpressionAST & in_mInitialisation,
                                                                                          const GALGAS_bool & in_mIsSingletonObject
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mPropertyAttributeList, in_mIsConstant, in_mIsPublic, in_mPropertyTypeName, in_mInitialisation, in_mIsSingletonObject) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_structurePropertyListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_structurePropertyListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_structurePropertyListAST (mObject.mProperty_mPropertyName, mObject.mProperty_mPropertyAttributeList, mObject.mProperty_mIsConstant, mObject.mProperty_mIsPublic, mObject.mProperty_mPropertyTypeName, mObject.mProperty_mInitialisation, mObject.mProperty_mIsSingletonObject COMMA_HERE)) ;
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
  ioString << "mPropertyAttributeList" ":" ;
  mObject.mProperty_mPropertyAttributeList.description (ioString, inIndentation) ;
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
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsSingletonObject" ":" ;
  mObject.mProperty_mIsSingletonObject.description (ioString, inIndentation) ;
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
                                                                                            const GALGAS_propertyAttributeList & inOperand1,
                                                                                            const GALGAS_bool & inOperand2,
                                                                                            const GALGAS_bool & inOperand3,
                                                                                            const GALGAS_lstring & inOperand4,
                                                                                            const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand5,
                                                                                            const GALGAS_bool & inOperand6
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_structurePropertyListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_structurePropertyListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_structurePropertyListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_lstring & in_mPropertyName,
                                                                 const GALGAS_propertyAttributeList & in_mPropertyAttributeList,
                                                                 const GALGAS_bool & in_mIsConstant,
                                                                 const GALGAS_bool & in_mIsPublic,
                                                                 const GALGAS_lstring & in_mPropertyTypeName,
                                                                 const GALGAS_structurePropertyInitOptionalExpressionAST & in_mInitialisation,
                                                                 const GALGAS_bool & in_mIsSingletonObject
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_structurePropertyListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_structurePropertyListAST (in_mPropertyName,
                                                              in_mPropertyAttributeList,
                                                              in_mIsConstant,
                                                              in_mIsPublic,
                                                              in_mPropertyTypeName,
                                                              in_mInitialisation,
                                                              in_mIsSingletonObject COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                           const GALGAS_propertyAttributeList & inOperand1,
                                                           const GALGAS_bool & inOperand2,
                                                           const GALGAS_bool & inOperand3,
                                                           const GALGAS_lstring & inOperand4,
                                                           const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand5,
                                                           const GALGAS_bool & inOperand6
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_structurePropertyListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_propertyAttributeList inOperand1,
                                                            const GALGAS_bool inOperand2,
                                                            const GALGAS_bool inOperand3,
                                                            const GALGAS_lstring inOperand4,
                                                            const GALGAS_structurePropertyInitOptionalExpressionAST inOperand5,
                                                            const GALGAS_bool inOperand6,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_structurePropertyListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_propertyAttributeList & outOperand1,
                                                            GALGAS_bool & outOperand2,
                                                            GALGAS_bool & outOperand3,
                                                            GALGAS_lstring & outOperand4,
                                                            GALGAS_structurePropertyInitOptionalExpressionAST & outOperand5,
                                                            GALGAS_bool & outOperand6,
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
      outOperand5.drop () ;
      outOperand6.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
      outOperand0 = p->mObject.mProperty_mPropertyName ;
      outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
      outOperand2 = p->mObject.mProperty_mIsConstant ;
      outOperand3 = p->mObject.mProperty_mIsPublic ;
      outOperand4 = p->mObject.mProperty_mPropertyTypeName ;
      outOperand5 = p->mObject.mProperty_mInitialisation ;
      outOperand6 = p->mObject.mProperty_mIsSingletonObject ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                       GALGAS_propertyAttributeList & outOperand1,
                                                       GALGAS_bool & outOperand2,
                                                       GALGAS_bool & outOperand3,
                                                       GALGAS_lstring & outOperand4,
                                                       GALGAS_structurePropertyInitOptionalExpressionAST & outOperand5,
                                                       GALGAS_bool & outOperand6,
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
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
    outOperand2 = p->mObject.mProperty_mIsConstant ;
    outOperand3 = p->mObject.mProperty_mIsPublic ;
    outOperand4 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand5 = p->mObject.mProperty_mInitialisation ;
    outOperand6 = p->mObject.mProperty_mIsSingletonObject ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                      GALGAS_propertyAttributeList & outOperand1,
                                                      GALGAS_bool & outOperand2,
                                                      GALGAS_bool & outOperand3,
                                                      GALGAS_lstring & outOperand4,
                                                      GALGAS_structurePropertyInitOptionalExpressionAST & outOperand5,
                                                      GALGAS_bool & outOperand6,
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
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
    outOperand2 = p->mObject.mProperty_mIsConstant ;
    outOperand3 = p->mObject.mProperty_mIsPublic ;
    outOperand4 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand5 = p->mObject.mProperty_mInitialisation ;
    outOperand6 = p->mObject.mProperty_mIsSingletonObject ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::method_first (GALGAS_lstring & outOperand0,
                                                    GALGAS_propertyAttributeList & outOperand1,
                                                    GALGAS_bool & outOperand2,
                                                    GALGAS_bool & outOperand3,
                                                    GALGAS_lstring & outOperand4,
                                                    GALGAS_structurePropertyInitOptionalExpressionAST & outOperand5,
                                                    GALGAS_bool & outOperand6,
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
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
    outOperand2 = p->mObject.mProperty_mIsConstant ;
    outOperand3 = p->mObject.mProperty_mIsPublic ;
    outOperand4 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand5 = p->mObject.mProperty_mInitialisation ;
    outOperand6 = p->mObject.mProperty_mIsSingletonObject ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::method_last (GALGAS_lstring & outOperand0,
                                                   GALGAS_propertyAttributeList & outOperand1,
                                                   GALGAS_bool & outOperand2,
                                                   GALGAS_bool & outOperand3,
                                                   GALGAS_lstring & outOperand4,
                                                   GALGAS_structurePropertyInitOptionalExpressionAST & outOperand5,
                                                   GALGAS_bool & outOperand6,
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
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
    outOperand2 = p->mObject.mProperty_mIsConstant ;
    outOperand3 = p->mObject.mProperty_mIsPublic ;
    outOperand4 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand5 = p->mObject.mProperty_mInitialisation ;
    outOperand6 = p->mObject.mProperty_mIsSingletonObject ;
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

GALGAS_propertyAttributeList GALGAS_structurePropertyListAST::getter_mPropertyAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  GALGAS_propertyAttributeList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    result = p->mObject.mProperty_mPropertyAttributeList ;
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

GALGAS_bool GALGAS_structurePropertyListAST::getter_mIsSingletonObjectAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    result = p->mObject.mProperty_mIsSingletonObject ;
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

GALGAS_propertyAttributeList cEnumerator_structurePropertyListAST::current_mPropertyAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mPropertyAttributeList ;
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

GALGAS_bool cEnumerator_structurePropertyListAST::current_mIsSingletonObject (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mIsSingletonObject ;
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

