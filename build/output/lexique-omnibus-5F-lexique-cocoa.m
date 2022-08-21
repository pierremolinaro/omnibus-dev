//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "lexique-omnibus-5F-lexique-cocoa.h"
#import "PMDebug.h"

//----------------------------------------------------------------------------------------------------------------------

@implementation OC_Lexique_omnibus_lexique

//----------------------------------------------------------------------------------------------------------------------
//
//                           Template Replacements
//
//----------------------------------------------------------------------------------------------------------------------



//----------------------------------------------------------------------------------------------------------------------
//
//                           Template Delimiters
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

- (instancetype) init {
  self = [super init] ;
  if (self) {
    noteObjectAllocation (self) ;
   mLexicalAttribute_bigInteger = [[NSMutableString alloc] init] ;
   mLexicalAttribute_tokenString = [[NSMutableString alloc] init] ;
  }
  return self ;
}

//----------------------------------------------------------------------------------------------------------------------

- (void) dealloc {
  noteObjectDeallocation (self) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//                 I N D E X I N G    D I R E C T O R Y
//
//----------------------------------------------------------------------------------------------------------------------

- (NSString *) indexingDirectory {
  return @"" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//                 I N D E X I N G    T I T L E S
//
//----------------------------------------------------------------------------------------------------------------------

- (NSArray *) indexingTitles { // Array of NSString

  return [NSArray array] ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//            Terminal Symbols as end of script in template mark
//
//----------------------------------------------------------------------------------------------------------------------



//----------------------------------------------------------------------------------------------------------------------
//
//             Key words table 'keyWordList'      
//
//----------------------------------------------------------------------------------------------------------------------

static const C_cocoa_lexique_table_entry ktable_for_omnibus_5F_lexique_keyWordList [52] = {
  {"if", omnibus_lexique_1_if},
  {"in", omnibus_lexique_1_in},
  {"no", omnibus_lexique_1_no},
  {"for", omnibus_lexique_1_for},
  {"let", omnibus_lexique_1_let},
  {"not", omnibus_lexique_1_not},
  {"var", omnibus_lexique_1_var},
  {"yes", omnibus_lexique_1_yes},
  {"boot", omnibus_lexique_1_boot},
  {"case", omnibus_lexique_1_case},
  {"else", omnibus_lexique_1_else},
  {"enum", omnibus_lexique_1_enum},
  {"func", omnibus_lexique_1_func},
  {"llvm", omnibus_lexique_1_llvm},
  {"safe", omnibus_lexique_1_safe},
  {"self", omnibus_lexique_1_self},
  {"sync", omnibus_lexique_1_sync},
  {"task", omnibus_lexique_1_task},
  {"user", omnibus_lexique_1_user},
  {"when", omnibus_lexique_1_when},
  {"event", omnibus_lexique_1_event},
  {"guard", omnibus_lexique_1_guard},
  {"panic", omnibus_lexique_1_panic},
  {"until", omnibus_lexique_1_until},
  {"where", omnibus_lexique_1_where},
  {"while", omnibus_lexique_1_while},
  {"assert", omnibus_lexique_1_assert},
  {"driver", omnibus_lexique_1_driver},
  {"extend", omnibus_lexique_1_extend},
  {"extern", omnibus_lexique_1_extern},
  {"import", omnibus_lexique_1_import},
  {"opaque", omnibus_lexique_1_opaque},
  {"option", omnibus_lexique_1_option},
  {"public", omnibus_lexique_1_public},
  {"sizeof", omnibus_lexique_1_sizeof},
  {"struct", omnibus_lexique_1_struct},
  {"switch", omnibus_lexique_1_switch},
  {"target", omnibus_lexique_1_target},
  {"convert", omnibus_lexique_1_convert},
  {"section", omnibus_lexique_1_section},
  {"service", omnibus_lexique_1_service},
  {"startup", omnibus_lexique_1_startup},
  {"ctAssert", omnibus_lexique_1_ctAssert},
  {"required", omnibus_lexique_1_required},
  {"truncate", omnibus_lexique_1_truncate},
  {"addressof", omnibus_lexique_1_addressof},
  {"interrupt", omnibus_lexique_1_interrupt},
  {"primitive", omnibus_lexique_1_primitive},
  {"registers", omnibus_lexique_1_registers},
  {"typealias", omnibus_lexique_1_typealias},
  {"compiletime", omnibus_lexique_1_compiletime},
  {"staticArray", omnibus_lexique_1_staticArray}
} ;

static NSInteger search_into_omnibus_5F_lexique_keyWordList (NSString * inSearchedString) {
  return searchStringInTable (inSearchedString, ktable_for_omnibus_5F_lexique_keyWordList, 52) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//               I N T E R N A L    P A R S E    L E X I C A L    T O K E N
//
//----------------------------------------------------------------------------------------------------------------------

- (BOOL) internalParseLexicalTokenForLexicalColoring {
  BOOL loop = YES ;
  BOOL scanningOk = YES ;
  [mLexicalAttribute_bigInteger setString:@""] ;
  [mLexicalAttribute_tokenString setString:@""] ;
  mTokenStartLocation = mCurrentLocation ;
  if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter])) {
    do {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
      }else{
        loop = NO ;
      }
    }while (loop && scanningOk) ;
    loop = YES ;
    if (mTokenCode == 0) {
      mTokenCode = search_into_omnibus_5F_lexique_keyWordList (mLexicalAttribute_tokenString) ;
    }
    if (mTokenCode == 0) {
      mTokenCode = omnibus_lexique_1_identifier ;
    }
  }else if (scanningOk && ([self testForInputChar:64])) {
    if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputFromChar:48 toChar:57])) {
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:46])) {
        }else{
          loop = NO ;
        }
      }while (loop && scanningOk) ;
      loop = YES ;
    }else{
      scanningOk = NO ;
    }
    mTokenCode = omnibus_lexique_1__40_attribute ;
  }else if (scanningOk && ([self testForInputString:@"0b" advance:YES])) {
    do {
      if (scanningOk && ([self testForInputChar:95])) {
      }else{
        loop = NO ;
      }
    }while (loop && scanningOk) ;
    loop = YES ;
    if (scanningOk && ([self testForInputFromChar:48 toChar:49])) {
      scanner_cocoa_routine_enterBinaryDigitIntoBigInt (& scanningOk, mPreviousChar, mLexicalAttribute_bigInteger) ;
      do {
        if (scanningOk && ([self testForInputFromChar:48 toChar:49])) {
          scanner_cocoa_routine_enterBinaryDigitIntoBigInt (& scanningOk, mPreviousChar, mLexicalAttribute_bigInteger) ;
        }else if (scanningOk && ([self testForInputChar:95])) {
        }else{
          loop = NO ;
        }
      }while (loop && scanningOk) ;
      loop = YES ;
      mTokenCode = omnibus_lexique_1_integer ;
    }else{
      scanningOk = NO ;
    }
  }else if (scanningOk && ([self testForInputString:@"0x" advance:YES])) {
    do {
      if (scanningOk && ([self testForInputChar:95])) {
      }else{
        loop = NO ;
      }
    }while (loop && scanningOk) ;
    loop = YES ;
    if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
      scanner_cocoa_routine_enterHexDigitIntoBigInt (& scanningOk, mPreviousChar, mLexicalAttribute_bigInteger) ;
      do {
        if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
          scanner_cocoa_routine_enterHexDigitIntoBigInt (& scanningOk, mPreviousChar, mLexicalAttribute_bigInteger) ;
        }else if (scanningOk && ([self testForInputChar:95])) {
        }else{
          loop = NO ;
        }
      }while (loop && scanningOk) ;
      loop = YES ;
      mTokenCode = omnibus_lexique_1_integer ;
    }else{
      scanningOk = NO ;
    }
  }else if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
    scanner_cocoa_routine_enterDecimalDigitIntoBigInt (& scanningOk, mPreviousChar, mLexicalAttribute_bigInteger) ;
    do {
      if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
        scanner_cocoa_routine_enterDecimalDigitIntoBigInt (& scanningOk, mPreviousChar, mLexicalAttribute_bigInteger) ;
      }else if (scanningOk && ([self testForInputChar:95])) {
      }else{
        loop = NO ;
      }
    }while (loop && scanningOk) ;
    loop = YES ;
    mTokenCode = omnibus_lexique_1_integer ;
  }else if (scanningOk && ([self testForInputChar:34])) {
    do {
      if (scanningOk && ([self testForInputString:@"\\\"" advance:YES])) {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 34) ;
      }else if (scanningOk && ([self testForInputChar:32] || [self testForInputChar:33] || [self testForInputFromChar:35 toChar:65533])) {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      }else{
        loop = NO ;
      }
    }while (loop && scanningOk) ;
    loop = YES ;
    if (scanningOk && ([self testForInputChar:34])) {
      mTokenCode = omnibus_lexique_1__22_string_22_ ;
    }else{
      scanningOk = NO ;
    }
  }else if (scanningOk && ([self testForInputString:@"//!" advance:YES])) {
    do {
      if (scanningOk && ([self testForInputFromChar:1 toChar:9] || [self testForInputChar:11] || [self testForInputChar:12] || [self testForInputFromChar:14 toChar:65533])) {
      }else{
        loop = NO ;
      }
    }while (loop && scanningOk) ;
    loop = YES ;
    mTokenCode = omnibus_lexique_1_commentMark ;
  }else if (scanningOk && ([self testForInputString:@"//" advance:YES])) {
    do {
      if (scanningOk && ([self testForInputFromChar:1 toChar:9] || [self testForInputChar:11] || [self testForInputChar:12] || [self testForInputFromChar:14 toChar:65533])) {
      }else{
        loop = NO ;
      }
    }while (loop && scanningOk) ;
    loop = YES ;
    mTokenCode = omnibus_lexique_1_comment ;
  }else if (scanningOk && [self testForInputString:@">>=" advance:YES]) {
    mTokenCode = omnibus_lexique_1__3E__3E__3D_ ;
  }else if (scanningOk && [self testForInputString:@"<<=" advance:YES]) {
    mTokenCode = omnibus_lexique_1__3C__3C__3D_ ;
  }else if (scanningOk && [self testForInputString:@"..<" advance:YES]) {
    mTokenCode = omnibus_lexique_1__2E__2E__3C_ ;
  }else if (scanningOk && [self testForInputString:@"..." advance:YES]) {
    mTokenCode = omnibus_lexique_1__2E__2E__2E_ ;
  }else if (scanningOk && [self testForInputString:@"-%=" advance:YES]) {
    mTokenCode = omnibus_lexique_1__2D__25__3D_ ;
  }else if (scanningOk && [self testForInputString:@"+%=" advance:YES]) {
    mTokenCode = omnibus_lexique_1__2B__25__3D_ ;
  }else if (scanningOk && [self testForInputString:@"*%=" advance:YES]) {
    mTokenCode = omnibus_lexique_1__2A__25__3D_ ;
  }else if (scanningOk && [self testForInputString:@"!/=" advance:YES]) {
    mTokenCode = omnibus_lexique_1__21__2F__3D_ ;
  }else if (scanningOk && [self testForInputString:@"!%=" advance:YES]) {
    mTokenCode = omnibus_lexique_1__21__25__3D_ ;
  }else if (scanningOk && [self testForInputString:@"||" advance:YES]) {
    mTokenCode = omnibus_lexique_1__7C__7C_ ;
  }else if (scanningOk && [self testForInputString:@"|=" advance:YES]) {
    mTokenCode = omnibus_lexique_1__7C__3D_ ;
  }else if (scanningOk && [self testForInputString:@"^=" advance:YES]) {
    mTokenCode = omnibus_lexique_1__5E__3D_ ;
  }else if (scanningOk && [self testForInputString:@"]!" advance:YES]) {
    mTokenCode = omnibus_lexique_1__5D__21_ ;
  }else if (scanningOk && [self testForInputString:@">>" advance:YES]) {
    mTokenCode = omnibus_lexique_1__3E__3E_ ;
  }else if (scanningOk && [self testForInputString:@"==" advance:YES]) {
    mTokenCode = omnibus_lexique_1__3D__3D_ ;
  }else if (scanningOk && [self testForInputString:@"<<" advance:YES]) {
    mTokenCode = omnibus_lexique_1__3C__3C_ ;
  }else if (scanningOk && [self testForInputString:@"/=" advance:YES]) {
    mTokenCode = omnibus_lexique_1__2F__3D_ ;
  }else if (scanningOk && [self testForInputString:@"->" advance:YES]) {
    mTokenCode = omnibus_lexique_1__2D__3E_ ;
  }else if (scanningOk && [self testForInputString:@"-=" advance:YES]) {
    mTokenCode = omnibus_lexique_1__2D__3D_ ;
  }else if (scanningOk && [self testForInputString:@"-%" advance:YES]) {
    mTokenCode = omnibus_lexique_1__2D__25_ ;
  }else if (scanningOk && [self testForInputString:@"+=" advance:YES]) {
    mTokenCode = omnibus_lexique_1__2B__3D_ ;
  }else if (scanningOk && [self testForInputString:@"+%" advance:YES]) {
    mTokenCode = omnibus_lexique_1__2B__25_ ;
  }else if (scanningOk && [self testForInputString:@"*=" advance:YES]) {
    mTokenCode = omnibus_lexique_1__2A__3D_ ;
  }else if (scanningOk && [self testForInputString:@"*%" advance:YES]) {
    mTokenCode = omnibus_lexique_1__2A__25_ ;
  }else if (scanningOk && [self testForInputString:@"&=" advance:YES]) {
    mTokenCode = omnibus_lexique_1__26__3D_ ;
  }else if (scanningOk && [self testForInputString:@"&&" advance:YES]) {
    mTokenCode = omnibus_lexique_1__26__26_ ;
  }else if (scanningOk && [self testForInputString:@"%=" advance:YES]) {
    mTokenCode = omnibus_lexique_1__25__3D_ ;
  }else if (scanningOk && [self testForInputString:@"!/" advance:YES]) {
    mTokenCode = omnibus_lexique_1__21__2F_ ;
  }else if (scanningOk && [self testForInputString:@"!%" advance:YES]) {
    mTokenCode = omnibus_lexique_1__21__25_ ;
  }else if (scanningOk && [self testForInputString:@"\xE2""\x89""\xA5""" advance:YES]) {
    mTokenCode = omnibus_lexique_1__2265_ ;
  }else if (scanningOk && [self testForInputString:@"\xE2""\x89""\xA4""" advance:YES]) {
    mTokenCode = omnibus_lexique_1__2264_ ;
  }else if (scanningOk && [self testForInputString:@"\xE2""\x89""\xA0""" advance:YES]) {
    mTokenCode = omnibus_lexique_1__2260_ ;
  }else if (scanningOk && [self testForInputString:@"~" advance:YES]) {
    mTokenCode = omnibus_lexique_1__7E_ ;
  }else if (scanningOk && [self testForInputString:@"}" advance:YES]) {
    mTokenCode = omnibus_lexique_1__7D_ ;
  }else if (scanningOk && [self testForInputString:@"|" advance:YES]) {
    mTokenCode = omnibus_lexique_1__7C_ ;
  }else if (scanningOk && [self testForInputString:@"{" advance:YES]) {
    mTokenCode = omnibus_lexique_1__7B_ ;
  }else if (scanningOk && [self testForInputString:@"_" advance:YES]) {
    mTokenCode = omnibus_lexique_1__5F_ ;
  }else if (scanningOk && [self testForInputString:@"^" advance:YES]) {
    mTokenCode = omnibus_lexique_1__5E_ ;
  }else if (scanningOk && [self testForInputString:@"]" advance:YES]) {
    mTokenCode = omnibus_lexique_1__5D_ ;
  }else if (scanningOk && [self testForInputString:@"[" advance:YES]) {
    mTokenCode = omnibus_lexique_1__5B_ ;
  }else if (scanningOk && [self testForInputString:@">" advance:YES]) {
    mTokenCode = omnibus_lexique_1__3E_ ;
  }else if (scanningOk && [self testForInputString:@"=" advance:YES]) {
    mTokenCode = omnibus_lexique_1__3D_ ;
  }else if (scanningOk && [self testForInputString:@"<" advance:YES]) {
    mTokenCode = omnibus_lexique_1__3C_ ;
  }else if (scanningOk && [self testForInputString:@":" advance:YES]) {
    mTokenCode = omnibus_lexique_1__3A_ ;
  }else if (scanningOk && [self testForInputString:@"/" advance:YES]) {
    mTokenCode = omnibus_lexique_1__2F_ ;
  }else if (scanningOk && [self testForInputString:@"." advance:YES]) {
    mTokenCode = omnibus_lexique_1__2E_ ;
  }else if (scanningOk && [self testForInputString:@"-" advance:YES]) {
    mTokenCode = omnibus_lexique_1__2D_ ;
  }else if (scanningOk && [self testForInputString:@"," advance:YES]) {
    mTokenCode = omnibus_lexique_1__2C_ ;
  }else if (scanningOk && [self testForInputString:@"+" advance:YES]) {
    mTokenCode = omnibus_lexique_1__2B_ ;
  }else if (scanningOk && [self testForInputString:@"*" advance:YES]) {
    mTokenCode = omnibus_lexique_1__2A_ ;
  }else if (scanningOk && [self testForInputString:@")" advance:YES]) {
    mTokenCode = omnibus_lexique_1__29_ ;
  }else if (scanningOk && [self testForInputString:@"(" advance:YES]) {
    mTokenCode = omnibus_lexique_1__28_ ;
  }else if (scanningOk && [self testForInputString:@"&" advance:YES]) {
    mTokenCode = omnibus_lexique_1__26_ ;
  }else if (scanningOk && [self testForInputString:@"%" advance:YES]) {
    mTokenCode = omnibus_lexique_1__25_ ;
  }else if (scanningOk && ([self testForInputChar:63])) {
    scanningPointStructForCocoa locationForTag_onlyInterrogationMark ;
    [self saveScanningPoint: & locationForTag_onlyInterrogationMark] ;
    if (scanningOk && ([self testForInputChar:33])) {
      scanningPointStructForCocoa locationForTag_onlyExclamationInterrogationMark ;
      [self saveScanningPoint: & locationForTag_onlyExclamationInterrogationMark] ;
      if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputFromChar:48 toChar:57])) {
        do {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
          if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
          }else{
            loop = NO ;
          }
        }while (loop && scanningOk) ;
        loop = YES ;
        if (scanningOk && ([self testForInputChar:58])) {
          mTokenCode = omnibus_lexique_1__3F__21_selector_3A_ ;
        }else{
          scanner_cocoa_routine_resetString (& scanningOk, mLexicalAttribute_tokenString) ;
          [self restoreScanningPoint: & locationForTag_onlyExclamationInterrogationMark] ;
          mTokenCode = omnibus_lexique_1__3F__21_selector_3A_ ;
        }
      }else{
        mTokenCode = omnibus_lexique_1__3F__21_selector_3A_ ;
      }
    }else if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputFromChar:48 toChar:57])) {
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
        }else{
          loop = NO ;
        }
      }while (loop && scanningOk) ;
      loop = YES ;
      if (scanningOk && ([self testForInputChar:58])) {
        mTokenCode = omnibus_lexique_1__3F_selector_3A_ ;
      }else{
        scanner_cocoa_routine_resetString (& scanningOk, mLexicalAttribute_tokenString) ;
        [self restoreScanningPoint: & locationForTag_onlyInterrogationMark] ;
        mTokenCode = omnibus_lexique_1__3F_selector_3A_ ;
      }
    }else{
      mTokenCode = omnibus_lexique_1__3F_selector_3A_ ;
    }
  }else if (scanningOk && ([self testForInputChar:33])) {
    scanningPointStructForCocoa locationForTag_onlyExclamationMark ;
    [self saveScanningPoint: & locationForTag_onlyExclamationMark] ;
    if (scanningOk && ([self testForInputChar:63])) {
      scanningPointStructForCocoa locationForTag_onlyInterrogationExclamationMark ;
      [self saveScanningPoint: & locationForTag_onlyInterrogationExclamationMark] ;
      if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputFromChar:48 toChar:57])) {
        do {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
          if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
          }else{
            loop = NO ;
          }
        }while (loop && scanningOk) ;
        loop = YES ;
        if (scanningOk && ([self testForInputChar:58])) {
          mTokenCode = omnibus_lexique_1__21__3F_selector_3A_ ;
        }else{
          scanner_cocoa_routine_resetString (& scanningOk, mLexicalAttribute_tokenString) ;
          [self restoreScanningPoint: & locationForTag_onlyInterrogationExclamationMark] ;
          mTokenCode = omnibus_lexique_1__21__3F_selector_3A_ ;
        }
      }else{
        mTokenCode = omnibus_lexique_1__21__3F_selector_3A_ ;
      }
    }else if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputFromChar:48 toChar:57])) {
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
        }else{
          loop = NO ;
        }
      }while (loop && scanningOk) ;
      loop = YES ;
      if (scanningOk && ([self testForInputChar:58])) {
        mTokenCode = omnibus_lexique_1__21_selector_3A_ ;
      }else{
        scanner_cocoa_routine_resetString (& scanningOk, mLexicalAttribute_tokenString) ;
        [self restoreScanningPoint: & locationForTag_onlyExclamationMark] ;
        mTokenCode = omnibus_lexique_1__21_selector_3A_ ;
      }
    }else{
      mTokenCode = omnibus_lexique_1__21_selector_3A_ ;
    }
  }else if (scanningOk && ([self testForInputChar:36])) {
    if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter])) {
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
        }else{
          loop = NO ;
        }
      }while (loop && scanningOk) ;
      loop = YES ;
    }else{
      scanningOk = NO ;
    }
    mTokenCode = omnibus_lexique_1__24_type ;
  }else if (scanningOk && ([self testForInputChar:169])) {
    if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter])) {
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
        }else{
          loop = NO ;
        }
      }while (loop && scanningOk) ;
      loop = YES ;
    }else{
      scanningOk = NO ;
    }
    mTokenCode = omnibus_lexique_1__A9_group ;
  }else if (scanningOk && ([self testForInputFromChar:1 toChar:32])) {
  }else   if ([self testForInputChar:'\0']) { // End of source text ?
    mTokenCode = omnibus_lexique_1_ ; // Empty string code
  }else{ // Unknown input character
    scanningOk = NO ;
    [self advance] ;
  }
  return scanningOk ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//               P A R S E    L E X I C A L    T O K E N
