#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@_32_lstringlist' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement__32_lstringlist : public cCollectionElement {
  public: GALGAS__32_lstringlist_2D_element mObject ;

//--- Class functions
  public: cCollectionElement__32_lstringlist (const GALGAS_lstring & in_mValue_30_,
                                              const GALGAS_lstring & in_mValue_31_
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement__32_lstringlist (const GALGAS__32_lstringlist_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement__32_lstringlist::cCollectionElement__32_lstringlist (const GALGAS_lstring & in_mValue_30_,
                                                                        const GALGAS_lstring & in_mValue_31_
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue_30_, in_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement__32_lstringlist::cCollectionElement__32_lstringlist (const GALGAS__32_lstringlist_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mValue_30_, inElement.mProperty_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement__32_lstringlist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement__32_lstringlist::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement__32_lstringlist (mObject.mProperty_mValue_30_, mObject.mProperty_mValue_31_ COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement__32_lstringlist::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue0" ":") ;
  mObject.mProperty_mValue_30_.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue1" ":") ;
  mObject.mProperty_mValue_31_.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist::GALGAS__32_lstringlist (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist::GALGAS__32_lstringlist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS__32_lstringlist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS__32_lstringlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS__32_lstringlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS__32_lstringlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::enterElement (const GALGAS__32_lstringlist_2D_element & inValue,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement__32_lstringlist (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS__32_lstringlist::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                         const GALGAS_lstring & inOperand1
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS__32_lstringlist result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS__32_lstringlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS__32_lstringlist::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_lstring & in_mValue_30_,
                                                        const GALGAS_lstring & in_mValue_31_
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = nullptr ;
  macroMyNew (p, cCollectionElement__32_lstringlist (in_mValue_30_,
                                                     in_mValue_31_ COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                  const GALGAS_lstring & inOperand1
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement__32_lstringlist (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::setter_append (const GALGAS_lstring inOperand0,
                                            const GALGAS_lstring inOperand1,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement__32_lstringlist (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                   const GALGAS_lstring inOperand1,
                                                   const GALGAS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement__32_lstringlist (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   const GALGAS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
        outOperand0 = p->mObject.mProperty_mValue_30_ ;
        outOperand1 = p->mObject.mProperty_mValue_31_ ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::setter_popFirst (GALGAS_lstring & outOperand0,
                                              GALGAS_lstring & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    outOperand0 = p->mObject.mProperty_mValue_30_ ;
    outOperand1 = p->mObject.mProperty_mValue_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::setter_popLast (GALGAS_lstring & outOperand0,
                                             GALGAS_lstring & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    outOperand0 = p->mObject.mProperty_mValue_30_ ;
    outOperand1 = p->mObject.mProperty_mValue_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::method_first (GALGAS_lstring & outOperand0,
                                           GALGAS_lstring & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    outOperand0 = p->mObject.mProperty_mValue_30_ ;
    outOperand1 = p->mObject.mProperty_mValue_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::method_last (GALGAS_lstring & outOperand0,
                                          GALGAS_lstring & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    outOperand0 = p->mObject.mProperty_mValue_30_ ;
    outOperand1 = p->mObject.mProperty_mValue_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS__32_lstringlist::add_operation (const GALGAS__32_lstringlist & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS__32_lstringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS__32_lstringlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS__32_lstringlist result = GALGAS__32_lstringlist::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS__32_lstringlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS__32_lstringlist result = GALGAS__32_lstringlist::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS__32_lstringlist::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS__32_lstringlist result = GALGAS__32_lstringlist::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::plusAssign_operation (const GALGAS__32_lstringlist inOperand,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::setter_setMValue_30_AtIndex (GALGAS_lstring inOperand,
                                                          GALGAS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue_30_ = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS__32_lstringlist::getter_mValue_30_AtIndex (const GALGAS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    result = p->mObject.mProperty_mValue_30_ ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::setter_setMValue_31_AtIndex (GALGAS_lstring inOperand,
                                                          GALGAS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue_31_ = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS__32_lstringlist::getter_mValue_31_AtIndex (const GALGAS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    result = p->mObject.mProperty_mValue_31_ ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator__32_lstringlist::cEnumerator__32_lstringlist (const GALGAS__32_lstringlist & inEnumeratedObject,
                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element cEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject.mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject.mProperty_mValue_31_ ;
}




//--------------------------------------------------------------------------------------------------
//
//     @2lstringlist generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist ("2lstringlist",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS__32_lstringlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS__32_lstringlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS__32_lstringlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS__32_lstringlist::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS__32_lstringlist result ;
  const GALGAS__32_lstringlist * p = (const GALGAS__32_lstringlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS__32_lstringlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//--------------------------------------------------------------------------------------------------

#include "unicode_character_cpp.h"
#include "scanner_actions.h"
#include "cLexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

cTokenFor_omnibus_5F_lexique::cTokenFor_omnibus_5F_lexique (void) :
mLexicalAttribute_bigInteger (),
mLexicalAttribute_tokenString () {
}

//--------------------------------------------------------------------------------------------------

Lexique_omnibus_5F_lexique::Lexique_omnibus_5F_lexique (Compiler * inCallerCompiler,
                                                        const String & inSourceFileName
                                                        COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

Lexique_omnibus_5F_lexique::Lexique_omnibus_5F_lexique (Compiler * inCallerCompiler,
                                                        const String & inSourceString,
                                                        const String & inStringForError
                                                        COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//--------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_omnibus_5F_lexique_attributeError = "in an attribute name, a letter, a digit or a dot should follow the '@' character" ;

static const char * gLexicalMessage_omnibus_5F_lexique_binaryDigitError = "0b should be followed by a binary digit" ;

static const char * gLexicalMessage_omnibus_5F_lexique_groupError = "in a register group name, a letter or a digit should follow the '©' character" ;

static const char * gLexicalMessage_omnibus_5F_lexique_hexDigitError = "0x should be followed by a hexadecimal digit" ;

static const char * gLexicalMessage_omnibus_5F_lexique_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_omnibus_5F_lexique_internalError = "internal error" ;

static const char * gLexicalMessage_omnibus_5F_lexique_typeError = "in a type name, a letter or a digit should follow the '$' character" ;

//--------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//--------------------------------------------------------------------------------------------------

String Lexique_omnibus_5F_lexique::getMessageForTerminal (const int32_t inTerminalIndex) const {
  String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 119)) {
    static const char * syntaxErrorMessageArray [119] = {kEndOfSourceLexicalErrorMessage,
        "an identifier",
        "an attribute @...",
        "a literal integer",
        "a literal character string \"...\"",
        "a comment",
        "a comment",
        "the '\?' or '\?selector:' delimitor",
        "the '\?!' or '\?!selector:' delimitor",
        "the '!' or '!selector:' delimitor",
        "the '!\?' or '!\?selector:' delimitor",
        "a type $...",
        "a control register group ©...",
        "the 'addressof' keyword",
        "the 'assert' keyword",
        "the 'boot' keyword",
        "the 'case' keyword",
        "the 'convert' keyword",
        "the 'ctAssert' keyword",
        "the 'compiletime' keyword",
        "the 'driver' keyword",
        "the 'else' keyword",
        "the 'enum' keyword",
        "the 'event' keyword",
        "the 'extend' keyword",
        "the 'extern' keyword",
        "the 'for' keyword",
        "the 'func' keyword",
        "the 'guard' keyword",
        "the 'if' keyword",
        "the 'import' keyword",
        "the 'in' keyword",
        "the 'interrupt' keyword",
        "the 'let' keyword",
        "the 'llvm' keyword",
        "the 'no' keyword",
        "the 'not' keyword",
        "the 'opaque' keyword",
        "the 'option' keyword",
        "the 'panic' keyword",
        "the 'primitive' keyword",
        "the 'public' keyword",
        "the 'registers' keyword",
        "the 'required' keyword",
        "the 'safe' keyword",
        "the 'section' keyword",
        "the 'self' keyword",
        "the 'service' keyword",
        "the 'sizeof' keyword",
        "the 'startup' keyword",
        "the 'struct' keyword",
        "the 'staticArray' keyword",
        "the 'switch' keyword",
        "the 'sync' keyword",
        "the 'target' keyword",
        "the 'task' keyword",
        "the 'truncate' keyword",
        "the 'typealias' keyword",
        "the 'var' keyword",
        "the 'until' keyword",
        "the 'user' keyword",
        "the 'where' keyword",
        "the 'when' keyword",
        "the 'while' keyword",
        "the 'yes' keyword",
        "the ':' delimitor",
        "the '.' delimitor",
        "the ',' delimitor",
        "the '{' delimitor",
        "the '}' delimitor",
        "the '=' delimitor",
        "the '(' delimitor",
        "the ')' delimitor",
        "the '_' delimitor",
        "the '==' delimitor",
        "the '≠' delimitor",
        "the '<' delimitor",
        "the '≤' delimitor",
        "the '>' delimitor",
        "the '≥' delimitor",
        "the '[' delimitor",
        "the ']' delimitor",
        "the ']!' delimitor",
        "the '<<' delimitor",
        "the '>>' delimitor",
        "the '~' delimitor",
        "the '||' delimitor",
        "the '&&' delimitor",
        "the '->' delimitor",
        "the '..<' delimitor",
        "the '...' delimitor",
        "the '|' delimitor",
        "the '|=' delimitor",
        "the '&' delimitor",
        "the '&=' delimitor",
        "the '^' delimitor",
        "the '^=' delimitor",
        "the '+' delimitor",
        "the '+%' delimitor",
        "the '+=' delimitor",
        "the '+%=' delimitor",
        "the '-' delimitor",
        "the '-%' delimitor",
        "the '-=' delimitor",
        "the '-%=' delimitor",
        "the '*' delimitor",
        "the '*%' delimitor",
        "the '*=' delimitor",
        "the '*%=' delimitor",
        "the '/' delimitor",
        "the '!/' delimitor",
        "the '/=' delimitor",
        "the '!/=' delimitor",
        "the '%' delimitor",
        "the '!%' delimitor",
        "the '%=' delimitor",
        "the '!%=' delimitor",
        "the '<<=' delimitor",
        "the '>>=' delimitor"
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$!%$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__21__25_ = {
  TO_UNICODE ('!'),
  TO_UNICODE ('%'),
} ;

//--- Unicode string for '$!%=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__21__25__3D_ = {
  TO_UNICODE ('!'),
  TO_UNICODE ('%'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$!/$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__21__2F_ = {
  TO_UNICODE ('!'),
  TO_UNICODE ('/'),
} ;

//--- Unicode string for '$!/=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__21__2F__3D_ = {
  TO_UNICODE ('!'),
  TO_UNICODE ('/'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$%$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__25_ = {
  TO_UNICODE ('%'),
} ;

//--- Unicode string for '$%=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__25__3D_ = {
  TO_UNICODE ('%'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$&$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__26_ = {
  TO_UNICODE ('&'),
} ;

//--- Unicode string for '$&&$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__26__26_ = {
  TO_UNICODE ('&'),
  TO_UNICODE ('&'),
} ;

//--- Unicode string for '$&=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__26__3D_ = {
  TO_UNICODE ('&'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$($'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__28_ = {
  TO_UNICODE ('('),
} ;

//--- Unicode string for '$)$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__29_ = {
  TO_UNICODE (')'),
} ;

//--- Unicode string for '$*$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2A_ = {
  TO_UNICODE ('*'),
} ;

//--- Unicode string for '$*%$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2A__25_ = {
  TO_UNICODE ('*'),
  TO_UNICODE ('%'),
} ;

//--- Unicode string for '$*%=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2A__25__3D_ = {
  TO_UNICODE ('*'),
  TO_UNICODE ('%'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$*=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2A__3D_ = {
  TO_UNICODE ('*'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$+$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2B_ = {
  TO_UNICODE ('+'),
} ;

//--- Unicode string for '$+%$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2B__25_ = {
  TO_UNICODE ('+'),
  TO_UNICODE ('%'),
} ;

//--- Unicode string for '$+%=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2B__25__3D_ = {
  TO_UNICODE ('+'),
  TO_UNICODE ('%'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$+=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2B__3D_ = {
  TO_UNICODE ('+'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$,$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2C_ = {
  TO_UNICODE (','),
} ;

//--- Unicode string for '$-$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2D_ = {
  TO_UNICODE ('-'),
} ;

//--- Unicode string for '$-%$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2D__25_ = {
  TO_UNICODE ('-'),
  TO_UNICODE ('%'),
} ;

//--- Unicode string for '$-%=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2D__25__3D_ = {
  TO_UNICODE ('-'),
  TO_UNICODE ('%'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$-=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2D__3D_ = {
  TO_UNICODE ('-'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$->$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2D__3E_ = {
  TO_UNICODE ('-'),
  TO_UNICODE ('>'),
} ;

//--- Unicode string for '$.$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2E_ = {
  TO_UNICODE ('.'),
} ;

//--- Unicode string for '$...$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2E__2E__2E_ = {
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
} ;

//--- Unicode string for '$..<$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2E__2E__3C_ = {
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
  TO_UNICODE ('<'),
} ;

//--- Unicode string for '$/$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2F_ = {
  TO_UNICODE ('/'),
} ;

//--- Unicode string for '$//$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2F__2F_ = {
  TO_UNICODE ('/'),
  TO_UNICODE ('/'),
} ;

//--- Unicode string for '$//!$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2F__2F__21_ = {
  TO_UNICODE ('/'),
  TO_UNICODE ('/'),
  TO_UNICODE ('!'),
} ;

//--- Unicode string for '$/=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2F__3D_ = {
  TO_UNICODE ('/'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$0b$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__30_b = {
  TO_UNICODE ('0'),
  TO_UNICODE ('b'),
} ;

//--- Unicode string for '$0x$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__30_x = {
  TO_UNICODE ('0'),
  TO_UNICODE ('x'),
} ;

//--- Unicode string for '$:$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3A_ = {
  TO_UNICODE (':'),
} ;

//--- Unicode string for '$<$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3C_ = {
  TO_UNICODE ('<'),
} ;

//--- Unicode string for '$<<$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3C__3C_ = {
  TO_UNICODE ('<'),
  TO_UNICODE ('<'),
} ;

//--- Unicode string for '$<<=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3C__3C__3D_ = {
  TO_UNICODE ('<'),
  TO_UNICODE ('<'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3D_ = {
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$==$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3D__3D_ = {
  TO_UNICODE ('='),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$>$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3E_ = {
  TO_UNICODE ('>'),
} ;

//--- Unicode string for '$>>$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3E__3E_ = {
  TO_UNICODE ('>'),
  TO_UNICODE ('>'),
} ;

//--- Unicode string for '$>>=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3E__3E__3D_ = {
  TO_UNICODE ('>'),
  TO_UNICODE ('>'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$[$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__5B_ = {
  TO_UNICODE ('['),
} ;

//--- Unicode string for '$\\\"$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__5C__22_ = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('\"'),
} ;

//--- Unicode string for '$]$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__5D_ = {
  TO_UNICODE (']'),
} ;

//--- Unicode string for '$]!$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__5D__21_ = {
  TO_UNICODE (']'),
  TO_UNICODE ('!'),
} ;

//--- Unicode string for '$^$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__5E_ = {
  TO_UNICODE ('^'),
} ;

//--- Unicode string for '$^=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__5E__3D_ = {
  TO_UNICODE ('^'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$_$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__5F_ = {
  TO_UNICODE ('_'),
} ;

//--- Unicode string for '$addressof$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_addressof = {
  TO_UNICODE ('a'),
  TO_UNICODE ('d'),
  TO_UNICODE ('d'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE ('o'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$assert$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_assert = {
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$boot$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_boot = {
  TO_UNICODE ('b'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$case$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_case = {
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$compiletime$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_compiletime = {
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
} ;

//--- Unicode string for '$convert$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_convert = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$ctAssert$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_ctAssert = {
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('A'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$driver$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_driver = {
  TO_UNICODE ('d'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$else$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_else = {
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$enum$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_enum = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
} ;

//--- Unicode string for '$event$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_event = {
  TO_UNICODE ('e'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$extend$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_extend = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
} ;

//--- Unicode string for '$extern$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_extern = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$for$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_for = {
  TO_UNICODE ('f'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$func$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_func = {
  TO_UNICODE ('f'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
} ;

//--- Unicode string for '$guard$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_guard = {
  TO_UNICODE ('g'),
  TO_UNICODE ('u'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
} ;

//--- Unicode string for '$if$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_if = {
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$import$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_import = {
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$in$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_in = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$interrupt$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_interrupt = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$let$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_let = {
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$llvm$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_llvm = {
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE ('v'),
  TO_UNICODE ('m'),
} ;

//--- Unicode string for '$no$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_no = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
} ;

//--- Unicode string for '$not$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_not = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$opaque$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_opaque = {
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE ('a'),
  TO_UNICODE ('q'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$option$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_option = {
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$panic$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_panic = {
  TO_UNICODE ('p'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
} ;

//--- Unicode string for '$primitive$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_primitive = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$public$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_public = {
  TO_UNICODE ('p'),
  TO_UNICODE ('u'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
} ;

//--- Unicode string for '$registers$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_registers = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('g'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('s'),
} ;

//--- Unicode string for '$required$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_required = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('q'),
  TO_UNICODE ('u'),
  TO_UNICODE ('i'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
} ;

//--- Unicode string for '$safe$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_safe = {
  TO_UNICODE ('s'),
  TO_UNICODE ('a'),
  TO_UNICODE ('f'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$section$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_section = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$self$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_self = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$service$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_service = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('v'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$sizeof$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_sizeof = {
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('z'),
  TO_UNICODE ('e'),
  TO_UNICODE ('o'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$startup$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_startup = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE ('u'),
  TO_UNICODE ('p'),
} ;

//--- Unicode string for '$staticArray$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_staticArray = {
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
} ;

//--- Unicode string for '$struct$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_struct = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$switch$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_switch = {
  TO_UNICODE ('s'),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
} ;

//--- Unicode string for '$sync$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_sync = {
  TO_UNICODE ('s'),
  TO_UNICODE ('y'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
} ;

//--- Unicode string for '$target$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_target = {
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$task$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_task = {
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('k'),
} ;

//--- Unicode string for '$truncate$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_truncate = {
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$typealias$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_typealias = {
  TO_UNICODE ('t'),
  TO_UNICODE ('y'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
} ;

//--- Unicode string for '$until$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_until = {
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
} ;

//--- Unicode string for '$user$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_user = {
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$var$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_var = {
  TO_UNICODE ('v'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$when$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_when = {
  TO_UNICODE ('w'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$where$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_where = {
  TO_UNICODE ('w'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$while$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_while = {
  TO_UNICODE ('w'),
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$yes$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_yes = {
  TO_UNICODE ('y'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
} ;

//--- Unicode string for '${$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__7B_ = {
  TO_UNICODE ('{'),
} ;

//--- Unicode string for '$|$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__7C_ = {
  TO_UNICODE ('|'),
} ;

//--- Unicode string for '$|=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__7C__3D_ = {
  TO_UNICODE ('|'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$||$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__7C__7C_ = {
  TO_UNICODE ('|'),
  TO_UNICODE ('|'),
} ;

//--- Unicode string for '$}$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__7D_ = {
  TO_UNICODE ('}'),
} ;

//--- Unicode string for '$~$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__7E_ = {
  TO_UNICODE ('~'),
} ;

//--- Unicode string for '$\xE2""\x89""\xA0""$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2260_ = {
  TO_UNICODE (8800),
} ;

//--- Unicode string for '$\xE2""\x89""\xA4""$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2264_ = {
  TO_UNICODE (8804),
} ;

//--- Unicode string for '$\xE2""\x89""\xA5""$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2265_ = {
  TO_UNICODE (8805),
} ;

//--------------------------------------------------------------------------------------------------
//             Key words table 'delimitorsList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_omnibus_5F_lexique_delimitorsList = 54 ;

static const C_unicode_lexique_table_entry ktable_for_omnibus_5F_lexique_delimitorsList [ktable_size_omnibus_5F_lexique_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__25_, Lexique_omnibus_5F_lexique::kToken__25_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__26_, Lexique_omnibus_5F_lexique::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__28_, Lexique_omnibus_5F_lexique::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__29_, Lexique_omnibus_5F_lexique::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2A_, Lexique_omnibus_5F_lexique::kToken__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2B_, Lexique_omnibus_5F_lexique::kToken__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2C_, Lexique_omnibus_5F_lexique::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2D_, Lexique_omnibus_5F_lexique::kToken__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2E_, Lexique_omnibus_5F_lexique::kToken__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2F_, Lexique_omnibus_5F_lexique::kToken__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3A_, Lexique_omnibus_5F_lexique::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3C_, Lexique_omnibus_5F_lexique::kToken__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3D_, Lexique_omnibus_5F_lexique::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3E_, Lexique_omnibus_5F_lexique::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__5B_, Lexique_omnibus_5F_lexique::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__5D_, Lexique_omnibus_5F_lexique::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__5E_, Lexique_omnibus_5F_lexique::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__5F_, Lexique_omnibus_5F_lexique::kToken__5F_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__7B_, Lexique_omnibus_5F_lexique::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__7C_, Lexique_omnibus_5F_lexique::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__7D_, Lexique_omnibus_5F_lexique::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__7E_, Lexique_omnibus_5F_lexique::kToken__7E_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2260_, Lexique_omnibus_5F_lexique::kToken__2260_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2264_, Lexique_omnibus_5F_lexique::kToken__2264_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2265_, Lexique_omnibus_5F_lexique::kToken__2265_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__21__25_, Lexique_omnibus_5F_lexique::kToken__21__25_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__21__2F_, Lexique_omnibus_5F_lexique::kToken__21__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__25__3D_, Lexique_omnibus_5F_lexique::kToken__25__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__26__26_, Lexique_omnibus_5F_lexique::kToken__26__26_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__26__3D_, Lexique_omnibus_5F_lexique::kToken__26__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2A__25_, Lexique_omnibus_5F_lexique::kToken__2A__25_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2A__3D_, Lexique_omnibus_5F_lexique::kToken__2A__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2B__25_, Lexique_omnibus_5F_lexique::kToken__2B__25_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2B__3D_, Lexique_omnibus_5F_lexique::kToken__2B__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2D__25_, Lexique_omnibus_5F_lexique::kToken__2D__25_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2D__3D_, Lexique_omnibus_5F_lexique::kToken__2D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2D__3E_, Lexique_omnibus_5F_lexique::kToken__2D__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2F__3D_, Lexique_omnibus_5F_lexique::kToken__2F__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3C__3C_, Lexique_omnibus_5F_lexique::kToken__3C__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3D__3D_, Lexique_omnibus_5F_lexique::kToken__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3E__3E_, Lexique_omnibus_5F_lexique::kToken__3E__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__5D__21_, Lexique_omnibus_5F_lexique::kToken__5D__21_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__5E__3D_, Lexique_omnibus_5F_lexique::kToken__5E__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__7C__3D_, Lexique_omnibus_5F_lexique::kToken__7C__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__7C__7C_, Lexique_omnibus_5F_lexique::kToken__7C__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__21__25__3D_, Lexique_omnibus_5F_lexique::kToken__21__25__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__21__2F__3D_, Lexique_omnibus_5F_lexique::kToken__21__2F__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2A__25__3D_, Lexique_omnibus_5F_lexique::kToken__2A__25__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2B__25__3D_, Lexique_omnibus_5F_lexique::kToken__2B__25__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2D__25__3D_, Lexique_omnibus_5F_lexique::kToken__2D__25__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2E__2E__2E_, Lexique_omnibus_5F_lexique::kToken__2E__2E__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2E__2E__3C_, Lexique_omnibus_5F_lexique::kToken__2E__2E__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3C__3C__3D_, Lexique_omnibus_5F_lexique::kToken__3C__3C__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3E__3E__3D_, Lexique_omnibus_5F_lexique::kToken__3E__3E__3D_)
} ;

int32_t Lexique_omnibus_5F_lexique::search_into_delimitorsList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_omnibus_5F_lexique_delimitorsList, ktable_size_omnibus_5F_lexique_delimitorsList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'keyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_omnibus_5F_lexique_keyWordList = 52 ;

static const C_unicode_lexique_table_entry ktable_for_omnibus_5F_lexique_keyWordList [ktable_size_omnibus_5F_lexique_keyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_if, Lexique_omnibus_5F_lexique::kToken_if),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_in, Lexique_omnibus_5F_lexique::kToken_in),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_no, Lexique_omnibus_5F_lexique::kToken_no),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_for, Lexique_omnibus_5F_lexique::kToken_for),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_let, Lexique_omnibus_5F_lexique::kToken_let),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_not, Lexique_omnibus_5F_lexique::kToken_not),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_var, Lexique_omnibus_5F_lexique::kToken_var),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_yes, Lexique_omnibus_5F_lexique::kToken_yes),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_boot, Lexique_omnibus_5F_lexique::kToken_boot),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_case, Lexique_omnibus_5F_lexique::kToken_case),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_else, Lexique_omnibus_5F_lexique::kToken_else),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_enum, Lexique_omnibus_5F_lexique::kToken_enum),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_func, Lexique_omnibus_5F_lexique::kToken_func),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_llvm, Lexique_omnibus_5F_lexique::kToken_llvm),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_safe, Lexique_omnibus_5F_lexique::kToken_safe),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_self, Lexique_omnibus_5F_lexique::kToken_self),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_sync, Lexique_omnibus_5F_lexique::kToken_sync),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_task, Lexique_omnibus_5F_lexique::kToken_task),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_user, Lexique_omnibus_5F_lexique::kToken_user),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_when, Lexique_omnibus_5F_lexique::kToken_when),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_event, Lexique_omnibus_5F_lexique::kToken_event),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_guard, Lexique_omnibus_5F_lexique::kToken_guard),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_panic, Lexique_omnibus_5F_lexique::kToken_panic),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_until, Lexique_omnibus_5F_lexique::kToken_until),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_where, Lexique_omnibus_5F_lexique::kToken_where),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_while, Lexique_omnibus_5F_lexique::kToken_while),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_assert, Lexique_omnibus_5F_lexique::kToken_assert),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_driver, Lexique_omnibus_5F_lexique::kToken_driver),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_extend, Lexique_omnibus_5F_lexique::kToken_extend),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_extern, Lexique_omnibus_5F_lexique::kToken_extern),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_import, Lexique_omnibus_5F_lexique::kToken_import),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_opaque, Lexique_omnibus_5F_lexique::kToken_opaque),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_option, Lexique_omnibus_5F_lexique::kToken_option),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_public, Lexique_omnibus_5F_lexique::kToken_public),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_sizeof, Lexique_omnibus_5F_lexique::kToken_sizeof),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_struct, Lexique_omnibus_5F_lexique::kToken_struct),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_switch, Lexique_omnibus_5F_lexique::kToken_switch),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_target, Lexique_omnibus_5F_lexique::kToken_target),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_convert, Lexique_omnibus_5F_lexique::kToken_convert),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_section, Lexique_omnibus_5F_lexique::kToken_section),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_service, Lexique_omnibus_5F_lexique::kToken_service),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_startup, Lexique_omnibus_5F_lexique::kToken_startup),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_ctAssert, Lexique_omnibus_5F_lexique::kToken_ctAssert),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_required, Lexique_omnibus_5F_lexique::kToken_required),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_truncate, Lexique_omnibus_5F_lexique::kToken_truncate),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_addressof, Lexique_omnibus_5F_lexique::kToken_addressof),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_interrupt, Lexique_omnibus_5F_lexique::kToken_interrupt),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_primitive, Lexique_omnibus_5F_lexique::kToken_primitive),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_registers, Lexique_omnibus_5F_lexique::kToken_registers),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_typealias, Lexique_omnibus_5F_lexique::kToken_typealias),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_compiletime, Lexique_omnibus_5F_lexique::kToken_compiletime),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_staticArray, Lexique_omnibus_5F_lexique::kToken_staticArray)
} ;

int32_t Lexique_omnibus_5F_lexique::search_into_keyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_omnibus_5F_lexique_keyWordList, ktable_size_omnibus_5F_lexique_keyWordList) ;
}


//--------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//--------------------------------------------------------------------------------------------------

