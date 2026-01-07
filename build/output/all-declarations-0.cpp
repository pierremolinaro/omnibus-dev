#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
//Class for element of '@_32_lstringlist' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement__32_lstringlist : public cCollectionElement {
  public: GGS__32_lstringlist_2E_element mObject ;

//--- Class functions
  public: cCollectionElement__32_lstringlist (const GGS_lstring & in_mValue_30_,
                                              const GGS_lstring & in_mValue_31_
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement__32_lstringlist (const GGS__32_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement__32_lstringlist::cCollectionElement__32_lstringlist (const GGS_lstring & in_mValue_30_,
                                                                        const GGS_lstring & in_mValue_31_
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue_30_, in_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement__32_lstringlist::cCollectionElement__32_lstringlist (const GGS__32_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) :
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
// List type @_32_lstringlist
//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    const GGS__32_lstringlist_2E_element element (p->mObject.mProperty_mValue_30_, p->mObject.mProperty_mValue_31_) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GGS_lstring & in_mValue_30_,
                                                     const GGS_lstring & in_mValue_31_
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = nullptr ;
  macroMyNew (p, cCollectionElement__32_lstringlist (in_mValue_30_, in_mValue_31_ COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__32_lstringlist::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS__32_lstringlist::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mValue0:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mValue_30_.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mValue1:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mValue_31_.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::plusPlusAssignOperation (const GGS__32_lstringlist_2E_element & inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                   const GGS_lstring & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element element (inOperand0, inOperand1) ;
  GGS__32_lstringlist result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::addAssignOperation (const GGS_lstring & inOperand0,
                                              const GGS_lstring & inOperand1
                                              COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_append (const GGS_lstring inOperand0,
                                         const GGS_lstring inOperand1,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                const GGS_lstring inOperand1,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mValue_30_ ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mValue_31_ ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_popFirst (GGS_lstring & outOperand0,
                                           GGS_lstring & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mValue_30_ ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mValue_31_ ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_popLast (GGS_lstring & outOperand0,
                                          GGS_lstring & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mValue_30_ ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mValue_31_ ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::method_first (GGS_lstring & outOperand0,
                                        GGS_lstring & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mValue_30_ ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mValue_31_ ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::method_last (GGS_lstring & outOperand0,
                                       GGS_lstring & outOperand1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mValue_30_ ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mValue_31_ ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::add_operation (const GGS__32_lstringlist & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::plusAssignOperation (const GGS__32_lstringlist inList,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_setMValue_30_AtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_30_ = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS__32_lstringlist::getter_mValue_30_AtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_30_ ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_setMValue_31_AtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_31_ = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS__32_lstringlist::getter_mValue_31_AtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_31_ ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_32_lstringlist
//--------------------------------------------------------------------------------------------------

DownEnumerator__32_lstringlist::DownEnumerator__32_lstringlist (const GGS__32_lstringlist & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element DownEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_31_ ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_32_lstringlist
//--------------------------------------------------------------------------------------------------

UpEnumerator__32_lstringlist::UpEnumerator__32_lstringlist (const GGS__32_lstringlist & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element UpEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_31_ ;
}




//--------------------------------------------------------------------------------------------------
//     @2lstringlist generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstringlist ("2lstringlist",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__32_lstringlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__32_lstringlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__32_lstringlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS__32_lstringlist result ;
  const GGS__32_lstringlist * p = (const GGS__32_lstringlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__32_lstringlist *> (p)) {
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

#include "utf32.h"
#include "scanner_actions.h"
#include "LexiqueIntrospection.h"

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
  utf32 ('!'),
  utf32 ('%'),
} ;

//--- Unicode string for '$!%=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__21__25__3D_ = {
  utf32 ('!'),
  utf32 ('%'),
  utf32 ('='),
} ;

//--- Unicode string for '$!/$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__21__2F_ = {
  utf32 ('!'),
  utf32 ('/'),
} ;

//--- Unicode string for '$!/=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__21__2F__3D_ = {
  utf32 ('!'),
  utf32 ('/'),
  utf32 ('='),
} ;

//--- Unicode string for '$%$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__25_ = {
  utf32 ('%'),
} ;

//--- Unicode string for '$%=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__25__3D_ = {
  utf32 ('%'),
  utf32 ('='),
} ;

//--- Unicode string for '$&$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__26_ = {
  utf32 ('&'),
} ;

//--- Unicode string for '$&&$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__26__26_ = {
  utf32 ('&'),
  utf32 ('&'),
} ;

//--- Unicode string for '$&=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__26__3D_ = {
  utf32 ('&'),
  utf32 ('='),
} ;

//--- Unicode string for '$($'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__28_ = {
  utf32 ('('),
} ;

//--- Unicode string for '$)$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__29_ = {
  utf32 (')'),
} ;

//--- Unicode string for '$*$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2A_ = {
  utf32 ('*'),
} ;

//--- Unicode string for '$*%$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2A__25_ = {
  utf32 ('*'),
  utf32 ('%'),
} ;

//--- Unicode string for '$*%=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2A__25__3D_ = {
  utf32 ('*'),
  utf32 ('%'),
  utf32 ('='),
} ;

//--- Unicode string for '$*=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2A__3D_ = {
  utf32 ('*'),
  utf32 ('='),
} ;

//--- Unicode string for '$+$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2B_ = {
  utf32 ('+'),
} ;

//--- Unicode string for '$+%$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2B__25_ = {
  utf32 ('+'),
  utf32 ('%'),
} ;

//--- Unicode string for '$+%=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2B__25__3D_ = {
  utf32 ('+'),
  utf32 ('%'),
  utf32 ('='),
} ;

//--- Unicode string for '$+=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2B__3D_ = {
  utf32 ('+'),
  utf32 ('='),
} ;

//--- Unicode string for '$,$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2C_ = {
  utf32 (','),
} ;

//--- Unicode string for '$-$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2D_ = {
  utf32 ('-'),
} ;

//--- Unicode string for '$-%$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2D__25_ = {
  utf32 ('-'),
  utf32 ('%'),
} ;

//--- Unicode string for '$-%=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2D__25__3D_ = {
  utf32 ('-'),
  utf32 ('%'),
  utf32 ('='),
} ;

//--- Unicode string for '$-=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2D__3D_ = {
  utf32 ('-'),
  utf32 ('='),
} ;

//--- Unicode string for '$->$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2D__3E_ = {
  utf32 ('-'),
  utf32 ('>'),
} ;

//--- Unicode string for '$.$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2E_ = {
  utf32 ('.'),
} ;

//--- Unicode string for '$...$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2E__2E__2E_ = {
  utf32 ('.'),
  utf32 ('.'),
  utf32 ('.'),
} ;

//--- Unicode string for '$..<$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2E__2E__3C_ = {
  utf32 ('.'),
  utf32 ('.'),
  utf32 ('<'),
} ;

//--- Unicode string for '$/$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2F_ = {
  utf32 ('/'),
} ;

//--- Unicode string for '$//$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2F__2F_ = {
  utf32 ('/'),
  utf32 ('/'),
} ;

//--- Unicode string for '$//!$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2F__2F__21_ = {
  utf32 ('/'),
  utf32 ('/'),
  utf32 ('!'),
} ;

//--- Unicode string for '$/=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2F__3D_ = {
  utf32 ('/'),
  utf32 ('='),
} ;

//--- Unicode string for '$0b$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__30_b = {
  utf32 ('0'),
  utf32 ('b'),
} ;

//--- Unicode string for '$0x$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__30_x = {
  utf32 ('0'),
  utf32 ('x'),
} ;

//--- Unicode string for '$:$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3A_ = {
  utf32 (':'),
} ;

//--- Unicode string for '$<$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3C_ = {
  utf32 ('<'),
} ;

//--- Unicode string for '$<<$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3C__3C_ = {
  utf32 ('<'),
  utf32 ('<'),
} ;

//--- Unicode string for '$<<=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3C__3C__3D_ = {
  utf32 ('<'),
  utf32 ('<'),
  utf32 ('='),
} ;

//--- Unicode string for '$=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3D_ = {
  utf32 ('='),
} ;

//--- Unicode string for '$==$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3D__3D_ = {
  utf32 ('='),
  utf32 ('='),
} ;

//--- Unicode string for '$>$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3E_ = {
  utf32 ('>'),
} ;

//--- Unicode string for '$>>$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3E__3E_ = {
  utf32 ('>'),
  utf32 ('>'),
} ;

//--- Unicode string for '$>>=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3E__3E__3D_ = {
  utf32 ('>'),
  utf32 ('>'),
  utf32 ('='),
} ;

//--- Unicode string for '$[$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__5B_ = {
  utf32 ('['),
} ;

//--- Unicode string for '$\\\"$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__5C__22_ = {
  utf32 ('\\'),
  utf32 ('\"'),
} ;

//--- Unicode string for '$]$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__5D_ = {
  utf32 (']'),
} ;

//--- Unicode string for '$]!$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__5D__21_ = {
  utf32 (']'),
  utf32 ('!'),
} ;

//--- Unicode string for '$^$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__5E_ = {
  utf32 ('^'),
} ;

//--- Unicode string for '$^=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__5E__3D_ = {
  utf32 ('^'),
  utf32 ('='),
} ;

//--- Unicode string for '$_$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__5F_ = {
  utf32 ('_'),
} ;

//--- Unicode string for '$addressof$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_addressof = {
  utf32 ('a'),
  utf32 ('d'),
  utf32 ('d'),
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('s'),
  utf32 ('s'),
  utf32 ('o'),
  utf32 ('f'),
} ;

//--- Unicode string for '$assert$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_assert = {
  utf32 ('a'),
  utf32 ('s'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('t'),
} ;

//--- Unicode string for '$boot$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_boot = {
  utf32 ('b'),
  utf32 ('o'),
  utf32 ('o'),
  utf32 ('t'),
} ;

//--- Unicode string for '$case$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_case = {
  utf32 ('c'),
  utf32 ('a'),
  utf32 ('s'),
  utf32 ('e'),
} ;

//--- Unicode string for '$compiletime$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_compiletime = {
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('m'),
  utf32 ('p'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('m'),
  utf32 ('e'),
} ;

//--- Unicode string for '$convert$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_convert = {
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('v'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('t'),
} ;

//--- Unicode string for '$ctAssert$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_ctAssert = {
  utf32 ('c'),
  utf32 ('t'),
  utf32 ('A'),
  utf32 ('s'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('t'),
} ;

//--- Unicode string for '$driver$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_driver = {
  utf32 ('d'),
  utf32 ('r'),
  utf32 ('i'),
  utf32 ('v'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$else$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_else = {
  utf32 ('e'),
  utf32 ('l'),
  utf32 ('s'),
  utf32 ('e'),
} ;

//--- Unicode string for '$enum$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_enum = {
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('m'),
} ;

//--- Unicode string for '$event$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_event = {
  utf32 ('e'),
  utf32 ('v'),
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('t'),
} ;

//--- Unicode string for '$extend$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_extend = {
  utf32 ('e'),
  utf32 ('x'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('d'),
} ;

//--- Unicode string for '$extern$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_extern = {
  utf32 ('e'),
  utf32 ('x'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('n'),
} ;

//--- Unicode string for '$for$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_for = {
  utf32 ('f'),
  utf32 ('o'),
  utf32 ('r'),
} ;

//--- Unicode string for '$func$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_func = {
  utf32 ('f'),
  utf32 ('u'),
  utf32 ('n'),
  utf32 ('c'),
} ;

//--- Unicode string for '$guard$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_guard = {
  utf32 ('g'),
  utf32 ('u'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('d'),
} ;

//--- Unicode string for '$if$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_if = {
  utf32 ('i'),
  utf32 ('f'),
} ;

//--- Unicode string for '$import$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_import = {
  utf32 ('i'),
  utf32 ('m'),
  utf32 ('p'),
  utf32 ('o'),
  utf32 ('r'),
  utf32 ('t'),
} ;

//--- Unicode string for '$in$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_in = {
  utf32 ('i'),
  utf32 ('n'),
} ;

//--- Unicode string for '$interrupt$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_interrupt = {
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('r'),
  utf32 ('u'),
  utf32 ('p'),
  utf32 ('t'),
} ;

//--- Unicode string for '$let$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_let = {
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('t'),
} ;

//--- Unicode string for '$llvm$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_llvm = {
  utf32 ('l'),
  utf32 ('l'),
  utf32 ('v'),
  utf32 ('m'),
} ;

//--- Unicode string for '$no$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_no = {
  utf32 ('n'),
  utf32 ('o'),
} ;

//--- Unicode string for '$not$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_not = {
  utf32 ('n'),
  utf32 ('o'),
  utf32 ('t'),
} ;

//--- Unicode string for '$opaque$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_opaque = {
  utf32 ('o'),
  utf32 ('p'),
  utf32 ('a'),
  utf32 ('q'),
  utf32 ('u'),
  utf32 ('e'),
} ;

//--- Unicode string for '$option$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_option = {
  utf32 ('o'),
  utf32 ('p'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('n'),
} ;

//--- Unicode string for '$panic$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_panic = {
  utf32 ('p'),
  utf32 ('a'),
  utf32 ('n'),
  utf32 ('i'),
  utf32 ('c'),
} ;

//--- Unicode string for '$primitive$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_primitive = {
  utf32 ('p'),
  utf32 ('r'),
  utf32 ('i'),
  utf32 ('m'),
  utf32 ('i'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('v'),
  utf32 ('e'),
} ;

//--- Unicode string for '$public$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_public = {
  utf32 ('p'),
  utf32 ('u'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('c'),
} ;

//--- Unicode string for '$registers$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_registers = {
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('g'),
  utf32 ('i'),
  utf32 ('s'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('s'),
} ;

//--- Unicode string for '$required$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_required = {
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('q'),
  utf32 ('u'),
  utf32 ('i'),
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('d'),
} ;

//--- Unicode string for '$safe$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_safe = {
  utf32 ('s'),
  utf32 ('a'),
  utf32 ('f'),
  utf32 ('e'),
} ;

//--- Unicode string for '$section$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_section = {
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('c'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('n'),
} ;

//--- Unicode string for '$self$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_self = {
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('l'),
  utf32 ('f'),
} ;

//--- Unicode string for '$service$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_service = {
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('v'),
  utf32 ('i'),
  utf32 ('c'),
  utf32 ('e'),
} ;

//--- Unicode string for '$sizeof$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_sizeof = {
  utf32 ('s'),
  utf32 ('i'),
  utf32 ('z'),
  utf32 ('e'),
  utf32 ('o'),
  utf32 ('f'),
} ;

//--- Unicode string for '$startup$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_startup = {
  utf32 ('s'),
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('t'),
  utf32 ('u'),
  utf32 ('p'),
} ;

//--- Unicode string for '$staticArray$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_staticArray = {
  utf32 ('s'),
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('c'),
  utf32 ('A'),
  utf32 ('r'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('y'),
} ;

//--- Unicode string for '$struct$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_struct = {
  utf32 ('s'),
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('u'),
  utf32 ('c'),
  utf32 ('t'),
} ;

//--- Unicode string for '$switch$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_switch = {
  utf32 ('s'),
  utf32 ('w'),
  utf32 ('i'),
  utf32 ('t'),
  utf32 ('c'),
  utf32 ('h'),
} ;

//--- Unicode string for '$sync$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_sync = {
  utf32 ('s'),
  utf32 ('y'),
  utf32 ('n'),
  utf32 ('c'),
} ;

//--- Unicode string for '$target$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_target = {
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('g'),
  utf32 ('e'),
  utf32 ('t'),
} ;

//--- Unicode string for '$task$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_task = {
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('s'),
  utf32 ('k'),
} ;

//--- Unicode string for '$truncate$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_truncate = {
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('u'),
  utf32 ('n'),
  utf32 ('c'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('e'),
} ;

//--- Unicode string for '$typealias$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_typealias = {
  utf32 ('t'),
  utf32 ('y'),
  utf32 ('p'),
  utf32 ('e'),
  utf32 ('a'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('a'),
  utf32 ('s'),
} ;

//--- Unicode string for '$until$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_until = {
  utf32 ('u'),
  utf32 ('n'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('l'),
} ;

//--- Unicode string for '$user$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_user = {
  utf32 ('u'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$var$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_var = {
  utf32 ('v'),
  utf32 ('a'),
  utf32 ('r'),
} ;

//--- Unicode string for '$when$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_when = {
  utf32 ('w'),
  utf32 ('h'),
  utf32 ('e'),
  utf32 ('n'),
} ;

//--- Unicode string for '$where$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_where = {
  utf32 ('w'),
  utf32 ('h'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('e'),
} ;

//--- Unicode string for '$while$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_while = {
  utf32 ('w'),
  utf32 ('h'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
} ;

//--- Unicode string for '$yes$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_yes = {
  utf32 ('y'),
  utf32 ('e'),
  utf32 ('s'),
} ;

//--- Unicode string for '${$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__7B_ = {
  utf32 ('{'),
} ;

//--- Unicode string for '$|$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__7C_ = {
  utf32 ('|'),
} ;

//--- Unicode string for '$|=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__7C__3D_ = {
  utf32 ('|'),
  utf32 ('='),
} ;

//--- Unicode string for '$||$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__7C__7C_ = {
  utf32 ('|'),
  utf32 ('|'),
} ;

//--- Unicode string for '$}$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__7D_ = {
  utf32 ('}'),
} ;

//--- Unicode string for '$~$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__7E_ = {
  utf32 ('~'),
} ;

//--- Unicode string for '$\xE2""\x89""\xA0""$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2260_ = {
  utf32 (8800),
} ;

//--- Unicode string for '$\xE2""\x89""\xA4""$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2264_ = {
  utf32 (8804),
} ;