//
//----------------------------------------------------------------------------------------------------------------------

- (void) parseLexicalTokenForLexicalColoring {
  BOOL scanningOk = YES ;
  mTokenCode = 0 ;
  while ((mTokenCode == 0) && (mCurrentChar != '\0')) {
    scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;
  }
//--- Error ?
  if (! scanningOk) {
    mTokenCode = -1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//                   T E R M I N A L    C O U N T
//
//----------------------------------------------------------------------------------------------------------------------

- (NSUInteger) terminalVocabularyCount {
  return 118 ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//                     S T Y L E   C O U N T
//
//----------------------------------------------------------------------------------------------------------------------

- (NSUInteger) styleCount {
  return 10 ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//                I S    T E M P L A T E    L E X I Q U E
//
//----------------------------------------------------------------------------------------------------------------------

- (BOOL) isTemplateLexique {
  return NO ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   S T Y L E   I N D E X    F O R    T E R M I N A L
//
//----------------------------------------------------------------------------------------------------------------------

- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal {
  static const NSUInteger kTerminalSymbolStyles [119] = {0,
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
  return kTerminalSymbolStyles [inTerminal] ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//    A T O M I C    S E L E C T I O N   F O R    T E R M I N A L
//
//----------------------------------------------------------------------------------------------------------------------

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex {
  static const BOOL kTerminalAtomicSelection [119] = {NO,
    YES /* omnibus_lexique_1_identifier */,
    YES /* omnibus_lexique_1__40_attribute */,
    YES /* omnibus_lexique_1_integer */,
    NO /* omnibus_lexique_1__22_string_22_ */,
    NO /* omnibus_lexique_1_comment */,
    NO /* omnibus_lexique_1_commentMark */,
    YES /* omnibus_lexique_1__3F_selector_3A_ */,
    YES /* omnibus_lexique_1__3F__21_selector_3A_ */,
    YES /* omnibus_lexique_1__21_selector_3A_ */,
    YES /* omnibus_lexique_1__21__3F_selector_3A_ */,
    YES /* omnibus_lexique_1__24_type */,
    YES /* omnibus_lexique_1__A9_group */,
    YES /* omnibus_lexique_1_addressof */,
    YES /* omnibus_lexique_1_assert */,
    YES /* omnibus_lexique_1_boot */,
    YES /* omnibus_lexique_1_case */,
    YES /* omnibus_lexique_1_convert */,
    YES /* omnibus_lexique_1_ctAssert */,
    YES /* omnibus_lexique_1_compiletime */,
    YES /* omnibus_lexique_1_driver */,
    YES /* omnibus_lexique_1_else */,
    YES /* omnibus_lexique_1_enum */,
    YES /* omnibus_lexique_1_event */,
    YES /* omnibus_lexique_1_extend */,
    YES /* omnibus_lexique_1_extern */,
    YES /* omnibus_lexique_1_for */,
    YES /* omnibus_lexique_1_func */,
    YES /* omnibus_lexique_1_guard */,
    YES /* omnibus_lexique_1_if */,
    YES /* omnibus_lexique_1_import */,
    YES /* omnibus_lexique_1_in */,
    YES /* omnibus_lexique_1_interrupt */,
    YES /* omnibus_lexique_1_let */,
    YES /* omnibus_lexique_1_llvm */,
    YES /* omnibus_lexique_1_no */,
    YES /* omnibus_lexique_1_not */,
    YES /* omnibus_lexique_1_opaque */,
    YES /* omnibus_lexique_1_option */,
    YES /* omnibus_lexique_1_panic */,
    YES /* omnibus_lexique_1_primitive */,
    YES /* omnibus_lexique_1_public */,
    YES /* omnibus_lexique_1_registers */,
    YES /* omnibus_lexique_1_required */,
    YES /* omnibus_lexique_1_safe */,
    YES /* omnibus_lexique_1_section */,
    YES /* omnibus_lexique_1_self */,
    YES /* omnibus_lexique_1_service */,
    YES /* omnibus_lexique_1_sizeof */,
    YES /* omnibus_lexique_1_startup */,
    YES /* omnibus_lexique_1_struct */,
    YES /* omnibus_lexique_1_staticArray */,
    YES /* omnibus_lexique_1_switch */,
    YES /* omnibus_lexique_1_sync */,
    YES /* omnibus_lexique_1_target */,
    YES /* omnibus_lexique_1_task */,
    YES /* omnibus_lexique_1_truncate */,
    YES /* omnibus_lexique_1_typealias */,
    YES /* omnibus_lexique_1_var */,
    YES /* omnibus_lexique_1_until */,
    YES /* omnibus_lexique_1_user */,
    YES /* omnibus_lexique_1_where */,
    YES /* omnibus_lexique_1_when */,
    YES /* omnibus_lexique_1_while */,
    YES /* omnibus_lexique_1_yes */,
    YES /* omnibus_lexique_1__3A_ */,
    YES /* omnibus_lexique_1__2E_ */,
    YES /* omnibus_lexique_1__2C_ */,
    YES /* omnibus_lexique_1__7B_ */,
    YES /* omnibus_lexique_1__7D_ */,
    YES /* omnibus_lexique_1__3D_ */,
    YES /* omnibus_lexique_1__28_ */,
    YES /* omnibus_lexique_1__29_ */,
    YES /* omnibus_lexique_1__5F_ */,
    YES /* omnibus_lexique_1__3D__3D_ */,
    YES /* omnibus_lexique_1__2260_ */,
    YES /* omnibus_lexique_1__3C_ */,
    YES /* omnibus_lexique_1__2264_ */,
    YES /* omnibus_lexique_1__3E_ */,
    YES /* omnibus_lexique_1__2265_ */,
    YES /* omnibus_lexique_1__5B_ */,
    YES /* omnibus_lexique_1__5D_ */,
    YES /* omnibus_lexique_1__5D__21_ */,
    YES /* omnibus_lexique_1__3C__3C_ */,
    YES /* omnibus_lexique_1__3E__3E_ */,
    YES /* omnibus_lexique_1__7E_ */,
    YES /* omnibus_lexique_1__7C__7C_ */,
    YES /* omnibus_lexique_1__26__26_ */,
    YES /* omnibus_lexique_1__2D__3E_ */,
    YES /* omnibus_lexique_1__2E__2E__3C_ */,
    YES /* omnibus_lexique_1__2E__2E__2E_ */,
    YES /* omnibus_lexique_1__7C_ */,
    YES /* omnibus_lexique_1__7C__3D_ */,
    YES /* omnibus_lexique_1__26_ */,
    YES /* omnibus_lexique_1__26__3D_ */,
    YES /* omnibus_lexique_1__5E_ */,
    YES /* omnibus_lexique_1__5E__3D_ */,
    YES /* omnibus_lexique_1__2B_ */,
    YES /* omnibus_lexique_1__2B__25_ */,
    YES /* omnibus_lexique_1__2B__3D_ */,
    YES /* omnibus_lexique_1__2B__25__3D_ */,
    YES /* omnibus_lexique_1__2D_ */,
    YES /* omnibus_lexique_1__2D__25_ */,
    YES /* omnibus_lexique_1__2D__3D_ */,
    YES /* omnibus_lexique_1__2D__25__3D_ */,
    YES /* omnibus_lexique_1__2A_ */,
    YES /* omnibus_lexique_1__2A__25_ */,
    YES /* omnibus_lexique_1__2A__3D_ */,
    YES /* omnibus_lexique_1__2A__25__3D_ */,
    YES /* omnibus_lexique_1__2F_ */,
    YES /* omnibus_lexique_1__21__2F_ */,
    YES /* omnibus_lexique_1__2F__3D_ */,
    YES /* omnibus_lexique_1__21__2F__3D_ */,
    YES /* omnibus_lexique_1__25_ */,
    YES /* omnibus_lexique_1__21__25_ */,
    YES /* omnibus_lexique_1__25__3D_ */,
    YES /* omnibus_lexique_1__21__25__3D_ */,
    YES /* omnibus_lexique_1__3C__3C__3D_ */,
    YES /* omnibus_lexique_1__3E__3E__3D_ */
  } ;
  return kTerminalAtomicSelection [inTokenIndex] ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//             S T Y L E   N A M E    F O R    I N D E X
//
//----------------------------------------------------------------------------------------------------------------------

- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex {
  NSString * result = nil ;
  if ((inIndex >= 0) && (inIndex < 10)) {
    NSString * kStyleArray [10] = {
      @"Default Style",
      @"Keywords",
      @"Attributes",
      @"Integer Constants",
      @"Literal Strings",
      @"Comments",
      @"Delimiters",
      @"Selectors",
      @"Types",
      @"Control Register Groups"
    } ;
    result = kStyleArray [inIndex] ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//         S T Y L E   I D E N T I F I E R    F O R    I N D E X
//
//----------------------------------------------------------------------------------------------------------------------

- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex {
  NSString * result = nil ;
  if ((inIndex >= 0) && (inIndex < 10)) {
    NSString * kStyleArray [10] = {
      @"omnibus_lexique",
      @"omnibus_lexique-keywordsStyle",
      @"omnibus_lexique-attributeStyle",
      @"omnibus_lexique-integerStyle",
      @"omnibus_lexique-stringStyle",
      @"omnibus_lexique-commentStyle",
      @"omnibus_lexique-delimitersStyle",
      @"omnibus_lexique-selectorStyle",
      @"omnibus_lexique-typeStyle",
      @"omnibus_lexique-groupStyle"
    } ;
    result = kStyleArray [inIndex] ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//         L E X I Q U E   I D E N T I F I E R
//
//----------------------------------------------------------------------------------------------------------------------

- (NSString *) lexiqueIdentifier {
  return @"omnibus_lexique" ;
}

//----------------------------------------------------------------------------------------------------------------------

@end

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


