#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-0.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//     L E X I Q U E                                                                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "strings/unicode_character_cpp.h"
#include "galgas2/scanner_actions.h"
#include "galgas2/cLexiqueIntrospection.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cTokenFor_plm_5F_lexique::cTokenFor_plm_5F_lexique (void) :
mLexicalAttribute_bigInteger (),
mLexicalAttribute_tokenString () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_Lexique_plm_5F_lexique::C_Lexique_plm_5F_lexique (C_Compiler * inCallerCompiler,
                                                    const C_String & inSourceFileName
                                                    COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_Lexique_plm_5F_lexique::C_Lexique_plm_5F_lexique (C_Compiler * inCallerCompiler,
                                                    const C_String & inSourceString,
                                                    const C_String & inStringForError
                                                    COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                 I N D E X I N G    D I R E C T O R Y                                                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_String C_Lexique_plm_5F_lexique::indexingDirectory (void) const {
  return "" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                        Lexical error message list                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gLexicalMessage_plm_5F_lexique_attributeError = "in an attribute name, a letter, a digit or a dot should follow the '@' character" ;

static const char * gLexicalMessage_plm_5F_lexique_binaryDigitError = "0b should be followed by a binary digit" ;

static const char * gLexicalMessage_plm_5F_lexique_hexDigitError = "0x should be followed by a hexadecimal digit" ;

static const char * gLexicalMessage_plm_5F_lexique_incorrectGroupNameError = "in a group name, a letter should follow the '#' character" ;

static const char * gLexicalMessage_plm_5F_lexique_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_plm_5F_lexique_internalError = "internal error" ;

static const char * gLexicalMessage_plm_5F_lexique_typeError = "in a type name, a letter or a digit should follow the '$' character" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//          Syntax error messages, for every terminal symbol                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- Syntax error message for terminal '$identifier$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_identifier = "an identifier" ;

//--- Syntax error message for terminal '$#groupName$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__23_groupName = "a register group name (begins with '#')" ;

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

//--- Syntax error message for terminal '$interrupt$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_interrupt = "the 'interrupt' keyword" ;

//--- Syntax error message for terminal '$let$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_let = "the 'let' keyword" ;

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

//--- Syntax error message for terminal '$option$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_option = "the 'option' keyword" ;

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

//--- Syntax error message for terminal '$safe$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_safe = "the 'safe' keyword" ;

//--- Syntax error message for terminal '$section$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_section = "the 'section' keyword" ;

//--- Syntax error message for terminal '$self$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_self = "the 'self' keyword" ;

//--- Syntax error message for terminal '$service$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_service = "the 'service' keyword" ;

//--- Syntax error message for terminal '$sizeof$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_sizeof = "the 'sizeof' keyword" ;

//--- Syntax error message for terminal '$startup$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_startup = "the 'startup' keyword" ;

//--- Syntax error message for terminal '$struct$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_struct = "the 'struct' keyword" ;

//--- Syntax error message for terminal '$staticArray$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_staticArray = "the 'staticArray' keyword" ;

//--- Syntax error message for terminal '$switch$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_switch = "the 'switch' keyword" ;

//--- Syntax error message for terminal '$sync$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique_sync = "the 'sync' keyword" ;

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

//--- Syntax error message for terminal '$]!$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__5D__21_ = "the ']!' delimitor" ;

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

//--- Syntax error message for terminal '$::$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__3A__3A_ = "the '::' delimitor" ;

//--- Syntax error message for terminal '$•$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__2022_ = "the '\xE2""\x80""\xA2""' delimitor" ;

//--- Syntax error message for terminal '$;$' :
static const char * gSyntaxErrorMessage_plm_5F_lexique__3B_ = "the ';' delimitor" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                getMessageForTerminal                                                                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_String C_Lexique_plm_5F_lexique::getMessageForTerminal (const int16_t inTerminalIndex) const {
  C_String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 120)) {
    static const char * syntaxErrorMessageArray [120] = {kEndOfSourceLexicalErrorMessage,
        gSyntaxErrorMessage_plm_5F_lexique_identifier,
        gSyntaxErrorMessage_plm_5F_lexique__23_groupName,
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
        gSyntaxErrorMessage_plm_5F_lexique_interrupt,
        gSyntaxErrorMessage_plm_5F_lexique_let,
        gSyntaxErrorMessage_plm_5F_lexique_no,
        gSyntaxErrorMessage_plm_5F_lexique_nop,
        gSyntaxErrorMessage_plm_5F_lexique_not,
        gSyntaxErrorMessage_plm_5F_lexique_on,
        gSyntaxErrorMessage_plm_5F_lexique_opaque,
        gSyntaxErrorMessage_plm_5F_lexique_option,
        gSyntaxErrorMessage_plm_5F_lexique_or,
        gSyntaxErrorMessage_plm_5F_lexique_panic,
        gSyntaxErrorMessage_plm_5F_lexique_primitive,
        gSyntaxErrorMessage_plm_5F_lexique_public,
        gSyntaxErrorMessage_plm_5F_lexique_registers,
        gSyntaxErrorMessage_plm_5F_lexique_required,
        gSyntaxErrorMessage_plm_5F_lexique_safe,
        gSyntaxErrorMessage_plm_5F_lexique_section,
        gSyntaxErrorMessage_plm_5F_lexique_self,
        gSyntaxErrorMessage_plm_5F_lexique_service,
        gSyntaxErrorMessage_plm_5F_lexique_sizeof,
        gSyntaxErrorMessage_plm_5F_lexique_startup,
        gSyntaxErrorMessage_plm_5F_lexique_struct,
        gSyntaxErrorMessage_plm_5F_lexique_staticArray,
        gSyntaxErrorMessage_plm_5F_lexique_switch,
        gSyntaxErrorMessage_plm_5F_lexique_sync,
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
        gSyntaxErrorMessage_plm_5F_lexique__5D__21_,
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
        gSyntaxErrorMessage_plm_5F_lexique__3E__3E__3D_,
        gSyntaxErrorMessage_plm_5F_lexique__3A__3A_,
        gSyntaxErrorMessage_plm_5F_lexique__2022_,
        gSyntaxErrorMessage_plm_5F_lexique__3B_
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                      U N I C O D E    S T R I N G S                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//--- Unicode string for '$_3A__3A_$'
static const utf32 kUnicodeString_plm_5F_lexique__3A__3A_ [] = {
  TO_UNICODE (':'),
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

//--- Unicode string for '$_5D__21_$'
static const utf32 kUnicodeString_plm_5F_lexique__5D__21_ [] = {
  TO_UNICODE (']'),
  TO_UNICODE ('!'),
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

//--- Unicode string for '$option$'
static const utf32 kUnicodeString_plm_5F_lexique_option [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
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

//--- Unicode string for '$startup$'
static const utf32 kUnicodeString_plm_5F_lexique_startup [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE ('u'),
  TO_UNICODE ('p'),
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

//--- Unicode string for '$_2022_$'
static const utf32 kUnicodeString_plm_5F_lexique__2022_ [] = {
  TO_UNICODE (8226),
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//             Key words table 'delimitorsList'                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const int32_t ktable_size_plm_5F_lexique_delimitorsList = 55 ;

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
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__2022_, 1, C_Lexique_plm_5F_lexique::kToken__2022_),
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
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__3A__3A_, 2, C_Lexique_plm_5F_lexique::kToken__3A__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__3C__3C_, 2, C_Lexique_plm_5F_lexique::kToken__3C__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__3D__3D_, 2, C_Lexique_plm_5F_lexique::kToken__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__3E__3E_, 2, C_Lexique_plm_5F_lexique::kToken__3E__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique__5D__21_, 2, C_Lexique_plm_5F_lexique::kToken__5D__21_),
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//             Key words table 'keyWordList'                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const int32_t ktable_size_plm_5F_lexique_keyWordList = 52 ;

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
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_safe, 4, C_Lexique_plm_5F_lexique::kToken_safe),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_self, 4, C_Lexique_plm_5F_lexique::kToken_self),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_sync, 4, C_Lexique_plm_5F_lexique::kToken_sync),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_task, 4, C_Lexique_plm_5F_lexique::kToken_task),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_user, 4, C_Lexique_plm_5F_lexique::kToken_user),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_check, 5, C_Lexique_plm_5F_lexique::kToken_check),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_guard, 5, C_Lexique_plm_5F_lexique::kToken_guard),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_panic, 5, C_Lexique_plm_5F_lexique::kToken_panic),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_while, 5, C_Lexique_plm_5F_lexique::kToken_while),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_assert, 6, C_Lexique_plm_5F_lexique::kToken_assert),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_driver, 6, C_Lexique_plm_5F_lexique::kToken_driver),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_extend, 6, C_Lexique_plm_5F_lexique::kToken_extend),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_extern, 6, C_Lexique_plm_5F_lexique::kToken_extern),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_import, 6, C_Lexique_plm_5F_lexique::kToken_import),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_opaque, 6, C_Lexique_plm_5F_lexique::kToken_opaque),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_option, 6, C_Lexique_plm_5F_lexique::kToken_option),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_public, 6, C_Lexique_plm_5F_lexique::kToken_public),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_sizeof, 6, C_Lexique_plm_5F_lexique::kToken_sizeof),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_struct, 6, C_Lexique_plm_5F_lexique::kToken_struct),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_switch, 6, C_Lexique_plm_5F_lexique::kToken_switch),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_target, 6, C_Lexique_plm_5F_lexique::kToken_target),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_convert, 7, C_Lexique_plm_5F_lexique::kToken_convert),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_section, 7, C_Lexique_plm_5F_lexique::kToken_section),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_service, 7, C_Lexique_plm_5F_lexique::kToken_service),
  C_unicode_lexique_table_entry (kUnicodeString_plm_5F_lexique_startup, 7, C_Lexique_plm_5F_lexique::kToken_startup),
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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                          getCurrentTokenString                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    case kToken__23_groupName:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("#groupName") ;
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
    case kToken_option:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("option") ;
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
    case kToken_sizeof:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("sizeof") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_startup:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("startup") ;
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
    case kToken__5D__21_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("]!") ;
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
    case kToken__3A__3A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("::") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2022_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\xE2""\x80""\xA2""") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (";") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Template Delimiters                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Template Replacements                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//            Terminal Symbols as end of script in template mark                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//            Unicode test functions                                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
 
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//               P A R S E    L E X I C A L    T O K E N                                                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
      }else if (testForInputUTF32Char (TO_UNICODE ('#'))) {
        if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
        }else{
          lexicalError (gLexicalMessage_plm_5F_lexique_incorrectGroupNameError COMMA_LINE_AND_SOURCE_FILE) ;
        }
        token.mTokenCode = kToken__23_groupName ;
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
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('$')) ;
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
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__5D__21_, 2, true)) {
        token.mTokenCode = kToken__5D__21_ ;
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
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__3A__3A_, 2, true)) {
        token.mTokenCode = kToken__3A__3A_ ;
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
      }else if (testForInputUTF32String (kUnicodeString_plm_5F_lexique__2022_, 1, true)) {
        token.mTokenCode = kToken__2022_ ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                         E N T E R    T O K E N                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//               A T T R I B U T E   A C C E S S                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_BigInt C_Lexique_plm_5F_lexique::attributeValue_bigInteger (void) const {
  cTokenFor_plm_5F_lexique * ptr = (cTokenFor_plm_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_bigInteger ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_String C_Lexique_plm_5F_lexique::attributeValue_tokenString (void) const {
  cTokenFor_plm_5F_lexique * ptr = (cTokenFor_plm_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//         A S S I G N    F R O M    A T T R I B U T E                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint C_Lexique_plm_5F_lexique::synthetizedAttribute_bigInteger (void) const {
  cTokenFor_plm_5F_lexique * ptr = (cTokenFor_plm_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_plm_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_bigint value (ptr->mLexicalAttribute_bigInteger) ;
  GALGAS_lbigint result (value, currentLocation) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring C_Lexique_plm_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_plm_5F_lexique * ptr = (cTokenFor_plm_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_plm_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_tokenString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                         I N T R O S P E C T I O N                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist C_Lexique_plm_5F_lexique::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("#groupName") COMMA_THERE) ;
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
  result.addAssign_operation (GALGAS_string ("interrupt") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("let") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("no") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("nop") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("not") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("on") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("opaque") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("option") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("or") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("panic") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("primitive") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("public") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("registers") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("required") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("safe") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("section") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("self") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("service") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sizeof") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("startup") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("struct") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("staticArray") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("switch") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sync") COMMA_THERE) ;
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
  result.addAssign_operation (GALGAS_string ("]!") COMMA_THERE) ;
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
  result.addAssign_operation (GALGAS_string ("::") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\xE2""\x80""\xA2""") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (";") COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void getKeywordLists_plm_5F_lexique (TC_UniqueArray <C_String> & ioList) {
  ioList.appendObject ("plm_lexique:delimitorsList") ;
  ioList.appendObject ("plm_lexique:keyWordList") ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    ioList.appendObject ("\xE2""\x80""\xA2""") ;
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
    ioList.appendObject ("::") ;
    ioList.appendObject ("<<") ;
    ioList.appendObject ("==") ;
    ioList.appendObject (">>") ;
    ioList.appendObject ("]!") ;
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
    ioList.appendObject ("safe") ;
    ioList.appendObject ("self") ;
    ioList.appendObject ("sync") ;
    ioList.appendObject ("task") ;
    ioList.appendObject ("user") ;
    ioList.appendObject ("check") ;
    ioList.appendObject ("guard") ;
    ioList.appendObject ("panic") ;
    ioList.appendObject ("while") ;
    ioList.appendObject ("assert") ;
    ioList.appendObject ("driver") ;
    ioList.appendObject ("extend") ;
    ioList.appendObject ("extern") ;
    ioList.appendObject ("import") ;
    ioList.appendObject ("opaque") ;
    ioList.appendObject ("option") ;
    ioList.appendObject ("public") ;
    ioList.appendObject ("sizeof") ;
    ioList.appendObject ("struct") ;
    ioList.appendObject ("switch") ;
    ioList.appendObject ("target") ;
    ioList.appendObject ("convert") ;
    ioList.appendObject ("section") ;
    ioList.appendObject ("service") ;
    ioList.appendObject ("startup") ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static cLexiqueIntrospection lexiqueIntrospection_plm_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_plm_5F_lexique, getKeywordsForIdentifier_plm_5F_lexique) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