//--- Unicode string for '$\xE2""\x89""\xA5""$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2265_ = {
  utf32 (8805),
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
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("identifier") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__40_attribute:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("@attribute") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_integer:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("integer") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_bigInteger.decimalString ()) ;
      break ;
    case kToken__22_string_22_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\"string\"") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("comment") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_commentMark:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("commentMark") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3F_selector_3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\?selector:") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__3F__21_selector_3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\?!selector:") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__21_selector_3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!selector:") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__21__3F_selector_3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!\?selector:") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__24_type:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("$type") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__A9_group:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("©group") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_addressof:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("addressof") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_assert:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("assert") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_boot:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("boot") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_case:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("case") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_convert:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("convert") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_ctAssert:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("ctAssert") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_compiletime:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("compiletime") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_driver:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("driver") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_else:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("else") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_enum:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("enum") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_event:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("event") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_extend:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("extend") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_extern:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("extern") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_for:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("for") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_func:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("func") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_guard:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("guard") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_if:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("if") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_import:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("import") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_in:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("in") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_interrupt:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("interrupt") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_let:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("let") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_llvm:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("llvm") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_no:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("no") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_not:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("not") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_opaque:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("opaque") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_option:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("option") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_panic:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("panic") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_primitive:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("primitive") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_public:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("public") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_registers:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("registers") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_required:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("required") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_safe:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("safe") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_section:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("section") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_self:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("self") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_service:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("service") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_sizeof:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("sizeof") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_startup:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("startup") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_struct:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("struct") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_staticArray:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("staticArray") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_switch:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("switch") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_sync:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("sync") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_target:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("target") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_task:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("task") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_truncate:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("truncate") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_typealias:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("typealias") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_var:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("var") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_until:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("until") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_user:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("user") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_where:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("where") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_when:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("when") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_while:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("while") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_yes:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("yes") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (":") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (".") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (",") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("{") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("}") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__28_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("(") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__29_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (")") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5F_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("_") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3D__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("==") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2260_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("≠") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("<") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2264_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("≤") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (">") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2265_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("≥") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("[") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("]") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5D__21_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("]!") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3C__3C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("<<") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3E__3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (">>") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("~") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7C__7C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("||") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26__26_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&&") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2D__3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("->") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2E__2E__3C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("..<") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2E__2E__2E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("...") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("|") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7C__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("|=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("^") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5E__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("^=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("+") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2B__25_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("+%") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2B__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("+=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2B__25__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("+%=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("-") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2D__25_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("-%") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2D__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("-=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2D__25__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("-%=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("*") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2A__25_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("*%") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2A__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("*=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2A__25__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("*%=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2F_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("/") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21__2F_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!/") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2F__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("/=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21__2F__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!/=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21__25_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!%") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21__25__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!%=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3C__3C__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("<<=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3E__3E__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (">>=") ;
      s.appendChar (utf32 ('$')) ;
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
    if (testForChar_isUnicodeLetter ()) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForChar_isUnicodeLetter () || testForInputUTF32Char (utf32 ('_')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
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
    }else if (testForInputUTF32Char (utf32 ('@'))) {
      if (testForChar_isUnicodeLetter () || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForChar_isUnicodeLetter () || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('.'))) {
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
        if (testForInputUTF32Char (utf32 ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('1'))) {
        ::scanner_routine_enterBinaryDigitIntoBigInt (*this, previousChar (), token.mLexicalAttribute_bigInteger, gLexicalMessage_omnibus_5F_lexique_internalError) ;
        do {
          if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('1'))) {
            ::scanner_routine_enterBinaryDigitIntoBigInt (*this, previousChar (), token.mLexicalAttribute_bigInteger, gLexicalMessage_omnibus_5F_lexique_internalError) ;
          }else if (testForInputUTF32Char (utf32 ('_'))) {
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
        if (testForInputUTF32Char (utf32 ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
        ::scanner_routine_enterHexDigitIntoBigInt (*this, previousChar (), token.mLexicalAttribute_bigInteger, gLexicalMessage_omnibus_5F_lexique_internalError) ;
        do {
          if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
            ::scanner_routine_enterHexDigitIntoBigInt (*this, previousChar (), token.mLexicalAttribute_bigInteger, gLexicalMessage_omnibus_5F_lexique_internalError) ;
          }else if (testForInputUTF32Char (utf32 ('_'))) {
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
    }else if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
      ::scanner_routine_enterDecimalDigitIntoBigInt (*this, previousChar (), token.mLexicalAttribute_bigInteger, gLexicalMessage_omnibus_5F_lexique_internalError) ;
      do {
        if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          ::scanner_routine_enterDecimalDigitIntoBigInt (*this, previousChar (), token.mLexicalAttribute_bigInteger, gLexicalMessage_omnibus_5F_lexique_internalError) ;
        }else if (testForInputUTF32Char (utf32 ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_integer ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('\"'))) {
      do {
        if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__5C__22_, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\"')) ;
        }else if (testForInputUTF32Char (utf32 (' ')) || testForInputUTF32Char (utf32 ('!')) || testForInputUTF32CharRange (utf32 ('#'), utf32 (65533))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (utf32 ('\"'))) {
        token.mTokenCode = kToken__22_string_22_ ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_omnibus_5F_lexique_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2F__2F__21_, true)) {
      do {
        if (testForInputUTF32CharRange (utf32 (1), utf32 ('\t')) || testForInputUTF32Char (utf32 ('\v')) || testForInputUTF32Char (utf32 ('\f')) || testForInputUTF32CharRange (utf32 (14), utf32 (65533))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      enterDroppedTerminal (kToken_commentMark) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2F__2F_, true)) {
      do {
        if (testForInputUTF32CharRange (utf32 (1), utf32 ('\t')) || testForInputUTF32Char (utf32 ('\v')) || testForInputUTF32Char (utf32 ('\f')) || testForInputUTF32CharRange (utf32 (14), utf32 (65533))) {
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
    }else if (testForInputUTF32Char (utf32 ('\?'))) {
      const LocationInSource currentLocationForTag_onlyInterrogationMark = mCurrentLocation ;
      const LocationInSource endLocationForTag_onlyInterrogationMark = mTokenEndLocation ;
      const utf32 currentCharForTag_onlyInterrogationMark = mCurrentChar ;
      if (testForInputUTF32Char (utf32 ('!'))) {
        const LocationInSource currentLocationForTag_onlyExclamationInterrogationMark = mCurrentLocation ;
        const LocationInSource endLocationForTag_onlyExclamationInterrogationMark = mTokenEndLocation ;
        const utf32 currentCharForTag_onlyExclamationInterrogationMark = mCurrentChar ;
        if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('_'))) {
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
          if (testForInputUTF32Char (utf32 (':'))) {
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
      }else if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (utf32 (':'))) {
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
    }else if (testForInputUTF32Char (utf32 ('!'))) {
      const LocationInSource currentLocationForTag_onlyExclamationMark = mCurrentLocation ;
      const LocationInSource endLocationForTag_onlyExclamationMark = mTokenEndLocation ;
      const utf32 currentCharForTag_onlyExclamationMark = mCurrentChar ;
      if (testForInputUTF32Char (utf32 ('\?'))) {
        const LocationInSource currentLocationForTag_onlyInterrogationExclamationMark = mCurrentLocation ;
        const LocationInSource endLocationForTag_onlyInterrogationExclamationMark = mTokenEndLocation ;
        const utf32 currentCharForTag_onlyInterrogationExclamationMark = mCurrentChar ;
        if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('_'))) {
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
          if (testForInputUTF32Char (utf32 (':'))) {
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
      }else if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (utf32 (':'))) {
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
    }else if (testForInputUTF32Char (utf32 ('$'))) {
      if (testForChar_isUnicodeLetter ()) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForChar_isUnicodeLetter () || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('_'))) {
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
    }else if (testForInputUTF32Char (utf32 (169))) {
      if (testForChar_isUnicodeLetter ()) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForChar_isUnicodeLetter () || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('_'))) {
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
    }else if (testForInputUTF32CharRange (utf32 (1), utf32 (' '))) {
    }else if (testForInputUTF32Char (utf32 ('\0'))) { // End of source text ? 
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
  while ((token.mTokenCode < 0) && (mCurrentChar.u32 () != '\0')) {
    internalParseLexicalToken (token) ;
  }
  if (mCurrentChar.u32 () == '\0') {
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

GGS_lbigint Lexique_omnibus_5F_lexique::synthetizedAttribute_bigInteger (void) const {
  cTokenFor_omnibus_5F_lexique * ptr = (cTokenFor_omnibus_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_omnibus_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_bigint value (ptr->mLexicalAttribute_bigInteger) ;
  GGS_lbigint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring Lexique_omnibus_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_omnibus_5F_lexique * ptr = (cTokenFor_omnibus_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_omnibus_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_string value (ptr->mLexicalAttribute_tokenString) ;
  GGS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

GGS_stringlist Lexique_omnibus_5F_lexique::symbols (LOCATION_ARGS) {
  GGS_stringlist result = GGS_stringlist::class_func_emptyList (THERE) ;
  result.addAssignOperation (GGS_string ("identifier") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("@attribute") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("integer") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\"string\"") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("comment") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("commentMark") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\?selector:") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\?!selector:") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!selector:") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!\?selector:") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("$type") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("©group") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("addressof") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("assert") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("boot") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("case") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("convert") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("ctAssert") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("compiletime") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("driver") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("else") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("enum") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("event") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("extend") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("extern") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("for") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("func") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("guard") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("if") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("import") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("in") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("interrupt") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("let") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("llvm") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("no") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("not") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("opaque") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("option") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("panic") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("primitive") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("public") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("registers") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("required") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("safe") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("section") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("self") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("service") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("sizeof") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("startup") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("struct") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("staticArray") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("switch") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("sync") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("target") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("task") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("truncate") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("typealias") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("var") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("until") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("user") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("where") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("when") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("while") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("yes") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (":") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (".") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (",") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("{") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("}") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("(") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (")") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("_") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("==") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("≠") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("≤") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("≥") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("[") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("]") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("]!") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<<") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">>") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("~") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("||") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&&") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("->") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("..<") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("...") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("|") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("|=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("^") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("^=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("+") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("+%") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("+=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("+%=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("-") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("-%") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("-=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("-%=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("*") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("*%") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("*=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("*%=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("/") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!/") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("/=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!/=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!%") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!%=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<<=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">>=") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_omnibus_5F_lexique (GenericUniqueArray <String> & ioList) {
  ioList.appendObject ("omnibus_lexique:delimitorsList") ;
  ioList.appendObject ("omnibus_lexique:keyWordList") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_omnibus_5F_lexique (const String & inIdentifier,
                                                         bool & ioFound,
                                                         GenericUniqueArray <String> & ioList) {
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

static LexiqueIntrospection lexiqueIntrospection_omnibus_5F_lexique
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_import_5F_file_i0_ (GGS_lstringlist & ioArgument_ioImportedFileList,
                                                                           Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_import COMMA_SOURCE_FILE ("syntax-grammar.galgas", 10)) ;
  GGS_lstring var_importedFile_575 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("syntax-grammar.galgas", 11)) ;
  ioArgument_ioImportedFileList.addAssignOperation (var_importedFile_575  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 12)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_importedFile_575.readProperty_string ().getter_pathExtension (SOURCE_FILE ("syntax-grammar.galgas", 13)).objectCompare (GGS_string ("omnibus-import"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_importedFile_575.readProperty_location (), GGS_string ("the path extension should be .omnibus-import"), fixItArray1  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 14)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_start_5F_symbol_i1_ (GGS_ast & ioArgument_ioAST,
                                                                            GGS_lstringlist & outArgument_outImportedFileList,
                                                                            GGS_location & outArgument_outEndOfSourceFile,
                                                                            Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outImportedFileList.drop () ; // Release 'out' argument
  outArgument_outEndOfSourceFile.drop () ; // Release 'out' argument
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("syntax-grammar.galgas", 25)) ;
  outArgument_outImportedFileList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_0 (inCompiler)) {
    case 2: {
      nt_declaration_ (ioArgument_ioAST, inCompiler) ;
    } break ;
    case 3: {
      nt_system_5F_routine_5F_declaration_ (ioArgument_ioAST, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("syntax-grammar.galgas", 30)), inCompiler) ;
    } break ;
    case 4: {
      nt_import_5F_file_ (outArgument_outImportedFileList, inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  outArgument_outEndOfSourceFile = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("syntax-grammar.galgas", 34)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i2_ (GGS_ast & ioArgument_ioAST,
                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_typealias COMMA_SOURCE_FILE ("type-alias.galgas", 25)) ;
  GGS_lstring var_newTypeName_1252 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-alias.galgas", 27)) ;
  GGS_lstring var_typeName_1307 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1307, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_typeAliasDeclarationAST::init_21__21_ (var_newTypeName_1252, var_typeName_1307, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-alias.galgas", 29)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i3_ (GGS_ast & /* ioArgument_ioAST */,
                                                                               GGS_lstring & outArgument_outTypeName,
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i4_ (GGS_ast & ioArgument_ioAST,
                                                                               GGS_lstring & outArgument_outTypeName,
                                                                               Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 21)) ;
  GGS_expressionAST var_sizeExpression_1140 ;
  nt_expression_ (ioArgument_ioAST, var_sizeExpression_1140, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 23)) ;
  GGS_lstring var_elementTypeName_1198 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_elementTypeName_1198, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 25)) ;
  GGS_location var_sizeExpressionLocation_1230 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 26)) ;
  outArgument_outTypeName = GGS_string ("anonymous.").add_operation (ioArgument_ioAST.readProperty_mTypeDeclarationIndex ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 27)).getter_here (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 27)) ;
  ioArgument_ioAST.mProperty_mTypeDeclarationIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 28)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_fixedSizeArrayTypeDeclarationAST::init_21__21__21__21_ (outArgument_outTypeName, var_elementTypeName_1198, var_sizeExpression_1140, var_sizeExpressionLocation_1230, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 29)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i5_ (GGS_ast & ioArgument_ioAST,
                                                                               GGS_lstring & outArgument_outTypeName,
                                                                               Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 19)) ;
  GGS_lstring var_elementTypeName_1054 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_elementTypeName_1054, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 21)) ;
  outArgument_outTypeName = GGS_string ("anonymous.").add_operation (ioArgument_ioAST.readProperty_mTypeDeclarationIndex ().getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 22)).getter_here (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 22)) ;
  ioArgument_ioAST.mProperty_mTypeDeclarationIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 23)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_typeDynamicArrayDeclarationAST::init_21__21_ (outArgument_outTypeName, var_elementTypeName_1054, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 24)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i6_ (GGS_ast & ioArgument_ioAST,
                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 26)) ;
  GGS_lstring var_enumerationName_1248 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 28)) ;
  GGS_enumerationConstantList temp_0 = GGS_enumerationConstantList::init (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 29)) ;
  GGS_enumerationConstantList var_enumCaseList_1305 = temp_0 ;
  GGS_bigint var_idx_1332 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 30)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_case COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 32)) ;
    GGS_lstring var_constantName_1388 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 33)) ;
    var_enumCaseList_1305.addAssignOperation (var_constantName_1388, var_idx_1332  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 34)) ;
    var_idx_1332 = var_idx_1332.add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 35)) ;
    if (select_omnibus_5F_syntax_1 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 38)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_enumerationDeclarationAST::init_21__21_ (var_enumerationName_1248, var_enumCaseList_1305, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 39)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i7_ (GGS_ast & ioArgument_ioAST,
                                                                                                                         GGS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_propertyVisibility var_visibility_2624 ;
  switch (select_omnibus_5F_syntax_2 (inCompiler)) {
  case 1: {
    var_visibility_2624 = GGS_propertyVisibility::class_func_isPrivate (SOURCE_FILE ("type-structure-declaration.galgas", 57)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 59)) ;
    var_visibility_2624 = GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-structure-declaration.galgas", 60)) ;
  } break ;
  default:
    break ;
  }
  nt_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_visibility_2624, ioArgument_ioPropertyListAST, inCompiler) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_private_5F_struct_5F_property_5F_declaration_i8_ (GGS_ast & ioArgument_ioAST,
                                                                                                         GGS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  nt_struct_5F_property_5F_declaration_ (ioArgument_ioAST, GGS_propertyVisibility::class_func_isPrivate (SOURCE_FILE ("type-structure-declaration.galgas", 71)), ioArgument_ioPropertyListAST, inCompiler) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i9_ (GGS_ast & ioArgument_ioAST,
                                                                                              const GGS_propertyVisibility constinArgument_inVisibility,
                                                                                              GGS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                              Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 81)) ;
  GGS_lstring var_propertyName_3437 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 82)) ;
  GGS_lstring var_typeName_3467 ;
  switch (select_omnibus_5F_syntax_3 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_3467, inCompiler) ;
  } break ;
  case 2: {
    var_typeName_3467 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 87)) ;
  } break ;
  default:
    break ;
  }
  switch (select_omnibus_5F_syntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 90)) ;
    GGS_expressionAST var_initExpression_3627 ;
    nt_expression_ (ioArgument_ioAST, var_initExpression_3627, inCompiler) ;
    GGS_propertyAttributeList temp_0 = GGS_propertyAttributeList::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 94)) ;
    ioArgument_ioPropertyListAST.addAssignOperation (var_propertyName_3437, temp_0, constinArgument_inVisibility, var_typeName_3467, GGS_propertyKindAST::class_func_initializedConstantProperty (var_initExpression_3627  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 97))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 92)) ;
  } break ;
  case 2: {
    GGS_propertyAttributeList temp_1 = GGS_propertyAttributeList::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 101)) ;
    ioArgument_ioPropertyListAST.addAssignOperation (var_propertyName_3437, temp_1, constinArgument_inVisibility, var_typeName_3467, GGS_propertyKindAST::class_func_uninitializedConstantProperty (SOURCE_FILE ("type-structure-declaration.galgas", 104))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 99)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i10_ (GGS_ast & ioArgument_ioAST,
                                                                                               const GGS_propertyVisibility constinArgument_inVisibility,
                                                                                               GGS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                               Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 115)) ;
  GGS_lstring var_propertyName_4282 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 116)) ;
  GGS_propertyAttributeList temp_0 = GGS_propertyAttributeList::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 117)) ;
  GGS_propertyAttributeList var_propertyAttributeList_4326 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_5 (inCompiler) == 2) {
      GGS_lstring var_attribute_4399 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 120)) ;
      GGS_lbigint var_value_4430 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 121)) ;
      var_propertyAttributeList_4326.addAssignOperation (var_attribute_4399, var_value_4430  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 122)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  switch (select_omnibus_5F_syntax_6 (inCompiler)) {
  case 1: {
    GGS_lstring var_typeName_4542 ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_4542, inCompiler) ;
    switch (select_omnibus_5F_syntax_7 (inCompiler)) {
    case 1: {
      GGS_propertyAttributeList temp_2 = GGS_propertyAttributeList::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 127)) ;
      ioArgument_ioPropertyListAST.addAssignOperation (var_propertyName_4282, temp_2, constinArgument_inVisibility, var_typeName_4542, GGS_propertyKindAST::class_func_uninitializedStoredProperty (SOURCE_FILE ("type-structure-declaration.galgas", 127))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 127)) ;
    } break ;
    case 2: {
      nt_propertyGetterSetter_ (ioArgument_ioAST, constinArgument_inVisibility, var_propertyName_4282, var_propertyAttributeList_4326, var_typeName_4542, ioArgument_ioPropertyListAST, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 137)) ;
      GGS_expressionAST var_initExpression_4904 ;
      nt_expression_ (ioArgument_ioAST, var_initExpression_4904, inCompiler) ;
      ioArgument_ioPropertyListAST.addAssignOperation (var_propertyName_4282, var_propertyAttributeList_4326, constinArgument_inVisibility, var_typeName_4542, GGS_propertyKindAST::class_func_initializedStoredProperty (var_initExpression_4904  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 144))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 139)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 147)) ;
    GGS_expressionAST var_initExpression_5179 ;
    nt_expression_ (ioArgument_ioAST, var_initExpression_5179, inCompiler) ;
    ioArgument_ioPropertyListAST.addAssignOperation (var_propertyName_4282, var_propertyAttributeList_4326, constinArgument_inVisibility, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 153)), GGS_propertyKindAST::class_func_initializedStoredProperty (var_initExpression_5179  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 154))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 149)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_propertyGetterSetter_i11_ (GGS_ast & ioArgument_ioAST,
                                                                                  const GGS_propertyVisibility constinArgument_inVisibility,
                                                                                  const GGS_lstring constinArgument_inPropertyName,
                                                                                  const GGS_propertyAttributeList constinArgument_inPropertyAttributeList,
                                                                                  const GGS_lstring constinArgument_inTypeName,
                                                                                  GGS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                  Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 168)) ;
  switch (select_omnibus_5F_syntax_8 (inCompiler)) {
  case 1: {
    GGS_bool var_getterDefined_5813 = GGS_bool (false) ;
    GGS_bool var_setterDefined_5845 = GGS_bool (false) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_getterOrSetter_5906 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 173)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 174)) ;
      GGS_instructionListAST var_instructionList_5972 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_5972, inCompiler) ;
      GGS_location var_endOfInstructionList_6000 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 176)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 177)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_getterOrSetter_5906.readProperty_string ().objectCompare (GGS_string ("get"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          ioArgument_ioPropertyListAST.addAssignOperation (constinArgument_inPropertyName, constinArgument_inPropertyAttributeList, constinArgument_inVisibility, constinArgument_inTypeName, GGS_propertyKindAST::class_func_readOnlyComputedProperty (var_instructionList_5972, var_endOfInstructionList_6000  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 184))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 179)) ;
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = var_getterDefined_5813.boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              GenericArray <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (var_getterOrSetter_5906.readProperty_location (), GGS_string ("duplicate getter definition"), fixItArray3  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 189)) ;
            }
          }
          var_getterDefined_5813 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::equal, var_getterOrSetter_5906.readProperty_string ().objectCompare (GGS_string ("set"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            ioArgument_ioPropertyListAST.addAssignOperation (constinArgument_inPropertyName, constinArgument_inPropertyAttributeList, constinArgument_inVisibility, constinArgument_inTypeName, GGS_propertyKindAST::class_func_writeComputedProperty (var_instructionList_5972, var_endOfInstructionList_6000  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 198))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 193)) ;
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = var_setterDefined_5845.boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                GenericArray <FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (var_getterOrSetter_5906.readProperty_location (), GGS_string ("duplicate setter definition"), fixItArray6  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 203)) ;
              }
            }
            var_setterDefined_5845 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_4) {
          GenericArray <FixItDescription> fixItArray7 ;
          fixItArray7.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          appendFixItActions (fixItArray7, EnumFixItKind::fixItReplace, GGS_string ("@set")) ;
          appendFixItActions (fixItArray7, EnumFixItKind::fixItReplace, GGS_string ("@get")) ;
          inCompiler->emitSemanticError (var_getterOrSetter_5906.readProperty_location (), GGS_string ("invalid attribute"), fixItArray7  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 207)) ;
        }
      }
      if (select_omnibus_5F_syntax_9 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      GGS_bool test_9 = var_setterDefined_5845 ;
      if (GalgasBool::boolTrue == test_9.boolEnum ()) {
        test_9 = var_getterDefined_5813.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 211)) ;
      }
      test_8 = test_9.boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 212)), GGS_string ("a getter should be defined"), fixItArray10  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 212)) ;
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        GGS_bool test_12 = var_setterDefined_5845.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 213)) ;
        if (GalgasBool::boolTrue == test_12.boolEnum ()) {
          test_12 = var_getterDefined_5813.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 213)) ;
        }
        test_11 = test_12.boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 214)), GGS_string ("a getter should be defined, and optionaly a setter"), fixItArray13  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 214)) ;
        }
      }
    }
  } break ;
  case 2: {
    GGS_instructionListAST var_readInstructionList_7488 ;
    nt_instructionList_ (ioArgument_ioAST, var_readInstructionList_7488, inCompiler) ;
    GGS_location var_endOfReadInstructionList_7518 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 218)) ;
    ioArgument_ioPropertyListAST.addAssignOperation (constinArgument_inPropertyName, constinArgument_inPropertyAttributeList, constinArgument_inVisibility, constinArgument_inTypeName, GGS_propertyKindAST::class_func_readOnlyComputedProperty (var_readInstructionList_7488, var_endOfReadInstructionList_7518  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 224))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 219)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i12_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 235)) ;
  GGS_lstring var_structureName_8051 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 236)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 237)) ;
  GGS_lstringlist var_attributeList_8086 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_10 (inCompiler) == 2) {
      GGS_lstring var_attribute_8151 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 240)) ;
      var_attributeList_8086.addAssignOperation (var_attribute_8151  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 241)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 243)) ;
  GGS_structurePropertyListAST temp_2 = GGS_structurePropertyListAST::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 244)) ;
  GGS_structurePropertyListAST var_fieldList_8246 = temp_2 ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    switch (select_omnibus_5F_syntax_11 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_fieldList_8246, inCompiler) ;
    } break ;
    case 3: {
      nt_function_5F_declaration_ (ioArgument_ioAST, var_structureName_8051, inCompiler) ;
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 251)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_structureDeclarationAST::init_21__21__21__21__21__21__21_ (var_structureName_8051, var_structureName_8051, var_structureName_8051, var_attributeList_8086, GGS_bool (true), var_fieldList_8246, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 252)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i13_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 19)) ;
  GGS_lstring var_structureName_1022 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 20)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 21)) ;
  GGS_structurePropertyListAST var_fieldList_1078 = GGS_structurePropertyListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_12 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_fieldList_1078, inCompiler) ;
    } break ;
    case 3: {
      nt_function_5F_declaration_ (ioArgument_ioAST, var_structureName_1022, inCompiler) ;
    } break ;
    case 4: {
      nt_system_5F_routine_5F_declaration_ (ioArgument_ioAST, var_structureName_1022, inCompiler) ;
    } break ;
    case 5: {
      nt_guard_ (ioArgument_ioAST, var_structureName_1022, var_structureName_1022.readProperty_string (), inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 33)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_syncDeclarationAST::init_21__21_ (var_structureName_1022, var_fieldList_1078, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 34)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i14_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_opaque COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 21)) ;
  GGS_lstring var_opaqueTypeName_1097 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 22)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 23)) ;
  GGS_lstringlist var_attributeList_1133 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_13 (inCompiler) == 2) {
      GGS_lstring var_attribute_1198 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 26)) ;
      var_attributeList_1133.addAssignOperation (var_attribute_1198  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 27)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 29)) ;
  GGS_expressionAST var_sizeExpression_1288 ;
  nt_expression_ (ioArgument_ioAST, var_sizeExpression_1288, inCompiler) ;
  GGS_location var_sizeExpressionLocation_1311 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 32)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_typeOpaqueDeclarationAST::init_21__21__21__21_ (var_opaqueTypeName_1097, var_sizeExpression_1288, var_sizeExpressionLocation_1311, var_attributeList_1133, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 33)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i15_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 84)) ;
  GGS_registerGroupListAST temp_0 = GGS_registerGroupListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 85)) ;
  GGS_registerGroupListAST var_registerGroupListAST_3719 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_registerGroupName_3777 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("declaration-control-register.galgas", 87)) ;
    switch (select_omnibus_5F_syntax_15 (inCompiler)) {
    case 1: {
      GGS_lstring var_attribute_3834 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 89)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_attribute_3834.readProperty_string ().objectCompare (GGS_string ("at"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_attribute_3834.readProperty_location (), GGS_string ("attribute should be @at"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 91)) ;
        }
      }
      GGS_lbigint var_registerGroupBaseAddress_3983 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 93)) ;
      GGS_controlRegisterGroupKindAST var_groupKind_4020 = GGS_controlRegisterGroupKindAST::class_func_single (var_registerGroupBaseAddress_3983  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 94)) ;
      var_registerGroupListAST_3719.addAssignOperation (var_registerGroupName_3777, var_groupKind_4020  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 95)) ;
    } break ;
    case 2: {
      GGS_lbigintlist temp_4 = GGS_lbigintlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 97)) ;
      GGS_lbigintlist var_groupBaseAddresses_4217 = temp_4 ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 98)) ;
      GGS_expressionAST var_groupSize_4288 ;
      nt_expression_ (ioArgument_ioAST, var_groupSize_4288, inCompiler) ;
      GGS_location var_groupSizeExpressionLocation_4310 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 100)) ;
      GGS_lstring var_attribute_4381 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 101)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::notEqual, var_attribute_4381.readProperty_string ().objectCompare (GGS_string ("at"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (var_attribute_4381.readProperty_location (), GGS_string ("attribute should be @at"), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 103)) ;
        }
      }
      bool repeatFlag_7 = true ;
      while (repeatFlag_7) {
        GGS_lbigint var_baseAddress_4547 = inCompiler->synthetizedAttribute_bigInteger () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 106)) ;
        var_groupBaseAddresses_4217.addAssignOperation (var_baseAddress_4547  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 107)) ;
        if (select_omnibus_5F_syntax_16 (inCompiler) == 2) {
        }else{
          repeatFlag_7 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 111)) ;
      GGS_controlRegisterGroupKindAST var_groupKind_4669 = GGS_controlRegisterGroupKindAST::class_func_groupArray (var_groupSize_4288, var_groupSizeExpressionLocation_4310, var_groupBaseAddresses_4217  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 112)) ;
      var_registerGroupListAST_3719.addAssignOperation (var_registerGroupName_3777, var_groupKind_4669  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 117)) ;
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
  GGS_controlRegisterDeclarationList temp_8 = GGS_controlRegisterDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 123)) ;
  GGS_controlRegisterDeclarationList var_controlRegisterDeclarationList_5023 = temp_8 ;
  bool repeatFlag_9 = true ;
  while (repeatFlag_9) {
    GGS_controlRegisterNameListAST temp_10 = GGS_controlRegisterNameListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 125)) ;
    GGS_controlRegisterNameListAST var_registerDeclarationList_5109 = temp_10 ;
    bool repeatFlag_11 = true ;
    while (repeatFlag_11) {
      nt_registerDeclaration_ (ioArgument_ioAST, var_registerDeclarationList_5109, inCompiler) ;
      if (select_omnibus_5F_syntax_18 (inCompiler) == 2) {
      }else{
        repeatFlag_11 = false ;
      }
    }
    GGS_lstring var_registerTypeName_5271 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("declaration-control-register.galgas", 131)) ;
    GGS_controlRegisterBitSliceList temp_12 = GGS_controlRegisterBitSliceList::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 132)) ;
    GGS_controlRegisterBitSliceList var_registerBitSliceList_5327 = temp_12 ;
    switch (select_omnibus_5F_syntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 135)) ;
      bool repeatFlag_13 = true ;
      while (repeatFlag_13) {
        GGS_controlRegisterBitSlice var_registerBitSlice_5442 ;
        switch (select_omnibus_5F_syntax_21 (inCompiler)) {
        case 1: {
          GGS_lbigint var_unusedBitCount_5512 = inCompiler->synthetizedAttribute_bigInteger () ;
          inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 139)) ;
          var_registerBitSlice_5442 = GGS_controlRegisterBitSlice::class_func_unusedBits (var_unusedBitCount_5512  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 140)) ;
        } break ;
        case 2: {
          GGS_lstring var_bitName_5637 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 142)) ;
          switch (select_omnibus_5F_syntax_22 (inCompiler)) {
          case 1: {
            var_registerBitSlice_5442 = GGS_controlRegisterBitSlice::class_func_namedBit (var_bitName_5637, GGS_lbigint::init_21__21_ (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 144)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 144)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 144)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 146)) ;
            GGS_lbigint var_bitCount_5815 = inCompiler->synthetizedAttribute_bigInteger () ;
            inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas", 147)) ;
            var_registerBitSlice_5442 = GGS_controlRegisterBitSlice::class_func_namedBit (var_bitName_5637, var_bitCount_5815  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 148)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          break ;
        }
        var_registerBitSliceList_5327.addAssignOperation (var_registerBitSlice_5442  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 151)) ;
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
    GGS_location var_endOfBitSlice_6054 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 157)) ;
    var_controlRegisterDeclarationList_5023.addAssignOperation (var_registerDeclarationList_5109, var_registerTypeName_5271, var_registerBitSliceList_5327, var_endOfBitSlice_6054  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 158)) ;
    if (select_omnibus_5F_syntax_17 (inCompiler) == 2) {
    }else{
      repeatFlag_9 = false ;
    }
  }
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_controlRegisterGroupDeclarationAST::init_21__21_ (var_registerGroupListAST_3719, var_controlRegisterDeclarationList_5023, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 161)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_registerDeclaration_i16_ (GGS_ast & ioArgument_ioAST,
                                                                                 GGS_controlRegisterNameListAST & ioArgument_ioRegisterDeclarationList,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_lstring var_registerName_6772 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 173)) ;
  switch (select_omnibus_5F_syntax_23 (inCompiler)) {
  case 1: {
    GGS_lstring var_attributeOffset_6820 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 175)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, var_attributeOffset_6820.readProperty_string ().objectCompare (GGS_string ("offset"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("@offset")) ;
        inCompiler->emitSemanticError (var_attributeOffset_6820.readProperty_location (), GGS_string ("attribute should be @offset"), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 177)) ;
      }
    }
    GGS_expressionAST var_registerOffset_7017 ;
    nt_expression_ (ioArgument_ioAST, var_registerOffset_7017, inCompiler) ;
    GGS_bool var_isReadOnly_7048 ;
    switch (select_omnibus_5F_syntax_24 (inCompiler)) {
    case 1: {
      var_isReadOnly_7048 = GGS_bool (false) ;
    } break ;
    case 2: {
      GGS_lstring var_attribute_7134 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 184)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_attribute_7134.readProperty_string ().objectCompare (GGS_string ("ro"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          appendFixItActions (fixItArray3, EnumFixItKind::fixItReplace, GGS_string ("@ro")) ;
          inCompiler->emitSemanticError (var_attribute_7134.readProperty_location (), GGS_string ("attribute should be @ro"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 186)) ;
        }
      }
      var_isReadOnly_7048 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    ioArgument_ioRegisterDeclarationList.addAssignOperation (var_registerName_6772, GGS_controlRegisterKind::class_func_scalar (SOURCE_FILE ("declaration-control-register.galgas", 192)), var_isReadOnly_7048, var_registerOffset_7017, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 195))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 190)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 197)) ;
    GGS_expressionAST var_sizeExpression_7494 ;
    nt_expression_ (ioArgument_ioAST, var_sizeExpression_7494, inCompiler) ;
    GGS_location var_sizeExpressionLocation_7519 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 199)) ;
    GGS_lstring var_attributeOffset_7583 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 200)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, var_attributeOffset_7583.readProperty_string ().objectCompare (GGS_string ("offset"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        appendFixItActions (fixItArray5, EnumFixItKind::fixItReplace, GGS_string ("@offset")) ;
        inCompiler->emitSemanticError (var_attributeOffset_7583.readProperty_location (), GGS_string ("attribute should be @offset"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 202)) ;
      }
    }
    GGS_expressionAST var_baseAddressExpression_7780 ;
    nt_expression_ (ioArgument_ioAST, var_baseAddressExpression_7780, inCompiler) ;
    GGS_location var_baseAddressExpressionLocation_7812 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 205)) ;
    GGS_lstring var_attributeInc_7883 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 206)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::notEqual, var_attributeInc_7883.readProperty_string ().objectCompare (GGS_string ("inc"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GenericArray <FixItDescription> fixItArray7 ;
        appendFixItActions (fixItArray7, EnumFixItKind::fixItReplace, GGS_string ("@inc")) ;
        inCompiler->emitSemanticError (var_attributeInc_7883.readProperty_location (), GGS_string ("attribute should be @inc"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 208)) ;
      }
    }
    GGS_expressionAST var_arrayElementSizeExpression_8062 ;
    nt_expression_ (ioArgument_ioAST, var_arrayElementSizeExpression_8062, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 211)) ;
    GGS_bool var_isReadOnly_8115 ;
    switch (select_omnibus_5F_syntax_25 (inCompiler)) {
    case 1: {
      var_isReadOnly_8115 = GGS_bool (false) ;
    } break ;
    case 2: {
      GGS_lstring var_attribute_8201 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 216)) ;
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = GGS_bool (ComparisonKind::notEqual, var_attribute_8201.readProperty_string ().objectCompare (GGS_string ("ro"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, EnumFixItKind::fixItReplace, GGS_string ("@ro")) ;
          inCompiler->emitSemanticError (var_attribute_8201.readProperty_location (), GGS_string ("attribute should be @ro"), fixItArray9  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 218)) ;
        }
      }
      var_isReadOnly_8115 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_arrayElementSizeExpressionLocation_8388 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 222)) ;
    ioArgument_ioRegisterDeclarationList.addAssignOperation (var_registerName_6772, GGS_controlRegisterKind::class_func_registerArray (var_sizeExpression_7494, var_sizeExpressionLocation_7519, var_arrayElementSizeExpression_8062, var_arrayElementSizeExpressionLocation_8388  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 225)), var_isReadOnly_8115, var_baseAddressExpression_7780, var_baseAddressExpressionLocation_7812  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 223)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i17_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas", 242)) ;
  GGS_lstring var_attribute_9218 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas", 243)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_attribute_9218.readProperty_string ().objectCompare (function_userAttributeForRegister (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 244)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_attribute_9218.readProperty_location (), GGS_string ("this attribute should be @").add_operation (function_userAttributeForRegister (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 245)), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 245)) ;
    }
  }
  GGS_lstring var_registerGroupName_9401 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 247)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-control-register.galgas", 248)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GGS_lstring var_registerName_9462 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas", 250)) ;
    GGS_lstring var_key_9485 = GGS_lstring::init_21__21_ (GGS_string ("#").add_operation (var_registerGroupName_9401.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 251)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 251)).add_operation (var_registerName_9462.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 251)), var_registerName_9462.readProperty_location (), inCompiler COMMA_HERE) ;
    {
    ioArgument_ioAST.mProperty_mControlRegisterUserAccesMapAST.setter_insertKey (var_key_9485, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 252)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i18_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 27)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 28)) ;
  GGS_lstringlist var_attributeList_1379 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_27 (inCompiler) == 2) {
      GGS_lstring var_attribute_1444 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 31)) ;
      var_attributeList_1379.addAssignOperation (var_attribute_1444  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 32)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_lstring var_constantName_1518 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 34)) ;
  GGS_lstring var_typeName_1548 ;
  switch (select_omnibus_5F_syntax_28 (inCompiler)) {
  case 1: {
    var_typeName_1548 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-constant.galgas", 37)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1548, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 41)) ;
  GGS_expressionAST var_expression_1708 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1708, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_globalConstantDeclarationAST::init_21__21__21__21_ (var_constantName_1518, var_attributeList_1379, var_typeName_1548, var_expression_1708, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 43)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i19_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 20)) ;
  GGS_lstring var_syncInstanceName_1057 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 21)) ;
  GGS_lstring var_syncTypeName_1091 ;
  switch (select_omnibus_5F_syntax_29 (inCompiler)) {
  case 1: {
    var_syncTypeName_1091 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 24)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_syncTypeName_1091, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 28)) ;
  GGS_expressionAST var_expression_1260 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1260, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_syncToolInstanceDeclarationAST::init_21__21__21_ (var_syncTypeName_1091, var_syncInstanceName_1057, var_expression_1260, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 30)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i20_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 64)) ;
  GGS_lstring var_driverName_2641 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 65)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 66)) ;
  GGS_lstringlist var_driverDependenceList_2673 = temp_0 ;
  switch (select_omnibus_5F_syntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 69)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_dependenceName_2767 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 71)) ;
      var_driverDependenceList_2673.addAssignOperation (var_dependenceName_2767  COMMA_SOURCE_FILE ("declaration-driver.galgas", 72)) ;
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
  GGS_structurePropertyListAST temp_2 = GGS_structurePropertyListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 78)) ;
  GGS_structurePropertyListAST var_propertyListAST_2921 = temp_2 ;
  GGS_bool var_bootHandled_2951 = GGS_bool (false) ;
  GGS_location var_bootLocation_2979 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 80)) ;
  GGS_instructionListAST temp_3 = GGS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 81)) ;
  GGS_instructionListAST var_bootInstructionList_3037 = temp_3 ;
  GGS_location var_bootEndLocation_3071 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 82)) ;
  GGS_bool var_startupHandled_3112 = GGS_bool (false) ;
  GGS_location var_startupLocation_3143 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 84)) ;
  GGS_instructionListAST temp_4 = GGS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 85)) ;
  GGS_instructionListAST var_startupInstructionList_3204 = temp_4 ;
  GGS_location var_startupEndLocation_3241 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 86)) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_omnibus_5F_syntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-driver.galgas", 89)) ;
      var_bootLocation_2979 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 90)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 91)) ;
      nt_instructionList_ (ioArgument_ioAST, var_bootInstructionList_3037, inCompiler) ;
      var_bootEndLocation_3071 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 93)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 94)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_bootHandled_2951.boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_bootLocation_2979, GGS_string ("a driver supports at most one boot routine"), fixItArray7  COMMA_SOURCE_FILE ("declaration-driver.galgas", 96)) ;
        }
      }
      var_bootHandled_2951 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-driver.galgas", 100)) ;
      var_startupLocation_3143 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 101)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 102)) ;
      nt_instructionList_ (ioArgument_ioAST, var_startupInstructionList_3204, inCompiler) ;
      var_startupEndLocation_3241 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 104)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 105)) ;
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = var_startupHandled_3112.boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_startupLocation_3143, GGS_string ("a driver supports at most one startup routine"), fixItArray9  COMMA_SOURCE_FILE ("declaration-driver.galgas", 107)) ;
        }
      }
      var_startupHandled_3112 = GGS_bool (true) ;
    } break ;
    case 4: {
      nt_isr_5F_in_5F_driver_ (ioArgument_ioAST, var_driverName_2641, inCompiler) ;
    } break ;
    case 5: {
      nt_struct_5F_property_5F_declaration_ (ioArgument_ioAST, GGS_propertyVisibility::class_func_isPrivate (SOURCE_FILE ("declaration-driver.galgas", 113)), var_propertyListAST_2921, inCompiler) ;
    } break ;
    case 6: {
      nt_function_5F_declaration_ (ioArgument_ioAST, function_omnibusTypeSpecificNameForDriver (var_driverName_2641, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 115)), inCompiler) ;
    } break ;
    case 7: {
      nt_system_5F_routine_5F_declaration_ (ioArgument_ioAST, function_omnibusTypeSpecificNameForDriver (var_driverName_2641, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 117)), inCompiler) ;
    } break ;
    case 8: {
      nt_guard_ (ioArgument_ioAST, function_omnibusTypeSpecificNameForDriver (var_driverName_2641, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 121)), function_llvmDriverNameFromName (var_driverName_2641, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 122)).readProperty_string (), inCompiler) ;
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 124)) ;
  ioArgument_ioAST.mProperty_mDriverDeclarationListAST.addAssignOperation (GGS_driverDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (var_driverName_2641, var_driverDependenceList_2673, var_propertyListAST_2921, var_bootLocation_2979, var_bootInstructionList_3037, var_bootEndLocation_3071, var_startupLocation_3143, var_startupInstructionList_3204, var_startupEndLocation_3241, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 126)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i21_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas", 142)) ;
  GGS_lstring var_driverName_4993 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas", 143)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 144)) ;
  GGS_driverInstanciationArgumentListAST temp_0 = GGS_driverInstanciationArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 145)) ;
  GGS_driverInstanciationArgumentListAST var_driverInstanciationArgumentList_5056 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_33 (inCompiler) == 2) {
      GGS_lstring var_selector_5139 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 148)) ;
      GGS_expressionAST var_expression_5180 ;
      nt_expression_ (ioArgument_ioAST, var_expression_5180, inCompiler) ;
      var_driverInstanciationArgumentList_5056.addAssignOperation (var_selector_5139, var_expression_5180  COMMA_SOURCE_FILE ("declaration-driver.galgas", 150)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-driver.galgas", 152)) ;
  ioArgument_ioAST.mProperty_mRequiredDriverListAST.addAssignOperation (var_driverName_4993, var_driverInstanciationArgumentList_5056  COMMA_SOURCE_FILE ("declaration-driver.galgas", 153)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i22_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas", 62)) ;
  GGS_lstring var_staticListName_2742 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 63)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 64)) ;
  GGS_staticListPropertyListAST temp_0 = GGS_staticListPropertyListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 65)) ;
  GGS_staticListPropertyListAST var_propertyList_2800 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_staticArrayProperty_ (ioArgument_ioAST, var_propertyList_2800, inCompiler) ;
    if (select_omnibus_5F_syntax_34 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 70)) ;
  GGS_staticListValueListAST temp_2 = GGS_staticListValueListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 71)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_staticListAST::init_21__21__21_ (var_staticListName_2742, var_propertyList_2800, temp_2, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 71)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_staticArrayProperty_i23_ (GGS_ast & ioArgument_ioAST,
                                                                                 GGS_staticListPropertyListAST & ioArgument_ioPropertyList,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-static-list.galgas", 77)) ;
  GGS_lstring var_propertyName_3239 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 78)) ;
  switch (select_omnibus_5F_syntax_35 (inCompiler)) {
  case 1: {
    GGS_lstring var_typeName_3300 ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_3300, inCompiler) ;
    ioArgument_ioPropertyList.addAssignOperation (var_propertyName_3239, GGS_staticListPropertyTypeAST::class_func_valueType (var_typeName_3300  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 81))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 81)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas", 83)) ;
    GGS_mode var_mode_3413 ;
    nt_mode_ (var_mode_3413, inCompiler) ;
    GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 85)) ;
    GGS_lstringlist var_attributeList_3441 = temp_0 ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_omnibus_5F_syntax_36 (inCompiler) == 2) {
        GGS_lstring var_attribute_3512 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-static-list.galgas", 88)) ;
        var_attributeList_3441.addAssignOperation (var_attribute_3512  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 89)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    GGS_routineFormalArgumentListAST var_formalArgs_3616 ;
    nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgs_3616, inCompiler) ;
    GGS_lstring var_returnType_3646 ;
    switch (select_omnibus_5F_syntax_37 (inCompiler)) {
    case 1: {
      var_returnType_3646 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 94)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 96)) ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_returnType_3646, inCompiler) ;
    } break ;
    default:
      break ;
    }
    ioArgument_ioPropertyList.addAssignOperation (var_propertyName_3239, GGS_staticListPropertyTypeAST::class_func_function (var_mode_3413, var_formalArgs_3616, var_returnType_3646  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 99))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 99)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i24_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("declaration-static-list.galgas", 108)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas", 109)) ;
  GGS_lstring var_staticListName_4253 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 110)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 111)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_extendStaticListElementAST temp_1 = GGS_extendStaticListElementAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 113)) ;
    GGS_extendStaticListElementAST var_expressions_4325 = temp_1 ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      GGS_lstring var_selector_4382 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-static-list.galgas", 115)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::notEqual, var_selector_4382.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_selector_4382.readProperty_location (), GGS_string ("selector should be empty"), fixItArray4  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 117)) ;
        }
      }
      nt_staticArray_5F_exp_ (ioArgument_ioAST, var_expressions_4325, inCompiler) ;
      if (select_omnibus_5F_syntax_39 (inCompiler) == 2) {
      }else{
        repeatFlag_2 = false ;
      }
    }
    GGS_staticListValueListAST temp_5 = GGS_staticListValueListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 122)) ;
    GGS_staticListValueListAST var_expressionList_4599 = temp_5 ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = ioArgument_ioAST.readProperty_mExtendStaticArrayDeclarationAST ().getter_hasKey (var_staticListName_4253.readProperty_string () COMMA_SOURCE_FILE ("declaration-static-list.galgas", 123)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        ioArgument_ioAST.readProperty_mExtendStaticArrayDeclarationAST ().method_searchKey (var_staticListName_4253.readProperty_string (), var_expressionList_4599, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 124)) ;
      }
    }
    var_expressionList_4599.addAssignOperation (var_expressions_4325, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 126))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 126)) ;
    ioArgument_ioAST.mProperty_mExtendStaticArrayDeclarationAST.addAssignOperation (var_staticListName_4253.readProperty_string (), var_expressionList_4599, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 127)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_staticArray_5F_exp_i25_ (GGS_ast & ioArgument_ioAST,
                                                                                GGS_extendStaticListElementAST & ioArgument_ioExpressions,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_40 (inCompiler)) {
  case 1: {
    GGS_expressionAST var_exp_5213 ;
    nt_expression_ (ioArgument_ioAST, var_exp_5213, inCompiler) ;
    ioArgument_ioExpressions.addAssignOperation (GGS_extendStaticListExpressionAST::class_func_expression (var_exp_5213  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 139)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 139))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 139)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas", 141)) ;
    GGS_lstring var_functionName_5315 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas", 142)) ;
    GGS_routineFormalArgumentListAST var_formalArgs_5376 ;
    nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgs_5376, inCompiler) ;
    ioArgument_ioExpressions.addAssignOperation (GGS_extendStaticListExpressionAST::class_func_function (var_functionName_5315, var_formalArgs_5376  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 145)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 146))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 144)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i26_ (GGS_ast & /* ioArgument_ioAST */,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_option COMMA_SOURCE_FILE ("declaration-option.galgas", 10)) ;
  GGS_lstring var_constantName_554 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-option.galgas", 11)) ;
  GGS_stringlist temp_0 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-option.galgas", 12)) ;
  GGS_stringlist var_suggestionList_587 = temp_0 ;
  GGS_bool var_found_616 = GGS_bool (false) ;
  UpEnumerator__32_stringlist enumerator_646 (GGS_application::class_func_boolOptionNameList (SOURCE_FILE ("declaration-option.galgas", 14))) ;
  bool bool_1 = var_found_616.operator_not (SOURCE_FILE ("declaration-option.galgas", 14)).isValidAndTrue () ;
  if (enumerator_646.hasCurrentObject () && bool_1) {
    while (enumerator_646.hasCurrentObject () && bool_1) {
      GGS_string var_invocationString_722 = GGS_application::class_func_boolOptionInvocationString (enumerator_646.current_mValue_30_ (HERE), enumerator_646.current_mValue_31_ (HERE)  COMMA_SOURCE_FILE ("declaration-option.galgas", 15)) ;
      var_suggestionList_587.addAssignOperation (GGS_string ("\"").add_operation (var_invocationString_722, inCompiler COMMA_SOURCE_FILE ("declaration-option.galgas", 16)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("declaration-option.galgas", 16))  COMMA_SOURCE_FILE ("declaration-option.galgas", 16)) ;
      var_found_616 = GGS_bool (ComparisonKind::equal, var_invocationString_722.objectCompare (var_constantName_554.readProperty_string ())) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_found_616.boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          GGS_application::class_method_setBoolOptionValue (enumerator_646.current_mValue_30_ (HERE), enumerator_646.current_mValue_31_ (HERE), GGS_bool (true) COMMA_SOURCE_FILE ("declaration-option.galgas", 19)) ;
          }
        }
      }
      enumerator_646.gotoNextObject () ;
      if (enumerator_646.hasCurrentObject ()) {
        bool_1 = var_found_616.operator_not (SOURCE_FILE ("declaration-option.galgas", 14)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_found_616.operator_not (SOURCE_FILE ("declaration-option.galgas", 22)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GenericArray <FixItDescription> fixItArray4 ;
      appendFixItActions (fixItArray4, EnumFixItKind::fixItReplace, var_suggestionList_587) ;
      inCompiler->emitSemanticError (var_constantName_554.readProperty_location (), GGS_string ("unknown command line option"), fixItArray4  COMMA_SOURCE_FILE ("declaration-option.galgas", 23)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i27_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_task COMMA_SOURCE_FILE ("task-declaration.galgas", 33)) ;
  GGS_lstring var_taskName_1518 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 34)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 35)) ;
  GGS_lstringlist var_higherPriorityTaskList_1548 = temp_0 ;
  switch (select_omnibus_5F_syntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 38)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_aTaskName_1644 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 40)) ;
      var_higherPriorityTaskList_1548.addAssignOperation (var_aTaskName_1644  COMMA_SOURCE_FILE ("task-declaration.galgas", 41)) ;
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
  GGS_lstring var_stackSizeAttribute_1763 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 46)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_stackSizeAttribute_1763.readProperty_string ().objectCompare (GGS_string ("stacksize"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_stackSizeAttribute_1763.readProperty_location (), GGS_string ("this attribute should be @stacksize"), fixItArray3  COMMA_SOURCE_FILE ("task-declaration.galgas", 48)) ;
    }
  }
  GGS_lbigint var_stackSize_1942 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("task-declaration.galgas", 50)) ;
  GGS_bool var_autoStart_1988 = GGS_bool (false) ;
  switch (select_omnibus_5F_syntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GGS_lstring var_activateAttribute_2048 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas", 55)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, var_activateAttribute_2048.readProperty_string ().objectCompare (GGS_string ("autostart"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (var_activateAttribute_2048.readProperty_location (), GGS_string ("this attribute should be @autostart"), fixItArray5  COMMA_SOURCE_FILE ("task-declaration.galgas", 57)) ;
      }
    }
    var_autoStart_1988 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 61)) ;
  GGS_structurePropertyListAST temp_6 = GGS_structurePropertyListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 62)) ;
  GGS_structurePropertyListAST var_taskVarList_2275 = temp_6 ;
  GGS_taskSetupListAST temp_7 = GGS_taskSetupListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 63)) ;
  GGS_taskSetupListAST var_taskSetupList_2319 = temp_7 ;
  GGS_taskSetupListAST temp_8 = GGS_taskSetupListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 64)) ;
  GGS_taskSetupListAST var_taskActivateList_2365 = temp_8 ;
  GGS_taskSetupListAST temp_9 = GGS_taskSetupListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 65)) ;
  GGS_taskSetupListAST var_taskDeactivateList_2414 = temp_9 ;
  GGS_syncInstructionBranchListAST temp_10 = GGS_syncInstructionBranchListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 66)) ;
  GGS_syncInstructionBranchListAST var_branchList_2477 = temp_10 ;
  bool repeatFlag_11 = true ;
  while (repeatFlag_11) {
    switch (select_omnibus_5F_syntax_44 (inCompiler)) {
    case 2: {
      nt_private_5F_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_taskVarList_2275, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("task-declaration.galgas", 71)) ;
      GGS_lstring var_procName_2628 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas", 72)) ;
      GGS_routineFormalArgumentListAST var_formalArgumentList_2715 ;
      nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_2715, inCompiler) ;
      GGS_lstring var_returnTypeName_2753 ;
      switch (select_omnibus_5F_syntax_45 (inCompiler)) {
      case 1: {
        var_returnTypeName_2753 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 76)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas", 78)) ;
        nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_2753, inCompiler) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 81)) ;
      GGS_instructionListAST var_instructionList_2945 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_2945, inCompiler) ;
      GGS_lstringlist temp_12 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 88)) ;
      ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_functionDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (GGS_mode::class_func_userMode (SOURCE_FILE ("task-declaration.galgas", 84)), GGS_bool (false), var_taskName_1518, var_procName_2628, temp_12, var_formalArgumentList_2715, var_returnTypeName_2753, var_instructionList_2945, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 92)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 83)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 94)) ;
    } break ;
    case 4: {
      nt_task_5F_event_ (ioArgument_ioAST, var_taskName_1518, var_taskSetupList_2319, var_taskActivateList_2365, var_taskDeactivateList_2414, inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("task-declaration.galgas", 98)) ;
      GGS_guardedCommandAST var_guardedCommand_3445 ;
      nt_guarded_5F_command_ (ioArgument_ioAST, GGS_bool (false), var_guardedCommand_3445, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas", 100)) ;
      GGS_instructionListAST var_instructionList_3507 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_3507, inCompiler) ;
      GGS_location var_endOfInstructions_3533 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 102)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 103)) ;
      var_branchList_2477.addAssignOperation (var_guardedCommand_3445, var_instructionList_3507, var_endOfInstructions_3533  COMMA_SOURCE_FILE ("task-declaration.galgas", 104)) ;
    } break ;
    default:
      repeatFlag_11 = false ;
      break ;
    }
  }
  GGS_location var_endOfTask_3965 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 114)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas", 115)) ;
  ioArgument_ioAST.mProperty_mTaskListAST.addAssignOperation (var_taskName_1518, var_higherPriorityTaskList_1548, var_stackSize_1942, var_taskSetupList_2319, var_taskActivateList_2365, var_taskDeactivateList_2414, var_branchList_2477, var_endOfTask_3965, var_autoStart_1988  COMMA_SOURCE_FILE ("task-declaration.galgas", 116)) ;
  GGS_lstringlist temp_13 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 130)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_structureDeclarationAST::init_21__21__21__21__21__21__21_ (var_taskName_1518, var_taskName_1518, var_taskName_1518, temp_13, GGS_bool (false), var_taskVarList_2275, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 126)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_task_5F_event_i28_ (GGS_ast & ioArgument_ioAST,
                                                                           const GGS_lstring constinArgument_inTaskName,
                                                                           GGS_taskSetupListAST & ioArgument_ioTaskSetupListAST,
                                                                           GGS_taskSetupListAST & ioArgument_ioTaskActivateListAST,
                                                                           GGS_taskSetupListAST & ioArgument_ioTaskDeactivateListAST,
                                                                           Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 28)) ;
  GGS_lstring var_attribute_1449 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 29)) ;
  GGS_lstring var_name_1481 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 30)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 31)) ;
  GGS_lstringlist var_dependenceList_1507 = temp_0 ;
  switch (select_omnibus_5F_syntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 34)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_dependenceName_1595 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 36)) ;
      var_dependenceList_1507.addAssignOperation (var_dependenceName_1595  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 37)) ;
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
  GGS_instructionListAST var_instructionList_1737 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1737, inCompiler) ;
  GGS_location var_endOfInit_1761 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 44)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 45)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, var_attribute_1449.readProperty_string ().objectCompare (GGS_string ("onSetup"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioTaskSetupListAST.addAssignOperation (var_name_1481, var_dependenceList_1507  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 47)) ;
      ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_taskSetupDeclarationAST::init_21__21__21__21__21__21_ (constinArgument_inTaskName, GGS_string ("task.setup."), var_name_1481, var_dependenceList_1507, var_instructionList_1737, var_endOfInit_1761, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 48)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, var_attribute_1449.readProperty_string ().objectCompare (GGS_string ("onStart"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        ioArgument_ioTaskActivateListAST.addAssignOperation (var_name_1481, var_dependenceList_1507  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 57)) ;
        ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_taskSetupDeclarationAST::init_21__21__21__21__21__21_ (constinArgument_inTaskName, GGS_string ("task.activate."), var_name_1481, var_dependenceList_1507, var_instructionList_1737, var_endOfInit_1761, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 58)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_attribute_1449.readProperty_string ().objectCompare (GGS_string ("onTermination"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          ioArgument_ioTaskDeactivateListAST.addAssignOperation (var_name_1481, var_dependenceList_1507  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 67)) ;
          ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_taskSetupDeclarationAST::init_21__21__21__21__21__21_ (constinArgument_inTaskName, GGS_string ("task.deactivate."), var_name_1481, var_dependenceList_1507, var_instructionList_1737, var_endOfInit_1761, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 68)) ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (var_attribute_1449.readProperty_location (), GGS_string ("attribute should be @onSetup, @onStart or @onTermination"), fixItArray5  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 77)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i29_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  nt_function_5F_declaration_ (ioArgument_ioAST, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-function.galgas", 26)), inCompiler) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_function_5F_declaration_i30_ (GGS_ast & ioArgument_ioAST,
                                                                                     const GGS_lstring constinArgument_inReceiverTypeName,
                                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_bool var_publicAccess_1686 ;
  switch (select_omnibus_5F_syntax_48 (inCompiler)) {
  case 1: {
    var_publicAccess_1686 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-function.galgas", 37)) ;
    var_publicAccess_1686 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_mode var_mode_1851 ;
  GGS_lstring var_procName_1872 ;
  GGS_lstringlist var_attributeList_1903 ;
  GGS_routineFormalArgumentListAST var_procFormalArgumentList_1944 ;
  nt_function_5F_header_ (ioArgument_ioAST, var_mode_1851, var_procName_1872, var_attributeList_1903, var_procFormalArgumentList_1944, inCompiler) ;
  GGS_lstring var_returnTypeName_1984 ;
  switch (select_omnibus_5F_syntax_49 (inCompiler)) {
  case 1: {
    var_returnTypeName_1984 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 48)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-function.galgas", 50)) ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_1984, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-function.galgas", 53)) ;
  GGS_instructionListAST var_instructionList_2160 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_2160, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-function.galgas", 55)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_functionDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (var_mode_1851, var_publicAccess_1686, constinArgument_inReceiverTypeName, var_procName_1872, var_attributeList_1903, var_procFormalArgumentList_1944, var_returnTypeName_1984, var_instructionList_2160, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 65)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-function.galgas", 56)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_mode_i31_ (GGS_mode & outArgument_outMode,
                                                                  Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outMode.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_50 (inCompiler)) {
  case 1: {
    outArgument_outMode = GGS_mode::class_func_anyMode (SOURCE_FILE ("declaration-function.galgas", 73)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-function.galgas", 75)) ;
    outArgument_outMode = GGS_mode::class_func_userMode (SOURCE_FILE ("declaration-function.galgas", 76)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("declaration-function.galgas", 78)) ;
    outArgument_outMode = GGS_mode::class_func_panicMode (SOURCE_FILE ("declaration-function.galgas", 79)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-function.galgas", 81)) ;
    outArgument_outMode = GGS_mode::class_func_bootMode (SOURCE_FILE ("declaration-function.galgas", 82)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-function.galgas", 84)) ;
    outArgument_outMode = GGS_mode::class_func_startupMode (SOURCE_FILE ("declaration-function.galgas", 85)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-function.galgas", 87)) ;
    outArgument_outMode = GGS_mode::class_func_sectionMode (SOURCE_FILE ("declaration-function.galgas", 88)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-function.galgas", 90)) ;
    outArgument_outMode = GGS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-function.galgas", 91)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-function.galgas", 93)) ;
    outArgument_outMode = GGS_mode::class_func_primitiveMode (SOURCE_FILE ("declaration-function.galgas", 94)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-function.galgas", 96)) ;
    outArgument_outMode = GGS_mode::class_func_guardMode (SOURCE_FILE ("declaration-function.galgas", 97)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-function.galgas", 99)) ;
    switch (select_omnibus_5F_syntax_51 (inCompiler)) {
    case 1: {
      outArgument_outMode = GGS_mode::class_func_anySafeMode (SOURCE_FILE ("declaration-function.galgas", 101)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-function.galgas", 103)) ;
      outArgument_outMode = GGS_mode::class_func_safeUserMode (SOURCE_FILE ("declaration-function.galgas", 104)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-function.galgas", 106)) ;
      outArgument_outMode = GGS_mode::class_func_safeSectionMode (SOURCE_FILE ("declaration-function.galgas", 107)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-function.galgas", 109)) ;
      outArgument_outMode = GGS_mode::class_func_safeServiceMode (SOURCE_FILE ("declaration-function.galgas", 110)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-function.galgas", 112)) ;
      outArgument_outMode = GGS_mode::class_func_safePrimitiveMode (SOURCE_FILE ("declaration-function.galgas", 113)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-function.galgas", 115)) ;
      outArgument_outMode = GGS_mode::class_func_safeGuardMode (SOURCE_FILE ("declaration-function.galgas", 116)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_function_5F_header_i32_ (GGS_ast & ioArgument_ioAST,
                                                                                GGS_mode & outArgument_outMode,
                                                                                GGS_lstring & outArgument_outProcName,
                                                                                GGS_lstringlist & outArgument_outAttributeList,
                                                                                GGS_routineFormalArgumentListAST & outArgument_outProcFormalArgumentList,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outMode.drop () ; // Release 'out' argument
  outArgument_outProcName.drop () ; // Release 'out' argument
  outArgument_outAttributeList.drop () ; // Release 'out' argument
  outArgument_outProcFormalArgumentList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-function.galgas", 130)) ;
  outArgument_outProcName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-function.galgas", 131)) ;
  nt_mode_ (outArgument_outMode, inCompiler) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 133)) ;
  outArgument_outAttributeList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_52 (inCompiler) == 2) {
      GGS_lstring var_attribute_3897 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-function.galgas", 136)) ;
      outArgument_outAttributeList.addAssignOperation (var_attribute_3897  COMMA_SOURCE_FILE ("declaration-function.galgas", 137)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i33_ (GGS_ast & ioArgument_ioAST,
                                                                                              const GGS_lstring constinArgument_inReceiverTypeName,
                                                                                              Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_bool var_publicAccess_1358 ;
  switch (select_omnibus_5F_syntax_53 (inCompiler)) {
  case 1: {
    var_publicAccess_1358 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 30)) ;
    var_publicAccess_1358 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-svc.galgas", 33)) ;
  GGS_lstring var_name_1501 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 34)) ;
  GGS_mode var_mode_1520 ;
  switch (select_omnibus_5F_syntax_54 (inCompiler)) {
  case 1: {
    var_mode_1520 = GGS_mode::class_func_sectionMode (SOURCE_FILE ("declaration-svc.galgas", 37)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 39)) ;
    var_mode_1520 = GGS_mode::class_func_safeSectionMode (SOURCE_FILE ("declaration-svc.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 42)) ;
  GGS_lstringlist var_attributeList_1641 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_55 (inCompiler) == 2) {
      GGS_lstring var_attribute_1706 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 45)) ;
      var_attributeList_1641.addAssignOperation (var_attribute_1706  COMMA_SOURCE_FILE ("declaration-svc.galgas", 46)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_routineFormalArgumentListAST var_formalArgumentList_1804 ;
  nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_1804, inCompiler) ;
  GGS_lstring var_returnTypeName_1840 ;
  switch (select_omnibus_5F_syntax_56 (inCompiler)) {
  case 1: {
    var_returnTypeName_1840 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 51)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 53)) ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_1840, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 56)) ;
  GGS_instructionListAST var_instructionList_2016 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_2016, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_systemRoutineDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (constinArgument_inReceiverTypeName, var_name_1501, var_mode_1520, var_publicAccess_1358, var_attributeList_1641, var_formalArgumentList_1804, var_returnTypeName_1840, var_instructionList_2016, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 67)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 58)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i34_ (GGS_ast & ioArgument_ioAST,
                                                                                              const GGS_lstring constinArgument_inReceiverTypeName,
                                                                                              Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_bool var_publicAccess_2619 ;
  switch (select_omnibus_5F_syntax_57 (inCompiler)) {
  case 1: {
    var_publicAccess_2619 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 81)) ;
    var_publicAccess_2619 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-svc.galgas", 84)) ;
  GGS_lstring var_name_2764 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 85)) ;
  GGS_mode var_mode_2783 ;
  switch (select_omnibus_5F_syntax_58 (inCompiler)) {
  case 1: {
    var_mode_2783 = GGS_mode::class_func_primitiveMode (SOURCE_FILE ("declaration-svc.galgas", 88)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 90)) ;
    var_mode_2783 = GGS_mode::class_func_safePrimitiveMode (SOURCE_FILE ("declaration-svc.galgas", 91)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 93)) ;
  GGS_lstringlist var_attributeList_2908 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_59 (inCompiler) == 2) {
      GGS_lstring var_attribute_2973 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 96)) ;
      var_attributeList_2908.addAssignOperation (var_attribute_2973  COMMA_SOURCE_FILE ("declaration-svc.galgas", 97)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_routineFormalArgumentListAST var_formalArgumentList_3077 ;
  nt_procedure_5F_input_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_3077, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 100)) ;
  GGS_instructionListAST var_instructionList_3139 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_3139, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 102)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_systemRoutineDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (constinArgument_inReceiverTypeName, var_name_2764, var_mode_2783, var_publicAccess_2619, var_attributeList_2908, var_formalArgumentList_3077, GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 110)), var_instructionList_3139, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 112)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 103)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i35_ (GGS_ast & ioArgument_ioAST,
                                                                                              const GGS_lstring constinArgument_inReceiverTypeName,
                                                                                              Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_bool var_publicAccess_3648 ;
  switch (select_omnibus_5F_syntax_60 (inCompiler)) {
  case 1: {
    var_publicAccess_3648 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas", 123)) ;
    var_publicAccess_3648 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-svc.galgas", 126)) ;
  GGS_lstring var_name_3791 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas", 127)) ;
  GGS_mode var_mode_3810 ;
  switch (select_omnibus_5F_syntax_61 (inCompiler)) {
  case 1: {
    var_mode_3810 = GGS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-svc.galgas", 130)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas", 132)) ;
    var_mode_3810 = GGS_mode::class_func_safeServiceMode (SOURCE_FILE ("declaration-svc.galgas", 133)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 135)) ;
  GGS_lstringlist var_attributeList_3931 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_62 (inCompiler) == 2) {
      GGS_lstring var_attribute_3996 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas", 138)) ;
      var_attributeList_3931.addAssignOperation (var_attribute_3996  COMMA_SOURCE_FILE ("declaration-svc.galgas", 139)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_routineFormalArgumentListAST var_formalArgumentList_4100 ;
  nt_procedure_5F_input_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_4100, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 142)) ;
  GGS_instructionListAST var_instructionList_4162 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_4162, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas", 144)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_systemRoutineDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (constinArgument_inReceiverTypeName, var_name_3791, var_mode_3810, var_publicAccess_3648, var_attributeList_3931, var_formalArgumentList_4100, GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 152)), var_instructionList_4162, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 154)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 145)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i36_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_required COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 22)) ;
  GGS_mode var_mode_1150 ;
  GGS_lstring var_procName_1171 ;
  GGS_lstringlist var_attributeList_1202 ;
  GGS_routineFormalArgumentListAST var_procFormalArgumentList_1243 ;
  nt_function_5F_header_ (ioArgument_ioAST, var_mode_1150, var_procName_1171, var_attributeList_1202, var_procFormalArgumentList_1243, inCompiler) ;
  GGS_bool var_isGlobal_1274 = GGS_bool (false) ;
  UpEnumerator_lstringlist enumerator_1300 (var_attributeList_1202) ;
  while (enumerator_1300.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, enumerator_1300.current_mValue (HERE).readProperty_string ().objectCompare (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 31)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_isGlobal_1274.boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GenericArray <FixItDescription> fixItArray2 ;
            fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
            inCompiler->emitSemanticError (enumerator_1300.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 33)) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          var_isGlobal_1274 = GGS_bool (true) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GenericArray <FixItDescription> fixItArray3 ;
      fixItArray3.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
      appendFixItActions (fixItArray3, EnumFixItKind::fixItReplace, GGS_string ("@").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 38))) ;
      inCompiler->emitSemanticError (enumerator_1300.current_mValue (HERE).readProperty_location (), GGS_string ("invalid attribute"), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 38)) ;
    }
    enumerator_1300.gotoNextObject () ;
  }
  ioArgument_ioAST.mProperty_mRequiredFunctionListAST.addAssignOperation (var_procName_1171, var_mode_1150, var_isGlobal_1274, var_procFormalArgumentList_1243, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 46))  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 41)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i37_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 24)) ;
  GGS_mode var_mode_1252 ;
  GGS_lstring var_procName_1273 ;
  GGS_lstringlist var_attributeList_1304 ;
  GGS_routineFormalArgumentListAST var_procFormalArgumentList_1345 ;
  nt_function_5F_header_ (ioArgument_ioAST, var_mode_1252, var_procName_1273, var_attributeList_1304, var_procFormalArgumentList_1345, inCompiler) ;
  GGS_lstring var_returnTypeName_1385 ;
  switch (select_omnibus_5F_syntax_63 (inCompiler)) {
  case 1: {
    var_returnTypeName_1385 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 33)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 35)) ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_1385, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 38)) ;
  GGS_lstring var_llvmName_1546 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 39)) ;
  ioArgument_ioAST.mProperty_mExternFunctionListAST.addAssignOperation (var_procName_1273, var_mode_1252, var_attributeList_1304, var_procFormalArgumentList_1345, var_returnTypeName_1385, var_llvmName_1546, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 47))  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 40)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_isr_5F_in_5F_driver_i38_ (GGS_ast & ioArgument_ioAST,
                                                                                 const GGS_lstring constinArgument_inDriverName,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("declaration-isr.galgas", 22)) ;
  GGS_mode var_mode_1135 ;
  switch (select_omnibus_5F_syntax_64 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-isr.galgas", 25)) ;
    var_mode_1135 = GGS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-isr.galgas", 26)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-isr.galgas", 28)) ;
    var_mode_1135 = GGS_mode::class_func_sectionMode (SOURCE_FILE ("declaration-isr.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_isrName_1273 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-isr.galgas", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 32)) ;
  GGS_instructionListAST var_instructionList_1324 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1324, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-isr.galgas", 34)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_isrDeclarationAST::init_21__21__21__21__21_ (var_isrName_1273, var_mode_1135, constinArgument_inDriverName, var_instructionList_1324, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 40)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-isr.galgas", 35)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guard_i39_ (GGS_ast & ioArgument_ioAST,
                                                                   const GGS_lstring constinArgument_inReceiverTypeName,
                                                                   const GGS_string constinArgument_inReceiverLLVMBaseTypeName,
                                                                   Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_bool var_publicAccess_1665 ;
  switch (select_omnibus_5F_syntax_65 (inCompiler)) {
  case 1: {
    var_publicAccess_1665 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-guard.galgas", 39)) ;
    var_publicAccess_1665 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-guard.galgas", 42)) ;
  GGS_lstring var_guardName_1806 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-guard.galgas", 43)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 44)) ;
  GGS_lstringlist var_attributeList_1837 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_66 (inCompiler) == 2) {
      GGS_lstring var_attribute_1902 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-guard.galgas", 47)) ;
      var_attributeList_1837.addAssignOperation (var_attribute_1902  COMMA_SOURCE_FILE ("declaration-guard.galgas", 48)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_routineFormalArgumentListAST var_guardFormalArgumentList_2000 ;
  nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_guardFormalArgumentList_2000, inCompiler) ;
  GGS_guardKind var_guardKind_2043 ;
  switch (select_omnibus_5F_syntax_67 (inCompiler)) {
  case 1: {
    var_guardKind_2043 = GGS_guardKind::class_func_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 53)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 55)) ;
    GGS_callInstructionAST var_instruction_2146 ;
    nt_procedure_5F_call_ (ioArgument_ioAST, var_instruction_2146, inCompiler) ;
    var_guardKind_2043 = GGS_guardKind::class_func_convenienceGuard (var_instruction_2146  COMMA_SOURCE_FILE ("declaration-guard.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 59)) ;
  GGS_instructionListAST var_instructionList_2265 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_2265, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-guard.galgas", 61)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_guardDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (constinArgument_inReceiverTypeName, constinArgument_inReceiverLLVMBaseTypeName, var_guardName_1806, var_publicAccess_1665, var_attributeList_1837, var_guardFormalArgumentList_2000, var_guardKind_2043, var_instructionList_2265, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 72)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 63)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_formal_5F_arguments_i40_ (GGS_ast & ioArgument_ioAST,
                                                                                              GGS_routineFormalArgumentListAST & outArgument_outProcFormalArgumentList,
                                                                                              Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outProcFormalArgumentList.drop () ; // Release 'out' argument
  GGS_routineFormalArgumentListAST temp_0 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 52)) ;
  outArgument_outProcFormalArgumentList = temp_0 ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 53)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_68 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_2172 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 56)) ;
      GGS_lstring var_formalArgumentName_2205 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 57)) ;
      GGS_lstring var_formalArgumentTypeName_2262 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_2262, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssignOperation (GGS_procFormalArgumentPassingMode::class_func_output (SOURCE_FILE ("formal-arguments.galgas", 60)), var_selector_2172, var_formalArgumentTypeName_2262, var_formalArgumentName_2205  COMMA_SOURCE_FILE ("formal-arguments.galgas", 59)) ;
    } break ;
    case 3: {
      GGS_lstring var_selector_2480 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 65)) ;
      GGS_lstring var_formalArgumentName_2508 ;
      switch (select_omnibus_5F_syntax_69 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 68)) ;
        var_formalArgumentName_2508 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("formal-arguments.galgas", 69)) ;
      } break ;
      case 2: {
        var_formalArgumentName_2508 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 71)) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_formalArgumentTypeName_2691 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_2691, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssignOperation (GGS_procFormalArgumentPassingMode::class_func_inputOutput (SOURCE_FILE ("formal-arguments.galgas", 75)), var_selector_2480, var_formalArgumentTypeName_2691, var_formalArgumentName_2508  COMMA_SOURCE_FILE ("formal-arguments.galgas", 74)) ;
    } break ;
    case 4: {
      GGS_lstring var_selector_2913 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 80)) ;
      GGS_lstring var_formalArgumentName_2941 ;
      switch (select_omnibus_5F_syntax_70 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 83)) ;
        var_formalArgumentName_2941 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("formal-arguments.galgas", 84)) ;
      } break ;
      case 2: {
        var_formalArgumentName_2941 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 86)) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_formalArgumentTypeName_3125 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_3125, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssignOperation (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("formal-arguments.galgas", 90)), var_selector_2913, var_formalArgumentTypeName_3125, var_formalArgumentName_2941  COMMA_SOURCE_FILE ("formal-arguments.galgas", 89)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_input_5F_formal_5F_arguments_i41_ (GGS_ast & ioArgument_ioAST,
                                                                                                       GGS_routineFormalArgumentListAST & outArgument_outProcFormalArgumentList,
                                                                                                       Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outProcFormalArgumentList.drop () ; // Release 'out' argument
  GGS_routineFormalArgumentListAST temp_0 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 101)) ;
  outArgument_outProcFormalArgumentList = temp_0 ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 102)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_71 (inCompiler) == 2) {
      GGS_lstring var_selector_3653 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas", 105)) ;
      GGS_lstring var_formalArgumentName_3686 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas", 106)) ;
      GGS_lstring var_formalArgumentTypeName_3743 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_3743, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssignOperation (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("formal-arguments.galgas", 109)), var_selector_3653, var_formalArgumentTypeName_3743, var_formalArgumentName_3686  COMMA_SOURCE_FILE ("formal-arguments.galgas", 108)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i42_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("panic.galgas", 21)) ;
  GGS_lstring var_attribute_1103 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("panic.galgas", 22)) ;
  GGS_bool var_isSetup_1127 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_attribute_1103.readProperty_string ().objectCompare (GGS_string ("setup"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_isSetup_1127 = GGS_bool (true) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, var_attribute_1103.readProperty_string ().objectCompare (GGS_string ("loop"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_isSetup_1127 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_attribute_1103.readProperty_location (), GGS_string ("attribute should be @setup or @loop"), fixItArray2  COMMA_SOURCE_FILE ("panic.galgas", 29)) ;
      var_isSetup_1127.drop () ; // Release error dropped variable
    }
  }
  GGS_lbigint var_priority_1368 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("panic.galgas", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("panic.galgas", 32)) ;
  GGS_instructionListAST var_instructionList_1420 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1420, inCompiler) ;
  GGS_location var_endOfInstructionList_1444 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 34)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("panic.galgas", 35)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_panicAST::init_21__21__21__21_ (var_isSetup_1127, var_instructionList_1420, var_endOfInstructionList_1444, var_priority_1368, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas", 36)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i43_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 43)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 44)) ;
  GGS_lstring var_receiverName_1996 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 45)) ;
  GGS_lstring var_receiverTypeName_2027 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 47)) ;
  GGS_lstring var_converterName_2074 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 48)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 49)) ;
  GGS_ctExpressionAST var_expression_2148 ;
  nt_compile_5F_time_5F_expression_ (var_expression_2148, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 51)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_compileTimeConvertToBooleanAST::init_21__21__21__21_ (var_receiverName_1996, var_receiverTypeName_2027, var_converterName_2074, var_expression_2148, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 52)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i44_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_lstring var_receiverName_2519 ;
  GGS_lstring var_receiverTypeName_2537 ;
  GGS_genericFormalParameterList var_receiverGenericFormalParameterList_2566 ;
  nt_llvm_5F_function_5F_header_ (var_receiverName_2519, var_receiverTypeName_2537, var_receiverGenericFormalParameterList_2566, inCompiler) ;
  GGS_lstring var_converterName_2623 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 65)) ;
  GGS_llvmGenerationInstructionList var_instructionList_2678 ;
  nt_llvm_5F_instruction_5F_list_ (var_instructionList_2678, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 67)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_llvmConvertToBooleanAST::init_21__21__21__21_ (var_receiverName_2519, var_receiverTypeName_2537, var_converterName_2623, var_instructionList_2678, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 68)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_i45_ (GGS_ast & ioArgument_ioAST,
                                                                        GGS_expressionAST & outArgument_outExpression,
                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_logical_5F_and_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_72 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 20)) ;
      GGS_location var_operatorLocation_991 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 21)) ;
      GGS_expressionAST var_rightExpression_1069 ;
      nt_expression_5F_logical_5F_and_ (ioArgument_ioAST, var_rightExpression_1069, inCompiler) ;
      GGS_booleanShortCircuitAndOperatorExpressionAST var_andExpression_1147 = GGS_booleanShortCircuitAndOperatorExpressionAST::init_21__21__21_ (GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_991, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 25)), outArgument_outExpression, inCompiler COMMA_HERE), var_operatorLocation_991, GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_991, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 27)), var_rightExpression_1069, inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
      outArgument_outExpression = GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_991, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 31)), var_andExpression_1147, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_logical_5F_and_i46_ (GGS_ast & ioArgument_ioAST,
                                                                                          GGS_expressionAST & outArgument_outExpression,
                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_bitwise_5F_or_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_73 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 61)) ;
      GGS_location var_operatorLocation_2426 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 62)) ;
      GGS_expressionAST var_rightExpression_2503 ;
      nt_expression_5F_bitwise_5F_or_ (ioArgument_ioAST, var_rightExpression_2503, inCompiler) ;
      outArgument_outExpression = GGS_booleanShortCircuitAndOperatorExpressionAST::init_21__21__21_ (outArgument_outExpression, var_operatorLocation_2426, var_rightExpression_2503, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_or_i47_ (GGS_ast & ioArgument_ioAST,
                                                                                         GGS_expressionAST & outArgument_outExpression,
                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_bitwise_5F_xor_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_74 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 78)) ;
      GGS_location var_operatorLocation_2974 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 79)) ;
      GGS_expressionAST var_rightExpression_3052 ;
      nt_expression_5F_bitwise_5F_xor_ (ioArgument_ioAST, var_rightExpression_3052, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_2974, GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("expression-operator-priority.galgas", 84)), var_rightExpression_3052, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_xor_i48_ (GGS_ast & ioArgument_ioAST,
                                                                                          GGS_expressionAST & outArgument_outExpression,
                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_bitwise_5F_and_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_75 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 96)) ;
      GGS_location var_operatorLocation_3536 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 97)) ;
      GGS_expressionAST var_rightExpression_3614 ;
      nt_expression_5F_bitwise_5F_and_ (ioArgument_ioAST, var_rightExpression_3614, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_3536, GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("expression-operator-priority.galgas", 102)), var_rightExpression_3614, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_and_i49_ (GGS_ast & ioArgument_ioAST,
                                                                                          GGS_expressionAST & outArgument_outExpression,
                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_equality_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_76 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 114)) ;
      GGS_location var_operatorLocation_4097 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 115)) ;
      GGS_expressionAST var_rightExpression_4172 ;
      nt_expression_5F_equality_ (ioArgument_ioAST, var_rightExpression_4172, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_4097, GGS_omnibusInfixOperator::class_func_bitWiseAndOp (SOURCE_FILE ("expression-operator-priority.galgas", 120)), var_rightExpression_4172, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_equality_i50_ (GGS_ast & ioArgument_ioAST,
                                                                                    GGS_expressionAST & outArgument_outExpression,
                                                                                    Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_comparison_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  switch (select_omnibus_5F_syntax_77 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 132)) ;
    GGS_location var_operatorLocation_4651 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 133)) ;
    GGS_expressionAST var_rightExpression_4728 ;
    nt_expression_5F_comparison_ (ioArgument_ioAST, var_rightExpression_4728, inCompiler) ;
    outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_4651, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("expression-operator-priority.galgas", 138)), var_rightExpression_4728, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 142)) ;
    GGS_location var_operatorLocation_4928 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 143)) ;
    GGS_expressionAST var_rightExpression_5005 ;
    nt_expression_5F_comparison_ (ioArgument_ioAST, var_rightExpression_5005, inCompiler) ;
    GGS_omnibusInfixOperatorExpressionAST var_expression_5031 = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_4928, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("expression-operator-priority.galgas", 148)), var_rightExpression_5005, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_4928, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 153)), var_expression_5031, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_comparison_i51_ (GGS_ast & ioArgument_ioAST,
                                                                                      GGS_expressionAST & outArgument_outExpression,
                                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_shift_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  switch (select_omnibus_5F_syntax_78 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 165)) ;
    GGS_location var_operatorLocation_5597 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 166)) ;
    GGS_expressionAST var_rightExpression_5669 ;
    nt_expression_5F_shift_ (ioArgument_ioAST, var_rightExpression_5669, inCompiler) ;
    outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_5597, GGS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("expression-operator-priority.galgas", 171)), var_rightExpression_5669, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 175)) ;
    GGS_location var_operatorLocation_5872 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 176)) ;
    GGS_expressionAST var_rightExpression_5944 ;
    nt_expression_5F_shift_ (ioArgument_ioAST, var_rightExpression_5944, inCompiler) ;
    GGS_omnibusInfixOperatorExpressionAST var_expression_5970 = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_5872, GGS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("expression-operator-priority.galgas", 181)), var_rightExpression_5944, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_5872, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 186)), var_expression_5970, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 190)) ;
    GGS_location var_operatorLocation_6271 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 191)) ;
    GGS_expressionAST var_rightExpression_6343 ;
    nt_expression_5F_shift_ (ioArgument_ioAST, var_rightExpression_6343, inCompiler) ;
    outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_6271, GGS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("expression-operator-priority.galgas", 196)), var_rightExpression_6343, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 200)) ;
    GGS_location var_operatorLocation_6546 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 201)) ;
    GGS_expressionAST var_rightExpression_6618 ;
    nt_expression_5F_shift_ (ioArgument_ioAST, var_rightExpression_6618, inCompiler) ;
    GGS_omnibusInfixOperatorExpressionAST var_expression_6644 = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_6546, GGS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("expression-operator-priority.galgas", 206)), var_rightExpression_6618, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_6546, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 211)), var_expression_6644, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_shift_i52_ (GGS_ast & ioArgument_ioAST,
                                                                                 GGS_expressionAST & outArgument_outExpression,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_addition_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_79 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 223)) ;
      GGS_location var_operatorLocation_7215 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 224)) ;
      GGS_expressionAST var_rightExpression_7290 ;
      nt_expression_5F_addition_ (ioArgument_ioAST, var_rightExpression_7290, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_7215, GGS_omnibusInfixOperator::class_func_leftShiftOp (SOURCE_FILE ("expression-operator-priority.galgas", 229)), var_rightExpression_7290, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 233)) ;
      GGS_location var_operatorLocation_7500 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 234)) ;
      GGS_expressionAST var_rightExpression_7575 ;
      nt_expression_5F_addition_ (ioArgument_ioAST, var_rightExpression_7575, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_7500, GGS_omnibusInfixOperator::class_func_rightShiftOp (SOURCE_FILE ("expression-operator-priority.galgas", 239)), var_rightExpression_7575, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_addition_i53_ (GGS_ast & ioArgument_ioAST,
                                                                                    GGS_expressionAST & outArgument_outExpression,
                                                                                    Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_product_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_80 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 251)) ;
      GGS_location var_operatorLocation_8053 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 252)) ;
      GGS_expressionAST var_rightExpression_8127 ;
      nt_expression_5F_product_ (ioArgument_ioAST, var_rightExpression_8127, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_8053, GGS_omnibusInfixOperator::class_func_addOp (SOURCE_FILE ("expression-operator-priority.galgas", 257)), var_rightExpression_8127, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 261)) ;
      GGS_location var_operatorLocation_8331 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 262)) ;
      GGS_expressionAST var_rightExpression_8405 ;
      nt_expression_5F_product_ (ioArgument_ioAST, var_rightExpression_8405, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_8331, GGS_omnibusInfixOperator::class_func_addOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 267)), var_rightExpression_8405, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 271)) ;
      GGS_location var_operatorLocation_8613 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 272)) ;
      GGS_expressionAST var_rightExpression_8687 ;
      nt_expression_5F_product_ (ioArgument_ioAST, var_rightExpression_8687, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_8613, GGS_omnibusInfixOperator::class_func_subOp (SOURCE_FILE ("expression-operator-priority.galgas", 277)), var_rightExpression_8687, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 281)) ;
      GGS_location var_operatorLocation_8891 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 282)) ;
      GGS_expressionAST var_rightExpression_8965 ;
      nt_expression_5F_product_ (ioArgument_ioAST, var_rightExpression_8965, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_8891, GGS_omnibusInfixOperator::class_func_subOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 287)), var_rightExpression_8965, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_product_i54_ (GGS_ast & ioArgument_ioAST,
                                                                                   GGS_expressionAST & outArgument_outExpression,
                                                                                   Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_81 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 299)) ;
      GGS_location var_operatorLocation_9429 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 300)) ;
      GGS_expressionAST var_rightExpression_9492 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_9492, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9429, GGS_omnibusInfixOperator::class_func_mulOp (SOURCE_FILE ("expression-operator-priority.galgas", 305)), var_rightExpression_9492, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 309)) ;
      GGS_location var_operatorLocation_9696 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 310)) ;
      GGS_expressionAST var_rightExpression_9759 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_9759, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9696, GGS_omnibusInfixOperator::class_func_mulOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 315)), var_rightExpression_9759, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 319)) ;
      GGS_location var_operatorLocation_9967 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 320)) ;
      GGS_expressionAST var_rightExpression_10030 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_10030, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9967, GGS_omnibusInfixOperator::class_func_modOp (SOURCE_FILE ("expression-operator-priority.galgas", 325)), var_rightExpression_10030, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 329)) ;
      GGS_location var_operatorLocation_10234 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 330)) ;
      GGS_expressionAST var_rightExpression_10297 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_10297, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_10234, GGS_omnibusInfixOperator::class_func_modOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 335)), var_rightExpression_10297, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 339)) ;
      GGS_location var_operatorLocation_10505 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 340)) ;
      GGS_expressionAST var_rightExpression_10568 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_10568, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_10505, GGS_omnibusInfixOperator::class_func_divOp (SOURCE_FILE ("expression-operator-priority.galgas", 345)), var_rightExpression_10568, inCompiler COMMA_HERE) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 349)) ;
      GGS_location var_operatorLocation_10772 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 350)) ;
      GGS_expressionAST var_rightExpression_10835 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_10835, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_10772, GGS_omnibusInfixOperator::class_func_divOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 355)), var_rightExpression_10835, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i55_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 364)) ;
  GGS_location var_operatorLocation_11226 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 365)) ;
  GGS_expressionAST var_expression_11287 ;
  nt_primary_ (ioArgument_ioAST, var_expression_11287, inCompiler) ;
  outArgument_outExpression = GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_11226, GGS_prefixOperator::class_func_bitWiseComplement (SOURCE_FILE ("expression-operator-priority.galgas", 369)), var_expression_11287, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i56_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 377)) ;
  GGS_location var_operatorLocation_11630 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 378)) ;
  GGS_expressionAST var_expression_11691 ;
  nt_primary_ (ioArgument_ioAST, var_expression_11691, inCompiler) ;
  outArgument_outExpression = GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_11630, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas", 382)), var_expression_11691, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i57_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 390)) ;
  GGS_location var_operatorLocation_12020 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 391)) ;
  GGS_expressionAST var_expression_12081 ;
  nt_primary_ (ioArgument_ioAST, var_expression_12081, inCompiler) ;
  outArgument_outExpression = GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_12020, GGS_prefixOperator::class_func_minusOp (SOURCE_FILE ("expression-operator-priority.galgas", 395)), var_expression_12081, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i58_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 403)) ;
  GGS_location var_operatorLocation_12413 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas", 404)) ;
  GGS_expressionAST var_expression_12474 ;
  nt_primary_ (ioArgument_ioAST, var_expression_12474, inCompiler) ;
  outArgument_outExpression = GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_12413, GGS_prefixOperator::class_func_minusNoOvf (SOURCE_FILE ("expression-operator-priority.galgas", 408)), var_expression_12474, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i59_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i60_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_convert COMMA_SOURCE_FILE ("expression-convert.galgas", 20)) ;
  GGS_lstring var_typeName_1052 ;
  switch (select_omnibus_5F_syntax_82 (inCompiler)) {
  case 1: {
    var_typeName_1052 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 23)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1052, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-convert.galgas", 27)) ;
  nt_expression_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  GGS_location var_endOfExpression_1212 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-convert.galgas", 30)) ;
  outArgument_outExpression = GGS_convertExpressionAST::init_21__21__21_ (outArgument_outExpression, var_typeName_1052, var_endOfExpression_1212, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i61_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("expression-extend.galgas", 20)) ;
  GGS_lstring var_typeName_1052 ;
  switch (select_omnibus_5F_syntax_83 (inCompiler)) {
  case 1: {
    var_typeName_1052 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 23)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1052, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-extend.galgas", 27)) ;
  nt_expression_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  GGS_location var_endOfExpression_1212 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-extend.galgas", 30)) ;
  outArgument_outExpression = GGS_extendExpressionAST::init_21__21__21_ (outArgument_outExpression, var_typeName_1052, var_endOfExpression_1212, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i62_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_truncate COMMA_SOURCE_FILE ("expression-truncate.galgas", 20)) ;
  GGS_lstring var_typeName_1054 ;
  switch (select_omnibus_5F_syntax_84 (inCompiler)) {
  case 1: {
    var_typeName_1054 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 23)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1054, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-truncate.galgas", 27)) ;
  nt_expression_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  GGS_location var_endOfExpression_1214 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-truncate.galgas", 30)) ;
  outArgument_outExpression = GGS_truncateExpressionAST::init_21__21__21_ (outArgument_outExpression, var_typeName_1054, var_endOfExpression_1214, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i63_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 18)) ;
  GGS_controlRegisterLValueAST var_registerLValue_1039 ;
  nt_control_5F_register_5F_lvalue_ (ioArgument_ioAST, var_registerLValue_1039, inCompiler) ;
  outArgument_outExpression = GGS_addressofControlRegisterAST::init_21_ (var_registerLValue_1039, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i64_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 18)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 19)) ;
  GGS_LValueAST var_lvalue_995 ;
  nt_lvalue_ (ioArgument_ioAST, var_lvalue_995, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 21)) ;
  outArgument_outExpression = GGS_addressofExpressionAST::init_21_ (var_lvalue_995, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i65_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas", 24)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 25)) ;
  GGS_LValueAST var_lvalue_1184 ;
  nt_lvalue_ (ioArgument_ioAST, var_lvalue_1184, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-sizeof.galgas", 27)) ;
  outArgument_outExpression = GGS_sizeofExpressionAST::init_21_ (var_lvalue_1184, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i66_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas", 34)) ;
  GGS_lstring var_typeName_1487 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1487, inCompiler) ;
  outArgument_outExpression = GGS_sizeofTypeAST::init_21_ (var_typeName_1487, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i67_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_optionalTypeName_1064 ;
  switch (select_omnibus_5F_syntax_85 (inCompiler)) {
  case 1: {
    var_optionalTypeName_1064 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 22)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_optionalTypeName_1064, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 26)) ;
  GGS_lstring var_constantName_1226 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 27)) ;
  GGS_primaryInExpressionAccessListAST var_accessList_1310 ;
  nt_expression_5F_access_5F_list_ (ioArgument_ioAST, var_accessList_1310, inCompiler) ;
  outArgument_outExpression = GGS_typedConstantCallAST::init_21__21__21_ (var_optionalTypeName_1064, var_constantName_1226, var_accessList_1310, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i68_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_ifExpressionAST var_if_5F_expression_1261 ;
  nt_expression_5F_if_ (ioArgument_ioAST, var_if_5F_expression_1261, inCompiler) ;
  outArgument_outExpression = var_if_5F_expression_1261 ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_if_i69_ (GGS_ast & ioArgument_ioAST,
                                                                              GGS_ifExpressionAST & outArgument_outExpression,
                                                                              Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 30)) ;
  GGS_expressionAST var_ifExpression_1549 ;
  nt_expression_ (ioArgument_ioAST, var_ifExpression_1549, inCompiler) ;
  GGS_location var_ifExpressionEndLocation_1580 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 32)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas", 33)) ;
  GGS_expressionAST var_thenExpression_1650 ;
  nt_expression_ (ioArgument_ioAST, var_thenExpression_1650, inCompiler) ;
  GGS_location var_thenExpressionEndLocation_1683 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 35)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 37)) ;
  GGS_expressionAST var_elseExpression_1759 ;
  switch (select_omnibus_5F_syntax_86 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas", 40)) ;
    nt_expression_ (ioArgument_ioAST, var_elseExpression_1759, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas", 42)) ;
  } break ;
  case 2: {
    GGS_ifExpressionAST var_else_5F_if_5F_expression_1890 ;
    nt_expression_5F_if_ (ioArgument_ioAST, var_else_5F_if_5F_expression_1890, inCompiler) ;
    var_elseExpression_1759 = var_else_5F_if_5F_expression_1890 ;
  } break ;
  default:
    break ;
  }
  GGS_location var_elseExpressionEndLocation_1977 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 47)) ;
  outArgument_outExpression = GGS_ifExpressionAST::init_21__21__21__21__21__21_ (var_ifExpression_1549, var_ifExpressionEndLocation_1580, var_thenExpression_1650, var_thenExpressionEndLocation_1683, var_elseExpression_1759, var_elseExpressionEndLocation_1977, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i70_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 28)) ;
  GGS_lstring var_typeName_1332 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 29)) ;
  GGS_integerSliceFieldListAST temp_0 = GGS_integerSliceFieldListAST::init (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 30)) ;
  GGS_integerSliceFieldListAST var_integerFieldValues_1375 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_sliceWidth_1435 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 32)) ;
    GGS_expressionAST var_expression_1478 ;
    nt_expression_ (ioArgument_ioAST, var_expression_1478, inCompiler) ;
    var_integerFieldValues_1375.addAssignOperation (var_sliceWidth_1435, var_expression_1478, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 34))  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 34)) ;
    if (select_omnibus_5F_syntax_87 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::lowerThan, var_integerFieldValues_1375.getter_count (SOURCE_FILE ("expression-integer-slice.galgas", 37)).objectCompare (GGS_uint (uint32_t (2U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 38)), GGS_string ("this expression should contain two bit slices or more"), fixItArray3  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 38)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outExpression = GGS_integerSliceExpressionAST::init_21__21__21_ (var_typeName_1332, var_integerFieldValues_1375, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 40)), inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i71_ (GGS_ast & /* ioArgument_ioAST */,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lbigint var_integerLiteral_991 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 18)) ;
  outArgument_outExpression = GGS_literalIntegerInExpressionAST::init_21_ (var_integerLiteral_991, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i72_ (GGS_ast & /* ioArgument_ioAST */,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_stringLiteral_990 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 18)) ;
  outArgument_outExpression = GGS_literalStringInExpressionAST::init_21_ (var_stringLiteral_990, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i73_ (GGS_ast & /* ioArgument_ioAST */,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("expression-true-false.galgas", 18)) ;
  outArgument_outExpression = GGS_literalBooleanInExpressionAST::init_21_ (GGS_bool (true), inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i74_ (GGS_ast & /* ioArgument_ioAST */,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("expression-true-false.galgas", 25)) ;
  outArgument_outExpression = GGS_literalBooleanInExpressionAST::init_21_ (GGS_bool (false), inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i75_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_controlRegisterLValueAST var_registerLValue_1150 ;
  nt_control_5F_register_5F_lvalue_ (ioArgument_ioAST, var_registerLValue_1150, inCompiler) ;
  GGS_lstring var_fieldName_1182 ;
  switch (select_omnibus_5F_syntax_88 (inCompiler)) {
  case 1: {
    var_fieldName_1182 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("expression-control-register.galgas", 22)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-control-register.galgas", 24)) ;
    var_fieldName_1182 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-control-register.galgas", 25)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GGS_registerInExpressionAST::init_21__21_ (var_registerLValue_1150, var_fieldName_1182, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i76_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 28)) ;
  GGS_lstring var_registerGroupName_1353 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 30)) ;
  GGS_lstring var_registerName_1401 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 31)) ;
  GGS_registerIntegerFieldListAST temp_0 = GGS_registerIntegerFieldListAST::init (inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 32)) ;
  GGS_registerIntegerFieldListAST var_integerFieldValues_1451 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_registerFieldName_1511 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 34)) ;
    GGS_expressionAST var_expression_1561 ;
    nt_expression_ (ioArgument_ioAST, var_expression_1561, inCompiler) ;
    var_integerFieldValues_1451.addAssignOperation (var_registerFieldName_1511, var_expression_1561, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 36))  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 36)) ;
    if (select_omnibus_5F_syntax_89 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 39)) ;
  outArgument_outExpression = GGS_registerConstantExpressionAST::init_21__21__21_ (var_registerGroupName_1353, var_registerName_1401, var_integerFieldValues_1451, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i77_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_receiver_1743 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 34)) ;
  GGS_primaryInExpressionAccessListAST var_accessList_1823 ;
  nt_expression_5F_access_5F_list_ (ioArgument_ioAST, var_accessList_1823, inCompiler) ;
  outArgument_outExpression = GGS_primaryInExpressionAST::init_21__21_ (var_receiver_1743, var_accessList_1823, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i78_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("expression-primary.galgas", 44)) ;
  GGS_lstring var_receiver_2121 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 45)) ;
  GGS_primaryInExpressionAccessListAST var_accessList_2213 ;
  nt_expression_5F_access_5F_list_ (ioArgument_ioAST, var_accessList_2213, inCompiler) ;
  outArgument_outExpression = GGS_primaryInExpressionAST::init_21__21_ (var_receiver_2121, var_accessList_2213, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_access_5F_list_i79_ (GGS_ast & ioArgument_ioAST,
                                                                                          GGS_primaryInExpressionAccessListAST & outArgument_outAccessList,
                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outAccessList.drop () ; // Release 'out' argument
  GGS_primaryInExpressionAccessListAST temp_0 = GGS_primaryInExpressionAccessListAST::init (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 55)) ;
  outArgument_outAccessList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_90 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 58)) ;
      GGS_lstring var_propertyName_2606 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 59)) ;
      outArgument_outAccessList.addAssignOperation (GGS_primaryInExpressionAccessAST::class_func_property (var_propertyName_2606  COMMA_SOURCE_FILE ("expression-primary.galgas", 60))  COMMA_SOURCE_FILE ("expression-primary.galgas", 60)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 62)) ;
      GGS_lbigint var_low_2715 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 63)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 64)) ;
      GGS_lbigint var_high_2752 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas", 65)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 66)) ;
      outArgument_outAccessList.addAssignOperation (GGS_primaryInExpressionAccessAST::class_func_integerSlice (var_low_2715, var_high_2752  COMMA_SOURCE_FILE ("expression-primary.galgas", 67))  COMMA_SOURCE_FILE ("expression-primary.galgas", 67)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas", 69)) ;
      GGS_expressionAST var_expression_2879 ;
      nt_expression_ (ioArgument_ioAST, var_expression_2879, inCompiler) ;
      GGS_location var_endOfIndex_2900 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 71)) ;
      GGS_bool var_checkIndexExpression_2944 ;
      switch (select_omnibus_5F_syntax_91 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas", 74)) ;
        var_checkIndexExpression_2944 = GGS_bool (true) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("expression-primary.galgas", 77)) ;
        var_checkIndexExpression_2944 = GGS_bool (false) ;
      } break ;
      default:
        break ;
      }
      outArgument_outAccessList.addAssignOperation (GGS_primaryInExpressionAccessAST::class_func_arrayAccess (var_expression_2879, var_endOfIndex_2900, var_checkIndexExpression_2944  COMMA_SOURCE_FILE ("expression-primary.galgas", 80))  COMMA_SOURCE_FILE ("expression-primary.galgas", 80)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas", 86)) ;
      GGS_lstring var_methodName_3295 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas", 87)) ;
      GGS_effectiveArgumentListAST var_arguments_3348 ;
      GGS_location var_endOfArguments_3363 ;
      nt_effective_5F_parameters_ (ioArgument_ioAST, var_arguments_3348, var_endOfArguments_3363, inCompiler) ;
      outArgument_outAccessList.addAssignOperation (GGS_primaryInExpressionAccessAST::class_func_funcCall (var_methodName_3295, var_arguments_3348, var_endOfArguments_3363  COMMA_SOURCE_FILE ("expression-primary.galgas", 89))  COMMA_SOURCE_FILE ("expression-primary.galgas", 89)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i80_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_standaloneFunctionName_1145 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 20)) ;
  GGS_effectiveArgumentListAST var_arguments_1208 ;
  GGS_location var_endOfArguments_1223 ;
  nt_effective_5F_parameters_ (ioArgument_ioAST, var_arguments_1208, var_endOfArguments_1223, inCompiler) ;
  outArgument_outExpression = GGS_standaloneFunctionInExpressionAST::init_21__21__21_ (var_standaloneFunctionName_1145, var_arguments_1208, var_endOfArguments_1223, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i81_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_typeName_1200 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1200, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 26)) ;
  GGS_functionCallEffectiveParameterListAST temp_0 = GGS_functionCallEffectiveParameterListAST::init (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 27)) ;
  GGS_functionCallEffectiveParameterListAST var_parameterList_1264 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_92 (inCompiler) == 2) {
      GGS_lstring var_selector_1329 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 30)) ;
      GGS_expressionAST var_expression_1370 ;
      nt_expression_ (ioArgument_ioAST, var_expression_1370, inCompiler) ;
      var_parameterList_1264.addAssignOperation (var_selector_1329, var_expression_1370  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 32)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_location var_errorLocation_1442 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 34)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 35)) ;
  outArgument_outExpression = GGS_constructorCallAST::init_21__21__21_ (var_typeName_1200, var_parameterList_1264, var_errorLocation_1442, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compileTimeInfixOperator_i82_ (GGS_compileTimeInfixOperatorEnumeration & outArgument_outOperator,
                                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperator.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_93 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 96)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_equal (SOURCE_FILE ("infix-operator-compile-time.galgas", 97)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 99)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_lessThan (SOURCE_FILE ("infix-operator-compile-time.galgas", 100)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 102)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseAndOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 103)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 105)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseOrOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 106)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 108)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseXorOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 109)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 111)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_addOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 112)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 114)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_subOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 115)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 117)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_mulOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 118)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 120)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_divOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 121)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 123)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_divNoOvf (SOURCE_FILE ("infix-operator-compile-time.galgas", 124)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 126)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_modOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 127)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 129)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_moduloNoOvf (SOURCE_FILE ("infix-operator-compile-time.galgas", 130)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 132)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_leftShift (SOURCE_FILE ("infix-operator-compile-time.galgas", 133)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 135)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_rightShift (SOURCE_FILE ("infix-operator-compile-time.galgas", 136)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i83_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 143)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 144)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 145)) ;
  GGS_lstring var_leftArgument_4443 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 146)) ;
  GGS_lstring var_leftType_4474 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 147)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 148)) ;
  GGS_location var_operationLocation_4499 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 149)) ;
  GGS_compileTimeInfixOperatorEnumeration var_infixOperator_4570 ;
  nt_compileTimeInfixOperator_ (var_infixOperator_4570, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 151)) ;
  GGS_lstring var_rightArgument_4614 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 152)) ;
  GGS_lstring var_rightType_4646 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 153)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 154)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 155)) ;
  GGS_lstring var_resultType_4691 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 156)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 157)) ;
  GGS_ctExpressionAST var_expression_4762 ;
  nt_compile_5F_time_5F_expression_ (var_expression_4762, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 159)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_compileTimeInfixOperatorAST::init_21__21__21__21__21__21__21__21_ (var_infixOperator_4570, var_operationLocation_4499, var_leftArgument_4443, var_leftType_4474, var_rightArgument_4614, var_rightType_4646, var_expression_4762, var_resultType_4691, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 160)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i84_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_lstring var_leftVariableName_4979 ;
  GGS_lstring var_leftTypeName_5001 ;
  GGS_genericFormalParameterList var_leftGenericFormalParameterList_5019 ;
  nt_llvm_5F_function_5F_header_ (var_leftVariableName_4979, var_leftTypeName_5001, var_leftGenericFormalParameterList_5019, inCompiler) ;
  GGS_location var_operationLocation_5058 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 122)) ;
  GGS_compileTimeInfixOperatorEnumeration var_infixOperator_5129 ;
  nt_compileTimeInfixOperator_ (var_infixOperator_5129, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 124)) ;
  GGS_lstring var_rightVariableName_5173 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 125)) ;
  GGS_lstring var_rightType_5209 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 126)) ;
  GGS_genericFormalParameterList var_rightGenericFormalParameterList_5255 ;
  nt_generic_5F_formal_5F_arguments_ (var_rightGenericFormalParameterList_5255, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 128)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 129)) ;
  GGS_lstring var_resultType_5322 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 130)) ;
  GGS_genericFormalParameterList var_resultGenericFormalParameterList_5369 ;
  nt_generic_5F_formal_5F_arguments_ (var_resultGenericFormalParameterList_5369, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 132)) ;
  GGS_llvmGenerationInstructionList var_instructionList_5443 ;
  nt_llvm_5F_instruction_5F_list_ (var_instructionList_5443, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 134)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_llvmInfixOperatorAST::init_21__21__21__21__21__21__21__21__21__21__21_ (extensionGetter_omnibusInfixOperator (var_infixOperator_5129, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 136)), var_operationLocation_5058, var_leftVariableName_4979, var_leftTypeName_5001, var_leftGenericFormalParameterList_5019, var_rightVariableName_5173, var_rightType_5209, var_rightGenericFormalParameterList_5255, var_resultType_5322, var_resultGenericFormalParameterList_5369, var_instructionList_5443, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 135)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compileTimePrefixOperator_i85_ (GGS_compileTimePrefixOperatorEnumeration & outArgument_outOperator,
                                                                                       Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperator.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_94 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 55)) ;
    outArgument_outOperator = GGS_compileTimePrefixOperatorEnumeration::class_func_notOp (SOURCE_FILE ("prefix-operator-compile-time.galgas", 56)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 58)) ;
    outArgument_outOperator = GGS_compileTimePrefixOperatorEnumeration::class_func_minusOp (SOURCE_FILE ("prefix-operator-compile-time.galgas", 59)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i86_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 67)) ;
  GGS_location var_operationLocation_2584 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 68)) ;
  GGS_compileTimePrefixOperatorEnumeration var_prefixOperator_2656 ;
  nt_compileTimePrefixOperator_ (var_prefixOperator_2656, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 70)) ;
  GGS_lstring var_receiverName_2701 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 71)) ;
  GGS_lstring var_receiverType_2732 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 72)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 73)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 74)) ;
  GGS_lstring var_resultType_2780 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 75)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 76)) ;
  GGS_ctExpressionAST var_expression_2851 ;
  nt_compile_5F_time_5F_expression_ (var_expression_2851, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 78)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_compiletimePrefixOperatorAST::init_21__21__21__21__21__21_ (var_prefixOperator_2656, var_operationLocation_2584, var_receiverName_2701, var_receiverType_2732, var_expression_2851, var_resultType_2780, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 79)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvmPrefixOperator_i87_ (GGS_llvmPrefixOperatorEnumeration & outArgument_outOperator,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperator.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_95 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 123)) ;
    outArgument_outOperator = GGS_llvmPrefixOperatorEnumeration::class_func_notOp (SOURCE_FILE ("prefix-operator-llvm.galgas", 124)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 126)) ;
    outArgument_outOperator = GGS_llvmPrefixOperatorEnumeration::class_func_minusOp (SOURCE_FILE ("prefix-operator-llvm.galgas", 127)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 129)) ;
    outArgument_outOperator = GGS_llvmPrefixOperatorEnumeration::class_func_minusOpNoOvf (SOURCE_FILE ("prefix-operator-llvm.galgas", 130)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 132)) ;
    outArgument_outOperator = GGS_llvmPrefixOperatorEnumeration::class_func_bitWiseComplement (SOURCE_FILE ("prefix-operator-llvm.galgas", 133)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i88_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 140)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 141)) ;
  GGS_location var_operationLocation_5299 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 142)) ;
  GGS_llvmPrefixOperatorEnumeration var_prefixOperator_5364 ;
  nt_llvmPrefixOperator_ (var_prefixOperator_5364, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 144)) ;
  GGS_lstring var_receiverName_5409 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 145)) ;
  GGS_lstring var_receiverType_5440 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 146)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 147)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 148)) ;
  GGS_lstring var_resultType_5488 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 149)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 150)) ;
  GGS_llvmGenerationInstructionList var_instructionList_5540 ;
  nt_llvm_5F_instruction_5F_list_ (var_instructionList_5540, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 152)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_llvmPrefixOperatorAST::init_21__21__21__21__21__21_ (var_prefixOperator_5364, var_operationLocation_5299, var_receiverName_5409, var_receiverType_5440, var_instructionList_5540, var_resultType_5488, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 153)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instructionList_i89_ (GGS_ast & ioArgument_ioAST,
                                                                             GGS_instructionListAST & outArgument_outInstructionList,
                                                                             Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  GGS_instructionListAST temp_0 = GGS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 24)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i90_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_ctAssert COMMA_SOURCE_FILE ("directive-check.galgas", 19)) ;
  GGS_lstring var_checkMessage_1031 ;
  switch (select_omnibus_5F_syntax_97 (inCompiler)) {
  case 1: {
    var_checkMessage_1031 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 22)) ;
  } break ;
  case 2: {
    var_checkMessage_1031 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("directive-check.galgas", 24)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("directive-check.galgas", 26)) ;
  GGS_expressionAST var_expression_1185 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1185, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_checkInstructionAST::init_21__21__21_ (var_checkMessage_1031.readProperty_location (), var_checkMessage_1031, var_expression_1185, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("directive-check.galgas", 28)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i91_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_assert COMMA_SOURCE_FILE ("instruction-assert.galgas", 18)) ;
  GGS_location var_loc_985 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 19)) ;
  GGS_expressionAST var_expression_1051 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1051, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_assertInstructionAST::init_21__21_ (var_loc_985, var_expression_1051, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assert.galgas", 21)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i92_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_LValueAST var_assignmentTargetAST_1057 ;
  nt_lvalue_ (ioArgument_ioAST, var_assignmentTargetAST_1057, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 21)) ;
  GGS_expressionAST var_sourceExpression_1140 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_1140, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_assignmentInstructionAST::init_21__21__21_ (var_assignmentTargetAST_1057.readProperty_mIdentifier ().readProperty_location (), var_assignmentTargetAST_1057, var_sourceExpression_1140, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 24)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i93_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_controlRegisterLValueAST var_registerLValue_1468 ;
  nt_control_5F_register_5F_lvalue_ (ioArgument_ioAST, var_registerLValue_1468, inCompiler) ;
  GGS_controlRegisterAssignmentOperatorKind var_assignmentKind_1571 ;
  switch (select_omnibus_5F_syntax_98 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 31)) ;
    var_assignmentKind_1571 = GGS_controlRegisterAssignmentOperatorKind::class_func_assignment (SOURCE_FILE ("instruction-assignment-control-register.galgas", 32)) ;
  } break ;
  case 2: {
    GGS_omnibusInfixOperator var_infixOperator_1696 ;
    GGS_location var_operatorLocation_1715 ;
    nt_assignment_5F_combined_5F_with_5F_operator_ (var_infixOperator_1696, var_operatorLocation_1715, inCompiler) ;
    var_assignmentKind_1571 = GGS_controlRegisterAssignmentOperatorKind::class_func_assignmentWithOperator (var_infixOperator_1696, var_operatorLocation_1715  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  GGS_expressionAST var_sourceExpression_1908 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_1908, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_controlRegisterAssignmentInstructionAST::init_21__21__21__21_ (var_registerLValue_1468.readProperty_mRegisterGroupName ().readProperty_location (), var_registerLValue_1468, var_assignmentKind_1571, var_sourceExpression_1908, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 40)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i94_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 37)) ;
  GGS_lstring var_typeName_1677 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 38)) ;
  GGS_sliceAssignmentListAST temp_0 = GGS_sliceAssignmentListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 39)) ;
  GGS_sliceAssignmentListAST var_sliceAssignmentListAST_1718 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_sliceWidth_1782 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 41)) ;
    GGS_sliceTargetAST var_sliceKind_1819 ;
    switch (select_omnibus_5F_syntax_100 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 44)) ;
      var_sliceKind_1819 = GGS_sliceTargetAST::class_func_discarded (SOURCE_FILE ("instruction-slice-assignment.galgas", 45)) ;
    } break ;
    case 2: {
      GGS_LValueAST var_target_1924 ;
      nt_lvalue_ (ioArgument_ioAST, var_target_1924, inCompiler) ;
      var_sliceKind_1819 = GGS_sliceTargetAST::class_func_lValue (var_target_1924  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 48)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 50)) ;
      GGS_lstring var_varName_2025 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 51)) ;
      var_sliceKind_1819 = GGS_sliceTargetAST::class_func_varDeclaration (var_varName_2025  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 52)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 54)) ;
      GGS_lstring var_letName_2137 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 55)) ;
      var_sliceKind_1819 = GGS_sliceTargetAST::class_func_letDeclaration (var_letName_2137  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 56)) ;
    } break ;
    default:
      break ;
    }
    var_sliceAssignmentListAST_1718.addAssignOperation (var_sliceWidth_1782, var_sliceKind_1819  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 58)) ;
    if (select_omnibus_5F_syntax_99 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 63)) ;
  GGS_expressionAST var_sourceExpression_2354 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_2354, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_sliceAssignmentInstructionAST::init_21__21__21__21__21_ (var_typeName_1677.readProperty_location (), var_typeName_1677, var_sliceAssignmentListAST_1718, var_sourceExpression_2354, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 71)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 66)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i95_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_controlRegisterLValueAST var_registerLValue_1236 ;
  nt_control_5F_register_5F_lvalue_ (ioArgument_ioAST, var_registerLValue_1236, inCompiler) ;
  GGS_lstring var_attribute_1273 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 23)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_attribute_1273.readProperty_string ().objectCompare (GGS_string ("bit"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("@bit")) ;
      inCompiler->emitSemanticError (var_attribute_1273.readProperty_location (), GGS_string ("attribute should be @bit"), fixItArray1  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 25)) ;
    }
  }
  GGS_expressionAST var_bitExpression_1435 ;
  nt_expression_ (ioArgument_ioAST, var_bitExpression_1435, inCompiler) ;
  GGS_location var_bitExpressionLocation_1457 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 29)) ;
  GGS_expressionAST var_sourceExpression_1534 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_1534, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_bitbandInstructionAST::init_21__21__21__21__21__21_ (var_registerLValue_1236.readProperty_mRegisterGroupName ().readProperty_location (), var_registerLValue_1236, var_bitExpression_1435, var_bitExpressionLocation_1457, var_sourceExpression_1534, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 38)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 32)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_assignment_5F_combined_5F_with_5F_operator_i96_ (GGS_omnibusInfixOperator & outArgument_outInfixOperator,
                                                                                                        GGS_location & outArgument_outOperatorLocation,
                                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInfixOperator.drop () ; // Release 'out' argument
  outArgument_outOperatorLocation.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_101 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 11)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 12)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 14)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_bitWiseAndOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 15)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 17)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 18)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 20)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_addOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 21)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 23)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_addOpNoOvf (SOURCE_FILE ("instruction-assignment-operator.galgas", 24)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 26)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_subOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 27)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 29)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_subOpNoOvf (SOURCE_FILE ("instruction-assignment-operator.galgas", 30)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 32)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_mulOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 33)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 35)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_mulOpNoOvf (SOURCE_FILE ("instruction-assignment-operator.galgas", 36)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 38)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_leftShiftOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 39)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 41)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_rightShiftOp (SOURCE_FILE ("instruction-assignment-operator.galgas", 42)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outOperatorLocation = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 44)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i97_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_LValueAST var_lvalue_1483 ;
  nt_lvalue_ (ioArgument_ioAST, var_lvalue_1483, inCompiler) ;
  GGS_location var_instructionLocation_1498 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 52)) ;
  GGS_omnibusInfixOperator var_infixOperator_1607 ;
  GGS_location var_operatorLocation_1626 ;
  nt_assignment_5F_combined_5F_with_5F_operator_ (var_infixOperator_1607, var_operatorLocation_1626, inCompiler) ;
  GGS_expressionAST var_rightExpression_1712 ;
  nt_expression_ (ioArgument_ioAST, var_rightExpression_1712, inCompiler) ;
  GGS_primaryInExpressionAccessListAST temp_0 = GGS_primaryInExpressionAccessListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 58)) ;
  GGS_primaryInExpressionAccessListAST var_expressionAccessList_1801 = temp_0 ;
  extensionMethod_buildExpressionAccessList (var_lvalue_1483.readProperty_mOperand (), var_expressionAccessList_1801, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 59)) ;
  GGS_primaryInExpressionAST var_leftExpression_2306 = GGS_primaryInExpressionAST::init_21__21_ (var_lvalue_1483.readProperty_mIdentifier (), var_expressionAccessList_1801, inCompiler COMMA_HERE) ;
  GGS_omnibusInfixOperatorExpressionAST var_expression_2399 = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (var_leftExpression_2306, var_operatorLocation_1626, var_infixOperator_1607, var_rightExpression_1712, inCompiler COMMA_HERE) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_assignmentInstructionAST::init_21__21__21_ (var_instructionLocation_1498, var_lvalue_1483, var_expression_2399, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 76)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i98_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 27)) ;
  GGS_lstring var_varName_1306 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas", 29)) ;
  GGS_expressionAST var_expression_1367 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1367, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_varInstructionWithAssignmentAST::init_21__21__21__21_ (var_varName_1306.readProperty_location (), var_varName_1306, GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 34)), var_expression_1367, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-var.galgas", 31)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i99_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas", 66)) ;
  GGS_lstring var_varName_2444 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas", 67)) ;
  GGS_lstring var_typeName_2487 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_2487, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_varDeclarationInstructionAST::init_21__21__21_ (var_varName_2444.readProperty_location (), var_varName_2444, var_typeName_2487, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-var.galgas", 69)) ;
  switch (select_omnibus_5F_syntax_102 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas", 76)) ;
    GGS_expressionAST var_sourceExpression_2690 ;
    nt_expression_ (ioArgument_ioAST, var_sourceExpression_2690, inCompiler) ;
    GGS_LValueAST var_assignmentTargetAST_2717 = GGS_LValueAST::init_21__21_ (var_varName_2444, GGS_LValueOperandAST::class_func_noOperand (SOURCE_FILE ("instruction-var.galgas", 78)), inCompiler COMMA_HERE) ;
    ioArgument_ioInstructionList.addAssignOperation (GGS_assignmentInstructionAST::init_21__21__21_ (var_assignmentTargetAST_2717.readProperty_mIdentifier ().readProperty_location (), var_assignmentTargetAST_2717, var_sourceExpression_2690, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-var.galgas", 79)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i100_ (GGS_ast & ioArgument_ioAST,
                                                                          GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 20)) ;
  GGS_lstring var_varName_1089 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 21)) ;
  GGS_lstring var_optionalTypeName_1114 ;
  switch (select_omnibus_5F_syntax_103 (inCompiler)) {
  case 1: {
    var_optionalTypeName_1114 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-let.galgas", 24)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_optionalTypeName_1114, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 28)) ;
  GGS_expressionAST var_expression_1298 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1298, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_letInstructionWithAssignmentAST::init_21__21__21__21_ (var_varName_1089.readProperty_location (), var_varName_1089, var_optionalTypeName_1114, var_expression_1298, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-let.galgas", 30)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i101_ (GGS_ast & ioArgument_ioAST,
                                                                          GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("instruction-panic.galgas", 18)) ;
  GGS_location var_loc_987 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 19)) ;
  GGS_expressionAST var_codeExpression_1053 ;
  nt_expression_ (ioArgument_ioAST, var_codeExpression_1053, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_panicInstructionAST::init_21__21_ (var_loc_987, var_codeExpression_1053, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-panic.galgas", 21)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i102_ (GGS_ast & ioArgument_ioAST,
                                                                          GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_ifInstructionAST var_ifInstruction_1338 ;
  nt_if_5F_instruction_ (ioArgument_ioAST, var_ifInstruction_1338, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (var_ifInstruction_1338  COMMA_SOURCE_FILE ("instruction-if.galgas", 26)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_if_5F_instruction_i103_ (GGS_ast & ioArgument_ioAST,
                                                                                GGS_ifInstructionAST & outArgument_outIfInstruction,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outIfInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 32)) ;
  GGS_location var_instructionLocation_1613 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 33)) ;
  GGS_bool var_staticIfExpression_1664 ;
  switch (select_omnibus_5F_syntax_104 (inCompiler)) {
  case 1: {
    GGS_lstring var_attributeValue_1719 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 36)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_attributeValue_1719.readProperty_string ().objectCompare (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 37)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_staticIfExpression_1664 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 42))) ;
      inCompiler->emitSemanticError (var_attributeValue_1719.readProperty_location (), GGS_string ("the attribute should be \"@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 40)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 40)), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 40)) ;
      var_staticIfExpression_1664.drop () ; // Release error dropped variable
    }
  } break ;
  case 2: {
    var_staticIfExpression_1664 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GGS_expressionAST var_testExpression_2108 ;
  nt_expression_ (ioArgument_ioAST, var_testExpression_2108, inCompiler) ;
  GGS_location var_testExpressionEndLocation_2131 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 48)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 49)) ;
  GGS_instructionListAST var_thenInstructionList_2217 ;
  nt_instructionList_ (ioArgument_ioAST, var_thenInstructionList_2217, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 51)) ;
  GGS_location var_endOfThenBranch_2253 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 52)) ;
  GGS_instructionListAST var_elseInstructionList_2314 ;
  switch (select_omnibus_5F_syntax_105 (inCompiler)) {
  case 1: {
    GGS_instructionListAST temp_2 = GGS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 55)) ;
    var_elseInstructionList_2314 = temp_2 ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 57)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 58)) ;
    nt_instructionList_ (ioArgument_ioAST, var_elseInstructionList_2314, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 60)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
    GGS_ifInstructionAST var_ifInstruction_2526 ;
    nt_if_5F_instruction_ (ioArgument_ioAST, var_ifInstruction_2526, inCompiler) ;
    GGS_instructionListAST temp_3 = GGS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 64)) ;
    temp_3.plusPlusAssignOperation (GGS_instructionListAST_2E_element::init_21_ (var_ifInstruction_2526, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-if.galgas", 64)) ;
    var_elseInstructionList_2314 = temp_3 ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfElseBranch_2604 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 66)) ;
  outArgument_outIfInstruction = GGS_ifInstructionAST::init_21__21__21__21__21__21__21__21__21_ (var_instructionLocation_1613, var_testExpression_2108, var_testExpressionEndLocation_2131, var_staticIfExpression_1664, var_thenInstructionList_2217, var_endOfThenBranch_2253, var_elseInstructionList_2314, var_endOfElseBranch_2604, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 76)), inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guarded_5F_command_i104_ (GGS_ast & ioArgument_ioAST,
                                                                                 const GGS_bool constinArgument_inIsExitCommand,
                                                                                 GGS_guardedCommandAST & outArgument_outGuardedCommand,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outGuardedCommand.drop () ; // Release 'out' argument
  GGS_location var_endOfExp_2033 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 43)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("instruction-event.galgas", 44)) ;
  GGS_lbool var_usesSelf_2086 ;
  switch (select_omnibus_5F_syntax_106 (inCompiler)) {
  case 1: {
    var_usesSelf_2086 = GGS_lbool::init_21__21_ (GGS_bool (false), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 47)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-event.galgas", 49)) ;
    var_usesSelf_2086 = GGS_lbool::init_21__21_ (GGS_bool (true), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 50)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 53)) ;
  GGS_lstringlist var_nameList_2232 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_name_2282 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-event.galgas", 55)) ;
    var_nameList_2232.addAssignOperation (var_name_2282  COMMA_SOURCE_FILE ("instruction-event.galgas", 56)) ;
    if (select_omnibus_5F_syntax_107 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 58)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_effectiveArgumentListAST var_effectiveParameterList_2379 ;
  GGS_location joker_2402 ; // Joker input parameter
  nt_effective_5F_parameters_ (ioArgument_ioAST, var_effectiveParameterList_2379, joker_2402, inCompiler) ;
  joker_2402.drop () ; // Release temporary input variables (joker in source)
  outArgument_outGuardedCommand = GGS_guardedCommandAST::class_func_boolAndSync (constinArgument_inIsExitCommand, GGS_literalBooleanInExpressionAST::init_21_ (GGS_bool (true), inCompiler COMMA_HERE), GGS_bool (false), var_endOfExp_2033, var_usesSelf_2086, var_nameList_2232, var_effectiveParameterList_2379  COMMA_SOURCE_FILE ("instruction-event.galgas", 61)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guarded_5F_command_i105_ (GGS_ast & ioArgument_ioAST,
                                                                                 const GGS_bool constinArgument_inIsExitCommand,
                                                                                 GGS_guardedCommandAST & outArgument_outGuardedCommand,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outGuardedCommand.drop () ; // Release 'out' argument
  GGS_expressionAST var_expression_2983 ;
  nt_expression_ (ioArgument_ioAST, var_expression_2983, inCompiler) ;
  GGS_location var_endOfExp_3002 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 76)) ;
  switch (select_omnibus_5F_syntax_108 (inCompiler)) {
  case 1: {
    outArgument_outGuardedCommand = GGS_guardedCommandAST::class_func_boolean (constinArgument_inIsExitCommand, var_expression_2983, var_endOfExp_3002  COMMA_SOURCE_FILE ("instruction-event.galgas", 78)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("instruction-event.galgas", 84)) ;
    GGS_lbool var_usesSelf_3226 ;
    switch (select_omnibus_5F_syntax_109 (inCompiler)) {
    case 1: {
      var_usesSelf_3226 = GGS_lbool::init_21__21_ (GGS_bool (false), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 87)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-event.galgas", 89)) ;
      var_usesSelf_3226 = GGS_lbool::init_21__21_ (GGS_bool (true), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 90)), inCompiler COMMA_HERE) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 91)) ;
    } break ;
    default:
      break ;
    }
    GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 93)) ;
    GGS_lstringlist var_nameList_3388 = temp_0 ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_name_3442 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-event.galgas", 95)) ;
      var_nameList_3388.addAssignOperation (var_name_3442  COMMA_SOURCE_FILE ("instruction-event.galgas", 96)) ;
      if (select_omnibus_5F_syntax_110 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas", 98)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    GGS_effectiveArgumentListAST var_effectiveParameterList_3549 ;
    GGS_location joker_3572 ; // Joker input parameter
    nt_effective_5F_parameters_ (ioArgument_ioAST, var_effectiveParameterList_3549, joker_3572, inCompiler) ;
    joker_3572.drop () ; // Release temporary input variables (joker in source)
    outArgument_outGuardedCommand = GGS_guardedCommandAST::class_func_boolAndSync (constinArgument_inIsExitCommand, var_expression_2983, GGS_bool (true), var_endOfExp_3002, var_usesSelf_3226, var_nameList_3388, var_effectiveParameterList_3549  COMMA_SOURCE_FILE ("instruction-event.galgas", 101)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i106_ (GGS_ast & ioArgument_ioAST,
                                                                          GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("instruction-event.galgas", 116)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-event.galgas", 117)) ;
  GGS_location var_startLocation_4117 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 118)) ;
  GGS_syncInstructionBranchListAST temp_0 = GGS_syncInstructionBranchListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 119)) ;
  GGS_syncInstructionBranchListAST var_instructionBranchList_4186 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_111 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_when COMMA_SOURCE_FILE ("instruction-event.galgas", 122)) ;
      GGS_guardedCommandAST var_guardedCommand_4310 ;
      nt_guarded_5F_command_ (ioArgument_ioAST, GGS_bool (true), var_guardedCommand_4310, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-event.galgas", 124)) ;
      GGS_instructionListAST var_instructionList_4372 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_4372, inCompiler) ;
      var_instructionBranchList_4186.addAssignOperation (var_guardedCommand_4310, var_instructionList_4372, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 126))  COMMA_SOURCE_FILE ("instruction-event.galgas", 126)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-event.galgas", 134)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_syncInstructionAST::init_21__21__21_ (var_startLocation_4117, var_instructionBranchList_4186, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 135)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-event.galgas", 135)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i107_ (GGS_ast & ioArgument_ioAST,
                                                                          GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-while.galgas", 22)) ;
  GGS_location var_instructionLocation_1150 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 23)) ;
  GGS_expressionAST var_testExpression_1232 ;
  nt_expression_ (ioArgument_ioAST, var_testExpression_1232, inCompiler) ;
  GGS_location var_testExpressionEndLocation_1255 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 25)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-while.galgas", 26)) ;
  GGS_instructionListAST var_instructionList_1341 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1341, inCompiler) ;
  GGS_location var_endOfInstruction_1365 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-while.galgas", 29)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_whileInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_1150, var_testExpression_1232, var_testExpressionEndLocation_1255, var_instructionList_1341, var_endOfInstruction_1365, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-while.galgas", 30)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i108_ (GGS_ast & ioArgument_ioAST,
                                                                          GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 24)) ;
  GGS_lstring var_varName_1253 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 25)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 26)) ;
  GGS_lstring var_iteratedObject_1292 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 27)) ;
  GGS_bool var_staticWhileExpression_1315 = GGS_bool (false) ;
  GGS_expressionAST var_whileExpression_1368 ;
  switch (select_omnibus_5F_syntax_112 (inCompiler)) {
  case 1: {
    var_whileExpression_1368 = GGS_literalBooleanInExpressionAST::init_21_ (GGS_bool (true), inCompiler COMMA_HERE) ;
    var_staticWhileExpression_1315 = GGS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 34)) ;
    switch (select_omnibus_5F_syntax_113 (inCompiler)) {
    case 1: {
      GGS_lstring var_attributeValue_1554 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 36)) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = GGS_bool (ComparisonKind::equal, var_attributeValue_1554.readProperty_string ().objectCompare (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 37)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          var_staticWhileExpression_1315 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 41))) ;
        inCompiler->emitSemanticError (var_attributeValue_1554.readProperty_location (), GGS_string ("the attribute should be \"@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 40)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 40)), fixItArray1  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 40)) ;
      }
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    nt_expression_ (ioArgument_ioAST, var_whileExpression_1368, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOf_5F_whileExpression_5F_instruction_1917 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 47)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 48)) ;
  GGS_instructionListAST var_instructionList_2011 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_2011, inCompiler) ;
  GGS_location var_endOfInstruction_2035 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 50)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 51)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_forInstructionAST::init_21__21__21__21__21__21__21__21_ (var_varName_1253.readProperty_location (), var_varName_1253, var_iteratedObject_1292, var_whileExpression_1368, var_endOf_5F_whileExpression_5F_instruction_1917, var_staticWhileExpression_1315, var_instructionList_2011, var_endOfInstruction_2035, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 52)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i109_ (GGS_ast & ioArgument_ioAST,
                                                                          GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 25)) ;
  GGS_lstring var_varName_1349 ;
  switch (select_omnibus_5F_syntax_114 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 28)) ;
    var_varName_1349 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 29)) ;
  } break ;
  case 2: {
    var_varName_1349 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_typeName_1482 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1482, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 34)) ;
  GGS_expressionAST var_lowerBoundExpression_1546 ;
  nt_expression_ (ioArgument_ioAST, var_lowerBoundExpression_1546, inCompiler) ;
  GGS_location var_endOf_5F_lowerBoundExpression_5F_instruction_1575 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 37)) ;
  GGS_expressionAST var_upperBoundExpression_1687 ;
  nt_expression_ (ioArgument_ioAST, var_upperBoundExpression_1687, inCompiler) ;
  GGS_location var_endOf_5F_upperBoundExpression_5F_instruction_1716 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 40)) ;
  GGS_instructionListAST var_instructionList_1815 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1815, inCompiler) ;
  GGS_location var_endOfInstruction_1839 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 43)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_forLowerUpperBoundInstructionAST::init_21__21__21__21__21__21__21__21__21_ (var_varName_1349.readProperty_location (), var_varName_1349, var_typeName_1482, var_lowerBoundExpression_1546, var_endOf_5F_lowerBoundExpression_5F_instruction_1575, var_upperBoundExpression_1687, var_endOf_5F_upperBoundExpression_5F_instruction_1716, var_instructionList_1815, var_endOfInstruction_1839, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 44)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i110_ (GGS_ast & ioArgument_ioAST,
                                                                          GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_callInstructionAST var_routineCallInstruction_1564 ;
  nt_procedure_5F_call_ (ioArgument_ioAST, var_routineCallInstruction_1564, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (var_routineCallInstruction_1564  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 33)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_call_i111_ (GGS_ast & ioArgument_ioAST,
                                                                                GGS_callInstructionAST & outArgument_outInstruction,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_location var_instructionLocation_1846 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 39)) ;
  GGS_LValueAST var_assignmentTargetAST_1909 ;
  nt_lvalue_ (ioArgument_ioAST, var_assignmentTargetAST_1909, inCompiler) ;
  GGS_effectiveArgumentListAST var_arguments_1969 ;
  GGS_location var_endOfArguments_1984 ;
  nt_effective_5F_parameters_ (ioArgument_ioAST, var_arguments_1969, var_endOfArguments_1984, inCompiler) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_assignmentTargetAST_1909.readProperty_mOperand ().objectCompare (GGS_LValueOperandAST::class_func_noOperand (SOURCE_FILE ("instruction-procedure-call.galgas", 42)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_assignmentTargetAST_1909.readProperty_mIdentifier ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 42)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outInstruction = GGS_standAloneProcedureCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_1846, var_arguments_1969, var_endOfArguments_1984, var_assignmentTargetAST_1909.readProperty_mIdentifier (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_accessInAssignmentListAST temp_1 = GGS_accessInAssignmentListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 50)) ;
    GGS_accessInAssignmentListAST var_accessList_2336 = temp_1 ;
    extensionMethod_buildProcedureCallAccessList (var_assignmentTargetAST_1909.readProperty_mOperand (), var_accessList_2336, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 51)) ;
    outArgument_outInstruction = GGS_procedureCallInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_1846, var_arguments_1969, var_endOfArguments_1984, var_assignmentTargetAST_1909.readProperty_mIdentifier (), var_accessList_2336, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i112_ (GGS_ast & ioArgument_ioAST,
                                                                          GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 28)) ;
  GGS_location var_instructionLocation_1383 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 29)) ;
  GGS_expressionAST var_switchExpression_1465 ;
  nt_expression_ (ioArgument_ioAST, var_switchExpression_1465, inCompiler) ;
  GGS_location var_switchExpressionEndLocation_1490 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 32)) ;
  GGS_switchCaseListAST temp_0 = GGS_switchCaseListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 33)) ;
  GGS_switchCaseListAST var_switchCaseList_1570 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 35)) ;
    GGS_lstringlist temp_2 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 36)) ;
    GGS_lstringlist var_caseIdentifiers_1638 = temp_2 ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GGS_lstring var_caseIdf_1699 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
      var_caseIdentifiers_1638.addAssignOperation (var_caseIdf_1699  COMMA_SOURCE_FILE ("instruction-switch.galgas", 39)) ;
      if (select_omnibus_5F_syntax_116 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 41)) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 43)) ;
    GGS_instructionListAST var_instructionList_1824 ;
    nt_instructionList_ (ioArgument_ioAST, var_instructionList_1824, inCompiler) ;
    var_switchCaseList_1570.addAssignOperation (var_caseIdentifiers_1638, var_instructionList_1824  COMMA_SOURCE_FILE ("instruction-switch.galgas", 45)) ;
    if (select_omnibus_5F_syntax_115 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_location var_endOfInstruction_1924 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 49)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_switchInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_1383, var_switchExpression_1465, var_switchExpressionEndLocation_1490, var_switchCaseList_1570, var_endOfInstruction_1924, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 50)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_i113_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_LValueAST & outArgument_outAssignmentTargetAST,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outAssignmentTargetAST.drop () ; // Release 'out' argument
  GGS_lstring var_receiver_1898 ;
  switch (select_omnibus_5F_syntax_117 (inCompiler)) {
  case 1: {
    var_receiver_1898 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 43)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("lvalue.galgas", 45)) ;
    var_receiver_1898 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 46)) ;
  } break ;
  default:
    break ;
  }
  GGS_LValueOperandAST var_operand_2036 ;
  nt_lvalue_5F_operand_ (ioArgument_ioAST, var_operand_2036, inCompiler) ;
  outArgument_outAssignmentTargetAST = GGS_LValueAST::init_21__21_ (var_receiver_1898, var_operand_2036, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i114_ (GGS_ast & /* ioArgument_ioAST */,
                                                                                GGS_LValueOperandAST & outArgument_outOperand,
                                                                                Lexique_omnibus_5F_lexique * /* inCompiler */) {
  outArgument_outOperand.drop () ; // Release 'out' argument
  outArgument_outOperand = GGS_LValueOperandAST::class_func_noOperand (SOURCE_FILE ("lvalue.galgas", 55)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i114_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i114_indexing (Lexique_omnibus_5F_lexique * /* inCompiler */) {
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i115_ (GGS_ast & ioArgument_ioAST,
                                                                                GGS_LValueOperandAST & outArgument_outOperand,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperand.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue.galgas", 61)) ;
  GGS_lstring var_propertyName_2554 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas", 62)) ;
  GGS_LValueOperandAST var_operand_2601 ;
  nt_lvalue_5F_operand_ (ioArgument_ioAST, var_operand_2601, inCompiler) ;
  outArgument_outOperand = GGS_LValueOperandAST::class_func_property (var_propertyName_2554, var_operand_2601  COMMA_SOURCE_FILE ("lvalue.galgas", 64)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i116_ (GGS_ast & ioArgument_ioAST,
                                                                                GGS_LValueOperandAST & outArgument_outOperand,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperand.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue.galgas", 70)) ;
  GGS_expressionAST var_expression_2907 ;
  nt_expression_ (ioArgument_ioAST, var_expression_2907, inCompiler) ;
  GGS_location var_endOfIndex_2926 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 72)) ;
  GGS_bool var_checkIndexExpression_2968 ;
  switch (select_omnibus_5F_syntax_118 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue.galgas", 75)) ;
    var_checkIndexExpression_2968 = GGS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue.galgas", 78)) ;
    var_checkIndexExpression_2968 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GGS_LValueOperandAST var_operand_3139 ;
  nt_lvalue_5F_operand_ (ioArgument_ioAST, var_operand_3139, inCompiler) ;
  outArgument_outOperand = GGS_LValueOperandAST::class_func_arrayAccess (var_expression_2907, var_endOfIndex_2926, var_checkIndexExpression_2968, var_operand_3139  COMMA_SOURCE_FILE ("lvalue.galgas", 82)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_control_5F_register_5F_lvalue_i117_ (GGS_ast & ioArgument_ioAST,
                                                                                            GGS_controlRegisterLValueAST & outArgument_outRegisterLValue,
                                                                                            Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outRegisterLValue.drop () ; // Release 'out' argument
  GGS_lstring var_registerGroupName_1642 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 35)) ;
  GGS_registerGroupIndexAST var_groupIndex_1691 ;
  switch (select_omnibus_5F_syntax_119 (inCompiler)) {
  case 1: {
    var_groupIndex_1691 = GGS_registerGroupIndexAST::class_func_noIndex (SOURCE_FILE ("lvalue-control-register.galgas", 38)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 40)) ;
    GGS_expressionAST var_expression_1790 ;
    nt_expression_ (ioArgument_ioAST, var_expression_1790, inCompiler) ;
    GGS_location var_endOfIndex_1811 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 42)) ;
    GGS_bool var_checkIndexExpression_1855 ;
    switch (select_omnibus_5F_syntax_120 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 45)) ;
      var_checkIndexExpression_1855 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 48)) ;
      var_checkIndexExpression_1855 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    var_groupIndex_1691 = GGS_registerGroupIndexAST::class_func_index (var_expression_1790, var_endOfIndex_1811, var_checkIndexExpression_1855  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 53)) ;
  GGS_lstring var_registerName_2155 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 54)) ;
  GGS_registerIndexAST var_registerIndex_2194 ;
  switch (select_omnibus_5F_syntax_121 (inCompiler)) {
  case 1: {
    var_registerIndex_2194 = GGS_registerIndexAST::class_func_noIndex (SOURCE_FILE ("lvalue-control-register.galgas", 57)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 59)) ;
    GGS_expressionAST var_expression_2299 ;
    nt_expression_ (ioArgument_ioAST, var_expression_2299, inCompiler) ;
    GGS_location var_endOfIndex_2320 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 61)) ;
    GGS_bool var_checkIndexExpression_2364 ;
    switch (select_omnibus_5F_syntax_122 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 64)) ;
      var_checkIndexExpression_2364 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 67)) ;
      var_checkIndexExpression_2364 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    var_registerIndex_2194 = GGS_registerIndexAST::class_func_index (var_expression_2299, var_endOfIndex_2320, var_checkIndexExpression_2364  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 70)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outRegisterLValue = GGS_controlRegisterLValueAST::init_21__21__21__21_ (var_registerGroupName_1642, var_groupIndex_1691, var_registerName_2155, var_registerIndex_2194, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_effective_5F_parameters_i118_ (GGS_ast & ioArgument_ioAST,
                                                                                      GGS_effectiveArgumentListAST & outArgument_outEffectiveParameterList,
                                                                                      GGS_location & outArgument_outEndOfArgs,
                                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outEndOfArgs.drop () ; // Release 'out' argument
  GGS_effectiveArgumentListAST temp_0 = GGS_effectiveArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 59)) ;
  outArgument_outEffectiveParameterList = temp_0 ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 60)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_123 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_2639 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 63)) ;
      GGS_expressionAST var_expression_2680 ;
      nt_expression_ (ioArgument_ioAST, var_expression_2680, inCompiler) ;
      outArgument_outEffectiveParameterList.addAssignOperation (GGS_effectiveArgumentPassingModeAST::class_func_output (var_expression_2680, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 65))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 65)), var_selector_2639  COMMA_SOURCE_FILE ("effective-parameters.galgas", 65)) ;
    } break ;
    case 3: {
      GGS_lstring var_selector_2813 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 67)) ;
      GGS_lstring var_effectiveParameterName_2846 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 68)) ;
      outArgument_outEffectiveParameterList.addAssignOperation (GGS_effectiveArgumentPassingModeAST::class_func_outputInput (var_effectiveParameterName_2846  COMMA_SOURCE_FILE ("effective-parameters.galgas", 69)), var_selector_2813  COMMA_SOURCE_FILE ("effective-parameters.galgas", 69)) ;
    } break ;
    case 4: {
      GGS_lstring var_selector_2993 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 71)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("effective-parameters.galgas", 72)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 73)) ;
      GGS_lstring var_effectiveParameterName_3049 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 74)) ;
      outArgument_outEffectiveParameterList.addAssignOperation (GGS_effectiveArgumentPassingModeAST::class_func_outputInputSelfVariable (var_effectiveParameterName_3049  COMMA_SOURCE_FILE ("effective-parameters.galgas", 75)), var_selector_2993  COMMA_SOURCE_FILE ("effective-parameters.galgas", 75)) ;
    } break ;
    case 5: {
      GGS_lstring var_selector_3207 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 77)) ;
      GGS_lstring var_effectiveParameterName_3240 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 78)) ;
      outArgument_outEffectiveParameterList.addAssignOperation (GGS_effectiveArgumentPassingModeAST::class_func_input (var_effectiveParameterName_3240  COMMA_SOURCE_FILE ("effective-parameters.galgas", 79)), var_selector_3207  COMMA_SOURCE_FILE ("effective-parameters.galgas", 79)) ;
    } break ;
    case 6: {
      GGS_lstring var_selector_3380 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas", 81)) ;
      GGS_bool var_constant_3405 ;
      switch (select_omnibus_5F_syntax_124 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("effective-parameters.galgas", 84)) ;
        var_constant_3405 = GGS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("effective-parameters.galgas", 87)) ;
        var_constant_3405 = GGS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_effectiveParameterName_3547 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas", 90)) ;
      GGS_lstring var_typeName_3589 ;
      switch (select_omnibus_5F_syntax_125 (inCompiler)) {
      case 1: {
        var_typeName_3589 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("effective-parameters.galgas", 93)) ;
      } break ;
      case 2: {
        nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_3589, inCompiler) ;
      } break ;
      default:
        break ;
      }
      outArgument_outEffectiveParameterList.addAssignOperation (GGS_effectiveArgumentPassingModeAST::class_func_inputWithType (var_constant_3405, var_typeName_3589, var_effectiveParameterName_3547  COMMA_SOURCE_FILE ("effective-parameters.galgas", 98)), var_selector_3380  COMMA_SOURCE_FILE ("effective-parameters.galgas", 97)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  outArgument_outEndOfArgs = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 101)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i119_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_target COMMA_SOURCE_FILE ("target-generation.galgas", 10)) ;
  GGS_lstring var_targetName_546 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("target-generation.galgas", 11)) ;
  ioArgument_ioAST.mProperty_mTargetListAST.addAssignOperation (var_targetName_546  COMMA_SOURCE_FILE ("target-generation.galgas", 12)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i120_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_ctAssert COMMA_SOURCE_FILE ("declaration-check-target.galgas", 10)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_target COMMA_SOURCE_FILE ("declaration-check-target.galgas", 11)) ;
  GGS_location var_targetConstructLocation_549 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-check-target.galgas", 12)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-check-target.galgas", 13)) ;
  GGS_lstringlist var_acceptedTargetList_611 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_targetName_669 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 15)) ;
    var_acceptedTargetList_611.addAssignOperation (var_targetName_669  COMMA_SOURCE_FILE ("declaration-check-target.galgas", 16)) ;
    if (select_omnibus_5F_syntax_126 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-check-target.galgas", 18)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  ioArgument_ioAST.mProperty_mCheckTargetListAST.addAssignOperation (var_targetConstructLocation_549, var_acceptedTargetList_611  COMMA_SOURCE_FILE ("declaration-check-target.galgas", 20)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_i121_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                            Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_127 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 59)) ;
      GGS_location var_operatorLocation_2458 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 60)) ;
      GGS_ctExpressionAST var_rightExpression_2541 ;
      nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_ (var_rightExpression_2541, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_2458, GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseOrOp (SOURCE_FILE ("compile-time-expression.galgas", 65)), var_rightExpression_2541, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_xor_i122_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                                              Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_128 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 77)) ;
      GGS_location var_operatorLocation_3019 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 78)) ;
      GGS_ctExpressionAST var_rightExpression_3102 ;
      nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_ (var_rightExpression_3102, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_3019, GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseXorOp (SOURCE_FILE ("compile-time-expression.galgas", 83)), var_rightExpression_3102, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_and_i123_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                                              Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_equality_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_129 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 95)) ;
      GGS_location var_operatorLocation_3579 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 96)) ;
      GGS_ctExpressionAST var_rightExpression_3659 ;
      nt_compile_5F_time_5F_expression_5F_equality_ (var_rightExpression_3659, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_3579, GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseAndOp (SOURCE_FILE ("compile-time-expression.galgas", 101)), var_rightExpression_3659, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_equality_i124_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_comparison_ (outArgument_outExpression, inCompiler) ;
  switch (select_omnibus_5F_syntax_130 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 113)) ;
    GGS_location var_operatorLocation_4132 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 114)) ;
    GGS_ctExpressionAST var_rightExpression_4214 ;
    nt_compile_5F_time_5F_expression_5F_comparison_ (var_rightExpression_4214, inCompiler) ;
    outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_4132, GGS_compileTimeInfixOperatorEnumeration::class_func_equal (SOURCE_FILE ("compile-time-expression.galgas", 119)), var_rightExpression_4214, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 123)) ;
    GGS_location var_operatorLocation_4438 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 124)) ;
    GGS_ctExpressionAST var_rightExpression_4520 ;
    nt_compile_5F_time_5F_expression_5F_comparison_ (var_rightExpression_4520, inCompiler) ;
    GGS_ctInfixExpressionAST var_expression_4546 = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_4438, GGS_compileTimeInfixOperatorEnumeration::class_func_equal (SOURCE_FILE ("compile-time-expression.galgas", 129)), var_rightExpression_4520, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GGS_ctPrefixExpressionAST::init_21__21__21_ (var_operatorLocation_4438, GGS_compileTimePrefixOperatorEnumeration::class_func_notOp (SOURCE_FILE ("compile-time-expression.galgas", 134)), var_expression_4546, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_comparison_i125_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_shift_ (outArgument_outExpression, inCompiler) ;
  switch (select_omnibus_5F_syntax_131 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 146)) ;
    GGS_location var_operatorLocation_5143 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 147)) ;
    GGS_ctExpressionAST var_rightExpression_5220 ;
    nt_compile_5F_time_5F_expression_5F_shift_ (var_rightExpression_5220, inCompiler) ;
    GGS_ctInfixExpressionAST var_lessThanExpression_5246 = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_5143, GGS_compileTimeInfixOperatorEnumeration::class_func_lessThan (SOURCE_FILE ("compile-time-expression.galgas", 152)), var_rightExpression_5220, inCompiler COMMA_HERE) ;
    GGS_ctInfixExpressionAST var_equalExpression_5402 = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_5143, GGS_compileTimeInfixOperatorEnumeration::class_func_equal (SOURCE_FILE ("compile-time-expression.galgas", 158)), var_rightExpression_5220, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (var_lessThanExpression_5246, var_operatorLocation_5143, GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseOrOp (SOURCE_FILE ("compile-time-expression.galgas", 164)), var_equalExpression_5402, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 168)) ;
    GGS_location var_operatorLocation_5760 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 169)) ;
    GGS_ctExpressionAST var_rightExpression_5837 ;
    nt_compile_5F_time_5F_expression_5F_shift_ (var_rightExpression_5837, inCompiler) ;
    GGS_ctInfixExpressionAST var_expression_5863 = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_5760, GGS_compileTimeInfixOperatorEnumeration::class_func_lessThan (SOURCE_FILE ("compile-time-expression.galgas", 174)), var_rightExpression_5837, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GGS_ctPrefixExpressionAST::init_21__21__21_ (var_operatorLocation_5760, GGS_compileTimePrefixOperatorEnumeration::class_func_notOp (SOURCE_FILE ("compile-time-expression.galgas", 179)), var_expression_5863, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 183)) ;
    GGS_location var_operatorLocation_6145 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 184)) ;
    GGS_ctExpressionAST var_rightExpression_6222 ;
    nt_compile_5F_time_5F_expression_5F_shift_ (var_rightExpression_6222, inCompiler) ;
    outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_6145, GGS_compileTimeInfixOperatorEnumeration::class_func_lessThan (SOURCE_FILE ("compile-time-expression.galgas", 189)), var_rightExpression_6222, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 193)) ;
    GGS_location var_operatorLocation_6461 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 194)) ;
    GGS_ctExpressionAST var_rightExpression_6538 ;
    nt_compile_5F_time_5F_expression_5F_shift_ (var_rightExpression_6538, inCompiler) ;
    GGS_ctInfixExpressionAST var_lessThanExpression_6563 = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_6461, GGS_compileTimeInfixOperatorEnumeration::class_func_lessThan (SOURCE_FILE ("compile-time-expression.galgas", 199)), var_rightExpression_6538, inCompiler COMMA_HERE) ;
    GGS_ctInfixExpressionAST var_equalExpression_6719 = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_6461, GGS_compileTimeInfixOperatorEnumeration::class_func_equal (SOURCE_FILE ("compile-time-expression.galgas", 205)), var_rightExpression_6538, inCompiler COMMA_HERE) ;
    GGS_ctInfixExpressionAST var_lessThanOrEqualExpression_6869 = GGS_ctInfixExpressionAST::init_21__21__21__21_ (var_lessThanExpression_6563, var_operatorLocation_6461, GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseOrOp (SOURCE_FILE ("compile-time-expression.galgas", 211)), var_equalExpression_6719, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GGS_ctPrefixExpressionAST::init_21__21__21_ (var_operatorLocation_6461, GGS_compileTimePrefixOperatorEnumeration::class_func_notOp (SOURCE_FILE ("compile-time-expression.galgas", 216)), var_lessThanOrEqualExpression_6869, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_shift_i126_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_addition_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_132 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 228)) ;
      GGS_location var_operatorLocation_7466 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 229)) ;
      GGS_ctExpressionAST var_rightExpression_7546 ;
      nt_compile_5F_time_5F_expression_5F_addition_ (var_rightExpression_7546, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_7466, GGS_compileTimeInfixOperatorEnumeration::class_func_leftShift (SOURCE_FILE ("compile-time-expression.galgas", 234)), var_rightExpression_7546, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 238)) ;
      GGS_location var_operatorLocation_7741 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 239)) ;
      GGS_ctExpressionAST var_rightExpression_7821 ;
      nt_compile_5F_time_5F_expression_5F_addition_ (var_rightExpression_7821, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_7741, GGS_compileTimeInfixOperatorEnumeration::class_func_rightShift (SOURCE_FILE ("compile-time-expression.galgas", 244)), var_rightExpression_7821, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_addition_i127_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_product_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_133 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 256)) ;
      GGS_location var_operatorLocation_8291 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 257)) ;
      GGS_ctExpressionAST var_rightExpression_8370 ;
      nt_compile_5F_time_5F_expression_5F_product_ (var_rightExpression_8370, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_8291, GGS_compileTimeInfixOperatorEnumeration::class_func_addOp (SOURCE_FILE ("compile-time-expression.galgas", 262)), var_rightExpression_8370, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 266)) ;
      GGS_location var_operatorLocation_8560 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 267)) ;
      GGS_ctExpressionAST var_rightExpression_8639 ;
      nt_compile_5F_time_5F_expression_5F_product_ (var_rightExpression_8639, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_8560, GGS_compileTimeInfixOperatorEnumeration::class_func_addOp (SOURCE_FILE ("compile-time-expression.galgas", 272)), GGS_ctPrefixExpressionAST::init_21__21__21_ (var_operatorLocation_8560, GGS_compileTimePrefixOperatorEnumeration::class_func_minusOp (SOURCE_FILE ("compile-time-expression.galgas", 273)), var_rightExpression_8639, inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_product_i128_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                                       Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_primary_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_134 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 284)) ;
      GGS_location var_operatorLocation_9146 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 285)) ;
      GGS_ctExpressionAST var_rightExpression_9214 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_9214, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9146, GGS_compileTimeInfixOperatorEnumeration::class_func_mulOp (SOURCE_FILE ("compile-time-expression.galgas", 290)), var_rightExpression_9214, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 294)) ;
      GGS_location var_operatorLocation_9403 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 295)) ;
      GGS_ctExpressionAST var_rightExpression_9471 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_9471, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9403, GGS_compileTimeInfixOperatorEnumeration::class_func_modOp (SOURCE_FILE ("compile-time-expression.galgas", 300)), var_rightExpression_9471, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 304)) ;
      GGS_location var_operatorLocation_9662 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 305)) ;
      GGS_ctExpressionAST var_rightExpression_9730 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_9730, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9662, GGS_compileTimeInfixOperatorEnumeration::class_func_moduloNoOvf (SOURCE_FILE ("compile-time-expression.galgas", 310)), var_rightExpression_9730, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 314)) ;
      GGS_location var_operatorLocation_9926 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 315)) ;
      GGS_ctExpressionAST var_rightExpression_9994 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_9994, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9926, GGS_compileTimeInfixOperatorEnumeration::class_func_divOp (SOURCE_FILE ("compile-time-expression.galgas", 320)), var_rightExpression_9994, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 324)) ;
      GGS_location var_operatorLocation_10185 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 325)) ;
      GGS_ctExpressionAST var_rightExpression_10253 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_10253, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_10185, GGS_compileTimeInfixOperatorEnumeration::class_func_divNoOvf (SOURCE_FILE ("compile-time-expression.galgas", 330)), var_rightExpression_10253, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i129_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("compile-time-expression.galgas", 339)) ;
  GGS_location var_operatorLocation_10633 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 340)) ;
  GGS_ctExpressionAST var_expression_10699 ;
  nt_compile_5F_time_5F_primary_ (var_expression_10699, inCompiler) ;
  outArgument_outExpression = GGS_ctPrefixExpressionAST::init_21__21__21_ (var_operatorLocation_10633, GGS_compileTimePrefixOperatorEnumeration::class_func_notOp (SOURCE_FILE ("compile-time-expression.galgas", 344)), var_expression_10699, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i130_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas", 352)) ;
  GGS_location var_operatorLocation_11024 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 353)) ;
  GGS_ctExpressionAST var_expression_11090 ;
  nt_compile_5F_time_5F_primary_ (var_expression_11090, inCompiler) ;
  outArgument_outExpression = GGS_ctPrefixExpressionAST::init_21__21__21_ (var_operatorLocation_11024, GGS_compileTimePrefixOperatorEnumeration::class_func_minusOp (SOURCE_FILE ("compile-time-expression.galgas", 357)), var_expression_11090, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i131_ (GGS_ctExpressionAST & outArgument_outExpression,
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i132_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("compile-time-expression.galgas", 373)) ;
  outArgument_outExpression = GGS_ctTrueExpressionAST::init (inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i133_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("compile-time-expression.galgas", 380)) ;
  outArgument_outExpression = GGS_ctFalseExpressionAST::init (inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i134_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lbigint var_value_12162 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("compile-time-expression.galgas", 387)) ;
  outArgument_outExpression = GGS_ctIntExpressionAST::init_21_ (var_value_12162, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i135_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_name_12430 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("compile-time-expression.galgas", 394)) ;
  outArgument_outExpression = GGS_ctIdentifierExpressionAST::init_21_ (var_name_12430, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_generic_5F_formal_5F_arguments_i136_ (GGS_genericFormalParameterList & outArgument_outGenericFormalParameterList,
                                                                                             Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outGenericFormalParameterList.drop () ; // Release 'out' argument
  GGS_genericFormalParameterList temp_0 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 70)) ;
  outArgument_outGenericFormalParameterList = temp_0 ;
  switch (select_omnibus_5F_syntax_135 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 73)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_omnibus_5F_syntax_137 (inCompiler)) {
      case 1: {
        GGS_lstring var_constantName_2889 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 76)) ;
        outArgument_outGenericFormalParameterList.addAssignOperation (GGS_genericFormalParameter::class_func_constant (var_constantName_2889  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 77))  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 77)) ;
      } break ;
      case 2: {
        GGS_lstring var_typeName_3013 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 79)) ;
        outArgument_outGenericFormalParameterList.addAssignOperation (GGS_genericFormalParameter::class_func_type (var_typeName_3013  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 80))  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 80)) ;
      } break ;
      default:
        break ;
      }
      if (select_omnibus_5F_syntax_136 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 83)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 85)) ;
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
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 73)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_omnibus_5F_syntax_137 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 76)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 79)) ;
      } break ;
      default:
        break ;
      }
      if (select_omnibus_5F_syntax_136 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 83)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 85)) ;
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
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 73)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_omnibus_5F_syntax_137 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 76)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 79)) ;
      } break ;
      default:
        break ;
      }
      if (select_omnibus_5F_syntax_136 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 83)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 85)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_generic_5F_where_5F_clause_i137_ (GGS_ctExpressionAST & outArgument_outWhereClause,
                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outWhereClause.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_138 (inCompiler)) {
  case 1: {
    outArgument_outWhereClause = GGS_ctTrueExpressionAST::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_where COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 95)) ;
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
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_where COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 95)) ;
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
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_where COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 95)) ;
    nt_compile_5F_time_5F_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i138_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 103)) ;
  GGS_lstring var_typeName_3675 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 104)) ;
  GGS_genericFormalParameterList var_genericFormalParameterList_3720 ;
  nt_generic_5F_formal_5F_arguments_ (var_genericFormalParameterList_3720, inCompiler) ;
  GGS_ctExpressionAST var_whereClause_3779 ;
  nt_generic_5F_where_5F_clause_ (var_whereClause_3779, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 107)) ;
  GGS_lstring var_sizeKey_3821 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 108)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_sizeKey_3821.readProperty_string ().objectCompare (GGS_string ("size"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_sizeKey_3821.readProperty_location (), GGS_string ("this identifier should be 'size'"), fixItArray1  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 110)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 112)) ;
  GGS_lbigint var_bitSize_3958 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 125)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_llvmGenericType::init_21__21__21__21_ (var_typeName_3675, var_genericFormalParameterList_3720, var_whereClause_3779, var_bitSize_3958.readProperty_bigint (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 126)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i138_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 103)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 104)) ;
  nt_generic_5F_formal_5F_arguments_parse (inCompiler) ;
  nt_generic_5F_where_5F_clause_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 107)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 108)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 112)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 125)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i138_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 103)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 104)) ;
  nt_generic_5F_formal_5F_arguments_indexing (inCompiler) ;
  nt_generic_5F_where_5F_clause_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 107)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 108)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 112)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 125)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_function_5F_header_i139_ (GGS_lstring & outArgument_outTargetVariableName,
                                                                                         GGS_lstring & outArgument_outTargetTypeName,
                                                                                         GGS_genericFormalParameterList & outArgument_outTargetGenericFormalParameterList,
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i140_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_lstring var_targetVariableName_4956 ;
  GGS_lstring var_targetTypeName_4980 ;
  GGS_genericFormalParameterList var_targetGenericFormalParameterList_5000 ;
  nt_llvm_5F_function_5F_header_ (var_targetVariableName_4956, var_targetTypeName_4980, var_targetGenericFormalParameterList_5000, inCompiler) ;
  GGS_location var_operatorLocation_5041 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 114)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 115)) ;
  GGS_lstring var_sourceVariableName_5113 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 116)) ;
  GGS_lstring var_sourceTypeName_5150 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 117)) ;
  GGS_genericFormalParameterList var_sourceGenericFormalParameterList_5201 ;
  nt_generic_5F_formal_5F_arguments_ (var_sourceGenericFormalParameterList_5201, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 119)) ;
  GGS_ctExpressionAST var_whereClause_5274 ;
  nt_generic_5F_where_5F_clause_ (var_whereClause_5274, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 121)) ;
  GGS_llvmGenerationInstructionList var_instructionList_5327 ;
  nt_llvm_5F_instruction_5F_list_ (var_instructionList_5327, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 123)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_llvmAssignmentOperatorDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (var_operatorLocation_5041, var_targetVariableName_4956, var_targetTypeName_4980, var_targetGenericFormalParameterList_5000, var_sourceVariableName_5113, var_sourceTypeName_5150, var_sourceGenericFormalParameterList_5201, var_whereClause_5274, var_instructionList_5327, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 124)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_5F_list_i141_ (GGS_llvmGenerationInstructionList & outArgument_outInstructionList,
                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  GGS_llvmGenerationInstructionList temp_0 = GGS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 60)) ;
  outArgument_outInstructionList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_139 (inCompiler) == 2) {
      GGS_abstractLLVMInstruction var_instruction_2682 ;
      nt_llvm_5F_instruction_ (var_instruction_2682, inCompiler) ;
      outArgument_outInstructionList.addAssignOperation (var_instruction_2682  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 64)) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_i142_ (GGS_abstractLLVMInstruction & outArgument_outInstruction,
                                                                                  Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("llvm-instructions.galgas", 71)) ;
  GGS_lstring var_name_2971 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-instructions.galgas", 72)) ;
  outArgument_outInstruction = GGS_llvmVarInstruction::init_21_ (var_name_2971, inCompiler COMMA_HERE) ;
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

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_i143_ (GGS_abstractLLVMInstruction & outArgument_outInstruction,
                                                                                  Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-instructions.galgas", 79)) ;
  GGS_llvmGenerationInstructionElementList temp_0 = GGS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 80)) ;
  GGS_llvmGenerationInstructionElementList var_elementList_3280 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_141 (inCompiler)) {
    case 1: {
      GGS_lstring var_string_3346 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("llvm-instructions.galgas", 83)) ;
      var_elementList_3280.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (var_string_3346.readProperty_string ()  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 84))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 84)) ;
    } break ;
    case 2: {
      GGS_lstring var_name_3438 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-instructions.galgas", 86)) ;
      var_elementList_3280.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (var_name_3438  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 87))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 87)) ;
    } break ;
    case 3: {
      GGS_lstring var_typeName_3520 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-instructions.galgas", 89)) ;
      var_elementList_3280.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_type (var_typeName_3520  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 90))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 90)) ;
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
  outArgument_outInstruction = GGS_llvmGenerationInstruction::init_21_ (var_elementList_3280, inCompiler COMMA_HERE) ;
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