String Lexique_omnibus_5F_lexique::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_omnibus_5F_lexique * ptr = (const cTokenFor_omnibus_5F_lexique *) inTokenPtr ;
  String s ;
  if (ptr == nullptr) {
    s.appendCString ("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString ("$$") ;
      break ;
    case kToken_identifier:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("identifier") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__40_attribute:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("@attribute") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_integer:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("integer") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_bigInteger.decimalString ()) ;
      break ;
    case kToken__22_string_22_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("\"string\"") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("comment") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_commentMark:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("commentMark") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3F_selector_3A_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("\?selector:") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__3F__21_selector_3A_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("\?!selector:") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__21_selector_3A_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("!selector:") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__21__3F_selector_3A_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("!\?selector:") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__24_type:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("$type") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__A9_group:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("©group") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_addressof:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("addressof") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_assert:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("assert") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_boot:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("boot") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_case:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("case") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_convert:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("convert") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_ctAssert:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("ctAssert") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_compiletime:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("compiletime") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_driver:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("driver") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_else:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("else") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_enum:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("enum") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_event:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("event") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_extend:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("extend") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_extern:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("extern") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_for:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("for") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_func:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("func") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_guard:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("guard") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_if:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("if") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_import:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("import") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_in:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("in") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_interrupt:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("interrupt") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_let:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("let") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_llvm:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("llvm") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_no:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("no") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_not:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("not") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_opaque:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("opaque") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_option:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("option") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_panic:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("panic") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_primitive:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("primitive") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_public:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("public") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_registers:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("registers") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_required:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("required") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_safe:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("safe") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_section:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("section") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_self:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("self") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_service:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("service") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_sizeof:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("sizeof") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_startup:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("startup") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_struct:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("struct") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_staticArray:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("staticArray") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_switch:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("switch") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_sync:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("sync") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_target:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("target") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_task:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("task") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_truncate:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("truncate") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_typealias:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("typealias") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_var:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("var") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_until:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("until") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_user:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("user") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_where:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("where") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_when:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("when") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_while:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("while") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_yes:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("yes") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3A_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (":") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (".") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (",") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("{") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("}") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__28_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("(") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__29_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (")") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__5F_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("_") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3D__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("==") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2260_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("≠") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("<") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2264_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("≤") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (">") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2265_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("≥") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__5B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("[") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__5D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("]") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__5D__21_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("]!") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3C__3C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("<<") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3E__3E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (">>") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("~") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7C__7C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("||") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__26__26_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("&&") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2D__3E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("->") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2E__2E__3C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("..<") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2E__2E__2E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("...") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("|") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7C__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("|=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__26_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("&") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__26__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("&=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__5E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("^") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__5E__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("^=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("+") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2B__25_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("+%") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2B__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("+=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2B__25__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("+%=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("-") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2D__25_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("-%") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2D__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("-=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2D__25__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("-%=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2A_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("*") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2A__25_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("*%") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2A__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("*=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2A__25__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("*%=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2F_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("/") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__21__2F_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("!/") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2F__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("/=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__21__2F__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("!/=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__21__25_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("!%") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__21__25__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("!%=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3C__3C__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("<<=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3E__3E__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (">>=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------
//                           Template Delimiters                                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//               INTERNAL PARSE LEXICAL TOKEN                                         
//--------------------------------------------------------------------------------------------------

void Lexique_omnibus_5F_lexique::internalParseLexicalToken (cTokenFor_omnibus_5F_lexique & token) {
  bool loop = true ;
  token.mLexicalAttribute_bigInteger = BigSigned () ;
  token.mLexicalAttribute_tokenString.removeAllKeepingCapacity () ;
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
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__30_b, true)) {
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
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__30_x, true)) {
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
        if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__5C__22_, true)) {
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
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2F__2F__21_, true)) {
      do {
        if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      enterDroppedTerminal (kToken_commentMark) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2F__2F_, true)) {
      do {
        if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      enterDroppedTerminal (kToken_comment) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3E__3E__3D_, true)) {
      token.mTokenCode = kToken__3E__3E__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3C__3C__3D_, true)) {
      token.mTokenCode = kToken__3C__3C__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2E__2E__3C_, true)) {
      token.mTokenCode = kToken__2E__2E__3C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2E__2E__2E_, true)) {
      token.mTokenCode = kToken__2E__2E__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2D__25__3D_, true)) {
      token.mTokenCode = kToken__2D__25__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2B__25__3D_, true)) {
      token.mTokenCode = kToken__2B__25__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2A__25__3D_, true)) {
      token.mTokenCode = kToken__2A__25__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__21__2F__3D_, true)) {
      token.mTokenCode = kToken__21__2F__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__21__25__3D_, true)) {
      token.mTokenCode = kToken__21__25__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__7C__7C_, true)) {
      token.mTokenCode = kToken__7C__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__7C__3D_, true)) {
      token.mTokenCode = kToken__7C__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__5E__3D_, true)) {
      token.mTokenCode = kToken__5E__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__5D__21_, true)) {
      token.mTokenCode = kToken__5D__21_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3E__3E_, true)) {
      token.mTokenCode = kToken__3E__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3D__3D_, true)) {
      token.mTokenCode = kToken__3D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3C__3C_, true)) {
      token.mTokenCode = kToken__3C__3C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2F__3D_, true)) {
      token.mTokenCode = kToken__2F__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2D__3E_, true)) {
      token.mTokenCode = kToken__2D__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2D__3D_, true)) {
      token.mTokenCode = kToken__2D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2D__25_, true)) {
      token.mTokenCode = kToken__2D__25_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2B__3D_, true)) {
      token.mTokenCode = kToken__2B__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2B__25_, true)) {
      token.mTokenCode = kToken__2B__25_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2A__3D_, true)) {
      token.mTokenCode = kToken__2A__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2A__25_, true)) {
      token.mTokenCode = kToken__2A__25_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__26__3D_, true)) {
      token.mTokenCode = kToken__26__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__26__26_, true)) {
      token.mTokenCode = kToken__26__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__25__3D_, true)) {
      token.mTokenCode = kToken__25__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__21__2F_, true)) {
      token.mTokenCode = kToken__21__2F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__21__25_, true)) {
      token.mTokenCode = kToken__21__25_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2265_, true)) {
      token.mTokenCode = kToken__2265_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2264_, true)) {
      token.mTokenCode = kToken__2264_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2260_, true)) {
      token.mTokenCode = kToken__2260_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__7E_, true)) {
      token.mTokenCode = kToken__7E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__7D_, true)) {
      token.mTokenCode = kToken__7D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__7C_, true)) {
      token.mTokenCode = kToken__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__7B_, true)) {
      token.mTokenCode = kToken__7B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__5F_, true)) {
      token.mTokenCode = kToken__5F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__5E_, true)) {
      token.mTokenCode = kToken__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__5D_, true)) {
      token.mTokenCode = kToken__5D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__5B_, true)) {
      token.mTokenCode = kToken__5B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3E_, true)) {
      token.mTokenCode = kToken__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3D_, true)) {
      token.mTokenCode = kToken__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3C_, true)) {
      token.mTokenCode = kToken__3C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3A_, true)) {
      token.mTokenCode = kToken__3A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2F_, true)) {
      token.mTokenCode = kToken__2F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2E_, true)) {
      token.mTokenCode = kToken__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2D_, true)) {
      token.mTokenCode = kToken__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2C_, true)) {
      token.mTokenCode = kToken__2C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2B_, true)) {
      token.mTokenCode = kToken__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2A_, true)) {
      token.mTokenCode = kToken__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__29_, true)) {
      token.mTokenCode = kToken__29_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__28_, true)) {
      token.mTokenCode = kToken__28_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__26_, true)) {
      token.mTokenCode = kToken__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__25_, true)) {
      token.mTokenCode = kToken__25_ ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (TO_UNICODE ('\?'))) {
      const LocationInSource currentLocationForTag_onlyInterrogationMark = mCurrentLocation ;
      const LocationInSource endLocationForTag_onlyInterrogationMark = mTokenEndLocation ;
      const utf32 currentCharForTag_onlyInterrogationMark = mCurrentChar ;
      if (testForInputUTF32Char (TO_UNICODE ('!'))) {
        const LocationInSource currentLocationForTag_onlyExclamationInterrogationMark = mCurrentLocation ;
        const LocationInSource endLocationForTag_onlyExclamationInterrogationMark = mTokenEndLocation ;
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
      const LocationInSource currentLocationForTag_onlyExclamationMark = mCurrentLocation ;
      const LocationInSource endLocationForTag_onlyExclamationMark = mTokenEndLocation ;
      const utf32 currentCharForTag_onlyExclamationMark = mCurrentChar ;
      if (testForInputUTF32Char (TO_UNICODE ('\?'))) {
        const LocationInSource currentLocationForTag_onlyInterrogationExclamationMark = mCurrentLocation ;
        const LocationInSource endLocationForTag_onlyInterrogationExclamationMark = mTokenEndLocation ;
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

//--------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//--------------------------------------------------------------------------------------------------

bool Lexique_omnibus_5F_lexique::parseLexicalToken (void) {
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

//--------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                
//--------------------------------------------------------------------------------------------------

void Lexique_omnibus_5F_lexique::enterToken (cTokenFor_omnibus_5F_lexique & ioToken) {
  cTokenFor_omnibus_5F_lexique * ptr = nullptr ;
  macroMyNew (ptr, cTokenFor_omnibus_5F_lexique ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_bigInteger = ioToken.mLexicalAttribute_bigInteger ;
  ptr->mLexicalAttribute_tokenString = ioToken.mLexicalAttribute_tokenString ;
  enterTokenFromPointer (ptr) ;
}

//--------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//--------------------------------------------------------------------------------------------------

BigSigned Lexique_omnibus_5F_lexique::attributeValue_bigInteger (void) const {
  cTokenFor_omnibus_5F_lexique * ptr = (cTokenFor_omnibus_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_bigInteger ;
}

//--------------------------------------------------------------------------------------------------

String Lexique_omnibus_5F_lexique::attributeValue_tokenString (void) const {
  cTokenFor_omnibus_5F_lexique * ptr = (cTokenFor_omnibus_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//--------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//--------------------------------------------------------------------------------------------------

GALGAS_lbigint Lexique_omnibus_5F_lexique::synthetizedAttribute_bigInteger (void) const {
  cTokenFor_omnibus_5F_lexique * ptr = (cTokenFor_omnibus_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_omnibus_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_bigint value (ptr->mLexicalAttribute_bigInteger) ;
  GALGAS_lbigint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring Lexique_omnibus_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_omnibus_5F_lexique * ptr = (cTokenFor_omnibus_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_omnibus_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_tokenString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist Lexique_omnibus_5F_lexique::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::class_func_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("@attribute") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("integer") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("\"string\"") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("commentMark") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("\?selector:") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("\?!selector:") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!selector:") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!\?selector:") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("$type") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("©group") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("addressof") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("assert") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("boot") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("case") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("convert") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("ctAssert") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("compiletime") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("driver") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("else") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("enum") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("event") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("extend") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("extern") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("for") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("func") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("guard") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("if") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("import") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("in") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("interrupt") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("let") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("llvm") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("no") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("not") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("opaque") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("option") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("panic") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("primitive") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("public") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("registers") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("required") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("safe") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("section") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("self") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("service") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("sizeof") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("startup") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("struct") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("staticArray") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("switch") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("sync") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("target") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("task") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("truncate") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("typealias") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("var") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("until") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("user") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("where") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("when") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("while") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("yes") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (":") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (".") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (",") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("{") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("}") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("(") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (")") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("_") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("==") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("≠") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("<") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("≤") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (">") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("≥") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("[") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("]") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("]!") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("<<") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (">>") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("~") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("||") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&&") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("->") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("..<") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("...") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("|") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("|=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("^") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("^=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("+") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("+%") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("+=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("+%=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("-") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("-%") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("-=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("-%=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("*") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("*%") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("*=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("*%=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("/") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!/") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("/=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!/=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!%") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!%=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("<<=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (">>=") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_omnibus_5F_lexique (TC_UniqueArray <String> & ioList) {
  ioList.appendObject ("omnibus_lexique:delimitorsList") ;
  ioList.appendObject ("omnibus_lexique:keyWordList") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_omnibus_5F_lexique (const String & inIdentifier,
                                                         bool & ioFound,
                                                         TC_UniqueArray <String> & ioList) {
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

//--------------------------------------------------------------------------------------------------

static cLexiqueIntrospection lexiqueIntrospection_omnibus_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_omnibus_5F_lexique, getKeywordsForIdentifier_omnibus_5F_lexique) ;

//--------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//--------------------------------------------------------------------------------------------------

uint32_t Lexique_omnibus_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
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

//--------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//--------------------------------------------------------------------------------------------------

String Lexique_omnibus_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
  String result ;
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



//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_import_5F_file_i0_ (GALGAS_lstringlist & ioArgument_ioImportedFileList,
                                                                           Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_import COMMA_SOURCE_FILE ("syntax-grammar.galgas", 10)) ;
  GALGAS_lstring var_importedFile_619 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("syntax-grammar.galgas", 11)) ;
  ioArgument_ioImportedFileList.addAssign_operation (var_importedFile_619  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 12)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, var_importedFile_619.readProperty_string ().getter_pathExtension (SOURCE_FILE ("syntax-grammar.galgas", 13)).objectCompare (GALGAS_string ("omnibus-import"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_importedFile_619.readProperty_location (), GALGAS_string ("the path extension should be .omnibus-import"), fixItArray1  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 14)) ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_import_5F_file_i0_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_import COMMA_SOURCE_FILE ("syntax-grammar.galgas", 10)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("syntax-grammar.galgas", 11)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_import_5F_file_i0_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_import COMMA_SOURCE_FILE ("syntax-grammar.galgas", 10)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("syntax-grammar.galgas", 11)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_start_5F_symbol_i1_ (GALGAS_ast & ioArgument_ioAST,
                                                                            GALGAS_lstringlist & outArgument_outImportedFileList,
                                                                            GALGAS_location & outArgument_outEndOfSourceFile,
                                                                            Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outImportedFileList.drop () ; // Release 'out' argument
  outArgument_outEndOfSourceFile.drop () ; // Release 'out' argument
  GALGAS_lstringlist temp_0 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("syntax-grammar.galgas", 25)) ;
  outArgument_outImportedFileList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
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
      repeatFlag_1 = false ;
      break ;
    }
  }
  outArgument_outEndOfSourceFile = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 34)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_start_5F_symbol_i1_parse (Lexique_omnibus_5F_lexique * inCompiler) {
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

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_start_5F_symbol_i1_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
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

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i2_ (GALGAS_ast & ioArgument_ioAST,
                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_typealias COMMA_SOURCE_FILE ("type-alias.galgas", 25)) ;
  GALGAS_lstring var_newTypeName_1343 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-alias.galgas", 27)) ;
  GALGAS_lstring var_typeName_1398 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1398, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_typeAliasDeclarationAST::init_21__21_ (var_newTypeName_1343, var_typeName_1398, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-alias.galgas", 29)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i2_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_typealias COMMA_SOURCE_FILE ("type-alias.galgas", 25)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-alias.galgas", 27)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i2_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_typealias COMMA_SOURCE_FILE ("type-alias.galgas", 25)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-alias.galgas", 27)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i3_ (GALGAS_ast & /* ioArgument_ioAST */,
                                                                               GALGAS_lstring & outArgument_outTypeName,
                                                                               Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i3_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i3_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i4_ (GALGAS_ast & ioArgument_ioAST,
                                                                               GALGAS_lstring & outArgument_outTypeName,
                                                                               Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 21)) ;
  GALGAS_expressionAST var_sizeExpression_1231 ;
  nt_expression_ (ioArgument_ioAST, var_sizeExpression_1231, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 23)) ;
  GALGAS_lstring var_elementTypeName_1289 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_elementTypeName_1289, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 25)) ;
  GALGAS_location var_sizeExpressionLocation_1321 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 26)) ;
  outArgument_outTypeName = GALGAS_string ("anonymous.").add_operation (ioArgument_ioAST.readProperty_mTypeDeclarationIndex ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 27)).getter_here (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 27)) ;
  ioArgument_ioAST.mProperty_mTypeDeclarationIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 28)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_fixedSizeArrayTypeDeclarationAST::init_21__21__21__21_ (outArgument_outTypeName, var_elementTypeName_1289, var_sizeExpression_1231, var_sizeExpressionLocation_1321, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 29)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i4_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 23)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i4_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 23)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 25)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i5_ (GALGAS_ast & ioArgument_ioAST,
                                                                               GALGAS_lstring & outArgument_outTypeName,
                                                                               Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 19)) ;
  GALGAS_lstring var_elementTypeName_1145 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_elementTypeName_1145, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 21)) ;
  outArgument_outTypeName = GALGAS_string ("anonymous.").add_operation (ioArgument_ioAST.readProperty_mTypeDeclarationIndex ().getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 22)).getter_here (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 22)) ;
  ioArgument_ioAST.mProperty_mTypeDeclarationIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 23)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_typeDynamicArrayDeclarationAST::init_21__21_ (outArgument_outTypeName, var_elementTypeName_1145, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 24)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i5_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 19)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 21)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i5_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 19)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 21)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i6_ (GALGAS_ast & ioArgument_ioAST,
                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 26)) ;
  GALGAS_lstring var_enumerationName_1339 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 28)) ;
  GALGAS_enumerationConstantList temp_0 = GALGAS_enumerationConstantList::init (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 29)) ;
  GALGAS_enumerationConstantList var_enumCaseList_1396 = temp_0 ;
  GALGAS_bigint var_idx_1423 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 30)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_case COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 32)) ;
    GALGAS_lstring var_constantName_1479 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 33)) ;
    var_enumCaseList_1396.addAssign_operation (var_constantName_1479, var_idx_1423  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 34)) ;
    var_idx_1423 = var_idx_1423.add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 35)) ;
    if (select_omnibus_5F_syntax_1 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 38)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_enumerationDeclarationAST::init_21__21_ (var_enumerationName_1339, var_enumCaseList_1396, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i6_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_case COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 32)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 33)) ;
    if (select_omnibus_5F_syntax_1 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 38)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i6_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_case COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 32)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 33)) ;
    if (select_omnibus_5F_syntax_1 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i7_ (GALGAS_ast & ioArgument_ioAST,
                                                                                                                         GALGAS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_propertyVisibility var_visibility_2715 ;
  switch (select_omnibus_5F_syntax_2 (inCompiler)) {
  case 1: {
    var_visibility_2715 = GALGAS_propertyVisibility::class_func_isPrivate (SOURCE_FILE ("type-structure-declaration.galgas", 57)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 59)) ;
    var_visibility_2715 = GALGAS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-structure-declaration.galgas", 60)) ;
  } break ;
  default:
    break ;
  }
  nt_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_visibility_2715, ioArgument_ioPropertyListAST, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i7_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 59)) ;
  } break ;
  default:
    break ;
  }
  nt_struct_5F_property_5F_declaration_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i7_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 59)) ;
  } break ;
  default:
    break ;
  }
  nt_struct_5F_property_5F_declaration_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_private_5F_struct_5F_property_5F_declaration_i8_ (GALGAS_ast & ioArgument_ioAST,
                                                                                                         GALGAS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  nt_struct_5F_property_5F_declaration_ (ioArgument_ioAST, GALGAS_propertyVisibility::class_func_isPrivate (SOURCE_FILE ("type-structure-declaration.galgas", 71)), ioArgument_ioPropertyListAST, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_private_5F_struct_5F_property_5F_declaration_i8_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_struct_5F_property_5F_declaration_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_private_5F_struct_5F_property_5F_declaration_i8_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_struct_5F_property_5F_declaration_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i9_ (GALGAS_ast & ioArgument_ioAST,
                                                                                              const GALGAS_propertyVisibility constinArgument_inVisibility,
                                                                                              GALGAS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                              Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 81)) ;
  GALGAS_lstring var_propertyName_3528 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 82)) ;
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
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 90)) ;
    GALGAS_expressionAST var_initExpression_3718 ;
    nt_expression_ (ioArgument_ioAST, var_initExpression_3718, inCompiler) ;
    GALGAS_propertyAttributeList temp_0 = GALGAS_propertyAttributeList::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 94)) ;
    ioArgument_ioPropertyListAST.addAssign_operation (var_propertyName_3528, temp_0, constinArgument_inVisibility, var_typeName_3558, GALGAS_propertyKindAST::class_func_initializedConstantProperty (var_initExpression_3718  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 97))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 92)) ;
  } break ;
  case 2: {
    GALGAS_propertyAttributeList temp_1 = GALGAS_propertyAttributeList::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 101)) ;
    ioArgument_ioPropertyListAST.addAssign_operation (var_propertyName_3528, temp_1, constinArgument_inVisibility, var_typeName_3558, GALGAS_propertyKindAST::class_func_uninitializedConstantProperty (SOURCE_FILE ("type-structure-declaration.galgas", 104))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 99)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i9_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 81)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 82)) ;
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
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 90)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i9_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 81)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 82)) ;
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
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 90)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i10_ (GALGAS_ast & ioArgument_ioAST,
                                                                                               const GALGAS_propertyVisibility constinArgument_inVisibility,
                                                                                               GALGAS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                               Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 115)) ;
  GALGAS_lstring var_propertyName_4373 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 116)) ;
  GALGAS_propertyAttributeList temp_0 = GALGAS_propertyAttributeList::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 117)) ;
  GALGAS_propertyAttributeList var_propertyAttributeList_4417 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_5 (inCompiler) == 2) {
      GALGAS_lstring var_attribute_4490 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 120)) ;
      GALGAS_lbigint var_value_4521 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 121)) ;
      var_propertyAttributeList_4417.addAssign_operation (var_attribute_4490, var_value_4521  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 122)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  switch (select_omnibus_5F_syntax_6 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_typeName_4633 ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_4633, inCompiler) ;
    switch (select_omnibus_5F_syntax_7 (inCompiler)) {
    case 1: {
      GALGAS_propertyAttributeList temp_2 = GALGAS_propertyAttributeList::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 127)) ;
      ioArgument_ioPropertyListAST.addAssign_operation (var_propertyName_4373, temp_2, constinArgument_inVisibility, var_typeName_4633, GALGAS_propertyKindAST::class_func_uninitializedStoredProperty (SOURCE_FILE ("type-structure-declaration.galgas", 127))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 127)) ;
    } break ;
    case 2: {
      nt_propertyGetterSetter_ (ioArgument_ioAST, constinArgument_inVisibility, var_propertyName_4373, var_propertyAttributeList_4417, var_typeName_4633, ioArgument_ioPropertyListAST, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 137)) ;
      GALGAS_expressionAST var_initExpression_4995 ;
      nt_expression_ (ioArgument_ioAST, var_initExpression_4995, inCompiler) ;
      ioArgument_ioPropertyListAST.addAssign_operation (var_propertyName_4373, var_propertyAttributeList_4417, constinArgument_inVisibility, var_typeName_4633, GALGAS_propertyKindAST::class_func_initializedStoredProperty (var_initExpression_4995  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 144))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 139)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 147)) ;
    GALGAS_expressionAST var_initExpression_5270 ;
    nt_expression_ (ioArgument_ioAST, var_initExpression_5270, inCompiler) ;
    ioArgument_ioPropertyListAST.addAssign_operation (var_propertyName_4373, var_propertyAttributeList_4417, constinArgument_inVisibility, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 153)), GALGAS_propertyKindAST::class_func_initializedStoredProperty (var_initExpression_5270  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 154))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 149)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i10_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 115)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 116)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 120)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 121)) ;
    }else{
      repeatFlag_0 = false ;
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
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 137)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 147)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i10_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 115)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 116)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 120)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 121)) ;
    }else{
      repeatFlag_0 = false ;
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
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 137)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 147)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_propertyGetterSetter_i11_ (GALGAS_ast & ioArgument_ioAST,
                                                                                  const GALGAS_propertyVisibility constinArgument_inVisibility,
                                                                                  const GALGAS_lstring constinArgument_inPropertyName,
                                                                                  const GALGAS_propertyAttributeList constinArgument_inPropertyAttributeList,
                                                                                  const GALGAS_lstring constinArgument_inTypeName,
                                                                                  GALGAS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                  Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 168)) ;
  switch (select_omnibus_5F_syntax_8 (inCompiler)) {
  case 1: {
    GALGAS_bool var_getterDefined_5904 = GALGAS_bool (false) ;
    GALGAS_bool var_setterDefined_5936 = GALGAS_bool (false) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_getterOrSetter_5997 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 173)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 174)) ;
      GALGAS_instructionListAST var_instructionList_6063 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_6063, inCompiler) ;
      GALGAS_location var_endOfInstructionList_6091 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 176)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 177)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (ComparisonKind::equal, var_getterOrSetter_5997.readProperty_string ().objectCompare (GALGAS_string ("get"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioPropertyListAST.addAssign_operation (constinArgument_inPropertyName, constinArgument_inPropertyAttributeList, constinArgument_inVisibility, constinArgument_inTypeName, GALGAS_propertyKindAST::class_func_readOnlyComputedProperty (var_instructionList_6063, var_endOfInstructionList_6091  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 184))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 179)) ;
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = var_getterDefined_5904.boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (var_getterOrSetter_5997.readProperty_location (), GALGAS_string ("duplicate getter definition"), fixItArray3  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 189)) ;
            }
          }
          var_getterDefined_5904 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (ComparisonKind::equal, var_getterOrSetter_5997.readProperty_string ().objectCompare (GALGAS_string ("set"))).boolEnum () ;
          if (kBoolTrue == test_4) {
            ioArgument_ioPropertyListAST.addAssign_operation (constinArgument_inPropertyName, constinArgument_inPropertyAttributeList, constinArgument_inVisibility, constinArgument_inTypeName, GALGAS_propertyKindAST::class_func_writeComputedProperty (var_instructionList_6063, var_endOfInstructionList_6091  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 198))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 193)) ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_setterDefined_5936.boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (var_getterOrSetter_5997.readProperty_location (), GALGAS_string ("duplicate setter definition"), fixItArray6  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 203)) ;
              }
            }
            var_setterDefined_5936 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_4) {
          TC_Array <FixItDescription> fixItArray7 ;
          fixItArray7.appendObject (FixItDescription (kFixItRemove, "")) ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("@set")) ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("@get")) ;
          inCompiler->emitSemanticError (var_getterOrSetter_5997.readProperty_location (), GALGAS_string ("invalid attribute"), fixItArray7  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 207)) ;
        }
      }
      if (select_omnibus_5F_syntax_9 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      GALGAS_bool test_9 = var_setterDefined_5936 ;
      if (kBoolTrue == test_9.boolEnum ()) {
        test_9 = var_getterDefined_5904.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 211)) ;
      }
      test_8 = test_9.boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 212)), GALGAS_string ("a getter should be defined"), fixItArray10  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 212)) ;
      }
    }
    if (kBoolFalse == test_8) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        GALGAS_bool test_12 = var_setterDefined_5936.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 213)) ;
        if (kBoolTrue == test_12.boolEnum ()) {
          test_12 = var_getterDefined_5904.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 213)) ;
        }
        test_11 = test_12.boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 214)), GALGAS_string ("a getter should be defined, and optionaly a setter"), fixItArray13  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 214)) ;
        }
      }
    }
  } break ;
  case 2: {
    GALGAS_instructionListAST var_readInstructionList_7579 ;
    nt_instructionList_ (ioArgument_ioAST, var_readInstructionList_7579, inCompiler) ;
    GALGAS_location var_endOfReadInstructionList_7609 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 218)) ;
    ioArgument_ioPropertyListAST.addAssign_operation (constinArgument_inPropertyName, constinArgument_inPropertyAttributeList, constinArgument_inVisibility, constinArgument_inTypeName, GALGAS_propertyKindAST::class_func_readOnlyComputedProperty (var_readInstructionList_7579, var_endOfReadInstructionList_7609  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 224))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 219)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 229)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_propertyGetterSetter_i11_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 168)) ;
  switch (select_omnibus_5F_syntax_8 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 173)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 174)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 177)) ;
      if (select_omnibus_5F_syntax_9 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    nt_instructionList_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 229)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_propertyGetterSetter_i11_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 168)) ;
  switch (select_omnibus_5F_syntax_8 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 173)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 174)) ;
      nt_instructionList_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 177)) ;
      if (select_omnibus_5F_syntax_9 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    nt_instructionList_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 229)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i12_ (GALGAS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 235)) ;
  GALGAS_lstring var_structureName_8142 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 236)) ;
  GALGAS_lstringlist temp_0 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 237)) ;
  GALGAS_lstringlist var_attributeList_8177 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_10 (inCompiler) == 2) {
      GALGAS_lstring var_attribute_8242 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 240)) ;
      var_attributeList_8177.addAssign_operation (var_attribute_8242  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 241)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 243)) ;
  GALGAS_structurePropertyListAST temp_2 = GALGAS_structurePropertyListAST::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 244)) ;
  GALGAS_structurePropertyListAST var_fieldList_8337 = temp_2 ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    switch (select_omnibus_5F_syntax_11 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_fieldList_8337, inCompiler) ;
    } break ;
    case 3: {
      nt_function_5F_declaration_ (ioArgument_ioAST, var_structureName_8142, inCompiler) ;
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 251)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_structureDeclarationAST::init_21__21__21__21__21__21__21_ (var_structureName_8142, var_structureName_8142, var_structureName_8142, var_attributeList_8177, GALGAS_bool (true), var_fieldList_8337, GALGAS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 252)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i12_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 235)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 236)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 240)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 243)) ;
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
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 251)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i12_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 235)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 236)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 240)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 243)) ;
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
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 251)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i13_ (GALGAS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 19)) ;
  GALGAS_lstring var_structureName_1113 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 20)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 21)) ;
  GALGAS_structurePropertyListAST temp_0 = GALGAS_structurePropertyListAST::init (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 22)) ;
  GALGAS_structurePropertyListAST var_fieldList_1169 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
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
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 33)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_syncDeclarationAST::init_21__21_ (var_structureName_1113, var_fieldList_1169, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 34)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i13_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 19)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 20)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 21)) ;
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
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 33)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i13_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 19)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 20)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 21)) ;
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
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 33)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i14_ (GALGAS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_opaque COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 21)) ;
  GALGAS_lstring var_opaqueTypeName_1188 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 22)) ;
  GALGAS_lstringlist temp_0 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 23)) ;
  GALGAS_lstringlist var_attributeList_1224 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_13 (inCompiler) == 2) {
      GALGAS_lstring var_attribute_1289 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 26)) ;
      var_attributeList_1224.addAssign_operation (var_attribute_1289  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 27)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 29)) ;
  GALGAS_expressionAST var_sizeExpression_1379 ;
  nt_expression_ (ioArgument_ioAST, var_sizeExpression_1379, inCompiler) ;
  GALGAS_location var_sizeExpressionLocation_1402 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 32)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_typeOpaqueDeclarationAST::init_21__21__21__21_ (var_opaqueTypeName_1188, var_sizeExpression_1379, var_sizeExpressionLocation_1402, var_attributeList_1224, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 33)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i14_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_opaque COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 21)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 26)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 29)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 32)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i14_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_opaque COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 21)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 26)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 29)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 32)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i15_ (GALGAS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 84)) ;
  GALGAS_registerGroupListAST temp_0 = GALGAS_registerGroupListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 85)) ;
  GALGAS_registerGroupListAST var_registerGroupListAST_3810 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GALGAS_lstring var_registerGroupName_3868 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("declaration-control-register.galgas", 87)) ;
    switch (select_omnibus_5F_syntax_15 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_attribute_3925 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 89)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (ComparisonKind::notEqual, var_attribute_3925.readProperty_string ().objectCompare (GALGAS_string ("at"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_attribute_3925.readProperty_location (), GALGAS_string ("attribute should be @at"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 91)) ;
        }
      }
      GALGAS_lbigint var_registerGroupBaseAddress_4074 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 93)) ;
      GALGAS_controlRegisterGroupKindAST var_groupKind_4111 = GALGAS_controlRegisterGroupKindAST::class_func_single (var_registerGroupBaseAddress_4074  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 94)) ;
      var_registerGroupListAST_3810.addAssign_operation (var_registerGroupName_3868, var_groupKind_4111  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 95)) ;
    } break ;
    case 2: {
      GALGAS_lbigintlist temp_4 = GALGAS_lbigintlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 97)) ;
      GALGAS_lbigintlist var_groupBaseAddresses_4308 = temp_4 ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 98)) ;
      GALGAS_expressionAST var_groupSize_4379 ;
      nt_expression_ (ioArgument_ioAST, var_groupSize_4379, inCompiler) ;
      GALGAS_location var_groupSizeExpressionLocation_4401 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 100)) ;
      GALGAS_lstring var_attribute_4472 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 101)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (ComparisonKind::notEqual, var_attribute_4472.readProperty_string ().objectCompare (GALGAS_string ("at"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (var_attribute_4472.readProperty_location (), GALGAS_string ("attribute should be @at"), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 103)) ;
        }
      }
      bool repeatFlag_7 = true ;
      while (repeatFlag_7) {
        GALGAS_lbigint var_baseAddress_4638 = inCompiler->synthetizedAttribute_bigInteger () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 106)) ;
        var_groupBaseAddresses_4308.addAssign_operation (var_baseAddress_4638  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 107)) ;
        if (select_omnibus_5F_syntax_16 (inCompiler) == 2) {
        }else{
          repeatFlag_7 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 111)) ;
      GALGAS_controlRegisterGroupKindAST var_groupKind_4760 = GALGAS_controlRegisterGroupKindAST::class_func_groupArray (var_groupSize_4379, var_groupSizeExpressionLocation_4401, var_groupBaseAddresses_4308  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 112)) ;
      var_registerGroupListAST_3810.addAssign_operation (var_registerGroupName_3868, var_groupKind_4760  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 117)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_14 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 122)) ;
  GALGAS_controlRegisterDeclarationList temp_8 = GALGAS_controlRegisterDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 123)) ;
  GALGAS_controlRegisterDeclarationList var_controlRegisterDeclarationList_5114 = temp_8 ;
  bool repeatFlag_9 = true ;
  while (repeatFlag_9) {
    GALGAS_controlRegisterNameListAST temp_10 = GALGAS_controlRegisterNameListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 125)) ;
    GALGAS_controlRegisterNameListAST var_registerDeclarationList_5200 = temp_10 ;
    bool repeatFlag_11 = true ;
    while (repeatFlag_11) {
      nt_registerDeclaration_ (ioArgument_ioAST, var_registerDeclarationList_5200, inCompiler) ;
      if (select_omnibus_5F_syntax_18 (inCompiler) == 2) {
      }else{
        repeatFlag_11 = false ;
      }
    }
    GALGAS_lstring var_registerTypeName_5362 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("declaration-control-register.galgas", 131)) ;
    GALGAS_controlRegisterBitSliceList temp_12 = GALGAS_controlRegisterBitSliceList::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 132)) ;
    GALGAS_controlRegisterBitSliceList var_registerBitSliceList_5418 = temp_12 ;
    switch (select_omnibus_5F_syntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 135)) ;
      bool repeatFlag_13 = true ;
      while (repeatFlag_13) {
        GALGAS_controlRegisterBitSlice var_registerBitSlice_5533 ;
        switch (select_omnibus_5F_syntax_21 (inCompiler)) {
        case 1: {
          GALGAS_lbigint var_unusedBitCount_5603 = inCompiler->synthetizedAttribute_bigInteger () ;
          inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 139)) ;
          var_registerBitSlice_5533 = GALGAS_controlRegisterBitSlice::class_func_unusedBits (var_unusedBitCount_5603  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 140)) ;
        } break ;
        case 2: {
          GALGAS_lstring var_bitName_5728 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 142)) ;
          switch (select_omnibus_5F_syntax_22 (inCompiler)) {
          case 1: {
            var_registerBitSlice_5533 = GALGAS_controlRegisterBitSlice::class_func_namedBit (var_bitName_5728, GALGAS_lbigint::init_21__21_ (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 144)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 144)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 144)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 146)) ;
            GALGAS_lbigint var_bitCount_5909 = inCompiler->synthetizedAttribute_bigInteger () ;
            inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 147)) ;
            var_registerBitSlice_5533 = GALGAS_controlRegisterBitSlice::class_func_namedBit (var_bitName_5728, var_bitCount_5909  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 148)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          break ;
        }
        var_registerBitSliceList_5418.addAssign_operation (var_registerBitSlice_5533  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 151)) ;
        if (select_omnibus_5F_syntax_20 (inCompiler) == 2) {
        }else{
          repeatFlag_13 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 155)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_endOfBitSlice_6148 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 157)) ;
    var_controlRegisterDeclarationList_5114.addAssign_operation (var_registerDeclarationList_5200, var_registerTypeName_5362, var_registerBitSliceList_5418, var_endOfBitSlice_6148  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 158)) ;
    if (select_omnibus_5F_syntax_17 (inCompiler) == 2) {
    }else{
      repeatFlag_9 = false ;
    }
  }
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_controlRegisterGroupDeclarationAST::init_21__21_ (var_registerGroupListAST_3810, var_controlRegisterDeclarationList_5114, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 161)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 165)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i15_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 84)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("declaration-control-register.galgas", 87)) ;
    switch (select_omnibus_5F_syntax_15 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 89)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 93)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 98)) ;
      nt_expression_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 101)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 106)) ;
        if (select_omnibus_5F_syntax_16 (inCompiler) == 2) {
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 111)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_14 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 122)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      nt_registerDeclaration_parse (inCompiler) ;
      if (select_omnibus_5F_syntax_18 (inCompiler) == 2) {
      }else{
        repeatFlag_3 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("declaration-control-register.galgas", 131)) ;
    switch (select_omnibus_5F_syntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 135)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        switch (select_omnibus_5F_syntax_21 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 139)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 142)) ;
          switch (select_omnibus_5F_syntax_22 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 146)) ;
            inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 147)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          break ;
        }
        if (select_omnibus_5F_syntax_20 (inCompiler) == 2) {
        }else{
          repeatFlag_4 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 155)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_17 (inCompiler) == 2) {
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 165)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i15_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 84)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("declaration-control-register.galgas", 87)) ;
    switch (select_omnibus_5F_syntax_15 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 89)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 93)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 98)) ;
      nt_expression_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 101)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 106)) ;
        if (select_omnibus_5F_syntax_16 (inCompiler) == 2) {
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 111)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_14 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 122)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      nt_registerDeclaration_indexing (inCompiler) ;
      if (select_omnibus_5F_syntax_18 (inCompiler) == 2) {
      }else{
        repeatFlag_3 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("declaration-control-register.galgas", 131)) ;
    switch (select_omnibus_5F_syntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 135)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        switch (select_omnibus_5F_syntax_21 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 139)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 142)) ;
          switch (select_omnibus_5F_syntax_22 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 146)) ;
            inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 147)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          break ;
        }
        if (select_omnibus_5F_syntax_20 (inCompiler) == 2) {
        }else{
          repeatFlag_4 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 155)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_17 (inCompiler) == 2) {
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 165)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_registerDeclaration_i16_ (GALGAS_ast & ioArgument_ioAST,
                                                                                 GALGAS_controlRegisterNameListAST & ioArgument_ioRegisterDeclarationList,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_lstring var_registerName_6871 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 173)) ;
  switch (select_omnibus_5F_syntax_23 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_attributeOffset_6919 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 175)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::notEqual, var_attributeOffset_6919.readProperty_string ().objectCompare (GALGAS_string ("offset"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("@offset")) ;
        inCompiler->emitSemanticError (var_attributeOffset_6919.readProperty_location (), GALGAS_string ("attribute should be @offset"), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 177)) ;
      }
    }
    GALGAS_expressionAST var_registerOffset_7116 ;
    nt_expression_ (ioArgument_ioAST, var_registerOffset_7116, inCompiler) ;
    GALGAS_bool var_isReadOnly_7147 ;
    switch (select_omnibus_5F_syntax_24 (inCompiler)) {
    case 1: {
      var_isReadOnly_7147 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      GALGAS_lstring var_attribute_7233 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 184)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (ComparisonKind::notEqual, var_attribute_7233.readProperty_string ().objectCompare (GALGAS_string ("ro"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <FixItDescription> fixItArray3 ;
          appendFixItActions (fixItArray3, kFixItReplace, GALGAS_string ("@ro")) ;
          inCompiler->emitSemanticError (var_attribute_7233.readProperty_location (), GALGAS_string ("attribute should be @ro"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 186)) ;
        }
      }
      var_isReadOnly_7147 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    ioArgument_ioRegisterDeclarationList.addAssign_operation (var_registerName_6871, GALGAS_controlRegisterKind::class_func_scalar (SOURCE_FILE ("declaration-control-register.galgas", 192)), var_isReadOnly_7147, var_registerOffset_7116, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 195))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 190)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 197)) ;
    GALGAS_expressionAST var_sizeExpression_7593 ;
    nt_expression_ (ioArgument_ioAST, var_sizeExpression_7593, inCompiler) ;
    GALGAS_location var_sizeExpressionLocation_7618 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 199)) ;
    GALGAS_lstring var_attributeOffset_7682 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 200)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (ComparisonKind::notEqual, var_attributeOffset_7682.readProperty_string ().objectCompare (GALGAS_string ("offset"))).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <FixItDescription> fixItArray5 ;
        appendFixItActions (fixItArray5, kFixItReplace, GALGAS_string ("@offset")) ;
        inCompiler->emitSemanticError (var_attributeOffset_7682.readProperty_location (), GALGAS_string ("attribute should be @offset"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 202)) ;
      }
    }
    GALGAS_expressionAST var_baseAddressExpression_7879 ;
    nt_expression_ (ioArgument_ioAST, var_baseAddressExpression_7879, inCompiler) ;
    GALGAS_location var_baseAddressExpressionLocation_7911 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 205)) ;
    GALGAS_lstring var_attributeInc_7982 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 206)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (ComparisonKind::notEqual, var_attributeInc_7982.readProperty_string ().objectCompare (GALGAS_string ("inc"))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <FixItDescription> fixItArray7 ;
        appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("@inc")) ;
        inCompiler->emitSemanticError (var_attributeInc_7982.readProperty_location (), GALGAS_string ("attribute should be @inc"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 208)) ;
      }
    }
    GALGAS_expressionAST var_arrayElementSizeExpression_8161 ;
    nt_expression_ (ioArgument_ioAST, var_arrayElementSizeExpression_8161, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 211)) ;
    GALGAS_bool var_isReadOnly_8214 ;
    switch (select_omnibus_5F_syntax_25 (inCompiler)) {
    case 1: {
      var_isReadOnly_8214 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      GALGAS_lstring var_attribute_8300 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 216)) ;
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (ComparisonKind::notEqual, var_attribute_8300.readProperty_string ().objectCompare (GALGAS_string ("ro"))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, kFixItReplace, GALGAS_string ("@ro")) ;
          inCompiler->emitSemanticError (var_attribute_8300.readProperty_location (), GALGAS_string ("attribute should be @ro"), fixItArray9  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 218)) ;
        }
      }
      var_isReadOnly_8214 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_arrayElementSizeExpressionLocation_8487 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 222)) ;
    ioArgument_ioRegisterDeclarationList.addAssign_operation (var_registerName_6871, GALGAS_controlRegisterKind::class_func_registerArray (var_sizeExpression_7593, var_sizeExpressionLocation_7618, var_arrayElementSizeExpression_8161, var_arrayElementSizeExpressionLocation_8487  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 225)), var_isReadOnly_8214, var_baseAddressExpression_7879, var_baseAddressExpressionLocation_7911  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 223)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_registerDeclaration_i16_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 173)) ;
  switch (select_omnibus_5F_syntax_23 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 175)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_omnibus_5F_syntax_24 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 184)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 197)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 200)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 206)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 211)) ;
    switch (select_omnibus_5F_syntax_25 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 216)) ;
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

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_registerDeclaration_i16_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 173)) ;
  switch (select_omnibus_5F_syntax_23 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 175)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_omnibus_5F_syntax_24 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 184)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 197)) ;
    nt_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 200)) ;
    nt_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 206)) ;
    nt_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 211)) ;
    switch (select_omnibus_5F_syntax_25 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 216)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i17_ (GALGAS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 242)) ;
  GALGAS_lstring var_attribute_9317 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 243)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, var_attribute_9317.readProperty_string ().objectCompare (function_userAttributeForRegister (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 244)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_attribute_9317.readProperty_location (), GALGAS_string ("this attribute should be @").add_operation (function_userAttributeForRegister (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 245)), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 245)) ;
    }
  }
  GALGAS_lstring var_registerGroupName_9500 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 247)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 248)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GALGAS_lstring var_registerName_9561 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 250)) ;
    GALGAS_lstring var_key_9584 = GALGAS_lstring::init_21__21_ (GALGAS_string ("#").add_operation (var_registerGroupName_9500.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 251)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 251)).add_operation (var_registerName_9561.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 251)), var_registerName_9561.readProperty_location (), inCompiler COMMA_HERE) ;
    {
    ioArgument_ioAST.mProperty_mControlRegisterUserAccesMapAST.setter_insertKey (var_key_9584, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 252)) ;
    }
    if (select_omnibus_5F_syntax_26 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 254)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 256)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i17_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 242)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 243)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 247)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 248)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 250)) ;
    if (select_omnibus_5F_syntax_26 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 254)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 256)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i17_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 242)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 243)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 247)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 248)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 250)) ;
    if (select_omnibus_5F_syntax_26 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 254)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 256)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i18_ (GALGAS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 27)) ;
  GALGAS_lstringlist temp_0 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 28)) ;
  GALGAS_lstringlist var_attributeList_1492 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_27 (inCompiler) == 2) {
      GALGAS_lstring var_attribute_1557 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 31)) ;
      var_attributeList_1492.addAssign_operation (var_attribute_1557  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 32)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GALGAS_lstring var_constantName_1631 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 34)) ;
  GALGAS_lstring var_typeName_1661 ;
  switch (select_omnibus_5F_syntax_28 (inCompiler)) {
  case 1: {
    var_typeName_1661 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-constant.galgas", 37)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1661, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 41)) ;
  GALGAS_expressionAST var_expression_1821 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1821, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_globalConstantDeclarationAST::init_21__21__21__21_ (var_constantName_1631, var_attributeList_1492, var_typeName_1661, var_expression_1821, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 43)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i18_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_27 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 31)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 34)) ;
  switch (select_omnibus_5F_syntax_28 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 41)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i18_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_27 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 31)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 34)) ;
  switch (select_omnibus_5F_syntax_28 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 41)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i19_ (GALGAS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 20)) ;
  GALGAS_lstring var_syncInstanceName_1148 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 21)) ;
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
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 28)) ;
  GALGAS_expressionAST var_expression_1351 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1351, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_syncToolInstanceDeclarationAST::init_21__21__21_ (var_syncTypeName_1182, var_syncInstanceName_1148, var_expression_1351, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 30)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i19_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 20)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 21)) ;
  switch (select_omnibus_5F_syntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 28)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i19_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 20)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 21)) ;
  switch (select_omnibus_5F_syntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 28)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i20_ (GALGAS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 64)) ;
  GALGAS_lstring var_driverName_2732 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 65)) ;
  GALGAS_lstringlist temp_0 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 66)) ;
  GALGAS_lstringlist var_driverDependenceList_2764 = temp_0 ;
  switch (select_omnibus_5F_syntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 69)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_dependenceName_2858 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 71)) ;
      var_driverDependenceList_2764.addAssign_operation (var_dependenceName_2858  COMMA_SOURCE_FILE ("declaration-driver.galgas", 72)) ;
      if (select_omnibus_5F_syntax_31 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 74)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 77)) ;
  GALGAS_structurePropertyListAST temp_2 = GALGAS_structurePropertyListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 78)) ;
  GALGAS_structurePropertyListAST var_propertyListAST_3012 = temp_2 ;
  GALGAS_bool var_bootHandled_3042 = GALGAS_bool (false) ;
  GALGAS_location var_bootLocation_3070 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 80)) ;
  GALGAS_instructionListAST temp_3 = GALGAS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 81)) ;
  GALGAS_instructionListAST var_bootInstructionList_3128 = temp_3 ;
  GALGAS_location var_bootEndLocation_3162 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 82)) ;
  GALGAS_bool var_startupHandled_3203 = GALGAS_bool (false) ;
  GALGAS_location var_startupLocation_3234 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 84)) ;
  GALGAS_instructionListAST temp_4 = GALGAS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 85)) ;
  GALGAS_instructionListAST var_startupInstructionList_3295 = temp_4 ;
  GALGAS_location var_startupEndLocation_3332 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 86)) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_omnibus_5F_syntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-driver.galgas", 89)) ;
      var_bootLocation_3070 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 90)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 91)) ;
      nt_instructionList_ (ioArgument_ioAST, var_bootInstructionList_3128, inCompiler) ;
      var_bootEndLocation_3162 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 93)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 94)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_bootHandled_3042.boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_bootLocation_3070, GALGAS_string ("a driver supports at most one boot routine"), fixItArray7  COMMA_SOURCE_FILE ("declaration-driver.galgas", 96)) ;
        }
      }
      var_bootHandled_3042 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-driver.galgas", 100)) ;
      var_startupLocation_3234 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 101)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 102)) ;
      nt_instructionList_ (ioArgument_ioAST, var_startupInstructionList_3295, inCompiler) ;
      var_startupEndLocation_3332 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 104)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 105)) ;
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = var_startupHandled_3203.boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_startupLocation_3234, GALGAS_string ("a driver supports at most one startup routine"), fixItArray9  COMMA_SOURCE_FILE ("declaration-driver.galgas", 107)) ;
        }
      }
      var_startupHandled_3203 = GALGAS_bool (true) ;
    } break ;
    case 4: {
      nt_isr_5F_in_5F_driver_ (ioArgument_ioAST, var_driverName_2732, inCompiler) ;
    } break ;
    case 5: {
      nt_struct_5F_property_5F_declaration_ (ioArgument_ioAST, GALGAS_propertyVisibility::class_func_isPrivate (SOURCE_FILE ("declaration-driver.galgas", 113)), var_propertyListAST_3012, inCompiler) ;
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
      repeatFlag_5 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 124)) ;
  ioArgument_ioAST.mProperty_mDriverDeclarationListAST.addAssign_operation (GALGAS_driverDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (var_driverName_2732, var_driverDependenceList_2764, var_propertyListAST_3012, var_bootLocation_3070, var_bootInstructionList_3128, var_bootEndLocation_3162, var_startupLocation_3234, var_startupInstructionList_3295, var_startupEndLocation_3332, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 126)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i20_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 65)) ;
  switch (select_omnibus_5F_syntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 69)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 71)) ;
      if (select_omnibus_5F_syntax_31 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 74)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 77)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-driver.galgas", 89)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 91)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 94)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-driver.galgas", 100)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 102)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 105)) ;
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
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 124)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i20_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 65)) ;
  switch (select_omnibus_5F_syntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 69)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 71)) ;
      if (select_omnibus_5F_syntax_31 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 74)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 77)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-driver.galgas", 89)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 91)) ;
      nt_instructionList_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 94)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-driver.galgas", 100)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 102)) ;
      nt_instructionList_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 105)) ;
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
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 124)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i21_ (GALGAS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 142)) ;
  GALGAS_lstring var_driverName_5089 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 143)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 144)) ;
  GALGAS_driverInstanciationArgumentListAST temp_0 = GALGAS_driverInstanciationArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 145)) ;
  GALGAS_driverInstanciationArgumentListAST var_driverInstanciationArgumentList_5152 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_33 (inCompiler) == 2) {
      GALGAS_lstring var_selector_5235 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 148)) ;
      GALGAS_expressionAST var_expression_5276 ;
      nt_expression_ (ioArgument_ioAST, var_expression_5276, inCompiler) ;
      var_driverInstanciationArgumentList_5152.addAssign_operation (var_selector_5235, var_expression_5276  COMMA_SOURCE_FILE ("declaration-driver.galgas", 150)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 152)) ;
  ioArgument_ioAST.mProperty_mRequiredDriverListAST.addAssign_operation (var_driverName_5089, var_driverInstanciationArgumentList_5152  COMMA_SOURCE_FILE ("declaration-driver.galgas", 153)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i21_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 142)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 143)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_33 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 148)) ;
      nt_expression_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 152)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i21_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 142)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 143)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_33 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 148)) ;
      nt_expression_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 152)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i22_ (GALGAS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas", 62)) ;
  GALGAS_lstring var_staticListName_2833 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 63)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 64)) ;
  GALGAS_staticListPropertyListAST temp_0 = GALGAS_staticListPropertyListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 65)) ;
  GALGAS_staticListPropertyListAST var_propertyList_2891 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_staticArrayProperty_ (ioArgument_ioAST, var_propertyList_2891, inCompiler) ;
    if (select_omnibus_5F_syntax_34 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 70)) ;
  GALGAS_staticListValueListAST temp_2 = GALGAS_staticListValueListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 71)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_staticListAST::init_21__21__21_ (var_staticListName_2833, var_propertyList_2891, temp_2, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 71)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i22_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas", 62)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 63)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_staticArrayProperty_parse (inCompiler) ;
    if (select_omnibus_5F_syntax_34 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 70)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i22_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas", 62)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 63)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_staticArrayProperty_indexing (inCompiler) ;
    if (select_omnibus_5F_syntax_34 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 70)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_staticArrayProperty_i23_ (GALGAS_ast & ioArgument_ioAST,
                                                                                 GALGAS_staticListPropertyListAST & ioArgument_ioPropertyList,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-static-list.galgas", 77)) ;
  GALGAS_lstring var_propertyName_3335 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 78)) ;
  switch (select_omnibus_5F_syntax_35 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_typeName_3396 ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_3396, inCompiler) ;
    ioArgument_ioPropertyList.addAssign_operation (var_propertyName_3335, GALGAS_staticListPropertyTypeAST::class_func_valueType (var_typeName_3396  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 81))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 81)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas", 83)) ;
    GALGAS_mode var_mode_3509 ;
    nt_mode_ (var_mode_3509, inCompiler) ;
    GALGAS_lstringlist temp_0 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 85)) ;
    GALGAS_lstringlist var_attributeList_3537 = temp_0 ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_omnibus_5F_syntax_36 (inCompiler) == 2) {
        GALGAS_lstring var_attribute_3608 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-static-list.galgas", 88)) ;
        var_attributeList_3537.addAssign_operation (var_attribute_3608  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 89)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    GALGAS_routineFormalArgumentListAST var_formalArgs_3712 ;
    nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgs_3712, inCompiler) ;
    GALGAS_lstring var_returnType_3742 ;
    switch (select_omnibus_5F_syntax_37 (inCompiler)) {
    case 1: {
      var_returnType_3742 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 94)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 96)) ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_returnType_3742, inCompiler) ;
    } break ;
    default:
      break ;
    }
    ioArgument_ioPropertyList.addAssign_operation (var_propertyName_3335, GALGAS_staticListPropertyTypeAST::class_func_function (var_mode_3509, var_formalArgs_3712, var_returnType_3742  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 99))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 99)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_staticArrayProperty_i23_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-static-list.galgas", 77)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 78)) ;
  switch (select_omnibus_5F_syntax_35 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas", 83)) ;
    nt_mode_parse (inCompiler) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_omnibus_5F_syntax_36 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-static-list.galgas", 88)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
    switch (select_omnibus_5F_syntax_37 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 96)) ;
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

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_staticArrayProperty_i23_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-static-list.galgas", 77)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 78)) ;
  switch (select_omnibus_5F_syntax_35 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas", 83)) ;
    nt_mode_indexing (inCompiler) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_omnibus_5F_syntax_36 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-static-list.galgas", 88)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    nt_procedure_5F_formal_5F_arguments_indexing (inCompiler) ;
    switch (select_omnibus_5F_syntax_37 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 96)) ;
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

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i24_ (GALGAS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("declaration-static-list.galgas", 108)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas", 109)) ;
  GALGAS_lstring var_staticListName_4349 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 110)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 111)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_extendStaticListElementAST temp_1 = GALGAS_extendStaticListElementAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 113)) ;
    GALGAS_extendStaticListElementAST var_expressions_4421 = temp_1 ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      GALGAS_lstring var_selector_4478 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 115)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (ComparisonKind::notEqual, var_selector_4478.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_selector_4478.readProperty_location (), GALGAS_string ("selector should be empty"), fixItArray4  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 117)) ;
        }
      }
      nt_staticArray_5F_exp_ (ioArgument_ioAST, var_expressions_4421, inCompiler) ;
      if (select_omnibus_5F_syntax_39 (inCompiler) == 2) {
      }else{
        repeatFlag_2 = false ;
      }
    }
    GALGAS_staticListValueListAST temp_5 = GALGAS_staticListValueListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 122)) ;
    GALGAS_staticListValueListAST var_expressionList_4695 = temp_5 ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = ioArgument_ioAST.readProperty_mExtendStaticArrayDeclarationAST ().getter_hasKey (var_staticListName_4349.readProperty_string () COMMA_SOURCE_FILE ("declaration-static-list.galgas", 123)).boolEnum () ;
      if (kBoolTrue == test_6) {
        ioArgument_ioAST.readProperty_mExtendStaticArrayDeclarationAST ().method_searchKey (var_staticListName_4349.readProperty_string (), var_expressionList_4695, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 124)) ;
      }
    }
    var_expressionList_4695.addAssign_operation (var_expressions_4421, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 126))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 126)) ;
    ioArgument_ioAST.mProperty_mExtendStaticArrayDeclarationAST.addAssign_operation (var_staticListName_4349.readProperty_string (), var_expressionList_4695, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 127)) ;
    if (select_omnibus_5F_syntax_38 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 129)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 131)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i24_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("declaration-static-list.galgas", 108)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas", 109)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 110)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 111)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 115)) ;
      nt_staticArray_5F_exp_parse (inCompiler) ;
      if (select_omnibus_5F_syntax_39 (inCompiler) == 2) {
      }else{
        repeatFlag_1 = false ;
      }
    }
    if (select_omnibus_5F_syntax_38 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 129)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 131)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i24_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("declaration-static-list.galgas", 108)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas", 109)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 110)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 111)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 115)) ;
      nt_staticArray_5F_exp_indexing (inCompiler) ;
      if (select_omnibus_5F_syntax_39 (inCompiler) == 2) {
      }else{
        repeatFlag_1 = false ;
      }
    }
    if (select_omnibus_5F_syntax_38 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 129)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 131)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_staticArray_5F_exp_i25_ (GALGAS_ast & ioArgument_ioAST,
                                                                                GALGAS_extendStaticListElementAST & ioArgument_ioExpressions,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_40 (inCompiler)) {
  case 1: {
    GALGAS_expressionAST var_exp_5309 ;
    nt_expression_ (ioArgument_ioAST, var_exp_5309, inCompiler) ;
    ioArgument_ioExpressions.addAssign_operation (GALGAS_extendStaticListExpressionAST::class_func_expression (var_exp_5309  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 139)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 139))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 139)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas", 141)) ;
    GALGAS_lstring var_functionName_5411 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 142)) ;
    GALGAS_routineFormalArgumentListAST var_formalArgs_5472 ;
    nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgs_5472, inCompiler) ;
    ioArgument_ioExpressions.addAssign_operation (GALGAS_extendStaticListExpressionAST::class_func_function (var_functionName_5411, var_formalArgs_5472  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 145)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 146))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 144)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_staticArray_5F_exp_i25_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_40 (inCompiler)) {
  case 1: {
    nt_expression_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas", 141)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 142)) ;
    nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_staticArray_5F_exp_i25_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_40 (inCompiler)) {
  case 1: {
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas", 141)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 142)) ;
    nt_procedure_5F_formal_5F_arguments_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i26_ (GALGAS_ast & /* ioArgument_ioAST */,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_option COMMA_SOURCE_FILE ("declaration-option.galgas", 10)) ;
  GALGAS_lstring var_constantName_598 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-option.galgas", 11)) ;
  GALGAS_stringlist temp_0 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-option.galgas", 12)) ;
  GALGAS_stringlist var_suggestionList_631 = temp_0 ;
  GALGAS_bool var_found_660 = GALGAS_bool (false) ;
  cEnumerator__32_stringlist enumerator_690 (GALGAS_application::class_func_boolOptionNameList (SOURCE_FILE ("declaration-option.galgas", 14)), EnumerationOrder::up) ;
  bool bool_1 = var_found_660.operator_not (SOURCE_FILE ("declaration-option.galgas", 14)).isValidAndTrue () ;
  if (enumerator_690.hasCurrentObject () && bool_1) {
    while (enumerator_690.hasCurrentObject () && bool_1) {
      GALGAS_string var_invocationString_766 = GALGAS_application::class_func_boolOptionInvocationString (enumerator_690.current_mValue_30_ (HERE), enumerator_690.current_mValue_31_ (HERE)  COMMA_SOURCE_FILE ("declaration-option.galgas", 15)) ;
      var_suggestionList_631.addAssign_operation (GALGAS_string ("\"").add_operation (var_invocationString_766, inCompiler COMMA_SOURCE_FILE ("declaration-option.galgas", 16)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("declaration-option.galgas", 16))  COMMA_SOURCE_FILE ("declaration-option.galgas", 16)) ;
      var_found_660 = GALGAS_bool (ComparisonKind::equal, var_invocationString_766.objectCompare (var_constantName_598.readProperty_string ())) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_found_660.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          GALGAS_application::class_method_setBoolOptionValue (enumerator_690.current_mValue_30_ (HERE), enumerator_690.current_mValue_31_ (HERE), GALGAS_bool (true) COMMA_SOURCE_FILE ("declaration-option.galgas", 19)) ;
          }
        }
      }
      enumerator_690.gotoNextObject () ;
      if (enumerator_690.hasCurrentObject ()) {
        bool_1 = var_found_660.operator_not (SOURCE_FILE ("declaration-option.galgas", 14)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_found_660.operator_not (SOURCE_FILE ("declaration-option.galgas", 22)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <FixItDescription> fixItArray4 ;
      appendFixItActions (fixItArray4, kFixItReplace, var_suggestionList_631) ;
      inCompiler->emitSemanticError (var_constantName_598.readProperty_location (), GALGAS_string ("unknown command line option"), fixItArray4  COMMA_SOURCE_FILE ("declaration-option.galgas", 23)) ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i26_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_option COMMA_SOURCE_FILE ("declaration-option.galgas", 10)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-option.galgas", 11)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i26_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_option COMMA_SOURCE_FILE ("declaration-option.galgas", 10)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-option.galgas", 11)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i27_ (GALGAS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_task COMMA_SOURCE_FILE ("task-declaration.galgas", 33)) ;
  GALGAS_lstring var_taskName_1606 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 34)) ;
  GALGAS_lstringlist temp_0 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 35)) ;
  GALGAS_lstringlist var_higherPriorityTaskList_1636 = temp_0 ;
  switch (select_omnibus_5F_syntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 38)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_aTaskName_1732 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 40)) ;
      var_higherPriorityTaskList_1636.addAssign_operation (var_aTaskName_1732  COMMA_SOURCE_FILE ("task-declaration.galgas", 41)) ;
      if (select_omnibus_5F_syntax_42 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-declaration.galgas", 43)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_stackSizeAttribute_1851 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 46)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::notEqual, var_stackSizeAttribute_1851.readProperty_string ().objectCompare (GALGAS_string ("stacksize"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_stackSizeAttribute_1851.readProperty_location (), GALGAS_string ("this attribute should be @stacksize"), fixItArray3  COMMA_SOURCE_FILE ("task-declaration.galgas", 48)) ;
    }
  }
  GALGAS_lbigint var_stackSize_2030 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("task-declaration.galgas", 50)) ;
  GALGAS_bool var_autoStart_2076 = GALGAS_bool (false) ;
  switch (select_omnibus_5F_syntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_activateAttribute_2136 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 55)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (ComparisonKind::notEqual, var_activateAttribute_2136.readProperty_string ().objectCompare (GALGAS_string ("autostart"))).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (var_activateAttribute_2136.readProperty_location (), GALGAS_string ("this attribute should be @autostart"), fixItArray5  COMMA_SOURCE_FILE ("task-declaration.galgas", 57)) ;
      }
    }
    var_autoStart_2076 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 61)) ;
  GALGAS_structurePropertyListAST temp_6 = GALGAS_structurePropertyListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 62)) ;
  GALGAS_structurePropertyListAST var_taskVarList_2363 = temp_6 ;
  GALGAS_taskSetupListAST temp_7 = GALGAS_taskSetupListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 63)) ;
  GALGAS_taskSetupListAST var_taskSetupList_2407 = temp_7 ;
  GALGAS_taskSetupListAST temp_8 = GALGAS_taskSetupListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 64)) ;
  GALGAS_taskSetupListAST var_taskActivateList_2453 = temp_8 ;
  GALGAS_taskSetupListAST temp_9 = GALGAS_taskSetupListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 65)) ;
  GALGAS_taskSetupListAST var_taskDeactivateList_2502 = temp_9 ;
  GALGAS_syncInstructionBranchListAST temp_10 = GALGAS_syncInstructionBranchListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 66)) ;
  GALGAS_syncInstructionBranchListAST var_branchList_2565 = temp_10 ;
  bool repeatFlag_11 = true ;
  while (repeatFlag_11) {
    switch (select_omnibus_5F_syntax_44 (inCompiler)) {
    case 2: {
      nt_private_5F_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_taskVarList_2363, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("task-declaration.galgas", 71)) ;
      GALGAS_lstring var_procName_2716 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 72)) ;
      GALGAS_routineFormalArgumentListAST var_formalArgumentList_2803 ;
      nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_2803, inCompiler) ;
      GALGAS_lstring var_returnTypeName_2841 ;
      switch (select_omnibus_5F_syntax_45 (inCompiler)) {
      case 1: {
        var_returnTypeName_2841 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 76)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 78)) ;
        nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_2841, inCompiler) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 81)) ;
      GALGAS_instructionListAST var_instructionList_3033 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_3033, inCompiler) ;
      GALGAS_lstringlist temp_12 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 88)) ;
      ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_functionDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (GALGAS_mode::class_func_userMode (SOURCE_FILE ("task-declaration.galgas", 84)), GALGAS_bool (false), var_taskName_1606, var_procName_2716, temp_12, var_formalArgumentList_2803, var_returnTypeName_2841, var_instructionList_3033, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 92)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 83)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 94)) ;
    } break ;
    case 4: {
      nt_task_5F_event_ (ioArgument_ioAST, var_taskName_1606, var_taskSetupList_2407, var_taskActivateList_2453, var_taskDeactivateList_2502, inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("task-declaration.galgas", 98)) ;
      GALGAS_guardedCommandAST var_guardedCommand_3538 ;
      nt_guarded_5F_command_ (ioArgument_ioAST, GALGAS_bool (false), var_guardedCommand_3538, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 100)) ;
      GALGAS_instructionListAST var_instructionList_3600 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_3600, inCompiler) ;
      GALGAS_location var_endOfInstructions_3626 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 102)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 103)) ;
      var_branchList_2565.addAssign_operation (var_guardedCommand_3538, var_instructionList_3600, var_endOfInstructions_3626  COMMA_SOURCE_FILE ("task-declaration.galgas", 104)) ;
    } break ;
    default:
      repeatFlag_11 = false ;
      break ;
    }
  }
  GALGAS_location var_endOfTask_4058 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 114)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 115)) ;
  ioArgument_ioAST.mProperty_mTaskListAST.addAssign_operation (var_taskName_1606, var_higherPriorityTaskList_1636, var_stackSize_2030, var_taskSetupList_2407, var_taskActivateList_2453, var_taskDeactivateList_2502, var_branchList_2565, var_endOfTask_4058, var_autoStart_2076  COMMA_SOURCE_FILE ("task-declaration.galgas", 116)) ;
  GALGAS_lstringlist temp_13 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 130)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_structureDeclarationAST::init_21__21__21__21__21__21__21_ (var_taskName_1606, var_taskName_1606, var_taskName_1606, temp_13, GALGAS_bool (false), var_taskVarList_2363, GALGAS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 126)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i27_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_task COMMA_SOURCE_FILE ("task-declaration.galgas", 33)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 34)) ;
  switch (select_omnibus_5F_syntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 38)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 40)) ;
      if (select_omnibus_5F_syntax_42 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-declaration.galgas", 43)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("task-declaration.galgas", 50)) ;
  switch (select_omnibus_5F_syntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 55)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 61)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_44 (inCompiler)) {
    case 2: {
      nt_private_5F_struct_5F_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("task-declaration.galgas", 71)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 72)) ;
      nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
      switch (select_omnibus_5F_syntax_45 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 78)) ;
        nt_type_5F_definition_parse (inCompiler) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 81)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 94)) ;
    } break ;
    case 4: {
      nt_task_5F_event_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("task-declaration.galgas", 98)) ;
      nt_guarded_5F_command_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 100)) ;
      nt_instructionList_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 103)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 115)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i27_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_task COMMA_SOURCE_FILE ("task-declaration.galgas", 33)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 34)) ;
  switch (select_omnibus_5F_syntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 38)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 40)) ;
      if (select_omnibus_5F_syntax_42 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-declaration.galgas", 43)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("task-declaration.galgas", 50)) ;
  switch (select_omnibus_5F_syntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 55)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 61)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_44 (inCompiler)) {
    case 2: {
      nt_private_5F_struct_5F_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("task-declaration.galgas", 71)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 72)) ;
      nt_procedure_5F_formal_5F_arguments_indexing (inCompiler) ;
      switch (select_omnibus_5F_syntax_45 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 78)) ;
        nt_type_5F_definition_indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 81)) ;
      nt_instructionList_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 94)) ;
    } break ;
    case 4: {
      nt_task_5F_event_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("task-declaration.galgas", 98)) ;
      nt_guarded_5F_command_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 100)) ;
      nt_instructionList_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 103)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_task_5F_event_i28_ (GALGAS_ast & ioArgument_ioAST,
                                                                           const GALGAS_lstring constinArgument_inTaskName,
                                                                           GALGAS_taskSetupListAST & ioArgument_ioTaskSetupListAST,
                                                                           GALGAS_taskSetupListAST & ioArgument_ioTaskActivateListAST,
                                                                           GALGAS_taskSetupListAST & ioArgument_ioTaskDeactivateListAST,
                                                                           Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 28)) ;
  GALGAS_lstring var_attribute_1540 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 29)) ;
  GALGAS_lstring var_name_1572 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 30)) ;
  GALGAS_lstringlist temp_0 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 31)) ;
  GALGAS_lstringlist var_dependenceList_1598 = temp_0 ;
  switch (select_omnibus_5F_syntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 34)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_dependenceName_1686 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 36)) ;
      var_dependenceList_1598.addAssign_operation (var_dependenceName_1686  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 37)) ;
      if (select_omnibus_5F_syntax_47 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 39)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 42)) ;
  GALGAS_instructionListAST var_instructionList_1828 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1828, inCompiler) ;
  GALGAS_location var_endOfInit_1852 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 44)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 45)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::equal, var_attribute_1540.readProperty_string ().objectCompare (GALGAS_string ("onSetup"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioTaskSetupListAST.addAssign_operation (var_name_1572, var_dependenceList_1598  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 47)) ;
      ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_taskSetupDeclarationAST::init_21__21__21__21__21__21_ (constinArgument_inTaskName, GALGAS_string ("task.setup."), var_name_1572, var_dependenceList_1598, var_instructionList_1828, var_endOfInit_1852, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 48)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (ComparisonKind::equal, var_attribute_1540.readProperty_string ().objectCompare (GALGAS_string ("onStart"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioTaskActivateListAST.addAssign_operation (var_name_1572, var_dependenceList_1598  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 57)) ;
        ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_taskSetupDeclarationAST::init_21__21__21__21__21__21_ (constinArgument_inTaskName, GALGAS_string ("task.activate."), var_name_1572, var_dependenceList_1598, var_instructionList_1828, var_endOfInit_1852, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 58)) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (ComparisonKind::equal, var_attribute_1540.readProperty_string ().objectCompare (GALGAS_string ("onTermination"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          ioArgument_ioTaskDeactivateListAST.addAssign_operation (var_name_1572, var_dependenceList_1598  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 67)) ;
          ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_taskSetupDeclarationAST::init_21__21__21__21__21__21_ (constinArgument_inTaskName, GALGAS_string ("task.deactivate."), var_name_1572, var_dependenceList_1598, var_instructionList_1828, var_endOfInit_1852, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 68)) ;
        }
      }
      if (kBoolFalse == test_4) {
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (var_attribute_1540.readProperty_location (), GALGAS_string ("attribute should be @onSetup, @onStart or @onTermination"), fixItArray5  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 77)) ;
      }
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_task_5F_event_i28_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 30)) ;
  switch (select_omnibus_5F_syntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 34)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 36)) ;
      if (select_omnibus_5F_syntax_47 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 39)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 42)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 45)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_task_5F_event_i28_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 30)) ;
  switch (select_omnibus_5F_syntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 34)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 36)) ;
      if (select_omnibus_5F_syntax_47 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 39)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 42)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 45)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i29_ (GALGAS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  nt_function_5F_declaration_ (ioArgument_ioAST, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-function.galgas", 26)), inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i29_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_function_5F_declaration_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i29_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_function_5F_declaration_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_function_5F_declaration_i30_ (GALGAS_ast & ioArgument_ioAST,
                                                                                     const GALGAS_lstring constinArgument_inReceiverTypeName,
                                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_bool var_publicAccess_1777 ;
  switch (select_omnibus_5F_syntax_48 (inCompiler)) {
  case 1: {
    var_publicAccess_1777 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-function.galgas", 37)) ;
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
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-function.galgas", 50)) ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_2075, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-function.galgas", 53)) ;
  GALGAS_instructionListAST var_instructionList_2251 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_2251, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-function.galgas", 55)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_functionDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (var_mode_1942, var_publicAccess_1777, constinArgument_inReceiverTypeName, var_procName_1963, var_attributeList_1994, var_procFormalArgumentList_2035, var_returnTypeName_2075, var_instructionList_2251, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 65)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-function.galgas", 56)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_function_5F_declaration_i30_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_48 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-function.galgas", 37)) ;
  } break ;
  default:
    break ;
  }
  nt_function_5F_header_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_49 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-function.galgas", 50)) ;
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-function.galgas", 53)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-function.galgas", 55)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_function_5F_declaration_i30_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_48 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-function.galgas", 37)) ;
  } break ;
  default:
    break ;
  }
  nt_function_5F_header_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_49 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-function.galgas", 50)) ;
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-function.galgas", 53)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-function.galgas", 55)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_mode_i31_ (GALGAS_mode & outArgument_outMode,
                                                                  Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outMode.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_50 (inCompiler)) {
  case 1: {
    outArgument_outMode = GALGAS_mode::class_func_anyMode (SOURCE_FILE ("declaration-function.galgas", 73)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-function.galgas", 75)) ;
    outArgument_outMode = GALGAS_mode::class_func_userMode (SOURCE_FILE ("declaration-function.galgas", 76)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("declaration-function.galgas", 78)) ;
    outArgument_outMode = GALGAS_mode::class_func_panicMode (SOURCE_FILE ("declaration-function.galgas", 79)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-function.galgas", 81)) ;
    outArgument_outMode = GALGAS_mode::class_func_bootMode (SOURCE_FILE ("declaration-function.galgas", 82)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-function.galgas", 84)) ;
    outArgument_outMode = GALGAS_mode::class_func_startupMode (SOURCE_FILE ("declaration-function.galgas", 85)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-function.galgas", 87)) ;
    outArgument_outMode = GALGAS_mode::class_func_sectionMode (SOURCE_FILE ("declaration-function.galgas", 88)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-function.galgas", 90)) ;
    outArgument_outMode = GALGAS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-function.galgas", 91)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-function.galgas", 93)) ;
    outArgument_outMode = GALGAS_mode::class_func_primitiveMode (SOURCE_FILE ("declaration-function.galgas", 94)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-function.galgas", 96)) ;
    outArgument_outMode = GALGAS_mode::class_func_guardMode (SOURCE_FILE ("declaration-function.galgas", 97)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-function.galgas", 99)) ;
    switch (select_omnibus_5F_syntax_51 (inCompiler)) {
    case 1: {
      outArgument_outMode = GALGAS_mode::class_func_anySafeMode (SOURCE_FILE ("declaration-function.galgas", 101)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-function.galgas", 103)) ;
      outArgument_outMode = GALGAS_mode::class_func_safeUserMode (SOURCE_FILE ("declaration-function.galgas", 104)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-function.galgas", 106)) ;
      outArgument_outMode = GALGAS_mode::class_func_safeSectionMode (SOURCE_FILE ("declaration-function.galgas", 107)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-function.galgas", 109)) ;
      outArgument_outMode = GALGAS_mode::class_func_safeServiceMode (SOURCE_FILE ("declaration-function.galgas", 110)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-function.galgas", 112)) ;
      outArgument_outMode = GALGAS_mode::class_func_safePrimitiveMode (SOURCE_FILE ("declaration-function.galgas", 113)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-function.galgas", 115)) ;
      outArgument_outMode = GALGAS_mode::class_func_safeGuardMode (SOURCE_FILE ("declaration-function.galgas", 116)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_mode_i31_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-function.galgas", 75)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("declaration-function.galgas", 78)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-function.galgas", 81)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-function.galgas", 84)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-function.galgas", 87)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-function.galgas", 90)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-function.galgas", 93)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-function.galgas", 96)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-function.galgas", 99)) ;
    switch (select_omnibus_5F_syntax_51 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-function.galgas", 103)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-function.galgas", 106)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-function.galgas", 109)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-function.galgas", 112)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-function.galgas", 115)) ;
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

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_mode_i31_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-function.galgas", 75)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("declaration-function.galgas", 78)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-function.galgas", 81)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-function.galgas", 84)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-function.galgas", 87)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-function.galgas", 90)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-function.galgas", 93)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-function.galgas", 96)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-function.galgas", 99)) ;
    switch (select_omnibus_5F_syntax_51 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-function.galgas", 103)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-function.galgas", 106)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-function.galgas", 109)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-function.galgas", 112)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-function.galgas", 115)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_function_5F_header_i32_ (GALGAS_ast & ioArgument_ioAST,
                                                                                GALGAS_mode & outArgument_outMode,
                                                                                GALGAS_lstring & outArgument_outProcName,
                                                                                GALGAS_lstringlist & outArgument_outAttributeList,
                                                                                GALGAS_routineFormalArgumentListAST & outArgument_outProcFormalArgumentList,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outMode.drop () ; // Release 'out' argument
  outArgument_outProcName.drop () ; // Release 'out' argument
  outArgument_outAttributeList.drop () ; // Release 'out' argument
  outArgument_outProcFormalArgumentList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-function.galgas", 130)) ;
  outArgument_outProcName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-function.galgas", 131)) ;
  nt_mode_ (outArgument_outMode, inCompiler) ;
  GALGAS_lstringlist temp_0 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 133)) ;
  outArgument_outAttributeList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_52 (inCompiler) == 2) {
      GALGAS_lstring var_attribute_3993 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-function.galgas", 136)) ;
      outArgument_outAttributeList.addAssign_operation (var_attribute_3993  COMMA_SOURCE_FILE ("declaration-function.galgas", 137)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, outArgument_outProcFormalArgumentList, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_function_5F_header_i32_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-function.galgas", 130)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-function.galgas", 131)) ;
  nt_mode_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_52 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-function.galgas", 136)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_function_5F_header_i32_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-function.galgas", 130)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-function.galgas", 131)) ;
  nt_mode_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_52 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-function.galgas", 136)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i33_ (GALGAS_ast & ioArgument_ioAST,
                                                                                              const GALGAS_lstring constinArgument_inReceiverTypeName,
                                                                                              Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_bool var_publicAccess_1449 ;
  switch (select_omnibus_5F_syntax_53 (inCompiler)) {
  case 1: {
    var_publicAccess_1449 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 30)) ;
    var_publicAccess_1449 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-svc.galgas", 33)) ;
  GALGAS_lstring var_name_1592 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 34)) ;
  GALGAS_mode var_mode_1611 ;
  switch (select_omnibus_5F_syntax_54 (inCompiler)) {
  case 1: {
    var_mode_1611 = GALGAS_mode::class_func_sectionMode (SOURCE_FILE ("declaration-svc.galgas", 37)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 39)) ;
    var_mode_1611 = GALGAS_mode::class_func_safeSectionMode (SOURCE_FILE ("declaration-svc.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstringlist temp_0 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 42)) ;
  GALGAS_lstringlist var_attributeList_1732 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_55 (inCompiler) == 2) {
      GALGAS_lstring var_attribute_1797 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 45)) ;
      var_attributeList_1732.addAssign_operation (var_attribute_1797  COMMA_SOURCE_FILE ("declaration-svc.galgas", 46)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GALGAS_routineFormalArgumentListAST var_formalArgumentList_1895 ;
  nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_1895, inCompiler) ;
  GALGAS_lstring var_returnTypeName_1931 ;
  switch (select_omnibus_5F_syntax_56 (inCompiler)) {
  case 1: {
    var_returnTypeName_1931 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 51)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 53)) ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_1931, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 56)) ;
  GALGAS_instructionListAST var_instructionList_2107 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_2107, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_systemRoutineDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (constinArgument_inReceiverTypeName, var_name_1592, var_mode_1611, var_publicAccess_1449, var_attributeList_1732, var_formalArgumentList_1895, var_returnTypeName_1931, var_instructionList_2107, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 67)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 58)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i33_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-svc.galgas", 33)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 34)) ;
  switch (select_omnibus_5F_syntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_55 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 45)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 53)) ;
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 56)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 69)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i33_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-svc.galgas", 33)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 34)) ;
  switch (select_omnibus_5F_syntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_55 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 45)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 53)) ;
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 56)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i34_ (GALGAS_ast & ioArgument_ioAST,
                                                                                              const GALGAS_lstring constinArgument_inReceiverTypeName,
                                                                                              Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_bool var_publicAccess_2715 ;
  switch (select_omnibus_5F_syntax_57 (inCompiler)) {
  case 1: {
    var_publicAccess_2715 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 81)) ;
    var_publicAccess_2715 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-svc.galgas", 84)) ;
  GALGAS_lstring var_name_2860 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 85)) ;
  GALGAS_mode var_mode_2879 ;
  switch (select_omnibus_5F_syntax_58 (inCompiler)) {
  case 1: {
    var_mode_2879 = GALGAS_mode::class_func_primitiveMode (SOURCE_FILE ("declaration-svc.galgas", 88)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 90)) ;
    var_mode_2879 = GALGAS_mode::class_func_safePrimitiveMode (SOURCE_FILE ("declaration-svc.galgas", 91)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstringlist temp_0 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 93)) ;
  GALGAS_lstringlist var_attributeList_3004 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_59 (inCompiler) == 2) {
      GALGAS_lstring var_attribute_3069 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 96)) ;
      var_attributeList_3004.addAssign_operation (var_attribute_3069  COMMA_SOURCE_FILE ("declaration-svc.galgas", 97)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GALGAS_routineFormalArgumentListAST var_formalArgumentList_3173 ;
  nt_procedure_5F_input_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_3173, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 100)) ;
  GALGAS_instructionListAST var_instructionList_3235 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_3235, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 102)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_systemRoutineDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (constinArgument_inReceiverTypeName, var_name_2860, var_mode_2879, var_publicAccess_2715, var_attributeList_3004, var_formalArgumentList_3173, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 110)), var_instructionList_3235, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 112)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 103)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i34_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_57 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 81)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-svc.galgas", 84)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 85)) ;
  switch (select_omnibus_5F_syntax_58 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 90)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_59 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 96)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_input_5F_formal_5F_arguments_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 100)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 102)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i34_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_57 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 81)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-svc.galgas", 84)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 85)) ;
  switch (select_omnibus_5F_syntax_58 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 90)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_59 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 96)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_input_5F_formal_5F_arguments_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 100)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 102)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i35_ (GALGAS_ast & ioArgument_ioAST,
                                                                                              const GALGAS_lstring constinArgument_inReceiverTypeName,
                                                                                              Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_bool var_publicAccess_3749 ;
  switch (select_omnibus_5F_syntax_60 (inCompiler)) {
  case 1: {
    var_publicAccess_3749 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 123)) ;
    var_publicAccess_3749 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-svc.galgas", 126)) ;
  GALGAS_lstring var_name_3892 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 127)) ;
  GALGAS_mode var_mode_3911 ;
  switch (select_omnibus_5F_syntax_61 (inCompiler)) {
  case 1: {
    var_mode_3911 = GALGAS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-svc.galgas", 130)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 132)) ;
    var_mode_3911 = GALGAS_mode::class_func_safeServiceMode (SOURCE_FILE ("declaration-svc.galgas", 133)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstringlist temp_0 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 135)) ;
  GALGAS_lstringlist var_attributeList_4032 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_62 (inCompiler) == 2) {
      GALGAS_lstring var_attribute_4097 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 138)) ;
      var_attributeList_4032.addAssign_operation (var_attribute_4097  COMMA_SOURCE_FILE ("declaration-svc.galgas", 139)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GALGAS_routineFormalArgumentListAST var_formalArgumentList_4201 ;
  nt_procedure_5F_input_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_4201, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 142)) ;
  GALGAS_instructionListAST var_instructionList_4263 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_4263, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 144)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_systemRoutineDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (constinArgument_inReceiverTypeName, var_name_3892, var_mode_3911, var_publicAccess_3749, var_attributeList_4032, var_formalArgumentList_4201, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 152)), var_instructionList_4263, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 154)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 145)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i35_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_60 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 123)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-svc.galgas", 126)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 127)) ;
  switch (select_omnibus_5F_syntax_61 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 132)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_62 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 138)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_input_5F_formal_5F_arguments_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 142)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 144)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i35_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_60 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 123)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-svc.galgas", 126)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 127)) ;
  switch (select_omnibus_5F_syntax_61 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 132)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_62 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 138)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_input_5F_formal_5F_arguments_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 142)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 144)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i36_ (GALGAS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_required COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 22)) ;
  GALGAS_mode var_mode_1238 ;
  GALGAS_lstring var_procName_1259 ;
  GALGAS_lstringlist var_attributeList_1290 ;
  GALGAS_routineFormalArgumentListAST var_procFormalArgumentList_1331 ;
  nt_function_5F_header_ (ioArgument_ioAST, var_mode_1238, var_procName_1259, var_attributeList_1290, var_procFormalArgumentList_1331, inCompiler) ;
  GALGAS_bool var_isGlobal_1362 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_1388 (var_attributeList_1290, EnumerationOrder::up) ;
  while (enumerator_1388.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_1388.current_mValue (HERE).readProperty_string ().objectCompare (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 31)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_isGlobal_1362.boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <FixItDescription> fixItArray2 ;
            fixItArray2.appendObject (FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (enumerator_1388.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 33)) ;
          }
        }
        if (kBoolFalse == test_1) {
          var_isGlobal_1362 = GALGAS_bool (true) ;
        }
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <FixItDescription> fixItArray3 ;
      fixItArray3.appendObject (FixItDescription (kFixItRemove, "")) ;
      appendFixItActions (fixItArray3, kFixItReplace, GALGAS_string ("@").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 38))) ;
      inCompiler->emitSemanticError (enumerator_1388.current_mValue (HERE).readProperty_location (), GALGAS_string ("invalid attribute"), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 38)) ;
    }
    enumerator_1388.gotoNextObject () ;
  }
  ioArgument_ioAST.mProperty_mRequiredFunctionListAST.addAssign_operation (var_procName_1259, var_mode_1238, var_isGlobal_1362, var_procFormalArgumentList_1331, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 46))  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 41)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i36_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_required COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 22)) ;
  nt_function_5F_header_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i36_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_required COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 22)) ;
  nt_function_5F_header_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i37_ (GALGAS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 24)) ;
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
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 35)) ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_1473, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 38)) ;
  GALGAS_lstring var_llvmName_1634 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 39)) ;
  ioArgument_ioAST.mProperty_mExternFunctionListAST.addAssign_operation (var_procName_1361, var_mode_1340, var_attributeList_1392, var_procFormalArgumentList_1433, var_returnTypeName_1473, var_llvmName_1634, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 47))  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 40)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i37_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 24)) ;
  nt_function_5F_header_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_63 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 35)) ;
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 39)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i37_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 24)) ;
  nt_function_5F_header_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_63 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 35)) ;
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_isr_5F_in_5F_driver_i38_ (GALGAS_ast & ioArgument_ioAST,
                                                                                 const GALGAS_lstring constinArgument_inDriverName,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("declaration-isr.galgas", 22)) ;
  GALGAS_mode var_mode_1226 ;
  switch (select_omnibus_5F_syntax_64 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-isr.galgas", 25)) ;
    var_mode_1226 = GALGAS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-isr.galgas", 26)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-isr.galgas", 28)) ;
    var_mode_1226 = GALGAS_mode::class_func_sectionMode (SOURCE_FILE ("declaration-isr.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_isrName_1364 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-isr.galgas", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 32)) ;
  GALGAS_instructionListAST var_instructionList_1415 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1415, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 34)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_isrDeclarationAST::init_21__21__21__21__21_ (var_isrName_1364, var_mode_1226, constinArgument_inDriverName, var_instructionList_1415, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 40)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-isr.galgas", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_isr_5F_in_5F_driver_i38_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("declaration-isr.galgas", 22)) ;
  switch (select_omnibus_5F_syntax_64 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-isr.galgas", 25)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-isr.galgas", 28)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-isr.galgas", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 32)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 34)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_isr_5F_in_5F_driver_i38_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("declaration-isr.galgas", 22)) ;
  switch (select_omnibus_5F_syntax_64 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-isr.galgas", 25)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-isr.galgas", 28)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-isr.galgas", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 32)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 34)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guard_i39_ (GALGAS_ast & ioArgument_ioAST,
                                                                   const GALGAS_lstring constinArgument_inReceiverTypeName,
                                                                   const GALGAS_string constinArgument_inReceiverLLVMBaseTypeName,
                                                                   Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_bool var_publicAccess_1778 ;
  switch (select_omnibus_5F_syntax_65 (inCompiler)) {
  case 1: {
    var_publicAccess_1778 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-guard.galgas", 39)) ;
    var_publicAccess_1778 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-guard.galgas", 42)) ;
  GALGAS_lstring var_guardName_1919 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-guard.galgas", 43)) ;
  GALGAS_lstringlist temp_0 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 44)) ;
  GALGAS_lstringlist var_attributeList_1950 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_66 (inCompiler) == 2) {
      GALGAS_lstring var_attribute_2015 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-guard.galgas", 47)) ;
      var_attributeList_1950.addAssign_operation (var_attribute_2015  COMMA_SOURCE_FILE ("declaration-guard.galgas", 48)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GALGAS_routineFormalArgumentListAST var_guardFormalArgumentList_2113 ;
  nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_guardFormalArgumentList_2113, inCompiler) ;
  GALGAS_guardKind var_guardKind_2156 ;
  switch (select_omnibus_5F_syntax_67 (inCompiler)) {
  case 1: {
    var_guardKind_2156 = GALGAS_guardKind::class_func_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 53)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 55)) ;
    GALGAS_callInstructionAST var_instruction_2259 ;
    nt_procedure_5F_call_ (ioArgument_ioAST, var_instruction_2259, inCompiler) ;
    var_guardKind_2156 = GALGAS_guardKind::class_func_convenienceGuard (var_instruction_2259  COMMA_SOURCE_FILE ("declaration-guard.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 59)) ;
  GALGAS_instructionListAST var_instructionList_2378 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_2378, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 61)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_guardDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (constinArgument_inReceiverTypeName, constinArgument_inReceiverLLVMBaseTypeName, var_guardName_1919, var_publicAccess_1778, var_attributeList_1950, var_guardFormalArgumentList_2113, var_guardKind_2156, var_instructionList_2378, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 72)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 63)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guard_i39_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_65 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-guard.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-guard.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-guard.galgas", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_66 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-guard.galgas", 47)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 55)) ;
    nt_procedure_5F_call_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 59)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 61)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guard_i39_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_65 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-guard.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-guard.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-guard.galgas", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_66 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-guard.galgas", 47)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 55)) ;
    nt_procedure_5F_call_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 59)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 61)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_formal_5F_arguments_i40_ (GALGAS_ast & ioArgument_ioAST,
                                                                                              GALGAS_routineFormalArgumentListAST & outArgument_outProcFormalArgumentList,
                                                                                              Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outProcFormalArgumentList.drop () ; // Release 'out' argument
  GALGAS_routineFormalArgumentListAST temp_0 = GALGAS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 52)) ;
  outArgument_outProcFormalArgumentList = temp_0 ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 53)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_68 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_2260 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 56)) ;
      GALGAS_lstring var_formalArgumentName_2293 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 57)) ;
      GALGAS_lstring var_formalArgumentTypeName_2350 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_2350, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssign_operation (GALGAS_procFormalArgumentPassingMode::class_func_output (SOURCE_FILE ("formal-arguments.galgas", 60)), var_selector_2260, var_formalArgumentTypeName_2350, var_formalArgumentName_2293  COMMA_SOURCE_FILE ("formal-arguments.galgas", 59)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_2568 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 65)) ;
      GALGAS_lstring var_formalArgumentName_2596 ;
      switch (select_omnibus_5F_syntax_69 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 68)) ;
        var_formalArgumentName_2596 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("formal-arguments.galgas", 69)) ;
      } break ;
      case 2: {
        var_formalArgumentName_2596 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 71)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_formalArgumentTypeName_2779 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_2779, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssign_operation (GALGAS_procFormalArgumentPassingMode::class_func_inputOutput (SOURCE_FILE ("formal-arguments.galgas", 75)), var_selector_2568, var_formalArgumentTypeName_2779, var_formalArgumentName_2596  COMMA_SOURCE_FILE ("formal-arguments.galgas", 74)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_3001 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 80)) ;
      GALGAS_lstring var_formalArgumentName_3029 ;
      switch (select_omnibus_5F_syntax_70 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 83)) ;
        var_formalArgumentName_3029 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("formal-arguments.galgas", 84)) ;
      } break ;
      case 2: {
        var_formalArgumentName_3029 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 86)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_formalArgumentTypeName_3213 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_3213, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssign_operation (GALGAS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("formal-arguments.galgas", 90)), var_selector_3001, var_formalArgumentTypeName_3213, var_formalArgumentName_3029  COMMA_SOURCE_FILE ("formal-arguments.galgas", 89)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 95)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_formal_5F_arguments_i40_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_68 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 56)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 57)) ;
      nt_type_5F_definition_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 65)) ;
      switch (select_omnibus_5F_syntax_69 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 68)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 71)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 80)) ;
      switch (select_omnibus_5F_syntax_70 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 83)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 86)) ;
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
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 95)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_formal_5F_arguments_i40_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_68 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 56)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 57)) ;
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 65)) ;
      switch (select_omnibus_5F_syntax_69 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 68)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 71)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 80)) ;
      switch (select_omnibus_5F_syntax_70 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 83)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 86)) ;
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
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 95)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_input_5F_formal_5F_arguments_i41_ (GALGAS_ast & ioArgument_ioAST,
                                                                                                       GALGAS_routineFormalArgumentListAST & outArgument_outProcFormalArgumentList,
                                                                                                       Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outProcFormalArgumentList.drop () ; // Release 'out' argument
  GALGAS_routineFormalArgumentListAST temp_0 = GALGAS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 101)) ;
  outArgument_outProcFormalArgumentList = temp_0 ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 102)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_71 (inCompiler) == 2) {
      GALGAS_lstring var_selector_3741 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 105)) ;
      GALGAS_lstring var_formalArgumentName_3774 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 106)) ;
      GALGAS_lstring var_formalArgumentTypeName_3831 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_3831, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssign_operation (GALGAS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("formal-arguments.galgas", 109)), var_selector_3741, var_formalArgumentTypeName_3831, var_formalArgumentName_3774  COMMA_SOURCE_FILE ("formal-arguments.galgas", 108)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 114)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_input_5F_formal_5F_arguments_i41_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 102)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_71 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 105)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 106)) ;
      nt_type_5F_definition_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 114)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_input_5F_formal_5F_arguments_i41_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 102)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_71 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 105)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 106)) ;
      nt_type_5F_definition_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 114)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i42_ (GALGAS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("panic.galgas", 21)) ;
  GALGAS_lstring var_attribute_1194 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("panic.galgas", 22)) ;
  GALGAS_bool var_isSetup_1218 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::equal, var_attribute_1194.readProperty_string ().objectCompare (GALGAS_string ("setup"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_isSetup_1218 = GALGAS_bool (true) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (ComparisonKind::equal, var_attribute_1194.readProperty_string ().objectCompare (GALGAS_string ("loop"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_isSetup_1218 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_attribute_1194.readProperty_location (), GALGAS_string ("attribute should be @setup or @loop"), fixItArray2  COMMA_SOURCE_FILE ("panic.galgas", 29)) ;
      var_isSetup_1218.drop () ; // Release error dropped variable
    }
  }
  GALGAS_lbigint var_priority_1459 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("panic.galgas", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("panic.galgas", 32)) ;
  GALGAS_instructionListAST var_instructionList_1511 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1511, inCompiler) ;
  GALGAS_location var_endOfInstructionList_1535 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 34)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("panic.galgas", 35)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_panicAST::init_21__21__21__21_ (var_isSetup_1218, var_instructionList_1511, var_endOfInstructionList_1535, var_priority_1459, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i42_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("panic.galgas", 21)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("panic.galgas", 22)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("panic.galgas", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("panic.galgas", 32)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("panic.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i42_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("panic.galgas", 21)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("panic.galgas", 22)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("panic.galgas", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("panic.galgas", 32)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("panic.galgas", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i43_ (GALGAS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 43)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 44)) ;
  GALGAS_lstring var_receiverName_2112 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 45)) ;
  GALGAS_lstring var_receiverTypeName_2143 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 47)) ;
  GALGAS_lstring var_converterName_2190 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 48)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 49)) ;
  GALGAS_ctExpressionAST var_expression_2264 ;
  nt_compile_5F_time_5F_expression_ (var_expression_2264, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 51)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_compileTimeConvertToBooleanAST::init_21__21__21__21_ (var_receiverName_2112, var_receiverTypeName_2143, var_converterName_2190, var_expression_2264, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i43_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 43)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 44)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 45)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 47)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 48)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 49)) ;
  nt_compile_5F_time_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 51)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i43_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 43)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 44)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 45)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 47)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 48)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 49)) ;
  nt_compile_5F_time_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i44_ (GALGAS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_lstring var_receiverName_2640 ;
  GALGAS_lstring var_receiverTypeName_2658 ;
  GALGAS_genericFormalParameterList var_receiverGenericFormalParameterList_2687 ;
  nt_llvm_5F_function_5F_header_ (var_receiverName_2640, var_receiverTypeName_2658, var_receiverGenericFormalParameterList_2687, inCompiler) ;
  GALGAS_lstring var_converterName_2744 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 65)) ;
  GALGAS_llvmGenerationInstructionList var_instructionList_2799 ;
  nt_llvm_5F_instruction_5F_list_ (var_instructionList_2799, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 67)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_llvmConvertToBooleanAST::init_21__21__21__21_ (var_receiverName_2640, var_receiverTypeName_2658, var_converterName_2744, var_instructionList_2799, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 68)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i44_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_llvm_5F_function_5F_header_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 65)) ;
  nt_llvm_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 67)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i44_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_llvm_5F_function_5F_header_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 65)) ;
  nt_llvm_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_i45_ (GALGAS_ast & ioArgument_ioAST,
                                                                        GALGAS_expressionAST & outArgument_outExpression,
                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_logical_5F_and_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_72 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 20)) ;
      GALGAS_location var_operatorLocation_1082 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 21)) ;
      GALGAS_expressionAST var_rightExpression_1160 ;
      nt_expression_5F_logical_5F_and_ (ioArgument_ioAST, var_rightExpression_1160, inCompiler) ;
      GALGAS_booleanShortCircuitAndOperatorExpressionAST var_andExpression_1238 = GALGAS_booleanShortCircuitAndOperatorExpressionAST::init_21__21__21_ (GALGAS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_1082, GALGAS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 25)), outArgument_outExpression, inCompiler COMMA_HERE), var_operatorLocation_1082, GALGAS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_1082, GALGAS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 27)), var_rightExpression_1160, inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
      outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_1082, GALGAS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 31)), var_andExpression_1238, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_i45_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_logical_5F_and_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_72 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 20)) ;
      nt_expression_5F_logical_5F_and_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_i45_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_logical_5F_and_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_72 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 20)) ;
      nt_expression_5F_logical_5F_and_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_logical_5F_and_i46_ (GALGAS_ast & ioArgument_ioAST,
                                                                                          GALGAS_expressionAST & outArgument_outExpression,
                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_bitwise_5F_or_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_73 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 61)) ;
      GALGAS_location var_operatorLocation_2537 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 62)) ;
      GALGAS_expressionAST var_rightExpression_2614 ;
      nt_expression_5F_bitwise_5F_or_ (ioArgument_ioAST, var_rightExpression_2614, inCompiler) ;
      outArgument_outExpression = GALGAS_booleanShortCircuitAndOperatorExpressionAST::init_21__21__21_ (outArgument_outExpression, var_operatorLocation_2537, var_rightExpression_2614, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_logical_5F_and_i46_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_or_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_73 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 61)) ;
      nt_expression_5F_bitwise_5F_or_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_logical_5F_and_i46_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_or_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_73 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 61)) ;
      nt_expression_5F_bitwise_5F_or_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_or_i47_ (GALGAS_ast & ioArgument_ioAST,
                                                                                         GALGAS_expressionAST & outArgument_outExpression,
                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_bitwise_5F_xor_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_74 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 78)) ;
      GALGAS_location var_operatorLocation_3090 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 79)) ;
      GALGAS_expressionAST var_rightExpression_3168 ;
      nt_expression_5F_bitwise_5F_xor_ (ioArgument_ioAST, var_rightExpression_3168, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_3090, GALGAS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("expression-operator-priority.galgas", 84)), var_rightExpression_3168, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_or_i47_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_xor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_74 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 78)) ;
      nt_expression_5F_bitwise_5F_xor_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_or_i47_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_xor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_74 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 78)) ;
      nt_expression_5F_bitwise_5F_xor_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_xor_i48_ (GALGAS_ast & ioArgument_ioAST,
                                                                                          GALGAS_expressionAST & outArgument_outExpression,
                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_bitwise_5F_and_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_75 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 96)) ;
      GALGAS_location var_operatorLocation_3657 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 97)) ;
      GALGAS_expressionAST var_rightExpression_3735 ;
      nt_expression_5F_bitwise_5F_and_ (ioArgument_ioAST, var_rightExpression_3735, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_3657, GALGAS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("expression-operator-priority.galgas", 102)), var_rightExpression_3735, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_xor_i48_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_and_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_75 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 96)) ;
      nt_expression_5F_bitwise_5F_and_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_xor_i48_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_and_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_75 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 96)) ;
      nt_expression_5F_bitwise_5F_and_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_and_i49_ (GALGAS_ast & ioArgument_ioAST,
                                                                                          GALGAS_expressionAST & outArgument_outExpression,
                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_equality_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_76 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 114)) ;
      GALGAS_location var_operatorLocation_4223 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 115)) ;
      GALGAS_expressionAST var_rightExpression_4298 ;
      nt_expression_5F_equality_ (ioArgument_ioAST, var_rightExpression_4298, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_4223, GALGAS_omnibusInfixOperator::class_func_bitWiseAndOp (SOURCE_FILE ("expression-operator-priority.galgas", 120)), var_rightExpression_4298, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_and_i49_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_equality_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_76 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 114)) ;
      nt_expression_5F_equality_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_and_i49_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_equality_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_76 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 114)) ;
      nt_expression_5F_equality_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_equality_i50_ (GALGAS_ast & ioArgument_ioAST,
                                                                                    GALGAS_expressionAST & outArgument_outExpression,
                                                                                    Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_comparison_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  switch (select_omnibus_5F_syntax_77 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 132)) ;
    GALGAS_location var_operatorLocation_4782 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 133)) ;
    GALGAS_expressionAST var_rightExpression_4859 ;
    nt_expression_5F_comparison_ (ioArgument_ioAST, var_rightExpression_4859, inCompiler) ;
    outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_4782, GALGAS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("expression-operator-priority.galgas", 138)), var_rightExpression_4859, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 142)) ;
    GALGAS_location var_operatorLocation_5064 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 143)) ;
    GALGAS_expressionAST var_rightExpression_5141 ;
    nt_expression_5F_comparison_ (ioArgument_ioAST, var_rightExpression_5141, inCompiler) ;
    GALGAS_omnibusInfixOperatorExpressionAST var_expression_5167 = GALGAS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_5064, GALGAS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("expression-operator-priority.galgas", 148)), var_rightExpression_5141, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_5064, GALGAS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 153)), var_expression_5167, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_equality_i50_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_comparison_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_77 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 132)) ;
    nt_expression_5F_comparison_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 142)) ;
    nt_expression_5F_comparison_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_equality_i50_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_comparison_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_77 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 132)) ;
    nt_expression_5F_comparison_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 142)) ;
    nt_expression_5F_comparison_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_comparison_i51_ (GALGAS_ast & ioArgument_ioAST,
                                                                                      GALGAS_expressionAST & outArgument_outExpression,
                                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_shift_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  switch (select_omnibus_5F_syntax_78 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 165)) ;
    GALGAS_location var_operatorLocation_5743 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 166)) ;
    GALGAS_expressionAST var_rightExpression_5815 ;
    nt_expression_5F_shift_ (ioArgument_ioAST, var_rightExpression_5815, inCompiler) ;
    outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_5743, GALGAS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("expression-operator-priority.galgas", 171)), var_rightExpression_5815, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 175)) ;
    GALGAS_location var_operatorLocation_6023 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 176)) ;
    GALGAS_expressionAST var_rightExpression_6095 ;
    nt_expression_5F_shift_ (ioArgument_ioAST, var_rightExpression_6095, inCompiler) ;
    GALGAS_omnibusInfixOperatorExpressionAST var_expression_6121 = GALGAS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_6023, GALGAS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("expression-operator-priority.galgas", 181)), var_rightExpression_6095, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_6023, GALGAS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 186)), var_expression_6121, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 190)) ;
    GALGAS_location var_operatorLocation_6432 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 191)) ;
    GALGAS_expressionAST var_rightExpression_6504 ;
    nt_expression_5F_shift_ (ioArgument_ioAST, var_rightExpression_6504, inCompiler) ;
    outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_6432, GALGAS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("expression-operator-priority.galgas", 196)), var_rightExpression_6504, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 200)) ;
    GALGAS_location var_operatorLocation_6712 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 201)) ;
    GALGAS_expressionAST var_rightExpression_6784 ;
    nt_expression_5F_shift_ (ioArgument_ioAST, var_rightExpression_6784, inCompiler) ;
    GALGAS_omnibusInfixOperatorExpressionAST var_expression_6810 = GALGAS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_6712, GALGAS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("expression-operator-priority.galgas", 206)), var_rightExpression_6784, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_6712, GALGAS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 211)), var_expression_6810, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_comparison_i51_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_shift_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_78 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 165)) ;
    nt_expression_5F_shift_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 175)) ;
    nt_expression_5F_shift_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 190)) ;
    nt_expression_5F_shift_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 200)) ;
    nt_expression_5F_shift_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_comparison_i51_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_shift_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_78 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 165)) ;
    nt_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 175)) ;
    nt_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 190)) ;
    nt_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 200)) ;
    nt_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_shift_i52_ (GALGAS_ast & ioArgument_ioAST,
                                                                                 GALGAS_expressionAST & outArgument_outExpression,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_addition_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_79 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 223)) ;
      GALGAS_location var_operatorLocation_7391 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 224)) ;
      GALGAS_expressionAST var_rightExpression_7466 ;
      nt_expression_5F_addition_ (ioArgument_ioAST, var_rightExpression_7466, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_7391, GALGAS_omnibusInfixOperator::class_func_leftShiftOp (SOURCE_FILE ("expression-operator-priority.galgas", 229)), var_rightExpression_7466, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 233)) ;
      GALGAS_location var_operatorLocation_7681 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 234)) ;
      GALGAS_expressionAST var_rightExpression_7756 ;
      nt_expression_5F_addition_ (ioArgument_ioAST, var_rightExpression_7756, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_7681, GALGAS_omnibusInfixOperator::class_func_rightShiftOp (SOURCE_FILE ("expression-operator-priority.galgas", 239)), var_rightExpression_7756, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_shift_i52_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_addition_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_79 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 223)) ;
      nt_expression_5F_addition_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 233)) ;
      nt_expression_5F_addition_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_shift_i52_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_addition_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_79 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 223)) ;
      nt_expression_5F_addition_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 233)) ;
      nt_expression_5F_addition_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_addition_i53_ (GALGAS_ast & ioArgument_ioAST,
                                                                                    GALGAS_expressionAST & outArgument_outExpression,
                                                                                    Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_product_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_80 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 251)) ;
      GALGAS_location var_operatorLocation_8239 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 252)) ;
      GALGAS_expressionAST var_rightExpression_8313 ;
      nt_expression_5F_product_ (ioArgument_ioAST, var_rightExpression_8313, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_8239, GALGAS_omnibusInfixOperator::class_func_addOp (SOURCE_FILE ("expression-operator-priority.galgas", 257)), var_rightExpression_8313, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 261)) ;
      GALGAS_location var_operatorLocation_8522 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 262)) ;
      GALGAS_expressionAST var_rightExpression_8596 ;
      nt_expression_5F_product_ (ioArgument_ioAST, var_rightExpression_8596, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_8522, GALGAS_omnibusInfixOperator::class_func_addOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 267)), var_rightExpression_8596, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 271)) ;
      GALGAS_location var_operatorLocation_8809 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 272)) ;
      GALGAS_expressionAST var_rightExpression_8883 ;
      nt_expression_5F_product_ (ioArgument_ioAST, var_rightExpression_8883, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_8809, GALGAS_omnibusInfixOperator::class_func_subOp (SOURCE_FILE ("expression-operator-priority.galgas", 277)), var_rightExpression_8883, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 281)) ;
      GALGAS_location var_operatorLocation_9092 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 282)) ;
      GALGAS_expressionAST var_rightExpression_9166 ;
      nt_expression_5F_product_ (ioArgument_ioAST, var_rightExpression_9166, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9092, GALGAS_omnibusInfixOperator::class_func_subOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 287)), var_rightExpression_9166, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_addition_i53_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_product_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_80 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 251)) ;
      nt_expression_5F_product_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 261)) ;
      nt_expression_5F_product_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 271)) ;
      nt_expression_5F_product_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 281)) ;
      nt_expression_5F_product_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_addition_i53_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_product_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_80 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 251)) ;
      nt_expression_5F_product_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 261)) ;
      nt_expression_5F_product_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 271)) ;
      nt_expression_5F_product_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 281)) ;
      nt_expression_5F_product_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_product_i54_ (GALGAS_ast & ioArgument_ioAST,
                                                                                   GALGAS_expressionAST & outArgument_outExpression,
                                                                                   Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_81 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 299)) ;
      GALGAS_location var_operatorLocation_9635 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 300)) ;
      GALGAS_expressionAST var_rightExpression_9698 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_9698, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9635, GALGAS_omnibusInfixOperator::class_func_mulOp (SOURCE_FILE ("expression-operator-priority.galgas", 305)), var_rightExpression_9698, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 309)) ;
      GALGAS_location var_operatorLocation_9907 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 310)) ;
      GALGAS_expressionAST var_rightExpression_9970 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_9970, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9907, GALGAS_omnibusInfixOperator::class_func_mulOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 315)), var_rightExpression_9970, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 319)) ;
      GALGAS_location var_operatorLocation_10183 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 320)) ;
      GALGAS_expressionAST var_rightExpression_10246 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_10246, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_10183, GALGAS_omnibusInfixOperator::class_func_modOp (SOURCE_FILE ("expression-operator-priority.galgas", 325)), var_rightExpression_10246, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 329)) ;
      GALGAS_location var_operatorLocation_10455 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 330)) ;
      GALGAS_expressionAST var_rightExpression_10518 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_10518, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_10455, GALGAS_omnibusInfixOperator::class_func_modOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 335)), var_rightExpression_10518, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 339)) ;
      GALGAS_location var_operatorLocation_10731 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 340)) ;
      GALGAS_expressionAST var_rightExpression_10794 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_10794, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_10731, GALGAS_omnibusInfixOperator::class_func_divOp (SOURCE_FILE ("expression-operator-priority.galgas", 345)), var_rightExpression_10794, inCompiler COMMA_HERE) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 349)) ;
      GALGAS_location var_operatorLocation_11003 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 350)) ;
      GALGAS_expressionAST var_rightExpression_11066 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_11066, inCompiler) ;
      outArgument_outExpression = GALGAS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_11003, GALGAS_omnibusInfixOperator::class_func_divOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 355)), var_rightExpression_11066, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_product_i54_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_81 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 299)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 309)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 319)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 329)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 339)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 349)) ;
      nt_primary_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_product_i54_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_81 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 299)) ;
      nt_primary_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 309)) ;
      nt_primary_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 319)) ;
      nt_primary_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 329)) ;
      nt_primary_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 339)) ;
      nt_primary_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 349)) ;
      nt_primary_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i55_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 364)) ;
  GALGAS_location var_operatorLocation_11462 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 365)) ;
  GALGAS_expressionAST var_expression_11523 ;
  nt_primary_ (ioArgument_ioAST, var_expression_11523, inCompiler) ;
  outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_11462, GALGAS_prefixOperator::class_func_bitWiseComplement (SOURCE_FILE ("expression-operator-priority.galgas", 369)), var_expression_11523, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i55_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 364)) ;
  nt_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i55_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 364)) ;
  nt_primary_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i56_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 377)) ;
  GALGAS_location var_operatorLocation_11871 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 378)) ;
  GALGAS_expressionAST var_expression_11932 ;
  nt_primary_ (ioArgument_ioAST, var_expression_11932, inCompiler) ;
  outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_11871, GALGAS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 382)), var_expression_11932, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i56_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 377)) ;
  nt_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i56_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 377)) ;
  nt_primary_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i57_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 390)) ;
  GALGAS_location var_operatorLocation_12266 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 391)) ;
  GALGAS_expressionAST var_expression_12327 ;
  nt_primary_ (ioArgument_ioAST, var_expression_12327, inCompiler) ;
  outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_12266, GALGAS_prefixOperator::class_func_minusOp (SOURCE_FILE ("expression-operator-priority.galgas", 395)), var_expression_12327, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i57_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 390)) ;
  nt_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i57_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 390)) ;
  nt_primary_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i58_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 403)) ;
  GALGAS_location var_operatorLocation_12664 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 404)) ;
  GALGAS_expressionAST var_expression_12725 ;
  nt_primary_ (ioArgument_ioAST, var_expression_12725, inCompiler) ;
  outArgument_outExpression = GALGAS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_12664, GALGAS_prefixOperator::class_func_minusNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 408)), var_expression_12725, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i58_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 403)) ;
  nt_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i58_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 403)) ;
  nt_primary_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i59_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 416)) ;
  nt_expression_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 418)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i59_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 416)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 418)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i59_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 416)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 418)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i60_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_convert COMMA_SOURCE_FILE ("expression-convert.galgas", 20)) ;
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
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-convert.galgas", 27)) ;
  nt_expression_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  GALGAS_location var_endOfExpression_1303 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-convert.galgas", 30)) ;
  outArgument_outExpression = GALGAS_convertExpressionAST::init_21__21__21_ (outArgument_outExpression, var_typeName_1143, var_endOfExpression_1303, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i60_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_convert COMMA_SOURCE_FILE ("expression-convert.galgas", 20)) ;
  switch (select_omnibus_5F_syntax_82 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-convert.galgas", 27)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-convert.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i60_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_convert COMMA_SOURCE_FILE ("expression-convert.galgas", 20)) ;
  switch (select_omnibus_5F_syntax_82 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-convert.galgas", 27)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-convert.galgas", 30)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i61_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("expression-extend.galgas", 20)) ;
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
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-extend.galgas", 27)) ;
  nt_expression_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  GALGAS_location var_endOfExpression_1303 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-extend.galgas", 30)) ;
  outArgument_outExpression = GALGAS_extendExpressionAST::init_21__21__21_ (outArgument_outExpression, var_typeName_1143, var_endOfExpression_1303, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i61_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("expression-extend.galgas", 20)) ;
  switch (select_omnibus_5F_syntax_83 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-extend.galgas", 27)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-extend.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i61_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("expression-extend.galgas", 20)) ;
  switch (select_omnibus_5F_syntax_83 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-extend.galgas", 27)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-extend.galgas", 30)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i62_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_truncate COMMA_SOURCE_FILE ("expression-truncate.galgas", 20)) ;
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
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-truncate.galgas", 27)) ;
  nt_expression_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  GALGAS_location var_endOfExpression_1305 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-truncate.galgas", 30)) ;
  outArgument_outExpression = GALGAS_truncateExpressionAST::init_21__21__21_ (outArgument_outExpression, var_typeName_1145, var_endOfExpression_1305, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i62_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_truncate COMMA_SOURCE_FILE ("expression-truncate.galgas", 20)) ;
  switch (select_omnibus_5F_syntax_84 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-truncate.galgas", 27)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-truncate.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i62_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_truncate COMMA_SOURCE_FILE ("expression-truncate.galgas", 20)) ;
  switch (select_omnibus_5F_syntax_84 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-truncate.galgas", 27)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-truncate.galgas", 30)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i63_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 18)) ;
  GALGAS_controlRegisterLValueAST var_registerLValue_1130 ;
  nt_control_5F_register_5F_lvalue_ (ioArgument_ioAST, var_registerLValue_1130, inCompiler) ;
  outArgument_outExpression = GALGAS_addressofControlRegisterAST::init_21_ (var_registerLValue_1130, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i63_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 18)) ;
  nt_control_5F_register_5F_lvalue_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i63_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 18)) ;
  nt_control_5F_register_5F_lvalue_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i64_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 18)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 19)) ;
  GALGAS_LValueAST var_lvalue_1086 ;
  nt_lvalue_ (ioArgument_ioAST, var_lvalue_1086, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 21)) ;
  outArgument_outExpression = GALGAS_addressofExpressionAST::init_21_ (var_lvalue_1086, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i64_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 18)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 19)) ;
  nt_lvalue_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 21)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i64_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 18)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 19)) ;
  nt_lvalue_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 21)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i65_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas", 24)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 25)) ;
  GALGAS_LValueAST var_lvalue_1278 ;
  nt_lvalue_ (ioArgument_ioAST, var_lvalue_1278, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 27)) ;
  outArgument_outExpression = GALGAS_sizeofExpressionAST::init_21_ (var_lvalue_1278, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i65_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas", 24)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 25)) ;
  nt_lvalue_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 27)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i65_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas", 24)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 25)) ;
  nt_lvalue_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 27)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i66_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas", 34)) ;
  GALGAS_lstring var_typeName_1586 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1586, inCompiler) ;
  outArgument_outExpression = GALGAS_sizeofTypeAST::init_21_ (var_typeName_1586, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i66_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas", 34)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i66_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas", 34)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i67_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_optionalTypeName_1155 ;
  switch (select_omnibus_5F_syntax_85 (inCompiler)) {
  case 1: {
    var_optionalTypeName_1155 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 22)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_optionalTypeName_1155, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 26)) ;
  GALGAS_lstring var_constantName_1322 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 27)) ;
  GALGAS_primaryInExpressionAccessListAST var_accessList_1406 ;
  nt_expression_5F_access_5F_list_ (ioArgument_ioAST, var_accessList_1406, inCompiler) ;
  outArgument_outExpression = GALGAS_typedConstantCallAST::init_21__21__21_ (var_optionalTypeName_1155, var_constantName_1322, var_accessList_1406, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i67_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_85 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 27)) ;
  nt_expression_5F_access_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i67_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_85 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 27)) ;
  nt_expression_5F_access_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i68_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_ifExpressionAST var_if_5F_expression_1308 ;
  nt_expression_5F_if_ (ioArgument_ioAST, var_if_5F_expression_1308, inCompiler) ;
  outArgument_outExpression = var_if_5F_expression_1308 ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i68_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_if_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i68_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_if_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_if_i69_ (GALGAS_ast & ioArgument_ioAST,
                                                                              GALGAS_ifExpressionAST & outArgument_outExpression,
                                                                              Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 30)) ;
  GALGAS_expressionAST var_ifExpression_1596 ;
  nt_expression_ (ioArgument_ioAST, var_ifExpression_1596, inCompiler) ;
  GALGAS_location var_ifExpressionEndLocation_1627 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 32)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas", 33)) ;
  GALGAS_expressionAST var_thenExpression_1697 ;
  nt_expression_ (ioArgument_ioAST, var_thenExpression_1697, inCompiler) ;
  GALGAS_location var_thenExpressionEndLocation_1730 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 35)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 37)) ;
  GALGAS_expressionAST var_elseExpression_1806 ;
  switch (select_omnibus_5F_syntax_86 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas", 40)) ;
    nt_expression_ (ioArgument_ioAST, var_elseExpression_1806, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas", 42)) ;
  } break ;
  case 2: {
    GALGAS_ifExpressionAST var_else_5F_if_5F_expression_1937 ;
    nt_expression_5F_if_ (ioArgument_ioAST, var_else_5F_if_5F_expression_1937, inCompiler) ;
    var_elseExpression_1806 = var_else_5F_if_5F_expression_1937 ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_elseExpressionEndLocation_2024 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 47)) ;
  outArgument_outExpression = GALGAS_ifExpressionAST::init_21__21__21__21__21__21_ (var_ifExpression_1596, var_ifExpressionEndLocation_1627, var_thenExpression_1697, var_thenExpressionEndLocation_1730, var_elseExpression_1806, var_elseExpressionEndLocation_2024, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_if_i69_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 30)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas", 33)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 37)) ;
  switch (select_omnibus_5F_syntax_86 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas", 40)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas", 42)) ;
  } break ;
  case 2: {
    nt_expression_5F_if_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_if_i69_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 30)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas", 33)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 37)) ;
  switch (select_omnibus_5F_syntax_86 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas", 40)) ;
    nt_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas", 42)) ;
  } break ;
  case 2: {
    nt_expression_5F_if_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i70_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 28)) ;
  GALGAS_lstring var_typeName_1423 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 29)) ;
  GALGAS_integerSliceFieldListAST temp_0 = GALGAS_integerSliceFieldListAST::init (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 30)) ;
  GALGAS_integerSliceFieldListAST var_integerFieldValues_1466 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GALGAS_lstring var_sliceWidth_1526 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 32)) ;
    GALGAS_expressionAST var_expression_1569 ;
    nt_expression_ (ioArgument_ioAST, var_expression_1569, inCompiler) ;
    var_integerFieldValues_1466.addAssign_operation (var_sliceWidth_1526, var_expression_1569, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 34))  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 34)) ;
    if (select_omnibus_5F_syntax_87 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::lowerThan, var_integerFieldValues_1466.getter_count (SOURCE_FILE ("expression-integer-slice.galgas", 37)).objectCompare (GALGAS_uint (uint32_t (2U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 38)), GALGAS_string ("this expression should contain two bit slices or more"), fixItArray3  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 38)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outExpression = GALGAS_integerSliceExpressionAST::init_21__21__21_ (var_typeName_1423, var_integerFieldValues_1466, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 40)), inCompiler COMMA_HERE) ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i70_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 32)) ;
    nt_expression_parse (inCompiler) ;
    if (select_omnibus_5F_syntax_87 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 42)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i70_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 32)) ;
    nt_expression_indexing (inCompiler) ;
    if (select_omnibus_5F_syntax_87 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i71_ (GALGAS_ast & /* ioArgument_ioAST */,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lbigint var_integerLiteral_1082 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalIntegerInExpressionAST::init_21_ (var_integerLiteral_1082, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i71_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i71_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 18)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i72_ (GALGAS_ast & /* ioArgument_ioAST */,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_stringLiteral_1081 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalStringInExpressionAST::init_21_ (var_stringLiteral_1081, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i72_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i72_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 18)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i73_ (GALGAS_ast & /* ioArgument_ioAST */,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("expression-true-false.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalBooleanInExpressionAST::init_21_ (GALGAS_bool (true), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i73_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("expression-true-false.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i73_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("expression-true-false.galgas", 18)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i74_ (GALGAS_ast & /* ioArgument_ioAST */,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("expression-true-false.galgas", 25)) ;
  outArgument_outExpression = GALGAS_literalBooleanInExpressionAST::init_21_ (GALGAS_bool (false), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i74_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("expression-true-false.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i74_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("expression-true-false.galgas", 25)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i75_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_controlRegisterLValueAST var_registerLValue_1175 ;
  nt_control_5F_register_5F_lvalue_ (ioArgument_ioAST, var_registerLValue_1175, inCompiler) ;
  GALGAS_lstring var_fieldName_1207 ;
  switch (select_omnibus_5F_syntax_88 (inCompiler)) {
  case 1: {
    var_fieldName_1207 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("expression-control-register.galgas", 22)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-control-register.galgas", 24)) ;
    var_fieldName_1207 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-control-register.galgas", 25)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GALGAS_registerInExpressionAST::init_21__21_ (var_registerLValue_1175, var_fieldName_1207, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i75_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_control_5F_register_5F_lvalue_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_88 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-control-register.galgas", 24)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-control-register.galgas", 25)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i75_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_control_5F_register_5F_lvalue_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_88 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-control-register.galgas", 24)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-control-register.galgas", 25)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i76_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 28)) ;
  GALGAS_lstring var_registerGroupName_1444 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 30)) ;
  GALGAS_lstring var_registerName_1492 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 31)) ;
  GALGAS_registerIntegerFieldListAST temp_0 = GALGAS_registerIntegerFieldListAST::init (inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 32)) ;
  GALGAS_registerIntegerFieldListAST var_integerFieldValues_1542 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GALGAS_lstring var_registerFieldName_1602 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 34)) ;
    GALGAS_expressionAST var_expression_1652 ;
    nt_expression_ (ioArgument_ioAST, var_expression_1652, inCompiler) ;
    var_integerFieldValues_1542.addAssign_operation (var_registerFieldName_1602, var_expression_1652, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 36))  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 36)) ;
    if (select_omnibus_5F_syntax_89 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 39)) ;
  outArgument_outExpression = GALGAS_registerConstantExpressionAST::init_21__21__21_ (var_registerGroupName_1444, var_registerName_1492, var_integerFieldValues_1542, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i76_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 30)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 34)) ;
    nt_expression_parse (inCompiler) ;
    if (select_omnibus_5F_syntax_89 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 39)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i76_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 30)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 34)) ;
    nt_expression_indexing (inCompiler) ;
    if (select_omnibus_5F_syntax_89 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i77_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_receiver_1768 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 34)) ;
  GALGAS_primaryInExpressionAccessListAST var_accessList_1848 ;
  nt_expression_5F_access_5F_list_ (ioArgument_ioAST, var_accessList_1848, inCompiler) ;
  outArgument_outExpression = GALGAS_primaryInExpressionAST::init_21__21_ (var_receiver_1768, var_accessList_1848, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i77_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 34)) ;
  nt_expression_5F_access_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i77_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 34)) ;
  nt_expression_5F_access_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i78_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("expression-primary.galgas", 44)) ;
  GALGAS_lstring var_receiver_2151 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 45)) ;
  GALGAS_primaryInExpressionAccessListAST var_accessList_2243 ;
  nt_expression_5F_access_5F_list_ (ioArgument_ioAST, var_accessList_2243, inCompiler) ;
  outArgument_outExpression = GALGAS_primaryInExpressionAST::init_21__21_ (var_receiver_2151, var_accessList_2243, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i78_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("expression-primary.galgas", 44)) ;
  nt_expression_5F_access_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i78_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("expression-primary.galgas", 44)) ;
  nt_expression_5F_access_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_access_5F_list_i79_ (GALGAS_ast & ioArgument_ioAST,
                                                                                          GALGAS_primaryInExpressionAccessListAST & outArgument_outAccessList,
                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outAccessList.drop () ; // Release 'out' argument
  GALGAS_primaryInExpressionAccessListAST temp_0 = GALGAS_primaryInExpressionAccessListAST::init (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 55)) ;
  outArgument_outAccessList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_90 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 58)) ;
      GALGAS_lstring var_propertyName_2641 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 59)) ;
      outArgument_outAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::class_func_property (var_propertyName_2641  COMMA_SOURCE_FILE ("expression-primary.galgas", 60))  COMMA_SOURCE_FILE ("expression-primary.galgas", 60)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 62)) ;
      GALGAS_lbigint var_low_2750 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 63)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 64)) ;
      GALGAS_lbigint var_high_2787 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 65)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 66)) ;
      outArgument_outAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::class_func_integerSlice (var_low_2750, var_high_2787  COMMA_SOURCE_FILE ("expression-primary.galgas", 67))  COMMA_SOURCE_FILE ("expression-primary.galgas", 67)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 69)) ;
      GALGAS_expressionAST var_expression_2914 ;
      nt_expression_ (ioArgument_ioAST, var_expression_2914, inCompiler) ;
      GALGAS_location var_endOfIndex_2935 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 71)) ;
      GALGAS_bool var_checkIndexExpression_2979 ;
      switch (select_omnibus_5F_syntax_91 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 74)) ;
        var_checkIndexExpression_2979 = GALGAS_bool (true) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("expression-primary.galgas", 77)) ;
        var_checkIndexExpression_2979 = GALGAS_bool (false) ;
      } break ;
      default:
        break ;
      }
      outArgument_outAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::class_func_arrayAccess (var_expression_2914, var_endOfIndex_2935, var_checkIndexExpression_2979  COMMA_SOURCE_FILE ("expression-primary.galgas", 80))  COMMA_SOURCE_FILE ("expression-primary.galgas", 80)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 86)) ;
      GALGAS_lstring var_methodName_3330 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 87)) ;
      GALGAS_effectiveArgumentListAST var_arguments_3383 ;
      GALGAS_location var_endOfArguments_3398 ;
      nt_effective_5F_parameters_ (ioArgument_ioAST, var_arguments_3383, var_endOfArguments_3398, inCompiler) ;
      outArgument_outAccessList.addAssign_operation (GALGAS_primaryInExpressionAccessAST::class_func_funcCall (var_methodName_3330, var_arguments_3383, var_endOfArguments_3398  COMMA_SOURCE_FILE ("expression-primary.galgas", 89))  COMMA_SOURCE_FILE ("expression-primary.galgas", 89)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_access_5F_list_i79_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_90 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 58)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 59)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 62)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 63)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 64)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 65)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 66)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 69)) ;
      nt_expression_parse (inCompiler) ;
      switch (select_omnibus_5F_syntax_91 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 74)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("expression-primary.galgas", 77)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 86)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 87)) ;
      nt_effective_5F_parameters_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_access_5F_list_i79_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_90 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 58)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 59)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 62)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 63)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 64)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 65)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 66)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 69)) ;
      nt_expression_indexing (inCompiler) ;
      switch (select_omnibus_5F_syntax_91 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 74)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("expression-primary.galgas", 77)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 86)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 87)) ;
      nt_effective_5F_parameters_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i80_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_standaloneFunctionName_1170 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 20)) ;
  GALGAS_effectiveArgumentListAST var_arguments_1233 ;
  GALGAS_location var_endOfArguments_1248 ;
  nt_effective_5F_parameters_ (ioArgument_ioAST, var_arguments_1233, var_endOfArguments_1248, inCompiler) ;
  outArgument_outExpression = GALGAS_standaloneFunctionInExpressionAST::init_21__21__21_ (var_standaloneFunctionName_1170, var_arguments_1233, var_endOfArguments_1248, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i80_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 20)) ;
  nt_effective_5F_parameters_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i80_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 20)) ;
  nt_effective_5F_parameters_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i81_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_1291 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1291, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 26)) ;
  GALGAS_functionCallEffectiveParameterListAST temp_0 = GALGAS_functionCallEffectiveParameterListAST::init (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 27)) ;
  GALGAS_functionCallEffectiveParameterListAST var_parameterList_1355 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_92 (inCompiler) == 2) {
      GALGAS_lstring var_selector_1420 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 30)) ;
      GALGAS_expressionAST var_expression_1461 ;
      nt_expression_ (ioArgument_ioAST, var_expression_1461, inCompiler) ;
      var_parameterList_1355.addAssign_operation (var_selector_1420, var_expression_1461  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 32)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GALGAS_location var_errorLocation_1533 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 34)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 35)) ;
  outArgument_outExpression = GALGAS_constructorCallAST::init_21__21__21_ (var_typeName_1291, var_parameterList_1355, var_errorLocation_1533, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i81_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_92 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 30)) ;
      nt_expression_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i81_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_92 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 30)) ;
      nt_expression_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compileTimeInfixOperator_i82_ (GALGAS_compileTimeInfixOperatorEnumeration & outArgument_outOperator,
                                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperator.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_93 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 96)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::class_func_equal (SOURCE_FILE ("infix-operator-compile-time.galgas", 97)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 99)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::class_func_lessThan (SOURCE_FILE ("infix-operator-compile-time.galgas", 100)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 102)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::class_func_bitWiseAndOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 103)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 105)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::class_func_bitWiseOrOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 106)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 108)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::class_func_bitWiseXorOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 109)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 111)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::class_func_addOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 112)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 114)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::class_func_subOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 115)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 117)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::class_func_mulOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 118)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 120)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::class_func_divOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 121)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 123)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::class_func_divNoOvf (SOURCE_FILE ("infix-operator-compile-time.galgas", 124)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 126)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::class_func_modOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 127)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 129)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::class_func_moduloNoOvf (SOURCE_FILE ("infix-operator-compile-time.galgas", 130)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 132)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::class_func_leftShift (SOURCE_FILE ("infix-operator-compile-time.galgas", 133)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 135)) ;
    outArgument_outOperator = GALGAS_compileTimeInfixOperatorEnumeration::class_func_rightShift (SOURCE_FILE ("infix-operator-compile-time.galgas", 136)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compileTimeInfixOperator_i82_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_93 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 96)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 99)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 102)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 105)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 108)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 111)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 114)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 117)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 120)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 123)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 126)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 129)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 132)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 135)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compileTimeInfixOperator_i82_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_93 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 96)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 99)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 102)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 105)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 108)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 111)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 114)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 117)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 120)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 123)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 126)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 129)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 132)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 135)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i83_ (GALGAS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 143)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 144)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 145)) ;
  GALGAS_lstring var_leftArgument_4534 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 146)) ;
  GALGAS_lstring var_leftType_4565 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 147)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 148)) ;
  GALGAS_location var_operationLocation_4590 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 149)) ;
  GALGAS_compileTimeInfixOperatorEnumeration var_infixOperator_4661 ;
  nt_compileTimeInfixOperator_ (var_infixOperator_4661, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 151)) ;
  GALGAS_lstring var_rightArgument_4705 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 152)) ;
  GALGAS_lstring var_rightType_4737 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 153)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 154)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 155)) ;
  GALGAS_lstring var_resultType_4782 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 156)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 157)) ;
  GALGAS_ctExpressionAST var_expression_4853 ;
  nt_compile_5F_time_5F_expression_ (var_expression_4853, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 159)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_compileTimeInfixOperatorAST::init_21__21__21__21__21__21__21__21_ (var_infixOperator_4661, var_operationLocation_4590, var_leftArgument_4534, var_leftType_4565, var_rightArgument_4705, var_rightType_4737, var_expression_4853, var_resultType_4782, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 160)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i83_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 143)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 144)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 145)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 146)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 147)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 148)) ;
  nt_compileTimeInfixOperator_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 151)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 152)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 153)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 154)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 155)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 156)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 157)) ;
  nt_compile_5F_time_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 159)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i83_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 143)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 144)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 145)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 146)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 147)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 148)) ;
  nt_compileTimeInfixOperator_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 151)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 152)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 153)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 154)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 155)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 156)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 157)) ;
  nt_compile_5F_time_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 159)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i84_ (GALGAS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_lstring var_leftVariableName_5107 ;
  GALGAS_lstring var_leftTypeName_5129 ;
  GALGAS_genericFormalParameterList var_leftGenericFormalParameterList_5147 ;
  nt_llvm_5F_function_5F_header_ (var_leftVariableName_5107, var_leftTypeName_5129, var_leftGenericFormalParameterList_5147, inCompiler) ;
  GALGAS_location var_operationLocation_5186 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 122)) ;
  GALGAS_compileTimeInfixOperatorEnumeration var_infixOperator_5257 ;
  nt_compileTimeInfixOperator_ (var_infixOperator_5257, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 124)) ;
  GALGAS_lstring var_rightVariableName_5301 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 125)) ;
  GALGAS_lstring var_rightType_5337 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 126)) ;
  GALGAS_genericFormalParameterList var_rightGenericFormalParameterList_5383 ;
  nt_generic_5F_formal_5F_arguments_ (var_rightGenericFormalParameterList_5383, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 128)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 129)) ;
  GALGAS_lstring var_resultType_5450 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 130)) ;
  GALGAS_genericFormalParameterList var_resultGenericFormalParameterList_5497 ;
  nt_generic_5F_formal_5F_arguments_ (var_resultGenericFormalParameterList_5497, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 132)) ;
  GALGAS_llvmGenerationInstructionList var_instructionList_5571 ;
  nt_llvm_5F_instruction_5F_list_ (var_instructionList_5571, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 134)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_llvmInfixOperatorAST::init_21__21__21__21__21__21__21__21__21__21__21_ (extensionGetter_omnibusInfixOperator (var_infixOperator_5257, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 136)), var_operationLocation_5186, var_leftVariableName_5107, var_leftTypeName_5129, var_leftGenericFormalParameterList_5147, var_rightVariableName_5301, var_rightType_5337, var_rightGenericFormalParameterList_5383, var_resultType_5450, var_resultGenericFormalParameterList_5497, var_instructionList_5571, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 135)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i84_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_llvm_5F_function_5F_header_parse (inCompiler) ;
  nt_compileTimeInfixOperator_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 124)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 125)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 126)) ;
  nt_generic_5F_formal_5F_arguments_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 128)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 129)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 130)) ;
  nt_generic_5F_formal_5F_arguments_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 132)) ;
  nt_llvm_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 134)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i84_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_llvm_5F_function_5F_header_indexing (inCompiler) ;
  nt_compileTimeInfixOperator_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 124)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 125)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 126)) ;
  nt_generic_5F_formal_5F_arguments_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 128)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 129)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 130)) ;
  nt_generic_5F_formal_5F_arguments_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 132)) ;
  nt_llvm_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 134)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compileTimePrefixOperator_i85_ (GALGAS_compileTimePrefixOperatorEnumeration & outArgument_outOperator,
                                                                                       Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperator.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_94 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 55)) ;
    outArgument_outOperator = GALGAS_compileTimePrefixOperatorEnumeration::class_func_notOp (SOURCE_FILE ("prefix-operator-compile-time.galgas", 56)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 58)) ;
    outArgument_outOperator = GALGAS_compileTimePrefixOperatorEnumeration::class_func_minusOp (SOURCE_FILE ("prefix-operator-compile-time.galgas", 59)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compileTimePrefixOperator_i85_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_94 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 55)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 58)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compileTimePrefixOperator_i85_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_94 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 55)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 58)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i86_ (GALGAS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 67)) ;
  GALGAS_location var_operationLocation_2675 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 68)) ;
  GALGAS_compileTimePrefixOperatorEnumeration var_prefixOperator_2747 ;
  nt_compileTimePrefixOperator_ (var_prefixOperator_2747, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 70)) ;
  GALGAS_lstring var_receiverName_2792 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 71)) ;
  GALGAS_lstring var_receiverType_2823 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 72)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 73)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 74)) ;
  GALGAS_lstring var_resultType_2871 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 75)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 76)) ;
  GALGAS_ctExpressionAST var_expression_2942 ;
  nt_compile_5F_time_5F_expression_ (var_expression_2942, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 78)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_compiletimePrefixOperatorAST::init_21__21__21__21__21__21_ (var_prefixOperator_2747, var_operationLocation_2675, var_receiverName_2792, var_receiverType_2823, var_expression_2942, var_resultType_2871, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 79)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i86_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 67)) ;
  nt_compileTimePrefixOperator_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 71)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 72)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 73)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 74)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 75)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 76)) ;
  nt_compile_5F_time_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 78)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i86_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 67)) ;
  nt_compileTimePrefixOperator_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 71)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 72)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 73)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 74)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 75)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 76)) ;
  nt_compile_5F_time_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 78)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvmPrefixOperator_i87_ (GALGAS_llvmPrefixOperatorEnumeration & outArgument_outOperator,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperator.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_95 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 123)) ;
    outArgument_outOperator = GALGAS_llvmPrefixOperatorEnumeration::class_func_notOp (SOURCE_FILE ("prefix-operator-llvm.galgas", 124)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 126)) ;
    outArgument_outOperator = GALGAS_llvmPrefixOperatorEnumeration::class_func_minusOp (SOURCE_FILE ("prefix-operator-llvm.galgas", 127)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 129)) ;
    outArgument_outOperator = GALGAS_llvmPrefixOperatorEnumeration::class_func_minusOpNoOvf (SOURCE_FILE ("prefix-operator-llvm.galgas", 130)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 132)) ;
    outArgument_outOperator = GALGAS_llvmPrefixOperatorEnumeration::class_func_bitWiseComplement (SOURCE_FILE ("prefix-operator-llvm.galgas", 133)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvmPrefixOperator_i87_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_95 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 123)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 126)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 129)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 132)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvmPrefixOperator_i87_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_95 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 123)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 126)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 129)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 132)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i88_ (GALGAS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 140)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 141)) ;
  GALGAS_location var_operationLocation_5449 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 142)) ;
  GALGAS_llvmPrefixOperatorEnumeration var_prefixOperator_5514 ;
  nt_llvmPrefixOperator_ (var_prefixOperator_5514, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 144)) ;
  GALGAS_lstring var_receiverName_5559 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 145)) ;
  GALGAS_lstring var_receiverType_5590 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 146)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 147)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 148)) ;
  GALGAS_lstring var_resultType_5638 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 149)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 150)) ;
  GALGAS_llvmGenerationInstructionList var_instructionList_5690 ;
  nt_llvm_5F_instruction_5F_list_ (var_instructionList_5690, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 152)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_llvmPrefixOperatorAST::init_21__21__21__21__21__21_ (var_prefixOperator_5514, var_operationLocation_5449, var_receiverName_5559, var_receiverType_5590, var_instructionList_5690, var_resultType_5638, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 153)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i88_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 140)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 141)) ;
  nt_llvmPrefixOperator_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 144)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 145)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 146)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 147)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 148)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 149)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 150)) ;
  nt_llvm_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 152)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i88_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 140)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 141)) ;
  nt_llvmPrefixOperator_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 144)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 145)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 146)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 147)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 148)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 149)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 150)) ;
  nt_llvm_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 152)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instructionList_i89_ (GALGAS_ast & ioArgument_ioAST,
                                                                             GALGAS_instructionListAST & outArgument_outInstructionList,
                                                                             Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  GALGAS_instructionListAST temp_0 = GALGAS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 24)) ;
  outArgument_outInstructionList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_96 (inCompiler) == 2) {
      nt_instruction_ (ioArgument_ioAST, outArgument_outInstructionList, inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instructionList_i89_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_96 (inCompiler) == 2) {
      nt_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instructionList_i89_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_96 (inCompiler) == 2) {
      nt_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i90_ (GALGAS_ast & ioArgument_ioAST,
                                                                         GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_ctAssert COMMA_SOURCE_FILE ("directive-check.galgas", 19)) ;
  GALGAS_lstring var_checkMessage_1122 ;
  switch (select_omnibus_5F_syntax_97 (inCompiler)) {
  case 1: {
    var_checkMessage_1122 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 22)) ;
  } break ;
  case 2: {
    var_checkMessage_1122 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("directive-check.galgas", 24)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("directive-check.galgas", 26)) ;
  GALGAS_expressionAST var_expression_1276 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1276, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_checkInstructionAST::init_21__21__21_ (var_checkMessage_1122.readProperty_location (), var_checkMessage_1122, var_expression_1276, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("directive-check.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("directive-check.galgas", 29)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i90_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_ctAssert COMMA_SOURCE_FILE ("directive-check.galgas", 19)) ;
  switch (select_omnibus_5F_syntax_97 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("directive-check.galgas", 24)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("directive-check.galgas", 26)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("directive-check.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i90_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_ctAssert COMMA_SOURCE_FILE ("directive-check.galgas", 19)) ;
  switch (select_omnibus_5F_syntax_97 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("directive-check.galgas", 24)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("directive-check.galgas", 26)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("directive-check.galgas", 29)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i91_ (GALGAS_ast & ioArgument_ioAST,
                                                                         GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_assert COMMA_SOURCE_FILE ("instruction-assert.galgas", 18)) ;
  GALGAS_location var_loc_1076 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 19)) ;
  GALGAS_expressionAST var_expression_1142 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1142, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_assertInstructionAST::init_21__21_ (var_loc_1076, var_expression_1142, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assert.galgas", 21)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i91_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_assert COMMA_SOURCE_FILE ("instruction-assert.galgas", 18)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i91_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_assert COMMA_SOURCE_FILE ("instruction-assert.galgas", 18)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i92_ (GALGAS_ast & ioArgument_ioAST,
                                                                         GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_LValueAST var_assignmentTargetAST_1126 ;
  nt_lvalue_ (ioArgument_ioAST, var_assignmentTargetAST_1126, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 21)) ;
  GALGAS_expressionAST var_sourceExpression_1209 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_1209, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_assignmentInstructionAST::init_21__21__21_ (var_assignmentTargetAST_1126.readProperty_mIdentifier ().readProperty_location (), var_assignmentTargetAST_1126, var_sourceExpression_1209, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 24)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i92_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_lvalue_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i92_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_lvalue_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i93_ (GALGAS_ast & ioArgument_ioAST,
                                                                         GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_controlRegisterLValueAST var_registerLValue_1537 ;
  nt_control_5F_register_5F_lvalue_ (ioArgument_ioAST, var_registerLValue_1537, inCompiler) ;
  GALGAS_controlRegisterAssignmentOperatorKind var_assignmentKind_1640 ;
  switch (select_omnibus_5F_syntax_98 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 31)) ;
    var_assignmentKind_1640 = GALGAS_controlRegisterAssignmentOperatorKind::class_func_assignment (SOURCE_FILE ("instruction-assignment-control-register.galgas", 32)) ;
  } break ;
  case 2: {
    GALGAS_omnibusInfixOperator var_infixOperator_1765 ;
    GALGAS_location var_operatorLocation_1784 ;
    nt_assignment_5F_combined_5F_with_5F_operator_ (var_infixOperator_1765, var_operatorLocation_1784, inCompiler) ;
    var_assignmentKind_1640 = GALGAS_controlRegisterAssignmentOperatorKind::class_func_assignmentWithOperator (var_infixOperator_1765, var_operatorLocation_1784  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_expressionAST var_sourceExpression_1977 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_1977, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_controlRegisterAssignmentInstructionAST::init_21__21__21__21_ (var_registerLValue_1537.readProperty_mRegisterGroupName ().readProperty_location (), var_registerLValue_1537, var_assignmentKind_1640, var_sourceExpression_1977, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 40)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i93_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_control_5F_register_5F_lvalue_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_98 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 31)) ;
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

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i93_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_control_5F_register_5F_lvalue_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_98 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 31)) ;
  } break ;
  case 2: {
    nt_assignment_5F_combined_5F_with_5F_operator_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i94_ (GALGAS_ast & ioArgument_ioAST,
                                                                         GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 37)) ;
  GALGAS_lstring var_typeName_1746 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 38)) ;
  GALGAS_sliceAssignmentListAST temp_0 = GALGAS_sliceAssignmentListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 39)) ;
  GALGAS_sliceAssignmentListAST var_sliceAssignmentListAST_1787 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GALGAS_lstring var_sliceWidth_1851 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 41)) ;
    GALGAS_sliceTargetAST var_sliceKind_1888 ;
    switch (select_omnibus_5F_syntax_100 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 44)) ;
      var_sliceKind_1888 = GALGAS_sliceTargetAST::class_func_discarded (SOURCE_FILE ("instruction-slice-assignment.galgas", 45)) ;
    } break ;
    case 2: {
      GALGAS_LValueAST var_target_1993 ;
      nt_lvalue_ (ioArgument_ioAST, var_target_1993, inCompiler) ;
      var_sliceKind_1888 = GALGAS_sliceTargetAST::class_func_lValue (var_target_1993  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 48)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 50)) ;
      GALGAS_lstring var_varName_2094 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 51)) ;
      var_sliceKind_1888 = GALGAS_sliceTargetAST::class_func_varDeclaration (var_varName_2094  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 52)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 54)) ;
      GALGAS_lstring var_letName_2206 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 55)) ;
      var_sliceKind_1888 = GALGAS_sliceTargetAST::class_func_letDeclaration (var_letName_2206  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 56)) ;
    } break ;
    default:
      break ;
    }
    var_sliceAssignmentListAST_1787.addAssign_operation (var_sliceWidth_1851, var_sliceKind_1888  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 58)) ;
    if (select_omnibus_5F_syntax_99 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 63)) ;
  GALGAS_expressionAST var_sourceExpression_2423 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_2423, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_sliceAssignmentInstructionAST::init_21__21__21__21__21_ (var_typeName_1746.readProperty_location (), var_typeName_1746, var_sliceAssignmentListAST_1787, var_sourceExpression_2423, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 71)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i94_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 41)) ;
    switch (select_omnibus_5F_syntax_100 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 44)) ;
    } break ;
    case 2: {
      nt_lvalue_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 50)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 51)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 54)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 55)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_99 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 63)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i94_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 41)) ;
    switch (select_omnibus_5F_syntax_100 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 44)) ;
    } break ;
    case 2: {
      nt_lvalue_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 50)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 51)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 54)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 55)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_99 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 63)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i95_ (GALGAS_ast & ioArgument_ioAST,
                                                                         GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_controlRegisterLValueAST var_registerLValue_1305 ;
  nt_control_5F_register_5F_lvalue_ (ioArgument_ioAST, var_registerLValue_1305, inCompiler) ;
  GALGAS_lstring var_attribute_1342 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 23)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, var_attribute_1342.readProperty_string ().objectCompare (GALGAS_string ("bit"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("@bit")) ;
      inCompiler->emitSemanticError (var_attribute_1342.readProperty_location (), GALGAS_string ("attribute should be @bit"), fixItArray1  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 25)) ;
    }
  }
  GALGAS_expressionAST var_bitExpression_1504 ;
  nt_expression_ (ioArgument_ioAST, var_bitExpression_1504, inCompiler) ;
  GALGAS_location var_bitExpressionLocation_1526 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 29)) ;
  GALGAS_expressionAST var_sourceExpression_1603 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_1603, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_bitbandInstructionAST::init_21__21__21__21__21__21_ (var_registerLValue_1305.readProperty_mRegisterGroupName ().readProperty_location (), var_registerLValue_1305, var_bitExpression_1504, var_bitExpressionLocation_1526, var_sourceExpression_1603, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 38)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 32)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i95_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_control_5F_register_5F_lvalue_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 23)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 29)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i95_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_control_5F_register_5F_lvalue_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 23)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 29)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_assignment_5F_combined_5F_with_5F_operator_i96_ (GALGAS_omnibusInfixOperator & outArgument_outInfixOperator,
                                                                                                        GALGAS_location & outArgument_outOperatorLocation,
                                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInfixOperator.drop () ; // Release 'out' argument
  outArgument_outOperatorLocation.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_101 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 11)) ;
    outArgument_outInfixOperator = GALGAS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 12)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 14)) ;
    outArgument_outInfixOperator = GALGAS_omnibusInfixOperator::class_func_bitWiseAndOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 15)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 17)) ;
    outArgument_outInfixOperator = GALGAS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 18)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 20)) ;
    outArgument_outInfixOperator = GALGAS_omnibusInfixOperator::class_func_addOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 21)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 23)) ;
    outArgument_outInfixOperator = GALGAS_omnibusInfixOperator::class_func_addOpNoOvf (SOURCE_FILE ("instruction-assignment-operator.galgas", 24)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 26)) ;
    outArgument_outInfixOperator = GALGAS_omnibusInfixOperator::class_func_subOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 27)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 29)) ;
    outArgument_outInfixOperator = GALGAS_omnibusInfixOperator::class_func_subOpNoOvf (SOURCE_FILE ("instruction-assignment-operator.galgas", 30)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 32)) ;
    outArgument_outInfixOperator = GALGAS_omnibusInfixOperator::class_func_mulOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 33)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 35)) ;
    outArgument_outInfixOperator = GALGAS_omnibusInfixOperator::class_func_mulOpNoOvf (SOURCE_FILE ("instruction-assignment-operator.galgas", 36)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 38)) ;
    outArgument_outInfixOperator = GALGAS_omnibusInfixOperator::class_func_leftShiftOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 39)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 41)) ;
    outArgument_outInfixOperator = GALGAS_omnibusInfixOperator::class_func_rightShiftOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 42)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outOperatorLocation = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 44)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_assignment_5F_combined_5F_with_5F_operator_i96_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_101 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 11)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 14)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 17)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 20)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 23)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 26)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 29)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 32)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 35)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 38)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_assignment_5F_combined_5F_with_5F_operator_i96_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_101 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 11)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 14)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 17)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 20)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 23)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 26)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 29)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 32)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 35)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 38)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i97_ (GALGAS_ast & ioArgument_ioAST,
                                                                         GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_LValueAST var_lvalue_1527 ;
  nt_lvalue_ (ioArgument_ioAST, var_lvalue_1527, inCompiler) ;
  GALGAS_location var_instructionLocation_1542 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 52)) ;
  GALGAS_omnibusInfixOperator var_infixOperator_1651 ;
  GALGAS_location var_operatorLocation_1670 ;
  nt_assignment_5F_combined_5F_with_5F_operator_ (var_infixOperator_1651, var_operatorLocation_1670, inCompiler) ;
  GALGAS_expressionAST var_rightExpression_1756 ;
  nt_expression_ (ioArgument_ioAST, var_rightExpression_1756, inCompiler) ;
  GALGAS_primaryInExpressionAccessListAST temp_0 = GALGAS_primaryInExpressionAccessListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 58)) ;
  GALGAS_primaryInExpressionAccessListAST var_expressionAccessList_1845 = temp_0 ;
  extensionMethod_buildExpressionAccessList (var_lvalue_1527.readProperty_mOperand (), var_expressionAccessList_1845, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 59)) ;
  GALGAS_primaryInExpressionAST var_leftExpression_2350 = GALGAS_primaryInExpressionAST::init_21__21_ (var_lvalue_1527.readProperty_mIdentifier (), var_expressionAccessList_1845, inCompiler COMMA_HERE) ;
  GALGAS_omnibusInfixOperatorExpressionAST var_expression_2448 = GALGAS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (var_leftExpression_2350, var_operatorLocation_1670, var_infixOperator_1651, var_rightExpression_1756, inCompiler COMMA_HERE) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_assignmentInstructionAST::init_21__21__21_ (var_instructionLocation_1542, var_lvalue_1527, var_expression_2448, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 76)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i97_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_lvalue_parse (inCompiler) ;
  nt_assignment_5F_combined_5F_with_5F_operator_parse (inCompiler) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i97_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_lvalue_indexing (inCompiler) ;
  nt_assignment_5F_combined_5F_with_5F_operator_indexing (inCompiler) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i98_ (GALGAS_ast & ioArgument_ioAST,
                                                                         GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 27)) ;
  GALGAS_lstring var_varName_1422 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas", 29)) ;
  GALGAS_expressionAST var_expression_1483 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1483, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_varInstructionWithAssignmentAST::init_21__21__21__21_ (var_varName_1422.readProperty_location (), var_varName_1422, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 34)), var_expression_1483, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-var.galgas", 31)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i98_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas", 29)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i98_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas", 29)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i99_ (GALGAS_ast & ioArgument_ioAST,
                                                                         GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 66)) ;
  GALGAS_lstring var_varName_2565 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 67)) ;
  GALGAS_lstring var_typeName_2608 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_2608, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_varDeclarationInstructionAST::init_21__21__21_ (var_varName_2565.readProperty_location (), var_varName_2565, var_typeName_2608, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-var.galgas", 69)) ;
  switch (select_omnibus_5F_syntax_102 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas", 76)) ;
    GALGAS_expressionAST var_sourceExpression_2816 ;
    nt_expression_ (ioArgument_ioAST, var_sourceExpression_2816, inCompiler) ;
    GALGAS_LValueAST var_assignmentTargetAST_2843 = GALGAS_LValueAST::init_21__21_ (var_varName_2565, GALGAS_LValueOperandAST::class_func_noOperand (SOURCE_FILE ("instruction-var.galgas", 78)), inCompiler COMMA_HERE) ;
    ioArgument_ioInstructionList.addAssign_operation (GALGAS_assignmentInstructionAST::init_21__21__21_ (var_assignmentTargetAST_2843.readProperty_mIdentifier ().readProperty_location (), var_assignmentTargetAST_2843, var_sourceExpression_2816, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-var.galgas", 79)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i99_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 67)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_102 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas", 76)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i99_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 67)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_102 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas", 76)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i100_ (GALGAS_ast & ioArgument_ioAST,
                                                                          GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 20)) ;
  GALGAS_lstring var_varName_1180 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 21)) ;
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
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 28)) ;
  GALGAS_expressionAST var_expression_1389 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1389, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_letInstructionWithAssignmentAST::init_21__21__21__21_ (var_varName_1180.readProperty_location (), var_varName_1180, var_optionalTypeName_1205, var_expression_1389, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-let.galgas", 30)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i100_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 20)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 21)) ;
  switch (select_omnibus_5F_syntax_103 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 28)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i100_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 20)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 21)) ;
  switch (select_omnibus_5F_syntax_103 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 28)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i101_ (GALGAS_ast & ioArgument_ioAST,
                                                                          GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("instruction-panic.galgas", 18)) ;
  GALGAS_location var_loc_1078 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 19)) ;
  GALGAS_expressionAST var_codeExpression_1144 ;
  nt_expression_ (ioArgument_ioAST, var_codeExpression_1144, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_panicInstructionAST::init_21__21_ (var_loc_1078, var_codeExpression_1144, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-panic.galgas", 21)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i101_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("instruction-panic.galgas", 18)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i101_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("instruction-panic.galgas", 18)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i102_ (GALGAS_ast & ioArgument_ioAST,
                                                                          GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_ifInstructionAST var_ifInstruction_1429 ;
  nt_if_5F_instruction_ (ioArgument_ioAST, var_ifInstruction_1429, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (var_ifInstruction_1429  COMMA_SOURCE_FILE ("instruction-if.galgas", 26)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i102_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_if_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i102_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_if_5F_instruction_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_if_5F_instruction_i103_ (GALGAS_ast & ioArgument_ioAST,
                                                                                GALGAS_ifInstructionAST & outArgument_outIfInstruction,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outIfInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 32)) ;
  GALGAS_location var_instructionLocation_1704 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 33)) ;
  GALGAS_bool var_staticIfExpression_1755 ;
  switch (select_omnibus_5F_syntax_104 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_attributeValue_1810 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 36)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::equal, var_attributeValue_1810.readProperty_string ().objectCompare (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 37)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_staticIfExpression_1755 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
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
  GALGAS_location var_testExpressionEndLocation_2222 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 48)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 49)) ;
  GALGAS_instructionListAST var_thenInstructionList_2308 ;
  nt_instructionList_ (ioArgument_ioAST, var_thenInstructionList_2308, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 51)) ;
  GALGAS_location var_endOfThenBranch_2344 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 52)) ;
  GALGAS_instructionListAST var_elseInstructionList_2405 ;
  switch (select_omnibus_5F_syntax_105 (inCompiler)) {
  case 1: {
    GALGAS_instructionListAST temp_2 = GALGAS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 55)) ;
    var_elseInstructionList_2405 = temp_2 ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 57)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 58)) ;
    nt_instructionList_ (ioArgument_ioAST, var_elseInstructionList_2405, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 60)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
    GALGAS_ifInstructionAST var_ifInstruction_2617 ;
    nt_if_5F_instruction_ (ioArgument_ioAST, var_ifInstruction_2617, inCompiler) ;
    GALGAS_instructionListAST temp_3 = GALGAS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 64)) ;
    temp_3.enterElement (GALGAS_instructionListAST_2D_element::init_21_ (var_ifInstruction_2617, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 64)) ;
    var_elseInstructionList_2405 = temp_3 ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfElseBranch_2700 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 66)) ;
  outArgument_outIfInstruction = GALGAS_ifInstructionAST::init_21__21__21__21__21__21__21__21__21_ (var_instructionLocation_1704, var_testExpression_2199, var_testExpressionEndLocation_2222, var_staticIfExpression_1755, var_thenInstructionList_2308, var_endOfThenBranch_2344, var_elseInstructionList_2405, var_endOfElseBranch_2700, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 76)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_if_5F_instruction_i103_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 32)) ;
  switch (select_omnibus_5F_syntax_104 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 36)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 49)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 51)) ;
  switch (select_omnibus_5F_syntax_105 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 57)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 58)) ;
    nt_instructionList_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 60)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
    nt_if_5F_instruction_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_if_5F_instruction_i103_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 32)) ;
  switch (select_omnibus_5F_syntax_104 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 36)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 49)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 51)) ;
  switch (select_omnibus_5F_syntax_105 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 57)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 58)) ;
    nt_instructionList_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 60)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
    nt_if_5F_instruction_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guarded_5F_command_i104_ (GALGAS_ast & ioArgument_ioAST,
                                                                                 const GALGAS_bool constinArgument_inIsExitCommand,
                                                                                 GALGAS_guardedCommandAST & outArgument_outGuardedCommand,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outGuardedCommand.drop () ; // Release 'out' argument
  GALGAS_location var_endOfExp_2124 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 43)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("instruction-event.galgas", 44)) ;
  GALGAS_lbool var_usesSelf_2177 ;
  switch (select_omnibus_5F_syntax_106 (inCompiler)) {
  case 1: {
    var_usesSelf_2177 = GALGAS_lbool::init_21__21_ (GALGAS_bool (false), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 47)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-event.galgas", 49)) ;
    var_usesSelf_2177 = GALGAS_lbool::init_21__21_ (GALGAS_bool (true), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 50)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstringlist temp_0 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 53)) ;
  GALGAS_lstringlist var_nameList_2333 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GALGAS_lstring var_name_2383 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-event.galgas", 55)) ;
    var_nameList_2333.addAssign_operation (var_name_2383  COMMA_SOURCE_FILE ("instruction-event.galgas", 56)) ;
    if (select_omnibus_5F_syntax_107 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 58)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GALGAS_effectiveArgumentListAST var_effectiveParameterList_2480 ;
  GALGAS_location joker_2503 ; // Joker input parameter
  nt_effective_5F_parameters_ (ioArgument_ioAST, var_effectiveParameterList_2480, joker_2503, inCompiler) ;
  joker_2503.drop () ; // Release temporary input variables (joker in source)
  outArgument_outGuardedCommand = GALGAS_guardedCommandAST::class_func_boolAndSync (constinArgument_inIsExitCommand, GALGAS_literalBooleanInExpressionAST::init_21_ (GALGAS_bool (true), inCompiler COMMA_HERE), GALGAS_bool (false), var_endOfExp_2124, var_usesSelf_2177, var_nameList_2333, var_effectiveParameterList_2480  COMMA_SOURCE_FILE ("instruction-event.galgas", 61)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guarded_5F_command_i104_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("instruction-event.galgas", 44)) ;
  switch (select_omnibus_5F_syntax_106 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-event.galgas", 49)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-event.galgas", 55)) ;
    if (select_omnibus_5F_syntax_107 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 58)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_effective_5F_parameters_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guarded_5F_command_i104_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("instruction-event.galgas", 44)) ;
  switch (select_omnibus_5F_syntax_106 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-event.galgas", 49)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-event.galgas", 55)) ;
    if (select_omnibus_5F_syntax_107 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 58)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_effective_5F_parameters_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guarded_5F_command_i105_ (GALGAS_ast & ioArgument_ioAST,
                                                                                 const GALGAS_bool constinArgument_inIsExitCommand,
                                                                                 GALGAS_guardedCommandAST & outArgument_outGuardedCommand,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outGuardedCommand.drop () ; // Release 'out' argument
  GALGAS_expressionAST var_expression_3089 ;
  nt_expression_ (ioArgument_ioAST, var_expression_3089, inCompiler) ;
  GALGAS_location var_endOfExp_3108 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 76)) ;
  switch (select_omnibus_5F_syntax_108 (inCompiler)) {
  case 1: {
    outArgument_outGuardedCommand = GALGAS_guardedCommandAST::class_func_boolean (constinArgument_inIsExitCommand, var_expression_3089, var_endOfExp_3108  COMMA_SOURCE_FILE ("instruction-event.galgas", 78)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("instruction-event.galgas", 84)) ;
    GALGAS_lbool var_usesSelf_3332 ;
    switch (select_omnibus_5F_syntax_109 (inCompiler)) {
    case 1: {
      var_usesSelf_3332 = GALGAS_lbool::init_21__21_ (GALGAS_bool (false), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 87)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-event.galgas", 89)) ;
      var_usesSelf_3332 = GALGAS_lbool::init_21__21_ (GALGAS_bool (true), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 90)), inCompiler COMMA_HERE) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 91)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstringlist temp_0 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 93)) ;
    GALGAS_lstringlist var_nameList_3504 = temp_0 ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_name_3558 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-event.galgas", 95)) ;
      var_nameList_3504.addAssign_operation (var_name_3558  COMMA_SOURCE_FILE ("instruction-event.galgas", 96)) ;
      if (select_omnibus_5F_syntax_110 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 98)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    GALGAS_effectiveArgumentListAST var_effectiveParameterList_3665 ;
    GALGAS_location joker_3688 ; // Joker input parameter
    nt_effective_5F_parameters_ (ioArgument_ioAST, var_effectiveParameterList_3665, joker_3688, inCompiler) ;
    joker_3688.drop () ; // Release temporary input variables (joker in source)
    outArgument_outGuardedCommand = GALGAS_guardedCommandAST::class_func_boolAndSync (constinArgument_inIsExitCommand, var_expression_3089, GALGAS_bool (true), var_endOfExp_3108, var_usesSelf_3332, var_nameList_3504, var_effectiveParameterList_3665  COMMA_SOURCE_FILE ("instruction-event.galgas", 101)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guarded_5F_command_i105_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_108 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("instruction-event.galgas", 84)) ;
    switch (select_omnibus_5F_syntax_109 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-event.galgas", 89)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 91)) ;
    } break ;
    default:
      break ;
    }
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-event.galgas", 95)) ;
      if (select_omnibus_5F_syntax_110 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 98)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    nt_effective_5F_parameters_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guarded_5F_command_i105_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_108 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("instruction-event.galgas", 84)) ;
    switch (select_omnibus_5F_syntax_109 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-event.galgas", 89)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 91)) ;
    } break ;
    default:
      break ;
    }
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-event.galgas", 95)) ;
      if (select_omnibus_5F_syntax_110 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 98)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    nt_effective_5F_parameters_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i106_ (GALGAS_ast & ioArgument_ioAST,
                                                                          GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("instruction-event.galgas", 116)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-event.galgas", 117)) ;
  GALGAS_location var_startLocation_4233 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 118)) ;
  GALGAS_syncInstructionBranchListAST temp_0 = GALGAS_syncInstructionBranchListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 119)) ;
  GALGAS_syncInstructionBranchListAST var_instructionBranchList_4302 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_111 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_when COMMA_SOURCE_FILE ("instruction-event.galgas", 122)) ;
      GALGAS_guardedCommandAST var_guardedCommand_4426 ;
      nt_guarded_5F_command_ (ioArgument_ioAST, GALGAS_bool (true), var_guardedCommand_4426, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-event.galgas", 124)) ;
      GALGAS_instructionListAST var_instructionList_4488 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_4488, inCompiler) ;
      var_instructionBranchList_4302.addAssign_operation (var_guardedCommand_4426, var_instructionList_4488, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 126))  COMMA_SOURCE_FILE ("instruction-event.galgas", 126)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-event.galgas", 134)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_syncInstructionAST::init_21__21__21_ (var_startLocation_4233, var_instructionBranchList_4302, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 135)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-event.galgas", 135)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i106_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("instruction-event.galgas", 116)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-event.galgas", 117)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_111 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_when COMMA_SOURCE_FILE ("instruction-event.galgas", 122)) ;
      nt_guarded_5F_command_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-event.galgas", 124)) ;
      nt_instructionList_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-event.galgas", 134)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i106_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("instruction-event.galgas", 116)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-event.galgas", 117)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_111 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_when COMMA_SOURCE_FILE ("instruction-event.galgas", 122)) ;
      nt_guarded_5F_command_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-event.galgas", 124)) ;
      nt_instructionList_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-event.galgas", 134)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i107_ (GALGAS_ast & ioArgument_ioAST,
                                                                          GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-while.galgas", 22)) ;
  GALGAS_location var_instructionLocation_1241 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 23)) ;
  GALGAS_expressionAST var_testExpression_1323 ;
  nt_expression_ (ioArgument_ioAST, var_testExpression_1323, inCompiler) ;
  GALGAS_location var_testExpressionEndLocation_1346 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 25)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-while.galgas", 26)) ;
  GALGAS_instructionListAST var_instructionList_1432 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1432, inCompiler) ;
  GALGAS_location var_endOfInstruction_1456 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-while.galgas", 29)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_whileInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_1241, var_testExpression_1323, var_testExpressionEndLocation_1346, var_instructionList_1432, var_endOfInstruction_1456, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-while.galgas", 30)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i107_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-while.galgas", 22)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-while.galgas", 26)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-while.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i107_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-while.galgas", 22)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-while.galgas", 26)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-while.galgas", 29)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i108_ (GALGAS_ast & ioArgument_ioAST,
                                                                          GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 24)) ;
  GALGAS_lstring var_varName_1344 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 25)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 26)) ;
  GALGAS_lstring var_iteratedObject_1383 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 27)) ;
  GALGAS_bool var_staticWhileExpression_1406 = GALGAS_bool (false) ;
  GALGAS_expressionAST var_whileExpression_1459 ;
  switch (select_omnibus_5F_syntax_112 (inCompiler)) {
  case 1: {
    var_whileExpression_1459 = GALGAS_literalBooleanInExpressionAST::init_21_ (GALGAS_bool (true), inCompiler COMMA_HERE) ;
    var_staticWhileExpression_1406 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 34)) ;
    switch (select_omnibus_5F_syntax_113 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_attributeValue_1650 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 36)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (ComparisonKind::equal, var_attributeValue_1650.readProperty_string ().objectCompare (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 37)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          var_staticWhileExpression_1406 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_0) {
        TC_Array <FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 41))) ;
        inCompiler->emitSemanticError (var_attributeValue_1650.readProperty_location (), GALGAS_string ("the attribute should be \"@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 40)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 40)), fixItArray1  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 40)) ;
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
  GALGAS_location var_endOf_5F_whileExpression_5F_instruction_2013 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 47)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 48)) ;
  GALGAS_instructionListAST var_instructionList_2107 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_2107, inCompiler) ;
  GALGAS_location var_endOfInstruction_2131 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 50)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 51)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_forInstructionAST::init_21__21__21__21__21__21__21__21_ (var_varName_1344.readProperty_location (), var_varName_1344, var_iteratedObject_1383, var_whileExpression_1459, var_endOf_5F_whileExpression_5F_instruction_2013, var_staticWhileExpression_1406, var_instructionList_2107, var_endOfInstruction_2131, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i108_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 24)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 25)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 27)) ;
  switch (select_omnibus_5F_syntax_112 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 34)) ;
    switch (select_omnibus_5F_syntax_113 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 36)) ;
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
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 48)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 51)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i108_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 24)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 25)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 27)) ;
  switch (select_omnibus_5F_syntax_112 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 34)) ;
    switch (select_omnibus_5F_syntax_113 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 36)) ;
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
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 48)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i109_ (GALGAS_ast & ioArgument_ioAST,
                                                                          GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 25)) ;
  GALGAS_lstring var_varName_1440 ;
  switch (select_omnibus_5F_syntax_114 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 28)) ;
    var_varName_1440 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 29)) ;
  } break ;
  case 2: {
    var_varName_1440 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_typeName_1573 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1573, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 34)) ;
  GALGAS_expressionAST var_lowerBoundExpression_1637 ;
  nt_expression_ (ioArgument_ioAST, var_lowerBoundExpression_1637, inCompiler) ;
  GALGAS_location var_endOf_5F_lowerBoundExpression_5F_instruction_1666 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 37)) ;
  GALGAS_expressionAST var_upperBoundExpression_1778 ;
  nt_expression_ (ioArgument_ioAST, var_upperBoundExpression_1778, inCompiler) ;
  GALGAS_location var_endOf_5F_upperBoundExpression_5F_instruction_1807 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 40)) ;
  GALGAS_instructionListAST var_instructionList_1906 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1906, inCompiler) ;
  GALGAS_location var_endOfInstruction_1930 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 43)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_forLowerUpperBoundInstructionAST::init_21__21__21__21__21__21__21__21__21_ (var_varName_1440.readProperty_location (), var_varName_1440, var_typeName_1573, var_lowerBoundExpression_1637, var_endOf_5F_lowerBoundExpression_5F_instruction_1666, var_upperBoundExpression_1778, var_endOf_5F_upperBoundExpression_5F_instruction_1807, var_instructionList_1906, var_endOfInstruction_1930, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 44)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i109_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 25)) ;
  switch (select_omnibus_5F_syntax_114 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 28)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 34)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 37)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 40)) ;
  nt_instructionList_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 43)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i109_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 25)) ;
  switch (select_omnibus_5F_syntax_114 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 28)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 34)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 37)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 40)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 43)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i110_ (GALGAS_ast & ioArgument_ioAST,
                                                                          GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_callInstructionAST var_routineCallInstruction_1661 ;
  nt_procedure_5F_call_ (ioArgument_ioAST, var_routineCallInstruction_1661, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (var_routineCallInstruction_1661  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 33)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i110_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_procedure_5F_call_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i110_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_procedure_5F_call_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_call_i111_ (GALGAS_ast & ioArgument_ioAST,
                                                                                GALGAS_callInstructionAST & outArgument_outInstruction,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation_1943 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 39)) ;
  GALGAS_LValueAST var_assignmentTargetAST_2006 ;
  nt_lvalue_ (ioArgument_ioAST, var_assignmentTargetAST_2006, inCompiler) ;
  GALGAS_effectiveArgumentListAST var_arguments_2066 ;
  GALGAS_location var_endOfArguments_2081 ;
  nt_effective_5F_parameters_ (ioArgument_ioAST, var_arguments_2066, var_endOfArguments_2081, inCompiler) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::equal, var_assignmentTargetAST_2006.readProperty_mOperand ().objectCompare (GALGAS_LValueOperandAST::class_func_noOperand (SOURCE_FILE ("instruction-procedure-call.galgas", 42)))).operator_and (GALGAS_bool (ComparisonKind::notEqual, var_assignmentTargetAST_2006.readProperty_mIdentifier ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 42)).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outInstruction = GALGAS_standAloneProcedureCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_1943, var_arguments_2066, var_endOfArguments_2081, var_assignmentTargetAST_2006.readProperty_mIdentifier (), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_accessInAssignmentListAST temp_1 = GALGAS_accessInAssignmentListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 50)) ;
    GALGAS_accessInAssignmentListAST var_accessList_2438 = temp_1 ;
    extensionMethod_buildProcedureCallAccessList (var_assignmentTargetAST_2006.readProperty_mOperand (), var_accessList_2438, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 51)) ;
    outArgument_outInstruction = GALGAS_procedureCallInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_1943, var_arguments_2066, var_endOfArguments_2081, var_assignmentTargetAST_2006.readProperty_mIdentifier (), var_accessList_2438, inCompiler COMMA_HERE) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_call_i111_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_lvalue_parse (inCompiler) ;
  nt_effective_5F_parameters_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_call_i111_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_lvalue_indexing (inCompiler) ;
  nt_effective_5F_parameters_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i112_ (GALGAS_ast & ioArgument_ioAST,
                                                                          GALGAS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 28)) ;
  GALGAS_location var_instructionLocation_1474 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 29)) ;
  GALGAS_expressionAST var_switchExpression_1556 ;
  nt_expression_ (ioArgument_ioAST, var_switchExpression_1556, inCompiler) ;
  GALGAS_location var_switchExpressionEndLocation_1581 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 32)) ;
  GALGAS_switchCaseListAST temp_0 = GALGAS_switchCaseListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 33)) ;
  GALGAS_switchCaseListAST var_switchCaseList_1661 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 35)) ;
    GALGAS_lstringlist temp_2 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 36)) ;
    GALGAS_lstringlist var_caseIdentifiers_1729 = temp_2 ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GALGAS_lstring var_caseIdf_1790 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
      var_caseIdentifiers_1729.addAssign_operation (var_caseIdf_1790  COMMA_SOURCE_FILE ("instruction-switch.galgas", 39)) ;
      if (select_omnibus_5F_syntax_116 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 41)) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 43)) ;
    GALGAS_instructionListAST var_instructionList_1915 ;
    nt_instructionList_ (ioArgument_ioAST, var_instructionList_1915, inCompiler) ;
    var_switchCaseList_1661.addAssign_operation (var_caseIdentifiers_1729, var_instructionList_1915  COMMA_SOURCE_FILE ("instruction-switch.galgas", 45)) ;
    if (select_omnibus_5F_syntax_115 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  GALGAS_location var_endOfInstruction_2015 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 49)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_switchInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_1474, var_switchExpression_1556, var_switchExpressionEndLocation_1581, var_switchCaseList_1661, var_endOfInstruction_2015, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i112_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 28)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 35)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
      if (select_omnibus_5F_syntax_116 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 41)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 43)) ;
    nt_instructionList_parse (inCompiler) ;
    if (select_omnibus_5F_syntax_115 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 49)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i112_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 28)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 35)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
      if (select_omnibus_5F_syntax_116 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 41)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 43)) ;
    nt_instructionList_indexing (inCompiler) ;
    if (select_omnibus_5F_syntax_115 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 49)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_i113_ (GALGAS_ast & ioArgument_ioAST,
                                                                     GALGAS_LValueAST & outArgument_outAssignmentTargetAST,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outAssignmentTargetAST.drop () ; // Release 'out' argument
  GALGAS_lstring var_receiver_1964 ;
  switch (select_omnibus_5F_syntax_117 (inCompiler)) {
  case 1: {
    var_receiver_1964 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 43)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("lvalue.galgas", 45)) ;
    var_receiver_1964 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 46)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_LValueOperandAST var_operand_2102 ;
  nt_lvalue_5F_operand_ (ioArgument_ioAST, var_operand_2102, inCompiler) ;
  outArgument_outAssignmentTargetAST = GALGAS_LValueAST::init_21__21_ (var_receiver_1964, var_operand_2102, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_i113_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_117 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 43)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("lvalue.galgas", 45)) ;
  } break ;
  default:
    break ;
  }
  nt_lvalue_5F_operand_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_i113_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_117 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 43)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("lvalue.galgas", 45)) ;
  } break ;
  default:
    break ;
  }
  nt_lvalue_5F_operand_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i114_ (GALGAS_ast & /* ioArgument_ioAST */,
                                                                                GALGAS_LValueOperandAST & outArgument_outOperand,
                                                                                Lexique_omnibus_5F_lexique * /* inCompiler */) {
  outArgument_outOperand.drop () ; // Release 'out' argument
  outArgument_outOperand = GALGAS_LValueOperandAST::class_func_noOperand (SOURCE_FILE ("lvalue.galgas", 55)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i114_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i114_indexing (Lexique_omnibus_5F_lexique * /* inCompiler */) {
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i115_ (GALGAS_ast & ioArgument_ioAST,
                                                                                GALGAS_LValueOperandAST & outArgument_outOperand,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperand.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue.galgas", 61)) ;
  GALGAS_lstring var_propertyName_2625 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 62)) ;
  GALGAS_LValueOperandAST var_operand_2672 ;
  nt_lvalue_5F_operand_ (ioArgument_ioAST, var_operand_2672, inCompiler) ;
  outArgument_outOperand = GALGAS_LValueOperandAST::class_func_property (var_propertyName_2625, var_operand_2672  COMMA_SOURCE_FILE ("lvalue.galgas", 64)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i115_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 62)) ;
  nt_lvalue_5F_operand_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i115_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 62)) ;
  nt_lvalue_5F_operand_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i116_ (GALGAS_ast & ioArgument_ioAST,
                                                                                GALGAS_LValueOperandAST & outArgument_outOperand,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperand.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue.galgas", 70)) ;
  GALGAS_expressionAST var_expression_2978 ;
  nt_expression_ (ioArgument_ioAST, var_expression_2978, inCompiler) ;
  GALGAS_location var_endOfIndex_2997 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 72)) ;
  GALGAS_bool var_checkIndexExpression_3039 ;
  switch (select_omnibus_5F_syntax_118 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue.galgas", 75)) ;
    var_checkIndexExpression_3039 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue.galgas", 78)) ;
    var_checkIndexExpression_3039 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GALGAS_LValueOperandAST var_operand_3210 ;
  nt_lvalue_5F_operand_ (ioArgument_ioAST, var_operand_3210, inCompiler) ;
  outArgument_outOperand = GALGAS_LValueOperandAST::class_func_arrayAccess (var_expression_2978, var_endOfIndex_2997, var_checkIndexExpression_3039, var_operand_3210  COMMA_SOURCE_FILE ("lvalue.galgas", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i116_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue.galgas", 70)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_118 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue.galgas", 75)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue.galgas", 78)) ;
  } break ;
  default:
    break ;
  }
  nt_lvalue_5F_operand_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i116_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue.galgas", 70)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_118 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue.galgas", 75)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue.galgas", 78)) ;
  } break ;
  default:
    break ;
  }
  nt_lvalue_5F_operand_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_control_5F_register_5F_lvalue_i117_ (GALGAS_ast & ioArgument_ioAST,
                                                                                            GALGAS_controlRegisterLValueAST & outArgument_outRegisterLValue,
                                                                                            Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outRegisterLValue.drop () ; // Release 'out' argument
  GALGAS_lstring var_registerGroupName_1721 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 35)) ;
  GALGAS_registerGroupIndexAST var_groupIndex_1770 ;
  switch (select_omnibus_5F_syntax_119 (inCompiler)) {
  case 1: {
    var_groupIndex_1770 = GALGAS_registerGroupIndexAST::class_func_noIndex (SOURCE_FILE ("lvalue-control-register.galgas", 38)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 40)) ;
    GALGAS_expressionAST var_expression_1869 ;
    nt_expression_ (ioArgument_ioAST, var_expression_1869, inCompiler) ;
    GALGAS_location var_endOfIndex_1890 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 42)) ;
    GALGAS_bool var_checkIndexExpression_1934 ;
    switch (select_omnibus_5F_syntax_120 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 45)) ;
      var_checkIndexExpression_1934 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 48)) ;
      var_checkIndexExpression_1934 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    var_groupIndex_1770 = GALGAS_registerGroupIndexAST::class_func_index (var_expression_1869, var_endOfIndex_1890, var_checkIndexExpression_1934  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 53)) ;
  GALGAS_lstring var_registerName_2234 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 54)) ;
  GALGAS_registerIndexAST var_registerIndex_2273 ;
  switch (select_omnibus_5F_syntax_121 (inCompiler)) {
  case 1: {
    var_registerIndex_2273 = GALGAS_registerIndexAST::class_func_noIndex (SOURCE_FILE ("lvalue-control-register.galgas", 57)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 59)) ;
    GALGAS_expressionAST var_expression_2378 ;
    nt_expression_ (ioArgument_ioAST, var_expression_2378, inCompiler) ;
    GALGAS_location var_endOfIndex_2399 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 61)) ;
    GALGAS_bool var_checkIndexExpression_2443 ;
    switch (select_omnibus_5F_syntax_122 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 64)) ;
      var_checkIndexExpression_2443 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 67)) ;
      var_checkIndexExpression_2443 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    var_registerIndex_2273 = GALGAS_registerIndexAST::class_func_index (var_expression_2378, var_endOfIndex_2399, var_checkIndexExpression_2443  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 70)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outRegisterLValue = GALGAS_controlRegisterLValueAST::init_21__21__21__21_ (var_registerGroupName_1721, var_groupIndex_1770, var_registerName_2234, var_registerIndex_2273, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_control_5F_register_5F_lvalue_i117_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 35)) ;
  switch (select_omnibus_5F_syntax_119 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 40)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_omnibus_5F_syntax_120 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 45)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 48)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 54)) ;
  switch (select_omnibus_5F_syntax_121 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 59)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_omnibus_5F_syntax_122 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 64)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 67)) ;
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

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_control_5F_register_5F_lvalue_i117_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 35)) ;
  switch (select_omnibus_5F_syntax_119 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 40)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_omnibus_5F_syntax_120 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 45)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 48)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 54)) ;
  switch (select_omnibus_5F_syntax_121 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 59)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_omnibus_5F_syntax_122 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 64)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 67)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_effective_5F_parameters_i118_ (GALGAS_ast & ioArgument_ioAST,
                                                                                      GALGAS_effectiveArgumentListAST & outArgument_outEffectiveParameterList,
                                                                                      GALGAS_location & outArgument_outEndOfArgs,
                                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outEndOfArgs.drop () ; // Release 'out' argument
  GALGAS_effectiveArgumentListAST temp_0 = GALGAS_effectiveArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 59)) ;
  outArgument_outEffectiveParameterList = temp_0 ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 60)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_123 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_2666 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 63)) ;
      GALGAS_expressionAST var_expression_2707 ;
      nt_expression_ (ioArgument_ioAST, var_expression_2707, inCompiler) ;
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::class_func_output (var_expression_2707, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 65))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 65)), var_selector_2666  COMMA_SOURCE_FILE ("effective-parameters.galgas", 65)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_2840 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 67)) ;
      GALGAS_lstring var_effectiveParameterName_2873 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 68)) ;
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::class_func_outputInput (var_effectiveParameterName_2873  COMMA_SOURCE_FILE ("effective-parameters.galgas", 69)), var_selector_2840  COMMA_SOURCE_FILE ("effective-parameters.galgas", 69)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_3020 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 71)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("effective-parameters.galgas", 72)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 73)) ;
      GALGAS_lstring var_effectiveParameterName_3076 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 74)) ;
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::class_func_outputInputSelfVariable (var_effectiveParameterName_3076  COMMA_SOURCE_FILE ("effective-parameters.galgas", 75)), var_selector_3020  COMMA_SOURCE_FILE ("effective-parameters.galgas", 75)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_selector_3234 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 77)) ;
      GALGAS_lstring var_effectiveParameterName_3267 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 78)) ;
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::class_func_input (var_effectiveParameterName_3267  COMMA_SOURCE_FILE ("effective-parameters.galgas", 79)), var_selector_3234  COMMA_SOURCE_FILE ("effective-parameters.galgas", 79)) ;
    } break ;
    case 6: {
      GALGAS_lstring var_selector_3407 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 81)) ;
      GALGAS_bool var_constant_3432 ;
      switch (select_omnibus_5F_syntax_124 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("effective-parameters.galgas", 84)) ;
        var_constant_3432 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("effective-parameters.galgas", 87)) ;
        var_constant_3432 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_effectiveParameterName_3574 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 90)) ;
      GALGAS_lstring var_typeName_3616 ;
      switch (select_omnibus_5F_syntax_125 (inCompiler)) {
      case 1: {
        var_typeName_3616 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("effective-parameters.galgas", 93)) ;
      } break ;
      case 2: {
        nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_3616, inCompiler) ;
      } break ;
      default:
        break ;
      }
      outArgument_outEffectiveParameterList.addAssign_operation (GALGAS_effectiveArgumentPassingModeAST::class_func_inputWithType (var_constant_3432, var_typeName_3616, var_effectiveParameterName_3574  COMMA_SOURCE_FILE ("effective-parameters.galgas", 98)), var_selector_3407  COMMA_SOURCE_FILE ("effective-parameters.galgas", 97)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  outArgument_outEndOfArgs = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 101)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 102)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_effective_5F_parameters_i118_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_123 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 63)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 67)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 68)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 71)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("effective-parameters.galgas", 72)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 73)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 74)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 77)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 78)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 81)) ;
      switch (select_omnibus_5F_syntax_124 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("effective-parameters.galgas", 84)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("effective-parameters.galgas", 87)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 90)) ;
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
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 102)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_effective_5F_parameters_i118_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_123 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 63)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 67)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 68)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 71)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("effective-parameters.galgas", 72)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 73)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 74)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 77)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 78)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 81)) ;
      switch (select_omnibus_5F_syntax_124 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("effective-parameters.galgas", 84)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("effective-parameters.galgas", 87)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 90)) ;
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
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 102)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i119_ (GALGAS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_target COMMA_SOURCE_FILE ("target-generation.galgas", 10)) ;
  GALGAS_lstring var_targetName_590 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("target-generation.galgas", 11)) ;
  ioArgument_ioAST.mProperty_mTargetListAST.addAssign_operation (var_targetName_590  COMMA_SOURCE_FILE ("target-generation.galgas", 12)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i119_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_target COMMA_SOURCE_FILE ("target-generation.galgas", 10)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("target-generation.galgas", 11)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i119_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_target COMMA_SOURCE_FILE ("target-generation.galgas", 10)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("target-generation.galgas", 11)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i120_ (GALGAS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_ctAssert COMMA_SOURCE_FILE ("declaration-check-target.galgas", 10)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_target COMMA_SOURCE_FILE ("declaration-check-target.galgas", 11)) ;
  GALGAS_location var_targetConstructLocation_593 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-check-target.galgas", 12)) ;
  GALGAS_lstringlist temp_0 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-check-target.galgas", 13)) ;
  GALGAS_lstringlist var_acceptedTargetList_655 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GALGAS_lstring var_targetName_713 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 15)) ;
    var_acceptedTargetList_655.addAssign_operation (var_targetName_713  COMMA_SOURCE_FILE ("declaration-check-target.galgas", 16)) ;
    if (select_omnibus_5F_syntax_126 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 18)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  ioArgument_ioAST.mProperty_mCheckTargetListAST.addAssign_operation (var_targetConstructLocation_593, var_acceptedTargetList_655  COMMA_SOURCE_FILE ("declaration-check-target.galgas", 20)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i120_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_ctAssert COMMA_SOURCE_FILE ("declaration-check-target.galgas", 10)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_target COMMA_SOURCE_FILE ("declaration-check-target.galgas", 11)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 15)) ;
    if (select_omnibus_5F_syntax_126 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 18)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i120_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_ctAssert COMMA_SOURCE_FILE ("declaration-check-target.galgas", 10)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_target COMMA_SOURCE_FILE ("declaration-check-target.galgas", 11)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 15)) ;
    if (select_omnibus_5F_syntax_126 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 18)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_i121_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                            Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_127 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 59)) ;
      GALGAS_location var_operatorLocation_2567 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 60)) ;
      GALGAS_ctExpressionAST var_rightExpression_2650 ;
      nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_ (var_rightExpression_2650, inCompiler) ;
      outArgument_outExpression = GALGAS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_2567, GALGAS_compileTimeInfixOperatorEnumeration::class_func_bitWiseOrOp (SOURCE_FILE ("compile-time-expression.galgas", 65)), var_rightExpression_2650, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_i121_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_127 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 59)) ;
      nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_i121_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_127 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 59)) ;
      nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_xor_i122_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                                              Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_128 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 77)) ;
      GALGAS_location var_operatorLocation_3133 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 78)) ;
      GALGAS_ctExpressionAST var_rightExpression_3216 ;
      nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_ (var_rightExpression_3216, inCompiler) ;
      outArgument_outExpression = GALGAS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_3133, GALGAS_compileTimeInfixOperatorEnumeration::class_func_bitWiseXorOp (SOURCE_FILE ("compile-time-expression.galgas", 83)), var_rightExpression_3216, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_xor_i122_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_128 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 77)) ;
      nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_xor_i122_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_128 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 77)) ;
      nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_and_i123_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                                              Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_equality_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_129 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 95)) ;
      GALGAS_location var_operatorLocation_3698 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 96)) ;
      GALGAS_ctExpressionAST var_rightExpression_3778 ;
      nt_compile_5F_time_5F_expression_5F_equality_ (var_rightExpression_3778, inCompiler) ;
      outArgument_outExpression = GALGAS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_3698, GALGAS_compileTimeInfixOperatorEnumeration::class_func_bitWiseAndOp (SOURCE_FILE ("compile-time-expression.galgas", 101)), var_rightExpression_3778, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_and_i123_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_equality_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_129 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 95)) ;
      nt_compile_5F_time_5F_expression_5F_equality_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_and_i123_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_equality_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_129 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 95)) ;
      nt_compile_5F_time_5F_expression_5F_equality_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_equality_i124_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_comparison_ (outArgument_outExpression, inCompiler) ;
  switch (select_omnibus_5F_syntax_130 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 113)) ;
    GALGAS_location var_operatorLocation_4256 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 114)) ;
    GALGAS_ctExpressionAST var_rightExpression_4338 ;
    nt_compile_5F_time_5F_expression_5F_comparison_ (var_rightExpression_4338, inCompiler) ;
    outArgument_outExpression = GALGAS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_4256, GALGAS_compileTimeInfixOperatorEnumeration::class_func_equal (SOURCE_FILE ("compile-time-expression.galgas", 119)), var_rightExpression_4338, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 123)) ;
    GALGAS_location var_operatorLocation_4567 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 124)) ;
    GALGAS_ctExpressionAST var_rightExpression_4649 ;
    nt_compile_5F_time_5F_expression_5F_comparison_ (var_rightExpression_4649, inCompiler) ;
    GALGAS_ctInfixExpressionAST var_expression_4675 = GALGAS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_4567, GALGAS_compileTimeInfixOperatorEnumeration::class_func_equal (SOURCE_FILE ("compile-time-expression.galgas", 129)), var_rightExpression_4649, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GALGAS_ctPrefixExpressionAST::init_21__21__21_ (var_operatorLocation_4567, GALGAS_compileTimePrefixOperatorEnumeration::class_func_notOp (SOURCE_FILE ("compile-time-expression.galgas", 134)), var_expression_4675, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_equality_i124_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_comparison_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_130 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 113)) ;
    nt_compile_5F_time_5F_expression_5F_comparison_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 123)) ;
    nt_compile_5F_time_5F_expression_5F_comparison_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_equality_i124_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_comparison_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_130 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 113)) ;
    nt_compile_5F_time_5F_expression_5F_comparison_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 123)) ;
    nt_compile_5F_time_5F_expression_5F_comparison_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_comparison_i125_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_shift_ (outArgument_outExpression, inCompiler) ;
  switch (select_omnibus_5F_syntax_131 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 146)) ;
    GALGAS_location var_operatorLocation_5282 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 147)) ;
    GALGAS_ctExpressionAST var_rightExpression_5359 ;
    nt_compile_5F_time_5F_expression_5F_shift_ (var_rightExpression_5359, inCompiler) ;
    GALGAS_ctInfixExpressionAST var_lessThanExpression_5385 = GALGAS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_5282, GALGAS_compileTimeInfixOperatorEnumeration::class_func_lessThan (SOURCE_FILE ("compile-time-expression.galgas", 152)), var_rightExpression_5359, inCompiler COMMA_HERE) ;
    GALGAS_ctInfixExpressionAST var_equalExpression_5546 = GALGAS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_5282, GALGAS_compileTimeInfixOperatorEnumeration::class_func_equal (SOURCE_FILE ("compile-time-expression.galgas", 158)), var_rightExpression_5359, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GALGAS_ctInfixExpressionAST::init_21__21__21__21_ (var_lessThanExpression_5385, var_operatorLocation_5282, GALGAS_compileTimeInfixOperatorEnumeration::class_func_bitWiseOrOp (SOURCE_FILE ("compile-time-expression.galgas", 164)), var_equalExpression_5546, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 168)) ;
    GALGAS_location var_operatorLocation_5914 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 169)) ;
    GALGAS_ctExpressionAST var_rightExpression_5991 ;
    nt_compile_5F_time_5F_expression_5F_shift_ (var_rightExpression_5991, inCompiler) ;
    GALGAS_ctInfixExpressionAST var_expression_6017 = GALGAS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_5914, GALGAS_compileTimeInfixOperatorEnumeration::class_func_lessThan (SOURCE_FILE ("compile-time-expression.galgas", 174)), var_rightExpression_5991, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GALGAS_ctPrefixExpressionAST::init_21__21__21_ (var_operatorLocation_5914, GALGAS_compileTimePrefixOperatorEnumeration::class_func_notOp (SOURCE_FILE ("compile-time-expression.galgas", 179)), var_expression_6017, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 183)) ;
    GALGAS_location var_operatorLocation_6309 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 184)) ;
    GALGAS_ctExpressionAST var_rightExpression_6386 ;
    nt_compile_5F_time_5F_expression_5F_shift_ (var_rightExpression_6386, inCompiler) ;
    outArgument_outExpression = GALGAS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_6309, GALGAS_compileTimeInfixOperatorEnumeration::class_func_lessThan (SOURCE_FILE ("compile-time-expression.galgas", 189)), var_rightExpression_6386, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 193)) ;
    GALGAS_location var_operatorLocation_6630 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 194)) ;
    GALGAS_ctExpressionAST var_rightExpression_6707 ;
    nt_compile_5F_time_5F_expression_5F_shift_ (var_rightExpression_6707, inCompiler) ;
    GALGAS_ctInfixExpressionAST var_lessThanExpression_6732 = GALGAS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_6630, GALGAS_compileTimeInfixOperatorEnumeration::class_func_lessThan (SOURCE_FILE ("compile-time-expression.galgas", 199)), var_rightExpression_6707, inCompiler COMMA_HERE) ;
    GALGAS_ctInfixExpressionAST var_equalExpression_6893 = GALGAS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_6630, GALGAS_compileTimeInfixOperatorEnumeration::class_func_equal (SOURCE_FILE ("compile-time-expression.galgas", 205)), var_rightExpression_6707, inCompiler COMMA_HERE) ;
    GALGAS_ctInfixExpressionAST var_lessThanOrEqualExpression_7048 = GALGAS_ctInfixExpressionAST::init_21__21__21__21_ (var_lessThanExpression_6732, var_operatorLocation_6630, GALGAS_compileTimeInfixOperatorEnumeration::class_func_bitWiseOrOp (SOURCE_FILE ("compile-time-expression.galgas", 211)), var_equalExpression_6893, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GALGAS_ctPrefixExpressionAST::init_21__21__21_ (var_operatorLocation_6630, GALGAS_compileTimePrefixOperatorEnumeration::class_func_notOp (SOURCE_FILE ("compile-time-expression.galgas", 216)), var_lessThanOrEqualExpression_7048, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_comparison_i125_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_shift_parse (inCompiler) ;
  switch (select_omnibus_5F_syntax_131 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 146)) ;
    nt_compile_5F_time_5F_expression_5F_shift_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 168)) ;
    nt_compile_5F_time_5F_expression_5F_shift_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 183)) ;
    nt_compile_5F_time_5F_expression_5F_shift_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 193)) ;
    nt_compile_5F_time_5F_expression_5F_shift_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_comparison_i125_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_shift_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_131 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 146)) ;
    nt_compile_5F_time_5F_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 168)) ;
    nt_compile_5F_time_5F_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 183)) ;
    nt_compile_5F_time_5F_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 193)) ;
    nt_compile_5F_time_5F_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_shift_i126_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_addition_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_132 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 228)) ;
      GALGAS_location var_operatorLocation_7655 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 229)) ;
      GALGAS_ctExpressionAST var_rightExpression_7735 ;
      nt_compile_5F_time_5F_expression_5F_addition_ (var_rightExpression_7735, inCompiler) ;
      outArgument_outExpression = GALGAS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_7655, GALGAS_compileTimeInfixOperatorEnumeration::class_func_leftShift (SOURCE_FILE ("compile-time-expression.galgas", 234)), var_rightExpression_7735, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 238)) ;
      GALGAS_location var_operatorLocation_7935 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 239)) ;
      GALGAS_ctExpressionAST var_rightExpression_8015 ;
      nt_compile_5F_time_5F_expression_5F_addition_ (var_rightExpression_8015, inCompiler) ;
      outArgument_outExpression = GALGAS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_7935, GALGAS_compileTimeInfixOperatorEnumeration::class_func_rightShift (SOURCE_FILE ("compile-time-expression.galgas", 244)), var_rightExpression_8015, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_shift_i126_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_addition_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_132 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 228)) ;
      nt_compile_5F_time_5F_expression_5F_addition_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 238)) ;
      nt_compile_5F_time_5F_expression_5F_addition_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_shift_i126_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_addition_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_132 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 228)) ;
      nt_compile_5F_time_5F_expression_5F_addition_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 238)) ;
      nt_compile_5F_time_5F_expression_5F_addition_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_addition_i127_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_product_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_133 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 256)) ;
      GALGAS_location var_operatorLocation_8490 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 257)) ;
      GALGAS_ctExpressionAST var_rightExpression_8569 ;
      nt_compile_5F_time_5F_expression_5F_product_ (var_rightExpression_8569, inCompiler) ;
      outArgument_outExpression = GALGAS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_8490, GALGAS_compileTimeInfixOperatorEnumeration::class_func_addOp (SOURCE_FILE ("compile-time-expression.galgas", 262)), var_rightExpression_8569, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 266)) ;
      GALGAS_location var_operatorLocation_8764 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 267)) ;
      GALGAS_ctExpressionAST var_rightExpression_8843 ;
      nt_compile_5F_time_5F_expression_5F_product_ (var_rightExpression_8843, inCompiler) ;
      outArgument_outExpression = GALGAS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_8764, GALGAS_compileTimeInfixOperatorEnumeration::class_func_addOp (SOURCE_FILE ("compile-time-expression.galgas", 272)), GALGAS_ctPrefixExpressionAST::init_21__21__21_ (var_operatorLocation_8764, GALGAS_compileTimePrefixOperatorEnumeration::class_func_minusOp (SOURCE_FILE ("compile-time-expression.galgas", 273)), var_rightExpression_8843, inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_addition_i127_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_product_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_133 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 256)) ;
      nt_compile_5F_time_5F_expression_5F_product_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 266)) ;
      nt_compile_5F_time_5F_expression_5F_product_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_addition_i127_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_product_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_133 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 256)) ;
      nt_compile_5F_time_5F_expression_5F_product_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 266)) ;
      nt_compile_5F_time_5F_expression_5F_product_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_product_i128_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                                       Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_primary_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_134 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 284)) ;
      GALGAS_location var_operatorLocation_9360 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 285)) ;
      GALGAS_ctExpressionAST var_rightExpression_9428 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_9428, inCompiler) ;
      outArgument_outExpression = GALGAS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9360, GALGAS_compileTimeInfixOperatorEnumeration::class_func_mulOp (SOURCE_FILE ("compile-time-expression.galgas", 290)), var_rightExpression_9428, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 294)) ;
      GALGAS_location var_operatorLocation_9622 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 295)) ;
      GALGAS_ctExpressionAST var_rightExpression_9690 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_9690, inCompiler) ;
      outArgument_outExpression = GALGAS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9622, GALGAS_compileTimeInfixOperatorEnumeration::class_func_modOp (SOURCE_FILE ("compile-time-expression.galgas", 300)), var_rightExpression_9690, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 304)) ;
      GALGAS_location var_operatorLocation_9886 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 305)) ;
      GALGAS_ctExpressionAST var_rightExpression_9954 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_9954, inCompiler) ;
      outArgument_outExpression = GALGAS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9886, GALGAS_compileTimeInfixOperatorEnumeration::class_func_moduloNoOvf (SOURCE_FILE ("compile-time-expression.galgas", 310)), var_rightExpression_9954, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 314)) ;
      GALGAS_location var_operatorLocation_10155 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 315)) ;
      GALGAS_ctExpressionAST var_rightExpression_10223 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_10223, inCompiler) ;
      outArgument_outExpression = GALGAS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_10155, GALGAS_compileTimeInfixOperatorEnumeration::class_func_divOp (SOURCE_FILE ("compile-time-expression.galgas", 320)), var_rightExpression_10223, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 324)) ;
      GALGAS_location var_operatorLocation_10419 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 325)) ;
      GALGAS_ctExpressionAST var_rightExpression_10487 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_10487, inCompiler) ;
      outArgument_outExpression = GALGAS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_10419, GALGAS_compileTimeInfixOperatorEnumeration::class_func_divNoOvf (SOURCE_FILE ("compile-time-expression.galgas", 330)), var_rightExpression_10487, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_product_i128_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_134 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 284)) ;
      nt_compile_5F_time_5F_primary_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 294)) ;
      nt_compile_5F_time_5F_primary_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 304)) ;
      nt_compile_5F_time_5F_primary_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 314)) ;
      nt_compile_5F_time_5F_primary_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 324)) ;
      nt_compile_5F_time_5F_primary_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_product_i128_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_134 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 284)) ;
      nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 294)) ;
      nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 304)) ;
      nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 314)) ;
      nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 324)) ;
      nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i129_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("compile-time-expression.galgas", 339)) ;
  GALGAS_location var_operatorLocation_10872 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 340)) ;
  GALGAS_ctExpressionAST var_expression_10938 ;
  nt_compile_5F_time_5F_primary_ (var_expression_10938, inCompiler) ;
  outArgument_outExpression = GALGAS_ctPrefixExpressionAST::init_21__21__21_ (var_operatorLocation_10872, GALGAS_compileTimePrefixOperatorEnumeration::class_func_notOp (SOURCE_FILE ("compile-time-expression.galgas", 344)), var_expression_10938, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i129_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("compile-time-expression.galgas", 339)) ;
  nt_compile_5F_time_5F_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i129_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("compile-time-expression.galgas", 339)) ;
  nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i130_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 352)) ;
  GALGAS_location var_operatorLocation_11268 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 353)) ;
  GALGAS_ctExpressionAST var_expression_11334 ;
  nt_compile_5F_time_5F_primary_ (var_expression_11334, inCompiler) ;
  outArgument_outExpression = GALGAS_ctPrefixExpressionAST::init_21__21__21_ (var_operatorLocation_11268, GALGAS_compileTimePrefixOperatorEnumeration::class_func_minusOp (SOURCE_FILE ("compile-time-expression.galgas", 357)), var_expression_11334, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i130_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 352)) ;
  nt_compile_5F_time_5F_primary_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i130_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 352)) ;
  nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i131_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 365)) ;
  nt_compile_5F_time_5F_expression_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 367)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i131_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 365)) ;
  nt_compile_5F_time_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 367)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i131_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 365)) ;
  nt_compile_5F_time_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 367)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i132_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("compile-time-expression.galgas", 373)) ;
  outArgument_outExpression = GALGAS_ctTrueExpressionAST::init (inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i132_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("compile-time-expression.galgas", 373)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i132_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("compile-time-expression.galgas", 373)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i133_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("compile-time-expression.galgas", 380)) ;
  outArgument_outExpression = GALGAS_ctFalseExpressionAST::init (inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i133_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("compile-time-expression.galgas", 380)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i133_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("compile-time-expression.galgas", 380)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i134_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lbigint var_value_12415 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("compile-time-expression.galgas", 387)) ;
  outArgument_outExpression = GALGAS_ctIntExpressionAST::init_21_ (var_value_12415, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i134_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("compile-time-expression.galgas", 387)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i134_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("compile-time-expression.galgas", 387)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i135_ (GALGAS_ctExpressionAST & outArgument_outExpression,
                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_name_12688 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("compile-time-expression.galgas", 394)) ;
  outArgument_outExpression = GALGAS_ctIdentifierExpressionAST::init_21_ (var_name_12688, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i135_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("compile-time-expression.galgas", 394)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i135_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("compile-time-expression.galgas", 394)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_generic_5F_formal_5F_arguments_i136_ (GALGAS_genericFormalParameterList & outArgument_outGenericFormalParameterList,
                                                                                             Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outGenericFormalParameterList.drop () ; // Release 'out' argument
  GALGAS_genericFormalParameterList temp_0 = GALGAS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 93)) ;
  outArgument_outGenericFormalParameterList = temp_0 ;
  switch (select_omnibus_5F_syntax_135 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 96)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_omnibus_5F_syntax_137 (inCompiler)) {
      case 1: {
        GALGAS_lstring var_constantName_3758 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 99)) ;
        outArgument_outGenericFormalParameterList.addAssign_operation (GALGAS_genericFormalParameter::class_func_constant (var_constantName_3758  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 100))  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 100)) ;
      } break ;
      case 2: {
        GALGAS_lstring var_typeName_3882 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 102)) ;
        outArgument_outGenericFormalParameterList.addAssign_operation (GALGAS_genericFormalParameter::class_func_type (var_typeName_3882  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 103))  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 103)) ;
      } break ;
      default:
        break ;
      }
      if (select_omnibus_5F_syntax_136 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 106)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 108)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_generic_5F_formal_5F_arguments_i136_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_135 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 96)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_omnibus_5F_syntax_137 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 99)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 102)) ;
      } break ;
      default:
        break ;
      }
      if (select_omnibus_5F_syntax_136 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 106)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 108)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_generic_5F_formal_5F_arguments_i136_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_135 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 96)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_omnibus_5F_syntax_137 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 99)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 102)) ;
      } break ;
      default:
        break ;
      }
      if (select_omnibus_5F_syntax_136 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 106)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 108)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_generic_5F_where_5F_clause_i137_ (GALGAS_ctExpressionAST & outArgument_outWhereClause,
                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outWhereClause.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_138 (inCompiler)) {
  case 1: {
    outArgument_outWhereClause = GALGAS_ctTrueExpressionAST::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_where COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 118)) ;
    nt_compile_5F_time_5F_expression_ (outArgument_outWhereClause, inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_generic_5F_where_5F_clause_i137_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_138 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_where COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 118)) ;
    nt_compile_5F_time_5F_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_generic_5F_where_5F_clause_i137_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_138 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_where COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 118)) ;
    nt_compile_5F_time_5F_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i138_ (GALGAS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 126)) ;
  GALGAS_lstring var_typeName_4546 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 127)) ;
  GALGAS_genericFormalParameterList var_genericFormalParameterList_4591 ;
  nt_generic_5F_formal_5F_arguments_ (var_genericFormalParameterList_4591, inCompiler) ;
  GALGAS_ctExpressionAST var_whereClause_4650 ;
  nt_generic_5F_where_5F_clause_ (var_whereClause_4650, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 130)) ;
  GALGAS_lstring var_sizeKey_4692 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 131)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, var_sizeKey_4692.readProperty_string ().objectCompare (GALGAS_string ("size"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_sizeKey_4692.readProperty_location (), GALGAS_string ("this identifier should be 'size'"), fixItArray1  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 133)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 135)) ;
  GALGAS_lbigint var_bitSize_4829 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 136)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 148)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_llvmGenericType::init_21__21__21__21_ (var_typeName_4546, var_genericFormalParameterList_4591, var_whereClause_4650, var_bitSize_4829.readProperty_bigint (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 149)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i138_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 126)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 127)) ;
  nt_generic_5F_formal_5F_arguments_parse (inCompiler) ;
  nt_generic_5F_where_5F_clause_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 130)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 131)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 135)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 136)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 148)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i138_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 126)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 127)) ;
  nt_generic_5F_formal_5F_arguments_indexing (inCompiler) ;
  nt_generic_5F_where_5F_clause_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 130)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 131)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 135)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 136)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 148)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_function_5F_header_i139_ (GALGAS_lstring & outArgument_outTargetVariableName,
                                                                                         GALGAS_lstring & outArgument_outTargetTypeName,
                                                                                         GALGAS_genericFormalParameterList & outArgument_outTargetGenericFormalParameterList,
                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outTargetVariableName.drop () ; // Release 'out' argument
  outArgument_outTargetTypeName.drop () ; // Release 'out' argument
  outArgument_outTargetGenericFormalParameterList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 100)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 101)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 102)) ;
  outArgument_outTargetVariableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 103)) ;
  outArgument_outTargetTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 104)) ;
  nt_generic_5F_formal_5F_arguments_ (outArgument_outTargetGenericFormalParameterList, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 106)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_function_5F_header_i139_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 100)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 101)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 102)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 103)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 104)) ;
  nt_generic_5F_formal_5F_arguments_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 106)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_function_5F_header_i139_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 100)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 101)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 102)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 103)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 104)) ;
  nt_generic_5F_formal_5F_arguments_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 106)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i140_ (GALGAS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_lstring var_targetVariableName_5091 ;
  GALGAS_lstring var_targetTypeName_5115 ;
  GALGAS_genericFormalParameterList var_targetGenericFormalParameterList_5135 ;
  nt_llvm_5F_function_5F_header_ (var_targetVariableName_5091, var_targetTypeName_5115, var_targetGenericFormalParameterList_5135, inCompiler) ;
  GALGAS_location var_operatorLocation_5176 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 114)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 115)) ;
  GALGAS_lstring var_sourceVariableName_5248 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 116)) ;
  GALGAS_lstring var_sourceTypeName_5285 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 117)) ;
  GALGAS_genericFormalParameterList var_sourceGenericFormalParameterList_5336 ;
  nt_generic_5F_formal_5F_arguments_ (var_sourceGenericFormalParameterList_5336, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 119)) ;
  GALGAS_ctExpressionAST var_whereClause_5409 ;
  nt_generic_5F_where_5F_clause_ (var_whereClause_5409, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 121)) ;
  GALGAS_llvmGenerationInstructionList var_instructionList_5462 ;
  nt_llvm_5F_instruction_5F_list_ (var_instructionList_5462, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 123)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_llvmAssignmentOperatorDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (var_operatorLocation_5176, var_targetVariableName_5091, var_targetTypeName_5115, var_targetGenericFormalParameterList_5135, var_sourceVariableName_5248, var_sourceTypeName_5285, var_sourceGenericFormalParameterList_5336, var_whereClause_5409, var_instructionList_5462, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 124)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i140_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_llvm_5F_function_5F_header_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 114)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 115)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 116)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 117)) ;
  nt_generic_5F_formal_5F_arguments_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 119)) ;
  nt_generic_5F_where_5F_clause_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 121)) ;
  nt_llvm_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 123)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i140_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_llvm_5F_function_5F_header_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 114)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 115)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 116)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 117)) ;
  nt_generic_5F_formal_5F_arguments_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 119)) ;
  nt_generic_5F_where_5F_clause_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 121)) ;
  nt_llvm_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 123)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_5F_list_i141_ (GALGAS_llvmGenerationInstructionList & outArgument_outInstructionList,
                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  GALGAS_llvmGenerationInstructionList temp_0 = GALGAS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 60)) ;
  outArgument_outInstructionList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_139 (inCompiler) == 2) {
      GALGAS_abstractLLVMInstruction var_instruction_2784 ;
      nt_llvm_5F_instruction_ (var_instruction_2784, inCompiler) ;
      outArgument_outInstructionList.addAssign_operation (var_instruction_2784  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 64)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_5F_list_i141_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_139 (inCompiler) == 2) {
      nt_llvm_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_5F_list_i141_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_139 (inCompiler) == 2) {
      nt_llvm_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_i142_ (GALGAS_abstractLLVMInstruction & outArgument_outInstruction,
                                                                                  Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("llvm-instructions.galgas", 71)) ;
  GALGAS_lstring var_name_3073 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-instructions.galgas", 72)) ;
  outArgument_outInstruction = GALGAS_llvmVarInstruction::init_21_ (var_name_3073, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_i142_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("llvm-instructions.galgas", 71)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-instructions.galgas", 72)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_i142_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("llvm-instructions.galgas", 71)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-instructions.galgas", 72)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_i143_ (GALGAS_abstractLLVMInstruction & outArgument_outInstruction,
                                                                                  Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-instructions.galgas", 79)) ;
  GALGAS_llvmGenerationInstructionElementList temp_0 = GALGAS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 80)) ;
  GALGAS_llvmGenerationInstructionElementList var_elementList_3387 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_141 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_string_3453 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("llvm-instructions.galgas", 83)) ;
      var_elementList_3387.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_string (var_string_3453.readProperty_string ()  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 84))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 84)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_name_3545 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-instructions.galgas", 86)) ;
      var_elementList_3387.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_symbol (var_name_3545  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 87))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 87)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_typeName_3627 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-instructions.galgas", 89)) ;
      var_elementList_3387.addAssign_operation (GALGAS_llvmGenerationInstructionElement::class_func_type (var_typeName_3627  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 90))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 90)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_140 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("llvm-instructions.galgas", 93)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  outArgument_outInstruction = GALGAS_llvmGenerationInstruction::init_21_ (var_elementList_3387, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_i143_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-instructions.galgas", 79)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_141 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("llvm-instructions.galgas", 83)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-instructions.galgas", 86)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-instructions.galgas", 89)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_140 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("llvm-instructions.galgas", 93)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_i143_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-instructions.galgas", 79)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_141 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("llvm-instructions.galgas", 83)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-instructions.galgas", 86)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-instructions.galgas", 89)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_140 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("llvm-instructions.galgas", 93)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