uint32_t C_Lexique_plm_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [120] = {0,
    0 /* plm_lexique_1_identifier */,
    2 /* plm_lexique_1__23_groupName */,
    3 /* plm_lexique_1__40_attribute */,
    4 /* plm_lexique_1__24_type */,
    5 /* plm_lexique_1_integer */,
    6 /* plm_lexique_1__22_string_22_ */,
    7 /* plm_lexique_1_comment */,
    7 /* plm_lexique_1_commentMark */,
    9 /* plm_lexique_1__3F_selector_3A_ */,
    9 /* plm_lexique_1__3F__21_selector_3A_ */,
    9 /* plm_lexique_1__21_selector_3A_ */,
    9 /* plm_lexique_1__21__3F_selector_3A_ */,
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
    1 /* plm_lexique_1_interrupt */,
    1 /* plm_lexique_1_let */,
    1 /* plm_lexique_1_no */,
    1 /* plm_lexique_1_nop */,
    1 /* plm_lexique_1_not */,
    1 /* plm_lexique_1_on */,
    1 /* plm_lexique_1_opaque */,
    1 /* plm_lexique_1_option */,
    1 /* plm_lexique_1_or */,
    1 /* plm_lexique_1_panic */,
    1 /* plm_lexique_1_primitive */,
    1 /* plm_lexique_1_public */,
    1 /* plm_lexique_1_registers */,
    1 /* plm_lexique_1_required */,
    1 /* plm_lexique_1_safe */,
    1 /* plm_lexique_1_section */,
    1 /* plm_lexique_1_self */,
    1 /* plm_lexique_1_service */,
    1 /* plm_lexique_1_sizeof */,
    1 /* plm_lexique_1_startup */,
    1 /* plm_lexique_1_struct */,
    1 /* plm_lexique_1_staticArray */,
    1 /* plm_lexique_1_switch */,
    1 /* plm_lexique_1_sync */,
    1 /* plm_lexique_1_target */,
    1 /* plm_lexique_1_task */,
    1 /* plm_lexique_1_truncate */,
    1 /* plm_lexique_1_typealias */,
    1 /* plm_lexique_1_var */,
    1 /* plm_lexique_1_user */,
    1 /* plm_lexique_1_while */,
    1 /* plm_lexique_1_xor */,
    1 /* plm_lexique_1_yes */,
    8 /* plm_lexique_1__3A_ */,
    8 /* plm_lexique_1__2E_ */,
    8 /* plm_lexique_1__2C_ */,
    8 /* plm_lexique_1__7B_ */,
    8 /* plm_lexique_1__7D_ */,
    8 /* plm_lexique_1__3D_ */,
    8 /* plm_lexique_1__28_ */,
    8 /* plm_lexique_1__29_ */,
    8 /* plm_lexique_1__5F_ */,
    8 /* plm_lexique_1__3D__3D_ */,
    8 /* plm_lexique_1__2260_ */,
    8 /* plm_lexique_1__3C_ */,
    8 /* plm_lexique_1__2264_ */,
    8 /* plm_lexique_1__3E_ */,
    8 /* plm_lexique_1__2265_ */,
    8 /* plm_lexique_1__5B_ */,
    8 /* plm_lexique_1__5D_ */,
    8 /* plm_lexique_1__5D__21_ */,
    8 /* plm_lexique_1__3C__3C_ */,
    8 /* plm_lexique_1__3E__3E_ */,
    8 /* plm_lexique_1__7E_ */,
    8 /* plm_lexique_1__2D__3E_ */,
    8 /* plm_lexique_1__2E__2E__3C_ */,
    8 /* plm_lexique_1__2E__2E__2E_ */,
    8 /* plm_lexique_1__7C_ */,
    8 /* plm_lexique_1__7C__3D_ */,
    8 /* plm_lexique_1__26_ */,
    8 /* plm_lexique_1__26__3D_ */,
    8 /* plm_lexique_1__5E_ */,
    8 /* plm_lexique_1__5E__3D_ */,
    8 /* plm_lexique_1__2B_ */,
    8 /* plm_lexique_1__2B__25_ */,
    8 /* plm_lexique_1__2B__3D_ */,
    8 /* plm_lexique_1__2B__25__3D_ */,
    8 /* plm_lexique_1__2D_ */,
    8 /* plm_lexique_1__2D__25_ */,
    8 /* plm_lexique_1__2D__3D_ */,
    8 /* plm_lexique_1__2D__25__3D_ */,
    8 /* plm_lexique_1__2A_ */,
    8 /* plm_lexique_1__2A__25_ */,
    8 /* plm_lexique_1__2A__3D_ */,
    8 /* plm_lexique_1__2A__25__3D_ */,
    8 /* plm_lexique_1__2F_ */,
    8 /* plm_lexique_1__21__2F_ */,
    8 /* plm_lexique_1__2F__3D_ */,
    8 /* plm_lexique_1__21__2F__3D_ */,
    8 /* plm_lexique_1__25_ */,
    8 /* plm_lexique_1__21__25_ */,
    8 /* plm_lexique_1__25__3D_ */,
    8 /* plm_lexique_1__21__25__3D_ */,
    8 /* plm_lexique_1__3C__3C__3D_ */,
    8 /* plm_lexique_1__3E__3E__3D_ */,
    8 /* plm_lexique_1__3A__3A_ */,
    8 /* plm_lexique_1__2022_ */,
    8 /* plm_lexique_1__3B_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_String C_Lexique_plm_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
  C_String result ;
  if (inStyleIndex < 10) {
    static const char * kStyleArray [10] = {
      "",
      "keywordsStyle",
      "groupNameStyle",
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_importedFile_622.getter_string (HERE).getter_pathExtension (SOURCE_FILE ("syntax-grammar.galgas", 13)).objectCompare (GALGAS_string ("plm-import"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_importedFile_622.getter_location (SOURCE_FILE ("syntax-grammar.galgas", 14)), GALGAS_string ("the pah extension should be .plm-import"), fixItArray1  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 14)) ;
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
      switch (select_plm_5F_syntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("syntax-grammar.galgas", 31)) ;
      } break ;
      case 2: {
        GALGAS_string var_s_1205 = GALGAS_string::constructor_separatorString (inCompiler  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 33)) ;
        const enumGalgasBool test_1 = var_s_1205.getter_containsCharacter (GALGAS_char (TO_UNICODE (10)) COMMA_SOURCE_FILE ("syntax-grammar.galgas", 34)).operator_not (SOURCE_FILE ("syntax-grammar.galgas", 34)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 35)), GALGAS_string ("declaration should be terminated by an end of line or a ';'"), fixItArray2  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 35)) ;
        }
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      GALGAS_systemRoutineDeclarationListAST var_standAloneSystemRoutineListAST_1468 = GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (SOURCE_FILE ("syntax-grammar.galgas", 39)) ;
      nt_system_5F_routine_ (ioArgument_ioAST, var_standAloneSystemRoutineListAST_1468, inCompiler) ;
      ioArgument_ioAST.mProperty_mStandAloneSystemRoutineListAST.plusAssign_operation(var_standAloneSystemRoutineListAST_1468, inCompiler  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 41)) ;
      switch (select_plm_5F_syntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("syntax-grammar.galgas", 43)) ;
      } break ;
      case 2: {
        GALGAS_string var_s_1663 = GALGAS_string::constructor_separatorString (inCompiler  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 45)) ;
        const enumGalgasBool test_3 = var_s_1663.getter_containsCharacter (GALGAS_char (TO_UNICODE (10)) COMMA_SOURCE_FILE ("syntax-grammar.galgas", 46)).operator_not (SOURCE_FILE ("syntax-grammar.galgas", 46)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 47)), GALGAS_string ("declaration should be terminated by an end of line or a ';'"), fixItArray4  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 47)) ;
        }
      } break ;
      default:
        break ;
      }
    } break ;
    case 4: {
      nt_import_5F_file_ (outArgument_outImportedFileList, inCompiler) ;
      switch (select_plm_5F_syntax_3 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("syntax-grammar.galgas", 53)) ;
      } break ;
      case 2: {
        GALGAS_string var_s_1946 = GALGAS_string::constructor_separatorString (inCompiler  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 55)) ;
        const enumGalgasBool test_5 = var_s_1946.getter_containsCharacter (GALGAS_char (TO_UNICODE (10)) COMMA_SOURCE_FILE ("syntax-grammar.galgas", 56)).operator_not (SOURCE_FILE ("syntax-grammar.galgas", 56)).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 57)), GALGAS_string ("declaration should be terminated by an end of line or a ';'"), fixItArray6  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 57)) ;
        }
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
  outArgument_outEndOfSourceFile = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_start_5F_symbol_i1_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_0 (inCompiler)) {
    case 2: {
      nt_declaration_parse (inCompiler) ;
      switch (select_plm_5F_syntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("syntax-grammar.galgas", 31)) ;
      } break ;
      case 2: {
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      nt_system_5F_routine_parse (inCompiler) ;
      switch (select_plm_5F_syntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("syntax-grammar.galgas", 43)) ;
      } break ;
      case 2: {
      } break ;
      default:
        break ;
      }
    } break ;
    case 4: {
      nt_import_5F_file_parse (inCompiler) ;
      switch (select_plm_5F_syntax_3 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("syntax-grammar.galgas", 53)) ;
      } break ;
      case 2: {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i2_ (GALGAS_ast & ioArgument_ioAST,
                                                                C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_typealias COMMA_SOURCE_FILE ("type-alias.galgas", 25)) ;
  GALGAS_lstring var_newTypeName_1336 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-alias.galgas", 27)) ;
  GALGAS_lstring var_typeName_1388 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1388, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_typeAliasDeclarationAST::constructor_new (var_newTypeName_1336, var_typeName_1388  COMMA_SOURCE_FILE ("type-alias.galgas", 29))  COMMA_SOURCE_FILE ("type-alias.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i2_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_typealias COMMA_SOURCE_FILE ("type-alias.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-alias.galgas", 27)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_type_5F_definition_i3_ (GALGAS_ast & /* ioArgument_ioAST */,
                                                                       GALGAS_lstring & outArgument_outTypeName,
                                                                       C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas", 35)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_type_5F_definition_i3_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_type_5F_definition_i4_ (GALGAS_ast & ioArgument_ioAST,
                                                                       GALGAS_lstring & outArgument_outTypeName,
                                                                       C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-static-array.galgas", 21)) ;
  GALGAS_expressionAST var_sizeExpression_1185 ;
  nt_expression_ (ioArgument_ioAST, var_sizeExpression_1185, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2022_ COMMA_SOURCE_FILE ("type-static-array.galgas", 23)) ;
  GALGAS_lstring var_elementTypeName_1244 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_elementTypeName_1244, inCompiler) ;
  GALGAS_location var_sizeExpressionLocation_1275 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-static-array.galgas", 26)) ;
  outArgument_outTypeName = GALGAS_string ("anonymous.").add_operation (ioArgument_ioAST.getter_mTypeDeclarationIndex (HERE).getter_string (SOURCE_FILE ("type-static-array.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 27)).getter_here (inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 27)) ;
  ioArgument_ioAST.mProperty_mTypeDeclarationIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 28)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_staticArrayTypeDeclarationAST::constructor_new (outArgument_outTypeName, var_elementTypeName_1244, var_sizeExpression_1185, var_sizeExpressionLocation_1275  COMMA_SOURCE_FILE ("type-static-array.galgas", 29))  COMMA_SOURCE_FILE ("type-static-array.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_type_5F_definition_i4_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-static-array.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2022_ COMMA_SOURCE_FILE ("type-static-array.galgas", 23)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-static-array.galgas", 26)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_type_5F_definition_i5_ (GALGAS_ast & ioArgument_ioAST,
                                                                       GALGAS_lstring & outArgument_outTypeName,
                                                                       C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 19)) ;
  GALGAS_lstring var_elementTypeName_1130 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_elementTypeName_1130, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 21)) ;
  outArgument_outTypeName = GALGAS_string ("anonymous.").add_operation (ioArgument_ioAST.getter_mTypeDeclarationIndex (HERE).getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 22)).getter_here (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 22)) ;
  ioArgument_ioAST.mProperty_mTypeDeclarationIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 23)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_typeDynamicArrayDeclarationAST::constructor_new (outArgument_outTypeName, var_elementTypeName_1130  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 24))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 24)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_type_5F_definition_i5_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 19)) ;
  nt_type_5F_definition_parse (inCompiler) ;
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
    switch (select_plm_5F_syntax_4 (inCompiler)) {
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
    switch (select_plm_5F_syntax_4 (inCompiler)) {
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
                                                                                                                 GALGAS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_public_2677 ;
  switch (select_plm_5F_syntax_5 (inCompiler)) {
  case 1: {
    var_public_2677 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_public COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 62)) ;
    var_public_2677 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  nt_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_public_2677, ioArgument_ioPropertyListAST, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i7_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_public COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 62)) ;
  } break ;
  default:
    break ;
  }
  nt_struct_5F_property_5F_declaration_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_private_5F_struct_5F_property_5F_declaration_i8_ (GALGAS_ast & ioArgument_ioAST,
                                                                                                 GALGAS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  nt_struct_5F_property_5F_declaration_ (ioArgument_ioAST, GALGAS_bool (false), ioArgument_ioPropertyListAST, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_private_5F_struct_5F_property_5F_declaration_i8_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_struct_5F_property_5F_declaration_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_struct_5F_property_5F_declaration_i9_ (GALGAS_ast & ioArgument_ioAST,
                                                                                      const GALGAS_bool constinArgument_isPublic,
                                                                                      GALGAS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                      C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 84)) ;
  GALGAS_lstring var_propertyName_3447 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 85)) ;
  GALGAS_lstring var_typeName_3669 ;
  switch (select_plm_5F_syntax_6 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_3669, inCompiler) ;
  } break ;
  case 2: {
    var_typeName_3669 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 97)) ;
  } break ;
  default:
    break ;
  }
  switch (select_plm_5F_syntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 100)) ;
    GALGAS_expressionAST var_initExpression_3835 ;
    nt_expression_ (ioArgument_ioAST, var_initExpression_3835, inCompiler) ;
    ioArgument_ioPropertyListAST.addAssign_operation (var_propertyName_3447, GALGAS_propertyAttributeList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 104)), constinArgument_isPublic, var_typeName_3669, GALGAS_propertyKindAST::constructor_initializedConstantProperty (var_initExpression_3835  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 107))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 102)) ;
  } break ;
  case 2: {
    ioArgument_ioPropertyListAST.addAssign_operation (var_propertyName_3447, GALGAS_propertyAttributeList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 111)), constinArgument_isPublic, var_typeName_3669, GALGAS_propertyKindAST::constructor_uninitializedConstantProperty (SOURCE_FILE ("type-structure-declaration.galgas", 114))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 109)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_struct_5F_property_5F_declaration_i9_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 84)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 85)) ;
  switch (select_plm_5F_syntax_6 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_plm_5F_syntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 100)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_struct_5F_property_5F_declaration_i10_ (GALGAS_ast & ioArgument_ioAST,
                                                                                       const GALGAS_bool constinArgument_isPublic,
                                                                                       GALGAS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                       C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_var COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 125)) ;
  GALGAS_lstring var_propertyName_4460 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 126)) ;
  GALGAS_propertyAttributeList var_propertyAttributeList_4509 = GALGAS_propertyAttributeList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 127)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_8 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_4569 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 130)) ;
      GALGAS_lbigint var_value_4596 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 131)) ;
      var_propertyAttributeList_4509.addAssign_operation (var_attribute_4569, var_value_4596  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 132)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_plm_5F_syntax_9 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_typeName_4711 ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_4711, inCompiler) ;
    switch (select_plm_5F_syntax_10 (inCompiler)) {
    case 1: {
      ioArgument_ioPropertyListAST.addAssign_operation (var_propertyName_4460, GALGAS_propertyAttributeList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 137)), constinArgument_isPublic, var_typeName_4711, GALGAS_propertyKindAST::constructor_uninitializedStoredProperty (SOURCE_FILE ("type-structure-declaration.galgas", 137))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 137)) ;
    } break ;
    case 2: {
      nt_propertyGetterSetter_ (ioArgument_ioAST, constinArgument_isPublic, var_propertyName_4460, var_propertyAttributeList_4509, var_typeName_4711, ioArgument_ioPropertyListAST, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 147)) ;
      GALGAS_expressionAST var_initExpression_5070 ;
      nt_expression_ (ioArgument_ioAST, var_initExpression_5070, inCompiler) ;
      ioArgument_ioPropertyListAST.addAssign_operation (var_propertyName_4460, var_propertyAttributeList_4509, constinArgument_isPublic, var_typeName_4711, GALGAS_propertyKindAST::constructor_initializedStoredProperty (var_initExpression_5070  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 154))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 149)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 157)) ;
    GALGAS_expressionAST var_initExpression_5341 ;
    nt_expression_ (ioArgument_ioAST, var_initExpression_5341, inCompiler) ;
    ioArgument_ioPropertyListAST.addAssign_operation (var_propertyName_4460, var_propertyAttributeList_4509, constinArgument_isPublic, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 163)), GALGAS_propertyKindAST::constructor_initializedStoredProperty (var_initExpression_5341  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 164))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 159)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_struct_5F_property_5F_declaration_i10_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_var COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 125)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 126)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 130)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 131)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_plm_5F_syntax_9 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_parse (inCompiler) ;
    switch (select_plm_5F_syntax_10 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      nt_propertyGetterSetter_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 147)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 157)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_propertyGetterSetter_i11_ (GALGAS_ast & ioArgument_ioAST,
                                                                          const GALGAS_bool constinArgument_inIsPublic,
                                                                          const GALGAS_lstring constinArgument_inPropertyName,
                                                                          const GALGAS_propertyAttributeList constinArgument_inPropertyAttributeList,
                                                                          const GALGAS_lstring constinArgument_inTypeName,
                                                                          GALGAS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                          C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 179)) ;
  switch (select_plm_5F_syntax_11 (inCompiler)) {
  case 1: {
    GALGAS_bool var_getterDefined_5976 = GALGAS_bool (false) ;
    GALGAS_bool var_setterDefined_6008 = GALGAS_bool (false) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_getterOrSetter_6070 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 184)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 185)) ;
      GALGAS_instructionListAST var_instructionList_6137 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_6137, inCompiler) ;
      GALGAS_location var_endOfInstructionList_6170 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 187)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 188)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_getterOrSetter_6070.getter_string (HERE).objectCompare (GALGAS_string ("get"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioPropertyListAST.addAssign_operation (constinArgument_inPropertyName, constinArgument_inPropertyAttributeList, constinArgument_inIsPublic, constinArgument_inTypeName, GALGAS_propertyKindAST::constructor_readOnlyComputedProperty (var_instructionList_6137, var_endOfInstructionList_6170  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 195))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 190)) ;
        const enumGalgasBool test_2 = var_getterDefined_5976.boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_getterOrSetter_6070.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 200)), GALGAS_string ("duplicate getter definition"), fixItArray3  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 200)) ;
        }
        var_getterDefined_5976 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_getterOrSetter_6070.getter_string (HERE).objectCompare (GALGAS_string ("set"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          ioArgument_ioPropertyListAST.addAssign_operation (constinArgument_inPropertyName, constinArgument_inPropertyAttributeList, constinArgument_inIsPublic, constinArgument_inTypeName, GALGAS_propertyKindAST::constructor_writeComputedProperty (var_instructionList_6137, var_endOfInstructionList_6170  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 209))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 204)) ;
          const enumGalgasBool test_5 = var_setterDefined_6008.boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (var_getterOrSetter_6070.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 214)), GALGAS_string ("duplicate setter definition"), fixItArray6  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 214)) ;
          }
          var_setterDefined_6008 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          fixItArray7.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("set")) ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("get")) ;
          inCompiler->emitSemanticError (var_getterOrSetter_6070.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 218)), GALGAS_string ("invalid identifier"), fixItArray7  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 218)) ;
        }
      }
      switch (select_plm_5F_syntax_12 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    GALGAS_bool test_8 = var_setterDefined_6008 ;
    if (kBoolTrue == test_8.boolEnum ()) {
      test_8 = var_getterDefined_5976.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 222)) ;
    }
    const enumGalgasBool test_9 = test_8.boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 223)), GALGAS_string ("a getter should be defined"), fixItArray10  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 223)) ;
    }else if (kBoolFalse == test_9) {
      GALGAS_bool test_11 = var_setterDefined_6008.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 224)) ;
      if (kBoolTrue == test_11.boolEnum ()) {
        test_11 = var_getterDefined_5976.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 224)) ;
      }
      const enumGalgasBool test_12 = test_11.boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 225)), GALGAS_string ("a getter should be defined, and optionaly a setter"), fixItArray13  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 225)) ;
      }
    }
  } break ;
  case 2: {
    GALGAS_instructionListAST var_readInstructionList_7638 ;
    nt_instructionList_ (ioArgument_ioAST, var_readInstructionList_7638, inCompiler) ;
    GALGAS_location var_endOfReadInstructionList_7673 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 229)) ;
    ioArgument_ioPropertyListAST.addAssign_operation (constinArgument_inPropertyName, constinArgument_inPropertyAttributeList, constinArgument_inIsPublic, constinArgument_inTypeName, GALGAS_propertyKindAST::constructor_readOnlyComputedProperty (var_readInstructionList_7638, var_endOfReadInstructionList_7673  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 235))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 230)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 240)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_propertyGetterSetter_i11_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 179)) ;
  switch (select_plm_5F_syntax_11 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 184)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 185)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 188)) ;
      switch (select_plm_5F_syntax_12 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  case 2: {
    nt_instructionList_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 240)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_structure_5F_function_i12_ (GALGAS_ast & ioArgument_ioAST,
                                                                           GALGAS_functionDeclarationListAST & ioArgument_ioProcListAST,
                                                                           C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_public_8216 ;
  switch (select_plm_5F_syntax_13 (inCompiler)) {
  case 1: {
    var_public_8216 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_public COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 250)) ;
    var_public_8216 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_func COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 253)) ;
  GALGAS_lstring var_procName_8340 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 254)) ;
  GALGAS_lstringlist var_attributeList_8371 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 255)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_14 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_8431 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 258)) ;
      var_attributeList_8371.addAssign_operation (var_attribute_8431  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 259)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_routineFormalArgumentListAST var_procFormalArgumentList_8543 ;
  nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_procFormalArgumentList_8543, inCompiler) ;
  GALGAS_lstring var_returnTypeName_8571 ;
  switch (select_plm_5F_syntax_15 (inCompiler)) {
  case 1: {
    var_returnTypeName_8571 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 264)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 266)) ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_8571, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 269)) ;
  GALGAS_instructionListAST var_instructionList_8748 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_8748, inCompiler) ;
  ioArgument_ioProcListAST.addAssign_operation (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 272)), var_public_8216, var_procName_8340, var_attributeList_8371, var_procFormalArgumentList_8543, var_returnTypeName_8571, var_instructionList_8748, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 279))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 271)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 280)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_structure_5F_function_i12_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_public COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 250)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_func COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 253)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 254)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 258)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
  switch (select_plm_5F_syntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 266)) ;
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 269)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 280)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i13_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 286)) ;
  GALGAS_lstring var_structureName_9140 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 287)) ;
  GALGAS_lstringlist var_attributeList_9171 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 288)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_16 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_9231 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 291)) ;
      var_attributeList_9171.addAssign_operation (var_attribute_9231  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 292)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 294)) ;
  GALGAS_functionDeclarationListAST var_procedureDeclarationListAST_9342 = GALGAS_functionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 295)) ;
  GALGAS_structurePropertyListAST var_fieldList_9387 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 296)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_plm_5F_syntax_17 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_fieldList_9387, inCompiler) ;
    } break ;
    case 3: {
      nt_structure_5F_function_ (ioArgument_ioAST, var_procedureDeclarationListAST_9342, inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 303)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_structureDeclarationAST::constructor_new (var_structureName_9140, var_structureName_9140, var_structureName_9140, var_attributeList_9171, GALGAS_bool (true), var_fieldList_9387, var_procedureDeclarationListAST_9342, GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 312)), GALGAS_guardDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 313)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 304))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 304)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i13_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 286)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 287)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 291)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 294)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_plm_5F_syntax_17 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_structure_5F_function_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 303)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i14_ (GALGAS_ast & ioArgument_ioAST,
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
    switch (select_plm_5F_syntax_18 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_fieldList_1365, inCompiler) ;
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
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 39)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_syncDeclarationAST::constructor_new (var_structureName_1252, var_fieldList_1365, var_procedureDeclarationListAST_1320, var_systemRoutineListAST_1428, var_guardListAST_1475  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 40))  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i14_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 24)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_18 (inCompiler)) {
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
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 39)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i15_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_opaque COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 21)) ;
  GALGAS_lstring var_opaqueTypeName_1150 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 22)) ;
  GALGAS_lstringlist var_attributeList_1181 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 23)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_19 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_1241 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 26)) ;
      var_attributeList_1181.addAssign_operation (var_attribute_1241  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 27)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 29)) ;
  GALGAS_expressionAST var_sizeExpression_1336 ;
  nt_expression_ (ioArgument_ioAST, var_sizeExpression_1336, inCompiler) ;
  GALGAS_location var_sizeExpressionLocation_1367 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 32)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_typeOpaqueDeclarationAST::constructor_new (var_opaqueTypeName_1150, var_sizeExpression_1336, var_sizeExpressionLocation_1367, var_attributeList_1181  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 33))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i15_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_opaque COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_19 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 82)) ;
  GALGAS_registerGroupListAST var_registerGroupListAST_3475 = GALGAS_registerGroupListAST::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 83)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_registerGroupName_3533 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__23_groupName COMMA_SOURCE_FILE ("declaration-control-register.galgas", 85)) ;
    switch (select_plm_5F_syntax_21 (inCompiler)) {
    case 1: {
      GALGAS_lbigint var_registerGroupBaseAddress_3603 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 87)) ;
      GALGAS_controlRegisterGroupKindAST var_groupKind_3625 = GALGAS_controlRegisterGroupKindAST::constructor_single (var_registerGroupBaseAddress_3603  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 88)) ;
      var_registerGroupListAST_3475.addAssign_operation (var_registerGroupName_3533, var_groupKind_3625  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 89)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 91)) ;
      GALGAS_lbigint var_groupSize_3841 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 92)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 93)) ;
      GALGAS_lbigintlist var_groupBaseAddresses_3893 = GALGAS_lbigintlist::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 94)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 95)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lbigint var_baseAddress_3971 = inCompiler->synthetizedAttribute_bigInteger () ;
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 97)) ;
        var_groupBaseAddresses_3893.addAssign_operation (var_baseAddress_3971  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 98)) ;
        switch (select_plm_5F_syntax_22 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 100)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 102)) ;
      GALGAS_controlRegisterGroupKindAST var_groupKind_4090 = GALGAS_controlRegisterGroupKindAST::constructor_groupArray (var_groupSize_3841, var_groupBaseAddresses_3893  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 103)) ;
      var_registerGroupListAST_3475.addAssign_operation (var_registerGroupName_3533, var_groupKind_4090  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 104)) ;
    } break ;
    default:
      break ;
    }
    switch (select_plm_5F_syntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 107)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 109)) ;
  GALGAS_controlRegisterDeclarationList var_controlRegisterDeclarationList_4359 = GALGAS_controlRegisterDeclarationList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 110)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_plm_5F_syntax_23 (inCompiler)) {
    case 2: {
      GALGAS_controlRegisterNameListAST var_registerDeclarationList_4443 = GALGAS_controlRegisterNameListAST::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 113)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        nt_registerDeclaration_ (ioArgument_ioAST, var_registerDeclarationList_4443, inCompiler) ;
        switch (select_plm_5F_syntax_24 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 117)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      GALGAS_lstring var_registerTypeName_4596 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("declaration-control-register.galgas", 119)) ;
      GALGAS_controlRegisterBitSliceList var_registerBitSliceList_4652 = GALGAS_controlRegisterBitSliceList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 120)) ;
      switch (select_plm_5F_syntax_25 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 123)) ;
        bool repeatFlag_4 = true ;
        while (repeatFlag_4) {
          GALGAS_controlRegisterBitSlice var_registerBitSlice_4758 ;
          switch (select_plm_5F_syntax_27 (inCompiler)) {
          case 1: {
            GALGAS_lbigint var_unusedBitCount_4826 = inCompiler->synthetizedAttribute_bigInteger () ;
            inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 127)) ;
            var_registerBitSlice_4758 = GALGAS_controlRegisterBitSlice::constructor_unusedBits (var_unusedBitCount_4826  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 128)) ;
          } break ;
          case 2: {
            GALGAS_lstring var_bitName_4944 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 130)) ;
            switch (select_plm_5F_syntax_28 (inCompiler)) {
            case 1: {
              var_registerBitSlice_4758 = GALGAS_controlRegisterBitSlice::constructor_namedBit (var_bitName_4944, GALGAS_lbigint::constructor_new (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 132)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 132))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 132))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 132)) ;
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 134)) ;
              GALGAS_lbigint var_bitCount_5126 = inCompiler->synthetizedAttribute_bigInteger () ;
              inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 135)) ;
              var_registerBitSlice_4758 = GALGAS_controlRegisterBitSlice::constructor_namedBit (var_bitName_4944, var_bitCount_5126  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 136)) ;
            } break ;
            default:
              break ;
            }
          } break ;
          default:
            break ;
          }
          var_registerBitSliceList_4652.addAssign_operation (var_registerBitSlice_4758  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 139)) ;
          switch (select_plm_5F_syntax_26 (inCompiler)) {
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 141)) ;
          } break ;
          default:
            repeatFlag_4 = false ;
            break ;
          }
        }
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 143)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_location var_endOfBitSlice_5369 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 145)) ;
      var_controlRegisterDeclarationList_4359.addAssign_operation (var_registerDeclarationList_4443, var_registerTypeName_4596, var_registerBitSliceList_4652, var_endOfBitSlice_5369  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 146)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_controlRegisterGroupDeclarationAST::constructor_new (var_registerGroupListAST_3475, var_controlRegisterDeclarationList_4359  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 148))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 148)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 152)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i16_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 82)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__23_groupName COMMA_SOURCE_FILE ("declaration-control-register.galgas", 85)) ;
    switch (select_plm_5F_syntax_21 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 87)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 91)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 92)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 93)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 95)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 97)) ;
        switch (select_plm_5F_syntax_22 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 100)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 102)) ;
    } break ;
    default:
      break ;
    }
    switch (select_plm_5F_syntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 107)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 109)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_plm_5F_syntax_23 (inCompiler)) {
    case 2: {
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        nt_registerDeclaration_parse (inCompiler) ;
        switch (select_plm_5F_syntax_24 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 117)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("declaration-control-register.galgas", 119)) ;
      switch (select_plm_5F_syntax_25 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 123)) ;
        bool repeatFlag_4 = true ;
        while (repeatFlag_4) {
          switch (select_plm_5F_syntax_27 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 127)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 130)) ;
            switch (select_plm_5F_syntax_28 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 134)) ;
              inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 135)) ;
            } break ;
            default:
              break ;
            }
          } break ;
          default:
            break ;
          }
          switch (select_plm_5F_syntax_26 (inCompiler)) {
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 141)) ;
          } break ;
          default:
            repeatFlag_4 = false ;
            break ;
          }
        }
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 143)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 152)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_registerDeclaration_i17_ (GALGAS_ast & ioArgument_ioAST,
                                                                         GALGAS_controlRegisterNameListAST & ioArgument_ioRegisterDeclarationList,
                                                                         C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_lstring var_registerName_5932 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 158)) ;
  GALGAS_lstringlist var_attributeList_5963 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 159)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_29 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_6023 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 162)) ;
      var_attributeList_5963.addAssign_operation (var_attribute_6023  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 163)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_plm_5F_syntax_30 (inCompiler)) {
  case 1: {
    GALGAS_expressionAST var_registerAddress_6124 ;
    nt_expression_ (ioArgument_ioAST, var_registerAddress_6124, inCompiler) ;
    ioArgument_ioRegisterDeclarationList.addAssign_operation (var_registerName_5932, GALGAS_controlRegisterKind::constructor_scalar (SOURCE_FILE ("declaration-control-register.galgas", 169)), var_attributeList_5963, var_registerAddress_6124, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 172))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 167)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 174)) ;
    GALGAS_expressionAST var_sizeExpression_6326 ;
    nt_expression_ (ioArgument_ioAST, var_sizeExpression_6326, inCompiler) ;
    GALGAS_location var_sizeExpressionLocation_6359 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 176)) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 177)) ;
    GALGAS_expressionAST var_baseAddressExpression_6440 ;
    nt_expression_ (ioArgument_ioAST, var_baseAddressExpression_6440, inCompiler) ;
    GALGAS_location var_baseAddressExpressionLocation_6480 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 179)) ;
    GALGAS_lstring var_attribute_6531 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 180)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_attribute_6531.getter_string (HERE).objectCompare (GALGAS_string ("inc"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("@inc")) ;
      inCompiler->emitSemanticError (var_attribute_6531.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 182)), GALGAS_string ("attribute should be @inc"), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 182)) ;
    }
    GALGAS_expressionAST var_arrayElementSizeExpression_6718 ;
    nt_expression_ (ioArgument_ioAST, var_arrayElementSizeExpression_6718, inCompiler) ;
    GALGAS_location var_arrayElementSizeExpressionLocation_6763 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 185)) ;
    ioArgument_ioRegisterDeclarationList.addAssign_operation (var_registerName_5932, GALGAS_controlRegisterKind::constructor_registerArray (var_sizeExpression_6326, var_sizeExpressionLocation_6359, var_arrayElementSizeExpression_6718, var_arrayElementSizeExpressionLocation_6763  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 188)), var_attributeList_5963, var_baseAddressExpression_6440, var_baseAddressExpressionLocation_6480  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 186)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_registerDeclaration_i17_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 158)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 162)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_plm_5F_syntax_30 (inCompiler)) {
  case 1: {
    nt_expression_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 174)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 177)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 180)) ;
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
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 203)) ;
  GALGAS_lstring var_attribute_7405 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 204)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_attribute_7405.getter_string (HERE).objectCompare (function_userAttributeForRegister (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 205)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_attribute_7405.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 206)), GALGAS_string ("this attribute should be @").add_operation (function_userAttributeForRegister (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 206)), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 206)) ;
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GALGAS_lstring var_registerGroupName_7609 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__23_groupName COMMA_SOURCE_FILE ("declaration-control-register.galgas", 209)) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 210)) ;
    GALGAS_lstring var_registerName_7656 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 211)) ;
    GALGAS_lstring var_key_7670 = GALGAS_lstring::constructor_new (GALGAS_string ("#").add_operation (var_registerGroupName_7609.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 212)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 212)).add_operation (var_registerName_7656.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 212)), var_registerName_7656.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 212)) ;
    {
    ioArgument_ioAST.mProperty_mControlRegisterUserAccesMapAST.setter_insertKey (var_key_7670, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 213)) ;
    }
    switch (select_plm_5F_syntax_31 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 215)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i18_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 203)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 204)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__23_groupName COMMA_SOURCE_FILE ("declaration-control-register.galgas", 209)) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 210)) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 211)) ;
    switch (select_plm_5F_syntax_31 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 215)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i19_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 27)) ;
  GALGAS_lstring var_constantName_1448 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 28)) ;
  GALGAS_lstringlist var_attributeList_1479 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-global-constant.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_32 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_1539 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 32)) ;
      var_attributeList_1479.addAssign_operation (var_attribute_1539  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 33)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_typeName_1603 ;
  switch (select_plm_5F_syntax_33 (inCompiler)) {
  case 1: {
    var_typeName_1603 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-constant.galgas", 37)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1603, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 41)) ;
  GALGAS_expressionAST var_expression_1765 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1765, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_globalConstantDeclarationAST::constructor_new (var_constantName_1448, var_attributeList_1479, var_typeName_1603, var_expression_1765  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 43))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i19_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 32)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_plm_5F_syntax_33 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i20_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 20)) ;
  GALGAS_lstring var_syncInstanceName_1123 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 21)) ;
  GALGAS_lstring var_syncTypeName_1149 ;
  switch (select_plm_5F_syntax_34 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i20_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 21)) ;
  switch (select_plm_5F_syntax_34 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i21_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 113)) ;
  GALGAS_lstring var_driverName_4264 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 114)) ;
  GALGAS_lstringlist var_driverDependenceList_4302 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 115)) ;
  switch (select_plm_5F_syntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 118)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_dependenceName_4389 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 120)) ;
      var_driverDependenceList_4302.addAssign_operation (var_dependenceName_4389  COMMA_SOURCE_FILE ("declaration-driver.galgas", 121)) ;
      switch (select_plm_5F_syntax_36 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 123)) ;
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
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 126)) ;
  GALGAS_functionDeclarationListAST var_functionDeclarationListAST_4553 = GALGAS_functionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 127)) ;
  GALGAS_structurePropertyListAST var_propertyListAST_4659 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 129)) ;
  GALGAS_guardDeclarationListAST var_guardListAST_4706 = GALGAS_guardDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 130)) ;
  GALGAS_systemRoutineDeclarationListAST var_svcListAST_4759 = GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 131)) ;
  GALGAS_bool var_bootHandled_4784 = GALGAS_bool (false) ;
  GALGAS_location var_bootLocation_4813 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 133)) ;
  GALGAS_instructionListAST var_bootInstructionList_4874 = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 134)) ;
  GALGAS_location var_bootEndLocation_4903 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 135)) ;
  GALGAS_bool var_startupHandled_4943 = GALGAS_bool (false) ;
  GALGAS_location var_startupLocation_4975 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 137)) ;
  GALGAS_instructionListAST var_startupInstructionList_5039 = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 138)) ;
  GALGAS_location var_startupEndLocation_5071 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 139)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_plm_5F_syntax_37 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-driver.galgas", 142)) ;
      var_bootLocation_4813 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 143)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 144)) ;
      nt_instructionList_ (ioArgument_ioAST, var_bootInstructionList_4874, inCompiler) ;
      var_bootEndLocation_4903 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 146)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 147)) ;
      const enumGalgasBool test_2 = var_bootHandled_4784.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_bootLocation_4813, GALGAS_string ("a driver supports at most one boot routine"), fixItArray3  COMMA_SOURCE_FILE ("declaration-driver.galgas", 149)) ;
      }
      var_bootHandled_4784 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-driver.galgas", 153)) ;
      var_startupLocation_4975 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 154)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 155)) ;
      nt_instructionList_ (ioArgument_ioAST, var_startupInstructionList_5039, inCompiler) ;
      var_startupEndLocation_5071 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 157)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 158)) ;
      const enumGalgasBool test_4 = var_startupHandled_4943.boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (var_startupLocation_4975, GALGAS_string ("a driver supports at most one startup routine"), fixItArray5  COMMA_SOURCE_FILE ("declaration-driver.galgas", 160)) ;
      }
      var_startupHandled_4943 = GALGAS_bool (true) ;
    } break ;
    case 4: {
      nt_isr_ (ioArgument_ioAST, var_driverName_4264, inCompiler) ;
    } break ;
    case 5: {
      nt_struct_5F_property_5F_declaration_ (ioArgument_ioAST, GALGAS_bool (false), var_propertyListAST_4659, inCompiler) ;
    } break ;
    case 6: {
      nt_function_ (ioArgument_ioAST, var_functionDeclarationListAST_4553, inCompiler) ;
    } break ;
    case 7: {
      nt_system_5F_routine_ (ioArgument_ioAST, var_svcListAST_4759, inCompiler) ;
    } break ;
    case 8: {
      nt_guard_ (ioArgument_ioAST, var_guardListAST_4706, inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 174)) ;
  ioArgument_ioAST.mProperty_mDriverDeclarationListAST.addAssign_operation (GALGAS_driverDeclarationAST::constructor_new (var_driverName_4264, var_driverDependenceList_4302, var_propertyListAST_4659, var_functionDeclarationListAST_4553, var_svcListAST_4759, var_guardListAST_4706, var_bootLocation_4813, var_bootInstructionList_4874, var_bootEndLocation_4903, var_startupLocation_4975, var_startupInstructionList_5039, var_startupEndLocation_5071  COMMA_SOURCE_FILE ("declaration-driver.galgas", 176))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 176)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i21_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 113)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 114)) ;
  switch (select_plm_5F_syntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 118)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 120)) ;
      switch (select_plm_5F_syntax_36 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 123)) ;
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
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 126)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_plm_5F_syntax_37 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-driver.galgas", 142)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 144)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 147)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-driver.galgas", 153)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 155)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 158)) ;
    } break ;
    case 4: {
      nt_isr_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_struct_5F_property_5F_declaration_parse (inCompiler) ;
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
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 174)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i22_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 195)) ;
  GALGAS_lstring var_driverName_6614 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 196)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 197)) ;
  GALGAS_driverInstanciationArgumentListAST var_driverInstanciationArgumentList_6694 = GALGAS_driverInstanciationArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 198)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_38 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_6753 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 201)) ;
      GALGAS_expressionAST var_expression_6796 ;
      nt_expression_ (ioArgument_ioAST, var_expression_6796, inCompiler) ;
      var_driverInstanciationArgumentList_6694.addAssign_operation (var_selector_6753, var_expression_6796  COMMA_SOURCE_FILE ("declaration-driver.galgas", 203)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 205)) ;
  ioArgument_ioAST.mProperty_mRequiredDriverListAST.addAssign_operation (var_driverName_6614, var_driverInstanciationArgumentList_6694  COMMA_SOURCE_FILE ("declaration-driver.galgas", 206)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i22_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 195)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 196)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 197)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 201)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 205)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i23_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_functionDeclarationListAST var_standAloneFunctionDeclarationListAST_620 = GALGAS_functionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-standalone-function.galgas", 10)) ;
  nt_function_ (ioArgument_ioAST, var_standAloneFunctionDeclarationListAST_620, inCompiler) ;
  ioArgument_ioAST.mProperty_mStandaloneFunctionDeclarationListAST.plusAssign_operation(var_standAloneFunctionDeclarationListAST_620, inCompiler  COMMA_SOURCE_FILE ("declaration-standalone-function.galgas", 12)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i23_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_function_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i24_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas", 61)) ;
  GALGAS_lstring var_staticListName_2618 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 63)) ;
  GALGAS_staticListPropertyListAST var_propertyList_2670 = GALGAS_staticListPropertyListAST::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_staticArrayProperty_ (ioArgument_ioAST, var_propertyList_2670, inCompiler) ;
    switch (select_plm_5F_syntax_39 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 69)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_staticListAST::constructor_new (var_staticListName_2618, var_propertyList_2670, GALGAS_staticListValueListAST::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 70))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 70))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 70)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i24_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 63)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_staticArrayProperty_parse (inCompiler) ;
    switch (select_plm_5F_syntax_39 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 69)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_staticArrayProperty_i25_ (GALGAS_ast & ioArgument_ioAST,
                                                                         GALGAS_staticListPropertyListAST & ioArgument_ioPropertyList,
                                                                         C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-static-list.galgas", 76)) ;
  GALGAS_lstring var_propertyName_3111 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 77)) ;
  switch (select_plm_5F_syntax_40 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_typeName_3168 ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_3168, inCompiler) ;
    ioArgument_ioPropertyList.addAssign_operation (var_propertyName_3111, GALGAS_staticListPropertyTypeAST::constructor_valueType (var_typeName_3168  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 80))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 80)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas", 82)) ;
    GALGAS_mode var_mode_3277 ;
    nt_mode_ (var_mode_3277, inCompiler) ;
    GALGAS_lstringlist var_attributeList_3310 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 84)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_plm_5F_syntax_41 (inCompiler)) {
      case 2: {
        GALGAS_lstring var_attribute_3376 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-static-list.galgas", 87)) ;
        var_attributeList_3310.addAssign_operation (var_attribute_3376  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 88)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    GALGAS_routineFormalArgumentListAST var_formalArgs_3481 ;
    nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgs_3481, inCompiler) ;
    GALGAS_lstring var_returnType_3507 ;
    switch (select_plm_5F_syntax_42 (inCompiler)) {
    case 1: {
      var_returnType_3507 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 93)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 95)) ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_returnType_3507, inCompiler) ;
    } break ;
    default:
      break ;
    }
    ioArgument_ioPropertyList.addAssign_operation (var_propertyName_3111, GALGAS_staticListPropertyTypeAST::constructor_function (var_mode_3277, var_formalArgs_3481, var_returnType_3507  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 110))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 110)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_staticArrayProperty_i25_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-static-list.galgas", 76)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 77)) ;
  switch (select_plm_5F_syntax_40 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas", 82)) ;
    nt_mode_parse (inCompiler) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_plm_5F_syntax_41 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-static-list.galgas", 87)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
    switch (select_plm_5F_syntax_42 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 95)) ;
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i26_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("declaration-static-list.galgas", 119)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas", 120)) ;
  GALGAS_lstring var_staticListName_4523 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 121)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 122)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_extendStaticListElementAST var_expressions_4588 = GALGAS_extendStaticListElementAST::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 124)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      nt_staticArray_5F_exp_ (ioArgument_ioAST, var_expressions_4588, inCompiler) ;
      switch (select_plm_5F_syntax_44 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 128)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    GALGAS_staticListValueListAST var_expressionList_4733 = GALGAS_staticListValueListAST::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 130)) ;
    const enumGalgasBool test_2 = ioArgument_ioAST.getter_mExtendStaticArrayDeclarationAST (HERE).getter_hasKey (var_staticListName_4523.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 131)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 131)).boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioAST.getter_mExtendStaticArrayDeclarationAST (HERE).method_searchKey (var_staticListName_4523.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 132)), var_expressionList_4733, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 132)) ;
    }
    var_expressionList_4733.addAssign_operation (var_expressions_4588, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 134))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 134)) ;
    ioArgument_ioAST.mProperty_mExtendStaticArrayDeclarationAST.addAssign_operation (var_staticListName_4523.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 135)), var_expressionList_4733, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 135)) ;
    switch (select_plm_5F_syntax_43 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A__3A_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 137)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 139)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i26_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("declaration-static-list.galgas", 119)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas", 120)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 121)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 122)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      nt_staticArray_5F_exp_parse (inCompiler) ;
      switch (select_plm_5F_syntax_44 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 128)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    switch (select_plm_5F_syntax_43 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A__3A_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 137)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 139)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_staticArray_5F_exp_i27_ (GALGAS_ast & ioArgument_ioAST,
                                                                        GALGAS_extendStaticListElementAST & ioArgument_ioExpressions,
                                                                        C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_45 (inCompiler)) {
  case 1: {
    GALGAS_expressionAST var_exp_5336 ;
    nt_expression_ (ioArgument_ioAST, var_exp_5336, inCompiler) ;
    ioArgument_ioExpressions.addAssign_operation (GALGAS_extendStaticListExpressionAST::constructor_expression (var_exp_5336  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 147)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 147))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 147)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas", 149)) ;
    GALGAS_lstring var_functionName_5447 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 150)) ;
    GALGAS_routineFormalArgumentListAST var_formalArgs_5506 ;
    nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgs_5506, inCompiler) ;
    ioArgument_ioExpressions.addAssign_operation (GALGAS_extendStaticListExpressionAST::constructor_function (var_functionName_5447, var_formalArgs_5506  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 153)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 154))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 152)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_staticArray_5F_exp_i27_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_45 (inCompiler)) {
  case 1: {
    nt_expression_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas", 149)) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 150)) ;
    nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i28_ (GALGAS_ast & /* ioArgument_ioAST */,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_option COMMA_SOURCE_FILE ("declaration-option.galgas", 10)) ;
  GALGAS_lstring var_constantName_605 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-option.galgas", 11)) ;
  GALGAS_stringlist var_suggestionList_636 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("declaration-option.galgas", 12)) ;
  GALGAS_bool var_found_655 = GALGAS_bool (false) ;
  cEnumerator__32_stringlist enumerator_726 (GALGAS_application::constructor_boolOptionNameList (SOURCE_FILE ("declaration-option.galgas", 14)), kENUMERATION_UP) ;
  bool bool_0 = var_found_655.operator_not (SOURCE_FILE ("declaration-option.galgas", 14)).isValidAndTrue () ;
  if (enumerator_726.hasCurrentObject () && bool_0) {
    while (enumerator_726.hasCurrentObject () && bool_0) {
      GALGAS_string var_invocationString_772 = GALGAS_application::constructor_boolOptionInvocationString (enumerator_726.current_mValue_30_ (HERE), enumerator_726.current_mValue_31_ (HERE)  COMMA_SOURCE_FILE ("declaration-option.galgas", 15)) ;
      var_suggestionList_636.addAssign_operation (GALGAS_string ("\"").add_operation (var_invocationString_772, inCompiler COMMA_SOURCE_FILE ("declaration-option.galgas", 16)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("declaration-option.galgas", 16))  COMMA_SOURCE_FILE ("declaration-option.galgas", 16)) ;
      var_found_655 = GALGAS_bool (kIsEqual, var_invocationString_772.objectCompare (var_constantName_605.getter_string (HERE))) ;
      const enumGalgasBool test_1 = var_found_655.boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        GALGAS_application::class_method_setBoolOptionValue (enumerator_726.current_mValue_30_ (HERE), enumerator_726.current_mValue_31_ (HERE), GALGAS_bool (true) COMMA_SOURCE_FILE ("declaration-option.galgas", 19)) ;
        }
      }
      enumerator_726.gotoNextObject () ;
      if (enumerator_726.hasCurrentObject ()) {
        bool_0 = var_found_655.operator_not (SOURCE_FILE ("declaration-option.galgas", 14)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_2 = var_found_655.operator_not (SOURCE_FILE ("declaration-option.galgas", 22)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    appendFixItActions (fixItArray3, kFixItReplace, var_suggestionList_636) ;
    inCompiler->emitSemanticError (var_constantName_605.getter_location (SOURCE_FILE ("declaration-option.galgas", 23)), GALGAS_string ("unknown command line option"), fixItArray3  COMMA_SOURCE_FILE ("declaration-option.galgas", 23)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i28_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_option COMMA_SOURCE_FILE ("declaration-option.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-option.galgas", 11)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i29_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_task COMMA_SOURCE_FILE ("task-declaration.galgas", 37)) ;
  GALGAS_lstring var_taskName_1659 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 38)) ;
  GALGAS_lstringlist var_higherPriorityTaskList_1699 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 39)) ;
  switch (select_plm_5F_syntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 42)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_aTaskName_1781 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 44)) ;
      var_higherPriorityTaskList_1699.addAssign_operation (var_aTaskName_1781  COMMA_SOURCE_FILE ("task-declaration.galgas", 45)) ;
      switch (select_plm_5F_syntax_47 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-declaration.galgas", 47)) ;
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
  GALGAS_lstring var_stackSizeAttribute_1909 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 50)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_stackSizeAttribute_1909.getter_string (HERE).objectCompare (GALGAS_string ("stacksize"))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (var_stackSizeAttribute_1909.getter_location (SOURCE_FILE ("task-declaration.galgas", 52)), GALGAS_string ("this attribute should be @stacksize"), fixItArray2  COMMA_SOURCE_FILE ("task-declaration.galgas", 52)) ;
  }
  GALGAS_lbigint var_stackSize_2079 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("task-declaration.galgas", 54)) ;
  GALGAS_bool var_activate_2123 = GALGAS_bool (false) ;
  switch (select_plm_5F_syntax_48 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_activateAttribute_2191 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 59)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_activateAttribute_2191.getter_string (HERE).objectCompare (GALGAS_string ("activate"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_activateAttribute_2191.getter_location (SOURCE_FILE ("task-declaration.galgas", 61)), GALGAS_string ("this attribute should be @activate"), fixItArray4  COMMA_SOURCE_FILE ("task-declaration.galgas", 61)) ;
    }
    var_activate_2123 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 65)) ;
  GALGAS_structurePropertyListAST var_taskVarList_2405 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 66)) ;
  GALGAS_functionDeclarationListAST var_taskProcList_2455 = GALGAS_functionDeclarationListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 67)) ;
  GALGAS_taskSetupListAST var_taskSetupListAST_2499 = GALGAS_taskSetupListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 68)) ;
  GALGAS_taskSetupListAST var_taskActivateListAST_2546 = GALGAS_taskSetupListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 69)) ;
  GALGAS_taskSetupListAST var_taskDeactivateListAST_2595 = GALGAS_taskSetupListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 70)) ;
  GALGAS_syncInstructionBranchListAST var_branchList_2645 = GALGAS_syncInstructionBranchListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 71)) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_plm_5F_syntax_49 (inCompiler)) {
    case 2: {
      nt_private_5F_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_taskVarList_2405, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_func COMMA_SOURCE_FILE ("task-declaration.galgas", 76)) ;
      GALGAS_lstring var_procName_2793 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 77)) ;
      GALGAS_routineFormalArgumentListAST var_formalArgumentList_2890 ;
      nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_2890, inCompiler) ;
      GALGAS_lstring var_returnTypeName_2920 ;
      switch (select_plm_5F_syntax_50 (inCompiler)) {
      case 1: {
        var_returnTypeName_2920 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 81)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 83)) ;
        nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_2920, inCompiler) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 86)) ;
      GALGAS_instructionListAST var_instructionList_3113 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_3113, inCompiler) ;
      var_taskProcList_2455.addAssign_operation (GALGAS_mode::constructor_userMode (SOURCE_FILE ("task-declaration.galgas", 88)), GALGAS_bool (false), var_procName_2793, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 88)), var_formalArgumentList_2890, var_returnTypeName_2920, var_instructionList_3113, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 88))  COMMA_SOURCE_FILE ("task-declaration.galgas", 88)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 89)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_on COMMA_SOURCE_FILE ("task-declaration.galgas", 91)) ;
      GALGAS_lstring var_attribute_3292 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 92)) ;
      GALGAS_lstring var_name_3321 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 93)) ;
      GALGAS_lstringlist var_dependenceList_3355 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 94)) ;
      switch (select_plm_5F_syntax_51 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 97)) ;
        bool repeatFlag_6 = true ;
        while (repeatFlag_6) {
          GALGAS_lstring var_dependenceName_3452 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 99)) ;
          var_dependenceList_3355.addAssign_operation (var_dependenceName_3452  COMMA_SOURCE_FILE ("task-declaration.galgas", 100)) ;
          switch (select_plm_5F_syntax_52 (inCompiler)) {
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-declaration.galgas", 102)) ;
          } break ;
          default:
            repeatFlag_6 = false ;
            break ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 105)) ;
      GALGAS_instructionListAST var_instructionList_3609 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_3609, inCompiler) ;
      GALGAS_location var_endOfInit_3629 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 107)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 108)) ;
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_attribute_3292.getter_string (HERE).objectCompare (GALGAS_string ("setup"))).boolEnum () ;
      if (kBoolTrue == test_7) {
        var_taskSetupListAST_2499.addAssign_operation (var_name_3321, var_dependenceList_3355, var_instructionList_3609, var_endOfInit_3629  COMMA_SOURCE_FILE ("task-declaration.galgas", 110)) ;
      }else if (kBoolFalse == test_7) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_attribute_3292.getter_string (HERE).objectCompare (GALGAS_string ("activate"))).boolEnum () ;
        if (kBoolTrue == test_8) {
          var_taskActivateListAST_2546.addAssign_operation (var_name_3321, var_dependenceList_3355, var_instructionList_3609, var_endOfInit_3629  COMMA_SOURCE_FILE ("task-declaration.galgas", 112)) ;
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, var_attribute_3292.getter_string (HERE).objectCompare (GALGAS_string ("deactivate"))).boolEnum () ;
          if (kBoolTrue == test_9) {
            var_taskDeactivateListAST_2595.addAssign_operation (var_name_3321, var_dependenceList_3355, var_instructionList_3609, var_endOfInit_3629  COMMA_SOURCE_FILE ("task-declaration.galgas", 114)) ;
          }else if (kBoolFalse == test_9) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (var_attribute_3292.getter_location (SOURCE_FILE ("task-declaration.galgas", 116)), GALGAS_string ("attribute should be @setup, @activate or @deactivate"), fixItArray10  COMMA_SOURCE_FILE ("task-declaration.galgas", 116)) ;
          }
        }
      }
    } break ;
    case 5: {
      GALGAS_guardedCommandAST var_guardedCommand_4221 ;
      nt_guarded_5F_command_ (ioArgument_ioAST, var_guardedCommand_4221, inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 120)) ;
      GALGAS_instructionListAST var_instructionList_4284 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_4284, inCompiler) ;
      GALGAS_location var_endOfInstructions_4312 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 122)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 123)) ;
      var_branchList_2645.addAssign_operation (var_guardedCommand_4221, var_instructionList_4284, var_endOfInstructions_4312  COMMA_SOURCE_FILE ("task-declaration.galgas", 124)) ;
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  GALGAS_location var_endOfTask_4437 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 126)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 127)) ;
  ioArgument_ioAST.mProperty_mTaskListAST.addAssign_operation (var_taskName_1659, var_higherPriorityTaskList_1699, var_stackSize_2079, var_taskVarList_2405, var_taskProcList_2455, var_taskSetupListAST_2499, var_taskActivateListAST_2546, var_taskDeactivateListAST_2595, var_branchList_2645, var_endOfTask_4437, var_activate_2123  COMMA_SOURCE_FILE ("task-declaration.galgas", 128)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i29_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_task COMMA_SOURCE_FILE ("task-declaration.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 38)) ;
  switch (select_plm_5F_syntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 42)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 44)) ;
      switch (select_plm_5F_syntax_47 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-declaration.galgas", 47)) ;
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
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("task-declaration.galgas", 54)) ;
  switch (select_plm_5F_syntax_48 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 59)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 65)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_plm_5F_syntax_49 (inCompiler)) {
    case 2: {
      nt_private_5F_struct_5F_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_func COMMA_SOURCE_FILE ("task-declaration.galgas", 76)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 77)) ;
      nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
      switch (select_plm_5F_syntax_50 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 83)) ;
        nt_type_5F_definition_parse (inCompiler) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 86)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 89)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_on COMMA_SOURCE_FILE ("task-declaration.galgas", 91)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 92)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 93)) ;
      switch (select_plm_5F_syntax_51 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 97)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 99)) ;
          switch (select_plm_5F_syntax_52 (inCompiler)) {
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-declaration.galgas", 102)) ;
          } break ;
          default:
            repeatFlag_2 = false ;
            break ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 105)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 108)) ;
    } break ;
    case 5: {
      nt_guarded_5F_command_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 120)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 123)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 127)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_function_i30_ (GALGAS_ast & ioArgument_ioAST,
                                                              GALGAS_functionDeclarationListAST & ioArgument_ioProcListAST,
                                                              C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_public_1342 ;
  switch (select_plm_5F_syntax_53 (inCompiler)) {
  case 1: {
    var_public_1342 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-func.galgas", 30)) ;
    var_public_1342 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_mode var_mode_1487 ;
  GALGAS_lstring var_procName_1512 ;
  GALGAS_lstringlist var_attributeList_1548 ;
  GALGAS_routineFormalArgumentListAST var_procFormalArgumentList_1598 ;
  nt_function_5F_header_ (ioArgument_ioAST, var_mode_1487, var_procName_1512, var_attributeList_1548, var_procFormalArgumentList_1598, inCompiler) ;
  GALGAS_lstring var_returnTypeName_1626 ;
  switch (select_plm_5F_syntax_54 (inCompiler)) {
  case 1: {
    var_returnTypeName_1626 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 41)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-func.galgas", 43)) ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_1626, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-func.galgas", 46)) ;
  GALGAS_instructionListAST var_instructionList_1803 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1803, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-func.galgas", 48)) ;
  ioArgument_ioProcListAST.addAssign_operation (var_mode_1487, var_public_1342, var_procName_1512, var_attributeList_1548, var_procFormalArgumentList_1598, var_returnTypeName_1626, var_instructionList_1803, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 57))  COMMA_SOURCE_FILE ("declaration-func.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_function_i30_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-func.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
  nt_function_5F_header_parse (inCompiler) ;
  switch (select_plm_5F_syntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-func.galgas", 43)) ;
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-func.galgas", 46)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-func.galgas", 48)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_mode_i31_ (GALGAS_mode & outArgument_outMode,
                                                          C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outMode.drop () ; // Release 'out' argument
  switch (select_plm_5F_syntax_55 (inCompiler)) {
  case 1: {
    outArgument_outMode = GALGAS_mode::constructor_anyMode (SOURCE_FILE ("declaration-func.galgas", 64)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-func.galgas", 66)) ;
    outArgument_outMode = GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-func.galgas", 67)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("declaration-func.galgas", 69)) ;
    outArgument_outMode = GALGAS_mode::constructor_panicMode (SOURCE_FILE ("declaration-func.galgas", 70)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-func.galgas", 72)) ;
    outArgument_outMode = GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-func.galgas", 73)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-func.galgas", 75)) ;
    outArgument_outMode = GALGAS_mode::constructor_startupMode (SOURCE_FILE ("declaration-func.galgas", 76)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-func.galgas", 78)) ;
    outArgument_outMode = GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("declaration-func.galgas", 79)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-func.galgas", 81)) ;
    outArgument_outMode = GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-func.galgas", 82)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-func.galgas", 84)) ;
    outArgument_outMode = GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("declaration-func.galgas", 85)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-func.galgas", 87)) ;
    outArgument_outMode = GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-func.galgas", 88)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-func.galgas", 90)) ;
    switch (select_plm_5F_syntax_56 (inCompiler)) {
    case 1: {
      outArgument_outMode = GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("declaration-func.galgas", 92)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-func.galgas", 94)) ;
      outArgument_outMode = GALGAS_mode::constructor_safeUserMode (SOURCE_FILE ("declaration-func.galgas", 95)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-func.galgas", 97)) ;
      outArgument_outMode = GALGAS_mode::constructor_safeSectionMode (SOURCE_FILE ("declaration-func.galgas", 98)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-func.galgas", 100)) ;
      outArgument_outMode = GALGAS_mode::constructor_safeServiceMode (SOURCE_FILE ("declaration-func.galgas", 101)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-func.galgas", 103)) ;
      outArgument_outMode = GALGAS_mode::constructor_safePrimitiveMode (SOURCE_FILE ("declaration-func.galgas", 104)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-func.galgas", 106)) ;
      outArgument_outMode = GALGAS_mode::constructor_safeGuardMode (SOURCE_FILE ("declaration-func.galgas", 107)) ;
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_mode_i31_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-func.galgas", 66)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("declaration-func.galgas", 69)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-func.galgas", 72)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-func.galgas", 75)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-func.galgas", 78)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-func.galgas", 81)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-func.galgas", 84)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-func.galgas", 87)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-func.galgas", 90)) ;
    switch (select_plm_5F_syntax_56 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-func.galgas", 94)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-func.galgas", 97)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-func.galgas", 100)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-func.galgas", 103)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-func.galgas", 106)) ;
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_function_5F_header_i32_ (GALGAS_ast & ioArgument_ioAST,
                                                                        GALGAS_mode & outArgument_outMode,
                                                                        GALGAS_lstring & outArgument_outProcName,
                                                                        GALGAS_lstringlist & outArgument_outAttributeList,
                                                                        GALGAS_routineFormalArgumentListAST & outArgument_outProcFormalArgumentList,
                                                                        C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outMode.drop () ; // Release 'out' argument
  outArgument_outProcName.drop () ; // Release 'out' argument
  outArgument_outAttributeList.drop () ; // Release 'out' argument
  outArgument_outProcFormalArgumentList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-func.galgas", 121)) ;
  outArgument_outProcName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-func.galgas", 122)) ;
  nt_mode_ (outArgument_outMode, inCompiler) ;
  outArgument_outAttributeList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-func.galgas", 124)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_57 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_3456 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-func.galgas", 127)) ;
      outArgument_outAttributeList.addAssign_operation (var_attribute_3456  COMMA_SOURCE_FILE ("declaration-func.galgas", 128)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, outArgument_outProcFormalArgumentList, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_function_5F_header_i32_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-func.galgas", 121)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-func.galgas", 122)) ;
  nt_mode_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_57 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-func.galgas", 127)) ;
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_system_5F_routine_i33_ (GALGAS_ast & ioArgument_ioAST,
                                                                       GALGAS_systemRoutineDeclarationListAST & ioArgument_ioSVCListAST,
                                                                       C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_public_1262 ;
  switch (select_plm_5F_syntax_58 (inCompiler)) {
  case 1: {
    var_public_1262 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 29)) ;
    var_public_1262 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-svc.galgas", 32)) ;
  GALGAS_lstring var_name_1385 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 33)) ;
  GALGAS_mode var_mode_1400 ;
  switch (select_plm_5F_syntax_59 (inCompiler)) {
  case 1: {
    var_mode_1400 = GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("declaration-svc.galgas", 36)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 38)) ;
    var_mode_1400 = GALGAS_mode::constructor_safeSectionMode (SOURCE_FILE ("declaration-svc.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstringlist var_attributeList_1526 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-svc.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_60 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_1586 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 44)) ;
      var_attributeList_1526.addAssign_operation (var_attribute_1586  COMMA_SOURCE_FILE ("declaration-svc.galgas", 45)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_routineFormalArgumentListAST var_formalArgumentList_1693 ;
  nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_1693, inCompiler) ;
  GALGAS_lstring var_returnTypeName_1721 ;
  switch (select_plm_5F_syntax_61 (inCompiler)) {
  case 1: {
    var_returnTypeName_1721 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 50)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 52)) ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_1721, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 55)) ;
  GALGAS_instructionListAST var_instructionList_1898 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1898, inCompiler) ;
  ioArgument_ioSVCListAST.addAssign_operation (var_name_1385, var_mode_1400, var_public_1262, var_attributeList_1526, var_formalArgumentList_1693, var_returnTypeName_1721, var_instructionList_1898, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 65))  COMMA_SOURCE_FILE ("declaration-svc.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 66)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_system_5F_routine_i33_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_58 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-svc.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 33)) ;
  switch (select_plm_5F_syntax_59 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 38)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_60 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 44)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
  switch (select_plm_5F_syntax_61 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 52)) ;
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 55)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 66)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_system_5F_routine_i34_ (GALGAS_ast & ioArgument_ioAST,
                                                                       GALGAS_systemRoutineDeclarationListAST & ioArgument_ioSVCListAST,
                                                                       C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_public_2388 ;
  switch (select_plm_5F_syntax_62 (inCompiler)) {
  case 1: {
    var_public_2388 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 78)) ;
    var_public_2388 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-svc.galgas", 81)) ;
  GALGAS_lstring var_name_2513 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 82)) ;
  GALGAS_mode var_mode_2528 ;
  switch (select_plm_5F_syntax_63 (inCompiler)) {
  case 1: {
    var_mode_2528 = GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("declaration-svc.galgas", 85)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 87)) ;
    var_mode_2528 = GALGAS_mode::constructor_safePrimitiveMode (SOURCE_FILE ("declaration-svc.galgas", 88)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstringlist var_attributeList_2658 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-svc.galgas", 90)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_64 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_2718 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 93)) ;
      var_attributeList_2658.addAssign_operation (var_attribute_2718  COMMA_SOURCE_FILE ("declaration-svc.galgas", 94)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_routineFormalArgumentListAST var_formalArgumentList_2831 ;
  nt_procedure_5F_input_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_2831, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 97)) ;
  GALGAS_instructionListAST var_instructionList_2890 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_2890, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 99)) ;
  ioArgument_ioSVCListAST.addAssign_operation (var_name_2513, var_mode_2528, var_public_2388, var_attributeList_2658, var_formalArgumentList_2831, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 106)), var_instructionList_2890, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 108))  COMMA_SOURCE_FILE ("declaration-svc.galgas", 100)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_system_5F_routine_i34_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_62 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 78)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-svc.galgas", 81)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 82)) ;
  switch (select_plm_5F_syntax_63 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 87)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_64 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 93)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_procedure_5F_input_5F_formal_5F_arguments_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 97)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 99)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_system_5F_routine_i35_ (GALGAS_ast & ioArgument_ioAST,
                                                                       GALGAS_systemRoutineDeclarationListAST & ioArgument_ioSVCListAST,
                                                                       C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_public_3286 ;
  switch (select_plm_5F_syntax_65 (inCompiler)) {
  case 1: {
    var_public_3286 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 118)) ;
    var_public_3286 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-svc.galgas", 121)) ;
  GALGAS_lstring var_name_3409 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 122)) ;
  GALGAS_mode var_mode_3424 ;
  switch (select_plm_5F_syntax_66 (inCompiler)) {
  case 1: {
    var_mode_3424 = GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-svc.galgas", 125)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 127)) ;
    var_mode_3424 = GALGAS_mode::constructor_safeServiceMode (SOURCE_FILE ("declaration-svc.galgas", 128)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstringlist var_attributeList_3550 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-svc.galgas", 130)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_67 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_3610 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 133)) ;
      var_attributeList_3550.addAssign_operation (var_attribute_3610  COMMA_SOURCE_FILE ("declaration-svc.galgas", 134)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_routineFormalArgumentListAST var_formalArgumentList_3723 ;
  nt_procedure_5F_input_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_3723, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 137)) ;
  GALGAS_instructionListAST var_instructionList_3782 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_3782, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 139)) ;
  ioArgument_ioSVCListAST.addAssign_operation (var_name_3409, var_mode_3424, var_public_3286, var_attributeList_3550, var_formalArgumentList_3723, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 146)), var_instructionList_3782, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 148))  COMMA_SOURCE_FILE ("declaration-svc.galgas", 140)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_system_5F_routine_i35_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_65 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 118)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-svc.galgas", 121)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 122)) ;
  switch (select_plm_5F_syntax_66 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 127)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_67 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 133)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_procedure_5F_input_5F_formal_5F_arguments_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 137)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 139)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i36_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_required COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 22)) ;
  GALGAS_mode var_mode_1182 ;
  GALGAS_lstring var_procName_1207 ;
  GALGAS_lstringlist var_attributeList_1243 ;
  GALGAS_routineFormalArgumentListAST var_procFormalArgumentList_1293 ;
  nt_function_5F_header_ (ioArgument_ioAST, var_mode_1182, var_procName_1207, var_attributeList_1243, var_procFormalArgumentList_1293, inCompiler) ;
  GALGAS_bool var_isGlobal_1310 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_1355 (var_attributeList_1243, kENUMERATION_UP) ;
  while (enumerator_1355.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1355.current_mValue (HERE).getter_string (HERE).objectCompare (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 31)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_isGlobal_1310.boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
        inCompiler->emitSemanticError (enumerator_1355.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 33)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 33)) ;
      }else if (kBoolFalse == test_1) {
        var_isGlobal_1310 = GALGAS_bool (true) ;
      }
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
      appendFixItActions (fixItArray3, kFixItReplace, GALGAS_string ("@").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 38))) ;
      inCompiler->emitSemanticError (enumerator_1355.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 38)), GALGAS_string ("invalid attribute"), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 38)) ;
    }
    enumerator_1355.gotoNextObject () ;
  }
  ioArgument_ioAST.mProperty_mRequiredFunctionListAST.addAssign_operation (var_procName_1207, var_mode_1182, var_isGlobal_1310, var_procFormalArgumentList_1293, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 46))  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i36_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_required COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 22)) ;
  nt_function_5F_header_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i37_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 24)) ;
  GALGAS_mode var_mode_1262 ;
  GALGAS_lstring var_procName_1287 ;
  GALGAS_lstringlist var_attributeList_1323 ;
  GALGAS_routineFormalArgumentListAST var_procFormalArgumentList_1373 ;
  nt_function_5F_header_ (ioArgument_ioAST, var_mode_1262, var_procName_1287, var_attributeList_1323, var_procFormalArgumentList_1373, inCompiler) ;
  GALGAS_lstring var_returnTypeName_1401 ;
  switch (select_plm_5F_syntax_68 (inCompiler)) {
  case 1: {
    var_returnTypeName_1401 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 33)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 35)) ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_1401, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 38)) ;
  GALGAS_lstring var_llvmName_1556 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 39)) ;
  ioArgument_ioAST.mProperty_mExternFunctionListAST.addAssign_operation (var_procName_1287, var_mode_1262, var_attributeList_1323, var_procFormalArgumentList_1373, var_returnTypeName_1401, var_llvmName_1556, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 47))  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i37_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 24)) ;
  nt_function_5F_header_parse (inCompiler) ;
  switch (select_plm_5F_syntax_68 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_isr_i38_ (GALGAS_ast & ioArgument_ioAST,
                                                         const GALGAS_lstring constinArgument_inDriverName,
                                                         C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("declaration-isr.galgas", 22)) ;
  GALGAS_mode var_mode_1130 ;
  switch (select_plm_5F_syntax_69 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-isr.galgas", 25)) ;
    var_mode_1130 = GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-isr.galgas", 26)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-isr.galgas", 28)) ;
    var_mode_1130 = GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("declaration-isr.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_isrName_1271 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-isr.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 32)) ;
  GALGAS_instructionListAST var_instructionList_1330 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1330, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 34)) ;
  ioArgument_ioAST.mProperty_mISRDeclarationListAST.addAssign_operation (var_isrName_1271, var_mode_1130, constinArgument_inDriverName, var_instructionList_1330, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 40))  COMMA_SOURCE_FILE ("declaration-isr.galgas", 35)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_isr_i38_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("declaration-isr.galgas", 22)) ;
  switch (select_plm_5F_syntax_69 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_guard_i39_ (GALGAS_ast & ioArgument_ioAST,
                                                           GALGAS_guardDeclarationListAST & ioArgument_ioGuardList,
                                                           C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_bool var_public_1448 ;
  switch (select_plm_5F_syntax_70 (inCompiler)) {
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
    switch (select_plm_5F_syntax_71 (inCompiler)) {
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
  switch (select_plm_5F_syntax_72 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_guard_i39_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_70 (inCompiler)) {
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
    switch (select_plm_5F_syntax_71 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-guard.galgas", 43)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
  switch (select_plm_5F_syntax_72 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_procedure_5F_formal_5F_arguments_i40_ (GALGAS_ast & ioArgument_ioAST,
                                                                                      GALGAS_routineFormalArgumentListAST & outArgument_outProcFormalArgumentList,
                                                                                      C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outProcFormalArgumentList.drop () ; // Release 'out' argument
  outArgument_outProcFormalArgumentList = GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("formal-arguments.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_73 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_2207 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 56)) ;
      GALGAS_lstring var_formalArgumentName_2250 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 57)) ;
      GALGAS_lstring var_formalArgumentTypeName_2311 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_2311, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_output (SOURCE_FILE ("formal-arguments.galgas", 60)), var_selector_2207, var_formalArgumentTypeName_2311, var_formalArgumentName_2250  COMMA_SOURCE_FILE ("formal-arguments.galgas", 59)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_2515 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 65)) ;
      GALGAS_lstring var_formalArgumentName_2558 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 66)) ;
      GALGAS_lstring var_formalArgumentTypeName_2618 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_2618, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_inputOutput (SOURCE_FILE ("formal-arguments.galgas", 69)), var_selector_2515, var_formalArgumentTypeName_2618, var_formalArgumentName_2558  COMMA_SOURCE_FILE ("formal-arguments.galgas", 68)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_2826 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 74)) ;
      GALGAS_lstring var_formalArgumentName_2869 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 75)) ;
      GALGAS_lstring var_formalArgumentTypeName_2930 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_2930, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("formal-arguments.galgas", 78)), var_selector_2826, var_formalArgumentTypeName_2930, var_formalArgumentName_2869  COMMA_SOURCE_FILE ("formal-arguments.galgas", 77)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 83)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_procedure_5F_formal_5F_arguments_i40_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_73 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 56)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 57)) ;
      nt_type_5F_definition_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 65)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 66)) ;
      nt_type_5F_definition_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 74)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 75)) ;
      nt_type_5F_definition_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 83)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_procedure_5F_input_5F_formal_5F_arguments_i41_ (GALGAS_ast & ioArgument_ioAST,
                                                                                               GALGAS_routineFormalArgumentListAST & outArgument_outProcFormalArgumentList,
                                                                                               C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outProcFormalArgumentList.drop () ; // Release 'out' argument
  outArgument_outProcFormalArgumentList = GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("formal-arguments.galgas", 89)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 90)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_74 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_3443 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 93)) ;
      GALGAS_lstring var_formalArgumentName_3486 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 94)) ;
      GALGAS_lstring var_formalArgumentTypeName_3547 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_3547, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("formal-arguments.galgas", 97)), var_selector_3443, var_formalArgumentTypeName_3547, var_formalArgumentName_3486  COMMA_SOURCE_FILE ("formal-arguments.galgas", 96)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 102)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_procedure_5F_input_5F_formal_5F_arguments_i41_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 90)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_74 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 93)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 94)) ;
      nt_type_5F_definition_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 102)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i42_ (GALGAS_ast & ioArgument_ioAST,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("panic.galgas", 21)) ;
  GALGAS_lstring var_attribute_1151 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("panic.galgas", 22)) ;
  GALGAS_bool var_isSetup_1169 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_attribute_1151.getter_string (HERE).objectCompare (GALGAS_string ("setup"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_isSetup_1169 = GALGAS_bool (true) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_attribute_1151.getter_string (HERE).objectCompare (GALGAS_string ("loop"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_isSetup_1169 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_attribute_1151.getter_location (SOURCE_FILE ("panic.galgas", 29)), GALGAS_string ("attribute should be @setup or @loop"), fixItArray2  COMMA_SOURCE_FILE ("panic.galgas", 29)) ;
      var_isSetup_1169.drop () ; // Release error dropped variable
    }
  }
  GALGAS_lbigint var_priority_1411 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("panic.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("panic.galgas", 32)) ;
  GALGAS_instructionListAST var_instructionList_1470 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1470, inCompiler) ;
  GALGAS_location var_endOfInstructionList_1499 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("panic.galgas", 35)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_panicAST::constructor_new (var_isSetup_1169, var_instructionList_1470, var_endOfInstructionList_1499, var_priority_1411  COMMA_SOURCE_FILE ("panic.galgas", 36))  COMMA_SOURCE_FILE ("panic.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i42_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("panic.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("panic.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("panic.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("panic.galgas", 32)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("panic.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_i43_ (GALGAS_ast & ioArgument_ioAST,
                                                                GALGAS_expressionAST & outArgument_outExpression,
                                                                C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_logical_5F_xor_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_75 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_i43_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_logical_5F_xor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_75 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_logical_5F_xor_i44_ (GALGAS_ast & ioArgument_ioAST,
                                                                                  GALGAS_expressionAST & outArgument_outExpression,
                                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_logical_5F_and_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_76 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_logical_5F_xor_i44_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_logical_5F_and_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_76 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_logical_5F_and_i45_ (GALGAS_ast & ioArgument_ioAST,
                                                                                  GALGAS_expressionAST & outArgument_outExpression,
                                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_bitwise_5F_or_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_77 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_logical_5F_and_i45_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_or_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_77 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_bitwise_5F_or_i46_ (GALGAS_ast & ioArgument_ioAST,
                                                                                 GALGAS_expressionAST & outArgument_outExpression,
                                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_bitwise_5F_xor_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_78 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_bitwise_5F_or_i46_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_xor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_78 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_bitwise_5F_xor_i47_ (GALGAS_ast & ioArgument_ioAST,
                                                                                  GALGAS_expressionAST & outArgument_outExpression,
                                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_bitwise_5F_and_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_79 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_bitwise_5F_xor_i47_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_and_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_79 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_bitwise_5F_and_i48_ (GALGAS_ast & ioArgument_ioAST,
                                                                                  GALGAS_expressionAST & outArgument_outExpression,
                                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_equality_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_80 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_bitwise_5F_and_i48_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_equality_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_80 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_equality_i49_ (GALGAS_ast & ioArgument_ioAST,
                                                                            GALGAS_expressionAST & outArgument_outExpression,
                                                                            C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_comparison_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  switch (select_plm_5F_syntax_81 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_equality_i49_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_comparison_parse (inCompiler) ;
  switch (select_plm_5F_syntax_81 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_comparison_i50_ (GALGAS_ast & ioArgument_ioAST,
                                                                              GALGAS_expressionAST & outArgument_outExpression,
                                                                              C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_shift_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  switch (select_plm_5F_syntax_82 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_comparison_i50_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_shift_parse (inCompiler) ;
  switch (select_plm_5F_syntax_82 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_shift_i51_ (GALGAS_ast & ioArgument_ioAST,
                                                                         GALGAS_expressionAST & outArgument_outExpression,
                                                                         C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_addition_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_83 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_shift_i51_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_addition_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_83 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_addition_i52_ (GALGAS_ast & ioArgument_ioAST,
                                                                            GALGAS_expressionAST & outArgument_outExpression,
                                                                            C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_product_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_84 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_addition_i52_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_expression_5F_product_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_84 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_product_i53_ (GALGAS_ast & ioArgument_ioAST,
                                                                           GALGAS_expressionAST & outArgument_outExpression,
                                                                           C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_85 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_expression_5F_product_i53_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_85 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i54_ (GALGAS_ast & ioArgument_ioAST,
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i54_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 349)) ;
  nt_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i55_ (GALGAS_ast & ioArgument_ioAST,
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i55_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_not COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 362)) ;
  nt_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i56_ (GALGAS_ast & ioArgument_ioAST,
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i56_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 375)) ;
  nt_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i57_ (GALGAS_ast & ioArgument_ioAST,
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i57_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 388)) ;
  nt_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i58_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 401)) ;
  nt_expression_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 403)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i58_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 401)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 403)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i59_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_convert COMMA_SOURCE_FILE ("expression-convert.galgas", 20)) ;
  GALGAS_lstring var_typeName_1106 ;
  switch (select_plm_5F_syntax_86 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i59_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_convert COMMA_SOURCE_FILE ("expression-convert.galgas", 20)) ;
  switch (select_plm_5F_syntax_86 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i60_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("expression-extend.galgas", 20)) ;
  GALGAS_lstring var_typeName_1106 ;
  switch (select_plm_5F_syntax_87 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i60_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("expression-extend.galgas", 20)) ;
  switch (select_plm_5F_syntax_87 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i61_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_truncate COMMA_SOURCE_FILE ("expression-truncate.galgas", 20)) ;
  GALGAS_lstring var_typeName_1108 ;
  switch (select_plm_5F_syntax_88 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i61_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_truncate COMMA_SOURCE_FILE ("expression-truncate.galgas", 20)) ;
  switch (select_plm_5F_syntax_88 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i62_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 19)) ;
  GALGAS_controlRegisterLValueAST var_registerLValue_1133 ;
  nt_control_5F_register_5F_lvalue_ (ioArgument_ioAST, var_registerLValue_1133, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 21)) ;
  outArgument_outExpression = GALGAS_addressofControlRegisterAST::constructor_new (var_registerLValue_1133  COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i62_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 19)) ;
  nt_control_5F_register_5F_lvalue_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 21)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i63_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 19)) ;
  GALGAS_LValueAST var_lvalue_1073 ;
  nt_lvalue_ (ioArgument_ioAST, var_lvalue_1073, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 21)) ;
  outArgument_outExpression = GALGAS_addressofExpressionAST::constructor_new (var_lvalue_1073  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i63_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 19)) ;
  nt_lvalue_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 21)) ;
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
    switch (select_plm_5F_syntax_89 (inCompiler)) {
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
    switch (select_plm_5F_syntax_89 (inCompiler)) {
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
  switch (select_plm_5F_syntax_90 (inCompiler)) {
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
  switch (select_plm_5F_syntax_90 (inCompiler)) {
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
  switch (select_plm_5F_syntax_91 (inCompiler)) {
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
  switch (select_plm_5F_syntax_91 (inCompiler)) {
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
    switch (select_plm_5F_syntax_92 (inCompiler)) {
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
    switch (select_plm_5F_syntax_92 (inCompiler)) {
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
  GALGAS_controlRegisterLValueAST var_registerLValue_1159 ;
  nt_control_5F_register_5F_lvalue_ (ioArgument_ioAST, var_registerLValue_1159, inCompiler) ;
  GALGAS_lstring var_fieldName_1182 ;
  switch (select_plm_5F_syntax_93 (inCompiler)) {
  case 1: {
    var_fieldName_1182 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("expression-control-register.galgas", 22)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("expression-control-register.galgas", 24)) ;
    var_fieldName_1182 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-control-register.galgas", 25)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GALGAS_registerInExpressionAST::constructor_new (var_registerLValue_1159, var_fieldName_1182  COMMA_SOURCE_FILE ("expression-control-register.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i75_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_control_5F_register_5F_lvalue_parse (inCompiler) ;
  switch (select_plm_5F_syntax_93 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("expression-control-register.galgas", 24)) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-control-register.galgas", 25)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i76_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 28)) ;
  GALGAS_lstring var_registerGroupName_1391 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__23_groupName COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 29)) ;
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
    switch (select_plm_5F_syntax_94 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i76_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__23_groupName COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 34)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_plm_5F_syntax_94 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i77_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_expressionAST & outArgument_outExpression,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_receiver_1726 ;
  switch (select_plm_5F_syntax_95 (inCompiler)) {
  case 1: {
    var_receiver_1726 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 37)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_self COMMA_SOURCE_FILE ("expression-primary.galgas", 39)) ;
    var_receiver_1726 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_primaryInExpressionAccessListAST var_accessList_1931 ;
  nt_expression_5F_access_5F_list_ (ioArgument_ioAST, var_accessList_1931, inCompiler) ;
  outArgument_outExpression = GALGAS_primaryInExpressionAST::constructor_new (var_receiver_1726, var_accessList_1931  COMMA_SOURCE_FILE ("expression-primary.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_primary_i77_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_95 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 37)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_self COMMA_SOURCE_FILE ("expression-primary.galgas", 39)) ;
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
  outArgument_outAccessList = GALGAS_primaryInExpressionAccessListAST::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 51)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_96 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 54)) ;
      GALGAS_lstring var_propertyName_2329 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 55)) ;
      outArgument_outAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_property (var_propertyName_2329  COMMA_SOURCE_FILE ("expression-primary.galgas", 56))  COMMA_SOURCE_FILE ("expression-primary.galgas", 56)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 58)) ;
      GALGAS_lbigint var_low_2429 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 59)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 60)) ;
      GALGAS_lbigint var_high_2467 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 61)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 62)) ;
      outArgument_outAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_integerSlice (var_low_2429, var_high_2467  COMMA_SOURCE_FILE ("expression-primary.galgas", 63))  COMMA_SOURCE_FILE ("expression-primary.galgas", 63)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 65)) ;
      GALGAS_expressionAST var_expression_2600 ;
      nt_expression_ (ioArgument_ioAST, var_expression_2600, inCompiler) ;
      GALGAS_location var_endOfIndex_2621 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 67)) ;
      GALGAS_bool var_checkIndexExpression_2671 ;
      switch (select_plm_5F_syntax_97 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 70)) ;
        var_checkIndexExpression_2671 = GALGAS_bool (true) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("expression-primary.galgas", 73)) ;
        var_checkIndexExpression_2671 = GALGAS_bool (false) ;
      } break ;
      default:
        break ;
      }
      outArgument_outAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_arrayAccess (var_expression_2600, var_endOfIndex_2621, var_checkIndexExpression_2671  COMMA_SOURCE_FILE ("expression-primary.galgas", 76))  COMMA_SOURCE_FILE ("expression-primary.galgas", 76)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 78)) ;
      GALGAS_lstring var_methodName_2979 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 79)) ;
      GALGAS_effectiveArgumentListAST var_arguments_3031 ;
      GALGAS_location var_endOfArguments_3051 ;
      nt_effective_5F_parameters_ (ioArgument_ioAST, var_arguments_3031, var_endOfArguments_3051, inCompiler) ;
      outArgument_outAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_funcCall (var_methodName_2979, var_arguments_3031, var_endOfArguments_3051  COMMA_SOURCE_FILE ("expression-primary.galgas", 81))  COMMA_SOURCE_FILE ("expression-primary.galgas", 81)) ;
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
    switch (select_plm_5F_syntax_96 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 54)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 55)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 58)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 59)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 60)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 61)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 62)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 65)) ;
      nt_expression_parse (inCompiler) ;
      switch (select_plm_5F_syntax_97 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 70)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("expression-primary.galgas", 73)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 78)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 79)) ;
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
    switch (select_plm_5F_syntax_98 (inCompiler)) {
    case 2: {
      nt_instruction_ (ioArgument_ioAST, outArgument_outInstructionList, inCompiler) ;
      switch (select_plm_5F_syntax_99 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("instructionList.galgas", 29)) ;
      } break ;
      case 2: {
        GALGAS_string var_s_1359 = GALGAS_string::constructor_separatorString (inCompiler  COMMA_SOURCE_FILE ("instructionList.galgas", 31)) ;
        const enumGalgasBool test_1 = var_s_1359.getter_containsCharacter (GALGAS_char (TO_UNICODE (10)) COMMA_SOURCE_FILE ("instructionList.galgas", 32)).operator_not (SOURCE_FILE ("instructionList.galgas", 32)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instructionList.galgas", 33)), GALGAS_string ("instruction should be terminated by an end of line or a ';'"), fixItArray2  COMMA_SOURCE_FILE ("instructionList.galgas", 33)) ;
        }
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
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instructionList_i80_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_98 (inCompiler)) {
    case 2: {
      nt_instruction_parse (inCompiler) ;
      switch (select_plm_5F_syntax_99 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("instructionList.galgas", 29)) ;
      } break ;
      case 2: {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i81_ (GALGAS_ast & ioArgument_ioAST,
                                                                 GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_check COMMA_SOURCE_FILE ("directive-check.galgas", 19)) ;
  GALGAS_lstring var_checkMessage_1097 ;
  switch (select_plm_5F_syntax_100 (inCompiler)) {
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
  switch (select_plm_5F_syntax_100 (inCompiler)) {
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
  GALGAS_controlRegisterLValueAST var_registerLValue_1503 ;
  nt_control_5F_register_5F_lvalue_ (ioArgument_ioAST, var_registerLValue_1503, inCompiler) ;
  GALGAS_controlRegisterAssignmentOperatorKind var_assignmentKind_1602 ;
  switch (select_plm_5F_syntax_101 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 31)) ;
    var_assignmentKind_1602 = GALGAS_controlRegisterAssignmentOperatorKind::constructor_assignment (SOURCE_FILE ("instruction-assignment-control-register.galgas", 32)) ;
  } break ;
  case 2: {
    GALGAS_infixOperator var_infixOperator_1726 ;
    GALGAS_location var_operatorLocation_1748 ;
    nt_assignment_5F_combined_5F_with_5F_operator_ (var_infixOperator_1726, var_operatorLocation_1748, inCompiler) ;
    var_assignmentKind_1602 = GALGAS_controlRegisterAssignmentOperatorKind::constructor_assignmentWithOperator (var_infixOperator_1726, var_operatorLocation_1748  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_expressionAST var_sourceExpression_1941 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_1941, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_controlRegisterAssignmentInstructionAST::constructor_new (var_registerLValue_1503.getter_mRegisterGroupName (HERE).getter_location (HERE), var_registerLValue_1503, var_assignmentKind_1602, var_sourceExpression_1941  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 40))  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i84_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_control_5F_register_5F_lvalue_parse (inCompiler) ;
  switch (select_plm_5F_syntax_101 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 31)) ;
  } break ;
  case 2: {
    nt_assignment_5F_combined_5F_with_5F_operator_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i85_ (GALGAS_ast & ioArgument_ioAST,
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
    switch (select_plm_5F_syntax_103 (inCompiler)) {
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
    switch (select_plm_5F_syntax_102 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i85_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 41)) ;
    switch (select_plm_5F_syntax_103 (inCompiler)) {
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
    switch (select_plm_5F_syntax_102 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i86_ (GALGAS_ast & ioArgument_ioAST,
                                                                 GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_controlRegisterLValueAST var_registerLValue_1256 ;
  nt_control_5F_register_5F_lvalue_ (ioArgument_ioAST, var_registerLValue_1256, inCompiler) ;
  GALGAS_lstring var_attribute_1288 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 23)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_attribute_1288.getter_string (HERE).objectCompare (GALGAS_string ("bit"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("@bit")) ;
    inCompiler->emitSemanticError (var_attribute_1288.getter_location (SOURCE_FILE ("instruction-bit-banding.galgas", 25)), GALGAS_string ("attribute should be @bit"), fixItArray1  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 25)) ;
  }
  GALGAS_expressionAST var_bitExpression_1454 ;
  nt_expression_ (ioArgument_ioAST, var_bitExpression_1454, inCompiler) ;
  GALGAS_location var_bitExpressionLocation_1484 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 29)) ;
  GALGAS_expressionAST var_sourceExpression_1556 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_1556, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_bitbandInstructionAST::constructor_new (var_registerLValue_1256.getter_mRegisterGroupName (HERE).getter_location (HERE), var_registerLValue_1256, var_bitExpression_1454, var_bitExpressionLocation_1484, var_sourceExpression_1556, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 38))  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 32))  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i86_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_control_5F_register_5F_lvalue_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 23)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 29)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_assignment_5F_combined_5F_with_5F_operator_i87_ (GALGAS_infixOperator & outArgument_outInfixOperator,
                                                                                                GALGAS_location & outArgument_outOperatorLocation,
                                                                                                C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outInfixOperator.drop () ; // Release 'out' argument
  outArgument_outOperatorLocation.drop () ; // Release 'out' argument
  switch (select_plm_5F_syntax_104 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_assignment_5F_combined_5F_with_5F_operator_i87_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_104 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i88_ (GALGAS_ast & ioArgument_ioAST,
                                                                 GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_LValueAST var_lvalue_1500 ;
  nt_lvalue_ (ioArgument_ioAST, var_lvalue_1500, inCompiler) ;
  GALGAS_location var_instructionLocation_1528 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 52)) ;
  GALGAS_infixOperator var_infixOperator_1631 ;
  GALGAS_location var_operatorLocation_1653 ;
  nt_assignment_5F_combined_5F_with_5F_operator_ (var_infixOperator_1631, var_operatorLocation_1653, inCompiler) ;
  GALGAS_expressionAST var_rightExpression_1738 ;
  nt_expression_ (ioArgument_ioAST, var_rightExpression_1738, inCompiler) ;
  GALGAS_primaryInExpressionAccessListAST var_expressionAccessList_1828 = GALGAS_primaryInExpressionAccessListAST::constructor_emptyList (SOURCE_FILE ("instruction-assignment-operator.galgas", 58)) ;
  cEnumerator_accessInAssignmentListAST enumerator_1872 (var_lvalue_1500.getter_mAccessList (HERE), kENUMERATION_UP) ;
  while (enumerator_1872.hasCurrentObject ()) {
    switch (enumerator_1872.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_1989 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_1872.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_1989->mAssociatedValue0 ;
        var_expressionAccessList_1828.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_property (extractedValue_name  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 62))  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 62)) ;
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_2206 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_1872.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_index = extractPtr_2206->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_2206->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_checkIndexExpression = extractPtr_2206->mAssociatedValue2 ;
        var_expressionAccessList_1828.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_arrayAccess (extractedValue_index, extractedValue_endOfIndex, extractedValue_checkIndexExpression  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 64))  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 64)) ;
      }
      break ;
    }
    enumerator_1872.gotoNextObject () ;
  }
  GALGAS_primaryInExpressionAST var_leftExpression_2247 = GALGAS_primaryInExpressionAST::constructor_new (var_lvalue_1500.getter_mIdentifier (HERE), var_expressionAccessList_1828  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 67)) ;
  GALGAS_infixOperatorExpressionAST var_expression_2340 = GALGAS_infixOperatorExpressionAST::constructor_new (var_leftExpression_2247, var_operatorLocation_1653, var_infixOperator_1631, var_rightExpression_1738  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 68)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_assignmentInstructionAST::constructor_new (var_instructionLocation_1528, var_lvalue_1500, var_expression_2340  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 75))  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 75)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i88_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_lvalue_parse (inCompiler) ;
  nt_assignment_5F_combined_5F_with_5F_operator_parse (inCompiler) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i89_ (GALGAS_ast & ioArgument_ioAST,
                                                                 GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 27)) ;
  GALGAS_lstring var_varName_1352 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 28)) ;
  GALGAS_lstring var_optionalTypeName_1382 ;
  switch (select_plm_5F_syntax_105 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i89_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 28)) ;
  switch (select_plm_5F_syntax_105 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i90_ (GALGAS_ast & ioArgument_ioAST,
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i90_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 49)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i91_ (GALGAS_ast & ioArgument_ioAST,
                                                                 GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 20)) ;
  GALGAS_lstring var_varName_1146 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 21)) ;
  GALGAS_lstring var_optionalTypeName_1176 ;
  switch (select_plm_5F_syntax_106 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i91_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 21)) ;
  switch (select_plm_5F_syntax_106 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i92_ (GALGAS_ast & /* ioArgument_ioAST */,
                                                                 GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("instruction-nop.galgas", 17)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_letInstructionNOP::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-nop.galgas", 18))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 18))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i92_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("instruction-nop.galgas", 17)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i93_ (GALGAS_ast & ioArgument_ioAST,
                                                                 GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("instruction-panic.galgas", 18)) ;
  GALGAS_location var_loc_1062 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 19)) ;
  GALGAS_expressionAST var_codeExpression_1139 ;
  nt_expression_ (ioArgument_ioAST, var_codeExpression_1139, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_panicInstructionAST::constructor_new (var_loc_1062, var_codeExpression_1139  COMMA_SOURCE_FILE ("instruction-panic.galgas", 21))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i93_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("instruction-panic.galgas", 18)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i94_ (GALGAS_ast & ioArgument_ioAST,
                                                                 GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_ifInstructionAST var_ifInstruction_1346 ;
  nt_if_5F_instruction_ (ioArgument_ioAST, var_ifInstruction_1346, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (var_ifInstruction_1346  COMMA_SOURCE_FILE ("instruction-if.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i94_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_if_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_if_5F_instruction_i95_ (GALGAS_ast & ioArgument_ioAST,
                                                                       GALGAS_ifInstructionAST & outArgument_outIfInstruction,
                                                                       C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outIfInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 32)) ;
  GALGAS_location var_instructionLocation_1627 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 33)) ;
  GALGAS_bool var_staticIfExpression_1673 ;
  switch (select_plm_5F_syntax_107 (inCompiler)) {
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
  switch (select_plm_5F_syntax_108 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_if_5F_instruction_i95_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 32)) ;
  switch (select_plm_5F_syntax_107 (inCompiler)) {
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
  switch (select_plm_5F_syntax_108 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_guarded_5F_command_i96_ (GALGAS_ast & ioArgument_ioAST,
                                                                        GALGAS_guardedCommandAST & outArgument_outGuardedCommand,
                                                                        C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outGuardedCommand.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_on COMMA_SOURCE_FILE ("instruction-sync.galgas", 43)) ;
  GALGAS_expressionAST var_expression_2064 ;
  GALGAS_location var_endOfExp_2087 ;
  GALGAS_bool var_warnsOnStaticExpression_2121 ;
  switch (select_plm_5F_syntax_109 (inCompiler)) {
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
  switch (select_plm_5F_syntax_110 (inCompiler)) {
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
    switch (select_plm_5F_syntax_111 (inCompiler)) {
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
  switch (select_plm_5F_syntax_112 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_guarded_5F_command_i96_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_on COMMA_SOURCE_FILE ("instruction-sync.galgas", 43)) ;
  switch (select_plm_5F_syntax_109 (inCompiler)) {
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
  switch (select_plm_5F_syntax_110 (inCompiler)) {
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
    switch (select_plm_5F_syntax_111 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-sync.galgas", 71)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_effective_5F_parameters_parse (inCompiler) ;
  switch (select_plm_5F_syntax_112 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_guarded_5F_command_i97_ (GALGAS_ast & ioArgument_ioAST,
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
  switch (select_plm_5F_syntax_113 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_guarded_5F_command_i97_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_on COMMA_SOURCE_FILE ("instruction-sync.galgas", 95)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("instruction-sync.galgas", 96)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("instruction-sync.galgas", 99)) ;
  switch (select_plm_5F_syntax_113 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i98_ (GALGAS_ast & ioArgument_ioAST,
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
    switch (select_plm_5F_syntax_114 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i98_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("instruction-sync.galgas", 117)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-sync.galgas", 119)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_guarded_5F_command_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-sync.galgas", 123)) ;
    nt_instructionList_parse (inCompiler) ;
    switch (select_plm_5F_syntax_114 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i99_ (GALGAS_ast & ioArgument_ioAST,
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i99_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-while.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-while.galgas", 25)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-while.galgas", 28)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i100_ (GALGAS_ast & ioArgument_ioAST,
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
  switch (select_plm_5F_syntax_115 (inCompiler)) {
  case 1: {
    var_whileExpression_1385 = GALGAS_literalBooleanInExpressionAST::constructor_new (GALGAS_bool (true)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 31)) ;
    var_staticWhileExpression_1342 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 34)) ;
    switch (select_plm_5F_syntax_116 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i100_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 27)) ;
  switch (select_plm_5F_syntax_115 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 34)) ;
    switch (select_plm_5F_syntax_116 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i101_ (GALGAS_ast & ioArgument_ioAST,
                                                                  GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 25)) ;
  GALGAS_lstring var_varName_1347 ;
  switch (select_plm_5F_syntax_117 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i101_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 25)) ;
  switch (select_plm_5F_syntax_117 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i102_ (GALGAS_ast & ioArgument_ioAST,
                                                                  GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_callInstructionAST var_routineCallInstruction_1614 ;
  nt_procedure_5F_call_ (ioArgument_ioAST, var_routineCallInstruction_1614, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (var_routineCallInstruction_1614  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i102_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_procedure_5F_call_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_procedure_5F_call_i103_ (GALGAS_ast & ioArgument_ioAST,
                                                                        GALGAS_callInstructionAST & outArgument_outInstruction,
                                                                        C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation_1893 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 39)) ;
  GALGAS_LValueAST var_assignmentTargetAST_1956 ;
  nt_lvalue_ (ioArgument_ioAST, var_assignmentTargetAST_1956, inCompiler) ;
  GALGAS_effectiveArgumentListAST var_arguments_2006 ;
  GALGAS_location var_endOfArguments_2026 ;
  nt_effective_5F_parameters_ (ioArgument_ioAST, var_arguments_2006, var_endOfArguments_2026, inCompiler) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_assignmentTargetAST_1956.getter_mAccessList (HERE).getter_length (SOURCE_FILE ("instruction-procedure-call.galgas", 42)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsNotEqual, var_assignmentTargetAST_1956.getter_mIdentifier (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 42)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outInstruction = GALGAS_standAloneProcedureCallInstructionAST::constructor_new (var_instructionLocation_1893, var_arguments_2006, var_endOfArguments_2026, var_assignmentTargetAST_1956.getter_mIdentifier (HERE)  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 43)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outInstruction = GALGAS_procedureCallInstructionAST::constructor_new (var_instructionLocation_1893, var_arguments_2006, var_endOfArguments_2026, var_assignmentTargetAST_1956.getter_mIdentifier (HERE), var_assignmentTargetAST_1956.getter_mAccessList (HERE)  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 50)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_procedure_5F_call_i103_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_lvalue_parse (inCompiler) ;
  nt_effective_5F_parameters_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i104_ (GALGAS_ast & ioArgument_ioAST,
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
      switch (select_plm_5F_syntax_119 (inCompiler)) {
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
    switch (select_plm_5F_syntax_118 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_instruction_i104_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 28)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 35)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
      switch (select_plm_5F_syntax_119 (inCompiler)) {
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
    switch (select_plm_5F_syntax_118 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_lvalue_i105_ (GALGAS_ast & ioArgument_ioAST,
                                                             GALGAS_LValueAST & outArgument_outAssignmentTargetAST,
                                                             C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outAssignmentTargetAST.drop () ; // Release 'out' argument
  GALGAS_lstring var_receiver_1525 ;
  switch (select_plm_5F_syntax_120 (inCompiler)) {
  case 1: {
    var_receiver_1525 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 35)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_self COMMA_SOURCE_FILE ("lvalue.galgas", 37)) ;
    var_receiver_1525 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 38)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_accessInAssignmentListAST var_accessList_1710 = GALGAS_accessInAssignmentListAST::constructor_emptyList (SOURCE_FILE ("lvalue.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_121 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue.galgas", 44)) ;
      GALGAS_lstring var_propertyName_1783 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 45)) ;
      var_accessList_1710.addAssign_operation (GALGAS_accessInAssignmentAST::constructor_property (var_propertyName_1783  COMMA_SOURCE_FILE ("lvalue.galgas", 46))  COMMA_SOURCE_FILE ("lvalue.galgas", 46)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue.galgas", 48)) ;
      GALGAS_expressionAST var_expression_1898 ;
      nt_expression_ (ioArgument_ioAST, var_expression_1898, inCompiler) ;
      GALGAS_location var_endOfIndex_1919 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 50)) ;
      GALGAS_bool var_checkIndexExpression_1969 ;
      switch (select_plm_5F_syntax_122 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue.galgas", 53)) ;
        var_checkIndexExpression_1969 = GALGAS_bool (true) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue.galgas", 56)) ;
        var_checkIndexExpression_1969 = GALGAS_bool (false) ;
      } break ;
      default:
        break ;
      }
      var_accessList_1710.addAssign_operation (GALGAS_accessInAssignmentAST::constructor_arrayAccess (var_expression_1898, var_endOfIndex_1919, var_checkIndexExpression_1969  COMMA_SOURCE_FILE ("lvalue.galgas", 59))  COMMA_SOURCE_FILE ("lvalue.galgas", 59)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outAssignmentTargetAST = GALGAS_LValueAST::constructor_new (var_receiver_1525, var_accessList_1710  COMMA_SOURCE_FILE ("lvalue.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_lvalue_i105_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  switch (select_plm_5F_syntax_120 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 35)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_self COMMA_SOURCE_FILE ("lvalue.galgas", 37)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_121 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue.galgas", 44)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 45)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue.galgas", 48)) ;
      nt_expression_parse (inCompiler) ;
      switch (select_plm_5F_syntax_122 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue.galgas", 53)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue.galgas", 56)) ;
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_control_5F_register_5F_lvalue_i106_ (GALGAS_ast & ioArgument_ioAST,
                                                                                    GALGAS_controlRegisterLValueAST & outArgument_outRegisterLValue,
                                                                                    C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outRegisterLValue.drop () ; // Release 'out' argument
  GALGAS_lstring var_registerGroupName_1680 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__23_groupName COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 35)) ;
  GALGAS_registerGroupIndexAST var_groupIndex_1718 ;
  switch (select_plm_5F_syntax_123 (inCompiler)) {
  case 1: {
    var_groupIndex_1718 = GALGAS_registerGroupIndexAST::constructor_noIndex (SOURCE_FILE ("lvalue-control-register.galgas", 38)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 40)) ;
    GALGAS_expressionAST var_expression_1817 ;
    nt_expression_ (ioArgument_ioAST, var_expression_1817, inCompiler) ;
    GALGAS_location var_endOfIndex_1838 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 42)) ;
    GALGAS_bool var_checkIndexExpression_1888 ;
    switch (select_plm_5F_syntax_124 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 45)) ;
      var_checkIndexExpression_1888 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 48)) ;
      var_checkIndexExpression_1888 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    var_groupIndex_1718 = GALGAS_registerGroupIndexAST::constructor_index (var_expression_1817, var_endOfIndex_1838, var_checkIndexExpression_1888  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 53)) ;
  GALGAS_lstring var_registerName_2180 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 54)) ;
  GALGAS_registerIndexAST var_registerIndex_2216 ;
  switch (select_plm_5F_syntax_125 (inCompiler)) {
  case 1: {
    var_registerIndex_2216 = GALGAS_registerIndexAST::constructor_noIndex (SOURCE_FILE ("lvalue-control-register.galgas", 57)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 59)) ;
    GALGAS_expressionAST var_expression_2318 ;
    nt_expression_ (ioArgument_ioAST, var_expression_2318, inCompiler) ;
    GALGAS_location var_endOfIndex_2339 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 61)) ;
    GALGAS_bool var_checkIndexExpression_2389 ;
    switch (select_plm_5F_syntax_126 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 64)) ;
      var_checkIndexExpression_2389 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 67)) ;
      var_checkIndexExpression_2389 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    var_registerIndex_2216 = GALGAS_registerIndexAST::constructor_index (var_expression_2318, var_endOfIndex_2339, var_checkIndexExpression_2389  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 70)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outRegisterLValue = GALGAS_controlRegisterLValueAST::constructor_new (var_registerGroupName_1680, var_groupIndex_1718, var_registerName_2180, var_registerIndex_2216  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 76)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_control_5F_register_5F_lvalue_i106_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__23_groupName COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 35)) ;
  switch (select_plm_5F_syntax_123 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 40)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_plm_5F_syntax_124 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 45)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 48)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 54)) ;
  switch (select_plm_5F_syntax_125 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 59)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_plm_5F_syntax_126 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 64)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 67)) ;
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_effective_5F_parameters_i107_ (GALGAS_ast & ioArgument_ioAST,
                                                                              GALGAS_effectiveArgumentListAST & outArgument_outEffectiveParameterList,
                                                                              GALGAS_location & outArgument_outEndOfArgs,
                                                                              C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outEndOfArgs.drop () ; // Release 'out' argument
  outArgument_outEffectiveParameterList = GALGAS_effectiveArgumentListAST::constructor_emptyList (SOURCE_FILE ("effective-parameters.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_127 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_2485 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 56)) ;
      GALGAS_expressionAST var_expression_2528 ;
      nt_expression_ (ioArgument_ioAST, var_expression_2528, inCompiler) ;
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_output (var_expression_2528, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 58))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 58)), var_selector_2485  COMMA_SOURCE_FILE ("effective-parameters.galgas", 58)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_2659 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 60)) ;
      GALGAS_lstring var_effectiveParameterName_2706 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 61)) ;
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_outputInput (var_effectiveParameterName_2706  COMMA_SOURCE_FILE ("effective-parameters.galgas", 62)), var_selector_2659  COMMA_SOURCE_FILE ("effective-parameters.galgas", 62)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_2839 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 64)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_self COMMA_SOURCE_FILE ("effective-parameters.galgas", 65)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 66)) ;
      GALGAS_lstring var_effectiveParameterName_2909 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 67)) ;
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_outputInputSelfVariable (var_effectiveParameterName_2909  COMMA_SOURCE_FILE ("effective-parameters.galgas", 68)), var_selector_2839  COMMA_SOURCE_FILE ("effective-parameters.galgas", 68)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_selector_3053 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 70)) ;
      GALGAS_lstring var_effectiveParameterName_3100 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 71)) ;
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_input (var_effectiveParameterName_3100  COMMA_SOURCE_FILE ("effective-parameters.galgas", 72)), var_selector_3053  COMMA_SOURCE_FILE ("effective-parameters.galgas", 72)) ;
    } break ;
    case 6: {
      GALGAS_lstring var_selector_3226 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 74)) ;
      GALGAS_bool var_constant_3247 ;
      switch (select_plm_5F_syntax_128 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_var COMMA_SOURCE_FILE ("effective-parameters.galgas", 77)) ;
        var_constant_3247 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("effective-parameters.galgas", 80)) ;
        var_constant_3247 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_effectiveParameterName_3403 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 83)) ;
      GALGAS_lstring var_typeName_3427 ;
      switch (select_plm_5F_syntax_129 (inCompiler)) {
      case 1: {
        var_typeName_3427 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("effective-parameters.galgas", 86)) ;
      } break ;
      case 2: {
        nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_3427, inCompiler) ;
      } break ;
      default:
        break ;
      }
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_inputWithType (var_constant_3247, var_typeName_3427, var_effectiveParameterName_3403  COMMA_SOURCE_FILE ("effective-parameters.galgas", 91)), var_selector_3226  COMMA_SOURCE_FILE ("effective-parameters.galgas", 90)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outEndOfArgs = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 95)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_effective_5F_parameters_i107_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_syntax_127 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 56)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 60)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 61)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 64)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_self COMMA_SOURCE_FILE ("effective-parameters.galgas", 65)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 66)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 67)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 70)) ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 71)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 74)) ;
      switch (select_plm_5F_syntax_128 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_var COMMA_SOURCE_FILE ("effective-parameters.galgas", 77)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_let COMMA_SOURCE_FILE ("effective-parameters.galgas", 80)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 83)) ;
      switch (select_plm_5F_syntax_129 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 95)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i108_ (GALGAS_ast & ioArgument_ioAST,
                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_target COMMA_SOURCE_FILE ("target-generation.galgas", 10)) ;
  GALGAS_lstring var_targetName_595 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("target-generation.galgas", 11)) ;
  ioArgument_ioAST.mProperty_mTargetListAST.addAssign_operation (var_targetName_595  COMMA_SOURCE_FILE ("target-generation.galgas", 12)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i108_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_target COMMA_SOURCE_FILE ("target-generation.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("target-generation.galgas", 11)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i109_ (GALGAS_ast & ioArgument_ioAST,
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
    switch (select_plm_5F_syntax_130 (inCompiler)) {
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

void cParser_plm_5F_syntax::rule_plm_5F_syntax_declaration_i109_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_check COMMA_SOURCE_FILE ("declaration-check-target.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_target COMMA_SOURCE_FILE ("declaration-check-target.galgas", 11)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 15)) ;
    switch (select_plm_5F_syntax_130 (inCompiler)) {
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
  nt_configuration_5F_key_ (GALGAS_string ("SECTION_ENTRY_FROM_UNKNOWN_MODE"), inCompiler) ;
  GALGAS_lstring var_sectionDispatcherInvocationFromAnyMode_6537 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 176)) ;
  nt_configuration_5F_key_ (GALGAS_string ("SECTION_ENTRY_FROM_USER_MODE"), inCompiler) ;
  GALGAS_lstring var_sectionDispatcherInvocationFromUserMode_6653 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 178)) ;
  nt_configuration_5F_key_ (GALGAS_string ("INTERRUPT_HANDLER"), inCompiler) ;
  GALGAS_lstring var_xtrInterruptHandler_6738 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 180)) ;
  nt_configuration_5F_key_ (GALGAS_string ("INTERRUPT_USER_STACK_SIZE"), inCompiler) ;
  GALGAS_lbigint var_stackedUserRegisterOnInterruptByteSize_6849 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 182)) ;
  nt_configuration_5F_key_ (GALGAS_string ("UNUSED_INTERRUPT"), inCompiler) ;
  GALGAS_lstring var_undefinedInterruptHandler_6939 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 184)) ;
  nt_configuration_5F_key_ (GALGAS_string ("CPP_FILES"), inCompiler) ;
  GALGAS_lstringlist var_C_5F_definitionFiles_7011 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 186)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_target_5F_specific_5F_syntax_3 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_fileRelativePath_7076 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 189)) ;
      var_C_5F_definitionFiles_7011.addAssign_operation (var_fileRelativePath_7076  COMMA_SOURCE_FILE ("configuration.galgas", 190)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_configuration_5F_key_ (GALGAS_string ("S_FILES"), inCompiler) ;
  GALGAS_lstringlist var_S_5F_definitionFiles_7199 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 193)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_plm_5F_target_5F_specific_5F_syntax_4 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_fileRelativePath_7264 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 196)) ;
      var_S_5F_definitionFiles_7199.addAssign_operation (var_fileRelativePath_7264  COMMA_SOURCE_FILE ("configuration.galgas", 197)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  nt_configuration_5F_key_ (GALGAS_string ("LL_FILES"), inCompiler) ;
  GALGAS_lstringlist var_LL_5F_definitionFiles_7389 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 200)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_plm_5F_target_5F_specific_5F_syntax_5 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_fileRelativePath_7454 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 203)) ;
      var_LL_5F_definitionFiles_7389.addAssign_operation (var_fileRelativePath_7454  COMMA_SOURCE_FILE ("configuration.galgas", 204)) ;
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
      GALGAS_lstring var_relativeFilePath_7634 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 210)) ;
      outArgument_outImportedFileList.addAssign_operation (var_relativeFilePath_7634  COMMA_SOURCE_FILE ("configuration.galgas", 211)) ;
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  GALGAS_interruptionConfigurationList var_interruptionConfigurationList_7750 ;
  GALGAS_enumerationConstantList var_interruptConstantList_7777 ;
  nt_interruptConfigList_ (var_interruptionConfigurationList_7750, var_interruptConstantList_7777, inCompiler) ;
  GALGAS_uint var_ptrSize_7795 ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_pointerSize_4328.getter_bigint (HERE).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 215)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (var_pointerSize_4328.getter_location (SOURCE_FILE ("configuration.galgas", 216)), GALGAS_string ("zero size pointer is invalid"), fixItArray5  COMMA_SOURCE_FILE ("configuration.galgas", 216)) ;
    var_ptrSize_7795.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_4) {
    var_ptrSize_7795 = var_pointerSize_4328.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 218)) ;
  }
  GALGAS_targetParameters var_parameters_7977 = GALGAS_targetParameters::constructor_new (var_loc_3860, var_python_5F_utilityToolList_3936, var_python_5F_build_4009, var_linkerScript_4083, var_ptrSize_7795, var_handleDynamicArray_4398, var_systemStackSize_4592, var_stackedUserRegisterOnInterruptByteSize_6849, var_nopInstructionStringInLLVM_4670, var_bitbandRegisterBaseAddress_4746, var_bitbandRegisterEndAddress_4785, var_bitbandRegisterRelocationAddress_4831, var_bitbandRegisterOffsetMultiplier_4876, var_bitbandRegisterBitMultiplier_4918, var_sectionHandler_6125, var_sectionPushedRegisterByteSize_6227, var_sectionDispatcherHeader_6324, var_sectionDispatcherEntry_6419, var_sectionDispatcherInvocationFromAnyMode_6537, var_sectionDispatcherInvocationFromUserMode_6653, var_C_5F_definitionFiles_7011, var_S_5F_definitionFiles_7199, var_LL_5F_definitionFiles_7389, var_xtrInterruptHandler_6738, var_undefinedInterruptHandler_6939, var_serviceHandler_5541, var_servicePushedRegisterByteSize_5643, var_serviceDispatcherEntry_5835, var_serviceDispatcherHeader_5740, var_serviceEntryNoReturnedValue_5942, var_serviceEntryReturnValue_6047  COMMA_SOURCE_FILE ("configuration.galgas", 220)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_configurationDeclarationAST::constructor_new (var_panicCodeTypeName_4167, var_panicLineTypeName_4252, var_parameters_7977, var_interruptionConfigurationList_7750  COMMA_SOURCE_FILE ("configuration.galgas", 253))  COMMA_SOURCE_FILE ("configuration.galgas", 253)) ;
  outArgument_outEndOfSourceFile = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 259)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_enumerationDeclarationAST::constructor_new (GALGAS_lstring::constructor_new (function_isrSlotTypeName (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 261)), var_xtrInterruptHandler_6738.getter_location (HERE)  COMMA_SOURCE_FILE ("configuration.galgas", 261)), var_interruptConstantList_7777  COMMA_SOURCE_FILE ("configuration.galgas", 260))  COMMA_SOURCE_FILE ("configuration.galgas", 260)) ;
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
      GALGAS_lstring var_interruptName_9781 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("configuration.galgas", 277)) ;
      GALGAS_interruptionPanicCode var_interruptionPanicCode_9832 ;
      switch (select_plm_5F_target_5F_specific_5F_syntax_8 (inCompiler)) {
      case 1: {
        var_interruptionPanicCode_9832 = GALGAS_interruptionPanicCode::constructor_noCode (SOURCE_FILE ("configuration.galgas", 280)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("configuration.galgas", 282)) ;
        GALGAS_lbigint var_panicCode_9940 = inCompiler->synthetizedAttribute_bigInteger () ;
        inCompiler->acceptTerminal (C_Lexique_plm_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 283)) ;
        var_interruptionPanicCode_9832 = GALGAS_interruptionPanicCode::constructor_code (var_panicCode_9940  COMMA_SOURCE_FILE ("configuration.galgas", 284)) ;
        outArgument_outEnumerationConstantList.addAssign_operation (var_interruptName_9781, var_panicCode_9940.getter_bigint (SOURCE_FILE ("configuration.galgas", 285))  COMMA_SOURCE_FILE ("configuration.galgas", 285)) ;
      } break ;
      default:
        break ;
      }
      outArgument_interruptionConfigurationList.addAssign_operation (var_interruptName_9781, var_interruptionPanicCode_9832  COMMA_SOURCE_FILE ("configuration.galgas", 287)) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_interruptionPanicCode_code::cEnumAssociatedValues_interruptionPanicCode_code (const GALGAS_lbigint & inAssociatedValue0
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_interruptionPanicCode_code::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_interruptionPanicCode_code::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_interruptionPanicCode_code * ptr = dynamic_cast<const cEnumAssociatedValues_interruptionPanicCode_code *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionPanicCode::GALGAS_interruptionPanicCode (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionPanicCode GALGAS_interruptionPanicCode::constructor_noCode (UNUSED_LOCATION_ARGS) {
  GALGAS_interruptionPanicCode result ;
  result.mEnum = kEnum_noCode ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_interruptionPanicCode [3] = {
  "(not built)",
  "noCode",
  "code"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_interruptionPanicCode::getter_isNoCode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noCode == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_interruptionPanicCode::getter_isCode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_code == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_interruptionPanicCode::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<enum @interruptionPanicCode: " << gEnumNameArrayFor_interruptionPanicCode [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @interruptionPanicCode type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_interruptionPanicCode ("interruptionPanicCode",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_interruptionPanicCode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptionPanicCode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_interruptionPanicCode::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptionPanicCode (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Class for element of '@interruptionConfigurationList' list                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_interruptionConfigurationList : public cCollectionElement {
  public : GALGAS_interruptionConfigurationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_interruptionConfigurationList (const GALGAS_lstring & in_mInterruptName,
                                                             const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode
                                                             COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_interruptionConfigurationList (const GALGAS_interruptionConfigurationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_interruptionConfigurationList::cCollectionElement_interruptionConfigurationList (const GALGAS_lstring & in_mInterruptName,
                                                                                                    const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInterruptName, in_mInterruptionPanicCode) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_interruptionConfigurationList::cCollectionElement_interruptionConfigurationList (const GALGAS_interruptionConfigurationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInterruptName, inElement.mProperty_mInterruptionPanicCode) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_interruptionConfigurationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_interruptionConfigurationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_interruptionConfigurationList (mObject.mProperty_mInterruptName, mObject.mProperty_mInterruptionPanicCode COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_interruptionConfigurationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_interruptionConfigurationList * operand = (cCollectionElement_interruptionConfigurationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_interruptionConfigurationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionConfigurationList::GALGAS_interruptionConfigurationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionConfigurationList::GALGAS_interruptionConfigurationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_interruptionConfigurationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_interruptionConfigurationList::setter_append (GALGAS_interruptionConfigurationList_2D_element inElement,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_interruptionConfigurationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_interruptionConfigurationList result = GALGAS_interruptionConfigurationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_interruptionConfigurationList result = GALGAS_interruptionConfigurationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_interruptionConfigurationList result = GALGAS_interruptionConfigurationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_interruptionConfigurationList::plusAssign_operation (const GALGAS_interruptionConfigurationList inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_interruptionConfigurationList::cEnumerator_interruptionConfigurationList (const GALGAS_interruptionConfigurationList & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionConfigurationList_2D_element cEnumerator_interruptionConfigurationList::current (LOCATION_ARGS) const {
  const cCollectionElement_interruptionConfigurationList * p = (const cCollectionElement_interruptionConfigurationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_interruptionConfigurationList::current_mInterruptName (LOCATION_ARGS) const {
  const cCollectionElement_interruptionConfigurationList * p = (const cCollectionElement_interruptionConfigurationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
  return p->mObject.mProperty_mInterruptName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionPanicCode cEnumerator_interruptionConfigurationList::current_mInterruptionPanicCode (LOCATION_ARGS) const {
  const cCollectionElement_interruptionConfigurationList * p = (const cCollectionElement_interruptionConfigurationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
  return p->mObject.mProperty_mInterruptionPanicCode ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @interruptionConfigurationList type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_interruptionConfigurationList ("interruptionConfigurationList",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_interruptionConfigurationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptionConfigurationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_interruptionConfigurationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptionConfigurationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDeclarationAST::GALGAS_abstractDeclarationAST (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDeclarationAST::GALGAS_abstractDeclarationAST (const cPtr_abstractDeclarationAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @abstractDeclarationAST class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_abstractDeclarationAST::cPtr_abstractDeclarationAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @abstractDeclarationAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractDeclarationAST ("abstractDeclarationAST",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_abstractDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_abstractDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST::GALGAS_expressionAST (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST::GALGAS_expressionAST (const cPtr_expressionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                       Pointer class for @expressionAST class                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_expressionAST::cPtr_expressionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @expressionAST type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionAST ("expressionAST",
                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_expressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_expressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_booleanDeclarationAST::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_booleanDeclarationAST::objectCompare (const GALGAS_booleanDeclarationAST & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_booleanDeclarationAST::GALGAS_booleanDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_booleanDeclarationAST GALGAS_booleanDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_booleanDeclarationAST::constructor_new (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_booleanDeclarationAST::GALGAS_booleanDeclarationAST (const cPtr_booleanDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_booleanDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_booleanDeclarationAST GALGAS_booleanDeclarationAST::constructor_new (LOCATION_ARGS) {
  GALGAS_booleanDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_booleanDeclarationAST (THERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @booleanDeclarationAST class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_booleanDeclarationAST::cPtr_booleanDeclarationAST (LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_booleanDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanDeclarationAST ;
}

void cPtr_booleanDeclarationAST::description (C_String & ioString,
                                              const int32_t /* inIndentation */) const {
  ioString << "[@booleanDeclarationAST]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_booleanDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_booleanDeclarationAST (THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @booleanDeclarationAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_booleanDeclarationAST ("booleanDeclarationAST",
                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_booleanDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_booleanDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_booleanDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_booleanDeclarationAST GALGAS_booleanDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_booleanDeclarationAST result ;
  const GALGAS_booleanDeclarationAST * p = (const GALGAS_booleanDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_booleanDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("booleanDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Class for element of '@enumerationConstantList' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_enumerationConstantList : public cCollectionElement {
  public : GALGAS_enumerationConstantList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_enumerationConstantList (const GALGAS_lstring & in_mConstantName,
                                                       const GALGAS_bigint & in_mConstantValue
                                                       COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_enumerationConstantList (const GALGAS_enumerationConstantList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_enumerationConstantList::cCollectionElement_enumerationConstantList (const GALGAS_lstring & in_mConstantName,
                                                                                        const GALGAS_bigint & in_mConstantValue
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantName, in_mConstantValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_enumerationConstantList::cCollectionElement_enumerationConstantList (const GALGAS_enumerationConstantList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mConstantName, inElement.mProperty_mConstantValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_enumerationConstantList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_enumerationConstantList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_enumerationConstantList (mObject.mProperty_mConstantName, mObject.mProperty_mConstantValue COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_enumerationConstantList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_enumerationConstantList * operand = (cCollectionElement_enumerationConstantList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_enumerationConstantList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationConstantList::GALGAS_enumerationConstantList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationConstantList::GALGAS_enumerationConstantList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumerationConstantList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumerationConstantList::setter_append (GALGAS_enumerationConstantList_2D_element inElement,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumerationConstantList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationConstantList result = GALGAS_enumerationConstantList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationConstantList result = GALGAS_enumerationConstantList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationConstantList result = GALGAS_enumerationConstantList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumerationConstantList::plusAssign_operation (const GALGAS_enumerationConstantList inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_enumerationConstantList::cEnumerator_enumerationConstantList (const GALGAS_enumerationConstantList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationConstantList_2D_element cEnumerator_enumerationConstantList::current (LOCATION_ARGS) const {
  const cCollectionElement_enumerationConstantList * p = (const cCollectionElement_enumerationConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_enumerationConstantList::current_mConstantName (LOCATION_ARGS) const {
  const cCollectionElement_enumerationConstantList * p = (const cCollectionElement_enumerationConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
  return p->mObject.mProperty_mConstantName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint cEnumerator_enumerationConstantList::current_mConstantValue (LOCATION_ARGS) const {
  const cCollectionElement_enumerationConstantList * p = (const cCollectionElement_enumerationConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
  return p->mObject.mProperty_mConstantValue ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @enumerationConstantList type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationConstantList ("enumerationConstantList",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumerationConstantList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationConstantList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumerationConstantList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationConstantList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_classConstantMap::cMapElement_classConstantMap (const GALGAS_lstring & inKey,
                                                            const GALGAS_bigint & in_mIndex,
                                                            const GALGAS_lstring & in_mClassTypeName
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex),
mProperty_mClassTypeName (in_mClassTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_classConstantMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mClassTypeName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_classConstantMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_classConstantMap (mProperty_lkey, mProperty_mIndex, mProperty_mClassTypeName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classConstantMap::GALGAS_classConstantMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classConstantMap::GALGAS_classConstantMap (const GALGAS_classConstantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classConstantMap & GALGAS_classConstantMap::operator = (const GALGAS_classConstantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classConstantMap GALGAS_classConstantMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_classConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classConstantMap GALGAS_classConstantMap::constructor_mapWithMapToOverride (const GALGAS_classConstantMap & inMapToOverride
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_classConstantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classConstantMap GALGAS_classConstantMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_classConstantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_classConstantMap_searchKey = "there is no '%K' constant" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_classConstantMap * GALGAS_classConstantMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_classConstantMap * result = (cMapElement_classConstantMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_classConstantMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_classConstantMap::cEnumerator_classConstantMap (const GALGAS_classConstantMap & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classConstantMap_2D_element cEnumerator_classConstantMap::current (LOCATION_ARGS) const {
  const cMapElement_classConstantMap * p = (const cMapElement_classConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classConstantMap) ;
  return GALGAS_classConstantMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex, p->mProperty_mClassTypeName) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_classConstantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint cEnumerator_classConstantMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_classConstantMap * p = (const cMapElement_classConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classConstantMap) ;
  return p->mProperty_mIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_classConstantMap::current_mClassTypeName (LOCATION_ARGS) const {
  const cMapElement_classConstantMap * p = (const cMapElement_classConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classConstantMap) ;
  return p->mProperty_mClassTypeName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @classConstantMap type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classConstantMap ("classConstantMap",
                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_classConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classConstantMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_classConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classConstantMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Class for element of '@structurePropertyListAST' list                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_structurePropertyListAST : public cCollectionElement {
  public : GALGAS_structurePropertyListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_structurePropertyListAST (const GALGAS_lstring & in_mPropertyName,
                                                        const GALGAS_propertyAttributeList & in_mPropertyAttributeList,
                                                        const GALGAS_bool & in_mIsPublic,
                                                        const GALGAS_lstring & in_mPropertyTypeName,
                                                        const GALGAS_propertyKindAST & in_mPropertyKind
                                                        COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_structurePropertyListAST (const GALGAS_structurePropertyListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_structurePropertyListAST::cCollectionElement_structurePropertyListAST (const GALGAS_lstring & in_mPropertyName,
                                                                                          const GALGAS_propertyAttributeList & in_mPropertyAttributeList,
                                                                                          const GALGAS_bool & in_mIsPublic,
                                                                                          const GALGAS_lstring & in_mPropertyTypeName,
                                                                                          const GALGAS_propertyKindAST & in_mPropertyKind
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mPropertyAttributeList, in_mIsPublic, in_mPropertyTypeName, in_mPropertyKind) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_structurePropertyListAST::cCollectionElement_structurePropertyListAST (const GALGAS_structurePropertyListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyName, inElement.mProperty_mPropertyAttributeList, inElement.mProperty_mIsPublic, inElement.mProperty_mPropertyTypeName, inElement.mProperty_mPropertyKind) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_structurePropertyListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_structurePropertyListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_structurePropertyListAST (mObject.mProperty_mPropertyName, mObject.mProperty_mPropertyAttributeList, mObject.mProperty_mIsPublic, mObject.mProperty_mPropertyTypeName, mObject.mProperty_mPropertyKind COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  ioString << "mIsPublic" ":" ;
  mObject.mProperty_mIsPublic.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyTypeName" ":" ;
  mObject.mProperty_mPropertyTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyKind" ":" ;
  mObject.mProperty_mPropertyKind.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_structurePropertyListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_structurePropertyListAST * operand = (cCollectionElement_structurePropertyListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_structurePropertyListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyListAST::GALGAS_structurePropertyListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyListAST::GALGAS_structurePropertyListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_structurePropertyListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_propertyAttributeList & inOperand1,
                                                                                            const GALGAS_bool & inOperand2,
                                                                                            const GALGAS_lstring & inOperand3,
                                                                                            const GALGAS_propertyKindAST & inOperand4
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structurePropertyListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_lstring & in_mPropertyName,
                                                                 const GALGAS_propertyAttributeList & in_mPropertyAttributeList,
                                                                 const GALGAS_bool & in_mIsPublic,
                                                                 const GALGAS_lstring & in_mPropertyTypeName,
                                                                 const GALGAS_propertyKindAST & in_mPropertyKind
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_structurePropertyListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_structurePropertyListAST (in_mPropertyName,
                                                              in_mPropertyAttributeList,
                                                              in_mIsPublic,
                                                              in_mPropertyTypeName,
                                                              in_mPropertyKind COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structurePropertyListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                           const GALGAS_propertyAttributeList & inOperand1,
                                                           const GALGAS_bool & inOperand2,
                                                           const GALGAS_lstring & inOperand3,
                                                           const GALGAS_propertyKindAST & inOperand4
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structurePropertyListAST::setter_append (GALGAS_structurePropertyListAST_2D_element inElement,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_structurePropertyListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structurePropertyListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_propertyAttributeList inOperand1,
                                                            const GALGAS_bool inOperand2,
                                                            const GALGAS_lstring inOperand3,
                                                            const GALGAS_propertyKindAST inOperand4,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structurePropertyListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_propertyAttributeList & outOperand1,
                                                            GALGAS_bool & outOperand2,
                                                            GALGAS_lstring & outOperand3,
                                                            GALGAS_propertyKindAST & outOperand4,
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
      outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
      outOperand2 = p->mObject.mProperty_mIsPublic ;
      outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
      outOperand4 = p->mObject.mProperty_mPropertyKind ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structurePropertyListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                       GALGAS_propertyAttributeList & outOperand1,
                                                       GALGAS_bool & outOperand2,
                                                       GALGAS_lstring & outOperand3,
                                                       GALGAS_propertyKindAST & outOperand4,
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
    outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
    outOperand2 = p->mObject.mProperty_mIsPublic ;
    outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand4 = p->mObject.mProperty_mPropertyKind ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structurePropertyListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                      GALGAS_propertyAttributeList & outOperand1,
                                                      GALGAS_bool & outOperand2,
                                                      GALGAS_lstring & outOperand3,
                                                      GALGAS_propertyKindAST & outOperand4,
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
    outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
    outOperand2 = p->mObject.mProperty_mIsPublic ;
    outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand4 = p->mObject.mProperty_mPropertyKind ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structurePropertyListAST::method_first (GALGAS_lstring & outOperand0,
                                                    GALGAS_propertyAttributeList & outOperand1,
                                                    GALGAS_bool & outOperand2,
                                                    GALGAS_lstring & outOperand3,
                                                    GALGAS_propertyKindAST & outOperand4,
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
    outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
    outOperand2 = p->mObject.mProperty_mIsPublic ;
    outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand4 = p->mObject.mProperty_mPropertyKind ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structurePropertyListAST::method_last (GALGAS_lstring & outOperand0,
                                                   GALGAS_propertyAttributeList & outOperand1,
                                                   GALGAS_bool & outOperand2,
                                                   GALGAS_lstring & outOperand3,
                                                   GALGAS_propertyKindAST & outOperand4,
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
    outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
    outOperand2 = p->mObject.mProperty_mIsPublic ;
    outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand4 = p->mObject.mProperty_mPropertyKind ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_structurePropertyListAST result = GALGAS_structurePropertyListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_structurePropertyListAST result = GALGAS_structurePropertyListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_structurePropertyListAST result = GALGAS_structurePropertyListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structurePropertyListAST::plusAssign_operation (const GALGAS_structurePropertyListAST inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKindAST GALGAS_structurePropertyListAST::getter_mPropertyKindAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  GALGAS_propertyKindAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    result = p->mObject.mProperty_mPropertyKind ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_structurePropertyListAST::cEnumerator_structurePropertyListAST (const GALGAS_structurePropertyListAST & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyListAST_2D_element cEnumerator_structurePropertyListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_structurePropertyListAST::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAttributeList cEnumerator_structurePropertyListAST::current_mPropertyAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mPropertyAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_structurePropertyListAST::current_mIsPublic (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mIsPublic ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_structurePropertyListAST::current_mPropertyTypeName (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mPropertyTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKindAST cEnumerator_structurePropertyListAST::current_mPropertyKind (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mPropertyKind ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @structurePropertyListAST type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structurePropertyListAST ("structurePropertyListAST",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_structurePropertyListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structurePropertyListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_structurePropertyListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structurePropertyListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Class for element of '@functionDeclarationListAST' list                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_functionDeclarationListAST : public cCollectionElement {
  public : GALGAS_functionDeclarationListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_functionDeclarationListAST (const GALGAS_mode & in_mMode,
                                                          const GALGAS_bool & in_mPublicFunction,
                                                          const GALGAS_lstring & in_mFunctionName,
                                                          const GALGAS_lstringlist & in_mFunctionAttributeList,
                                                          const GALGAS_routineFormalArgumentListAST & in_mFunctionFormalArgumentList,
                                                          const GALGAS_lstring & in_mFunctionReturnTypeName,
                                                          const GALGAS_instructionListAST & in_mFunctionInstructionList,
                                                          const GALGAS_location & in_mEndOfFunctionDeclaration
                                                          COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_functionDeclarationListAST (const GALGAS_functionDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_functionDeclarationListAST::cCollectionElement_functionDeclarationListAST (const GALGAS_functionDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mMode, inElement.mProperty_mPublicFunction, inElement.mProperty_mFunctionName, inElement.mProperty_mFunctionAttributeList, inElement.mProperty_mFunctionFormalArgumentList, inElement.mProperty_mFunctionReturnTypeName, inElement.mProperty_mFunctionInstructionList, inElement.mProperty_mEndOfFunctionDeclaration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_functionDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_functionDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_functionDeclarationListAST (mObject.mProperty_mMode, mObject.mProperty_mPublicFunction, mObject.mProperty_mFunctionName, mObject.mProperty_mFunctionAttributeList, mObject.mProperty_mFunctionFormalArgumentList, mObject.mProperty_mFunctionReturnTypeName, mObject.mProperty_mFunctionInstructionList, mObject.mProperty_mEndOfFunctionDeclaration COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_functionDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_functionDeclarationListAST * operand = (cCollectionElement_functionDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_functionDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST::GALGAS_functionDeclarationListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST::GALGAS_functionDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST GALGAS_functionDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionDeclarationListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionDeclarationListAST::setter_append (GALGAS_functionDeclarationListAST_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_functionDeclarationListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST GALGAS_functionDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_functionDeclarationListAST result = GALGAS_functionDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST GALGAS_functionDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_functionDeclarationListAST result = GALGAS_functionDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST GALGAS_functionDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_functionDeclarationListAST result = GALGAS_functionDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionDeclarationListAST::plusAssign_operation (const GALGAS_functionDeclarationListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_functionDeclarationListAST::cEnumerator_functionDeclarationListAST (const GALGAS_functionDeclarationListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST_2D_element cEnumerator_functionDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_functionDeclarationListAST * p = (const cCollectionElement_functionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode cEnumerator_functionDeclarationListAST::current_mMode (LOCATION_ARGS) const {
  const cCollectionElement_functionDeclarationListAST * p = (const cCollectionElement_functionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
  return p->mObject.mProperty_mMode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_functionDeclarationListAST::current_mPublicFunction (LOCATION_ARGS) const {
  const cCollectionElement_functionDeclarationListAST * p = (const cCollectionElement_functionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
  return p->mObject.mProperty_mPublicFunction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_functionDeclarationListAST::current_mFunctionName (LOCATION_ARGS) const {
  const cCollectionElement_functionDeclarationListAST * p = (const cCollectionElement_functionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
  return p->mObject.mProperty_mFunctionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cEnumerator_functionDeclarationListAST::current_mFunctionAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_functionDeclarationListAST * p = (const cCollectionElement_functionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
  return p->mObject.mProperty_mFunctionAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST cEnumerator_functionDeclarationListAST::current_mFunctionFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_functionDeclarationListAST * p = (const cCollectionElement_functionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
  return p->mObject.mProperty_mFunctionFormalArgumentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_functionDeclarationListAST::current_mFunctionReturnTypeName (LOCATION_ARGS) const {
  const cCollectionElement_functionDeclarationListAST * p = (const cCollectionElement_functionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
  return p->mObject.mProperty_mFunctionReturnTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST cEnumerator_functionDeclarationListAST::current_mFunctionInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_functionDeclarationListAST * p = (const cCollectionElement_functionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
  return p->mObject.mProperty_mFunctionInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_functionDeclarationListAST::current_mEndOfFunctionDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_functionDeclarationListAST * p = (const cCollectionElement_functionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionDeclarationListAST) ;
  return p->mObject.mProperty_mEndOfFunctionDeclaration ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @functionDeclarationListAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionDeclarationListAST ("functionDeclarationListAST",
                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_functionDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_functionDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionDeclarationListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Class for element of '@systemRoutineDeclarationListAST' list                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_systemRoutineDeclarationListAST : public cCollectionElement {
  public : GALGAS_systemRoutineDeclarationListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_systemRoutineDeclarationListAST (const GALGAS_lstring & in_mName,
                                                               const GALGAS_mode & in_mMode,
                                                               const GALGAS_bool & in_mPublic,
                                                               const GALGAS_lstringlist & in_mAttributeList,
                                                               const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                               const GALGAS_lstring & in_mReturnTypeName,
                                                               const GALGAS_instructionListAST & in_mInstructionList,
                                                               const GALGAS_location & in_mEndOfInstructionListLocation
                                                               COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_systemRoutineDeclarationListAST (const GALGAS_systemRoutineDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_systemRoutineDeclarationListAST::cCollectionElement_systemRoutineDeclarationListAST (const GALGAS_lstring & in_mName,
                                                                                                        const GALGAS_mode & in_mMode,
                                                                                                        const GALGAS_bool & in_mPublic,
                                                                                                        const GALGAS_lstringlist & in_mAttributeList,
                                                                                                        const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                                                        const GALGAS_lstring & in_mReturnTypeName,
                                                                                                        const GALGAS_instructionListAST & in_mInstructionList,
                                                                                                        const GALGAS_location & in_mEndOfInstructionListLocation
                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mMode, in_mPublic, in_mAttributeList, in_mFormalArgumentList, in_mReturnTypeName, in_mInstructionList, in_mEndOfInstructionListLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_systemRoutineDeclarationListAST::cCollectionElement_systemRoutineDeclarationListAST (const GALGAS_systemRoutineDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mName, inElement.mProperty_mMode, inElement.mProperty_mPublic, inElement.mProperty_mAttributeList, inElement.mProperty_mFormalArgumentList, inElement.mProperty_mReturnTypeName, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfInstructionListLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_systemRoutineDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_systemRoutineDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_systemRoutineDeclarationListAST (mObject.mProperty_mName, mObject.mProperty_mMode, mObject.mProperty_mPublic, mObject.mProperty_mAttributeList, mObject.mProperty_mFormalArgumentList, mObject.mProperty_mReturnTypeName, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfInstructionListLocation COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_systemRoutineDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMode" ":" ;
  mObject.mProperty_mMode.description (ioString, inIndentation) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_systemRoutineDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_systemRoutineDeclarationListAST * operand = (cCollectionElement_systemRoutineDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_systemRoutineDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_systemRoutineDeclarationListAST::GALGAS_systemRoutineDeclarationListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_systemRoutineDeclarationListAST::GALGAS_systemRoutineDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_systemRoutineDeclarationListAST GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_systemRoutineDeclarationListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_systemRoutineDeclarationListAST GALGAS_systemRoutineDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_mode & inOperand1,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_systemRoutineDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                        const GALGAS_lstring & in_mName,
                                                                        const GALGAS_mode & in_mMode,
                                                                        const GALGAS_bool & in_mPublic,
                                                                        const GALGAS_lstringlist & in_mAttributeList,
                                                                        const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                        const GALGAS_lstring & in_mReturnTypeName,
                                                                        const GALGAS_instructionListAST & in_mInstructionList,
                                                                        const GALGAS_location & in_mEndOfInstructionListLocation
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_systemRoutineDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_systemRoutineDeclarationListAST (in_mName,
                                                                     in_mMode,
                                                                     in_mPublic,
                                                                     in_mAttributeList,
                                                                     in_mFormalArgumentList,
                                                                     in_mReturnTypeName,
                                                                     in_mInstructionList,
                                                                     in_mEndOfInstructionListLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_systemRoutineDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_mode & inOperand1,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_systemRoutineDeclarationListAST::setter_append (GALGAS_systemRoutineDeclarationListAST_2D_element inElement,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_systemRoutineDeclarationListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_systemRoutineDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                   const GALGAS_mode inOperand1,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_systemRoutineDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                   GALGAS_mode & outOperand1,
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
      outOperand1 = p->mObject.mProperty_mMode ;
      outOperand2 = p->mObject.mProperty_mPublic ;
      outOperand3 = p->mObject.mProperty_mAttributeList ;
      outOperand4 = p->mObject.mProperty_mFormalArgumentList ;
      outOperand5 = p->mObject.mProperty_mReturnTypeName ;
      outOperand6 = p->mObject.mProperty_mInstructionList ;
      outOperand7 = p->mObject.mProperty_mEndOfInstructionListLocation ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_systemRoutineDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                              GALGAS_mode & outOperand1,
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
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mPublic ;
    outOperand3 = p->mObject.mProperty_mAttributeList ;
    outOperand4 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand5 = p->mObject.mProperty_mReturnTypeName ;
    outOperand6 = p->mObject.mProperty_mInstructionList ;
    outOperand7 = p->mObject.mProperty_mEndOfInstructionListLocation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_systemRoutineDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                             GALGAS_mode & outOperand1,
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
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mPublic ;
    outOperand3 = p->mObject.mProperty_mAttributeList ;
    outOperand4 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand5 = p->mObject.mProperty_mReturnTypeName ;
    outOperand6 = p->mObject.mProperty_mInstructionList ;
    outOperand7 = p->mObject.mProperty_mEndOfInstructionListLocation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_systemRoutineDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                           GALGAS_mode & outOperand1,
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
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mPublic ;
    outOperand3 = p->mObject.mProperty_mAttributeList ;
    outOperand4 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand5 = p->mObject.mProperty_mReturnTypeName ;
    outOperand6 = p->mObject.mProperty_mInstructionList ;
    outOperand7 = p->mObject.mProperty_mEndOfInstructionListLocation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_systemRoutineDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                          GALGAS_mode & outOperand1,
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
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mPublic ;
    outOperand3 = p->mObject.mProperty_mAttributeList ;
    outOperand4 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand5 = p->mObject.mProperty_mReturnTypeName ;
    outOperand6 = p->mObject.mProperty_mInstructionList ;
    outOperand7 = p->mObject.mProperty_mEndOfInstructionListLocation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_systemRoutineDeclarationListAST GALGAS_systemRoutineDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_systemRoutineDeclarationListAST result = GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_systemRoutineDeclarationListAST GALGAS_systemRoutineDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_systemRoutineDeclarationListAST result = GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_systemRoutineDeclarationListAST GALGAS_systemRoutineDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_systemRoutineDeclarationListAST result = GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_systemRoutineDeclarationListAST::plusAssign_operation (const GALGAS_systemRoutineDeclarationListAST inOperand,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode GALGAS_systemRoutineDeclarationListAST::getter_mModeAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_systemRoutineDeclarationListAST * p = (cCollectionElement_systemRoutineDeclarationListAST *) attributes.ptr () ;
  GALGAS_mode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
    result = p->mObject.mProperty_mMode ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_systemRoutineDeclarationListAST::cEnumerator_systemRoutineDeclarationListAST (const GALGAS_systemRoutineDeclarationListAST & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_systemRoutineDeclarationListAST_2D_element cEnumerator_systemRoutineDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_systemRoutineDeclarationListAST * p = (const cCollectionElement_systemRoutineDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_systemRoutineDeclarationListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_systemRoutineDeclarationListAST * p = (const cCollectionElement_systemRoutineDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
  return p->mObject.mProperty_mName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode cEnumerator_systemRoutineDeclarationListAST::current_mMode (LOCATION_ARGS) const {
  const cCollectionElement_systemRoutineDeclarationListAST * p = (const cCollectionElement_systemRoutineDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
  return p->mObject.mProperty_mMode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_systemRoutineDeclarationListAST::current_mPublic (LOCATION_ARGS) const {
  const cCollectionElement_systemRoutineDeclarationListAST * p = (const cCollectionElement_systemRoutineDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
  return p->mObject.mProperty_mPublic ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cEnumerator_systemRoutineDeclarationListAST::current_mAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_systemRoutineDeclarationListAST * p = (const cCollectionElement_systemRoutineDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
  return p->mObject.mProperty_mAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST cEnumerator_systemRoutineDeclarationListAST::current_mFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_systemRoutineDeclarationListAST * p = (const cCollectionElement_systemRoutineDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
  return p->mObject.mProperty_mFormalArgumentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_systemRoutineDeclarationListAST::current_mReturnTypeName (LOCATION_ARGS) const {
  const cCollectionElement_systemRoutineDeclarationListAST * p = (const cCollectionElement_systemRoutineDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
  return p->mObject.mProperty_mReturnTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST cEnumerator_systemRoutineDeclarationListAST::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_systemRoutineDeclarationListAST * p = (const cCollectionElement_systemRoutineDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
  return p->mObject.mProperty_mInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_systemRoutineDeclarationListAST::current_mEndOfInstructionListLocation (LOCATION_ARGS) const {
  const cCollectionElement_systemRoutineDeclarationListAST * p = (const cCollectionElement_systemRoutineDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_systemRoutineDeclarationListAST) ;
  return p->mObject.mProperty_mEndOfInstructionListLocation ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @systemRoutineDeclarationListAST type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_systemRoutineDeclarationListAST ("systemRoutineDeclarationListAST",
                                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_systemRoutineDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_systemRoutineDeclarationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_systemRoutineDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_systemRoutineDeclarationListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