//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_ (const GGS_string constinArgument_inKey,
                                                                                                                             Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_lstring var_key_3267 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("configuration.galgas", 82)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_key_3267.readProperty_string ().objectCompare (constinArgument_inKey)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, constinArgument_inKey) ;
      inCompiler->emitSemanticError (var_key_3267.readProperty_location (), GGS_string ("invalid key (found '").add_operation (var_key_3267.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 84)).add_operation (GGS_string ("', required '"), inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 84)).add_operation (constinArgument_inKey, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 84)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 84)), fixItArray1  COMMA_SOURCE_FILE ("configuration.galgas", 84)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("configuration.galgas", 86)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("configuration.galgas", 82)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("configuration.galgas", 86)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("configuration.galgas", 82)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("configuration.galgas", 86)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_ (GGS__32_lstringlist & outArgument_outPythonUtilityToolList,
                                                                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outPythonUtilityToolList.drop () ; // Release 'out' argument
  nt_configuration_5F_key_ (GGS_string ("PYTHON_UTILITIES"), inCompiler) ;
  GGS__32_lstringlist temp_0 = GGS__32_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 93)) ;
  outArgument_outPythonUtilityToolList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_0 (inCompiler) == 2) {
      GGS_lstring var_relativePath_3749 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 96)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("configuration.galgas", 97)) ;
      GGS_lstring var_destinationFile_3795 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 98)) ;
      outArgument_outPythonUtilityToolList.addAssignOperation (var_relativePath_3749, var_destinationFile_3795  COMMA_SOURCE_FILE ("configuration.galgas", 99)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_configuration_5F_key_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_0 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 96)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("configuration.galgas", 97)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 98)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_configuration_5F_key_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_0 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 96)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("configuration.galgas", 97)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 98)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_ (GGS_ast & ioArgument_ioAST,
                                                                                                                                         GGS_lstringlist & outArgument_outImportedFileList,
                                                                                                                                         GGS_location & outArgument_outEndOfSourceFile,
                                                                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outImportedFileList.drop () ; // Release 'out' argument
  outArgument_outEndOfSourceFile.drop () ; // Release 'out' argument
  GGS_location var_loc_4181 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 110)) ;
  GGS__32_lstringlist var_python_5F_utilityToolList_4238 ;
  nt_python_5F_utility_5F_tool_5F_list_ (var_python_5F_utilityToolList_4238, inCompiler) ;
  nt_configuration_5F_key_ (GGS_string ("PYTHON_BUILD"), inCompiler) ;
  GGS_lstring var_python_5F_build_4321 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 113)) ;
  nt_configuration_5F_key_ (GGS_string ("LINKER_SCRIPT"), inCompiler) ;
  GGS_lstring var_linkerScript_4395 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 115)) ;
  nt_configuration_5F_key_ (GGS_string ("PANIC_CODE_TYPE_NAME"), inCompiler) ;
  GGS_lstring var_panicCodeTypeName_4474 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("configuration.galgas", 117)) ;
  nt_configuration_5F_key_ (GGS_string ("PANIC_LINE_TYPE_NAME"), inCompiler) ;
  GGS_lstring var_panicLineTypeName_4559 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("configuration.galgas", 119)) ;
  nt_configuration_5F_key_ (GGS_string ("POINTER_BIT_COUNT"), inCompiler) ;
  GGS_lbigint var_pointerSize_4641 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 121)) ;
  nt_configuration_5F_key_ (GGS_string ("DYNAMIC_ARRAY"), inCompiler) ;
  GGS_bool var_handleDynamicArray_4708 ;
  switch (select_omnibus_5F_target_5F_specific_5F_syntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("configuration.galgas", 125)) ;
    var_handleDynamicArray_4708 = GGS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("configuration.galgas", 128)) ;
    var_handleDynamicArray_4708 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  nt_configuration_5F_key_ (GGS_string ("SYSTEM_STACK_SIZE"), inCompiler) ;
  GGS_lbigint var_systemStackSize_4905 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 132)) ;
  nt_configuration_5F_key_ (GGS_string ("NOP"), inCompiler) ;
  GGS_lstring var_nopInstructionStringInLLVM_4972 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 134)) ;
  nt_configuration_5F_key_ (GGS_string ("BIT_BAND"), inCompiler) ;
  GGS_lbigint var_bitbandRegisterBaseAddress_5052 ;
  GGS_lbigint var_bitbandRegisterEndAddress_5096 ;
  GGS_lbigint var_bitbandRegisterRelocationAddress_5139 ;
  GGS_lbigint var_bitbandRegisterOffsetMultiplier_5189 ;
  GGS_lbigint var_bitbandRegisterBitMultiplier_5238 ;
  switch (select_omnibus_5F_target_5F_specific_5F_syntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("configuration.galgas", 142)) ;
    var_bitbandRegisterBaseAddress_5052 = GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 143)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 143)), inCompiler COMMA_HERE) ;
    var_bitbandRegisterEndAddress_5096 = GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 144)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 144)), inCompiler COMMA_HERE) ;
    var_bitbandRegisterRelocationAddress_5139 = GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 145)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 145)), inCompiler COMMA_HERE) ;
    var_bitbandRegisterOffsetMultiplier_5189 = GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 146)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 146)), inCompiler COMMA_HERE) ;
    var_bitbandRegisterBitMultiplier_5238 = GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 147)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 147)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    var_bitbandRegisterBaseAddress_5052 = inCompiler->synthetizedAttribute_bigInteger () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 149)) ;
    var_bitbandRegisterEndAddress_5096 = inCompiler->synthetizedAttribute_bigInteger () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 150)) ;
    var_bitbandRegisterRelocationAddress_5139 = inCompiler->synthetizedAttribute_bigInteger () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 151)) ;
    var_bitbandRegisterOffsetMultiplier_5189 = inCompiler->synthetizedAttribute_bigInteger () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 152)) ;
    var_bitbandRegisterBitMultiplier_5238 = inCompiler->synthetizedAttribute_bigInteger () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  nt_configuration_5F_key_ (GGS_string ("SERVICE_HANDLER"), inCompiler) ;
  GGS_lstring var_serviceHandler_5851 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 156)) ;
  nt_configuration_5F_key_ (GGS_string ("SERVICE_SYSTEM_STACK_SIZE"), inCompiler) ;
  GGS_lbigint var_servicePushedRegisterByteSize_5938 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 158)) ;
  nt_configuration_5F_key_ (GGS_string ("SERVICE_DISPATCHER_HEADER"), inCompiler) ;
  GGS_lstring var_serviceDispatcherHeader_6041 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 160)) ;
  nt_configuration_5F_key_ (GGS_string ("SERVICE_DISPATCHER_ENTRY"), inCompiler) ;
  GGS_lstring var_serviceDispatcherEntry_6137 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 162)) ;
  nt_configuration_5F_key_ (GGS_string ("SERVICE_ENTRY_NO_RETURNED_VALUE"), inCompiler) ;
  GGS_lstring var_serviceEntryNoReturnedValue_6239 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 164)) ;
  nt_configuration_5F_key_ (GGS_string ("SERVICE_ENTRY_WITH_RETURNED_VALUE"), inCompiler) ;
  GGS_lstring var_serviceEntryReturnValue_6348 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 166)) ;
  nt_configuration_5F_key_ (GGS_string ("SECTION_HANDLER"), inCompiler) ;
  GGS_lstring var_sectionHandler_6435 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 168)) ;
  nt_configuration_5F_key_ (GGS_string ("SECTION_SYSTEM_STACK_SIZE"), inCompiler) ;
  GGS_lbigint var_sectionPushedRegisterByteSize_6522 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 170)) ;
  nt_configuration_5F_key_ (GGS_string ("SECTION_DISPATCHER_HEADER"), inCompiler) ;
  GGS_lstring var_sectionDispatcherHeader_6625 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 172)) ;
  nt_configuration_5F_key_ (GGS_string ("SECTION_DISPATCHER_ENTRY"), inCompiler) ;
  GGS_lstring var_sectionDispatcherEntry_6721 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 174)) ;
  nt_configuration_5F_key_ (GGS_string ("SECTION_ENTRY_FROM_UNKNOWN_MODE"), inCompiler) ;
  GGS_lstring var_sectionDispatcherInvocationFromAnyMode_6823 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 176)) ;
  nt_configuration_5F_key_ (GGS_string ("SECTION_ENTRY_FROM_USER_MODE"), inCompiler) ;
  GGS_lstring var_sectionDispatcherInvocationFromUserMode_6938 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 178)) ;
  nt_configuration_5F_key_ (GGS_string ("INTERRUPT_HANDLER"), inCompiler) ;
  GGS_lstring var_xtrInterruptHandler_7043 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 180)) ;
  nt_configuration_5F_key_ (GGS_string ("INTERRUPT_USER_STACK_SIZE"), inCompiler) ;
  GGS_lbigint var_stackedUserRegisterOnInterruptByteSize_7135 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 182)) ;
  nt_configuration_5F_key_ (GGS_string ("UNUSED_INTERRUPT"), inCompiler) ;
  GGS_lstring var_undefinedInterruptHandler_7238 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 184)) ;
  nt_configuration_5F_key_ (GGS_string ("CPP_FILES"), inCompiler) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 186)) ;
  GGS_lstringlist var_C_5F_definitionFiles_7322 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_3 (inCompiler) == 2) {
      GGS_lstring var_fileRelativePath_7389 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 189)) ;
      var_C_5F_definitionFiles_7322.addAssignOperation (var_fileRelativePath_7389  COMMA_SOURCE_FILE ("configuration.galgas", 190)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  nt_configuration_5F_key_ (GGS_string ("S_FILES"), inCompiler) ;
  GGS_lstringlist temp_2 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 193)) ;
  GGS_lstringlist var_S_5F_definitionFiles_7515 = temp_2 ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_4 (inCompiler) == 2) {
      GGS_lstring var_fileRelativePath_7582 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 196)) ;
      var_S_5F_definitionFiles_7515.addAssignOperation (var_fileRelativePath_7582  COMMA_SOURCE_FILE ("configuration.galgas", 197)) ;
    }else{
      repeatFlag_3 = false ;
    }
  }
  nt_configuration_5F_key_ (GGS_string ("LL_FILES"), inCompiler) ;
  GGS_lstringlist temp_4 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 200)) ;
  GGS_lstringlist var_LL_5F_definitionFiles_7709 = temp_4 ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_5 (inCompiler) == 2) {
      GGS_lstring var_fileRelativePath_7777 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 203)) ;
      var_LL_5F_definitionFiles_7709.addAssignOperation (var_fileRelativePath_7777  COMMA_SOURCE_FILE ("configuration.galgas", 204)) ;
    }else{
      repeatFlag_5 = false ;
    }
  }
  GGS_lstringlist temp_6 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 206)) ;
  outArgument_outImportedFileList = temp_6 ;
  nt_configuration_5F_key_ (GGS_string ("OMNIBUS_FILES"), inCompiler) ;
  bool repeatFlag_7 = true ;
  while (repeatFlag_7) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_6 (inCompiler) == 2) {
      GGS_lstring var_relativeFilePath_7962 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 210)) ;
      outArgument_outImportedFileList.addAssignOperation (var_relativeFilePath_7962  COMMA_SOURCE_FILE ("configuration.galgas", 211)) ;
    }else{
      repeatFlag_7 = false ;
    }
  }
  GGS_interruptionConfigurationList var_interruptionConfigurationList_8065 ;
  GGS_enumerationConstantList var_interruptConstantList_8100 ;
  nt_interruptConfigList_ (var_interruptionConfigurationList_8065, var_interruptConstantList_8100, inCompiler) ;
  GGS_uint var_ptrSize_8136 ;
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = GGS_bool (ComparisonKind::equal, var_pointerSize_4641.readProperty_bigint ().objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 215)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (var_pointerSize_4641.readProperty_location (), GGS_string ("zero size pointer is invalid"), fixItArray9  COMMA_SOURCE_FILE ("configuration.galgas", 216)) ;
      var_ptrSize_8136.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    var_ptrSize_8136 = var_pointerSize_4641.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 218)) ;
  }
  GGS_targetParameters var_parameters_8314 = GGS_targetParameters::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_loc_4181, var_python_5F_utilityToolList_4238, var_python_5F_build_4321, var_linkerScript_4395, var_ptrSize_8136, var_handleDynamicArray_4708, var_systemStackSize_4905, var_stackedUserRegisterOnInterruptByteSize_7135, var_nopInstructionStringInLLVM_4972, var_bitbandRegisterBaseAddress_5052, var_bitbandRegisterEndAddress_5096, var_bitbandRegisterRelocationAddress_5139, var_bitbandRegisterOffsetMultiplier_5189, var_bitbandRegisterBitMultiplier_5238, var_sectionHandler_6435, var_sectionPushedRegisterByteSize_6522, var_sectionDispatcherHeader_6625, var_sectionDispatcherEntry_6721, var_sectionDispatcherInvocationFromAnyMode_6823, var_sectionDispatcherInvocationFromUserMode_6938, var_C_5F_definitionFiles_7322, var_S_5F_definitionFiles_7515, var_LL_5F_definitionFiles_7709, var_xtrInterruptHandler_7043, var_undefinedInterruptHandler_7238, var_serviceHandler_5851, var_servicePushedRegisterByteSize_5938, var_serviceDispatcherEntry_6137, var_serviceDispatcherHeader_6041, var_serviceEntryNoReturnedValue_6239, var_serviceEntryReturnValue_6348, inCompiler COMMA_HERE) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_configurationDeclarationAST::init_21__21__21__21_ (var_panicCodeTypeName_4474, var_panicLineTypeName_4559, var_parameters_8314, var_interruptionConfigurationList_8065, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("configuration.galgas", 253)) ;
  outArgument_outEndOfSourceFile = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 259)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_enumerationDeclarationAST::init_21__21_ (GGS_lstring::init_21__21_ (function_isrSlotTypeName (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 261)), var_xtrInterruptHandler_7043.readProperty_location (), inCompiler COMMA_HERE), var_interruptConstantList_8100, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("configuration.galgas", 260)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_python_5F_utility_5F_tool_5F_list_parse (inCompiler) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 113)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 115)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("configuration.galgas", 117)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("configuration.galgas", 119)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 121)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  switch (select_omnibus_5F_target_5F_specific_5F_syntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("configuration.galgas", 125)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("configuration.galgas", 128)) ;
  } break ;
  default:
    break ;
  }
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 132)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 134)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  switch (select_omnibus_5F_target_5F_specific_5F_syntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("configuration.galgas", 142)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 149)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 150)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 151)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 152)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 156)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 158)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 160)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 162)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 164)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 166)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 168)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 170)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 172)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 174)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 176)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 178)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 180)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 182)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 184)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 189)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_configuration_5F_key_parse (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 196)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  nt_configuration_5F_key_parse (inCompiler) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 203)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  nt_configuration_5F_key_parse (inCompiler) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 210)) ;
    }else{
      repeatFlag_3 = false ;
    }
  }
  nt_interruptConfigList_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_python_5F_utility_5F_tool_5F_list_indexing (inCompiler) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 113)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 115)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("configuration.galgas", 117)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("configuration.galgas", 119)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 121)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  switch (select_omnibus_5F_target_5F_specific_5F_syntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("configuration.galgas", 125)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("configuration.galgas", 128)) ;
  } break ;
  default:
    break ;
  }
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 132)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 134)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  switch (select_omnibus_5F_target_5F_specific_5F_syntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("configuration.galgas", 142)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 149)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 150)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 151)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 152)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 156)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 158)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 160)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 162)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 164)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 166)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 168)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 170)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 172)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 174)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 176)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 178)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 180)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 182)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 184)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 189)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_configuration_5F_key_indexing (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 196)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  nt_configuration_5F_key_indexing (inCompiler) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 203)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  nt_configuration_5F_key_indexing (inCompiler) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 210)) ;
    }else{
      repeatFlag_3 = false ;
    }
  }
  nt_interruptConfigList_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_ (GGS_interruptionConfigurationList & outArgument_interruptionConfigurationList,
                                                                                                                            GGS_enumerationConstantList & outArgument_outEnumerationConstantList,
                                                                                                                            Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_interruptionConfigurationList.drop () ; // Release 'out' argument
  outArgument_outEnumerationConstantList.drop () ; // Release 'out' argument
  GGS_interruptionConfigurationList temp_0 = GGS_interruptionConfigurationList::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 272)) ;
  outArgument_interruptionConfigurationList = temp_0 ;
  GGS_enumerationConstantList temp_1 = GGS_enumerationConstantList::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 273)) ;
  outArgument_outEnumerationConstantList = temp_1 ;
  nt_configuration_5F_key_ (GGS_string ("INTERRUPTS"), inCompiler) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_7 (inCompiler) == 2) {
      GGS_lstring var_interruptName_10101 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("configuration.galgas", 277)) ;
      GGS_interruptionPanicCode var_interruptionPanicCode_10148 ;
      switch (select_omnibus_5F_target_5F_specific_5F_syntax_8 (inCompiler)) {
      case 1: {
        var_interruptionPanicCode_10148 = GGS_interruptionPanicCode::class_func_noCode (SOURCE_FILE ("configuration.galgas", 280)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("configuration.galgas", 282)) ;
        GGS_lbigint var_panicCode_10268 = inCompiler->synthetizedAttribute_bigInteger () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 283)) ;
        var_interruptionPanicCode_10148 = GGS_interruptionPanicCode::class_func_code (var_panicCode_10268  COMMA_SOURCE_FILE ("configuration.galgas", 284)) ;
        outArgument_outEnumerationConstantList.addAssignOperation (var_interruptName_10101, var_panicCode_10268.readProperty_bigint ()  COMMA_SOURCE_FILE ("configuration.galgas", 285)) ;
      } break ;
      default:
        break ;
      }
      outArgument_interruptionConfigurationList.addAssignOperation (var_interruptName_10101, var_interruptionPanicCode_10148  COMMA_SOURCE_FILE ("configuration.galgas", 287)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_configuration_5F_key_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("configuration.galgas", 277)) ;
      switch (select_omnibus_5F_target_5F_specific_5F_syntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("configuration.galgas", 282)) ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 283)) ;
      } break ;
      default:
        break ;
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_configuration_5F_key_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("configuration.galgas", 277)) ;
      switch (select_omnibus_5F_target_5F_specific_5F_syntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("configuration.galgas", 282)) ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 283)) ;
      } break ;
      default:
        break ;
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
}

