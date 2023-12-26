//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import AppKit

//--------------------------------------------------------------------------------------------------
//          N I B S   A N D   T H E I R   M A I N   C L A S S E S                                
//--------------------------------------------------------------------------------------------------

/*
NSArray * nibsAndClasses (void) {
  return [NSArray array] ;
}


*/
//--------------------------------------------------------------------------------------------------
//    Project file extensions
//--------------------------------------------------------------------------------------------------

NSDictionary * indexingDescriptorDictionary (void) {
 return [NSDictionary dictionary] ;
}

//--------------------------------------------------------------------------------------------------
//
//                       Command Line Options                                                    
//
//--------------------------------------------------------------------------------------------------

// #import "option-omnibus-5Foptions-cocoa.h"

//--------------------------------------------------------------------------------------------------

/*
void enterOptions (NSMutableArray * ioBoolOptionArray,
                   NSMutableArray * ioUIntOptionArray,
                   NSMutableArray * ioStringOptionArray,
                   NSMutableArray * ioStringListOptionArray) {
  enterOptionsFor_omnibus_5F_options (ioBoolOptionArray, ioUIntOptionArray, ioStringOptionArray, ioStringListOptionArray) ;
  OC_GGS_CommandLineOption * option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"verbose_output"
    commandChar:'v'
    commandString:@"verbose"
    comment:@"Verbose output"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
}

*/

//--------------------------------------------------------------------------------------------------
//                     P O P    U P    L I S T    D A T A
//--------------------------------------------------------------------------------------------------

fileprivate let gPopUpData_0_omnibus_5F_lexique : [[UInt16]] = [
  [1, // Leading character count to strip
    omnibus_lexique_1_commentMark, 48
  ]
]

//--------------------------------------------------------------------------------------------------
//                            Lexique interface
//--------------------------------------------------------------------------------------------------
  
class SWIFT_Tokenizer_0_omnibus_lexique : SWIFT_Lexique_omnibus_lexique, SWIFT_Tokenizer_Protocol {

//- (NSUInteger) textMacroCount ;

//- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;

//- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func popupListData () -> [[UInt16]] {
    return gPopUpData_0_omnibus_5F_lexique
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func tabItemTitle () -> String {
    return "Source"
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  
  func blockComment () -> String {
    return "//"
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func attributes (fromStyleIndex inStyleIndex : UInt8) -> [NSAttributedString.Key : Any] {
    let fontManager = NSFontManager.shared
    var font = fontManager.convert (
      self.font.propval,
      toHaveTrait: self.bold (forStyle: inStyleIndex).propval ? .boldFontMask : .unboldFontMask
    )
    font = fontManager.convert (
      font,
      toHaveTrait: self.italic (forStyle: inStyleIndex).propval ? .italicFontMask : .unitalicFontMask
    )
    let result : [NSAttributedString.Key : Any] = [
      .foregroundColor : self.color (forStyle: inStyleIndex).propval,
      .font : font
    ]
    return result
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

/* @implementation OC_Tokenizer_0_omnibus_lexique

//--------------------------------------------------------------------------------------------------

- (NSUInteger) textMacroCount {
  return 0 ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroTitle [1] = {
    nullptr
  } ;
  return kTextMacroTitle [inIndex] ;
}

//--------------------------------------------------------------------------------------------------

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroContent [1] = {
    nullptr
  } ;
  return kTextMacroContent [inIndex] ;
}

//--------------------------------------------------------------------------------------------------

@end */



//--------------------------------------------------------------------------------------------------
//   Global functions
//--------------------------------------------------------------------------------------------------

func tokenizerFor (extension inExtension : String) -> SWIFT_Tokenizer_Protocol? {
  var result : SWIFT_Tokenizer_Protocol? = nil
  if inExtension == "omnibus" {
    result = SWIFT_Tokenizer_0_omnibus_lexique ()
  }else if inExtension == "omnibus-import" {
    result = SWIFT_Tokenizer_0_omnibus_lexique ()
  }else if inExtension == "omnibus-target" {
    result = SWIFT_Tokenizer_0_omnibus_lexique ()
  }
  return result
}

//--------------------------------------------------------------------------------------------------

func tokenizers () -> [SWIFT_Tokenizer_Protocol] {
  return [
    SWIFT_Tokenizer_0_omnibus_lexique ()
  ]
}

//--------------------------------------------------------------------------------------------------

func buildRunOption () -> String {
  return "-f"
}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


