#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//----------------------------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//----------------------------------------------------------------------------------------------------------------------

#include "strings/unicode_character_cpp.h"
#include "galgas2/scanner_actions.h"
#include "galgas2/cLexiqueIntrospection.h"

//----------------------------------------------------------------------------------------------------------------------

cTokenFor_omnibus_5F_lexique::cTokenFor_omnibus_5F_lexique (void) :
mLexicalAttribute_bigInteger (),
mLexicalAttribute_tokenString () {
}

//----------------------------------------------------------------------------------------------------------------------

C_Lexique_omnibus_5F_lexique::C_Lexique_omnibus_5F_lexique (C_Compiler * inCallerCompiler,
                                                            const C_String & inSourceFileName
                                                            COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

C_Lexique_omnibus_5F_lexique::C_Lexique_omnibus_5F_lexique (C_Compiler * inCallerCompiler,
                                                            const C_String & inSourceString,
                                                            const C_String & inStringForError
                                                            COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//----------------------------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_omnibus_5F_lexique_attributeError = "in an attribute name, a letter, a digit or a dot should follow the '@' character" ;

static const char * gLexicalMessage_omnibus_5F_lexique_binaryDigitError = "0b should be followed by a binary digit" ;

static const char * gLexicalMessage_omnibus_5F_lexique_groupError = "in a register group name, a letter or a digit should follow the '©' character" ;

static const char * gLexicalMessage_omnibus_5F_lexique_hexDigitError = "0x should be followed by a hexadecimal digit" ;

static const char * gLexicalMessage_omnibus_5F_lexique_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_omnibus_5F_lexique_internalError = "internal error" ;

static const char * gLexicalMessage_omnibus_5F_lexique_typeError = "in a type name, a letter or a digit should follow the '$' character" ;

//----------------------------------------------------------------------------------------------------------------------
//          Syntax error messages, for every terminal symbol                                     
//----------------------------------------------------------------------------------------------------------------------

//--- Syntax error message for terminal '$identifier$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_identifier = "an identifier" ;

//--- Syntax error message for terminal '$@attribute$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__40_attribute = "an attribute @..." ;

//--- Syntax error message for terminal '$integer$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_integer = "a literal integer" ;

//--- Syntax error message for terminal '$"string"$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__22_string_22_ = "a literal character string \"...\"" ;

//--- Syntax error message for terminal '$comment$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_comment = "a comment" ;

//--- Syntax error message for terminal '$commentMark$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_commentMark = "a comment" ;

//--- Syntax error message for terminal '$?selector:$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__3F_selector_3A_ = "the '\?' or '\?selector:' delimitor" ;

//--- Syntax error message for terminal '$?!selector:$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__3F__21_selector_3A_ = "the '\?!' or '\?!selector:' delimitor" ;

//--- Syntax error message for terminal '$!selector:$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__21_selector_3A_ = "the '!' or '!selector:' delimitor" ;

//--- Syntax error message for terminal '$!?selector:$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__21__3F_selector_3A_ = "the '!\?' or '!\?selector:' delimitor" ;

//--- Syntax error message for terminal '$$type$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__24_type = "a type $..." ;

//--- Syntax error message for terminal '$©group$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__A9_group = "a control register group ©..." ;

//--- Syntax error message for terminal '$addressof$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_addressof = "the 'addressof' keyword" ;

//--- Syntax error message for terminal '$assert$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_assert = "the 'assert' keyword" ;

//--- Syntax error message for terminal '$boot$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_boot = "the 'boot' keyword" ;

//--- Syntax error message for terminal '$case$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_case = "the 'case' keyword" ;

//--- Syntax error message for terminal '$convert$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_convert = "the 'convert' keyword" ;

//--- Syntax error message for terminal '$ctAssert$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_ctAssert = "the 'ctAssert' keyword" ;

//--- Syntax error message for terminal '$compiletime$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_compiletime = "the 'compiletime' keyword" ;

//--- Syntax error message for terminal '$driver$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_driver = "the 'driver' keyword" ;

//--- Syntax error message for terminal '$else$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_else = "the 'else' keyword" ;

//--- Syntax error message for terminal '$enum$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_enum = "the 'enum' keyword" ;

//--- Syntax error message for terminal '$event$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_event = "the 'event' keyword" ;

//--- Syntax error message for terminal '$extend$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_extend = "the 'extend' keyword" ;

//--- Syntax error message for terminal '$extern$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_extern = "the 'extern' keyword" ;

//--- Syntax error message for terminal '$for$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_for = "the 'for' keyword" ;

//--- Syntax error message for terminal '$func$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_func = "the 'func' keyword" ;

//--- Syntax error message for terminal '$guard$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_guard = "the 'guard' keyword" ;

//--- Syntax error message for terminal '$if$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_if = "the 'if' keyword" ;

//--- Syntax error message for terminal '$import$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_import = "the 'import' keyword" ;

//--- Syntax error message for terminal '$in$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_in = "the 'in' keyword" ;

//--- Syntax error message for terminal '$interrupt$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_interrupt = "the 'interrupt' keyword" ;

//--- Syntax error message for terminal '$let$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_let = "the 'let' keyword" ;

//--- Syntax error message for terminal '$llvm$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_llvm = "the 'llvm' keyword" ;

//--- Syntax error message for terminal '$no$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_no = "the 'no' keyword" ;

//--- Syntax error message for terminal '$not$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_not = "the 'not' keyword" ;

//--- Syntax error message for terminal '$opaque$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_opaque = "the 'opaque' keyword" ;

//--- Syntax error message for terminal '$option$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_option = "the 'option' keyword" ;

//--- Syntax error message for terminal '$panic$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_panic = "the 'panic' keyword" ;

//--- Syntax error message for terminal '$primitive$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_primitive = "the 'primitive' keyword" ;

//--- Syntax error message for terminal '$public$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_public = "the 'public' keyword" ;

//--- Syntax error message for terminal '$registers$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_registers = "the 'registers' keyword" ;

//--- Syntax error message for terminal '$required$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_required = "the 'required' keyword" ;

//--- Syntax error message for terminal '$safe$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_safe = "the 'safe' keyword" ;

//--- Syntax error message for terminal '$section$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_section = "the 'section' keyword" ;

//--- Syntax error message for terminal '$self$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_self = "the 'self' keyword" ;

//--- Syntax error message for terminal '$service$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_service = "the 'service' keyword" ;

//--- Syntax error message for terminal '$sizeof$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_sizeof = "the 'sizeof' keyword" ;

//--- Syntax error message for terminal '$startup$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_startup = "the 'startup' keyword" ;

//--- Syntax error message for terminal '$struct$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_struct = "the 'struct' keyword" ;

//--- Syntax error message for terminal '$staticArray$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_staticArray = "the 'staticArray' keyword" ;

//--- Syntax error message for terminal '$switch$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_switch = "the 'switch' keyword" ;

//--- Syntax error message for terminal '$sync$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_sync = "the 'sync' keyword" ;

//--- Syntax error message for terminal '$target$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_target = "the 'target' keyword" ;

//--- Syntax error message for terminal '$task$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_task = "the 'task' keyword" ;

//--- Syntax error message for terminal '$truncate$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_truncate = "the 'truncate' keyword" ;

//--- Syntax error message for terminal '$typealias$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_typealias = "the 'typealias' keyword" ;

//--- Syntax error message for terminal '$var$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_var = "the 'var' keyword" ;

//--- Syntax error message for terminal '$until$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_until = "the 'until' keyword" ;

//--- Syntax error message for terminal '$user$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_user = "the 'user' keyword" ;

//--- Syntax error message for terminal '$where$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_where = "the 'where' keyword" ;

//--- Syntax error message for terminal '$when$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_when = "the 'when' keyword" ;

//--- Syntax error message for terminal '$while$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_while = "the 'while' keyword" ;

//--- Syntax error message for terminal '$yes$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique_yes = "the 'yes' keyword" ;

//--- Syntax error message for terminal '$:$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__3A_ = "the ':' delimitor" ;

//--- Syntax error message for terminal '$.$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__2E_ = "the '.' delimitor" ;

//--- Syntax error message for terminal '$,$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__2C_ = "the ',' delimitor" ;

//--- Syntax error message for terminal '${$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__7B_ = "the '{' delimitor" ;

//--- Syntax error message for terminal '$}$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__7D_ = "the '}' delimitor" ;

//--- Syntax error message for terminal '$=$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__3D_ = "the '=' delimitor" ;

//--- Syntax error message for terminal '$($' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__28_ = "the '(' delimitor" ;

//--- Syntax error message for terminal '$)$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__29_ = "the ')' delimitor" ;

//--- Syntax error message for terminal '$_$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__5F_ = "the '_' delimitor" ;

//--- Syntax error message for terminal '$==$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__3D__3D_ = "the '==' delimitor" ;

//--- Syntax error message for terminal '$≠$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__2260_ = "the '≠' delimitor" ;

//--- Syntax error message for terminal '$<$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__3C_ = "the '<' delimitor" ;

//--- Syntax error message for terminal '$≤$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__2264_ = "the '≤' delimitor" ;

//--- Syntax error message for terminal '$>$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__3E_ = "the '>' delimitor" ;

//--- Syntax error message for terminal '$≥$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__2265_ = "the '≥' delimitor" ;

//--- Syntax error message for terminal '$[$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__5B_ = "the '[' delimitor" ;

//--- Syntax error message for terminal '$]$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__5D_ = "the ']' delimitor" ;

//--- Syntax error message for terminal '$]!$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__5D__21_ = "the ']!' delimitor" ;

//--- Syntax error message for terminal '$<<$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__3C__3C_ = "the '<<' delimitor" ;

//--- Syntax error message for terminal '$>>$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__3E__3E_ = "the '>>' delimitor" ;

//--- Syntax error message for terminal '$~$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__7E_ = "the '~' delimitor" ;

//--- Syntax error message for terminal '$||$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__7C__7C_ = "the '||' delimitor" ;

//--- Syntax error message for terminal '$&&$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__26__26_ = "the '&&' delimitor" ;

//--- Syntax error message for terminal '$->$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__2D__3E_ = "the '->' delimitor" ;

//--- Syntax error message for terminal '$..<$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__2E__2E__3C_ = "the '..<' delimitor" ;

//--- Syntax error message for terminal '$...$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__2E__2E__2E_ = "the '...' delimitor" ;

//--- Syntax error message for terminal '$|$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__7C_ = "the '|' delimitor" ;

//--- Syntax error message for terminal '$|=$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__7C__3D_ = "the '|=' delimitor" ;

//--- Syntax error message for terminal '$&$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__26_ = "the '&' delimitor" ;

//--- Syntax error message for terminal '$&=$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__26__3D_ = "the '&=' delimitor" ;

//--- Syntax error message for terminal '$^$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__5E_ = "the '^' delimitor" ;

//--- Syntax error message for terminal '$^=$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__5E__3D_ = "the '^=' delimitor" ;

//--- Syntax error message for terminal '$+$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__2B_ = "the '+' delimitor" ;

//--- Syntax error message for terminal '$+%$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__2B__25_ = "the '+%' delimitor" ;

//--- Syntax error message for terminal '$+=$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__2B__3D_ = "the '+=' delimitor" ;

//--- Syntax error message for terminal '$+%=$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__2B__25__3D_ = "the '+%=' delimitor" ;

//--- Syntax error message for terminal '$-$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__2D_ = "the '-' delimitor" ;

//--- Syntax error message for terminal '$-%$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__2D__25_ = "the '-%' delimitor" ;

//--- Syntax error message for terminal '$-=$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__2D__3D_ = "the '-=' delimitor" ;

//--- Syntax error message for terminal '$-%=$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__2D__25__3D_ = "the '-%=' delimitor" ;

//--- Syntax error message for terminal '$*$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__2A_ = "the '*' delimitor" ;

//--- Syntax error message for terminal '$*%$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__2A__25_ = "the '*%' delimitor" ;

//--- Syntax error message for terminal '$*=$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__2A__3D_ = "the '*=' delimitor" ;

//--- Syntax error message for terminal '$*%=$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__2A__25__3D_ = "the '*%=' delimitor" ;

//--- Syntax error message for terminal '$/$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__2F_ = "the '/' delimitor" ;

//--- Syntax error message for terminal '$!/$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__21__2F_ = "the '!/' delimitor" ;

//--- Syntax error message for terminal '$/=$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__2F__3D_ = "the '/=' delimitor" ;

//--- Syntax error message for terminal '$!/=$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__21__2F__3D_ = "the '!/=' delimitor" ;

//--- Syntax error message for terminal '$%$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__25_ = "the '%' delimitor" ;

//--- Syntax error message for terminal '$!%$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__21__25_ = "the '!%' delimitor" ;

//--- Syntax error message for terminal '$%=$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__25__3D_ = "the '%=' delimitor" ;

//--- Syntax error message for terminal '$!%=$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__21__25__3D_ = "the '!%=' delimitor" ;

//--- Syntax error message for terminal '$<<=$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__3C__3C__3D_ = "the '<<=' delimitor" ;

//--- Syntax error message for terminal '$>>=$' :
static const char * gSyntaxErrorMessage_omnibus_5F_lexique__3E__3E__3D_ = "the '>>=' delimitor" ;

//----------------------------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_omnibus_5F_lexique::getMessageForTerminal (const int16_t inTerminalIndex) const {
  C_String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 119)) {
    static const char * syntaxErrorMessageArray [119] = {kEndOfSourceLexicalErrorMessage,
        gSyntaxErrorMessage_omnibus_5F_lexique_identifier,
        gSyntaxErrorMessage_omnibus_5F_lexique__40_attribute,
        gSyntaxErrorMessage_omnibus_5F_lexique_integer,
        gSyntaxErrorMessage_omnibus_5F_lexique__22_string_22_,
        gSyntaxErrorMessage_omnibus_5F_lexique_comment,
        gSyntaxErrorMessage_omnibus_5F_lexique_commentMark,
        gSyntaxErrorMessage_omnibus_5F_lexique__3F_selector_3A_,
        gSyntaxErrorMessage_omnibus_5F_lexique__3F__21_selector_3A_,
        gSyntaxErrorMessage_omnibus_5F_lexique__21_selector_3A_,
        gSyntaxErrorMessage_omnibus_5F_lexique__21__3F_selector_3A_,
        gSyntaxErrorMessage_omnibus_5F_lexique__24_type,
        gSyntaxErrorMessage_omnibus_5F_lexique__A9_group,
        gSyntaxErrorMessage_omnibus_5F_lexique_addressof,
        gSyntaxErrorMessage_omnibus_5F_lexique_assert,
        gSyntaxErrorMessage_omnibus_5F_lexique_boot,
        gSyntaxErrorMessage_omnibus_5F_lexique_case,
        gSyntaxErrorMessage_omnibus_5F_lexique_convert,
        gSyntaxErrorMessage_omnibus_5F_lexique_ctAssert,
        gSyntaxErrorMessage_omnibus_5F_lexique_compiletime,
        gSyntaxErrorMessage_omnibus_5F_lexique_driver,
        gSyntaxErrorMessage_omnibus_5F_lexique_else,
        gSyntaxErrorMessage_omnibus_5F_lexique_enum,
        gSyntaxErrorMessage_omnibus_5F_lexique_event,
        gSyntaxErrorMessage_omnibus_5F_lexique_extend,
        gSyntaxErrorMessage_omnibus_5F_lexique_extern,
        gSyntaxErrorMessage_omnibus_5F_lexique_for,
        gSyntaxErrorMessage_omnibus_5F_lexique_func,
        gSyntaxErrorMessage_omnibus_5F_lexique_guard,
        gSyntaxErrorMessage_omnibus_5F_lexique_if,
        gSyntaxErrorMessage_omnibus_5F_lexique_import,
        gSyntaxErrorMessage_omnibus_5F_lexique_in,
        gSyntaxErrorMessage_omnibus_5F_lexique_interrupt,
        gSyntaxErrorMessage_omnibus_5F_lexique_let,
        gSyntaxErrorMessage_omnibus_5F_lexique_llvm,
        gSyntaxErrorMessage_omnibus_5F_lexique_no,
        gSyntaxErrorMessage_omnibus_5F_lexique_not,
        gSyntaxErrorMessage_omnibus_5F_lexique_opaque,
        gSyntaxErrorMessage_omnibus_5F_lexique_option,
        gSyntaxErrorMessage_omnibus_5F_lexique_panic,
        gSyntaxErrorMessage_omnibus_5F_lexique_primitive,
        gSyntaxErrorMessage_omnibus_5F_lexique_public,
        gSyntaxErrorMessage_omnibus_5F_lexique_registers,
        gSyntaxErrorMessage_omnibus_5F_lexique_required,
        gSyntaxErrorMessage_omnibus_5F_lexique_safe,
        gSyntaxErrorMessage_omnibus_5F_lexique_section,
        gSyntaxErrorMessage_omnibus_5F_lexique_self,
        gSyntaxErrorMessage_omnibus_5F_lexique_service,
        gSyntaxErrorMessage_omnibus_5F_lexique_sizeof,
        gSyntaxErrorMessage_omnibus_5F_lexique_startup,
        gSyntaxErrorMessage_omnibus_5F_lexique_struct,
        gSyntaxErrorMessage_omnibus_5F_lexique_staticArray,
        gSyntaxErrorMessage_omnibus_5F_lexique_switch,
        gSyntaxErrorMessage_omnibus_5F_lexique_sync,
        gSyntaxErrorMessage_omnibus_5F_lexique_target,
        gSyntaxErrorMessage_omnibus_5F_lexique_task,
        gSyntaxErrorMessage_omnibus_5F_lexique_truncate,
        gSyntaxErrorMessage_omnibus_5F_lexique_typealias,
        gSyntaxErrorMessage_omnibus_5F_lexique_var,
        gSyntaxErrorMessage_omnibus_5F_lexique_until,
        gSyntaxErrorMessage_omnibus_5F_lexique_user,
        gSyntaxErrorMessage_omnibus_5F_lexique_where,
        gSyntaxErrorMessage_omnibus_5F_lexique_when,
        gSyntaxErrorMessage_omnibus_5F_lexique_while,
        gSyntaxErrorMessage_omnibus_5F_lexique_yes,
        gSyntaxErrorMessage_omnibus_5F_lexique__3A_,
        gSyntaxErrorMessage_omnibus_5F_lexique__2E_,
        gSyntaxErrorMessage_omnibus_5F_lexique__2C_,
        gSyntaxErrorMessage_omnibus_5F_lexique__7B_,
        gSyntaxErrorMessage_omnibus_5F_lexique__7D_,
        gSyntaxErrorMessage_omnibus_5F_lexique__3D_,
        gSyntaxErrorMessage_omnibus_5F_lexique__28_,
        gSyntaxErrorMessage_omnibus_5F_lexique__29_,
        gSyntaxErrorMessage_omnibus_5F_lexique__5F_,
        gSyntaxErrorMessage_omnibus_5F_lexique__3D__3D_,
        gSyntaxErrorMessage_omnibus_5F_lexique__2260_,
        gSyntaxErrorMessage_omnibus_5F_lexique__3C_,
        gSyntaxErrorMessage_omnibus_5F_lexique__2264_,
        gSyntaxErrorMessage_omnibus_5F_lexique__3E_,
        gSyntaxErrorMessage_omnibus_5F_lexique__2265_,
        gSyntaxErrorMessage_omnibus_5F_lexique__5B_,
        gSyntaxErrorMessage_omnibus_5F_lexique__5D_,
        gSyntaxErrorMessage_omnibus_5F_lexique__5D__21_,
        gSyntaxErrorMessage_omnibus_5F_lexique__3C__3C_,
        gSyntaxErrorMessage_omnibus_5F_lexique__3E__3E_,
        gSyntaxErrorMessage_omnibus_5F_lexique__7E_,
        gSyntaxErrorMessage_omnibus_5F_lexique__7C__7C_,
        gSyntaxErrorMessage_omnibus_5F_lexique__26__26_,
        gSyntaxErrorMessage_omnibus_5F_lexique__2D__3E_,
        gSyntaxErrorMessage_omnibus_5F_lexique__2E__2E__3C_,
        gSyntaxErrorMessage_omnibus_5F_lexique__2E__2E__2E_,
        gSyntaxErrorMessage_omnibus_5F_lexique__7C_,
        gSyntaxErrorMessage_omnibus_5F_lexique__7C__3D_,
        gSyntaxErrorMessage_omnibus_5F_lexique__26_,
        gSyntaxErrorMessage_omnibus_5F_lexique__26__3D_,
        gSyntaxErrorMessage_omnibus_5F_lexique__5E_,
        gSyntaxErrorMessage_omnibus_5F_lexique__5E__3D_,
        gSyntaxErrorMessage_omnibus_5F_lexique__2B_,
        gSyntaxErrorMessage_omnibus_5F_lexique__2B__25_,
        gSyntaxErrorMessage_omnibus_5F_lexique__2B__3D_,
        gSyntaxErrorMessage_omnibus_5F_lexique__2B__25__3D_,
        gSyntaxErrorMessage_omnibus_5F_lexique__2D_,
        gSyntaxErrorMessage_omnibus_5F_lexique__2D__25_,
        gSyntaxErrorMessage_omnibus_5F_lexique__2D__3D_,
        gSyntaxErrorMessage_omnibus_5F_lexique__2D__25__3D_,
        gSyntaxErrorMessage_omnibus_5F_lexique__2A_,
        gSyntaxErrorMessage_omnibus_5F_lexique__2A__25_,
        gSyntaxErrorMessage_omnibus_5F_lexique__2A__3D_,
        gSyntaxErrorMessage_omnibus_5F_lexique__2A__25__3D_,
        gSyntaxErrorMessage_omnibus_5F_lexique__2F_,
        gSyntaxErrorMessage_omnibus_5F_lexique__21__2F_,
        gSyntaxErrorMessage_omnibus_5F_lexique__2F__3D_,
        gSyntaxErrorMessage_omnibus_5F_lexique__21__2F__3D_,
        gSyntaxErrorMessage_omnibus_5F_lexique__25_,
        gSyntaxErrorMessage_omnibus_5F_lexique__21__25_,
        gSyntaxErrorMessage_omnibus_5F_lexique__25__3D_,
        gSyntaxErrorMessage_omnibus_5F_lexique__21__25__3D_,
        gSyntaxErrorMessage_omnibus_5F_lexique__3C__3C__3D_,
        gSyntaxErrorMessage_omnibus_5F_lexique__3E__3E__3D_
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//----------------------------------------------------------------------------------------------------------------------

//--- Unicode string for '$_21__25_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__21__25_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('%'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_21__25__3D_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__21__25__3D_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('%'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_21__2F_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__21__2F_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('/'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_21__2F__3D_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__21__2F__3D_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('/'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_25_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__25_ [] = {
  TO_UNICODE ('%'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_25__3D_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__25__3D_ [] = {
  TO_UNICODE ('%'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__26_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__26_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__26__26_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('&'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__3D_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__26__3D_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_28_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__28_ [] = {
  TO_UNICODE ('('),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_29_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__29_ [] = {
  TO_UNICODE (')'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2A_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__2A_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2A__25_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__2A__25_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE ('%'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2A__25__3D_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__2A__25__3D_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE ('%'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2A__3D_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__2A__3D_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__2B_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B__25_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__2B__25_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE ('%'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B__25__3D_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__2B__25__3D_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE ('%'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B__3D_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__2B__3D_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2C_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__2C_ [] = {
  TO_UNICODE (','),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__2D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__25_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__2D__25_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('%'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__25__3D_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__2D__25__3D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('%'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__3D_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__2D__3D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__3E_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__2D__3E_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__2E_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E__2E__2E_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__2E__2E__2E_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E__2E__3C_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__2E__2E__3C_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
  TO_UNICODE ('<'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2F_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__2F_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2F__2F_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__2F__2F_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE ('/'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2F__2F__21_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__2F__2F__21_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE ('/'),
  TO_UNICODE ('!'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2F__3D_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__2F__3D_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_30_b$'
static const utf32 kUnicodeString_omnibus_5F_lexique__30_b [] = {
  TO_UNICODE ('0'),
  TO_UNICODE ('b'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_30_x$'
static const utf32 kUnicodeString_omnibus_5F_lexique__30_x [] = {
  TO_UNICODE ('0'),
  TO_UNICODE ('x'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__3A_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3C_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__3C_ [] = {
  TO_UNICODE ('<'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3C__3C_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__3C__3C_ [] = {
  TO_UNICODE ('<'),
  TO_UNICODE ('<'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3C__3C__3D_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__3C__3C__3D_ [] = {
  TO_UNICODE ('<'),
  TO_UNICODE ('<'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D__3D_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__3D__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__3E_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E__3E_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__3E__3E_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E__3E__3D_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__3E__3E__3D_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE ('>'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5B_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__5B_ [] = {
  TO_UNICODE ('['),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C__22_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__5C__22_ [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('\"'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5D_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__5D_ [] = {
  TO_UNICODE (']'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5D__21_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__5D__21_ [] = {
  TO_UNICODE (']'),
  TO_UNICODE ('!'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5E_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__5E_ [] = {
  TO_UNICODE ('^'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5E__3D_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__5E__3D_ [] = {
  TO_UNICODE ('^'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5F_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__5F_ [] = {
  TO_UNICODE ('_'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$addressof$'
static const utf32 kUnicodeString_omnibus_5F_lexique_addressof [] = {
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

//--- Unicode string for '$assert$'
static const utf32 kUnicodeString_omnibus_5F_lexique_assert [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$boot$'
static const utf32 kUnicodeString_omnibus_5F_lexique_boot [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$case$'
static const utf32 kUnicodeString_omnibus_5F_lexique_case [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$compiletime$'
static const utf32 kUnicodeString_omnibus_5F_lexique_compiletime [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$convert$'
static const utf32 kUnicodeString_omnibus_5F_lexique_convert [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$ctAssert$'
static const utf32 kUnicodeString_omnibus_5F_lexique_ctAssert [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('A'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$driver$'
static const utf32 kUnicodeString_omnibus_5F_lexique_driver [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$else$'
static const utf32 kUnicodeString_omnibus_5F_lexique_else [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$enum$'
static const utf32 kUnicodeString_omnibus_5F_lexique_enum [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$event$'
static const utf32 kUnicodeString_omnibus_5F_lexique_event [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$extend$'
static const utf32 kUnicodeString_omnibus_5F_lexique_extend [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$extern$'
static const utf32 kUnicodeString_omnibus_5F_lexique_extern [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$for$'
static const utf32 kUnicodeString_omnibus_5F_lexique_for [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$func$'
static const utf32 kUnicodeString_omnibus_5F_lexique_func [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$guard$'
static const utf32 kUnicodeString_omnibus_5F_lexique_guard [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('u'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$if$'
static const utf32 kUnicodeString_omnibus_5F_lexique_if [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$import$'
static const utf32 kUnicodeString_omnibus_5F_lexique_import [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$in$'
static const utf32 kUnicodeString_omnibus_5F_lexique_in [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$interrupt$'
static const utf32 kUnicodeString_omnibus_5F_lexique_interrupt [] = {
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
static const utf32 kUnicodeString_omnibus_5F_lexique_let [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$llvm$'
static const utf32 kUnicodeString_omnibus_5F_lexique_llvm [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE ('v'),
  TO_UNICODE ('m'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$no$'
static const utf32 kUnicodeString_omnibus_5F_lexique_no [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$not$'
static const utf32 kUnicodeString_omnibus_5F_lexique_not [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$opaque$'
static const utf32 kUnicodeString_omnibus_5F_lexique_opaque [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE ('a'),
  TO_UNICODE ('q'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$option$'
static const utf32 kUnicodeString_omnibus_5F_lexique_option [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$panic$'
static const utf32 kUnicodeString_omnibus_5F_lexique_panic [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$primitive$'
static const utf32 kUnicodeString_omnibus_5F_lexique_primitive [] = {
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
static const utf32 kUnicodeString_omnibus_5F_lexique_public [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('u'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$registers$'
static const utf32 kUnicodeString_omnibus_5F_lexique_registers [] = {
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
static const utf32 kUnicodeString_omnibus_5F_lexique_required [] = {
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
static const utf32 kUnicodeString_omnibus_5F_lexique_safe [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('a'),
  TO_UNICODE ('f'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$section$'
static const utf32 kUnicodeString_omnibus_5F_lexique_section [] = {
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
static const utf32 kUnicodeString_omnibus_5F_lexique_self [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$service$'
static const utf32 kUnicodeString_omnibus_5F_lexique_service [] = {
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
static const utf32 kUnicodeString_omnibus_5F_lexique_sizeof [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('z'),
  TO_UNICODE ('e'),
  TO_UNICODE ('o'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$startup$'
static const utf32 kUnicodeString_omnibus_5F_lexique_startup [] = {
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
static const utf32 kUnicodeString_omnibus_5F_lexique_staticArray [] = {
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
static const utf32 kUnicodeString_omnibus_5F_lexique_struct [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$switch$'
static const utf32 kUnicodeString_omnibus_5F_lexique_switch [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$sync$'
static const utf32 kUnicodeString_omnibus_5F_lexique_sync [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('y'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$target$'
static const utf32 kUnicodeString_omnibus_5F_lexique_target [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$task$'
static const utf32 kUnicodeString_omnibus_5F_lexique_task [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('k'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$truncate$'
static const utf32 kUnicodeString_omnibus_5F_lexique_truncate [] = {
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
static const utf32 kUnicodeString_omnibus_5F_lexique_typealias [] = {
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

//--- Unicode string for '$until$'
static const utf32 kUnicodeString_omnibus_5F_lexique_until [] = {
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$user$'
static const utf32 kUnicodeString_omnibus_5F_lexique_user [] = {
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$var$'
static const utf32 kUnicodeString_omnibus_5F_lexique_var [] = {
  TO_UNICODE ('v'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$when$'
static const utf32 kUnicodeString_omnibus_5F_lexique_when [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$where$'
static const utf32 kUnicodeString_omnibus_5F_lexique_where [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$while$'
static const utf32 kUnicodeString_omnibus_5F_lexique_while [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$yes$'
static const utf32 kUnicodeString_omnibus_5F_lexique_yes [] = {
  TO_UNICODE ('y'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7B_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__7B_ [] = {
  TO_UNICODE ('{'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7C_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__7C_ [] = {
  TO_UNICODE ('|'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7C__3D_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__7C__3D_ [] = {
  TO_UNICODE ('|'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7C__7C_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__7C__7C_ [] = {
  TO_UNICODE ('|'),
  TO_UNICODE ('|'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7D_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__7D_ [] = {
  TO_UNICODE ('}'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7E_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__7E_ [] = {
  TO_UNICODE ('~'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2260_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__2260_ [] = {
  TO_UNICODE (8800),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2264_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__2264_ [] = {
  TO_UNICODE (8804),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2265_$'
static const utf32 kUnicodeString_omnibus_5F_lexique__2265_ [] = {
  TO_UNICODE (8805),
  TO_UNICODE (0)
} ;

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'delimitorsList'      
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_omnibus_5F_lexique_delimitorsList = 54 ;

static const C_unicode_lexique_table_entry ktable_for_omnibus_5F_lexique_delimitorsList [ktable_size_omnibus_5F_lexique_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__25_, 1, C_Lexique_omnibus_5F_lexique::kToken__25_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__26_, 1, C_Lexique_omnibus_5F_lexique::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__28_, 1, C_Lexique_omnibus_5F_lexique::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__29_, 1, C_Lexique_omnibus_5F_lexique::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2A_, 1, C_Lexique_omnibus_5F_lexique::kToken__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2B_, 1, C_Lexique_omnibus_5F_lexique::kToken__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2C_, 1, C_Lexique_omnibus_5F_lexique::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2D_, 1, C_Lexique_omnibus_5F_lexique::kToken__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2E_, 1, C_Lexique_omnibus_5F_lexique::kToken__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2F_, 1, C_Lexique_omnibus_5F_lexique::kToken__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3A_, 1, C_Lexique_omnibus_5F_lexique::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3C_, 1, C_Lexique_omnibus_5F_lexique::kToken__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3D_, 1, C_Lexique_omnibus_5F_lexique::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3E_, 1, C_Lexique_omnibus_5F_lexique::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__5B_, 1, C_Lexique_omnibus_5F_lexique::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__5D_, 1, C_Lexique_omnibus_5F_lexique::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__5E_, 1, C_Lexique_omnibus_5F_lexique::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__5F_, 1, C_Lexique_omnibus_5F_lexique::kToken__5F_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__7B_, 1, C_Lexique_omnibus_5F_lexique::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__7C_, 1, C_Lexique_omnibus_5F_lexique::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__7D_, 1, C_Lexique_omnibus_5F_lexique::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__7E_, 1, C_Lexique_omnibus_5F_lexique::kToken__7E_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2260_, 1, C_Lexique_omnibus_5F_lexique::kToken__2260_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2264_, 1, C_Lexique_omnibus_5F_lexique::kToken__2264_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2265_, 1, C_Lexique_omnibus_5F_lexique::kToken__2265_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__21__25_, 2, C_Lexique_omnibus_5F_lexique::kToken__21__25_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__21__2F_, 2, C_Lexique_omnibus_5F_lexique::kToken__21__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__25__3D_, 2, C_Lexique_omnibus_5F_lexique::kToken__25__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__26__26_, 2, C_Lexique_omnibus_5F_lexique::kToken__26__26_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__26__3D_, 2, C_Lexique_omnibus_5F_lexique::kToken__26__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2A__25_, 2, C_Lexique_omnibus_5F_lexique::kToken__2A__25_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2A__3D_, 2, C_Lexique_omnibus_5F_lexique::kToken__2A__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2B__25_, 2, C_Lexique_omnibus_5F_lexique::kToken__2B__25_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2B__3D_, 2, C_Lexique_omnibus_5F_lexique::kToken__2B__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2D__25_, 2, C_Lexique_omnibus_5F_lexique::kToken__2D__25_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2D__3D_, 2, C_Lexique_omnibus_5F_lexique::kToken__2D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2D__3E_, 2, C_Lexique_omnibus_5F_lexique::kToken__2D__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2F__3D_, 2, C_Lexique_omnibus_5F_lexique::kToken__2F__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3C__3C_, 2, C_Lexique_omnibus_5F_lexique::kToken__3C__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3D__3D_, 2, C_Lexique_omnibus_5F_lexique::kToken__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3E__3E_, 2, C_Lexique_omnibus_5F_lexique::kToken__3E__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__5D__21_, 2, C_Lexique_omnibus_5F_lexique::kToken__5D__21_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__5E__3D_, 2, C_Lexique_omnibus_5F_lexique::kToken__5E__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__7C__3D_, 2, C_Lexique_omnibus_5F_lexique::kToken__7C__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__7C__7C_, 2, C_Lexique_omnibus_5F_lexique::kToken__7C__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__21__25__3D_, 3, C_Lexique_omnibus_5F_lexique::kToken__21__25__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__21__2F__3D_, 3, C_Lexique_omnibus_5F_lexique::kToken__21__2F__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2A__25__3D_, 3, C_Lexique_omnibus_5F_lexique::kToken__2A__25__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2B__25__3D_, 3, C_Lexique_omnibus_5F_lexique::kToken__2B__25__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2D__25__3D_, 3, C_Lexique_omnibus_5F_lexique::kToken__2D__25__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2E__2E__2E_, 3, C_Lexique_omnibus_5F_lexique::kToken__2E__2E__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2E__2E__3C_, 3, C_Lexique_omnibus_5F_lexique::kToken__2E__2E__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3C__3C__3D_, 3, C_Lexique_omnibus_5F_lexique::kToken__3C__3C__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3E__3E__3D_, 3, C_Lexique_omnibus_5F_lexique::kToken__3E__3E__3D_)
} ;

int16_t C_Lexique_omnibus_5F_lexique::search_into_delimitorsList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_omnibus_5F_lexique_delimitorsList, ktable_size_omnibus_5F_lexique_delimitorsList) ;
}

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'keyWordList'      
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_omnibus_5F_lexique_keyWordList = 52 ;

static const C_unicode_lexique_table_entry ktable_for_omnibus_5F_lexique_keyWordList [ktable_size_omnibus_5F_lexique_keyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_if, 2, C_Lexique_omnibus_5F_lexique::kToken_if),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_in, 2, C_Lexique_omnibus_5F_lexique::kToken_in),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_no, 2, C_Lexique_omnibus_5F_lexique::kToken_no),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_for, 3, C_Lexique_omnibus_5F_lexique::kToken_for),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_let, 3, C_Lexique_omnibus_5F_lexique::kToken_let),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_not, 3, C_Lexique_omnibus_5F_lexique::kToken_not),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_var, 3, C_Lexique_omnibus_5F_lexique::kToken_var),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_yes, 3, C_Lexique_omnibus_5F_lexique::kToken_yes),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_boot, 4, C_Lexique_omnibus_5F_lexique::kToken_boot),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_case, 4, C_Lexique_omnibus_5F_lexique::kToken_case),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_else, 4, C_Lexique_omnibus_5F_lexique::kToken_else),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_enum, 4, C_Lexique_omnibus_5F_lexique::kToken_enum),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_func, 4, C_Lexique_omnibus_5F_lexique::kToken_func),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_llvm, 4, C_Lexique_omnibus_5F_lexique::kToken_llvm),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_safe, 4, C_Lexique_omnibus_5F_lexique::kToken_safe),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_self, 4, C_Lexique_omnibus_5F_lexique::kToken_self),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_sync, 4, C_Lexique_omnibus_5F_lexique::kToken_sync),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_task, 4, C_Lexique_omnibus_5F_lexique::kToken_task),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_user, 4, C_Lexique_omnibus_5F_lexique::kToken_user),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_when, 4, C_Lexique_omnibus_5F_lexique::kToken_when),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_event, 5, C_Lexique_omnibus_5F_lexique::kToken_event),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_guard, 5, C_Lexique_omnibus_5F_lexique::kToken_guard),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_panic, 5, C_Lexique_omnibus_5F_lexique::kToken_panic),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_until, 5, C_Lexique_omnibus_5F_lexique::kToken_until),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_where, 5, C_Lexique_omnibus_5F_lexique::kToken_where),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_while, 5, C_Lexique_omnibus_5F_lexique::kToken_while),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_assert, 6, C_Lexique_omnibus_5F_lexique::kToken_assert),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_driver, 6, C_Lexique_omnibus_5F_lexique::kToken_driver),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_extend, 6, C_Lexique_omnibus_5F_lexique::kToken_extend),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_extern, 6, C_Lexique_omnibus_5F_lexique::kToken_extern),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_import, 6, C_Lexique_omnibus_5F_lexique::kToken_import),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_opaque, 6, C_Lexique_omnibus_5F_lexique::kToken_opaque),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_option, 6, C_Lexique_omnibus_5F_lexique::kToken_option),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_public, 6, C_Lexique_omnibus_5F_lexique::kToken_public),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_sizeof, 6, C_Lexique_omnibus_5F_lexique::kToken_sizeof),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_struct, 6, C_Lexique_omnibus_5F_lexique::kToken_struct),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_switch, 6, C_Lexique_omnibus_5F_lexique::kToken_switch),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_target, 6, C_Lexique_omnibus_5F_lexique::kToken_target),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_convert, 7, C_Lexique_omnibus_5F_lexique::kToken_convert),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_section, 7, C_Lexique_omnibus_5F_lexique::kToken_section),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_service, 7, C_Lexique_omnibus_5F_lexique::kToken_service),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_startup, 7, C_Lexique_omnibus_5F_lexique::kToken_startup),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_ctAssert, 8, C_Lexique_omnibus_5F_lexique::kToken_ctAssert),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_required, 8, C_Lexique_omnibus_5F_lexique::kToken_required),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_truncate, 8, C_Lexique_omnibus_5F_lexique::kToken_truncate),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_addressof, 9, C_Lexique_omnibus_5F_lexique::kToken_addressof),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_interrupt, 9, C_Lexique_omnibus_5F_lexique::kToken_interrupt),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_primitive, 9, C_Lexique_omnibus_5F_lexique::kToken_primitive),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_registers, 9, C_Lexique_omnibus_5F_lexique::kToken_registers),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_typealias, 9, C_Lexique_omnibus_5F_lexique::kToken_typealias),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_compiletime, 11, C_Lexique_omnibus_5F_lexique::kToken_compiletime),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_staticArray, 11, C_Lexique_omnibus_5F_lexique::kToken_staticArray)
} ;

int16_t C_Lexique_omnibus_5F_lexique::search_into_keyWordList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_omnibus_5F_lexique_keyWordList, ktable_size_omnibus_5F_lexique_keyWordList) ;
}


//----------------------------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_omnibus_5F_lexique::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_omnibus_5F_lexique * ptr = (const cTokenFor_omnibus_5F_lexique *) inTokenPtr ;
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
    case kToken__24_type:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("$type") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__A9_group:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("©group") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_addressof:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("addressof") ;
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
    case kToken_convert:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("convert") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_ctAssert:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("ctAssert") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_compiletime:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("compiletime") ;
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
    case kToken_event:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("event") ;
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
    case kToken_llvm:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("llvm") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_no:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("no") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_not:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("not") ;
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
    case kToken_until:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("until") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_user:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("user") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_where:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("where") ;
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
      s.appendCString ("≠") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2264_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("≤") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (">") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2265_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("≥") ;
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
    case kToken__7C__7C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("||") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__26_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&&") ;
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

//----------------------------------------------------------------------------------------------------------------------
//                           Template Delimiters                                                 
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//               INTERNAL PARSE LEXICAL TOKEN                                         
//----------------------------------------------------------------------------------------------------------------------

void C_Lexique_omnibus_5F_lexique::internalParseLexicalToken (cTokenFor_omnibus_5F_lexique & token) {
  bool loop = true ;
  token.mLexicalAttribute_bigInteger.setToZero () ;
  token.mLexicalAttribute_tokenString.setLengthToZero () ;
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForCharWithFunction (isUnicodeLetter)) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
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
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else{
        lexicalError (gLexicalMessage_omnibus_5F_lexique_attributeError COMMA_LINE_AND_SOURCE_FILE) ;
      }
      token.mTokenCode = kToken__40_attribute ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__30_b, 2, true)) {
      do {
        if (testForInputUTF32Char (TO_UNICODE ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('1'))) {
        ::scanner_routine_enterBinaryDigitIntoBigInt (*this, previousChar (), token.mLexicalAttribute_bigInteger, gLexicalMessage_omnibus_5F_lexique_internalError) ;
        do {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('1'))) {
            ::scanner_routine_enterBinaryDigitIntoBigInt (*this, previousChar (), token.mLexicalAttribute_bigInteger, gLexicalMessage_omnibus_5F_lexique_internalError) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        token.mTokenCode = kToken_integer ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_omnibus_5F_lexique_binaryDigitError COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__30_x, 2, true)) {
      do {
        if (testForInputUTF32Char (TO_UNICODE ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
        ::scanner_routine_enterHexDigitIntoBigInt (*this, previousChar (), token.mLexicalAttribute_bigInteger, gLexicalMessage_omnibus_5F_lexique_internalError) ;
        do {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
            ::scanner_routine_enterHexDigitIntoBigInt (*this, previousChar (), token.mLexicalAttribute_bigInteger, gLexicalMessage_omnibus_5F_lexique_internalError) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        token.mTokenCode = kToken_integer ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_omnibus_5F_lexique_hexDigitError COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
      ::scanner_routine_enterDecimalDigitIntoBigInt (*this, previousChar (), token.mLexicalAttribute_bigInteger, gLexicalMessage_omnibus_5F_lexique_internalError) ;
      do {
        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          ::scanner_routine_enterDecimalDigitIntoBigInt (*this, previousChar (), token.mLexicalAttribute_bigInteger, gLexicalMessage_omnibus_5F_lexique_internalError) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_integer ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
      do {
        if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__5C__22_, 2, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\"')) ;
        }else if (testForInputUTF32Char (TO_UNICODE (' ')) || testForInputUTF32Char (TO_UNICODE ('!')) || testForInputUTF32CharRange (TO_UNICODE ('#'), TO_UNICODE (65533))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
        token.mTokenCode = kToken__22_string_22_ ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_omnibus_5F_lexique_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2F__2F__21_, 3, true)) {
      do {
        if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      enterDroppedTerminal (kToken_commentMark) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2F__2F_, 2, true)) {
      do {
        if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      enterDroppedTerminal (kToken_comment) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3E__3E__3D_, 3, true)) {
      token.mTokenCode = kToken__3E__3E__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3C__3C__3D_, 3, true)) {
      token.mTokenCode = kToken__3C__3C__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2E__2E__3C_, 3, true)) {
      token.mTokenCode = kToken__2E__2E__3C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2E__2E__2E_, 3, true)) {
      token.mTokenCode = kToken__2E__2E__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2D__25__3D_, 3, true)) {
      token.mTokenCode = kToken__2D__25__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2B__25__3D_, 3, true)) {
      token.mTokenCode = kToken__2B__25__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2A__25__3D_, 3, true)) {
      token.mTokenCode = kToken__2A__25__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__21__2F__3D_, 3, true)) {
      token.mTokenCode = kToken__21__2F__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__21__25__3D_, 3, true)) {
      token.mTokenCode = kToken__21__25__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__7C__7C_, 2, true)) {
      token.mTokenCode = kToken__7C__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__7C__3D_, 2, true)) {
      token.mTokenCode = kToken__7C__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__5E__3D_, 2, true)) {
      token.mTokenCode = kToken__5E__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__5D__21_, 2, true)) {
      token.mTokenCode = kToken__5D__21_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3E__3E_, 2, true)) {
      token.mTokenCode = kToken__3E__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3D__3D_, 2, true)) {
      token.mTokenCode = kToken__3D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3C__3C_, 2, true)) {
      token.mTokenCode = kToken__3C__3C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2F__3D_, 2, true)) {
      token.mTokenCode = kToken__2F__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2D__3E_, 2, true)) {
      token.mTokenCode = kToken__2D__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2D__3D_, 2, true)) {
      token.mTokenCode = kToken__2D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2D__25_, 2, true)) {
      token.mTokenCode = kToken__2D__25_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2B__3D_, 2, true)) {
      token.mTokenCode = kToken__2B__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2B__25_, 2, true)) {
      token.mTokenCode = kToken__2B__25_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2A__3D_, 2, true)) {
      token.mTokenCode = kToken__2A__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2A__25_, 2, true)) {
      token.mTokenCode = kToken__2A__25_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__26__3D_, 2, true)) {
      token.mTokenCode = kToken__26__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__26__26_, 2, true)) {
      token.mTokenCode = kToken__26__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__25__3D_, 2, true)) {
      token.mTokenCode = kToken__25__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__21__2F_, 2, true)) {
      token.mTokenCode = kToken__21__2F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__21__25_, 2, true)) {
      token.mTokenCode = kToken__21__25_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2265_, 1, true)) {
      token.mTokenCode = kToken__2265_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2264_, 1, true)) {
      token.mTokenCode = kToken__2264_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2260_, 1, true)) {
      token.mTokenCode = kToken__2260_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__7E_, 1, true)) {
      token.mTokenCode = kToken__7E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__7D_, 1, true)) {
      token.mTokenCode = kToken__7D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__7C_, 1, true)) {
      token.mTokenCode = kToken__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__7B_, 1, true)) {
      token.mTokenCode = kToken__7B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__5F_, 1, true)) {
      token.mTokenCode = kToken__5F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__5E_, 1, true)) {
      token.mTokenCode = kToken__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__5D_, 1, true)) {
      token.mTokenCode = kToken__5D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__5B_, 1, true)) {
      token.mTokenCode = kToken__5B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3E_, 1, true)) {
      token.mTokenCode = kToken__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3D_, 1, true)) {
      token.mTokenCode = kToken__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3C_, 1, true)) {
      token.mTokenCode = kToken__3C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3A_, 1, true)) {
      token.mTokenCode = kToken__3A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2F_, 1, true)) {
      token.mTokenCode = kToken__2F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2E_, 1, true)) {
      token.mTokenCode = kToken__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2D_, 1, true)) {
      token.mTokenCode = kToken__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2C_, 1, true)) {
      token.mTokenCode = kToken__2C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2B_, 1, true)) {
      token.mTokenCode = kToken__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2A_, 1, true)) {
      token.mTokenCode = kToken__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__29_, 1, true)) {
      token.mTokenCode = kToken__29_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__28_, 1, true)) {
      token.mTokenCode = kToken__28_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__26_, 1, true)) {
      token.mTokenCode = kToken__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__25_, 1, true)) {
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
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
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
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
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
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
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
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
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
    }else if (testForInputUTF32Char (TO_UNICODE ('$'))) {
      if (testForCharWithFunction (isUnicodeLetter)) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else{
        lexicalError (gLexicalMessage_omnibus_5F_lexique_typeError COMMA_LINE_AND_SOURCE_FILE) ;
      }
      token.mTokenCode = kToken__24_type ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (TO_UNICODE (169))) {
      if (testForCharWithFunction (isUnicodeLetter)) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else{
        lexicalError (gLexicalMessage_omnibus_5F_lexique_groupError COMMA_LINE_AND_SOURCE_FILE) ;
      }
      token.mTokenCode = kToken__A9_group ;
      enterToken (token) ;
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

//----------------------------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//----------------------------------------------------------------------------------------------------------------------

bool C_Lexique_omnibus_5F_lexique::parseLexicalToken (void) {
  cTokenFor_omnibus_5F_lexique token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    internalParseLexicalToken (token) ;
  }
  if (UNICODE_VALUE (mCurrentChar) == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//----------------------------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                
//----------------------------------------------------------------------------------------------------------------------

void C_Lexique_omnibus_5F_lexique::enterToken (cTokenFor_omnibus_5F_lexique & ioToken) {
  cTokenFor_omnibus_5F_lexique * ptr = NULL ;
  macroMyNew (ptr, cTokenFor_omnibus_5F_lexique ()) ;
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

//----------------------------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//----------------------------------------------------------------------------------------------------------------------

C_BigInt C_Lexique_omnibus_5F_lexique::attributeValue_bigInteger (void) const {
  cTokenFor_omnibus_5F_lexique * ptr = (cTokenFor_omnibus_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_bigInteger ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_omnibus_5F_lexique::attributeValue_tokenString (void) const {
  cTokenFor_omnibus_5F_lexique * ptr = (cTokenFor_omnibus_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//----------------------------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint C_Lexique_omnibus_5F_lexique::synthetizedAttribute_bigInteger (void) const {
  cTokenFor_omnibus_5F_lexique * ptr = (cTokenFor_omnibus_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_omnibus_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_bigint value (ptr->mLexicalAttribute_bigInteger) ;
  GALGAS_lbigint result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_omnibus_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_omnibus_5F_lexique * ptr = (cTokenFor_omnibus_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_omnibus_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_tokenString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist C_Lexique_omnibus_5F_lexique::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("@attribute") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("integer") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\"string\"") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("commentMark") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?selector:") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?!selector:") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!selector:") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!\?selector:") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("$type") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("©group") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("addressof") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("assert") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("boot") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("case") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("convert") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("ctAssert") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("compiletime") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("driver") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("else") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("enum") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("event") COMMA_THERE) ;
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
  result.addAssign_operation (GALGAS_string ("llvm") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("no") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("not") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("opaque") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("option") COMMA_THERE) ;
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
  result.addAssign_operation (GALGAS_string ("until") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("user") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("where") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("when") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("while") COMMA_THERE) ;
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
  result.addAssign_operation (GALGAS_string ("≠") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("≤") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("≥") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("[") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("]") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("]!") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">>") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("~") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("||") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&&") COMMA_THERE) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void getKeywordLists_omnibus_5F_lexique (TC_UniqueArray <C_String> & ioList) {
  ioList.appendObject ("omnibus_lexique:delimitorsList") ;
  ioList.appendObject ("omnibus_lexique:keyWordList") ;
}

//----------------------------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_omnibus_5F_lexique (const C_String & inIdentifier,
                                                         bool & ioFound,
                                                         TC_UniqueArray <C_String> & ioList) {
  if (inIdentifier == "omnibus_lexique:delimitorsList") {
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
    ioList.appendObject ("≠") ;
    ioList.appendObject ("≤") ;
    ioList.appendObject ("≥") ;
    ioList.appendObject ("!%") ;
    ioList.appendObject ("!/") ;
    ioList.appendObject ("%=") ;
    ioList.appendObject ("&&") ;
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
    ioList.appendObject ("]!") ;
    ioList.appendObject ("^=") ;
    ioList.appendObject ("|=") ;
    ioList.appendObject ("||") ;
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
  if (inIdentifier == "omnibus_lexique:keyWordList") {
    ioFound = true ;
    ioList.appendObject ("if") ;
    ioList.appendObject ("in") ;
    ioList.appendObject ("no") ;
    ioList.appendObject ("for") ;
    ioList.appendObject ("let") ;
    ioList.appendObject ("not") ;
    ioList.appendObject ("var") ;
    ioList.appendObject ("yes") ;
    ioList.appendObject ("boot") ;
    ioList.appendObject ("case") ;
    ioList.appendObject ("else") ;
    ioList.appendObject ("enum") ;
    ioList.appendObject ("func") ;
    ioList.appendObject ("llvm") ;
    ioList.appendObject ("safe") ;
    ioList.appendObject ("self") ;
    ioList.appendObject ("sync") ;
    ioList.appendObject ("task") ;
    ioList.appendObject ("user") ;
    ioList.appendObject ("when") ;
    ioList.appendObject ("event") ;
    ioList.appendObject ("guard") ;
    ioList.appendObject ("panic") ;
    ioList.appendObject ("until") ;
    ioList.appendObject ("where") ;
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
    ioList.appendObject ("ctAssert") ;
    ioList.appendObject ("required") ;
    ioList.appendObject ("truncate") ;
    ioList.appendObject ("addressof") ;
    ioList.appendObject ("interrupt") ;
    ioList.appendObject ("primitive") ;
    ioList.appendObject ("registers") ;
    ioList.appendObject ("typealias") ;
    ioList.appendObject ("compiletime") ;
    ioList.appendObject ("staticArray") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static cLexiqueIntrospection lexiqueIntrospection_omnibus_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_omnibus_5F_lexique, getKeywordsForIdentifier_omnibus_5F_lexique) ;

//----------------------------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//----------------------------------------------------------------------------------------------------------------------

uint32_t C_Lexique_omnibus_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [119] = {0,
    0 /* omnibus_lexique_1_identifier */,
    2 /* omnibus_lexique_1__40_attribute */,
    3 /* omnibus_lexique_1_integer */,
    4 /* omnibus_lexique_1__22_string_22_ */,
    5 /* omnibus_lexique_1_comment */,
    5 /* omnibus_lexique_1_commentMark */,
    7 /* omnibus_lexique_1__3F_selector_3A_ */,
    7 /* omnibus_lexique_1__3F__21_selector_3A_ */,
    7 /* omnibus_lexique_1__21_selector_3A_ */,
    7 /* omnibus_lexique_1__21__3F_selector_3A_ */,
    8 /* omnibus_lexique_1__24_type */,
    9 /* omnibus_lexique_1__A9_group */,
    1 /* omnibus_lexique_1_addressof */,
    1 /* omnibus_lexique_1_assert */,
    1 /* omnibus_lexique_1_boot */,
    1 /* omnibus_lexique_1_case */,
    1 /* omnibus_lexique_1_convert */,
    1 /* omnibus_lexique_1_ctAssert */,
    1 /* omnibus_lexique_1_compiletime */,
    1 /* omnibus_lexique_1_driver */,
    1 /* omnibus_lexique_1_else */,
    1 /* omnibus_lexique_1_enum */,
    1 /* omnibus_lexique_1_event */,
    1 /* omnibus_lexique_1_extend */,
    1 /* omnibus_lexique_1_extern */,
    1 /* omnibus_lexique_1_for */,
    1 /* omnibus_lexique_1_func */,
    1 /* omnibus_lexique_1_guard */,
    1 /* omnibus_lexique_1_if */,
    1 /* omnibus_lexique_1_import */,
    1 /* omnibus_lexique_1_in */,
    1 /* omnibus_lexique_1_interrupt */,
    1 /* omnibus_lexique_1_let */,
    1 /* omnibus_lexique_1_llvm */,
    1 /* omnibus_lexique_1_no */,
    1 /* omnibus_lexique_1_not */,
    1 /* omnibus_lexique_1_opaque */,
    1 /* omnibus_lexique_1_option */,
    1 /* omnibus_lexique_1_panic */,
    1 /* omnibus_lexique_1_primitive */,
    1 /* omnibus_lexique_1_public */,
    1 /* omnibus_lexique_1_registers */,
    1 /* omnibus_lexique_1_required */,
    1 /* omnibus_lexique_1_safe */,
    1 /* omnibus_lexique_1_section */,
    1 /* omnibus_lexique_1_self */,
    1 /* omnibus_lexique_1_service */,
    1 /* omnibus_lexique_1_sizeof */,
    1 /* omnibus_lexique_1_startup */,
    1 /* omnibus_lexique_1_struct */,
    1 /* omnibus_lexique_1_staticArray */,
    1 /* omnibus_lexique_1_switch */,
    1 /* omnibus_lexique_1_sync */,
    1 /* omnibus_lexique_1_target */,
    1 /* omnibus_lexique_1_task */,
    1 /* omnibus_lexique_1_truncate */,
    1 /* omnibus_lexique_1_typealias */,
    1 /* omnibus_lexique_1_var */,
    1 /* omnibus_lexique_1_until */,
    1 /* omnibus_lexique_1_user */,
    1 /* omnibus_lexique_1_where */,
    1 /* omnibus_lexique_1_when */,
    1 /* omnibus_lexique_1_while */,
    1 /* omnibus_lexique_1_yes */,
    6 /* omnibus_lexique_1__3A_ */,
    6 /* omnibus_lexique_1__2E_ */,
    6 /* omnibus_lexique_1__2C_ */,
    6 /* omnibus_lexique_1__7B_ */,
    6 /* omnibus_lexique_1__7D_ */,
    6 /* omnibus_lexique_1__3D_ */,
    6 /* omnibus_lexique_1__28_ */,
    6 /* omnibus_lexique_1__29_ */,
    6 /* omnibus_lexique_1__5F_ */,
    6 /* omnibus_lexique_1__3D__3D_ */,
    6 /* omnibus_lexique_1__2260_ */,
    6 /* omnibus_lexique_1__3C_ */,
    6 /* omnibus_lexique_1__2264_ */,
    6 /* omnibus_lexique_1__3E_ */,
    6 /* omnibus_lexique_1__2265_ */,
    6 /* omnibus_lexique_1__5B_ */,
    6 /* omnibus_lexique_1__5D_ */,
    6 /* omnibus_lexique_1__5D__21_ */,
    6 /* omnibus_lexique_1__3C__3C_ */,
    6 /* omnibus_lexique_1__3E__3E_ */,
    6 /* omnibus_lexique_1__7E_ */,
    6 /* omnibus_lexique_1__7C__7C_ */,
    6 /* omnibus_lexique_1__26__26_ */,
    6 /* omnibus_lexique_1__2D__3E_ */,
    6 /* omnibus_lexique_1__2E__2E__3C_ */,
    6 /* omnibus_lexique_1__2E__2E__2E_ */,
    6 /* omnibus_lexique_1__7C_ */,
    6 /* omnibus_lexique_1__7C__3D_ */,
    6 /* omnibus_lexique_1__26_ */,
    6 /* omnibus_lexique_1__26__3D_ */,
    6 /* omnibus_lexique_1__5E_ */,
    6 /* omnibus_lexique_1__5E__3D_ */,
    6 /* omnibus_lexique_1__2B_ */,
    6 /* omnibus_lexique_1__2B__25_ */,
    6 /* omnibus_lexique_1__2B__3D_ */,
    6 /* omnibus_lexique_1__2B__25__3D_ */,
    6 /* omnibus_lexique_1__2D_ */,
    6 /* omnibus_lexique_1__2D__25_ */,
    6 /* omnibus_lexique_1__2D__3D_ */,
    6 /* omnibus_lexique_1__2D__25__3D_ */,
    6 /* omnibus_lexique_1__2A_ */,
    6 /* omnibus_lexique_1__2A__25_ */,
    6 /* omnibus_lexique_1__2A__3D_ */,
    6 /* omnibus_lexique_1__2A__25__3D_ */,
    6 /* omnibus_lexique_1__2F_ */,
    6 /* omnibus_lexique_1__21__2F_ */,
    6 /* omnibus_lexique_1__2F__3D_ */,
    6 /* omnibus_lexique_1__21__2F__3D_ */,
    6 /* omnibus_lexique_1__25_ */,
    6 /* omnibus_lexique_1__21__25_ */,
    6 /* omnibus_lexique_1__25__3D_ */,
    6 /* omnibus_lexique_1__21__25__3D_ */,
    6 /* omnibus_lexique_1__3C__3C__3D_ */,
    6 /* omnibus_lexique_1__3E__3E__3D_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//----------------------------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_omnibus_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
  C_String result ;
  if (inStyleIndex < 10) {
    static const char * kStyleArray [10] = {
      "",
      "keywordsStyle",
      "attributeStyle",
      "integerStyle",
      "stringStyle",
      "commentStyle",
      "delimitersStyle",
      "selectorStyle",
      "typeStyle",
      "groupStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_import_5F_file_i0_ (GALGAS_lstringlist & ioArgument_ioImportedFileList,
                                                                           C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_import COMMA_SOURCE_FILE ("syntax-grammar.galgas", 10)) ;
  GALGAS_lstring var_importedFile_619 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("syntax-grammar.galgas", 11)) ;
  ioArgument_ioImportedFileList.addAssign_operation (var_importedFile_619  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 12)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_importedFile_619.readProperty_string ().getter_pathExtension (SOURCE_FILE ("syntax-grammar.galgas", 13)).objectCompare (GALGAS_string ("omnibus-import"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_importedFile_619.readProperty_location (), GALGAS_string ("the path extension should be .omnibus-import"), fixItArray1  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 14)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_import_5F_file_i0_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_import COMMA_SOURCE_FILE ("syntax-grammar.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("syntax-grammar.galgas", 11)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_import_5F_file_i0_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_import COMMA_SOURCE_FILE ("syntax-grammar.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("syntax-grammar.galgas", 11)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_start_5F_symbol_i1_ (GALGAS_ast & ioArgument_ioAST,
                                                                            GALGAS_lstringlist & outArgument_outImportedFileList,
                                                                            GALGAS_location & outArgument_outEndOfSourceFile,
                                                                            C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outImportedFileList.drop () ; // Release 'out' argument
  outArgument_outEndOfSourceFile.drop () ; // Release 'out' argument
  outArgument_outImportedFileList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("syntax-grammar.galgas", 25)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_0 (inCompiler)) {
    case 2: {
      nt_declaration_ (ioArgument_ioAST, inCompiler) ;
    } break ;
    case 3: {
      nt_system_5F_routine_5F_declaration_ (ioArgument_ioAST, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("syntax-grammar.galgas", 30)), inCompiler) ;
    } break ;
    case 4: {
      nt_import_5F_file_ (outArgument_outImportedFileList, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outEndOfSourceFile = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_start_5F_symbol_i1_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_0 (inCompiler)) {
    case 2: {
      nt_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_system_5F_routine_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_start_5F_symbol_i1_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_0 (inCompiler)) {
    case 2: {
      nt_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_system_5F_routine_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_import_5F_file_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i2_ (GALGAS_ast & ioArgument_ioAST,
                                                                        C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_typealias COMMA_SOURCE_FILE ("type-alias.galgas", 25)) ;
  GALGAS_lstring var_newTypeName_1343 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-alias.galgas", 27)) ;
  GALGAS_lstring var_typeName_1398 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1398, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_typeAliasDeclarationAST::constructor_new (var_newTypeName_1343, var_typeName_1398  COMMA_SOURCE_FILE ("type-alias.galgas", 29))  COMMA_SOURCE_FILE ("type-alias.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i2_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_typealias COMMA_SOURCE_FILE ("type-alias.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-alias.galgas", 27)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i2_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_typealias COMMA_SOURCE_FILE ("type-alias.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-alias.galgas", 27)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i3_ (GALGAS_ast & /* ioArgument_ioAST */,
                                                                               GALGAS_lstring & outArgument_outTypeName,
                                                                               C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas", 35)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i3_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i3_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas", 35)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i4_ (GALGAS_ast & ioArgument_ioAST,
                                                                               GALGAS_lstring & outArgument_outTypeName,
                                                                               C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 21)) ;
  GALGAS_expressionAST var_sizeExpression_1231 ;
  nt_expression_ (ioArgument_ioAST, var_sizeExpression_1231, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 23)) ;
  GALGAS_lstring var_elementTypeName_1289 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_elementTypeName_1289, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 25)) ;
  GALGAS_location var_sizeExpressionLocation_1321 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 26)) ;
  outArgument_outTypeName = GALGAS_string ("anonymous.").add_operation (ioArgument_ioAST.readProperty_mTypeDeclarationIndex ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 27)).getter_here (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 27)) ;
  ioArgument_ioAST.mProperty_mTypeDeclarationIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 28)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_fixedSizeArrayTypeDeclarationAST::constructor_new (outArgument_outTypeName, var_elementTypeName_1289, var_sizeExpression_1231, var_sizeExpressionLocation_1321  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 29))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i4_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 23)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i4_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 23)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i5_ (GALGAS_ast & ioArgument_ioAST,
                                                                               GALGAS_lstring & outArgument_outTypeName,
                                                                               C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 19)) ;
  GALGAS_lstring var_elementTypeName_1145 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_elementTypeName_1145, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 21)) ;
  outArgument_outTypeName = GALGAS_string ("anonymous.").add_operation (ioArgument_ioAST.readProperty_mTypeDeclarationIndex ().getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 22)).getter_here (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 22)) ;
  ioArgument_ioAST.mProperty_mTypeDeclarationIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 23)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_typeDynamicArrayDeclarationAST::constructor_new (outArgument_outTypeName, var_elementTypeName_1145  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 24))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 24)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i5_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 19)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 21)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i5_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 19)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i6_ (GALGAS_ast & ioArgument_ioAST,
                                                                        C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 26)) ;
  GALGAS_lstring var_enumerationName_1339 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 28)) ;
  GALGAS_enumerationConstantList var_enumCaseList_1396 = GALGAS_enumerationConstantList::constructor_emptyList (SOURCE_FILE ("type-enumeration-declaration.galgas", 29)) ;
  GALGAS_bigint var_idx_1422 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_case COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 32)) ;
    GALGAS_lstring var_constantName_1478 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 33)) ;
    var_enumCaseList_1396.addAssign_operation (var_constantName_1478, var_idx_1422  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 34)) ;
    var_idx_1422 = var_idx_1422.add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 35)) ;
    switch (select_omnibus_5F_syntax_1 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 38)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_enumerationDeclarationAST::constructor_new (var_enumerationName_1339, var_enumCaseList_1396  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 39))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i6_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_case COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 32)) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 33)) ;
    switch (select_omnibus_5F_syntax_1 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 38)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i6_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_case COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 32)) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 33)) ;
    switch (select_omnibus_5F_syntax_1 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i7_ (GALGAS_ast & ioArgument_ioAST,
                                                                                                                         GALGAS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_propertyVisibility var_visibility_2715 ;
  switch (select_omnibus_5F_syntax_2 (inCompiler)) {
  case 1: {
    var_visibility_2715 = GALGAS_propertyVisibility::constructor_isPrivate (SOURCE_FILE ("type-structure-declaration.galgas", 57)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 59)) ;
    var_visibility_2715 = GALGAS_propertyVisibility::constructor_isPublic (SOURCE_FILE ("type-structure-declaration.galgas", 60)) ;
  } break ;
  default:
    break ;
  }
  nt_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_visibility_2715, ioArgument_ioPropertyListAST, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i7_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 59)) ;
  } break ;
  default:
    break ;
  }
  nt_struct_5F_property_5F_declaration_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i7_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 59)) ;
  } break ;
  default:
    break ;
  }
  nt_struct_5F_property_5F_declaration_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_private_5F_struct_5F_property_5F_declaration_i8_ (GALGAS_ast & ioArgument_ioAST,
                                                                                                         GALGAS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_struct_5F_property_5F_declaration_ (ioArgument_ioAST, GALGAS_propertyVisibility::constructor_isPrivate (SOURCE_FILE ("type-structure-declaration.galgas", 71)), ioArgument_ioPropertyListAST, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_private_5F_struct_5F_property_5F_declaration_i8_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_struct_5F_property_5F_declaration_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_private_5F_struct_5F_property_5F_declaration_i8_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_struct_5F_property_5F_declaration_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i9_ (GALGAS_ast & ioArgument_ioAST,
                                                                                              const GALGAS_propertyVisibility constinArgument_inVisibility,
                                                                                              GALGAS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                              C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 81)) ;
  GALGAS_lstring var_propertyName_3528 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 82)) ;
  GALGAS_lstring var_typeName_3558 ;
  switch (select_omnibus_5F_syntax_3 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_3558, inCompiler) ;
  } break ;
  case 2: {
    var_typeName_3558 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 87)) ;
  } break ;
  default:
    break ;
  }
  switch (select_omnibus_5F_syntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 90)) ;
    GALGAS_expressionAST var_initExpression_3718 ;
    nt_expression_ (ioArgument_ioAST, var_initExpression_3718, inCompiler) ;
    ioArgument_ioPropertyListAST.addAssign_operation (var_propertyName_3528, GALGAS_propertyAttributeList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 94)), constinArgument_inVisibility, var_typeName_3558, GALGAS_propertyKindAST::constructor_initializedConstantProperty (var_initExpression_3718  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 97))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 92)) ;
  } break ;
  case 2: {
    ioArgument_ioPropertyListAST.addAssign_operation (var_propertyName_3528, GALGAS_propertyAttributeList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 101)), constinArgument_inVisibility, var_typeName_3558, GALGAS_propertyKindAST::constructor_uninitializedConstantProperty (SOURCE_FILE ("type-structure-declaration.galgas", 104))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 99)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i9_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 81)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 82)) ;
  switch (select_omnibus_5F_syntax_3 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_omnibus_5F_syntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 90)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i9_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 81)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 82)) ;
  switch (select_omnibus_5F_syntax_3 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_omnibus_5F_syntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 90)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i10_ (GALGAS_ast & ioArgument_ioAST,
                                                                                               const GALGAS_propertyVisibility constinArgument_inVisibility,
                                                                                               GALGAS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                               C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 115)) ;
  GALGAS_lstring var_propertyName_4371 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 116)) ;
  GALGAS_propertyAttributeList var_propertyAttributeList_4415 = GALGAS_propertyAttributeList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 117)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_5 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_4487 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 120)) ;
      GALGAS_lbigint var_value_4518 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 121)) ;
      var_propertyAttributeList_4415.addAssign_operation (var_attribute_4487, var_value_4518  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 122)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_omnibus_5F_syntax_6 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_typeName_4630 ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_4630, inCompiler) ;
    switch (select_omnibus_5F_syntax_7 (inCompiler)) {
    case 1: {
      ioArgument_ioPropertyListAST.addAssign_operation (var_propertyName_4371, GALGAS_propertyAttributeList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 127)), constinArgument_inVisibility, var_typeName_4630, GALGAS_propertyKindAST::constructor_uninitializedStoredProperty (SOURCE_FILE ("type-structure-declaration.galgas", 127))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 127)) ;
    } break ;
    case 2: {
      nt_propertyGetterSetter_ (ioArgument_ioAST, constinArgument_inVisibility, var_propertyName_4371, var_propertyAttributeList_4415, var_typeName_4630, ioArgument_ioPropertyListAST, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 137)) ;
      GALGAS_expressionAST var_initExpression_4991 ;
      nt_expression_ (ioArgument_ioAST, var_initExpression_4991, inCompiler) ;
      ioArgument_ioPropertyListAST.addAssign_operation (var_propertyName_4371, var_propertyAttributeList_4415, constinArgument_inVisibility, var_typeName_4630, GALGAS_propertyKindAST::constructor_initializedStoredProperty (var_initExpression_4991  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 144))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 139)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 147)) ;
    GALGAS_expressionAST var_initExpression_5266 ;
    nt_expression_ (ioArgument_ioAST, var_initExpression_5266, inCompiler) ;
    ioArgument_ioPropertyListAST.addAssign_operation (var_propertyName_4371, var_propertyAttributeList_4415, constinArgument_inVisibility, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 153)), GALGAS_propertyKindAST::constructor_initializedStoredProperty (var_initExpression_5266  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 154))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 149)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i10_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 115)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 116)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 120)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 121)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_omnibus_5F_syntax_6 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_parse (inCompiler) ;
    switch (select_omnibus_5F_syntax_7 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      nt_propertyGetterSetter_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 137)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 147)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i10_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 115)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 116)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 120)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 121)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_omnibus_5F_syntax_6 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_indexing (inCompiler) ;
    switch (select_omnibus_5F_syntax_7 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      nt_propertyGetterSetter_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 137)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 147)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_propertyGetterSetter_i11_ (GALGAS_ast & ioArgument_ioAST,
                                                                                  const GALGAS_propertyVisibility constinArgument_inVisibility,
                                                                                  const GALGAS_lstring constinArgument_inPropertyName,
                                                                                  const GALGAS_propertyAttributeList constinArgument_inPropertyAttributeList,
                                                                                  const GALGAS_lstring constinArgument_inTypeName,
                                                                                  GALGAS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                  C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 168)) ;
  switch (select_omnibus_5F_syntax_8 (inCompiler)) {
  case 1: {
    GALGAS_bool var_getterDefined_5900 = GALGAS_bool (false) ;
    GALGAS_bool var_setterDefined_5932 = GALGAS_bool (false) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_getterOrSetter_5993 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 173)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 174)) ;
      GALGAS_instructionListAST var_instructionList_6059 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_6059, inCompiler) ;
      GALGAS_location var_endOfInstructionList_6087 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 176)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 177)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_getterOrSetter_5993.readProperty_string ().objectCompare (GALGAS_string ("get"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioPropertyListAST.addAssign_operation (constinArgument_inPropertyName, constinArgument_inPropertyAttributeList, constinArgument_inVisibility, constinArgument_inTypeName, GALGAS_propertyKindAST::constructor_readOnlyComputedProperty (var_instructionList_6059, var_endOfInstructionList_6087  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 184))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 179)) ;
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = var_getterDefined_5900.boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (var_getterOrSetter_5993.readProperty_location (), GALGAS_string ("duplicate getter definition"), fixItArray3  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 189)) ;
            }
          }
          var_getterDefined_5900 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, var_getterOrSetter_5993.readProperty_string ().objectCompare (GALGAS_string ("set"))).boolEnum () ;
          if (kBoolTrue == test_4) {
            ioArgument_ioPropertyListAST.addAssign_operation (constinArgument_inPropertyName, constinArgument_inPropertyAttributeList, constinArgument_inVisibility, constinArgument_inTypeName, GALGAS_propertyKindAST::constructor_writeComputedProperty (var_instructionList_6059, var_endOfInstructionList_6087  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 198))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 193)) ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_setterDefined_5932.boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (var_getterOrSetter_5993.readProperty_location (), GALGAS_string ("duplicate setter definition"), fixItArray6  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 203)) ;
              }
            }
            var_setterDefined_5932 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          fixItArray7.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("@set")) ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("@get")) ;
          inCompiler->emitSemanticError (var_getterOrSetter_5993.readProperty_location (), GALGAS_string ("invalid attribute"), fixItArray7  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 207)) ;
        }
      }
      switch (select_omnibus_5F_syntax_9 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      GALGAS_bool test_9 = var_setterDefined_5932 ;
      if (kBoolTrue == test_9.boolEnum ()) {
        test_9 = var_getterDefined_5900.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 211)) ;
      }
      test_8 = test_9.boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 212)), GALGAS_string ("a getter should be defined"), fixItArray10  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 212)) ;
      }
    }
    if (kBoolFalse == test_8) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        GALGAS_bool test_12 = var_setterDefined_5932.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 213)) ;
        if (kBoolTrue == test_12.boolEnum ()) {
          test_12 = var_getterDefined_5900.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 213)) ;
        }
        test_11 = test_12.boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 214)), GALGAS_string ("a getter should be defined, and optionaly a setter"), fixItArray13  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 214)) ;
        }
      }
    }
  } break ;
  case 2: {
    GALGAS_instructionListAST var_readInstructionList_7575 ;
    nt_instructionList_ (ioArgument_ioAST, var_readInstructionList_7575, inCompiler) ;
    GALGAS_location var_endOfReadInstructionList_7605 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 218)) ;
    ioArgument_ioPropertyListAST.addAssign_operation (constinArgument_inPropertyName, constinArgument_inPropertyAttributeList, constinArgument_inVisibility, constinArgument_inTypeName, GALGAS_propertyKindAST::constructor_readOnlyComputedProperty (var_readInstructionList_7575, var_endOfReadInstructionList_7605  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 224))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 219)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 229)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_propertyGetterSetter_i11_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 168)) ;
  switch (select_omnibus_5F_syntax_8 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 173)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 174)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 177)) ;
      switch (select_omnibus_5F_syntax_9 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 229)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_propertyGetterSetter_i11_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 168)) ;
  switch (select_omnibus_5F_syntax_8 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 173)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 174)) ;
      nt_instructionList_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 177)) ;
      switch (select_omnibus_5F_syntax_9 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  case 2: {
    nt_instructionList_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 229)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i12_ (GALGAS_ast & ioArgument_ioAST,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 235)) ;
  GALGAS_lstring var_structureName_8138 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 236)) ;
  GALGAS_lstringlist var_attributeList_8173 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 237)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_10 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_8237 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 240)) ;
      var_attributeList_8173.addAssign_operation (var_attribute_8237  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 241)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 243)) ;
  GALGAS_structurePropertyListAST var_fieldList_8332 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 244)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_11 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_fieldList_8332, inCompiler) ;
    } break ;
    case 3: {
      nt_function_5F_declaration_ (ioArgument_ioAST, var_structureName_8138, inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 251)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_structureDeclarationAST::constructor_new (var_structureName_8138, var_structureName_8138, var_structureName_8138, var_attributeList_8173, GALGAS_bool (true), var_fieldList_8332, GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 252))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 252)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i12_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 235)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 236)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 240)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 243)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_11 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_function_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 251)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i12_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 235)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 236)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 240)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 243)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_11 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_function_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 251)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i13_ (GALGAS_ast & ioArgument_ioAST,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 19)) ;
  GALGAS_lstring var_structureName_1113 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 21)) ;
  GALGAS_structurePropertyListAST var_fieldList_1169 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("type-sync-declaration.galgas", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_12 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_fieldList_1169, inCompiler) ;
    } break ;
    case 3: {
      nt_function_5F_declaration_ (ioArgument_ioAST, var_structureName_1113, inCompiler) ;
    } break ;
    case 4: {
      nt_system_5F_routine_5F_declaration_ (ioArgument_ioAST, var_structureName_1113, inCompiler) ;
    } break ;
    case 5: {
      nt_guard_ (ioArgument_ioAST, var_structureName_1113, var_structureName_1113.readProperty_string (), inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 33)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_syncDeclarationAST::constructor_new (var_structureName_1113, var_fieldList_1169  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 34))  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i13_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_12 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_function_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_system_5F_routine_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_guard_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 33)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i13_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_12 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_function_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_system_5F_routine_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_guard_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i14_ (GALGAS_ast & ioArgument_ioAST,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_opaque COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 21)) ;
  GALGAS_lstring var_opaqueTypeName_1188 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 22)) ;
  GALGAS_lstringlist var_attributeList_1224 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 23)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_13 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_1288 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 26)) ;
      var_attributeList_1224.addAssign_operation (var_attribute_1288  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 27)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 29)) ;
  GALGAS_expressionAST var_sizeExpression_1378 ;
  nt_expression_ (ioArgument_ioAST, var_sizeExpression_1378, inCompiler) ;
  GALGAS_location var_sizeExpressionLocation_1401 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 32)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_typeOpaqueDeclarationAST::constructor_new (var_opaqueTypeName_1188, var_sizeExpression_1378, var_sizeExpressionLocation_1401, var_attributeList_1224  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 33))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i14_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_opaque COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 26)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 29)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 32)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i14_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_opaque COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 26)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 29)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i15_ (GALGAS_ast & ioArgument_ioAST,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 84)) ;
  GALGAS_registerGroupListAST var_registerGroupListAST_3810 = GALGAS_registerGroupListAST::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 85)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_registerGroupName_3867 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("declaration-control-register.galgas", 87)) ;
    switch (select_omnibus_5F_syntax_15 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_attribute_3924 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 89)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, var_attribute_3924.readProperty_string ().objectCompare (GALGAS_string ("at"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_attribute_3924.readProperty_location (), GALGAS_string ("attribute should be @at"), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 91)) ;
        }
      }
      GALGAS_lbigint var_registerGroupBaseAddress_4073 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 93)) ;
      GALGAS_controlRegisterGroupKindAST var_groupKind_4110 = GALGAS_controlRegisterGroupKindAST::constructor_single (var_registerGroupBaseAddress_4073  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 94)) ;
      var_registerGroupListAST_3810.addAssign_operation (var_registerGroupName_3867, var_groupKind_4110  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 95)) ;
    } break ;
    case 2: {
      GALGAS_lbigintlist var_groupBaseAddresses_4307 = GALGAS_lbigintlist::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 97)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 98)) ;
      GALGAS_expressionAST var_groupSize_4377 ;
      nt_expression_ (ioArgument_ioAST, var_groupSize_4377, inCompiler) ;
      GALGAS_location var_groupSizeExpressionLocation_4399 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 100)) ;
      GALGAS_lstring var_attribute_4470 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 101)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, var_attribute_4470.readProperty_string ().objectCompare (GALGAS_string ("at"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_attribute_4470.readProperty_location (), GALGAS_string ("attribute should be @at"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 103)) ;
        }
      }
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        GALGAS_lbigint var_baseAddress_4636 = inCompiler->synthetizedAttribute_bigInteger () ;
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 106)) ;
        var_groupBaseAddresses_4307.addAssign_operation (var_baseAddress_4636  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 107)) ;
        switch (select_omnibus_5F_syntax_16 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_5 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 111)) ;
      GALGAS_controlRegisterGroupKindAST var_groupKind_4758 = GALGAS_controlRegisterGroupKindAST::constructor_groupArray (var_groupSize_4377, var_groupSizeExpressionLocation_4399, var_groupBaseAddresses_4307  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 112)) ;
      var_registerGroupListAST_3810.addAssign_operation (var_registerGroupName_3867, var_groupKind_4758  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 117)) ;
    } break ;
    default:
      break ;
    }
    switch (select_omnibus_5F_syntax_14 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 122)) ;
  GALGAS_controlRegisterDeclarationList var_controlRegisterDeclarationList_5112 = GALGAS_controlRegisterDeclarationList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 123)) ;
  bool repeatFlag_6 = true ;
  while (repeatFlag_6) {
    GALGAS_controlRegisterNameListAST var_registerDeclarationList_5197 = GALGAS_controlRegisterNameListAST::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 125)) ;
    bool repeatFlag_7 = true ;
    while (repeatFlag_7) {
      nt_registerDeclaration_ (ioArgument_ioAST, var_registerDeclarationList_5197, inCompiler) ;
      switch (select_omnibus_5F_syntax_18 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_7 = false ;
        break ;
      }
    }
    GALGAS_lstring var_registerTypeName_5358 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("declaration-control-register.galgas", 131)) ;
    GALGAS_controlRegisterBitSliceList var_registerBitSliceList_5414 = GALGAS_controlRegisterBitSliceList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 132)) ;
    switch (select_omnibus_5F_syntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 135)) ;
      bool repeatFlag_8 = true ;
      while (repeatFlag_8) {
        GALGAS_controlRegisterBitSlice var_registerBitSlice_5528 ;
        switch (select_omnibus_5F_syntax_21 (inCompiler)) {
        case 1: {
          GALGAS_lbigint var_unusedBitCount_5598 = inCompiler->synthetizedAttribute_bigInteger () ;
          inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 139)) ;
          var_registerBitSlice_5528 = GALGAS_controlRegisterBitSlice::constructor_unusedBits (var_unusedBitCount_5598  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 140)) ;
        } break ;
        case 2: {
          GALGAS_lstring var_bitName_5723 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 142)) ;
          switch (select_omnibus_5F_syntax_22 (inCompiler)) {
          case 1: {
            var_registerBitSlice_5528 = GALGAS_controlRegisterBitSlice::constructor_namedBit (var_bitName_5723, GALGAS_lbigint::constructor_new (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 144)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 144))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 144))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 144)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 146)) ;
            GALGAS_lbigint var_bitCount_5903 = inCompiler->synthetizedAttribute_bigInteger () ;
            inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 147)) ;
            var_registerBitSlice_5528 = GALGAS_controlRegisterBitSlice::constructor_namedBit (var_bitName_5723, var_bitCount_5903  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 148)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          break ;
        }
        var_registerBitSliceList_5414.addAssign_operation (var_registerBitSlice_5528  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 151)) ;
        switch (select_omnibus_5F_syntax_20 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_8 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 155)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_endOfBitSlice_6142 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 157)) ;
    var_controlRegisterDeclarationList_5112.addAssign_operation (var_registerDeclarationList_5197, var_registerTypeName_5358, var_registerBitSliceList_5414, var_endOfBitSlice_6142  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 158)) ;
    switch (select_omnibus_5F_syntax_17 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_6 = false ;
      break ;
    }
  }
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_controlRegisterGroupDeclarationAST::constructor_new (var_registerGroupListAST_3810, var_controlRegisterDeclarationList_5112  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 161))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 161)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 165)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i15_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 84)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("declaration-control-register.galgas", 87)) ;
    switch (select_omnibus_5F_syntax_15 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 89)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 93)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 98)) ;
      nt_expression_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 101)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 106)) ;
        switch (select_omnibus_5F_syntax_16 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 111)) ;
    } break ;
    default:
      break ;
    }
    switch (select_omnibus_5F_syntax_14 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 122)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      nt_registerDeclaration_parse (inCompiler) ;
      switch (select_omnibus_5F_syntax_18 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_3 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("declaration-control-register.galgas", 131)) ;
    switch (select_omnibus_5F_syntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 135)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        switch (select_omnibus_5F_syntax_21 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 139)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 142)) ;
          switch (select_omnibus_5F_syntax_22 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 146)) ;
            inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 147)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          break ;
        }
        switch (select_omnibus_5F_syntax_20 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_4 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 155)) ;
    } break ;
    default:
      break ;
    }
    switch (select_omnibus_5F_syntax_17 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 165)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i15_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 84)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("declaration-control-register.galgas", 87)) ;
    switch (select_omnibus_5F_syntax_15 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 89)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 93)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 98)) ;
      nt_expression_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 101)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 106)) ;
        switch (select_omnibus_5F_syntax_16 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 111)) ;
    } break ;
    default:
      break ;
    }
    switch (select_omnibus_5F_syntax_14 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 122)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      nt_registerDeclaration_indexing (inCompiler) ;
      switch (select_omnibus_5F_syntax_18 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_3 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("declaration-control-register.galgas", 131)) ;
    switch (select_omnibus_5F_syntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 135)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        switch (select_omnibus_5F_syntax_21 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 139)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 142)) ;
          switch (select_omnibus_5F_syntax_22 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 146)) ;
            inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 147)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          break ;
        }
        switch (select_omnibus_5F_syntax_20 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_4 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 155)) ;
    } break ;
    default:
      break ;
    }
    switch (select_omnibus_5F_syntax_17 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 165)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_registerDeclaration_i16_ (GALGAS_ast & ioArgument_ioAST,
                                                                                 GALGAS_controlRegisterNameListAST & ioArgument_ioRegisterDeclarationList,
                                                                                 C_Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_lstring var_registerName_6864 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 173)) ;
  switch (select_omnibus_5F_syntax_23 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_attributeOffset_6912 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 175)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_attributeOffset_6912.readProperty_string ().objectCompare (GALGAS_string ("offset"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("@offset")) ;
        inCompiler->emitSemanticError (var_attributeOffset_6912.readProperty_location (), GALGAS_string ("attribute should be @offset"), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 177)) ;
      }
    }
    GALGAS_expressionAST var_registerOffset_7109 ;
    nt_expression_ (ioArgument_ioAST, var_registerOffset_7109, inCompiler) ;
    GALGAS_bool var_isReadOnly_7140 ;
    switch (select_omnibus_5F_syntax_24 (inCompiler)) {
    case 1: {
      var_isReadOnly_7140 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      GALGAS_lstring var_attribute_7226 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 184)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsNotEqual, var_attribute_7226.readProperty_string ().objectCompare (GALGAS_string ("ro"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          appendFixItActions (fixItArray3, kFixItReplace, GALGAS_string ("@ro")) ;
          inCompiler->emitSemanticError (var_attribute_7226.readProperty_location (), GALGAS_string ("attribute should be @ro"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 186)) ;
        }
      }
      var_isReadOnly_7140 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    ioArgument_ioRegisterDeclarationList.addAssign_operation (var_registerName_6864, GALGAS_controlRegisterKind::constructor_scalar (SOURCE_FILE ("declaration-control-register.galgas", 192)), var_isReadOnly_7140, var_registerOffset_7109, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 195))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 190)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 197)) ;
    GALGAS_expressionAST var_sizeExpression_7586 ;
    nt_expression_ (ioArgument_ioAST, var_sizeExpression_7586, inCompiler) ;
    GALGAS_location var_sizeExpressionLocation_7611 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 199)) ;
    GALGAS_lstring var_attributeOffset_7675 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 200)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, var_attributeOffset_7675.readProperty_string ().objectCompare (GALGAS_string ("offset"))).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        appendFixItActions (fixItArray5, kFixItReplace, GALGAS_string ("@offset")) ;
        inCompiler->emitSemanticError (var_attributeOffset_7675.readProperty_location (), GALGAS_string ("attribute should be @offset"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 202)) ;
      }
    }
    GALGAS_expressionAST var_baseAddressExpression_7872 ;
    nt_expression_ (ioArgument_ioAST, var_baseAddressExpression_7872, inCompiler) ;
    GALGAS_location var_baseAddressExpressionLocation_7904 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 205)) ;
    GALGAS_lstring var_attributeInc_7975 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 206)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsNotEqual, var_attributeInc_7975.readProperty_string ().objectCompare (GALGAS_string ("inc"))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("@inc")) ;
        inCompiler->emitSemanticError (var_attributeInc_7975.readProperty_location (), GALGAS_string ("attribute should be @inc"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 208)) ;
      }
    }
    GALGAS_expressionAST var_arrayElementSizeExpression_8154 ;
    nt_expression_ (ioArgument_ioAST, var_arrayElementSizeExpression_8154, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 211)) ;
    GALGAS_bool var_isReadOnly_8207 ;
    switch (select_omnibus_5F_syntax_25 (inCompiler)) {
    case 1: {
      var_isReadOnly_8207 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      GALGAS_lstring var_attribute_8293 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 216)) ;
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsNotEqual, var_attribute_8293.readProperty_string ().objectCompare (GALGAS_string ("ro"))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, kFixItReplace, GALGAS_string ("@ro")) ;
          inCompiler->emitSemanticError (var_attribute_8293.readProperty_location (), GALGAS_string ("attribute should be @ro"), fixItArray9  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 218)) ;
        }
      }
      var_isReadOnly_8207 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_arrayElementSizeExpressionLocation_8480 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 222)) ;
    ioArgument_ioRegisterDeclarationList.addAssign_operation (var_registerName_6864, GALGAS_controlRegisterKind::constructor_registerArray (var_sizeExpression_7586, var_sizeExpressionLocation_7611, var_arrayElementSizeExpression_8154, var_arrayElementSizeExpressionLocation_8480  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 225)), var_isReadOnly_8207, var_baseAddressExpression_7872, var_baseAddressExpressionLocation_7904  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 223)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_registerDeclaration_i16_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 173)) ;
  switch (select_omnibus_5F_syntax_23 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 175)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_omnibus_5F_syntax_24 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 184)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 197)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 200)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 206)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 211)) ;
    switch (select_omnibus_5F_syntax_25 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 216)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_registerDeclaration_i16_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 173)) ;
  switch (select_omnibus_5F_syntax_23 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 175)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_omnibus_5F_syntax_24 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 184)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 197)) ;
    nt_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 200)) ;
    nt_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 206)) ;
    nt_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 211)) ;
    switch (select_omnibus_5F_syntax_25 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 216)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i17_ (GALGAS_ast & ioArgument_ioAST,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 242)) ;
  GALGAS_lstring var_attribute_9310 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 243)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_attribute_9310.readProperty_string ().objectCompare (function_userAttributeForRegister (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 244)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_attribute_9310.readProperty_location (), GALGAS_string ("this attribute should be @").add_operation (function_userAttributeForRegister (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 245)), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 245)) ;
    }
  }
  GALGAS_lstring var_registerGroupName_9493 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 247)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 248)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GALGAS_lstring var_registerName_9554 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 250)) ;
    GALGAS_lstring var_key_9577 = GALGAS_lstring::constructor_new (GALGAS_string ("#").add_operation (var_registerGroupName_9493.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 251)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 251)).add_operation (var_registerName_9554.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 251)), var_registerName_9554.readProperty_location ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 251)) ;
    {
    ioArgument_ioAST.mProperty_mControlRegisterUserAccesMapAST.setter_insertKey (var_key_9577, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 252)) ;
    }
    switch (select_omnibus_5F_syntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 254)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 256)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i17_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 242)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 243)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 247)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 248)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 250)) ;
    switch (select_omnibus_5F_syntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 254)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 256)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i17_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 242)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 243)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 247)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 248)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 250)) ;
    switch (select_omnibus_5F_syntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 254)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 256)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i18_ (GALGAS_ast & ioArgument_ioAST,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 27)) ;
  GALGAS_lstringlist var_attributeList_1492 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-global-constant.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_27 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_1556 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 31)) ;
      var_attributeList_1492.addAssign_operation (var_attribute_1556  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 32)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_constantName_1630 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 34)) ;
  GALGAS_lstring var_typeName_1660 ;
  switch (select_omnibus_5F_syntax_28 (inCompiler)) {
  case 1: {
    var_typeName_1660 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-constant.galgas", 37)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1660, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 41)) ;
  GALGAS_expressionAST var_expression_1820 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1820, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_globalConstantDeclarationAST::constructor_new (var_constantName_1630, var_attributeList_1492, var_typeName_1660, var_expression_1820  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 43))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i18_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 31)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 34)) ;
  switch (select_omnibus_5F_syntax_28 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 41)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i18_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 31)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 34)) ;
  switch (select_omnibus_5F_syntax_28 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 41)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i19_ (GALGAS_ast & ioArgument_ioAST,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 20)) ;
  GALGAS_lstring var_syncInstanceName_1148 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 21)) ;
  GALGAS_lstring var_syncTypeName_1182 ;
  switch (select_omnibus_5F_syntax_29 (inCompiler)) {
  case 1: {
    var_syncTypeName_1182 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 24)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_syncTypeName_1182, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 28)) ;
  GALGAS_expressionAST var_expression_1351 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1351, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_syncToolInstanceDeclarationAST::constructor_new (var_syncTypeName_1182, var_syncInstanceName_1148, var_expression_1351  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 30))  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i19_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 21)) ;
  switch (select_omnibus_5F_syntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 28)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i19_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 21)) ;
  switch (select_omnibus_5F_syntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 28)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i20_ (GALGAS_ast & ioArgument_ioAST,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 64)) ;
  GALGAS_lstring var_driverName_2732 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 65)) ;
  GALGAS_lstringlist var_driverDependenceList_2764 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 66)) ;
  switch (select_omnibus_5F_syntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 69)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_dependenceName_2857 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 71)) ;
      var_driverDependenceList_2764.addAssign_operation (var_dependenceName_2857  COMMA_SOURCE_FILE ("declaration-driver.galgas", 72)) ;
      switch (select_omnibus_5F_syntax_31 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 74)) ;
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
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 77)) ;
  GALGAS_structurePropertyListAST var_propertyListAST_3011 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 78)) ;
  GALGAS_bool var_bootHandled_3040 = GALGAS_bool (false) ;
  GALGAS_location var_bootLocation_3068 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 80)) ;
  GALGAS_instructionListAST var_bootInstructionList_3126 = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 81)) ;
  GALGAS_location var_bootEndLocation_3159 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 82)) ;
  GALGAS_bool var_startupHandled_3200 = GALGAS_bool (false) ;
  GALGAS_location var_startupLocation_3231 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 84)) ;
  GALGAS_instructionListAST var_startupInstructionList_3292 = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 85)) ;
  GALGAS_location var_startupEndLocation_3328 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 86)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-driver.galgas", 89)) ;
      var_bootLocation_3068 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 90)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 91)) ;
      nt_instructionList_ (ioArgument_ioAST, var_bootInstructionList_3126, inCompiler) ;
      var_bootEndLocation_3159 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 93)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 94)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_bootHandled_3040.boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_bootLocation_3068, GALGAS_string ("a driver supports at most one boot routine"), fixItArray3  COMMA_SOURCE_FILE ("declaration-driver.galgas", 96)) ;
        }
      }
      var_bootHandled_3040 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-driver.galgas", 100)) ;
      var_startupLocation_3231 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 101)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 102)) ;
      nt_instructionList_ (ioArgument_ioAST, var_startupInstructionList_3292, inCompiler) ;
      var_startupEndLocation_3328 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 104)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 105)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_startupHandled_3200.boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_startupLocation_3231, GALGAS_string ("a driver supports at most one startup routine"), fixItArray5  COMMA_SOURCE_FILE ("declaration-driver.galgas", 107)) ;
        }
      }
      var_startupHandled_3200 = GALGAS_bool (true) ;
    } break ;
    case 4: {
      nt_isr_5F_in_5F_driver_ (ioArgument_ioAST, var_driverName_2732, inCompiler) ;
    } break ;
    case 5: {
      nt_struct_5F_property_5F_declaration_ (ioArgument_ioAST, GALGAS_propertyVisibility::constructor_isPrivate (SOURCE_FILE ("declaration-driver.galgas", 113)), var_propertyListAST_3011, inCompiler) ;
    } break ;
    case 6: {
      nt_function_5F_declaration_ (ioArgument_ioAST, function_omnibusTypeSpecificNameForDriver (var_driverName_2732, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 115)), inCompiler) ;
    } break ;
    case 7: {
      nt_system_5F_routine_5F_declaration_ (ioArgument_ioAST, function_omnibusTypeSpecificNameForDriver (var_driverName_2732, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 117)), inCompiler) ;
    } break ;
    case 8: {
      nt_guard_ (ioArgument_ioAST, function_omnibusTypeSpecificNameForDriver (var_driverName_2732, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 121)), function_llvmDriverNameFromName (var_driverName_2732, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 122)).readProperty_string (), inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 124)) ;
  ioArgument_ioAST.mProperty_mDriverDeclarationListAST.addAssign_operation (GALGAS_driverDeclarationAST::constructor_new (var_driverName_2732, var_driverDependenceList_2764, var_propertyListAST_3011, var_bootLocation_3068, var_bootInstructionList_3126, var_bootEndLocation_3159, var_startupLocation_3231, var_startupInstructionList_3292, var_startupEndLocation_3328  COMMA_SOURCE_FILE ("declaration-driver.galgas", 126))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 126)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i20_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 65)) ;
  switch (select_omnibus_5F_syntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 69)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 71)) ;
      switch (select_omnibus_5F_syntax_31 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 74)) ;
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
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 77)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-driver.galgas", 89)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 91)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 94)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-driver.galgas", 100)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 102)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 105)) ;
    } break ;
    case 4: {
      nt_isr_5F_in_5F_driver_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_struct_5F_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_function_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_system_5F_routine_5F_declaration_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_guard_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 124)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i20_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 65)) ;
  switch (select_omnibus_5F_syntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 69)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 71)) ;
      switch (select_omnibus_5F_syntax_31 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 74)) ;
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
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 77)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-driver.galgas", 89)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 91)) ;
      nt_instructionList_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 94)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-driver.galgas", 100)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 102)) ;
      nt_instructionList_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 105)) ;
    } break ;
    case 4: {
      nt_isr_5F_in_5F_driver_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_struct_5F_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_function_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_system_5F_routine_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_guard_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 124)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i21_ (GALGAS_ast & ioArgument_ioAST,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 142)) ;
  GALGAS_lstring var_driverName_5084 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 143)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 144)) ;
  GALGAS_driverInstanciationArgumentListAST var_driverInstanciationArgumentList_5147 = GALGAS_driverInstanciationArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 145)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_33 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_5229 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 148)) ;
      GALGAS_expressionAST var_expression_5270 ;
      nt_expression_ (ioArgument_ioAST, var_expression_5270, inCompiler) ;
      var_driverInstanciationArgumentList_5147.addAssign_operation (var_selector_5229, var_expression_5270  COMMA_SOURCE_FILE ("declaration-driver.galgas", 150)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 152)) ;
  ioArgument_ioAST.mProperty_mRequiredDriverListAST.addAssign_operation (var_driverName_5084, var_driverInstanciationArgumentList_5147  COMMA_SOURCE_FILE ("declaration-driver.galgas", 153)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i21_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 142)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 143)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_33 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 148)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 152)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i21_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 142)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 143)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_33 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 148)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 152)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i22_ (GALGAS_ast & ioArgument_ioAST,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas", 62)) ;
  GALGAS_lstring var_staticListName_2822 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 64)) ;
  GALGAS_staticListPropertyListAST var_propertyList_2880 = GALGAS_staticListPropertyListAST::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 65)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_staticArrayProperty_ (ioArgument_ioAST, var_propertyList_2880, inCompiler) ;
    switch (select_omnibus_5F_syntax_34 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 70)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_staticListAST::constructor_new (var_staticListName_2822, var_propertyList_2880, GALGAS_staticListValueListAST::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 71))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 71))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 71)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i22_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_staticArrayProperty_parse (inCompiler) ;
    switch (select_omnibus_5F_syntax_34 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 70)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i22_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_staticArrayProperty_indexing (inCompiler) ;
    switch (select_omnibus_5F_syntax_34 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 70)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_staticArrayProperty_i23_ (GALGAS_ast & ioArgument_ioAST,
                                                                                 GALGAS_staticListPropertyListAST & ioArgument_ioPropertyList,
                                                                                 C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-static-list.galgas", 77)) ;
  GALGAS_lstring var_propertyName_3321 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 78)) ;
  switch (select_omnibus_5F_syntax_35 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_typeName_3382 ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_3382, inCompiler) ;
    ioArgument_ioPropertyList.addAssign_operation (var_propertyName_3321, GALGAS_staticListPropertyTypeAST::constructor_valueType (var_typeName_3382  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 81))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 81)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas", 83)) ;
    GALGAS_mode var_mode_3495 ;
    nt_mode_ (var_mode_3495, inCompiler) ;
    GALGAS_lstringlist var_attributeList_3523 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 85)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_omnibus_5F_syntax_36 (inCompiler)) {
      case 2: {
        GALGAS_lstring var_attribute_3593 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-static-list.galgas", 88)) ;
        var_attributeList_3523.addAssign_operation (var_attribute_3593  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 89)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    GALGAS_routineFormalArgumentListAST var_formalArgs_3697 ;
    nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgs_3697, inCompiler) ;
    GALGAS_lstring var_returnType_3727 ;
    switch (select_omnibus_5F_syntax_37 (inCompiler)) {
    case 1: {
      var_returnType_3727 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 94)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 96)) ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_returnType_3727, inCompiler) ;
    } break ;
    default:
      break ;
    }
    ioArgument_ioPropertyList.addAssign_operation (var_propertyName_3321, GALGAS_staticListPropertyTypeAST::constructor_function (var_mode_3495, var_formalArgs_3697, var_returnType_3727  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 99))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 99)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_staticArrayProperty_i23_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-static-list.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 78)) ;
  switch (select_omnibus_5F_syntax_35 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas", 83)) ;
    nt_mode_parse (inCompiler) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_omnibus_5F_syntax_36 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-static-list.galgas", 88)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
    switch (select_omnibus_5F_syntax_37 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 96)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_staticArrayProperty_i23_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-static-list.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 78)) ;
  switch (select_omnibus_5F_syntax_35 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas", 83)) ;
    nt_mode_indexing (inCompiler) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_omnibus_5F_syntax_36 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-static-list.galgas", 88)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    nt_procedure_5F_formal_5F_arguments_indexing (inCompiler) ;
    switch (select_omnibus_5F_syntax_37 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 96)) ;
      nt_type_5F_definition_indexing (inCompiler) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i24_ (GALGAS_ast & ioArgument_ioAST,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("declaration-static-list.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas", 109)) ;
  GALGAS_lstring var_staticListName_4334 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 110)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 111)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_extendStaticListElementAST var_expressions_4406 = GALGAS_extendStaticListElementAST::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 113)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_selector_4462 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 115)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsNotEqual, var_selector_4462.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_selector_4462.readProperty_location (), GALGAS_string ("selector should be empty"), fixItArray3  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 117)) ;
        }
      }
      nt_staticArray_5F_exp_ (ioArgument_ioAST, var_expressions_4406, inCompiler) ;
      switch (select_omnibus_5F_syntax_39 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    GALGAS_staticListValueListAST var_expressionList_4679 = GALGAS_staticListValueListAST::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 122)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = ioArgument_ioAST.readProperty_mExtendStaticArrayDeclarationAST ().getter_hasKey (var_staticListName_4334.readProperty_string () COMMA_SOURCE_FILE ("declaration-static-list.galgas", 123)).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioAST.readProperty_mExtendStaticArrayDeclarationAST ().method_searchKey (var_staticListName_4334.readProperty_string (), var_expressionList_4679, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 124)) ;
      }
    }
    var_expressionList_4679.addAssign_operation (var_expressions_4406, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 126))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 126)) ;
    ioArgument_ioAST.mProperty_mExtendStaticArrayDeclarationAST.addAssign_operation (var_staticListName_4334.readProperty_string (), var_expressionList_4679, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 127)) ;
    switch (select_omnibus_5F_syntax_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 129)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 131)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i24_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("declaration-static-list.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas", 109)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 110)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 111)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 115)) ;
      nt_staticArray_5F_exp_parse (inCompiler) ;
      switch (select_omnibus_5F_syntax_39 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    switch (select_omnibus_5F_syntax_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 129)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 131)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i24_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("declaration-static-list.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas", 109)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 110)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 111)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 115)) ;
      nt_staticArray_5F_exp_indexing (inCompiler) ;
      switch (select_omnibus_5F_syntax_39 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    switch (select_omnibus_5F_syntax_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 129)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 131)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_staticArray_5F_exp_i25_ (GALGAS_ast & ioArgument_ioAST,
                                                                                GALGAS_extendStaticListElementAST & ioArgument_ioExpressions,
                                                                                C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_40 (inCompiler)) {
  case 1: {
    GALGAS_expressionAST var_exp_5292 ;
    nt_expression_ (ioArgument_ioAST, var_exp_5292, inCompiler) ;
    ioArgument_ioExpressions.addAssign_operation (GALGAS_extendStaticListExpressionAST::constructor_expression (var_exp_5292  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 139)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 139))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 139)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas", 141)) ;
    GALGAS_lstring var_functionName_5394 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 142)) ;
    GALGAS_routineFormalArgumentListAST var_formalArgs_5455 ;
    nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgs_5455, inCompiler) ;
    ioArgument_ioExpressions.addAssign_operation (GALGAS_extendStaticListExpressionAST::constructor_function (var_functionName_5394, var_formalArgs_5455  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 145)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 146))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 144)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_staticArray_5F_exp_i25_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_40 (inCompiler)) {
  case 1: {
    nt_expression_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas", 141)) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 142)) ;
    nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_staticArray_5F_exp_i25_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_40 (inCompiler)) {
  case 1: {
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas", 141)) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 142)) ;
    nt_procedure_5F_formal_5F_arguments_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i26_ (GALGAS_ast & /* ioArgument_ioAST */,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_option COMMA_SOURCE_FILE ("declaration-option.galgas", 10)) ;
  GALGAS_lstring var_constantName_598 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-option.galgas", 11)) ;
  GALGAS_stringlist var_suggestionList_631 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("declaration-option.galgas", 12)) ;
  GALGAS_bool var_found_659 = GALGAS_bool (false) ;
  cEnumerator__32_stringlist enumerator_689 (GALGAS_application::constructor_boolOptionNameList (SOURCE_FILE ("declaration-option.galgas", 14)), kENUMERATION_UP) ;
  bool bool_0 = var_found_659.operator_not (SOURCE_FILE ("declaration-option.galgas", 14)).isValidAndTrue () ;
  if (enumerator_689.hasCurrentObject () && bool_0) {
    while (enumerator_689.hasCurrentObject () && bool_0) {
      GALGAS_string var_invocationString_765 = GALGAS_application::constructor_boolOptionInvocationString (enumerator_689.current_mValue_30_ (HERE), enumerator_689.current_mValue_31_ (HERE)  COMMA_SOURCE_FILE ("declaration-option.galgas", 15)) ;
      var_suggestionList_631.addAssign_operation (GALGAS_string ("\"").add_operation (var_invocationString_765, inCompiler COMMA_SOURCE_FILE ("declaration-option.galgas", 16)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("declaration-option.galgas", 16))  COMMA_SOURCE_FILE ("declaration-option.galgas", 16)) ;
      var_found_659 = GALGAS_bool (kIsEqual, var_invocationString_765.objectCompare (var_constantName_598.readProperty_string ())) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_found_659.boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          GALGAS_application::class_method_setBoolOptionValue (enumerator_689.current_mValue_30_ (HERE), enumerator_689.current_mValue_31_ (HERE), GALGAS_bool (true) COMMA_SOURCE_FILE ("declaration-option.galgas", 19)) ;
          }
        }
      }
      enumerator_689.gotoNextObject () ;
      if (enumerator_689.hasCurrentObject ()) {
        bool_0 = var_found_659.operator_not (SOURCE_FILE ("declaration-option.galgas", 14)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_found_659.operator_not (SOURCE_FILE ("declaration-option.galgas", 22)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      appendFixItActions (fixItArray3, kFixItReplace, var_suggestionList_631) ;
      inCompiler->emitSemanticError (var_constantName_598.readProperty_location (), GALGAS_string ("unknown command line option"), fixItArray3  COMMA_SOURCE_FILE ("declaration-option.galgas", 23)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i26_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_option COMMA_SOURCE_FILE ("declaration-option.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-option.galgas", 11)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i26_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_option COMMA_SOURCE_FILE ("declaration-option.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-option.galgas", 11)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i27_ (GALGAS_ast & ioArgument_ioAST,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_task COMMA_SOURCE_FILE ("task-declaration.galgas", 33)) ;
  GALGAS_lstring var_taskName_1606 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 34)) ;
  GALGAS_lstringlist var_higherPriorityTaskList_1636 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 35)) ;
  switch (select_omnibus_5F_syntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 38)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_aTaskName_1731 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 40)) ;
      var_higherPriorityTaskList_1636.addAssign_operation (var_aTaskName_1731  COMMA_SOURCE_FILE ("task-declaration.galgas", 41)) ;
      switch (select_omnibus_5F_syntax_42 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-declaration.galgas", 43)) ;
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
  GALGAS_lstring var_stackSizeAttribute_1850 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 46)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_stackSizeAttribute_1850.readProperty_string ().objectCompare (GALGAS_string ("stacksize"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_stackSizeAttribute_1850.readProperty_location (), GALGAS_string ("this attribute should be @stacksize"), fixItArray2  COMMA_SOURCE_FILE ("task-declaration.galgas", 48)) ;
    }
  }
  GALGAS_lbigint var_stackSize_2029 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("task-declaration.galgas", 50)) ;
  GALGAS_bool var_autoStart_2075 = GALGAS_bool (false) ;
  switch (select_omnibus_5F_syntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_activateAttribute_2135 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 55)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsNotEqual, var_activateAttribute_2135.readProperty_string ().objectCompare (GALGAS_string ("autostart"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (var_activateAttribute_2135.readProperty_location (), GALGAS_string ("this attribute should be @autostart"), fixItArray4  COMMA_SOURCE_FILE ("task-declaration.galgas", 57)) ;
      }
    }
    var_autoStart_2075 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 61)) ;
  GALGAS_structurePropertyListAST var_taskVarList_2362 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 62)) ;
  GALGAS_taskSetupListAST var_taskSetupList_2405 = GALGAS_taskSetupListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 63)) ;
  GALGAS_taskSetupListAST var_taskActivateList_2450 = GALGAS_taskSetupListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 64)) ;
  GALGAS_taskSetupListAST var_taskDeactivateList_2498 = GALGAS_taskSetupListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 65)) ;
  GALGAS_syncInstructionBranchListAST var_branchList_2560 = GALGAS_syncInstructionBranchListAST::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 66)) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_omnibus_5F_syntax_44 (inCompiler)) {
    case 2: {
      nt_private_5F_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_taskVarList_2362, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("task-declaration.galgas", 71)) ;
      GALGAS_lstring var_procName_2710 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 72)) ;
      GALGAS_routineFormalArgumentListAST var_formalArgumentList_2797 ;
      nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_2797, inCompiler) ;
      GALGAS_lstring var_returnTypeName_2835 ;
      switch (select_omnibus_5F_syntax_45 (inCompiler)) {
      case 1: {
        var_returnTypeName_2835 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 76)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 78)) ;
        nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_2835, inCompiler) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 81)) ;
      GALGAS_instructionListAST var_instructionList_3027 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_3027, inCompiler) ;
      ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_functionDeclarationAST::constructor_new (GALGAS_mode::constructor_userMode (SOURCE_FILE ("task-declaration.galgas", 84)), GALGAS_bool (false), var_taskName_1606, var_procName_2710, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 88)), var_formalArgumentList_2797, var_returnTypeName_2835, var_instructionList_3027, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 92))  COMMA_SOURCE_FILE ("task-declaration.galgas", 83))  COMMA_SOURCE_FILE ("task-declaration.galgas", 83)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 94)) ;
    } break ;
    case 4: {
      nt_task_5F_event_ (ioArgument_ioAST, var_taskName_1606, var_taskSetupList_2405, var_taskActivateList_2450, var_taskDeactivateList_2498, inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("task-declaration.galgas", 98)) ;
      GALGAS_guardedCommandAST var_guardedCommand_3530 ;
      nt_guarded_5F_command_ (ioArgument_ioAST, GALGAS_bool (false), var_guardedCommand_3530, inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 100)) ;
      GALGAS_instructionListAST var_instructionList_3592 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_3592, inCompiler) ;
      GALGAS_location var_endOfInstructions_3618 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 102)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 103)) ;
      var_branchList_2560.addAssign_operation (var_guardedCommand_3530, var_instructionList_3592, var_endOfInstructions_3618  COMMA_SOURCE_FILE ("task-declaration.galgas", 104)) ;
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  GALGAS_location var_endOfTask_4050 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 114)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 115)) ;
  ioArgument_ioAST.mProperty_mTaskListAST.addAssign_operation (var_taskName_1606, var_higherPriorityTaskList_1636, var_stackSize_2029, var_taskSetupList_2405, var_taskActivateList_2450, var_taskDeactivateList_2498, var_branchList_2560, var_endOfTask_4050, var_autoStart_2075  COMMA_SOURCE_FILE ("task-declaration.galgas", 116)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_structureDeclarationAST::constructor_new (var_taskName_1606, var_taskName_1606, var_taskName_1606, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 130)), GALGAS_bool (false), var_taskVarList_2362, GALGAS_bool (false)  COMMA_SOURCE_FILE ("task-declaration.galgas", 126))  COMMA_SOURCE_FILE ("task-declaration.galgas", 126)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i27_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_task COMMA_SOURCE_FILE ("task-declaration.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 34)) ;
  switch (select_omnibus_5F_syntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 38)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 40)) ;
      switch (select_omnibus_5F_syntax_42 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-declaration.galgas", 43)) ;
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
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("task-declaration.galgas", 50)) ;
  switch (select_omnibus_5F_syntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 55)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 61)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_44 (inCompiler)) {
    case 2: {
      nt_private_5F_struct_5F_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("task-declaration.galgas", 71)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 72)) ;
      nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
      switch (select_omnibus_5F_syntax_45 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 78)) ;
        nt_type_5F_definition_parse (inCompiler) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 81)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 94)) ;
    } break ;
    case 4: {
      nt_task_5F_event_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("task-declaration.galgas", 98)) ;
      nt_guarded_5F_command_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 100)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 103)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 115)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i27_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_task COMMA_SOURCE_FILE ("task-declaration.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 34)) ;
  switch (select_omnibus_5F_syntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 38)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 40)) ;
      switch (select_omnibus_5F_syntax_42 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-declaration.galgas", 43)) ;
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
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("task-declaration.galgas", 50)) ;
  switch (select_omnibus_5F_syntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 55)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 61)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_44 (inCompiler)) {
    case 2: {
      nt_private_5F_struct_5F_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("task-declaration.galgas", 71)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 72)) ;
      nt_procedure_5F_formal_5F_arguments_indexing (inCompiler) ;
      switch (select_omnibus_5F_syntax_45 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 78)) ;
        nt_type_5F_definition_indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 81)) ;
      nt_instructionList_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 94)) ;
    } break ;
    case 4: {
      nt_task_5F_event_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("task-declaration.galgas", 98)) ;
      nt_guarded_5F_command_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 100)) ;
      nt_instructionList_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 103)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 115)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_task_5F_event_i28_ (GALGAS_ast & ioArgument_ioAST,
                                                                           const GALGAS_lstring constinArgument_inTaskName,
                                                                           GALGAS_taskSetupListAST & ioArgument_ioTaskSetupListAST,
                                                                           GALGAS_taskSetupListAST & ioArgument_ioTaskActivateListAST,
                                                                           GALGAS_taskSetupListAST & ioArgument_ioTaskDeactivateListAST,
                                                                           C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 28)) ;
  GALGAS_lstring var_attribute_1540 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 29)) ;
  GALGAS_lstring var_name_1572 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 30)) ;
  GALGAS_lstringlist var_dependenceList_1598 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("task-setup-declaration.galgas", 31)) ;
  switch (select_omnibus_5F_syntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 34)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_dependenceName_1685 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 36)) ;
      var_dependenceList_1598.addAssign_operation (var_dependenceName_1685  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 37)) ;
      switch (select_omnibus_5F_syntax_47 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 39)) ;
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
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 42)) ;
  GALGAS_instructionListAST var_instructionList_1827 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1827, inCompiler) ;
  GALGAS_location var_endOfInit_1851 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 45)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_attribute_1540.readProperty_string ().objectCompare (GALGAS_string ("onSetup"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioTaskSetupListAST.addAssign_operation (var_name_1572, var_dependenceList_1598  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 47)) ;
      ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_taskSetupDeclarationAST::constructor_new (constinArgument_inTaskName, GALGAS_string ("task.setup."), var_name_1572, var_dependenceList_1598, var_instructionList_1827, var_endOfInit_1851  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 48))  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 48)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, var_attribute_1540.readProperty_string ().objectCompare (GALGAS_string ("onStart"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioTaskActivateListAST.addAssign_operation (var_name_1572, var_dependenceList_1598  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 57)) ;
        ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_taskSetupDeclarationAST::constructor_new (constinArgument_inTaskName, GALGAS_string ("task.activate."), var_name_1572, var_dependenceList_1598, var_instructionList_1827, var_endOfInit_1851  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 58))  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 58)) ;
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, var_attribute_1540.readProperty_string ().objectCompare (GALGAS_string ("onTermination"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          ioArgument_ioTaskDeactivateListAST.addAssign_operation (var_name_1572, var_dependenceList_1598  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 67)) ;
          ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_taskSetupDeclarationAST::constructor_new (constinArgument_inTaskName, GALGAS_string ("task.deactivate."), var_name_1572, var_dependenceList_1598, var_instructionList_1827, var_endOfInit_1851  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 68))  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 68)) ;
        }
      }
      if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (var_attribute_1540.readProperty_location (), GALGAS_string ("attribute should be @onSetup, @onStart or @onTermination"), fixItArray4  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 77)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_task_5F_event_i28_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 30)) ;
  switch (select_omnibus_5F_syntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 34)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 36)) ;
      switch (select_omnibus_5F_syntax_47 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 39)) ;
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
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 42)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 45)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_task_5F_event_i28_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 30)) ;
  switch (select_omnibus_5F_syntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 34)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 36)) ;
      switch (select_omnibus_5F_syntax_47 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 39)) ;
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
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 42)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i29_ (GALGAS_ast & ioArgument_ioAST,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_function_5F_declaration_ (ioArgument_ioAST, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-function.galgas", 26)), inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i29_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_function_5F_declaration_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i29_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_function_5F_declaration_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_function_5F_declaration_i30_ (GALGAS_ast & ioArgument_ioAST,
                                                                                     const GALGAS_lstring constinArgument_inReceiverTypeName,
                                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_bool var_publicAccess_1777 ;
  switch (select_omnibus_5F_syntax_48 (inCompiler)) {
  case 1: {
    var_publicAccess_1777 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-function.galgas", 37)) ;
    var_publicAccess_1777 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_mode var_mode_1942 ;
  GALGAS_lstring var_procName_1963 ;
  GALGAS_lstringlist var_attributeList_1994 ;
  GALGAS_routineFormalArgumentListAST var_procFormalArgumentList_2035 ;
  nt_function_5F_header_ (ioArgument_ioAST, var_mode_1942, var_procName_1963, var_attributeList_1994, var_procFormalArgumentList_2035, inCompiler) ;
  GALGAS_lstring var_returnTypeName_2075 ;
  switch (select_omnibus_5F_syntax_49 (inCompiler)) {
  case 1: {
    var_returnTypeName_2075 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 48)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-function.galgas", 50)) ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_2075, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-function.galgas", 53)) ;
  GALGAS_instructionListAST var_instructionList_2251 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_2251, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-function.galgas", 55)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_functionDeclarationAST::constructor_new (var_mode_1942, var_publicAccess_1777, constinArgument_inReceiverTypeName, var_procName_1963, var_attributeList_1994, var_procFormalArgumentList_2035, var_returnTypeName_2075, var_instructionList_2251, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 65))  COMMA_SOURCE_FILE ("declaration-function.galgas", 56))  COMMA_SOURCE_FILE ("declaration-function.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_function_5F_declaration_i30_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_48 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-function.galgas", 37)) ;
  } break ;
  default:
    break ;
  }
  nt_function_5F_header_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_49 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-function.galgas", 50)) ;
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-function.galgas", 53)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-function.galgas", 55)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_function_5F_declaration_i30_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_48 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-function.galgas", 37)) ;
  } break ;
  default:
    break ;
  }
  nt_function_5F_header_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_49 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-function.galgas", 50)) ;
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-function.galgas", 53)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-function.galgas", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_mode_i31_ (GALGAS_mode & outArgument_outMode,
                                                                  C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outMode.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_50 (inCompiler)) {
  case 1: {
    outArgument_outMode = GALGAS_mode::constructor_anyMode (SOURCE_FILE ("declaration-function.galgas", 73)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-function.galgas", 75)) ;
    outArgument_outMode = GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-function.galgas", 76)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("declaration-function.galgas", 78)) ;
    outArgument_outMode = GALGAS_mode::constructor_panicMode (SOURCE_FILE ("declaration-function.galgas", 79)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-function.galgas", 81)) ;
    outArgument_outMode = GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-function.galgas", 82)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-function.galgas", 84)) ;
    outArgument_outMode = GALGAS_mode::constructor_startupMode (SOURCE_FILE ("declaration-function.galgas", 85)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-function.galgas", 87)) ;
    outArgument_outMode = GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("declaration-function.galgas", 88)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-function.galgas", 90)) ;
    outArgument_outMode = GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-function.galgas", 91)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-function.galgas", 93)) ;
    outArgument_outMode = GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("declaration-function.galgas", 94)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-function.galgas", 96)) ;
    outArgument_outMode = GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-function.galgas", 97)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-function.galgas", 99)) ;
    switch (select_omnibus_5F_syntax_51 (inCompiler)) {
    case 1: {
      outArgument_outMode = GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("declaration-function.galgas", 101)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-function.galgas", 103)) ;
      outArgument_outMode = GALGAS_mode::constructor_safeUserMode (SOURCE_FILE ("declaration-function.galgas", 104)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-function.galgas", 106)) ;
      outArgument_outMode = GALGAS_mode::constructor_safeSectionMode (SOURCE_FILE ("declaration-function.galgas", 107)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-function.galgas", 109)) ;
      outArgument_outMode = GALGAS_mode::constructor_safeServiceMode (SOURCE_FILE ("declaration-function.galgas", 110)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-function.galgas", 112)) ;
      outArgument_outMode = GALGAS_mode::constructor_safePrimitiveMode (SOURCE_FILE ("declaration-function.galgas", 113)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-function.galgas", 115)) ;
      outArgument_outMode = GALGAS_mode::constructor_safeGuardMode (SOURCE_FILE ("declaration-function.galgas", 116)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_mode_i31_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-function.galgas", 75)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("declaration-function.galgas", 78)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-function.galgas", 81)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-function.galgas", 84)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-function.galgas", 87)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-function.galgas", 90)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-function.galgas", 93)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-function.galgas", 96)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-function.galgas", 99)) ;
    switch (select_omnibus_5F_syntax_51 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-function.galgas", 103)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-function.galgas", 106)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-function.galgas", 109)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-function.galgas", 112)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-function.galgas", 115)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_mode_i31_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-function.galgas", 75)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("declaration-function.galgas", 78)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-function.galgas", 81)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-function.galgas", 84)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-function.galgas", 87)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-function.galgas", 90)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-function.galgas", 93)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-function.galgas", 96)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-function.galgas", 99)) ;
    switch (select_omnibus_5F_syntax_51 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-function.galgas", 103)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-function.galgas", 106)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-function.galgas", 109)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-function.galgas", 112)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-function.galgas", 115)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_function_5F_header_i32_ (GALGAS_ast & ioArgument_ioAST,
                                                                                GALGAS_mode & outArgument_outMode,
                                                                                GALGAS_lstring & outArgument_outProcName,
                                                                                GALGAS_lstringlist & outArgument_outAttributeList,
                                                                                GALGAS_routineFormalArgumentListAST & outArgument_outProcFormalArgumentList,
                                                                                C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outMode.drop () ; // Release 'out' argument
  outArgument_outProcName.drop () ; // Release 'out' argument
  outArgument_outAttributeList.drop () ; // Release 'out' argument
  outArgument_outProcFormalArgumentList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-function.galgas", 130)) ;
  outArgument_outProcName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-function.galgas", 131)) ;
  nt_mode_ (outArgument_outMode, inCompiler) ;
  outArgument_outAttributeList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-function.galgas", 133)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_52 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_3991 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-function.galgas", 136)) ;
      outArgument_outAttributeList.addAssign_operation (var_attribute_3991  COMMA_SOURCE_FILE ("declaration-function.galgas", 137)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, outArgument_outProcFormalArgumentList, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_function_5F_header_i32_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-function.galgas", 130)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-function.galgas", 131)) ;
  nt_mode_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_52 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-function.galgas", 136)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_function_5F_header_i32_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-function.galgas", 130)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-function.galgas", 131)) ;
  nt_mode_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_52 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-function.galgas", 136)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i33_ (GALGAS_ast & ioArgument_ioAST,
                                                                                              const GALGAS_lstring constinArgument_inReceiverTypeName,
                                                                                              C_Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_bool var_publicAccess_1449 ;
  switch (select_omnibus_5F_syntax_53 (inCompiler)) {
  case 1: {
    var_publicAccess_1449 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 30)) ;
    var_publicAccess_1449 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-svc.galgas", 33)) ;
  GALGAS_lstring var_name_1592 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 34)) ;
  GALGAS_mode var_mode_1611 ;
  switch (select_omnibus_5F_syntax_54 (inCompiler)) {
  case 1: {
    var_mode_1611 = GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("declaration-svc.galgas", 37)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 39)) ;
    var_mode_1611 = GALGAS_mode::constructor_safeSectionMode (SOURCE_FILE ("declaration-svc.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstringlist var_attributeList_1732 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-svc.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_55 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_1796 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 45)) ;
      var_attributeList_1732.addAssign_operation (var_attribute_1796  COMMA_SOURCE_FILE ("declaration-svc.galgas", 46)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_routineFormalArgumentListAST var_formalArgumentList_1894 ;
  nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_1894, inCompiler) ;
  GALGAS_lstring var_returnTypeName_1930 ;
  switch (select_omnibus_5F_syntax_56 (inCompiler)) {
  case 1: {
    var_returnTypeName_1930 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 51)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 53)) ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_1930, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 56)) ;
  GALGAS_instructionListAST var_instructionList_2106 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_2106, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_systemRoutineDeclarationAST::constructor_new (constinArgument_inReceiverTypeName, var_name_1592, var_mode_1611, var_publicAccess_1449, var_attributeList_1732, var_formalArgumentList_1894, var_returnTypeName_1930, var_instructionList_2106, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 67))  COMMA_SOURCE_FILE ("declaration-svc.galgas", 58))  COMMA_SOURCE_FILE ("declaration-svc.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 69)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i33_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-svc.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 34)) ;
  switch (select_omnibus_5F_syntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_55 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 45)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 53)) ;
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 56)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 69)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i33_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-svc.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 34)) ;
  switch (select_omnibus_5F_syntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_55 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 45)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 53)) ;
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 56)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 69)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i34_ (GALGAS_ast & ioArgument_ioAST,
                                                                                              const GALGAS_lstring constinArgument_inReceiverTypeName,
                                                                                              C_Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_bool var_publicAccess_2713 ;
  switch (select_omnibus_5F_syntax_57 (inCompiler)) {
  case 1: {
    var_publicAccess_2713 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 81)) ;
    var_publicAccess_2713 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-svc.galgas", 84)) ;
  GALGAS_lstring var_name_2858 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 85)) ;
  GALGAS_mode var_mode_2877 ;
  switch (select_omnibus_5F_syntax_58 (inCompiler)) {
  case 1: {
    var_mode_2877 = GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("declaration-svc.galgas", 88)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 90)) ;
    var_mode_2877 = GALGAS_mode::constructor_safePrimitiveMode (SOURCE_FILE ("declaration-svc.galgas", 91)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstringlist var_attributeList_3002 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-svc.galgas", 93)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_59 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_3066 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 96)) ;
      var_attributeList_3002.addAssign_operation (var_attribute_3066  COMMA_SOURCE_FILE ("declaration-svc.galgas", 97)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_routineFormalArgumentListAST var_formalArgumentList_3170 ;
  nt_procedure_5F_input_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_3170, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 100)) ;
  GALGAS_instructionListAST var_instructionList_3232 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_3232, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 102)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_systemRoutineDeclarationAST::constructor_new (constinArgument_inReceiverTypeName, var_name_2858, var_mode_2877, var_publicAccess_2713, var_attributeList_3002, var_formalArgumentList_3170, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 110)), var_instructionList_3232, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 112))  COMMA_SOURCE_FILE ("declaration-svc.galgas", 103))  COMMA_SOURCE_FILE ("declaration-svc.galgas", 103)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i34_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_57 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 81)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-svc.galgas", 84)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 85)) ;
  switch (select_omnibus_5F_syntax_58 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 90)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_59 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 96)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_procedure_5F_input_5F_formal_5F_arguments_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 100)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 102)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i34_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_57 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 81)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-svc.galgas", 84)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 85)) ;
  switch (select_omnibus_5F_syntax_58 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 90)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_59 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 96)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_procedure_5F_input_5F_formal_5F_arguments_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 100)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 102)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i35_ (GALGAS_ast & ioArgument_ioAST,
                                                                                              const GALGAS_lstring constinArgument_inReceiverTypeName,
                                                                                              C_Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_bool var_publicAccess_3745 ;
  switch (select_omnibus_5F_syntax_60 (inCompiler)) {
  case 1: {
    var_publicAccess_3745 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 123)) ;
    var_publicAccess_3745 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-svc.galgas", 126)) ;
  GALGAS_lstring var_name_3888 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 127)) ;
  GALGAS_mode var_mode_3907 ;
  switch (select_omnibus_5F_syntax_61 (inCompiler)) {
  case 1: {
    var_mode_3907 = GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-svc.galgas", 130)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 132)) ;
    var_mode_3907 = GALGAS_mode::constructor_safeServiceMode (SOURCE_FILE ("declaration-svc.galgas", 133)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstringlist var_attributeList_4028 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-svc.galgas", 135)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_62 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_4092 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 138)) ;
      var_attributeList_4028.addAssign_operation (var_attribute_4092  COMMA_SOURCE_FILE ("declaration-svc.galgas", 139)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_routineFormalArgumentListAST var_formalArgumentList_4196 ;
  nt_procedure_5F_input_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_4196, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 142)) ;
  GALGAS_instructionListAST var_instructionList_4258 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_4258, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 144)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_systemRoutineDeclarationAST::constructor_new (constinArgument_inReceiverTypeName, var_name_3888, var_mode_3907, var_publicAccess_3745, var_attributeList_4028, var_formalArgumentList_4196, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 152)), var_instructionList_4258, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 154))  COMMA_SOURCE_FILE ("declaration-svc.galgas", 145))  COMMA_SOURCE_FILE ("declaration-svc.galgas", 145)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i35_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_60 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 123)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-svc.galgas", 126)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 127)) ;
  switch (select_omnibus_5F_syntax_61 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 132)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_62 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 138)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_procedure_5F_input_5F_formal_5F_arguments_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 142)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 144)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i35_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_60 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 123)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-svc.galgas", 126)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 127)) ;
  switch (select_omnibus_5F_syntax_61 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 132)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_62 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 138)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_procedure_5F_input_5F_formal_5F_arguments_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 142)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 144)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i36_ (GALGAS_ast & ioArgument_ioAST,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_required COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 22)) ;
  GALGAS_mode var_mode_1238 ;
  GALGAS_lstring var_procName_1259 ;
  GALGAS_lstringlist var_attributeList_1290 ;
  GALGAS_routineFormalArgumentListAST var_procFormalArgumentList_1331 ;
  nt_function_5F_header_ (ioArgument_ioAST, var_mode_1238, var_procName_1259, var_attributeList_1290, var_procFormalArgumentList_1331, inCompiler) ;
  GALGAS_bool var_isGlobal_1362 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_1388 (var_attributeList_1290, kENUMERATION_UP) ;
  while (enumerator_1388.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_1388.current_mValue (HERE).readProperty_string ().objectCompare (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 31)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_isGlobal_1362.boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (enumerator_1388.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 33)) ;
          }
        }
        if (kBoolFalse == test_1) {
          var_isGlobal_1362 = GALGAS_bool (true) ;
        }
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
      appendFixItActions (fixItArray3, kFixItReplace, GALGAS_string ("@").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 38))) ;
      inCompiler->emitSemanticError (enumerator_1388.current_mValue (HERE).readProperty_location (), GALGAS_string ("invalid attribute"), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 38)) ;
    }
    enumerator_1388.gotoNextObject () ;
  }
  ioArgument_ioAST.mProperty_mRequiredFunctionListAST.addAssign_operation (var_procName_1259, var_mode_1238, var_isGlobal_1362, var_procFormalArgumentList_1331, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 46))  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i36_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_required COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 22)) ;
  nt_function_5F_header_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i36_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_required COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 22)) ;
  nt_function_5F_header_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i37_ (GALGAS_ast & ioArgument_ioAST,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 24)) ;
  GALGAS_mode var_mode_1340 ;
  GALGAS_lstring var_procName_1361 ;
  GALGAS_lstringlist var_attributeList_1392 ;
  GALGAS_routineFormalArgumentListAST var_procFormalArgumentList_1433 ;
  nt_function_5F_header_ (ioArgument_ioAST, var_mode_1340, var_procName_1361, var_attributeList_1392, var_procFormalArgumentList_1433, inCompiler) ;
  GALGAS_lstring var_returnTypeName_1473 ;
  switch (select_omnibus_5F_syntax_63 (inCompiler)) {
  case 1: {
    var_returnTypeName_1473 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 33)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 35)) ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_1473, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 38)) ;
  GALGAS_lstring var_llvmName_1634 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 39)) ;
  ioArgument_ioAST.mProperty_mExternFunctionListAST.addAssign_operation (var_procName_1361, var_mode_1340, var_attributeList_1392, var_procFormalArgumentList_1433, var_returnTypeName_1473, var_llvmName_1634, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 47))  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i37_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 24)) ;
  nt_function_5F_header_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_63 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 35)) ;
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 39)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i37_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 24)) ;
  nt_function_5F_header_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_63 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 35)) ;
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_isr_5F_in_5F_driver_i38_ (GALGAS_ast & ioArgument_ioAST,
                                                                                 const GALGAS_lstring constinArgument_inDriverName,
                                                                                 C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("declaration-isr.galgas", 22)) ;
  GALGAS_mode var_mode_1226 ;
  switch (select_omnibus_5F_syntax_64 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-isr.galgas", 25)) ;
    var_mode_1226 = GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-isr.galgas", 26)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-isr.galgas", 28)) ;
    var_mode_1226 = GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("declaration-isr.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_isrName_1364 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-isr.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 32)) ;
  GALGAS_instructionListAST var_instructionList_1415 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1415, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 34)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_isrDeclarationAST::constructor_new (var_isrName_1364, var_mode_1226, constinArgument_inDriverName, var_instructionList_1415, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 40))  COMMA_SOURCE_FILE ("declaration-isr.galgas", 35))  COMMA_SOURCE_FILE ("declaration-isr.galgas", 35)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_isr_5F_in_5F_driver_i38_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("declaration-isr.galgas", 22)) ;
  switch (select_omnibus_5F_syntax_64 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-isr.galgas", 25)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-isr.galgas", 28)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-isr.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 32)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 34)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_isr_5F_in_5F_driver_i38_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("declaration-isr.galgas", 22)) ;
  switch (select_omnibus_5F_syntax_64 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-isr.galgas", 25)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-isr.galgas", 28)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-isr.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 32)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guard_i39_ (GALGAS_ast & ioArgument_ioAST,
                                                                   const GALGAS_lstring constinArgument_inReceiverTypeName,
                                                                   const GALGAS_string constinArgument_inReceiverLLVMBaseTypeName,
                                                                   C_Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_bool var_publicAccess_1778 ;
  switch (select_omnibus_5F_syntax_65 (inCompiler)) {
  case 1: {
    var_publicAccess_1778 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-guard.galgas", 39)) ;
    var_publicAccess_1778 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-guard.galgas", 42)) ;
  GALGAS_lstring var_guardName_1919 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-guard.galgas", 43)) ;
  GALGAS_lstringlist var_attributeList_1950 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_66 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_2014 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-guard.galgas", 47)) ;
      var_attributeList_1950.addAssign_operation (var_attribute_2014  COMMA_SOURCE_FILE ("declaration-guard.galgas", 48)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_routineFormalArgumentListAST var_guardFormalArgumentList_2112 ;
  nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_guardFormalArgumentList_2112, inCompiler) ;
  GALGAS_guardKind var_guardKind_2155 ;
  switch (select_omnibus_5F_syntax_67 (inCompiler)) {
  case 1: {
    var_guardKind_2155 = GALGAS_guardKind::constructor_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 53)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 55)) ;
    GALGAS_callInstructionAST var_instruction_2258 ;
    nt_procedure_5F_call_ (ioArgument_ioAST, var_instruction_2258, inCompiler) ;
    var_guardKind_2155 = GALGAS_guardKind::constructor_convenienceGuard (var_instruction_2258  COMMA_SOURCE_FILE ("declaration-guard.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 59)) ;
  GALGAS_instructionListAST var_instructionList_2377 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_2377, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 61)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_guardDeclarationAST::constructor_new (constinArgument_inReceiverTypeName, constinArgument_inReceiverLLVMBaseTypeName, var_guardName_1919, var_publicAccess_1778, var_attributeList_1950, var_guardFormalArgumentList_2112, var_guardKind_2155, var_instructionList_2377, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 72))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 63))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 63)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guard_i39_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_65 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-guard.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-guard.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-guard.galgas", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_66 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-guard.galgas", 47)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 55)) ;
    nt_procedure_5F_call_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 59)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 61)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guard_i39_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_65 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-guard.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-guard.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-guard.galgas", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_66 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-guard.galgas", 47)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 55)) ;
    nt_procedure_5F_call_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 59)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_formal_5F_arguments_i40_ (GALGAS_ast & ioArgument_ioAST,
                                                                                              GALGAS_routineFormalArgumentListAST & outArgument_outProcFormalArgumentList,
                                                                                              C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outProcFormalArgumentList.drop () ; // Release 'out' argument
  outArgument_outProcFormalArgumentList = GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("formal-arguments.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_68 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_2248 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 56)) ;
      GALGAS_lstring var_formalArgumentName_2281 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 57)) ;
      GALGAS_lstring var_formalArgumentTypeName_2338 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_2338, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_output (SOURCE_FILE ("formal-arguments.galgas", 60)), var_selector_2248, var_formalArgumentTypeName_2338, var_formalArgumentName_2281  COMMA_SOURCE_FILE ("formal-arguments.galgas", 59)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_2556 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 65)) ;
      GALGAS_lstring var_formalArgumentName_2584 ;
      switch (select_omnibus_5F_syntax_69 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 68)) ;
        var_formalArgumentName_2584 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("formal-arguments.galgas", 69)) ;
      } break ;
      case 2: {
        var_formalArgumentName_2584 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 71)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_formalArgumentTypeName_2767 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_2767, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_inputOutput (SOURCE_FILE ("formal-arguments.galgas", 75)), var_selector_2556, var_formalArgumentTypeName_2767, var_formalArgumentName_2584  COMMA_SOURCE_FILE ("formal-arguments.galgas", 74)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_2989 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 80)) ;
      GALGAS_lstring var_formalArgumentName_3017 ;
      switch (select_omnibus_5F_syntax_70 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 83)) ;
        var_formalArgumentName_3017 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("formal-arguments.galgas", 84)) ;
      } break ;
      case 2: {
        var_formalArgumentName_3017 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 86)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_formalArgumentTypeName_3201 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_3201, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("formal-arguments.galgas", 90)), var_selector_2989, var_formalArgumentTypeName_3201, var_formalArgumentName_3017  COMMA_SOURCE_FILE ("formal-arguments.galgas", 89)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 95)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_formal_5F_arguments_i40_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_68 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 56)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 57)) ;
      nt_type_5F_definition_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 65)) ;
      switch (select_omnibus_5F_syntax_69 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 68)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 71)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 80)) ;
      switch (select_omnibus_5F_syntax_70 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 83)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 86)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 95)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_formal_5F_arguments_i40_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_68 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 56)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 57)) ;
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 65)) ;
      switch (select_omnibus_5F_syntax_69 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 68)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 71)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 80)) ;
      switch (select_omnibus_5F_syntax_70 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 83)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 86)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 95)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_input_5F_formal_5F_arguments_i41_ (GALGAS_ast & ioArgument_ioAST,
                                                                                                       GALGAS_routineFormalArgumentListAST & outArgument_outProcFormalArgumentList,
                                                                                                       C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outProcFormalArgumentList.drop () ; // Release 'out' argument
  outArgument_outProcFormalArgumentList = GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("formal-arguments.galgas", 101)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 102)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_71 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_3728 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 105)) ;
      GALGAS_lstring var_formalArgumentName_3761 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 106)) ;
      GALGAS_lstring var_formalArgumentTypeName_3818 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_3818, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("formal-arguments.galgas", 109)), var_selector_3728, var_formalArgumentTypeName_3818, var_formalArgumentName_3761  COMMA_SOURCE_FILE ("formal-arguments.galgas", 108)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 114)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_input_5F_formal_5F_arguments_i41_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 102)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_71 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 105)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 106)) ;
      nt_type_5F_definition_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 114)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_input_5F_formal_5F_arguments_i41_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 102)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_71 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 105)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 106)) ;
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 114)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i42_ (GALGAS_ast & ioArgument_ioAST,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("panic.galgas", 21)) ;
  GALGAS_lstring var_attribute_1194 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("panic.galgas", 22)) ;
  GALGAS_bool var_isSetup_1218 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_attribute_1194.readProperty_string ().objectCompare (GALGAS_string ("setup"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_isSetup_1218 = GALGAS_bool (true) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsEqual, var_attribute_1194.readProperty_string ().objectCompare (GALGAS_string ("loop"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_isSetup_1218 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_attribute_1194.readProperty_location (), GALGAS_string ("attribute should be @setup or @loop"), fixItArray2  COMMA_SOURCE_FILE ("panic.galgas", 29)) ;
      var_isSetup_1218.drop () ; // Release error dropped variable
    }
  }
  GALGAS_lbigint var_priority_1459 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("panic.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("panic.galgas", 32)) ;
  GALGAS_instructionListAST var_instructionList_1511 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1511, inCompiler) ;
  GALGAS_location var_endOfInstructionList_1535 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("panic.galgas", 35)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_panicAST::constructor_new (var_isSetup_1218, var_instructionList_1511, var_endOfInstructionList_1535, var_priority_1459  COMMA_SOURCE_FILE ("panic.galgas", 36))  COMMA_SOURCE_FILE ("panic.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i42_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("panic.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("panic.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("panic.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("panic.galgas", 32)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("panic.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i42_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("panic.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("panic.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("panic.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("panic.galgas", 32)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("panic.galgas", 35)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i43_ (GALGAS_ast & ioArgument_ioAST,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 44)) ;
  GALGAS_lstring var_receiverName_2112 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 45)) ;
  GALGAS_lstring var_receiverTypeName_2143 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 47)) ;
  GALGAS_lstring var_converterName_2190 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 49)) ;
  GALGAS_ctExpressionAST var_expression_2264 ;
  nt_compile_5F_time_5F_expression_ (var_expression_2264, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 51)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_compileTimeConvertToBooleanAST::constructor_new (var_receiverName_2112, var_receiverTypeName_2143, var_converterName_2190, var_expression_2264  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 52))  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i43_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 49)) ;
  nt_compile_5F_time_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 51)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i43_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 49)) ;
  nt_compile_5F_time_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 51)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i44_ (GALGAS_ast & ioArgument_ioAST,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_lstring var_receiverName_2639 ;
  GALGAS_lstring var_receiverTypeName_2657 ;
  GALGAS_genericFormalParameterList var_receiverGenericFormalParameterList_2686 ;
  nt_llvm_5F_function_5F_header_ (var_receiverName_2639, var_receiverTypeName_2657, var_receiverGenericFormalParameterList_2686, inCompiler) ;
  GALGAS_lstring var_converterName_2743 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 65)) ;
  GALGAS_llvmGenerationInstructionList var_instructionList_2798 ;
  nt_llvm_5F_instruction_5F_list_ (var_instructionList_2798, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 67)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_llvmConvertToBooleanAST::constructor_new (var_receiverName_2639, var_receiverTypeName_2657, var_converterName_2743, var_instructionList_2798  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 68))  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i44_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_llvm_5F_function_5F_header_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 65)) ;
  nt_llvm_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 67)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i44_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_llvm_5F_function_5F_header_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 65)) ;
  nt_llvm_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 67)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_i45_ (GALGAS_ast & ioArgument_ioAST,
                                                                        GALGAS_expressionAST & outArgument_outExpression,
                                                                        C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_logical_5F_and_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_72 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 20)) ;
      GALGAS_location var_operatorLocation_1082 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 21)) ;
      GALGAS_expressionAST var_rightExpression_1160 ;
      nt_expression_5F_logical_5F_and_ (ioArgument_ioAST, var_rightExpression_1160, inCompiler) ;
      GALGAS_booleanShortCircuitAndOperatorExpressionAST var_andExpression_1238 = GALGAS_booleanShortCircuitAndOperatorExpressionAST::constructor_new (GALGAS_prefixOperatorExpressionAST::constructor_new (var_operatorLocation_1082, GALGAS_prefixOperator::constructor_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 25)), outArgument_outExpression  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 25)), var_operatorLocation_1082, GALGAS_prefixOperatorExpressionAST::constructor_new (var_operatorLocation_1082, GALGAS_prefixOperator::constructor_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 27)), var_rightExpression_1160  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 27))  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 24)) ;
      outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::constructor_new (var_operatorLocation_1082, GALGAS_prefixOperator::constructor_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 31)), var_andExpression_1238  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 29)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_i45_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_logical_5F_and_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_72 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 20)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_i45_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_logical_5F_and_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_72 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 20)) ;
      nt_expression_5F_logical_5F_and_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_logical_5F_and_i46_ (GALGAS_ast & ioArgument_ioAST,
                                                                                          GALGAS_expressionAST & outArgument_outExpression,
                                                                                          C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_bitwise_5F_or_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_73 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__26__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 61)) ;
      GALGAS_location var_operatorLocation_2533 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 62)) ;
      GALGAS_expressionAST var_rightExpression_2610 ;
      nt_expression_5F_bitwise_5F_or_ (ioArgument_ioAST, var_rightExpression_2610, inCompiler) ;
      outArgument_outExpression = GALGAS_booleanShortCircuitAndOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_2533, var_rightExpression_2610  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 64)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_logical_5F_and_i46_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_or_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_73 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__26__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 61)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_logical_5F_and_i46_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_or_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_73 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__26__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 61)) ;
      nt_expression_5F_bitwise_5F_or_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_or_i47_ (GALGAS_ast & ioArgument_ioAST,
                                                                                         GALGAS_expressionAST & outArgument_outExpression,
                                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_bitwise_5F_xor_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_74 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 78)) ;
      GALGAS_location var_operatorLocation_3085 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 79)) ;
      GALGAS_expressionAST var_rightExpression_3163 ;
      nt_expression_5F_bitwise_5F_xor_ (ioArgument_ioAST, var_rightExpression_3163, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_3085, GALGAS_omnibusInfixOperator::constructor_bitWiseOrOp (SOURCE_FILE ("expression-operator-priority.galgas", 84)), var_rightExpression_3163  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 81)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_or_i47_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_xor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_74 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 78)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_or_i47_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_xor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_74 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 78)) ;
      nt_expression_5F_bitwise_5F_xor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_xor_i48_ (GALGAS_ast & ioArgument_ioAST,
                                                                                          GALGAS_expressionAST & outArgument_outExpression,
                                                                                          C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_bitwise_5F_and_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_75 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 96)) ;
      GALGAS_location var_operatorLocation_3651 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 97)) ;
      GALGAS_expressionAST var_rightExpression_3729 ;
      nt_expression_5F_bitwise_5F_and_ (ioArgument_ioAST, var_rightExpression_3729, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_3651, GALGAS_omnibusInfixOperator::constructor_bitWiseXorOp (SOURCE_FILE ("expression-operator-priority.galgas", 102)), var_rightExpression_3729  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 99)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_xor_i48_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_and_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_75 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 96)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_xor_i48_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_and_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_75 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 96)) ;
      nt_expression_5F_bitwise_5F_and_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_and_i49_ (GALGAS_ast & ioArgument_ioAST,
                                                                                          GALGAS_expressionAST & outArgument_outExpression,
                                                                                          C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_equality_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_76 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 114)) ;
      GALGAS_location var_operatorLocation_4216 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 115)) ;
      GALGAS_expressionAST var_rightExpression_4291 ;
      nt_expression_5F_equality_ (ioArgument_ioAST, var_rightExpression_4291, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_4216, GALGAS_omnibusInfixOperator::constructor_bitWiseAndOp (SOURCE_FILE ("expression-operator-priority.galgas", 120)), var_rightExpression_4291  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 117)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_and_i49_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_equality_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_76 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 114)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_and_i49_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_equality_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_76 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 114)) ;
      nt_expression_5F_equality_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_equality_i50_ (GALGAS_ast & ioArgument_ioAST,
                                                                                    GALGAS_expressionAST & outArgument_outExpression,
                                                                                    C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_comparison_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  switch (select_omnibus_5F_syntax_77 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 132)) ;
    GALGAS_location var_operatorLocation_4774 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 133)) ;
    GALGAS_expressionAST var_rightExpression_4851 ;
    nt_expression_5F_comparison_ (ioArgument_ioAST, var_rightExpression_4851, inCompiler) ;
    outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_4774, GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("expression-operator-priority.galgas", 138)), var_rightExpression_4851  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 135)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 142)) ;
    GALGAS_location var_operatorLocation_5055 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 143)) ;
    GALGAS_expressionAST var_rightExpression_5132 ;
    nt_expression_5F_comparison_ (ioArgument_ioAST, var_rightExpression_5132, inCompiler) ;
    GALGAS_omnibusInfixOperatorExpressionAST var_expression_5158 = GALGAS_omnibusInfixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_5055, GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("expression-operator-priority.galgas", 148)), var_rightExpression_5132  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 145)) ;
    outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::constructor_new (var_operatorLocation_5055, GALGAS_prefixOperator::constructor_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 153)), var_expression_5158  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 151)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_equality_i50_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_comparison_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_77 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 132)) ;
    nt_expression_5F_comparison_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 142)) ;
    nt_expression_5F_comparison_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_equality_i50_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_comparison_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_77 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 132)) ;
    nt_expression_5F_comparison_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 142)) ;
    nt_expression_5F_comparison_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_comparison_i51_ (GALGAS_ast & ioArgument_ioAST,
                                                                                      GALGAS_expressionAST & outArgument_outExpression,
                                                                                      C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_shift_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  switch (select_omnibus_5F_syntax_78 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 165)) ;
    GALGAS_location var_operatorLocation_5732 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 166)) ;
    GALGAS_expressionAST var_rightExpression_5804 ;
    nt_expression_5F_shift_ (ioArgument_ioAST, var_rightExpression_5804, inCompiler) ;
    outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_5732, GALGAS_omnibusInfixOperator::constructor_infEqual (SOURCE_FILE ("expression-operator-priority.galgas", 171)), var_rightExpression_5804  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 168)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 175)) ;
    GALGAS_location var_operatorLocation_6011 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 176)) ;
    GALGAS_expressionAST var_rightExpression_6083 ;
    nt_expression_5F_shift_ (ioArgument_ioAST, var_rightExpression_6083, inCompiler) ;
    GALGAS_omnibusInfixOperatorExpressionAST var_expression_6109 = GALGAS_omnibusInfixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_6011, GALGAS_omnibusInfixOperator::constructor_lessThan (SOURCE_FILE ("expression-operator-priority.galgas", 181)), var_rightExpression_6083  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 178)) ;
    outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::constructor_new (var_operatorLocation_6011, GALGAS_prefixOperator::constructor_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 186)), var_expression_6109  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 184)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 190)) ;
    GALGAS_location var_operatorLocation_6418 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 191)) ;
    GALGAS_expressionAST var_rightExpression_6490 ;
    nt_expression_5F_shift_ (ioArgument_ioAST, var_rightExpression_6490, inCompiler) ;
    outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_6418, GALGAS_omnibusInfixOperator::constructor_lessThan (SOURCE_FILE ("expression-operator-priority.galgas", 196)), var_rightExpression_6490  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 193)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 200)) ;
    GALGAS_location var_operatorLocation_6697 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 201)) ;
    GALGAS_expressionAST var_rightExpression_6769 ;
    nt_expression_5F_shift_ (ioArgument_ioAST, var_rightExpression_6769, inCompiler) ;
    GALGAS_omnibusInfixOperatorExpressionAST var_expression_6795 = GALGAS_omnibusInfixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_6697, GALGAS_omnibusInfixOperator::constructor_infEqual (SOURCE_FILE ("expression-operator-priority.galgas", 206)), var_rightExpression_6769  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 203)) ;
    outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::constructor_new (var_operatorLocation_6697, GALGAS_prefixOperator::constructor_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 211)), var_expression_6795  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 209)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_comparison_i51_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_shift_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_78 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 165)) ;
    nt_expression_5F_shift_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 175)) ;
    nt_expression_5F_shift_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 190)) ;
    nt_expression_5F_shift_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 200)) ;
    nt_expression_5F_shift_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_comparison_i51_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_shift_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_78 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 165)) ;
    nt_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 175)) ;
    nt_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 190)) ;
    nt_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 200)) ;
    nt_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_shift_i52_ (GALGAS_ast & ioArgument_ioAST,
                                                                                 GALGAS_expressionAST & outArgument_outExpression,
                                                                                 C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_addition_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_79 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 223)) ;
      GALGAS_location var_operatorLocation_7374 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 224)) ;
      GALGAS_expressionAST var_rightExpression_7449 ;
      nt_expression_5F_addition_ (ioArgument_ioAST, var_rightExpression_7449, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_7374, GALGAS_omnibusInfixOperator::constructor_leftShiftOp (SOURCE_FILE ("expression-operator-priority.galgas", 229)), var_rightExpression_7449  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 226)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 233)) ;
      GALGAS_location var_operatorLocation_7663 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 234)) ;
      GALGAS_expressionAST var_rightExpression_7738 ;
      nt_expression_5F_addition_ (ioArgument_ioAST, var_rightExpression_7738, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_7663, GALGAS_omnibusInfixOperator::constructor_rightShiftOp (SOURCE_FILE ("expression-operator-priority.galgas", 239)), var_rightExpression_7738  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 236)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_shift_i52_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_addition_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_79 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 223)) ;
      nt_expression_5F_addition_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 233)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_shift_i52_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_addition_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_79 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 223)) ;
      nt_expression_5F_addition_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 233)) ;
      nt_expression_5F_addition_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_addition_i53_ (GALGAS_ast & ioArgument_ioAST,
                                                                                    GALGAS_expressionAST & outArgument_outExpression,
                                                                                    C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_product_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_80 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 251)) ;
      GALGAS_location var_operatorLocation_8220 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 252)) ;
      GALGAS_expressionAST var_rightExpression_8294 ;
      nt_expression_5F_product_ (ioArgument_ioAST, var_rightExpression_8294, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_8220, GALGAS_omnibusInfixOperator::constructor_addOp (SOURCE_FILE ("expression-operator-priority.galgas", 257)), var_rightExpression_8294  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 254)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2B__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 261)) ;
      GALGAS_location var_operatorLocation_8502 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 262)) ;
      GALGAS_expressionAST var_rightExpression_8576 ;
      nt_expression_5F_product_ (ioArgument_ioAST, var_rightExpression_8576, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_8502, GALGAS_omnibusInfixOperator::constructor_addOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 267)), var_rightExpression_8576  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 264)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 271)) ;
      GALGAS_location var_operatorLocation_8788 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 272)) ;
      GALGAS_expressionAST var_rightExpression_8862 ;
      nt_expression_5F_product_ (ioArgument_ioAST, var_rightExpression_8862, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_8788, GALGAS_omnibusInfixOperator::constructor_subOp (SOURCE_FILE ("expression-operator-priority.galgas", 277)), var_rightExpression_8862  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 274)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 281)) ;
      GALGAS_location var_operatorLocation_9070 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 282)) ;
      GALGAS_expressionAST var_rightExpression_9144 ;
      nt_expression_5F_product_ (ioArgument_ioAST, var_rightExpression_9144, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_9070, GALGAS_omnibusInfixOperator::constructor_subOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 287)), var_rightExpression_9144  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 284)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_addition_i53_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_product_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_80 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 251)) ;
      nt_expression_5F_product_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2B__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 261)) ;
      nt_expression_5F_product_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 271)) ;
      nt_expression_5F_product_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 281)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_addition_i53_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_product_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_80 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 251)) ;
      nt_expression_5F_product_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2B__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 261)) ;
      nt_expression_5F_product_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 271)) ;
      nt_expression_5F_product_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 281)) ;
      nt_expression_5F_product_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_product_i54_ (GALGAS_ast & ioArgument_ioAST,
                                                                                   GALGAS_expressionAST & outArgument_outExpression,
                                                                                   C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_81 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 299)) ;
      GALGAS_location var_operatorLocation_9612 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 300)) ;
      GALGAS_expressionAST var_rightExpression_9675 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_9675, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_9612, GALGAS_omnibusInfixOperator::constructor_mulOp (SOURCE_FILE ("expression-operator-priority.galgas", 305)), var_rightExpression_9675  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 302)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2A__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 309)) ;
      GALGAS_location var_operatorLocation_9883 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 310)) ;
      GALGAS_expressionAST var_rightExpression_9946 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_9946, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_9883, GALGAS_omnibusInfixOperator::constructor_mulOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 315)), var_rightExpression_9946  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 312)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 319)) ;
      GALGAS_location var_operatorLocation_10158 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 320)) ;
      GALGAS_expressionAST var_rightExpression_10221 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_10221, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_10158, GALGAS_omnibusInfixOperator::constructor_modOp (SOURCE_FILE ("expression-operator-priority.galgas", 325)), var_rightExpression_10221  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 322)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 329)) ;
      GALGAS_location var_operatorLocation_10429 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 330)) ;
      GALGAS_expressionAST var_rightExpression_10492 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_10492, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_10429, GALGAS_omnibusInfixOperator::constructor_modOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 335)), var_rightExpression_10492  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 332)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 339)) ;
      GALGAS_location var_operatorLocation_10704 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 340)) ;
      GALGAS_expressionAST var_rightExpression_10767 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_10767, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_10704, GALGAS_omnibusInfixOperator::constructor_divOp (SOURCE_FILE ("expression-operator-priority.galgas", 345)), var_rightExpression_10767  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 342)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 349)) ;
      GALGAS_location var_operatorLocation_10975 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 350)) ;
      GALGAS_expressionAST var_rightExpression_11038 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_11038, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_10975, GALGAS_omnibusInfixOperator::constructor_divOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 355)), var_rightExpression_11038  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 352)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_product_i54_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_81 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 299)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2A__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 309)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 319)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 329)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 339)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 349)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_product_i54_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_81 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 299)) ;
      nt_primary_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2A__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 309)) ;
      nt_primary_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 319)) ;
      nt_primary_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 329)) ;
      nt_primary_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 339)) ;
      nt_primary_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 349)) ;
      nt_primary_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i55_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 364)) ;
  GALGAS_location var_operatorLocation_11433 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 365)) ;
  GALGAS_expressionAST var_expression_11494 ;
  nt_primary_ (ioArgument_ioAST, var_expression_11494, inCompiler) ;
  outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::constructor_new (var_operatorLocation_11433, GALGAS_prefixOperator::constructor_bitWiseComplement (SOURCE_FILE ("expression-operator-priority.galgas", 369)), var_expression_11494  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 367)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i55_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 364)) ;
  nt_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i55_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 364)) ;
  nt_primary_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i56_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 377)) ;
  GALGAS_location var_operatorLocation_11841 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 378)) ;
  GALGAS_expressionAST var_expression_11902 ;
  nt_primary_ (ioArgument_ioAST, var_expression_11902, inCompiler) ;
  outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::constructor_new (var_operatorLocation_11841, GALGAS_prefixOperator::constructor_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 382)), var_expression_11902  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 380)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i56_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 377)) ;
  nt_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i56_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 377)) ;
  nt_primary_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i57_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 390)) ;
  GALGAS_location var_operatorLocation_12235 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 391)) ;
  GALGAS_expressionAST var_expression_12296 ;
  nt_primary_ (ioArgument_ioAST, var_expression_12296, inCompiler) ;
  outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::constructor_new (var_operatorLocation_12235, GALGAS_prefixOperator::constructor_minusOp (SOURCE_FILE ("expression-operator-priority.galgas", 395)), var_expression_12296  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 393)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i57_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 390)) ;
  nt_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i57_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 390)) ;
  nt_primary_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i58_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 403)) ;
  GALGAS_location var_operatorLocation_12632 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 404)) ;
  GALGAS_expressionAST var_expression_12693 ;
  nt_primary_ (ioArgument_ioAST, var_expression_12693, inCompiler) ;
  outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::constructor_new (var_operatorLocation_12632, GALGAS_prefixOperator::constructor_minusNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 408)), var_expression_12693  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 406)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i58_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 403)) ;
  nt_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i58_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 403)) ;
  nt_primary_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i59_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 416)) ;
  nt_expression_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 418)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i59_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 416)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 418)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i59_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 416)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 418)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i60_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_convert COMMA_SOURCE_FILE ("expression-convert.galgas", 20)) ;
  GALGAS_lstring var_typeName_1143 ;
  switch (select_omnibus_5F_syntax_82 (inCompiler)) {
  case 1: {
    var_typeName_1143 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 23)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1143, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-convert.galgas", 27)) ;
  nt_expression_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  GALGAS_location var_endOfExpression_1303 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-convert.galgas", 30)) ;
  outArgument_outExpression = GALGAS_convertExpressionAST::constructor_new (outArgument_outExpression, var_typeName_1143, var_endOfExpression_1303  COMMA_SOURCE_FILE ("expression-convert.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i60_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_convert COMMA_SOURCE_FILE ("expression-convert.galgas", 20)) ;
  switch (select_omnibus_5F_syntax_82 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-convert.galgas", 27)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-convert.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i60_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_convert COMMA_SOURCE_FILE ("expression-convert.galgas", 20)) ;
  switch (select_omnibus_5F_syntax_82 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-convert.galgas", 27)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-convert.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i61_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("expression-extend.galgas", 20)) ;
  GALGAS_lstring var_typeName_1143 ;
  switch (select_omnibus_5F_syntax_83 (inCompiler)) {
  case 1: {
    var_typeName_1143 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 23)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1143, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-extend.galgas", 27)) ;
  nt_expression_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  GALGAS_location var_endOfExpression_1303 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-extend.galgas", 30)) ;
  outArgument_outExpression = GALGAS_extendExpressionAST::constructor_new (outArgument_outExpression, var_typeName_1143, var_endOfExpression_1303  COMMA_SOURCE_FILE ("expression-extend.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i61_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("expression-extend.galgas", 20)) ;
  switch (select_omnibus_5F_syntax_83 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-extend.galgas", 27)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-extend.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i61_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("expression-extend.galgas", 20)) ;
  switch (select_omnibus_5F_syntax_83 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-extend.galgas", 27)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-extend.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i62_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_truncate COMMA_SOURCE_FILE ("expression-truncate.galgas", 20)) ;
  GALGAS_lstring var_typeName_1145 ;
  switch (select_omnibus_5F_syntax_84 (inCompiler)) {
  case 1: {
    var_typeName_1145 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 23)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1145, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-truncate.galgas", 27)) ;
  nt_expression_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  GALGAS_location var_endOfExpression_1305 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-truncate.galgas", 30)) ;
  outArgument_outExpression = GALGAS_truncateExpressionAST::constructor_new (outArgument_outExpression, var_typeName_1145, var_endOfExpression_1305  COMMA_SOURCE_FILE ("expression-truncate.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i62_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_truncate COMMA_SOURCE_FILE ("expression-truncate.galgas", 20)) ;
  switch (select_omnibus_5F_syntax_84 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-truncate.galgas", 27)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-truncate.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i62_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_truncate COMMA_SOURCE_FILE ("expression-truncate.galgas", 20)) ;
  switch (select_omnibus_5F_syntax_84 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-truncate.galgas", 27)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-truncate.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i63_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 18)) ;
  GALGAS_controlRegisterLValueAST var_registerLValue_1130 ;
  nt_control_5F_register_5F_lvalue_ (ioArgument_ioAST, var_registerLValue_1130, inCompiler) ;
  outArgument_outExpression = GALGAS_addressofControlRegisterAST::constructor_new (var_registerLValue_1130  COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 20)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i63_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 18)) ;
  nt_control_5F_register_5F_lvalue_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i63_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 18)) ;
  nt_control_5F_register_5F_lvalue_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i64_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 19)) ;
  GALGAS_LValueAST var_lvalue_1086 ;
  nt_lvalue_ (ioArgument_ioAST, var_lvalue_1086, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 21)) ;
  outArgument_outExpression = GALGAS_addressofExpressionAST::constructor_new (var_lvalue_1086  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i64_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 19)) ;
  nt_lvalue_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 21)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i64_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 19)) ;
  nt_lvalue_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i65_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 25)) ;
  GALGAS_LValueAST var_lvalue_1278 ;
  nt_lvalue_ (ioArgument_ioAST, var_lvalue_1278, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 27)) ;
  outArgument_outExpression = GALGAS_sizeofExpressionAST::constructor_new (var_lvalue_1278  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i65_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 25)) ;
  nt_lvalue_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 27)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i65_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 25)) ;
  nt_lvalue_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i66_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas", 34)) ;
  GALGAS_lstring var_typeName_1585 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1585, inCompiler) ;
  outArgument_outExpression = GALGAS_sizeofTypeAST::constructor_new (var_typeName_1585  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i66_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas", 34)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i66_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas", 34)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i67_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_optionalTypeName_1155 ;
  switch (select_omnibus_5F_syntax_85 (inCompiler)) {
  case 1: {
    var_optionalTypeName_1155 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 22))  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 22)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_optionalTypeName_1155, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 26)) ;
  GALGAS_lstring var_constantName_1321 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 27)) ;
  GALGAS_primaryInExpressionAccessListAST var_accessList_1405 ;
  nt_expression_5F_access_5F_list_ (ioArgument_ioAST, var_accessList_1405, inCompiler) ;
  outArgument_outExpression = GALGAS_typedConstantCallAST::constructor_new (var_optionalTypeName_1155, var_constantName_1321, var_accessList_1405  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i67_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_85 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 27)) ;
  nt_expression_5F_access_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i67_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_85 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 27)) ;
  nt_expression_5F_access_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i68_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_ifExpressionAST var_if_5F_expression_1308 ;
  nt_expression_5F_if_ (ioArgument_ioAST, var_if_5F_expression_1308, inCompiler) ;
  outArgument_outExpression = var_if_5F_expression_1308 ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i68_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_if_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i68_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_if_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_if_i69_ (GALGAS_ast & ioArgument_ioAST,
                                                                              GALGAS_ifExpressionAST & outArgument_outExpression,
                                                                              C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 30)) ;
  GALGAS_expressionAST var_ifExpression_1596 ;
  nt_expression_ (ioArgument_ioAST, var_ifExpression_1596, inCompiler) ;
  GALGAS_location var_ifExpressionEndLocation_1627 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas", 33)) ;
  GALGAS_expressionAST var_thenExpression_1697 ;
  nt_expression_ (ioArgument_ioAST, var_thenExpression_1697, inCompiler) ;
  GALGAS_location var_thenExpressionEndLocation_1730 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 37)) ;
  GALGAS_expressionAST var_elseExpression_1806 ;
  switch (select_omnibus_5F_syntax_86 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas", 40)) ;
    nt_expression_ (ioArgument_ioAST, var_elseExpression_1806, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas", 42)) ;
  } break ;
  case 2: {
    GALGAS_ifExpressionAST var_else_5F_if_5F_expression_1937 ;
    nt_expression_5F_if_ (ioArgument_ioAST, var_else_5F_if_5F_expression_1937, inCompiler) ;
    var_elseExpression_1806 = var_else_5F_if_5F_expression_1937 ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_elseExpressionEndLocation_2024 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 47)) ;
  outArgument_outExpression = GALGAS_ifExpressionAST::constructor_new (var_ifExpression_1596, var_ifExpressionEndLocation_1627, var_thenExpression_1697, var_thenExpressionEndLocation_1730, var_elseExpression_1806, var_elseExpressionEndLocation_2024  COMMA_SOURCE_FILE ("expression-if.galgas", 48)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_if_i69_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 30)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas", 33)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 37)) ;
  switch (select_omnibus_5F_syntax_86 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas", 40)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas", 42)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_if_i69_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 30)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas", 33)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 37)) ;
  switch (select_omnibus_5F_syntax_86 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas", 40)) ;
    nt_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas", 42)) ;
  } break ;
  case 2: {
    nt_expression_5F_if_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i70_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 28)) ;
  GALGAS_lstring var_typeName_1423 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 29)) ;
  GALGAS_integerSliceFieldListAST var_integerFieldValues_1466 = GALGAS_integerSliceFieldListAST::constructor_emptyList (SOURCE_FILE ("expression-integer-slice.galgas", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_sliceWidth_1525 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 32)) ;
    GALGAS_expressionAST var_expression_1568 ;
    nt_expression_ (ioArgument_ioAST, var_expression_1568, inCompiler) ;
    var_integerFieldValues_1466.addAssign_operation (var_sliceWidth_1525, var_expression_1568, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 34))  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 34)) ;
    switch (select_omnibus_5F_syntax_87 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictInf, var_integerFieldValues_1466.getter_count (SOURCE_FILE ("expression-integer-slice.galgas", 37)).objectCompare (GALGAS_uint (uint32_t (2U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 38)), GALGAS_string ("this expression should contain two bit slices or more"), fixItArray2  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 38)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    outArgument_outExpression = GALGAS_integerSliceExpressionAST::constructor_new (var_typeName_1423, var_integerFieldValues_1466, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 40))  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 40)) ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i70_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 32)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_omnibus_5F_syntax_87 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 42)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i70_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 32)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_omnibus_5F_syntax_87 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i71_ (GALGAS_ast & /* ioArgument_ioAST */,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lbigint var_integerLiteral_1082 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalIntegerInExpressionAST::constructor_new (var_integerLiteral_1082  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i71_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i71_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i72_ (GALGAS_ast & /* ioArgument_ioAST */,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_stringLiteral_1081 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalStringInExpressionAST::constructor_new (var_stringLiteral_1081  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i72_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i72_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i73_ (GALGAS_ast & /* ioArgument_ioAST */,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("expression-true-false.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalBooleanInExpressionAST::constructor_new (GALGAS_bool (true)  COMMA_SOURCE_FILE ("expression-true-false.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i73_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("expression-true-false.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i73_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("expression-true-false.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i74_ (GALGAS_ast & /* ioArgument_ioAST */,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("expression-true-false.galgas", 25)) ;
  outArgument_outExpression = GALGAS_literalBooleanInExpressionAST::constructor_new (GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-true-false.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i74_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("expression-true-false.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i74_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("expression-true-false.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i75_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_controlRegisterLValueAST var_registerLValue_1175 ;
  nt_control_5F_register_5F_lvalue_ (ioArgument_ioAST, var_registerLValue_1175, inCompiler) ;
  GALGAS_lstring var_fieldName_1207 ;
  switch (select_omnibus_5F_syntax_88 (inCompiler)) {
  case 1: {
    var_fieldName_1207 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("expression-control-register.galgas", 22)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-control-register.galgas", 24)) ;
    var_fieldName_1207 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-control-register.galgas", 25)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GALGAS_registerInExpressionAST::constructor_new (var_registerLValue_1175, var_fieldName_1207  COMMA_SOURCE_FILE ("expression-control-register.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i75_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_control_5F_register_5F_lvalue_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_88 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-control-register.galgas", 24)) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-control-register.galgas", 25)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i75_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_control_5F_register_5F_lvalue_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_88 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-control-register.galgas", 24)) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-control-register.galgas", 25)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i76_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 28)) ;
  GALGAS_lstring var_registerGroupName_1444 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 30)) ;
  GALGAS_lstring var_registerName_1492 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 31)) ;
  GALGAS_registerIntegerFieldListAST var_integerFieldValues_1542 = GALGAS_registerIntegerFieldListAST::constructor_emptyList (SOURCE_FILE ("expression-register-value-from-slices.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_registerFieldName_1601 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 34)) ;
    GALGAS_expressionAST var_expression_1651 ;
    nt_expression_ (ioArgument_ioAST, var_expression_1651, inCompiler) ;
    var_integerFieldValues_1542.addAssign_operation (var_registerFieldName_1601, var_expression_1651, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 36))  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 36)) ;
    switch (select_omnibus_5F_syntax_89 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 39)) ;
  outArgument_outExpression = GALGAS_registerConstantExpressionAST::constructor_new (var_registerGroupName_1444, var_registerName_1492, var_integerFieldValues_1542  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i76_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 34)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_omnibus_5F_syntax_89 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 39)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i76_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 34)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_omnibus_5F_syntax_89 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i77_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_receiver_1768 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 34)) ;
  GALGAS_primaryInExpressionAccessListAST var_accessList_1848 ;
  nt_expression_5F_access_5F_list_ (ioArgument_ioAST, var_accessList_1848, inCompiler) ;
  outArgument_outExpression = GALGAS_primaryInExpressionAST::constructor_new (var_receiver_1768, var_accessList_1848  COMMA_SOURCE_FILE ("expression-primary.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i77_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 34)) ;
  nt_expression_5F_access_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i77_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 34)) ;
  nt_expression_5F_access_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i78_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("expression-primary.galgas", 44)) ;
  GALGAS_lstring var_receiver_2150 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 45)) ;
  GALGAS_primaryInExpressionAccessListAST var_accessList_2242 ;
  nt_expression_5F_access_5F_list_ (ioArgument_ioAST, var_accessList_2242, inCompiler) ;
  outArgument_outExpression = GALGAS_primaryInExpressionAST::constructor_new (var_receiver_2150, var_accessList_2242  COMMA_SOURCE_FILE ("expression-primary.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i78_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("expression-primary.galgas", 44)) ;
  nt_expression_5F_access_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i78_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("expression-primary.galgas", 44)) ;
  nt_expression_5F_access_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_access_5F_list_i79_ (GALGAS_ast & ioArgument_ioAST,
                                                                                          GALGAS_primaryInExpressionAccessListAST & outArgument_outAccessList,
                                                                                          C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outAccessList.drop () ; // Release 'out' argument
  outArgument_outAccessList = GALGAS_primaryInExpressionAccessListAST::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 55)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_90 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 58)) ;
      GALGAS_lstring var_propertyName_2638 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 59)) ;
      outArgument_outAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_property (var_propertyName_2638  COMMA_SOURCE_FILE ("expression-primary.galgas", 60))  COMMA_SOURCE_FILE ("expression-primary.galgas", 60)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 62)) ;
      GALGAS_lbigint var_low_2747 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 63)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 64)) ;
      GALGAS_lbigint var_high_2784 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 65)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 66)) ;
      outArgument_outAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_integerSlice (var_low_2747, var_high_2784  COMMA_SOURCE_FILE ("expression-primary.galgas", 67))  COMMA_SOURCE_FILE ("expression-primary.galgas", 67)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 69)) ;
      GALGAS_expressionAST var_expression_2911 ;
      nt_expression_ (ioArgument_ioAST, var_expression_2911, inCompiler) ;
      GALGAS_location var_endOfIndex_2932 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 71)) ;
      GALGAS_bool var_checkIndexExpression_2976 ;
      switch (select_omnibus_5F_syntax_91 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 74)) ;
        var_checkIndexExpression_2976 = GALGAS_bool (true) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("expression-primary.galgas", 77)) ;
        var_checkIndexExpression_2976 = GALGAS_bool (false) ;
      } break ;
      default:
        break ;
      }
      outArgument_outAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_arrayAccess (var_expression_2911, var_endOfIndex_2932, var_checkIndexExpression_2976  COMMA_SOURCE_FILE ("expression-primary.galgas", 80))  COMMA_SOURCE_FILE ("expression-primary.galgas", 80)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 86)) ;
      GALGAS_lstring var_methodName_3327 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 87)) ;
      GALGAS_effectiveArgumentListAST var_arguments_3380 ;
      GALGAS_location var_endOfArguments_3395 ;
      nt_effective_5F_parameters_ (ioArgument_ioAST, var_arguments_3380, var_endOfArguments_3395, inCompiler) ;
      outArgument_outAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::constructor_funcCall (var_methodName_3327, var_arguments_3380, var_endOfArguments_3395  COMMA_SOURCE_FILE ("expression-primary.galgas", 89))  COMMA_SOURCE_FILE ("expression-primary.galgas", 89)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_access_5F_list_i79_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_90 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 58)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 59)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 62)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 63)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 64)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 65)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 66)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 69)) ;
      nt_expression_parse (inCompiler) ;
      switch (select_omnibus_5F_syntax_91 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 74)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("expression-primary.galgas", 77)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 86)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 87)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_access_5F_list_i79_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_90 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 58)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 59)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 62)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 63)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 64)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 65)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 66)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 69)) ;
      nt_expression_indexing (inCompiler) ;
      switch (select_omnibus_5F_syntax_91 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 74)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("expression-primary.galgas", 77)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 86)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 87)) ;
      nt_effective_5F_parameters_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i80_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_standaloneFunctionName_1170 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 20)) ;
  GALGAS_effectiveArgumentListAST var_arguments_1233 ;
  GALGAS_location var_endOfArguments_1248 ;
  nt_effective_5F_parameters_ (ioArgument_ioAST, var_arguments_1233, var_endOfArguments_1248, inCompiler) ;
  outArgument_outExpression = GALGAS_standaloneFunctionInExpressionAST::constructor_new (var_standaloneFunctionName_1170, var_arguments_1233, var_endOfArguments_1248  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i80_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 20)) ;
  nt_effective_5F_parameters_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i80_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 20)) ;
  nt_effective_5F_parameters_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i81_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_1291 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1291, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 26)) ;
  GALGAS_functionCallEffectiveParameterListAST var_parameterList_1355 = GALGAS_functionCallEffectiveParameterListAST::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_92 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_1419 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 30)) ;
      GALGAS_expressionAST var_expression_1460 ;
      nt_expression_ (ioArgument_ioAST, var_expression_1460, inCompiler) ;
      var_parameterList_1355.addAssign_operation (var_selector_1419, var_expression_1460  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 32)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_location var_errorLocation_1532 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 35)) ;
  outArgument_outExpression = GALGAS_constructorCallAST::constructor_new (var_typeName_1291, var_parameterList_1355, var_errorLocation_1532  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i81_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_92 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 30)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i81_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_92 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 30)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 35)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compileTimeInfixOperator_i82_ (GALGAS_compileTimeInfixOperatorEnumeration & outArgument_outOperator,
                                                                                      C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperator.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_93 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 96)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::constructor_equal (SOURCE_FILE ("infix-operator-compile-time.galgas", 97)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 99)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::constructor_lessThan (SOURCE_FILE ("infix-operator-compile-time.galgas", 100)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 102)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::constructor_bitWiseAndOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 103)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 105)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::constructor_bitWiseOrOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 106)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 108)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::constructor_bitWiseXorOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 109)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 111)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::constructor_addOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 112)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 114)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::constructor_subOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 115)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 117)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::constructor_mulOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 118)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 120)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::constructor_divOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 121)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 123)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::constructor_divNoOvf (SOURCE_FILE ("infix-operator-compile-time.galgas", 124)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 126)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::constructor_modOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 127)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 129)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::constructor_moduloNoOvf (SOURCE_FILE ("infix-operator-compile-time.galgas", 130)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 132)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::constructor_leftShift (SOURCE_FILE ("infix-operator-compile-time.galgas", 133)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 135)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::constructor_rightShift (SOURCE_FILE ("infix-operator-compile-time.galgas", 136)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compileTimeInfixOperator_i82_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_93 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 96)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 99)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 102)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 105)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 108)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 111)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 114)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 117)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 120)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 123)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 126)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 129)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 132)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 135)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compileTimeInfixOperator_i82_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_93 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 96)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 99)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 102)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 105)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 108)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 111)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 114)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 117)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 120)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 123)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 126)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 129)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 132)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 135)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i83_ (GALGAS_ast & ioArgument_ioAST,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 143)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 144)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 145)) ;
  GALGAS_lstring var_leftArgument_4523 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 146)) ;
  GALGAS_lstring var_leftType_4554 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 147)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 148)) ;
  GALGAS_location var_operationLocation_4579 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 149)) ;
  GALGAS_compileTimeInfixOperatorEnumeration var_infixOperator_4650 ;
  nt_compileTimeInfixOperator_ (var_infixOperator_4650, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 151)) ;
  GALGAS_lstring var_rightArgument_4694 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 152)) ;
  GALGAS_lstring var_rightType_4726 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 153)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 154)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 155)) ;
  GALGAS_lstring var_resultType_4771 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 156)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 157)) ;
  GALGAS_ctExpressionAST var_expression_4842 ;
  nt_compile_5F_time_5F_expression_ (var_expression_4842, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 159)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_compileTimeInfixOperatorAST::constructor_new (var_infixOperator_4650, var_operationLocation_4579, var_leftArgument_4523, var_leftType_4554, var_rightArgument_4694, var_rightType_4726, var_expression_4842, var_resultType_4771  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 160))  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 160)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i83_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 143)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 144)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 145)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 146)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 147)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 148)) ;
  nt_compileTimeInfixOperator_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 151)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 152)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 153)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 154)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 155)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 156)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 157)) ;
  nt_compile_5F_time_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 159)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i83_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 143)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 144)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 145)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 146)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 147)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 148)) ;
  nt_compileTimeInfixOperator_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 151)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 152)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 153)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 154)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 155)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 156)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 157)) ;
  nt_compile_5F_time_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 159)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i84_ (GALGAS_ast & ioArgument_ioAST,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_lstring var_leftVariableName_5110 ;
  GALGAS_lstring var_leftTypeName_5132 ;
  GALGAS_genericFormalParameterList var_leftGenericFormalParameterList_5150 ;
  nt_llvm_5F_function_5F_header_ (var_leftVariableName_5110, var_leftTypeName_5132, var_leftGenericFormalParameterList_5150, inCompiler) ;
  GALGAS_location var_operationLocation_5189 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 122)) ;
  GALGAS_compileTimeInfixOperatorEnumeration var_infixOperator_5260 ;
  nt_compileTimeInfixOperator_ (var_infixOperator_5260, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 124)) ;
  GALGAS_lstring var_rightVariableName_5304 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 125)) ;
  GALGAS_lstring var_rightType_5340 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 126)) ;
  GALGAS_genericFormalParameterList var_rightGenericFormalParameterList_5386 ;
  nt_generic_5F_formal_5F_arguments_ (var_rightGenericFormalParameterList_5386, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 129)) ;
  GALGAS_lstring var_resultType_5453 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 130)) ;
  GALGAS_genericFormalParameterList var_resultGenericFormalParameterList_5500 ;
  nt_generic_5F_formal_5F_arguments_ (var_resultGenericFormalParameterList_5500, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 132)) ;
  GALGAS_llvmGenerationInstructionList var_instructionList_5574 ;
  nt_llvm_5F_instruction_5F_list_ (var_instructionList_5574, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 134)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_llvmInfixOperatorAST::constructor_new (extensionGetter_omnibusInfixOperator (var_infixOperator_5260, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 136)), var_operationLocation_5189, var_leftVariableName_5110, var_leftTypeName_5132, var_leftGenericFormalParameterList_5150, var_rightVariableName_5304, var_rightType_5340, var_rightGenericFormalParameterList_5386, var_resultType_5453, var_resultGenericFormalParameterList_5500, var_instructionList_5574  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 135))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 135)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i84_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_llvm_5F_function_5F_header_parse (inCompiler) ;
  nt_compileTimeInfixOperator_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 124)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 125)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 126)) ;
  nt_generic_5F_formal_5F_arguments_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 129)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 130)) ;
  nt_generic_5F_formal_5F_arguments_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 132)) ;
  nt_llvm_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 134)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i84_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_llvm_5F_function_5F_header_indexing (inCompiler) ;
  nt_compileTimeInfixOperator_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 124)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 125)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 126)) ;
  nt_generic_5F_formal_5F_arguments_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 129)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 130)) ;
  nt_generic_5F_formal_5F_arguments_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 132)) ;
  nt_llvm_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 134)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compileTimePrefixOperator_i85_ (GALGAS_compileTimePrefixOperatorEnumeration & outArgument_outOperator,
                                                                                       C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperator.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_94 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 55)) ;
    outArgument_outOperator = GALGAS_compileTimePrefixOperatorEnumeration::constructor_notOp (SOURCE_FILE ("prefix-operator-compile-time.galgas", 56)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 58)) ;
    outArgument_outOperator = GALGAS_compileTimePrefixOperatorEnumeration::constructor_minusOp (SOURCE_FILE ("prefix-operator-compile-time.galgas", 59)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compileTimePrefixOperator_i85_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_94 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 55)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 58)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compileTimePrefixOperator_i85_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_94 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 55)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 58)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i86_ (GALGAS_ast & ioArgument_ioAST,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 67)) ;
  GALGAS_location var_operationLocation_2664 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 68)) ;
  GALGAS_compileTimePrefixOperatorEnumeration var_prefixOperator_2736 ;
  nt_compileTimePrefixOperator_ (var_prefixOperator_2736, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 70)) ;
  GALGAS_lstring var_receiverName_2781 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 71)) ;
  GALGAS_lstring var_receiverType_2812 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 73)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 74)) ;
  GALGAS_lstring var_resultType_2860 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 75)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 76)) ;
  GALGAS_ctExpressionAST var_expression_2931 ;
  nt_compile_5F_time_5F_expression_ (var_expression_2931, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 78)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_compiletimePrefixOperatorAST::constructor_new (var_prefixOperator_2736, var_operationLocation_2664, var_receiverName_2781, var_receiverType_2812, var_expression_2931, var_resultType_2860  COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 79))  COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 79)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i86_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 67)) ;
  nt_compileTimePrefixOperator_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 70)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 73)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 74)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 75)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 76)) ;
  nt_compile_5F_time_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 78)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i86_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 67)) ;
  nt_compileTimePrefixOperator_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 70)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 73)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 74)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 75)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 76)) ;
  nt_compile_5F_time_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 78)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvmPrefixOperator_i87_ (GALGAS_llvmPrefixOperatorEnumeration & outArgument_outOperator,
                                                                                C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperator.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_95 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 123)) ;
    outArgument_outOperator = GALGAS_llvmPrefixOperatorEnumeration::constructor_notOp (SOURCE_FILE ("prefix-operator-llvm.galgas", 124)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 126)) ;
    outArgument_outOperator = GALGAS_llvmPrefixOperatorEnumeration::constructor_minusOp (SOURCE_FILE ("prefix-operator-llvm.galgas", 127)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 129)) ;
    outArgument_outOperator = GALGAS_llvmPrefixOperatorEnumeration::constructor_minusOpNoOvf (SOURCE_FILE ("prefix-operator-llvm.galgas", 130)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 132)) ;
    outArgument_outOperator = GALGAS_llvmPrefixOperatorEnumeration::constructor_bitWiseComplement (SOURCE_FILE ("prefix-operator-llvm.galgas", 133)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvmPrefixOperator_i87_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_95 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 123)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 126)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 129)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 132)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvmPrefixOperator_i87_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_95 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 123)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 126)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 129)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 132)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i88_ (GALGAS_ast & ioArgument_ioAST,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 140)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 141)) ;
  GALGAS_location var_operationLocation_5456 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 142)) ;
  GALGAS_llvmPrefixOperatorEnumeration var_prefixOperator_5521 ;
  nt_llvmPrefixOperator_ (var_prefixOperator_5521, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 144)) ;
  GALGAS_lstring var_receiverName_5566 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 145)) ;
  GALGAS_lstring var_receiverType_5597 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 146)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 147)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 148)) ;
  GALGAS_lstring var_resultType_5645 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 149)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 150)) ;
  GALGAS_llvmGenerationInstructionList var_instructionList_5697 ;
  nt_llvm_5F_instruction_5F_list_ (var_instructionList_5697, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 152)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_llvmPrefixOperatorAST::constructor_new (var_prefixOperator_5521, var_operationLocation_5456, var_receiverName_5566, var_receiverType_5597, var_instructionList_5697, var_resultType_5645  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 153))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 153)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i88_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 140)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 141)) ;
  nt_llvmPrefixOperator_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 144)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 145)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 146)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 147)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 148)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 149)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 150)) ;
  nt_llvm_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 152)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i88_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 140)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 141)) ;
  nt_llvmPrefixOperator_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 144)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 145)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 146)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 147)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 148)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 149)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 150)) ;
  nt_llvm_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 152)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instructionList_i89_ (GALGAS_ast & ioArgument_ioAST,
                                                                             GALGAS_instructionListAST & outArgument_outInstructionList,
                                                                             C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("instructionList.galgas", 24)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_96 (inCompiler)) {
    case 2: {
      nt_instruction_ (ioArgument_ioAST, outArgument_outInstructionList, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instructionList_i89_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_96 (inCompiler)) {
    case 2: {
      nt_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instructionList_i89_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_96 (inCompiler)) {
    case 2: {
      nt_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i90_ (GALGAS_ast & ioArgument_ioAST,
                                                                         GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_ctAssert COMMA_SOURCE_FILE ("directive-check.galgas", 19)) ;
  GALGAS_lstring var_checkMessage_1122 ;
  switch (select_omnibus_5F_syntax_97 (inCompiler)) {
  case 1: {
    var_checkMessage_1122 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 22)) ;
  } break ;
  case 2: {
    var_checkMessage_1122 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("directive-check.galgas", 24)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("directive-check.galgas", 26)) ;
  GALGAS_expressionAST var_expression_1276 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1276, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_checkInstructionAST::constructor_new (var_checkMessage_1122.readProperty_location (), var_checkMessage_1122, var_expression_1276  COMMA_SOURCE_FILE ("directive-check.galgas", 28))  COMMA_SOURCE_FILE ("directive-check.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("directive-check.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i90_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_ctAssert COMMA_SOURCE_FILE ("directive-check.galgas", 19)) ;
  switch (select_omnibus_5F_syntax_97 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("directive-check.galgas", 24)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("directive-check.galgas", 26)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("directive-check.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i90_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_ctAssert COMMA_SOURCE_FILE ("directive-check.galgas", 19)) ;
  switch (select_omnibus_5F_syntax_97 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("directive-check.galgas", 24)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("directive-check.galgas", 26)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("directive-check.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i91_ (GALGAS_ast & ioArgument_ioAST,
                                                                         GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_assert COMMA_SOURCE_FILE ("instruction-assert.galgas", 18)) ;
  GALGAS_location var_loc_1076 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 19)) ;
  GALGAS_expressionAST var_expression_1142 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1142, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_assertInstructionAST::constructor_new (var_loc_1076, var_expression_1142  COMMA_SOURCE_FILE ("instruction-assert.galgas", 21))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i91_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_assert COMMA_SOURCE_FILE ("instruction-assert.galgas", 18)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i91_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_assert COMMA_SOURCE_FILE ("instruction-assert.galgas", 18)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i92_ (GALGAS_ast & ioArgument_ioAST,
                                                                         GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_LValueAST var_assignmentTargetAST_1126 ;
  nt_lvalue_ (ioArgument_ioAST, var_assignmentTargetAST_1126, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 21)) ;
  GALGAS_expressionAST var_sourceExpression_1209 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_1209, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_assignmentInstructionAST::constructor_new (var_assignmentTargetAST_1126.readProperty_mIdentifier ().readProperty_location (), var_assignmentTargetAST_1126, var_sourceExpression_1209  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 24))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 24)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i92_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_lvalue_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i92_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_lvalue_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i93_ (GALGAS_ast & ioArgument_ioAST,
                                                                         GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_controlRegisterLValueAST var_registerLValue_1537 ;
  nt_control_5F_register_5F_lvalue_ (ioArgument_ioAST, var_registerLValue_1537, inCompiler) ;
  GALGAS_controlRegisterAssignmentOperatorKind var_assignmentKind_1640 ;
  switch (select_omnibus_5F_syntax_98 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 31)) ;
    var_assignmentKind_1640 = GALGAS_controlRegisterAssignmentOperatorKind::constructor_assignment (SOURCE_FILE ("instruction-assignment-control-register.galgas", 32)) ;
  } break ;
  case 2: {
    GALGAS_omnibusInfixOperator var_infixOperator_1765 ;
    GALGAS_location var_operatorLocation_1784 ;
    nt_assignment_5F_combined_5F_with_5F_operator_ (var_infixOperator_1765, var_operatorLocation_1784, inCompiler) ;
    var_assignmentKind_1640 = GALGAS_controlRegisterAssignmentOperatorKind::constructor_assignmentWithOperator (var_infixOperator_1765, var_operatorLocation_1784  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_expressionAST var_sourceExpression_1977 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_1977, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_controlRegisterAssignmentInstructionAST::constructor_new (var_registerLValue_1537.readProperty_mRegisterGroupName ().readProperty_location (), var_registerLValue_1537, var_assignmentKind_1640, var_sourceExpression_1977  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 40))  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i93_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_control_5F_register_5F_lvalue_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_98 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 31)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i93_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_control_5F_register_5F_lvalue_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_98 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 31)) ;
  } break ;
  case 2: {
    nt_assignment_5F_combined_5F_with_5F_operator_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i94_ (GALGAS_ast & ioArgument_ioAST,
                                                                         GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 37)) ;
  GALGAS_lstring var_typeName_1746 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 38)) ;
  GALGAS_sliceAssignmentListAST var_sliceAssignmentListAST_1787 = GALGAS_sliceAssignmentListAST::constructor_emptyList (SOURCE_FILE ("instruction-slice-assignment.galgas", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_sliceWidth_1850 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 41)) ;
    GALGAS_sliceTargetAST var_sliceKind_1887 ;
    switch (select_omnibus_5F_syntax_100 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 44)) ;
      var_sliceKind_1887 = GALGAS_sliceTargetAST::constructor_discarded (SOURCE_FILE ("instruction-slice-assignment.galgas", 45)) ;
    } break ;
    case 2: {
      GALGAS_LValueAST var_target_1992 ;
      nt_lvalue_ (ioArgument_ioAST, var_target_1992, inCompiler) ;
      var_sliceKind_1887 = GALGAS_sliceTargetAST::constructor_lValue (var_target_1992  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 48)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 50)) ;
      GALGAS_lstring var_varName_2093 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 51)) ;
      var_sliceKind_1887 = GALGAS_sliceTargetAST::constructor_varDeclaration (var_varName_2093  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 52)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 54)) ;
      GALGAS_lstring var_letName_2205 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 55)) ;
      var_sliceKind_1887 = GALGAS_sliceTargetAST::constructor_letDeclaration (var_letName_2205  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 56)) ;
    } break ;
    default:
      break ;
    }
    var_sliceAssignmentListAST_1787.addAssign_operation (var_sliceWidth_1850, var_sliceKind_1887  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 58)) ;
    switch (select_omnibus_5F_syntax_99 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 63)) ;
  GALGAS_expressionAST var_sourceExpression_2422 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_2422, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_sliceAssignmentInstructionAST::constructor_new (var_typeName_1746.readProperty_location (), var_typeName_1746, var_sliceAssignmentListAST_1787, var_sourceExpression_2422, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 71))  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 66))  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 66)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i94_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 41)) ;
    switch (select_omnibus_5F_syntax_100 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 44)) ;
    } break ;
    case 2: {
      nt_lvalue_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 50)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 51)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 54)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 55)) ;
    } break ;
    default:
      break ;
    }
    switch (select_omnibus_5F_syntax_99 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 63)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i94_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 41)) ;
    switch (select_omnibus_5F_syntax_100 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 44)) ;
    } break ;
    case 2: {
      nt_lvalue_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 50)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 51)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 54)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 55)) ;
    } break ;
    default:
      break ;
    }
    switch (select_omnibus_5F_syntax_99 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 63)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i95_ (GALGAS_ast & ioArgument_ioAST,
                                                                         GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_controlRegisterLValueAST var_registerLValue_1305 ;
  nt_control_5F_register_5F_lvalue_ (ioArgument_ioAST, var_registerLValue_1305, inCompiler) ;
  GALGAS_lstring var_attribute_1342 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 23)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_attribute_1342.readProperty_string ().objectCompare (GALGAS_string ("bit"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("@bit")) ;
      inCompiler->emitSemanticError (var_attribute_1342.readProperty_location (), GALGAS_string ("attribute should be @bit"), fixItArray1  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 25)) ;
    }
  }
  GALGAS_expressionAST var_bitExpression_1504 ;
  nt_expression_ (ioArgument_ioAST, var_bitExpression_1504, inCompiler) ;
  GALGAS_location var_bitExpressionLocation_1526 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 29)) ;
  GALGAS_expressionAST var_sourceExpression_1603 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_1603, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_bitbandInstructionAST::constructor_new (var_registerLValue_1305.readProperty_mRegisterGroupName ().readProperty_location (), var_registerLValue_1305, var_bitExpression_1504, var_bitExpressionLocation_1526, var_sourceExpression_1603, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 38))  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 32))  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i95_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_control_5F_register_5F_lvalue_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 23)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 29)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i95_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_control_5F_register_5F_lvalue_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 23)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 29)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_assignment_5F_combined_5F_with_5F_operator_i96_ (GALGAS_omnibusInfixOperator & outArgument_outInfixOperator,
                                                                                                        GALGAS_location & outArgument_outOperatorLocation,
                                                                                                        C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInfixOperator.drop () ; // Release 'out' argument
  outArgument_outOperatorLocation.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_101 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 11)) ;
    outArgument_outInfixOperator = GALGAS_omnibusInfixOperator::constructor_bitWiseOrOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 12)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 14)) ;
    outArgument_outInfixOperator = GALGAS_omnibusInfixOperator::constructor_bitWiseAndOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 15)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 17)) ;
    outArgument_outInfixOperator = GALGAS_omnibusInfixOperator::constructor_bitWiseXorOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 18)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 20)) ;
    outArgument_outInfixOperator = GALGAS_omnibusInfixOperator::constructor_addOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 21)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2B__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 23)) ;
    outArgument_outInfixOperator = GALGAS_omnibusInfixOperator::constructor_addOpNoOvf (SOURCE_FILE ("instruction-assignment-operator.galgas", 24)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 26)) ;
    outArgument_outInfixOperator = GALGAS_omnibusInfixOperator::constructor_subOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 27)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 29)) ;
    outArgument_outInfixOperator = GALGAS_omnibusInfixOperator::constructor_subOpNoOvf (SOURCE_FILE ("instruction-assignment-operator.galgas", 30)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 32)) ;
    outArgument_outInfixOperator = GALGAS_omnibusInfixOperator::constructor_mulOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 33)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2A__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 35)) ;
    outArgument_outInfixOperator = GALGAS_omnibusInfixOperator::constructor_mulOpNoOvf (SOURCE_FILE ("instruction-assignment-operator.galgas", 36)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3C__3C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 38)) ;
    outArgument_outInfixOperator = GALGAS_omnibusInfixOperator::constructor_leftShiftOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 39)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E__3E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 41)) ;
    outArgument_outInfixOperator = GALGAS_omnibusInfixOperator::constructor_rightShiftOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 42)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outOperatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 44)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_assignment_5F_combined_5F_with_5F_operator_i96_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_101 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 11)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 14)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 17)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 20)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2B__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 23)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 26)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 29)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 32)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2A__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 35)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3C__3C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 38)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E__3E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_assignment_5F_combined_5F_with_5F_operator_i96_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_101 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 11)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 14)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 17)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 20)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2B__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 23)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 26)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 29)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 32)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2A__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 35)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3C__3C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 38)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E__3E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i97_ (GALGAS_ast & ioArgument_ioAST,
                                                                         GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_LValueAST var_lvalue_1527 ;
  nt_lvalue_ (ioArgument_ioAST, var_lvalue_1527, inCompiler) ;
  GALGAS_location var_instructionLocation_1542 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 52)) ;
  GALGAS_omnibusInfixOperator var_infixOperator_1651 ;
  GALGAS_location var_operatorLocation_1670 ;
  nt_assignment_5F_combined_5F_with_5F_operator_ (var_infixOperator_1651, var_operatorLocation_1670, inCompiler) ;
  GALGAS_expressionAST var_rightExpression_1756 ;
  nt_expression_ (ioArgument_ioAST, var_rightExpression_1756, inCompiler) ;
  GALGAS_primaryInExpressionAccessListAST var_expressionAccessList_1845 = GALGAS_primaryInExpressionAccessListAST::constructor_emptyList (SOURCE_FILE ("instruction-assignment-operator.galgas", 58)) ;
  extensionMethod_buildExpressionAccessList (var_lvalue_1527.readProperty_mOperand (), var_expressionAccessList_1845, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 59)) ;
  GALGAS_primaryInExpressionAST var_leftExpression_2349 = GALGAS_primaryInExpressionAST::constructor_new (var_lvalue_1527.readProperty_mIdentifier (), var_expressionAccessList_1845  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 68)) ;
  GALGAS_omnibusInfixOperatorExpressionAST var_expression_2446 = GALGAS_omnibusInfixOperatorExpressionAST::constructor_new (var_leftExpression_2349, var_operatorLocation_1670, var_infixOperator_1651, var_rightExpression_1756  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 69)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_assignmentInstructionAST::constructor_new (var_instructionLocation_1542, var_lvalue_1527, var_expression_2446  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 76))  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 76)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i97_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_lvalue_parse (inCompiler) ;
  nt_assignment_5F_combined_5F_with_5F_operator_parse (inCompiler) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i97_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_lvalue_indexing (inCompiler) ;
  nt_assignment_5F_combined_5F_with_5F_operator_indexing (inCompiler) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i98_ (GALGAS_ast & ioArgument_ioAST,
                                                                         GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 27)) ;
  GALGAS_lstring var_varName_1422 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas", 29)) ;
  GALGAS_expressionAST var_expression_1483 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1483, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_varInstructionWithAssignmentAST::constructor_new (var_varName_1422.readProperty_location (), var_varName_1422, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 34)), var_expression_1483  COMMA_SOURCE_FILE ("instruction-var.galgas", 31))  COMMA_SOURCE_FILE ("instruction-var.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i98_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas", 29)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i98_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas", 29)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i99_ (GALGAS_ast & ioArgument_ioAST,
                                                                         GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 66)) ;
  GALGAS_lstring var_varName_2564 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 67)) ;
  GALGAS_lstring var_typeName_2607 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_2607, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_varDeclarationInstructionAST::constructor_new (var_varName_2564.readProperty_location (), var_varName_2564, var_typeName_2607  COMMA_SOURCE_FILE ("instruction-var.galgas", 69))  COMMA_SOURCE_FILE ("instruction-var.galgas", 69)) ;
  switch (select_omnibus_5F_syntax_102 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas", 76)) ;
    GALGAS_expressionAST var_sourceExpression_2814 ;
    nt_expression_ (ioArgument_ioAST, var_sourceExpression_2814, inCompiler) ;
    GALGAS_LValueAST var_assignmentTargetAST_2841 = GALGAS_LValueAST::constructor_new (var_varName_2564, GALGAS_LValueOperandAST::constructor_noOperand (SOURCE_FILE ("instruction-var.galgas", 78))  COMMA_SOURCE_FILE ("instruction-var.galgas", 78)) ;
    ioArgument_ioInstructionList.addAssign_operation (GALGAS_assignmentInstructionAST::constructor_new (var_assignmentTargetAST_2841.readProperty_mIdentifier ().readProperty_location (), var_assignmentTargetAST_2841, var_sourceExpression_2814  COMMA_SOURCE_FILE ("instruction-var.galgas", 79))  COMMA_SOURCE_FILE ("instruction-var.galgas", 79)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i99_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 67)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_102 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas", 76)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i99_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 67)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_102 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas", 76)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i100_ (GALGAS_ast & ioArgument_ioAST,
                                                                          GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                          C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 20)) ;
  GALGAS_lstring var_varName_1180 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 21)) ;
  GALGAS_lstring var_optionalTypeName_1205 ;
  switch (select_omnibus_5F_syntax_103 (inCompiler)) {
  case 1: {
    var_optionalTypeName_1205 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-let.galgas", 24)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_optionalTypeName_1205, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 28)) ;
  GALGAS_expressionAST var_expression_1389 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1389, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_letInstructionWithAssignmentAST::constructor_new (var_varName_1180.readProperty_location (), var_varName_1180, var_optionalTypeName_1205, var_expression_1389  COMMA_SOURCE_FILE ("instruction-let.galgas", 30))  COMMA_SOURCE_FILE ("instruction-let.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i100_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 21)) ;
  switch (select_omnibus_5F_syntax_103 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 28)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i100_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 21)) ;
  switch (select_omnibus_5F_syntax_103 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 28)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i101_ (GALGAS_ast & ioArgument_ioAST,
                                                                          GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                          C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("instruction-panic.galgas", 18)) ;
  GALGAS_location var_loc_1078 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 19)) ;
  GALGAS_expressionAST var_codeExpression_1144 ;
  nt_expression_ (ioArgument_ioAST, var_codeExpression_1144, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_panicInstructionAST::constructor_new (var_loc_1078, var_codeExpression_1144  COMMA_SOURCE_FILE ("instruction-panic.galgas", 21))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i101_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("instruction-panic.galgas", 18)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i101_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("instruction-panic.galgas", 18)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i102_ (GALGAS_ast & ioArgument_ioAST,
                                                                          GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                          C_Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_ifInstructionAST var_ifInstruction_1429 ;
  nt_if_5F_instruction_ (ioArgument_ioAST, var_ifInstruction_1429, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (var_ifInstruction_1429  COMMA_SOURCE_FILE ("instruction-if.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i102_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_if_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i102_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_if_5F_instruction_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_if_5F_instruction_i103_ (GALGAS_ast & ioArgument_ioAST,
                                                                                GALGAS_ifInstructionAST & outArgument_outIfInstruction,
                                                                                C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outIfInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 32)) ;
  GALGAS_location var_instructionLocation_1704 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 33)) ;
  GALGAS_bool var_staticIfExpression_1755 ;
  switch (select_omnibus_5F_syntax_104 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_attributeValue_1810 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 36)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, var_attributeValue_1810.readProperty_string ().objectCompare (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 37)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_staticIfExpression_1755 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 42))) ;
      inCompiler->emitSemanticError (var_attributeValue_1810.readProperty_location (), GALGAS_string ("the attribute should be \"@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 40)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 40)), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 40)) ;
      var_staticIfExpression_1755.drop () ; // Release error dropped variable
    }
  } break ;
  case 2: {
    var_staticIfExpression_1755 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GALGAS_expressionAST var_testExpression_2199 ;
  nt_expression_ (ioArgument_ioAST, var_testExpression_2199, inCompiler) ;
  GALGAS_location var_testExpressionEndLocation_2222 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 49)) ;
  GALGAS_instructionListAST var_thenInstructionList_2308 ;
  nt_instructionList_ (ioArgument_ioAST, var_thenInstructionList_2308, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 51)) ;
  GALGAS_location var_endOfThenBranch_2344 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 52)) ;
  GALGAS_instructionListAST var_elseInstructionList_2405 ;
  switch (select_omnibus_5F_syntax_105 (inCompiler)) {
  case 1: {
    var_elseInstructionList_2405 = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 55)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 57)) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 58)) ;
    nt_instructionList_ (ioArgument_ioAST, var_elseInstructionList_2405, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 60)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
    GALGAS_ifInstructionAST var_ifInstruction_2616 ;
    nt_if_5F_instruction_ (ioArgument_ioAST, var_ifInstruction_2616, inCompiler) ;
    GALGAS_instructionListAST temp_2 = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 64)) ;
    temp_2.addAssign_operation (var_ifInstruction_2616  COMMA_SOURCE_FILE ("instruction-if.galgas", 64)) ;
    var_elseInstructionList_2405 = temp_2 ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfElseBranch_2691 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 66)) ;
  outArgument_outIfInstruction = GALGAS_ifInstructionAST::constructor_new (var_instructionLocation_1704, var_testExpression_2199, var_testExpressionEndLocation_2222, var_staticIfExpression_1755, var_thenInstructionList_2308, var_endOfThenBranch_2344, var_elseInstructionList_2405, var_endOfElseBranch_2691, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 76))  COMMA_SOURCE_FILE ("instruction-if.galgas", 67)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_if_5F_instruction_i103_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 32)) ;
  switch (select_omnibus_5F_syntax_104 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 36)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 49)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 51)) ;
  switch (select_omnibus_5F_syntax_105 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 57)) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 58)) ;
    nt_instructionList_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 60)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
    nt_if_5F_instruction_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_if_5F_instruction_i103_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 32)) ;
  switch (select_omnibus_5F_syntax_104 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 36)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 49)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 51)) ;
  switch (select_omnibus_5F_syntax_105 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 57)) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 58)) ;
    nt_instructionList_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 60)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
    nt_if_5F_instruction_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guarded_5F_command_i104_ (GALGAS_ast & ioArgument_ioAST,
                                                                                 const GALGAS_bool constinArgument_inIsExitCommand,
                                                                                 GALGAS_guardedCommandAST & outArgument_outGuardedCommand,
                                                                                 C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outGuardedCommand.drop () ; // Release 'out' argument
  GALGAS_location var_endOfExp_2124 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("instruction-event.galgas", 44)) ;
  GALGAS_lbool var_usesSelf_2177 ;
  switch (select_omnibus_5F_syntax_106 (inCompiler)) {
  case 1: {
    var_usesSelf_2177 = GALGAS_lbool::constructor_new (GALGAS_bool (false), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 47))  COMMA_SOURCE_FILE ("instruction-event.galgas", 47)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-event.galgas", 49)) ;
    var_usesSelf_2177 = GALGAS_lbool::constructor_new (GALGAS_bool (true), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 50))  COMMA_SOURCE_FILE ("instruction-event.galgas", 50)) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstringlist var_nameList_2331 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_name_2380 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-event.galgas", 55)) ;
    var_nameList_2331.addAssign_operation (var_name_2380  COMMA_SOURCE_FILE ("instruction-event.galgas", 56)) ;
    switch (select_omnibus_5F_syntax_107 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 58)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_effectiveArgumentListAST var_effectiveParameterList_2477 ;
  GALGAS_location joker_2500 ; // Joker input parameter
  nt_effective_5F_parameters_ (ioArgument_ioAST, var_effectiveParameterList_2477, joker_2500, inCompiler) ;
  joker_2500.drop () ; // Release temporary input variables (joker in source)
  outArgument_outGuardedCommand = GALGAS_guardedCommandAST::constructor_boolAndSync (constinArgument_inIsExitCommand, GALGAS_literalBooleanInExpressionAST::constructor_new (GALGAS_bool (true)  COMMA_SOURCE_FILE ("instruction-event.galgas", 63)), GALGAS_bool (false), var_endOfExp_2124, var_usesSelf_2177, var_nameList_2331, var_effectiveParameterList_2477  COMMA_SOURCE_FILE ("instruction-event.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guarded_5F_command_i104_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("instruction-event.galgas", 44)) ;
  switch (select_omnibus_5F_syntax_106 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-event.galgas", 49)) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-event.galgas", 55)) ;
    switch (select_omnibus_5F_syntax_107 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 58)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_effective_5F_parameters_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guarded_5F_command_i104_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("instruction-event.galgas", 44)) ;
  switch (select_omnibus_5F_syntax_106 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-event.galgas", 49)) ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-event.galgas", 55)) ;
    switch (select_omnibus_5F_syntax_107 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 58)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_effective_5F_parameters_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guarded_5F_command_i105_ (GALGAS_ast & ioArgument_ioAST,
                                                                                 const GALGAS_bool constinArgument_inIsExitCommand,
                                                                                 GALGAS_guardedCommandAST & outArgument_outGuardedCommand,
                                                                                 C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outGuardedCommand.drop () ; // Release 'out' argument
  GALGAS_expressionAST var_expression_3085 ;
  nt_expression_ (ioArgument_ioAST, var_expression_3085, inCompiler) ;
  GALGAS_location var_endOfExp_3104 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 76)) ;
  switch (select_omnibus_5F_syntax_108 (inCompiler)) {
  case 1: {
    outArgument_outGuardedCommand = GALGAS_guardedCommandAST::constructor_boolean (constinArgument_inIsExitCommand, var_expression_3085, var_endOfExp_3104  COMMA_SOURCE_FILE ("instruction-event.galgas", 78)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("instruction-event.galgas", 84)) ;
    GALGAS_lbool var_usesSelf_3328 ;
    switch (select_omnibus_5F_syntax_109 (inCompiler)) {
    case 1: {
      var_usesSelf_3328 = GALGAS_lbool::constructor_new (GALGAS_bool (false), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 87))  COMMA_SOURCE_FILE ("instruction-event.galgas", 87)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-event.galgas", 89)) ;
      var_usesSelf_3328 = GALGAS_lbool::constructor_new (GALGAS_bool (true), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 90))  COMMA_SOURCE_FILE ("instruction-event.galgas", 90)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 91)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstringlist var_nameList_3498 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 93)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_name_3551 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-event.galgas", 95)) ;
      var_nameList_3498.addAssign_operation (var_name_3551  COMMA_SOURCE_FILE ("instruction-event.galgas", 96)) ;
      switch (select_omnibus_5F_syntax_110 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 98)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    GALGAS_effectiveArgumentListAST var_effectiveParameterList_3658 ;
    GALGAS_location joker_3681 ; // Joker input parameter
    nt_effective_5F_parameters_ (ioArgument_ioAST, var_effectiveParameterList_3658, joker_3681, inCompiler) ;
    joker_3681.drop () ; // Release temporary input variables (joker in source)
    outArgument_outGuardedCommand = GALGAS_guardedCommandAST::constructor_boolAndSync (constinArgument_inIsExitCommand, var_expression_3085, GALGAS_bool (true), var_endOfExp_3104, var_usesSelf_3328, var_nameList_3498, var_effectiveParameterList_3658  COMMA_SOURCE_FILE ("instruction-event.galgas", 101)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guarded_5F_command_i105_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_108 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("instruction-event.galgas", 84)) ;
    switch (select_omnibus_5F_syntax_109 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-event.galgas", 89)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 91)) ;
    } break ;
    default:
      break ;
    }
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-event.galgas", 95)) ;
      switch (select_omnibus_5F_syntax_110 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 98)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    nt_effective_5F_parameters_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guarded_5F_command_i105_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_108 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("instruction-event.galgas", 84)) ;
    switch (select_omnibus_5F_syntax_109 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-event.galgas", 89)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 91)) ;
    } break ;
    default:
      break ;
    }
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-event.galgas", 95)) ;
      switch (select_omnibus_5F_syntax_110 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 98)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    nt_effective_5F_parameters_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i106_ (GALGAS_ast & ioArgument_ioAST,
                                                                          GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                          C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("instruction-event.galgas", 116)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-event.galgas", 117)) ;
  GALGAS_location var_startLocation_4226 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 118)) ;
  GALGAS_syncInstructionBranchListAST var_instructionBranchList_4295 = GALGAS_syncInstructionBranchListAST::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 119)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_111 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_when COMMA_SOURCE_FILE ("instruction-event.galgas", 122)) ;
      GALGAS_guardedCommandAST var_guardedCommand_4418 ;
      nt_guarded_5F_command_ (ioArgument_ioAST, GALGAS_bool (true), var_guardedCommand_4418, inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-event.galgas", 124)) ;
      GALGAS_instructionListAST var_instructionList_4480 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_4480, inCompiler) ;
      var_instructionBranchList_4295.addAssign_operation (var_guardedCommand_4418, var_instructionList_4480, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 126))  COMMA_SOURCE_FILE ("instruction-event.galgas", 126)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-event.galgas", 134)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_syncInstructionAST::constructor_new (var_startLocation_4226, var_instructionBranchList_4295, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 135))  COMMA_SOURCE_FILE ("instruction-event.galgas", 135))  COMMA_SOURCE_FILE ("instruction-event.galgas", 135)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i106_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("instruction-event.galgas", 116)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-event.galgas", 117)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_111 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_when COMMA_SOURCE_FILE ("instruction-event.galgas", 122)) ;
      nt_guarded_5F_command_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-event.galgas", 124)) ;
      nt_instructionList_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-event.galgas", 134)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i106_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("instruction-event.galgas", 116)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-event.galgas", 117)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_111 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_when COMMA_SOURCE_FILE ("instruction-event.galgas", 122)) ;
      nt_guarded_5F_command_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-event.galgas", 124)) ;
      nt_instructionList_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-event.galgas", 134)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i107_ (GALGAS_ast & ioArgument_ioAST,
                                                                          GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                          C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-while.galgas", 22)) ;
  GALGAS_location var_instructionLocation_1241 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 23)) ;
  GALGAS_expressionAST var_testExpression_1323 ;
  nt_expression_ (ioArgument_ioAST, var_testExpression_1323, inCompiler) ;
  GALGAS_location var_testExpressionEndLocation_1346 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-while.galgas", 26)) ;
  GALGAS_instructionListAST var_instructionList_1432 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1432, inCompiler) ;
  GALGAS_location var_endOfInstruction_1456 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-while.galgas", 29)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_whileInstructionAST::constructor_new (var_instructionLocation_1241, var_testExpression_1323, var_testExpressionEndLocation_1346, var_instructionList_1432, var_endOfInstruction_1456  COMMA_SOURCE_FILE ("instruction-while.galgas", 30))  COMMA_SOURCE_FILE ("instruction-while.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i107_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-while.galgas", 22)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-while.galgas", 26)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-while.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i107_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-while.galgas", 22)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-while.galgas", 26)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-while.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i108_ (GALGAS_ast & ioArgument_ioAST,
                                                                          GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                          C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 24)) ;
  GALGAS_lstring var_varName_1344 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 26)) ;
  GALGAS_lstring var_iteratedObject_1383 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 27)) ;
  GALGAS_bool var_staticWhileExpression_1406 = GALGAS_bool (false) ;
  GALGAS_expressionAST var_whileExpression_1459 ;
  switch (select_omnibus_5F_syntax_112 (inCompiler)) {
  case 1: {
    var_whileExpression_1459 = GALGAS_literalBooleanInExpressionAST::constructor_new (GALGAS_bool (true)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 31)) ;
    var_staticWhileExpression_1406 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 34)) ;
    switch (select_omnibus_5F_syntax_113 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_attributeValue_1649 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 36)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, var_attributeValue_1649.readProperty_string ().objectCompare (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 37)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          var_staticWhileExpression_1406 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 41))) ;
        inCompiler->emitSemanticError (var_attributeValue_1649.readProperty_location (), GALGAS_string ("the attribute should be \"@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 40)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 40)), fixItArray1  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 40)) ;
      }
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    nt_expression_ (ioArgument_ioAST, var_whileExpression_1459, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOf_5F_whileExpression_5F_instruction_2012 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 48)) ;
  GALGAS_instructionListAST var_instructionList_2106 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_2106, inCompiler) ;
  GALGAS_location var_endOfInstruction_2130 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 51)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_forInstructionAST::constructor_new (var_varName_1344.readProperty_location (), var_varName_1344, var_iteratedObject_1383, var_whileExpression_1459, var_endOf_5F_whileExpression_5F_instruction_2012, var_staticWhileExpression_1406, var_instructionList_2106, var_endOfInstruction_2130  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 52))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i108_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 27)) ;
  switch (select_omnibus_5F_syntax_112 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 34)) ;
    switch (select_omnibus_5F_syntax_113 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 36)) ;
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
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 48)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 51)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i108_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 27)) ;
  switch (select_omnibus_5F_syntax_112 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 34)) ;
    switch (select_omnibus_5F_syntax_113 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 36)) ;
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 48)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 51)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i109_ (GALGAS_ast & ioArgument_ioAST,
                                                                          GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                          C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 25)) ;
  GALGAS_lstring var_varName_1440 ;
  switch (select_omnibus_5F_syntax_114 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 28)) ;
    var_varName_1440 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 29)) ;
  } break ;
  case 2: {
    var_varName_1440 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_typeName_1573 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1573, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 34)) ;
  GALGAS_expressionAST var_lowerBoundExpression_1637 ;
  nt_expression_ (ioArgument_ioAST, var_lowerBoundExpression_1637, inCompiler) ;
  GALGAS_location var_endOf_5F_lowerBoundExpression_5F_instruction_1666 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 37)) ;
  GALGAS_expressionAST var_upperBoundExpression_1778 ;
  nt_expression_ (ioArgument_ioAST, var_upperBoundExpression_1778, inCompiler) ;
  GALGAS_location var_endOf_5F_upperBoundExpression_5F_instruction_1807 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 40)) ;
  GALGAS_instructionListAST var_instructionList_1906 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1906, inCompiler) ;
  GALGAS_location var_endOfInstruction_1930 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 43)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_forLowerUpperBoundInstructionAST::constructor_new (var_varName_1440.readProperty_location (), var_varName_1440, var_typeName_1573, var_lowerBoundExpression_1637, var_endOf_5F_lowerBoundExpression_5F_instruction_1666, var_upperBoundExpression_1778, var_endOf_5F_upperBoundExpression_5F_instruction_1807, var_instructionList_1906, var_endOfInstruction_1930  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 44))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 44)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i109_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 25)) ;
  switch (select_omnibus_5F_syntax_114 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 28)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 34)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 37)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 40)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 43)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i109_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 25)) ;
  switch (select_omnibus_5F_syntax_114 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 28)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 34)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 37)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 40)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i110_ (GALGAS_ast & ioArgument_ioAST,
                                                                          GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                          C_Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_callInstructionAST var_routineCallInstruction_1661 ;
  nt_procedure_5F_call_ (ioArgument_ioAST, var_routineCallInstruction_1661, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (var_routineCallInstruction_1661  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i110_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_procedure_5F_call_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i110_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_procedure_5F_call_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_call_i111_ (GALGAS_ast & ioArgument_ioAST,
                                                                                GALGAS_callInstructionAST & outArgument_outInstruction,
                                                                                C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation_1943 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 39)) ;
  GALGAS_LValueAST var_assignmentTargetAST_2006 ;
  nt_lvalue_ (ioArgument_ioAST, var_assignmentTargetAST_2006, inCompiler) ;
  GALGAS_effectiveArgumentListAST var_arguments_2066 ;
  GALGAS_location var_endOfArguments_2081 ;
  nt_effective_5F_parameters_ (ioArgument_ioAST, var_arguments_2066, var_endOfArguments_2081, inCompiler) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_assignmentTargetAST_2006.readProperty_mOperand ().objectCompare (GALGAS_LValueOperandAST::constructor_noOperand (SOURCE_FILE ("instruction-procedure-call.galgas", 42)))).operator_and (GALGAS_bool (kIsNotEqual, var_assignmentTargetAST_2006.readProperty_mIdentifier ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 42)).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outInstruction = GALGAS_standAloneProcedureCallInstructionAST::constructor_new (var_instructionLocation_1943, var_arguments_2066, var_endOfArguments_2081, var_assignmentTargetAST_2006.readProperty_mIdentifier ()  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 43)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_accessInAssignmentListAST var_accessList_2437 = GALGAS_accessInAssignmentListAST::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 50)) ;
    extensionMethod_buildProcedureCallAccessList (var_assignmentTargetAST_2006.readProperty_mOperand (), var_accessList_2437, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 51)) ;
    outArgument_outInstruction = GALGAS_procedureCallInstructionAST::constructor_new (var_instructionLocation_1943, var_arguments_2066, var_endOfArguments_2081, var_assignmentTargetAST_2006.readProperty_mIdentifier (), var_accessList_2437  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 52)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_call_i111_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_lvalue_parse (inCompiler) ;
  nt_effective_5F_parameters_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_call_i111_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_lvalue_indexing (inCompiler) ;
  nt_effective_5F_parameters_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i112_ (GALGAS_ast & ioArgument_ioAST,
                                                                          GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                          C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 28)) ;
  GALGAS_location var_instructionLocation_1474 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 29)) ;
  GALGAS_expressionAST var_switchExpression_1556 ;
  nt_expression_ (ioArgument_ioAST, var_switchExpression_1556, inCompiler) ;
  GALGAS_location var_switchExpressionEndLocation_1581 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 32)) ;
  GALGAS_switchCaseListAST var_switchCaseList_1661 = GALGAS_switchCaseListAST::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 33)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 35)) ;
    GALGAS_lstringlist var_caseIdentifiers_1728 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 36)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_caseIdf_1788 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
      var_caseIdentifiers_1728.addAssign_operation (var_caseIdf_1788  COMMA_SOURCE_FILE ("instruction-switch.galgas", 39)) ;
      switch (select_omnibus_5F_syntax_116 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 41)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 43)) ;
    GALGAS_instructionListAST var_instructionList_1913 ;
    nt_instructionList_ (ioArgument_ioAST, var_instructionList_1913, inCompiler) ;
    var_switchCaseList_1661.addAssign_operation (var_caseIdentifiers_1728, var_instructionList_1913  COMMA_SOURCE_FILE ("instruction-switch.galgas", 45)) ;
    switch (select_omnibus_5F_syntax_115 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_location var_endOfInstruction_2013 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 49)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_switchInstructionAST::constructor_new (var_instructionLocation_1474, var_switchExpression_1556, var_switchExpressionEndLocation_1581, var_switchCaseList_1661, var_endOfInstruction_2013  COMMA_SOURCE_FILE ("instruction-switch.galgas", 50))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 50)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i112_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 28)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 35)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
      switch (select_omnibus_5F_syntax_116 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 41)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 43)) ;
    nt_instructionList_parse (inCompiler) ;
    switch (select_omnibus_5F_syntax_115 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 49)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i112_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 28)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 35)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
      switch (select_omnibus_5F_syntax_116 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 41)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 43)) ;
    nt_instructionList_indexing (inCompiler) ;
    switch (select_omnibus_5F_syntax_115 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_i113_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_LValueAST & outArgument_outAssignmentTargetAST,
                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outAssignmentTargetAST.drop () ; // Release 'out' argument
  GALGAS_lstring var_receiver_1953 ;
  switch (select_omnibus_5F_syntax_117 (inCompiler)) {
  case 1: {
    var_receiver_1953 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 43)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("lvalue.galgas", 45)) ;
    var_receiver_1953 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 46)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_LValueOperandAST var_operand_2091 ;
  nt_lvalue_5F_operand_ (ioArgument_ioAST, var_operand_2091, inCompiler) ;
  outArgument_outAssignmentTargetAST = GALGAS_LValueAST::constructor_new (var_receiver_1953, var_operand_2091  COMMA_SOURCE_FILE ("lvalue.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_i113_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_117 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 43)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("lvalue.galgas", 45)) ;
  } break ;
  default:
    break ;
  }
  nt_lvalue_5F_operand_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_i113_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_117 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 43)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("lvalue.galgas", 45)) ;
  } break ;
  default:
    break ;
  }
  nt_lvalue_5F_operand_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i114_ (GALGAS_ast & /* ioArgument_ioAST */,
                                                                                GALGAS_LValueOperandAST & outArgument_outOperand,
                                                                                C_Lexique_omnibus_5F_lexique * /* inCompiler */) {
  outArgument_outOperand.drop () ; // Release 'out' argument
  outArgument_outOperand = GALGAS_LValueOperandAST::constructor_noOperand (SOURCE_FILE ("lvalue.galgas", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i114_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i114_indexing (C_Lexique_omnibus_5F_lexique * /* inCompiler */) {
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i115_ (GALGAS_ast & ioArgument_ioAST,
                                                                                GALGAS_LValueOperandAST & outArgument_outOperand,
                                                                                C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperand.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue.galgas", 61)) ;
  GALGAS_lstring var_propertyName_2613 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 62)) ;
  GALGAS_LValueOperandAST var_operand_2660 ;
  nt_lvalue_5F_operand_ (ioArgument_ioAST, var_operand_2660, inCompiler) ;
  outArgument_outOperand = GALGAS_LValueOperandAST::constructor_property (var_propertyName_2613, var_operand_2660  COMMA_SOURCE_FILE ("lvalue.galgas", 64)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i115_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 62)) ;
  nt_lvalue_5F_operand_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i115_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 62)) ;
  nt_lvalue_5F_operand_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i116_ (GALGAS_ast & ioArgument_ioAST,
                                                                                GALGAS_LValueOperandAST & outArgument_outOperand,
                                                                                C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperand.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue.galgas", 70)) ;
  GALGAS_expressionAST var_expression_2966 ;
  nt_expression_ (ioArgument_ioAST, var_expression_2966, inCompiler) ;
  GALGAS_location var_endOfIndex_2985 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 72)) ;
  GALGAS_bool var_checkIndexExpression_3027 ;
  switch (select_omnibus_5F_syntax_118 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue.galgas", 75)) ;
    var_checkIndexExpression_3027 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue.galgas", 78)) ;
    var_checkIndexExpression_3027 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GALGAS_LValueOperandAST var_operand_3198 ;
  nt_lvalue_5F_operand_ (ioArgument_ioAST, var_operand_3198, inCompiler) ;
  outArgument_outOperand = GALGAS_LValueOperandAST::constructor_arrayAccess (var_expression_2966, var_endOfIndex_2985, var_checkIndexExpression_3027, var_operand_3198  COMMA_SOURCE_FILE ("lvalue.galgas", 82)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i116_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue.galgas", 70)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_118 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue.galgas", 75)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue.galgas", 78)) ;
  } break ;
  default:
    break ;
  }
  nt_lvalue_5F_operand_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i116_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue.galgas", 70)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_118 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue.galgas", 75)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue.galgas", 78)) ;
  } break ;
  default:
    break ;
  }
  nt_lvalue_5F_operand_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_control_5F_register_5F_lvalue_i117_ (GALGAS_ast & ioArgument_ioAST,
                                                                                            GALGAS_controlRegisterLValueAST & outArgument_outRegisterLValue,
                                                                                            C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outRegisterLValue.drop () ; // Release 'out' argument
  GALGAS_lstring var_registerGroupName_1708 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 35)) ;
  GALGAS_registerGroupIndexAST var_groupIndex_1757 ;
  switch (select_omnibus_5F_syntax_119 (inCompiler)) {
  case 1: {
    var_groupIndex_1757 = GALGAS_registerGroupIndexAST::constructor_noIndex (SOURCE_FILE ("lvalue-control-register.galgas", 38)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 40)) ;
    GALGAS_expressionAST var_expression_1856 ;
    nt_expression_ (ioArgument_ioAST, var_expression_1856, inCompiler) ;
    GALGAS_location var_endOfIndex_1877 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 42)) ;
    GALGAS_bool var_checkIndexExpression_1921 ;
    switch (select_omnibus_5F_syntax_120 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 45)) ;
      var_checkIndexExpression_1921 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 48)) ;
      var_checkIndexExpression_1921 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    var_groupIndex_1757 = GALGAS_registerGroupIndexAST::constructor_index (var_expression_1856, var_endOfIndex_1877, var_checkIndexExpression_1921  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 53)) ;
  GALGAS_lstring var_registerName_2221 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 54)) ;
  GALGAS_registerIndexAST var_registerIndex_2260 ;
  switch (select_omnibus_5F_syntax_121 (inCompiler)) {
  case 1: {
    var_registerIndex_2260 = GALGAS_registerIndexAST::constructor_noIndex (SOURCE_FILE ("lvalue-control-register.galgas", 57)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 59)) ;
    GALGAS_expressionAST var_expression_2365 ;
    nt_expression_ (ioArgument_ioAST, var_expression_2365, inCompiler) ;
    GALGAS_location var_endOfIndex_2386 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 61)) ;
    GALGAS_bool var_checkIndexExpression_2430 ;
    switch (select_omnibus_5F_syntax_122 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 64)) ;
      var_checkIndexExpression_2430 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 67)) ;
      var_checkIndexExpression_2430 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    var_registerIndex_2260 = GALGAS_registerIndexAST::constructor_index (var_expression_2365, var_endOfIndex_2386, var_checkIndexExpression_2430  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 70)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outRegisterLValue = GALGAS_controlRegisterLValueAST::constructor_new (var_registerGroupName_1708, var_groupIndex_1757, var_registerName_2221, var_registerIndex_2260  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 76)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_control_5F_register_5F_lvalue_i117_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 35)) ;
  switch (select_omnibus_5F_syntax_119 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 40)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_omnibus_5F_syntax_120 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 45)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 48)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 54)) ;
  switch (select_omnibus_5F_syntax_121 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 59)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_omnibus_5F_syntax_122 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 64)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 67)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_control_5F_register_5F_lvalue_i117_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 35)) ;
  switch (select_omnibus_5F_syntax_119 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 40)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_omnibus_5F_syntax_120 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 45)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 48)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 54)) ;
  switch (select_omnibus_5F_syntax_121 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 59)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_omnibus_5F_syntax_122 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 64)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 67)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_effective_5F_parameters_i118_ (GALGAS_ast & ioArgument_ioAST,
                                                                                      GALGAS_effectiveArgumentListAST & outArgument_outEffectiveParameterList,
                                                                                      GALGAS_location & outArgument_outEndOfArgs,
                                                                                      C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outEndOfArgs.drop () ; // Release 'out' argument
  outArgument_outEffectiveParameterList = GALGAS_effectiveArgumentListAST::constructor_emptyList (SOURCE_FILE ("effective-parameters.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_123 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_2664 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 63)) ;
      GALGAS_expressionAST var_expression_2705 ;
      nt_expression_ (ioArgument_ioAST, var_expression_2705, inCompiler) ;
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_output (var_expression_2705, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 65))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 65)), var_selector_2664  COMMA_SOURCE_FILE ("effective-parameters.galgas", 65)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_2838 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 67)) ;
      GALGAS_lstring var_effectiveParameterName_2871 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 68)) ;
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_outputInput (var_effectiveParameterName_2871  COMMA_SOURCE_FILE ("effective-parameters.galgas", 69)), var_selector_2838  COMMA_SOURCE_FILE ("effective-parameters.galgas", 69)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_3018 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 71)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("effective-parameters.galgas", 72)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 73)) ;
      GALGAS_lstring var_effectiveParameterName_3074 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 74)) ;
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_outputInputSelfVariable (var_effectiveParameterName_3074  COMMA_SOURCE_FILE ("effective-parameters.galgas", 75)), var_selector_3018  COMMA_SOURCE_FILE ("effective-parameters.galgas", 75)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_selector_3232 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 77)) ;
      GALGAS_lstring var_effectiveParameterName_3265 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 78)) ;
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_input (var_effectiveParameterName_3265  COMMA_SOURCE_FILE ("effective-parameters.galgas", 79)), var_selector_3232  COMMA_SOURCE_FILE ("effective-parameters.galgas", 79)) ;
    } break ;
    case 6: {
      GALGAS_lstring var_selector_3405 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 81)) ;
      GALGAS_bool var_constant_3430 ;
      switch (select_omnibus_5F_syntax_124 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("effective-parameters.galgas", 84)) ;
        var_constant_3430 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("effective-parameters.galgas", 87)) ;
        var_constant_3430 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_effectiveParameterName_3572 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 90)) ;
      GALGAS_lstring var_typeName_3614 ;
      switch (select_omnibus_5F_syntax_125 (inCompiler)) {
      case 1: {
        var_typeName_3614 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("effective-parameters.galgas", 93)) ;
      } break ;
      case 2: {
        nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_3614, inCompiler) ;
      } break ;
      default:
        break ;
      }
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::constructor_inputWithType (var_constant_3430, var_typeName_3614, var_effectiveParameterName_3572  COMMA_SOURCE_FILE ("effective-parameters.galgas", 98)), var_selector_3405  COMMA_SOURCE_FILE ("effective-parameters.galgas", 97)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outEndOfArgs = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 101)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 102)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_effective_5F_parameters_i118_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_123 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 63)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 67)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 68)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 71)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("effective-parameters.galgas", 72)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 74)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 77)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 78)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 81)) ;
      switch (select_omnibus_5F_syntax_124 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("effective-parameters.galgas", 84)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("effective-parameters.galgas", 87)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 90)) ;
      switch (select_omnibus_5F_syntax_125 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 102)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_effective_5F_parameters_i118_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_123 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 63)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 67)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 68)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 71)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("effective-parameters.galgas", 72)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 74)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 77)) ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 78)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 81)) ;
      switch (select_omnibus_5F_syntax_124 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("effective-parameters.galgas", 84)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("effective-parameters.galgas", 87)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 90)) ;
      switch (select_omnibus_5F_syntax_125 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        nt_type_5F_definition_indexing (inCompiler) ;
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
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 102)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i119_ (GALGAS_ast & ioArgument_ioAST,
                                                                          C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_target COMMA_SOURCE_FILE ("target-generation.galgas", 10)) ;
  GALGAS_lstring var_targetName_590 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("target-generation.galgas", 11)) ;
  ioArgument_ioAST.mProperty_mTargetListAST.addAssign_operation (var_targetName_590  COMMA_SOURCE_FILE ("target-generation.galgas", 12)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i119_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_target COMMA_SOURCE_FILE ("target-generation.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("target-generation.galgas", 11)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i119_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_target COMMA_SOURCE_FILE ("target-generation.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("target-generation.galgas", 11)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i120_ (GALGAS_ast & ioArgument_ioAST,
                                                                          C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_ctAssert COMMA_SOURCE_FILE ("declaration-check-target.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_target COMMA_SOURCE_FILE ("declaration-check-target.galgas", 11)) ;
  GALGAS_location var_targetConstructLocation_593 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("declaration-check-target.galgas", 12)) ;
  GALGAS_lstringlist var_acceptedTargetList_655 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-check-target.galgas", 13)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_targetName_712 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 15)) ;
    var_acceptedTargetList_655.addAssign_operation (var_targetName_712  COMMA_SOURCE_FILE ("declaration-check-target.galgas", 16)) ;
    switch (select_omnibus_5F_syntax_126 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 18)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioAST.mProperty_mCheckTargetListAST.addAssign_operation (var_targetConstructLocation_593, var_acceptedTargetList_655  COMMA_SOURCE_FILE ("declaration-check-target.galgas", 20)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i120_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_ctAssert COMMA_SOURCE_FILE ("declaration-check-target.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_target COMMA_SOURCE_FILE ("declaration-check-target.galgas", 11)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 15)) ;
    switch (select_omnibus_5F_syntax_126 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 18)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i120_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_ctAssert COMMA_SOURCE_FILE ("declaration-check-target.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_target COMMA_SOURCE_FILE ("declaration-check-target.galgas", 11)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 15)) ;
    switch (select_omnibus_5F_syntax_126 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 18)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_i121_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                            C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_127 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 59)) ;
      GALGAS_location var_operatorLocation_2567 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 60)) ;
      GALGAS_ctExpressionAST var_rightExpression_2650 ;
      nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_ (var_rightExpression_2650, inCompiler) ;
      outArgument_outExpression = GALGAS_ctInfixExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_2567, GALGAS_compileTimeInfixOperatorEnumeration::constructor_bitWiseOrOp (SOURCE_FILE ("compile-time-expression.galgas", 65)), var_rightExpression_2650  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 62)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_i121_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_127 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 59)) ;
      nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_i121_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_127 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 59)) ;
      nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_xor_i122_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                                              C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_128 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 77)) ;
      GALGAS_location var_operatorLocation_3132 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 78)) ;
      GALGAS_ctExpressionAST var_rightExpression_3215 ;
      nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_ (var_rightExpression_3215, inCompiler) ;
      outArgument_outExpression = GALGAS_ctInfixExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_3132, GALGAS_compileTimeInfixOperatorEnumeration::constructor_bitWiseXorOp (SOURCE_FILE ("compile-time-expression.galgas", 83)), var_rightExpression_3215  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 80)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_xor_i122_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_128 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 77)) ;
      nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_xor_i122_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_128 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 77)) ;
      nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_and_i123_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                                              C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_equality_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_129 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 95)) ;
      GALGAS_location var_operatorLocation_3696 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 96)) ;
      GALGAS_ctExpressionAST var_rightExpression_3776 ;
      nt_compile_5F_time_5F_expression_5F_equality_ (var_rightExpression_3776, inCompiler) ;
      outArgument_outExpression = GALGAS_ctInfixExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_3696, GALGAS_compileTimeInfixOperatorEnumeration::constructor_bitWiseAndOp (SOURCE_FILE ("compile-time-expression.galgas", 101)), var_rightExpression_3776  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 98)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_and_i123_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_equality_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_129 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 95)) ;
      nt_compile_5F_time_5F_expression_5F_equality_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_and_i123_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_equality_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_129 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 95)) ;
      nt_compile_5F_time_5F_expression_5F_equality_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_equality_i124_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                                        C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_comparison_ (outArgument_outExpression, inCompiler) ;
  switch (select_omnibus_5F_syntax_130 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 113)) ;
    GALGAS_location var_operatorLocation_4253 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 114)) ;
    GALGAS_ctExpressionAST var_rightExpression_4335 ;
    nt_compile_5F_time_5F_expression_5F_comparison_ (var_rightExpression_4335, inCompiler) ;
    outArgument_outExpression = GALGAS_ctInfixExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_4253, GALGAS_compileTimeInfixOperatorEnumeration::constructor_equal (SOURCE_FILE ("compile-time-expression.galgas", 119)), var_rightExpression_4335  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 116)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 123)) ;
    GALGAS_location var_operatorLocation_4563 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 124)) ;
    GALGAS_ctExpressionAST var_rightExpression_4645 ;
    nt_compile_5F_time_5F_expression_5F_comparison_ (var_rightExpression_4645, inCompiler) ;
    GALGAS_ctInfixExpressionAST var_expression_4671 = GALGAS_ctInfixExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_4563, GALGAS_compileTimeInfixOperatorEnumeration::constructor_equal (SOURCE_FILE ("compile-time-expression.galgas", 129)), var_rightExpression_4645  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 126)) ;
    outArgument_outExpression = GALGAS_ctPrefixExpressionAST::constructor_new (var_operatorLocation_4563, GALGAS_compileTimePrefixOperatorEnumeration::constructor_notOp (SOURCE_FILE ("compile-time-expression.galgas", 134)), var_expression_4671  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 132)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_equality_i124_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_comparison_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_130 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 113)) ;
    nt_compile_5F_time_5F_expression_5F_comparison_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 123)) ;
    nt_compile_5F_time_5F_expression_5F_comparison_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_equality_i124_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_comparison_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_130 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 113)) ;
    nt_compile_5F_time_5F_expression_5F_comparison_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 123)) ;
    nt_compile_5F_time_5F_expression_5F_comparison_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_comparison_i125_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                                          C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_shift_ (outArgument_outExpression, inCompiler) ;
  switch (select_omnibus_5F_syntax_131 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 146)) ;
    GALGAS_location var_operatorLocation_5276 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 147)) ;
    GALGAS_ctExpressionAST var_rightExpression_5353 ;
    nt_compile_5F_time_5F_expression_5F_shift_ (var_rightExpression_5353, inCompiler) ;
    GALGAS_ctInfixExpressionAST var_lessThanExpression_5379 = GALGAS_ctInfixExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_5276, GALGAS_compileTimeInfixOperatorEnumeration::constructor_lessThan (SOURCE_FILE ("compile-time-expression.galgas", 152)), var_rightExpression_5353  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 149)) ;
    GALGAS_ctInfixExpressionAST var_equalExpression_5539 = GALGAS_ctInfixExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_5276, GALGAS_compileTimeInfixOperatorEnumeration::constructor_equal (SOURCE_FILE ("compile-time-expression.galgas", 158)), var_rightExpression_5353  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 155)) ;
    outArgument_outExpression = GALGAS_ctInfixExpressionAST::constructor_new (var_lessThanExpression_5379, var_operatorLocation_5276, GALGAS_compileTimeInfixOperatorEnumeration::constructor_bitWiseOrOp (SOURCE_FILE ("compile-time-expression.galgas", 164)), var_equalExpression_5539  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 161)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 168)) ;
    GALGAS_location var_operatorLocation_5905 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 169)) ;
    GALGAS_ctExpressionAST var_rightExpression_5982 ;
    nt_compile_5F_time_5F_expression_5F_shift_ (var_rightExpression_5982, inCompiler) ;
    GALGAS_ctInfixExpressionAST var_expression_6008 = GALGAS_ctInfixExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_5905, GALGAS_compileTimeInfixOperatorEnumeration::constructor_lessThan (SOURCE_FILE ("compile-time-expression.galgas", 174)), var_rightExpression_5982  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 171)) ;
    outArgument_outExpression = GALGAS_ctPrefixExpressionAST::constructor_new (var_operatorLocation_5905, GALGAS_compileTimePrefixOperatorEnumeration::constructor_notOp (SOURCE_FILE ("compile-time-expression.galgas", 179)), var_expression_6008  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 177)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 183)) ;
    GALGAS_location var_operatorLocation_6298 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 184)) ;
    GALGAS_ctExpressionAST var_rightExpression_6375 ;
    nt_compile_5F_time_5F_expression_5F_shift_ (var_rightExpression_6375, inCompiler) ;
    outArgument_outExpression = GALGAS_ctInfixExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_6298, GALGAS_compileTimeInfixOperatorEnumeration::constructor_lessThan (SOURCE_FILE ("compile-time-expression.galgas", 189)), var_rightExpression_6375  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 186)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 193)) ;
    GALGAS_location var_operatorLocation_6618 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 194)) ;
    GALGAS_ctExpressionAST var_rightExpression_6695 ;
    nt_compile_5F_time_5F_expression_5F_shift_ (var_rightExpression_6695, inCompiler) ;
    GALGAS_ctInfixExpressionAST var_lessThanExpression_6720 = GALGAS_ctInfixExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_6618, GALGAS_compileTimeInfixOperatorEnumeration::constructor_lessThan (SOURCE_FILE ("compile-time-expression.galgas", 199)), var_rightExpression_6695  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 196)) ;
    GALGAS_ctInfixExpressionAST var_equalExpression_6880 = GALGAS_ctInfixExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_6618, GALGAS_compileTimeInfixOperatorEnumeration::constructor_equal (SOURCE_FILE ("compile-time-expression.galgas", 205)), var_rightExpression_6695  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 202)) ;
    GALGAS_ctInfixExpressionAST var_lessThanOrEqualExpression_7034 = GALGAS_ctInfixExpressionAST::constructor_new (var_lessThanExpression_6720, var_operatorLocation_6618, GALGAS_compileTimeInfixOperatorEnumeration::constructor_bitWiseOrOp (SOURCE_FILE ("compile-time-expression.galgas", 211)), var_equalExpression_6880  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 208)) ;
    outArgument_outExpression = GALGAS_ctPrefixExpressionAST::constructor_new (var_operatorLocation_6618, GALGAS_compileTimePrefixOperatorEnumeration::constructor_notOp (SOURCE_FILE ("compile-time-expression.galgas", 216)), var_lessThanOrEqualExpression_7034  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 214)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_comparison_i125_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_shift_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_131 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 146)) ;
    nt_compile_5F_time_5F_expression_5F_shift_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 168)) ;
    nt_compile_5F_time_5F_expression_5F_shift_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 183)) ;
    nt_compile_5F_time_5F_expression_5F_shift_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 193)) ;
    nt_compile_5F_time_5F_expression_5F_shift_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_comparison_i125_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_shift_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_131 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 146)) ;
    nt_compile_5F_time_5F_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 168)) ;
    nt_compile_5F_time_5F_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 183)) ;
    nt_compile_5F_time_5F_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 193)) ;
    nt_compile_5F_time_5F_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_shift_i126_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                                     C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_addition_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_132 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 228)) ;
      GALGAS_location var_operatorLocation_7639 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 229)) ;
      GALGAS_ctExpressionAST var_rightExpression_7719 ;
      nt_compile_5F_time_5F_expression_5F_addition_ (var_rightExpression_7719, inCompiler) ;
      outArgument_outExpression = GALGAS_ctInfixExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_7639, GALGAS_compileTimeInfixOperatorEnumeration::constructor_leftShift (SOURCE_FILE ("compile-time-expression.galgas", 234)), var_rightExpression_7719  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 231)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 238)) ;
      GALGAS_location var_operatorLocation_7918 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 239)) ;
      GALGAS_ctExpressionAST var_rightExpression_7998 ;
      nt_compile_5F_time_5F_expression_5F_addition_ (var_rightExpression_7998, inCompiler) ;
      outArgument_outExpression = GALGAS_ctInfixExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_7918, GALGAS_compileTimeInfixOperatorEnumeration::constructor_rightShift (SOURCE_FILE ("compile-time-expression.galgas", 244)), var_rightExpression_7998  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 241)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_shift_i126_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_addition_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_132 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 228)) ;
      nt_compile_5F_time_5F_expression_5F_addition_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 238)) ;
      nt_compile_5F_time_5F_expression_5F_addition_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_shift_i126_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_addition_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_132 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 228)) ;
      nt_compile_5F_time_5F_expression_5F_addition_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 238)) ;
      nt_compile_5F_time_5F_expression_5F_addition_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_addition_i127_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                                        C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_product_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_133 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 256)) ;
      GALGAS_location var_operatorLocation_8472 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 257)) ;
      GALGAS_ctExpressionAST var_rightExpression_8551 ;
      nt_compile_5F_time_5F_expression_5F_product_ (var_rightExpression_8551, inCompiler) ;
      outArgument_outExpression = GALGAS_ctInfixExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_8472, GALGAS_compileTimeInfixOperatorEnumeration::constructor_addOp (SOURCE_FILE ("compile-time-expression.galgas", 262)), var_rightExpression_8551  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 259)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 266)) ;
      GALGAS_location var_operatorLocation_8745 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 267)) ;
      GALGAS_ctExpressionAST var_rightExpression_8824 ;
      nt_compile_5F_time_5F_expression_5F_product_ (var_rightExpression_8824, inCompiler) ;
      outArgument_outExpression = GALGAS_ctInfixExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_8745, GALGAS_compileTimeInfixOperatorEnumeration::constructor_addOp (SOURCE_FILE ("compile-time-expression.galgas", 272)), GALGAS_ctPrefixExpressionAST::constructor_new (var_operatorLocation_8745, GALGAS_compileTimePrefixOperatorEnumeration::constructor_minusOp (SOURCE_FILE ("compile-time-expression.galgas", 273)), var_rightExpression_8824  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 273))  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 269)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_addition_i127_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_product_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_133 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 256)) ;
      nt_compile_5F_time_5F_expression_5F_product_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 266)) ;
      nt_compile_5F_time_5F_expression_5F_product_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_addition_i127_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_product_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_133 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 256)) ;
      nt_compile_5F_time_5F_expression_5F_product_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 266)) ;
      nt_compile_5F_time_5F_expression_5F_product_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_product_i128_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                                       C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_primary_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_134 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 284)) ;
      GALGAS_location var_operatorLocation_9339 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 285)) ;
      GALGAS_ctExpressionAST var_rightExpression_9407 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_9407, inCompiler) ;
      outArgument_outExpression = GALGAS_ctInfixExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_9339, GALGAS_compileTimeInfixOperatorEnumeration::constructor_mulOp (SOURCE_FILE ("compile-time-expression.galgas", 290)), var_rightExpression_9407  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 287)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 294)) ;
      GALGAS_location var_operatorLocation_9600 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 295)) ;
      GALGAS_ctExpressionAST var_rightExpression_9668 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_9668, inCompiler) ;
      outArgument_outExpression = GALGAS_ctInfixExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_9600, GALGAS_compileTimeInfixOperatorEnumeration::constructor_modOp (SOURCE_FILE ("compile-time-expression.galgas", 300)), var_rightExpression_9668  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 297)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 304)) ;
      GALGAS_location var_operatorLocation_9863 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 305)) ;
      GALGAS_ctExpressionAST var_rightExpression_9931 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_9931, inCompiler) ;
      outArgument_outExpression = GALGAS_ctInfixExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_9863, GALGAS_compileTimeInfixOperatorEnumeration::constructor_moduloNoOvf (SOURCE_FILE ("compile-time-expression.galgas", 310)), var_rightExpression_9931  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 307)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 314)) ;
      GALGAS_location var_operatorLocation_10131 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 315)) ;
      GALGAS_ctExpressionAST var_rightExpression_10199 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_10199, inCompiler) ;
      outArgument_outExpression = GALGAS_ctInfixExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_10131, GALGAS_compileTimeInfixOperatorEnumeration::constructor_divOp (SOURCE_FILE ("compile-time-expression.galgas", 320)), var_rightExpression_10199  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 317)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 324)) ;
      GALGAS_location var_operatorLocation_10394 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 325)) ;
      GALGAS_ctExpressionAST var_rightExpression_10462 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_10462, inCompiler) ;
      outArgument_outExpression = GALGAS_ctInfixExpressionAST::constructor_new (outArgument_outExpression, var_operatorLocation_10394, GALGAS_compileTimeInfixOperatorEnumeration::constructor_divNoOvf (SOURCE_FILE ("compile-time-expression.galgas", 330)), var_rightExpression_10462  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 327)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_product_i128_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_134 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 284)) ;
      nt_compile_5F_time_5F_primary_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 294)) ;
      nt_compile_5F_time_5F_primary_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 304)) ;
      nt_compile_5F_time_5F_primary_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 314)) ;
      nt_compile_5F_time_5F_primary_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 324)) ;
      nt_compile_5F_time_5F_primary_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_product_i128_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_134 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 284)) ;
      nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 294)) ;
      nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 304)) ;
      nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 314)) ;
      nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 324)) ;
      nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i129_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("compile-time-expression.galgas", 339)) ;
  GALGAS_location var_operatorLocation_10846 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 340)) ;
  GALGAS_ctExpressionAST var_expression_10912 ;
  nt_compile_5F_time_5F_primary_ (var_expression_10912, inCompiler) ;
  outArgument_outExpression = GALGAS_ctPrefixExpressionAST::constructor_new (var_operatorLocation_10846, GALGAS_compileTimePrefixOperatorEnumeration::constructor_notOp (SOURCE_FILE ("compile-time-expression.galgas", 344)), var_expression_10912  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 342)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i129_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("compile-time-expression.galgas", 339)) ;
  nt_compile_5F_time_5F_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i129_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("compile-time-expression.galgas", 339)) ;
  nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i130_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 352)) ;
  GALGAS_location var_operatorLocation_11241 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 353)) ;
  GALGAS_ctExpressionAST var_expression_11307 ;
  nt_compile_5F_time_5F_primary_ (var_expression_11307, inCompiler) ;
  outArgument_outExpression = GALGAS_ctPrefixExpressionAST::constructor_new (var_operatorLocation_11241, GALGAS_compileTimePrefixOperatorEnumeration::constructor_minusOp (SOURCE_FILE ("compile-time-expression.galgas", 357)), var_expression_11307  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 355)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i130_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 352)) ;
  nt_compile_5F_time_5F_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i130_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 352)) ;
  nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i131_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 365)) ;
  nt_compile_5F_time_5F_expression_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 367)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i131_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 365)) ;
  nt_compile_5F_time_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 367)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i131_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 365)) ;
  nt_compile_5F_time_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 367)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i132_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("compile-time-expression.galgas", 373)) ;
  outArgument_outExpression = GALGAS_ctTrueExpressionAST::constructor_new (SOURCE_FILE ("compile-time-expression.galgas", 374)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i132_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("compile-time-expression.galgas", 373)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i132_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("compile-time-expression.galgas", 373)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i133_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("compile-time-expression.galgas", 380)) ;
  outArgument_outExpression = GALGAS_ctFalseExpressionAST::constructor_new (SOURCE_FILE ("compile-time-expression.galgas", 381)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i133_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("compile-time-expression.galgas", 380)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i133_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("compile-time-expression.galgas", 380)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i134_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lbigint var_value_12385 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("compile-time-expression.galgas", 387)) ;
  outArgument_outExpression = GALGAS_ctIntExpressionAST::constructor_new (var_value_12385  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 388)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i134_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("compile-time-expression.galgas", 387)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i134_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("compile-time-expression.galgas", 387)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i135_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_name_12657 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("compile-time-expression.galgas", 394)) ;
  outArgument_outExpression = GALGAS_ctIdentifierExpressionAST::constructor_new (var_name_12657  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 395)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i135_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("compile-time-expression.galgas", 394)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i135_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("compile-time-expression.galgas", 394)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_generic_5F_formal_5F_arguments_i136_ (GALGAS_genericFormalParameterList & outArgument_outGenericFormalParameterList,
                                                                                             C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outGenericFormalParameterList.drop () ; // Release 'out' argument
  outArgument_outGenericFormalParameterList = GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("llvm-generic-type.galgas", 93)) ;
  switch (select_omnibus_5F_syntax_135 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 96)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_omnibus_5F_syntax_137 (inCompiler)) {
      case 1: {
        GALGAS_lstring var_constantName_3712 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 99)) ;
        outArgument_outGenericFormalParameterList.addAssign_operation (GALGAS_genericFormalParameter::constructor_constant (var_constantName_3712  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 100))  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 100)) ;
      } break ;
      case 2: {
        GALGAS_lstring var_typeName_3836 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 102)) ;
        outArgument_outGenericFormalParameterList.addAssign_operation (GALGAS_genericFormalParameter::constructor_type (var_typeName_3836  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 103))  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 103)) ;
      } break ;
      default:
        break ;
      }
      switch (select_omnibus_5F_syntax_136 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 106)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 108)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_generic_5F_formal_5F_arguments_i136_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_135 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 96)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_omnibus_5F_syntax_137 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 99)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 102)) ;
      } break ;
      default:
        break ;
      }
      switch (select_omnibus_5F_syntax_136 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 106)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 108)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_generic_5F_formal_5F_arguments_i136_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_135 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 96)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_omnibus_5F_syntax_137 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 99)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 102)) ;
      } break ;
      default:
        break ;
      }
      switch (select_omnibus_5F_syntax_136 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 106)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 108)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_generic_5F_where_5F_clause_i137_ (GALGAS_ctExpressionAST & outArgument_outWhereClause,
                                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outWhereClause.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_138 (inCompiler)) {
  case 1: {
    outArgument_outWhereClause = GALGAS_ctTrueExpressionAST::constructor_new (SOURCE_FILE ("llvm-generic-type.galgas", 116)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_where COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 118)) ;
    nt_compile_5F_time_5F_expression_ (outArgument_outWhereClause, inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_generic_5F_where_5F_clause_i137_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_138 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_where COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 118)) ;
    nt_compile_5F_time_5F_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_generic_5F_where_5F_clause_i137_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_138 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_where COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 118)) ;
    nt_compile_5F_time_5F_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i138_ (GALGAS_ast & ioArgument_ioAST,
                                                                          C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 126)) ;
  GALGAS_lstring var_typeName_4499 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 127)) ;
  GALGAS_genericFormalParameterList var_genericFormalParameterList_4544 ;
  nt_generic_5F_formal_5F_arguments_ (var_genericFormalParameterList_4544, inCompiler) ;
  GALGAS_ctExpressionAST var_whereClause_4603 ;
  nt_generic_5F_where_5F_clause_ (var_whereClause_4603, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 130)) ;
  GALGAS_lstring var_sizeKey_4645 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 131)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_sizeKey_4645.readProperty_string ().objectCompare (GALGAS_string ("size"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_sizeKey_4645.readProperty_location (), GALGAS_string ("this identifier should be 'size'"), fixItArray1  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 133)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 135)) ;
  GALGAS_lbigint var_bitSize_4782 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 136)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 148)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_llvmGenericType::constructor_new (var_typeName_4499, var_genericFormalParameterList_4544, var_whereClause_4603, var_bitSize_4782.readProperty_bigint ()  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 149))  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 149)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i138_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 126)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 127)) ;
  nt_generic_5F_formal_5F_arguments_parse (inCompiler) ;
  nt_generic_5F_where_5F_clause_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 130)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 131)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 136)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 148)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i138_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 126)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 127)) ;
  nt_generic_5F_formal_5F_arguments_indexing (inCompiler) ;
  nt_generic_5F_where_5F_clause_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 130)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 131)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 136)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 148)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_function_5F_header_i139_ (GALGAS_lstring & outArgument_outTargetVariableName,
                                                                                         GALGAS_lstring & outArgument_outTargetTypeName,
                                                                                         GALGAS_genericFormalParameterList & outArgument_outTargetGenericFormalParameterList,
                                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outTargetVariableName.drop () ; // Release 'out' argument
  outArgument_outTargetTypeName.drop () ; // Release 'out' argument
  outArgument_outTargetGenericFormalParameterList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 100)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 101)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 102)) ;
  outArgument_outTargetVariableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 103)) ;
  outArgument_outTargetTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 104)) ;
  nt_generic_5F_formal_5F_arguments_ (outArgument_outTargetGenericFormalParameterList, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_function_5F_header_i139_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 100)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 101)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 102)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 103)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 104)) ;
  nt_generic_5F_formal_5F_arguments_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 106)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_function_5F_header_i139_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 100)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 101)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 102)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 103)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 104)) ;
  nt_generic_5F_formal_5F_arguments_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i140_ (GALGAS_ast & ioArgument_ioAST,
                                                                          C_Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_lstring var_targetVariableName_5082 ;
  GALGAS_lstring var_targetTypeName_5106 ;
  GALGAS_genericFormalParameterList var_targetGenericFormalParameterList_5126 ;
  nt_llvm_5F_function_5F_header_ (var_targetVariableName_5082, var_targetTypeName_5106, var_targetGenericFormalParameterList_5126, inCompiler) ;
  GALGAS_location var_operatorLocation_5167 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 113)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 114)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 115)) ;
  GALGAS_lstring var_sourceVariableName_5239 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 116)) ;
  GALGAS_lstring var_sourceTypeName_5276 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 117)) ;
  GALGAS_genericFormalParameterList var_sourceGenericFormalParameterList_5327 ;
  nt_generic_5F_formal_5F_arguments_ (var_sourceGenericFormalParameterList_5327, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 119)) ;
  GALGAS_ctExpressionAST var_whereClause_5400 ;
  nt_generic_5F_where_5F_clause_ (var_whereClause_5400, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 121)) ;
  GALGAS_llvmGenerationInstructionList var_instructionList_5453 ;
  nt_llvm_5F_instruction_5F_list_ (var_instructionList_5453, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 123)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_llvmAssignmentOperatorDeclarationAST::constructor_new (var_operatorLocation_5167, var_targetVariableName_5082, var_targetTypeName_5106, var_targetGenericFormalParameterList_5126, var_sourceVariableName_5239, var_sourceTypeName_5276, var_sourceGenericFormalParameterList_5327, var_whereClause_5400, var_instructionList_5453  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 124))  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 124)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i140_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_llvm_5F_function_5F_header_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 114)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 115)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 116)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 117)) ;
  nt_generic_5F_formal_5F_arguments_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 119)) ;
  nt_generic_5F_where_5F_clause_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 121)) ;
  nt_llvm_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 123)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i140_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  nt_llvm_5F_function_5F_header_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 114)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 115)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 116)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 117)) ;
  nt_generic_5F_formal_5F_arguments_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 119)) ;
  nt_generic_5F_where_5F_clause_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 121)) ;
  nt_llvm_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 123)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_5F_list_i141_ (GALGAS_llvmGenerationInstructionList & outArgument_outInstructionList,
                                                                                          C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GALGAS_llvmGenerationInstructionList::constructor_emptyList (SOURCE_FILE ("llvm-instructions.galgas", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_139 (inCompiler)) {
    case 2: {
      GALGAS_abstractLLVMInstruction var_instruction_2781 ;
      nt_llvm_5F_instruction_ (var_instruction_2781, inCompiler) ;
      outArgument_outInstructionList.addAssign_operation (var_instruction_2781  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 64)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_5F_list_i141_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_139 (inCompiler)) {
    case 2: {
      nt_llvm_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_5F_list_i141_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_139 (inCompiler)) {
    case 2: {
      nt_llvm_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_i142_ (GALGAS_abstractLLVMInstruction & outArgument_outInstruction,
                                                                                  C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("llvm-instructions.galgas", 71)) ;
  GALGAS_lstring var_name_3070 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-instructions.galgas", 72)) ;
  outArgument_outInstruction = GALGAS_llvmVarInstruction::constructor_new (var_name_3070  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 73)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_i142_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("llvm-instructions.galgas", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-instructions.galgas", 72)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_i142_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("llvm-instructions.galgas", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-instructions.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_i143_ (GALGAS_abstractLLVMInstruction & outArgument_outInstruction,
                                                                                  C_Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-instructions.galgas", 79)) ;
  GALGAS_llvmGenerationInstructionElementList var_elementList_3383 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("llvm-instructions.galgas", 80)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_141 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_string_3448 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("llvm-instructions.galgas", 83)) ;
      var_elementList_3383.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (var_string_3448.readProperty_string ()  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 84))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 84)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_name_3540 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-instructions.galgas", 86)) ;
      var_elementList_3383.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (var_name_3540  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 87))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 87)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_typeName_3622 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-instructions.galgas", 89)) ;
      var_elementList_3383.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_type (var_typeName_3622  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 90))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 90)) ;
    } break ;
    default:
      break ;
    }
    switch (select_omnibus_5F_syntax_140 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("llvm-instructions.galgas", 93)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outInstruction = GALGAS_llvmGenerationInstruction::constructor_new (var_elementList_3383  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 95)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_i143_parse (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-instructions.galgas", 79)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_141 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("llvm-instructions.galgas", 83)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-instructions.galgas", 86)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-instructions.galgas", 89)) ;
    } break ;
    default:
      break ;
    }
    switch (select_omnibus_5F_syntax_140 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("llvm-instructions.galgas", 93)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_i143_indexing (C_Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-instructions.galgas", 79)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_141 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("llvm-instructions.galgas", 83)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-instructions.galgas", 86)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-instructions.galgas", 89)) ;
    } break ;
    default:
      break ;
    }
    switch (select_omnibus_5F_syntax_140 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("llvm-instructions.galgas", 93)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

