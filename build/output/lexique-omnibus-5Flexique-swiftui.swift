//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
//   LEXIQUE omnibus_lexique
//--------------------------------------------------------------------------------------------------

import SwiftUI
import AppKit

//--------------------------------------------------------------------------------------------------

struct SettingViewFor_omnibus_lexique : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @AppStorage("FontFor_omnibus_lexique")
  private var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))

  @AppStorage("LineHeightFor_omnibus_lexique")
  private var mLineHeight : Int = 12

  @AppStorage("ColorFor_omnibus_lexique")
  private var mDefaultColor : Color = .black

  @AppStorage("ColorFor_omnibus_lexique-keywordsStyle")
  private var mColorFor_keywordsStyle : Color = .black

  @AppStorage("BoldFor_omnibus_lexique-keywordsStyle")
  private var mBoldFor_keywordsStyle : Bool = false

  @AppStorage("ItalicFor_omnibus_lexique-keywordsStyle")
  private var mItalicFor_keywordsStyle : Bool = false

  @AppStorage("ColorFor_omnibus_lexique-attributeStyle")
  private var mColorFor_attributeStyle : Color = .black

  @AppStorage("BoldFor_omnibus_lexique-attributeStyle")
  private var mBoldFor_attributeStyle : Bool = false

  @AppStorage("ItalicFor_omnibus_lexique-attributeStyle")
  private var mItalicFor_attributeStyle : Bool = false

  @AppStorage("ColorFor_omnibus_lexique-integerStyle")
  private var mColorFor_integerStyle : Color = .black

  @AppStorage("BoldFor_omnibus_lexique-integerStyle")
  private var mBoldFor_integerStyle : Bool = false

  @AppStorage("ItalicFor_omnibus_lexique-integerStyle")
  private var mItalicFor_integerStyle : Bool = false

  @AppStorage("ColorFor_omnibus_lexique-stringStyle")
  private var mColorFor_stringStyle : Color = .black

  @AppStorage("BoldFor_omnibus_lexique-stringStyle")
  private var mBoldFor_stringStyle : Bool = false

  @AppStorage("ItalicFor_omnibus_lexique-stringStyle")
  private var mItalicFor_stringStyle : Bool = false

  @AppStorage("ColorFor_omnibus_lexique-commentStyle")
  private var mColorFor_commentStyle : Color = .black

  @AppStorage("BoldFor_omnibus_lexique-commentStyle")
  private var mBoldFor_commentStyle : Bool = false

  @AppStorage("ItalicFor_omnibus_lexique-commentStyle")
  private var mItalicFor_commentStyle : Bool = false

  @AppStorage("ColorFor_omnibus_lexique-delimitersStyle")
  private var mColorFor_delimitersStyle : Color = .black

  @AppStorage("BoldFor_omnibus_lexique-delimitersStyle")
  private var mBoldFor_delimitersStyle : Bool = false

  @AppStorage("ItalicFor_omnibus_lexique-delimitersStyle")
  private var mItalicFor_delimitersStyle : Bool = false

  @AppStorage("ColorFor_omnibus_lexique-selectorStyle")
  private var mColorFor_selectorStyle : Color = .black

  @AppStorage("BoldFor_omnibus_lexique-selectorStyle")
  private var mBoldFor_selectorStyle : Bool = false

  @AppStorage("ItalicFor_omnibus_lexique-selectorStyle")
  private var mItalicFor_selectorStyle : Bool = false

  @AppStorage("ColorFor_omnibus_lexique-typeStyle")
  private var mColorFor_typeStyle : Color = .black

  @AppStorage("BoldFor_omnibus_lexique-typeStyle")
  private var mBoldFor_typeStyle : Bool = false

  @AppStorage("ItalicFor_omnibus_lexique-typeStyle")
  private var mItalicFor_typeStyle : Bool = false

  @AppStorage("ColorFor_omnibus_lexique-groupStyle")
  private var mColorFor_groupStyle : Color = .black

  @AppStorage("BoldFor_omnibus_lexique-groupStyle")
  private var mBoldFor_groupStyle : Bool = false

  @AppStorage("ItalicFor_omnibus_lexique-groupStyle")
  private var mItalicFor_groupStyle : Bool = false


  @AppStorage("ColorFor_omnibus_lexique_lexical_error")
  private var mColorFor_lexical_error : Color = .red

  @AppStorage("BoldFor_omnibus_lexique_lexical_error")
  private var mBoldFor_lexical_error : Bool = false

  @AppStorage("ItalicFor_omnibus_lexique_lexical_error")
  private var mItalicFor_lexical_error : Bool = false

  @AppStorage("ColorFor_omnibus_lexique_template")
  private var mColorFor_template : Color = .gray

  @AppStorage("BoldFor_omnibus_lexique_template")
  private var mBoldFor_template : Bool = false

  @AppStorage("ItalicFor_omnibus_lexique_template")
  private var mItalicFor_template : Bool = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body : some View {
    Form {
      LabeledContent ("Font") { CustomFontPicker (fontBinding: self.$mFont) }
      Picker("Line Height", selection: self.$mLineHeight) {
        Text("1.0").tag(10)
        Text("1.1").tag(11)
        Text("1.2").tag(12)
        Text("1.5").tag(15)
        Text("1.7").tag(17)
        Text("2.0").tag(20)
      }.pickerStyle(.automatic)
      ColorPicker ("Default Color", selection: self.$mDefaultColor)
      LabeledContent ("Keywords") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_keywordsStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_keywordsStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_keywordsStyle)
        }
      }
      LabeledContent ("Attributes") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_attributeStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_attributeStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_attributeStyle)
        }
      }
      LabeledContent ("Integer Constants") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_integerStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_integerStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_integerStyle)
        }
      }
      LabeledContent ("Literal Strings") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_stringStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_stringStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_stringStyle)
        }
      }
      LabeledContent ("Comments") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_commentStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_commentStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_commentStyle)
        }
      }
      LabeledContent ("Delimiters") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_delimitersStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_delimitersStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_delimitersStyle)
        }
      }
      LabeledContent ("Selectors") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_selectorStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_selectorStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_selectorStyle)
        }
      }
      LabeledContent ("Types") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_typeStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_typeStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_typeStyle)
        }
      }
      LabeledContent ("Control Register Groups") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_groupStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_groupStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_groupStyle)
        }
      }
      LabeledContent ("Lexical Error") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_lexical_error).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_lexical_error)
          Toggle ("Italic", isOn: self.$mItalicFor_lexical_error)
        }
      }
      LabeledContent ("Template") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_template).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_template)
          Toggle ("Italic", isOn: self.$mItalicFor_template)
        }
      }
    }.padding (20)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

#Preview {
  SettingViewFor_omnibus_lexique ()
}

//--------------------------------------------------------------------------------------------------

final class ScannerFor_omnibus_lexique : SWIFT_Scanner {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mDebug = false
  private let mVerboseDebug = false
  private var mTokenArray = [SWIFT_Token] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func selectionRange (forProposedRange inProposedSelectionRange : NSRange,
                                granularity inGranularity : NSSelectionGranularity,
                                nsTextViewComputedRange inTextViewComputedRange : NSRange) -> NSRange {
    var result = inTextViewComputedRange
    switch inGranularity {
    case .selectByCharacter :
      ()
    case .selectByWord :
      var found = false
      var idx = 0
      while idx < self.mTokenArray.count, !found {
        let token = self.mTokenArray [idx]
        idx += 1
        let tokenRange = token.range
        found = ((tokenRange.location + tokenRange.length) > inProposedSelectionRange.location)
           && (tokenRange.location <= inProposedSelectionRange.location)
        if found, self.atomicSelectionFor (token: token.tokenCode) {
          result = tokenRange
        }
      }
    case .selectByParagraph :
      var found = false
      var idx = 0
      while idx < self.mTokenArray.count, !found {
        let token = self.mTokenArray [idx]
        idx += 1
        let tokenRange = token.range
        found = ((tokenRange.location + tokenRange.length) > inProposedSelectionRange.location)
           && (tokenRange.location <= inProposedSelectionRange.location)
        if found {
          result = tokenRange
        }
      }
    @unknown default:
      ()
    }
    return result
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Scanner
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mLexicalAttribute_bigInteger : String = ""
  private var mLexicalAttribute_tokenString : String = ""

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func lexiqueIdentifier () -> String {
    return omnibus_lexique_lexiqueIdentifier ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func isTemplateLexique () -> Bool {
    return false
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func terminalVocabularyCount () -> Int {
    return 118
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIndexFor (token inTokenIndex : UInt16) -> UInt8 {
    let kTerminalSymbolStyles : [UInt8] = [
      0, // Default
      0, // 1 : omnibus_lexique_1_identifier
      2, // 2 : omnibus_lexique_1__40_attribute
      3, // 3 : omnibus_lexique_1_integer
      4, // 4 : omnibus_lexique_1__22_string_22_
      5, // 5 : omnibus_lexique_1_comment
      5, // 6 : omnibus_lexique_1_commentMark
      7, // 7 : omnibus_lexique_1__3F_selector_3A_
      7, // 8 : omnibus_lexique_1__3F__21_selector_3A_
      7, // 9 : omnibus_lexique_1__21_selector_3A_
      7, // 10 : omnibus_lexique_1__21__3F_selector_3A_
      8, // 11 : omnibus_lexique_1__24_type
      9, // 12 : omnibus_lexique_1__A9_group
      1, // 13 : omnibus_lexique_1_addressof
      1, // 14 : omnibus_lexique_1_assert
      1, // 15 : omnibus_lexique_1_boot
      1, // 16 : omnibus_lexique_1_case
      1, // 17 : omnibus_lexique_1_convert
      1, // 18 : omnibus_lexique_1_ctAssert
      1, // 19 : omnibus_lexique_1_compiletime
      1, // 20 : omnibus_lexique_1_driver
      1, // 21 : omnibus_lexique_1_else
      1, // 22 : omnibus_lexique_1_enum
      1, // 23 : omnibus_lexique_1_event
      1, // 24 : omnibus_lexique_1_extend
      1, // 25 : omnibus_lexique_1_extern
      1, // 26 : omnibus_lexique_1_for
      1, // 27 : omnibus_lexique_1_func
      1, // 28 : omnibus_lexique_1_guard
      1, // 29 : omnibus_lexique_1_if
      1, // 30 : omnibus_lexique_1_import
      1, // 31 : omnibus_lexique_1_in
      1, // 32 : omnibus_lexique_1_interrupt
      1, // 33 : omnibus_lexique_1_let
      1, // 34 : omnibus_lexique_1_llvm
      1, // 35 : omnibus_lexique_1_no
      1, // 36 : omnibus_lexique_1_not
      1, // 37 : omnibus_lexique_1_opaque
      1, // 38 : omnibus_lexique_1_option
      1, // 39 : omnibus_lexique_1_panic
      1, // 40 : omnibus_lexique_1_primitive
      1, // 41 : omnibus_lexique_1_public
      1, // 42 : omnibus_lexique_1_registers
      1, // 43 : omnibus_lexique_1_required
      1, // 44 : omnibus_lexique_1_safe
      1, // 45 : omnibus_lexique_1_section
      1, // 46 : omnibus_lexique_1_self
      1, // 47 : omnibus_lexique_1_service
      1, // 48 : omnibus_lexique_1_sizeof
      1, // 49 : omnibus_lexique_1_startup
      1, // 50 : omnibus_lexique_1_struct
      1, // 51 : omnibus_lexique_1_staticArray
      1, // 52 : omnibus_lexique_1_switch
      1, // 53 : omnibus_lexique_1_sync
      1, // 54 : omnibus_lexique_1_target
      1, // 55 : omnibus_lexique_1_task
      1, // 56 : omnibus_lexique_1_truncate
      1, // 57 : omnibus_lexique_1_typealias
      1, // 58 : omnibus_lexique_1_var
      1, // 59 : omnibus_lexique_1_until
      1, // 60 : omnibus_lexique_1_user
      1, // 61 : omnibus_lexique_1_where
      1, // 62 : omnibus_lexique_1_when
      1, // 63 : omnibus_lexique_1_while
      1, // 64 : omnibus_lexique_1_yes
      6, // 65 : omnibus_lexique_1__3A_
      6, // 66 : omnibus_lexique_1__2E_
      6, // 67 : omnibus_lexique_1__2C_
      6, // 68 : omnibus_lexique_1__7B_
      6, // 69 : omnibus_lexique_1__7D_
      6, // 70 : omnibus_lexique_1__3D_
      6, // 71 : omnibus_lexique_1__28_
      6, // 72 : omnibus_lexique_1__29_
      6, // 73 : omnibus_lexique_1__5F_
      6, // 74 : omnibus_lexique_1__3D__3D_
      6, // 75 : omnibus_lexique_1__2260_
      6, // 76 : omnibus_lexique_1__3C_
      6, // 77 : omnibus_lexique_1__2264_
      6, // 78 : omnibus_lexique_1__3E_
      6, // 79 : omnibus_lexique_1__2265_
      6, // 80 : omnibus_lexique_1__5B_
      6, // 81 : omnibus_lexique_1__5D_
      6, // 82 : omnibus_lexique_1__5D__21_
      6, // 83 : omnibus_lexique_1__3C__3C_
      6, // 84 : omnibus_lexique_1__3E__3E_
      6, // 85 : omnibus_lexique_1__7E_
      6, // 86 : omnibus_lexique_1__7C__7C_
      6, // 87 : omnibus_lexique_1__26__26_
      6, // 88 : omnibus_lexique_1__2D__3E_
      6, // 89 : omnibus_lexique_1__2E__2E__3C_
      6, // 90 : omnibus_lexique_1__2E__2E__2E_
      6, // 91 : omnibus_lexique_1__7C_
      6, // 92 : omnibus_lexique_1__7C__3D_
      6, // 93 : omnibus_lexique_1__26_
      6, // 94 : omnibus_lexique_1__26__3D_
      6, // 95 : omnibus_lexique_1__5E_
      6, // 96 : omnibus_lexique_1__5E__3D_
      6, // 97 : omnibus_lexique_1__2B_
      6, // 98 : omnibus_lexique_1__2B__25_
      6, // 99 : omnibus_lexique_1__2B__3D_
      6, // 100 : omnibus_lexique_1__2B__25__3D_
      6, // 101 : omnibus_lexique_1__2D_
      6, // 102 : omnibus_lexique_1__2D__25_
      6, // 103 : omnibus_lexique_1__2D__3D_
      6, // 104 : omnibus_lexique_1__2D__25__3D_
      6, // 105 : omnibus_lexique_1__2A_
      6, // 106 : omnibus_lexique_1__2A__25_
      6, // 107 : omnibus_lexique_1__2A__3D_
      6, // 108 : omnibus_lexique_1__2A__25__3D_
      6, // 109 : omnibus_lexique_1__2F_
      6, // 110 : omnibus_lexique_1__21__2F_
      6, // 111 : omnibus_lexique_1__2F__3D_
      6, // 112 : omnibus_lexique_1__21__2F__3D_
      6, // 113 : omnibus_lexique_1__25_
      6, // 114 : omnibus_lexique_1__21__25_
      6, // 115 : omnibus_lexique_1__25__3D_
      6, // 116 : omnibus_lexique_1__21__25__3D_
      6, // 117 : omnibus_lexique_1__3C__3C__3D_
      6, // 118 : omnibus_lexique_1__3E__3E__3D_
      10, // 119 : omnibus_lexique_2_ERROR
      11  // 120 : omnibus_lexique_2_TEMPLATE
    ]
    return kTerminalSymbolStyles [Int (inTokenIndex)]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func atomicSelectionFor (token inTokenIndex : UInt16) -> Bool {
    let kTerminalAtomicSelection : [Bool] = [
      false, // Default
      true, // 1 : omnibus_lexique_1_identifier
      true, // 2 : omnibus_lexique_1__40_attribute
      true, // 3 : omnibus_lexique_1_integer
      false, // 4 : omnibus_lexique_1__22_string_22_
      false, // 5 : omnibus_lexique_1_comment
      false, // 6 : omnibus_lexique_1_commentMark
      true, // 7 : omnibus_lexique_1__3F_selector_3A_
      true, // 8 : omnibus_lexique_1__3F__21_selector_3A_
      true, // 9 : omnibus_lexique_1__21_selector_3A_
      true, // 10 : omnibus_lexique_1__21__3F_selector_3A_
      true, // 11 : omnibus_lexique_1__24_type
      true, // 12 : omnibus_lexique_1__A9_group
      true, // 13 : omnibus_lexique_1_addressof
      true, // 14 : omnibus_lexique_1_assert
      true, // 15 : omnibus_lexique_1_boot
      true, // 16 : omnibus_lexique_1_case
      true, // 17 : omnibus_lexique_1_convert
      true, // 18 : omnibus_lexique_1_ctAssert
      true, // 19 : omnibus_lexique_1_compiletime
      true, // 20 : omnibus_lexique_1_driver
      true, // 21 : omnibus_lexique_1_else
      true, // 22 : omnibus_lexique_1_enum
      true, // 23 : omnibus_lexique_1_event
      true, // 24 : omnibus_lexique_1_extend
      true, // 25 : omnibus_lexique_1_extern
      true, // 26 : omnibus_lexique_1_for
      true, // 27 : omnibus_lexique_1_func
      true, // 28 : omnibus_lexique_1_guard
      true, // 29 : omnibus_lexique_1_if
      true, // 30 : omnibus_lexique_1_import
      true, // 31 : omnibus_lexique_1_in
      true, // 32 : omnibus_lexique_1_interrupt
      true, // 33 : omnibus_lexique_1_let
      true, // 34 : omnibus_lexique_1_llvm
      true, // 35 : omnibus_lexique_1_no
      true, // 36 : omnibus_lexique_1_not
      true, // 37 : omnibus_lexique_1_opaque
      true, // 38 : omnibus_lexique_1_option
      true, // 39 : omnibus_lexique_1_panic
      true, // 40 : omnibus_lexique_1_primitive
      true, // 41 : omnibus_lexique_1_public
      true, // 42 : omnibus_lexique_1_registers
      true, // 43 : omnibus_lexique_1_required
      true, // 44 : omnibus_lexique_1_safe
      true, // 45 : omnibus_lexique_1_section
      true, // 46 : omnibus_lexique_1_self
      true, // 47 : omnibus_lexique_1_service
      true, // 48 : omnibus_lexique_1_sizeof
      true, // 49 : omnibus_lexique_1_startup
      true, // 50 : omnibus_lexique_1_struct
      true, // 51 : omnibus_lexique_1_staticArray
      true, // 52 : omnibus_lexique_1_switch
      true, // 53 : omnibus_lexique_1_sync
      true, // 54 : omnibus_lexique_1_target
      true, // 55 : omnibus_lexique_1_task
      true, // 56 : omnibus_lexique_1_truncate
      true, // 57 : omnibus_lexique_1_typealias
      true, // 58 : omnibus_lexique_1_var
      true, // 59 : omnibus_lexique_1_until
      true, // 60 : omnibus_lexique_1_user
      true, // 61 : omnibus_lexique_1_where
      true, // 62 : omnibus_lexique_1_when
      true, // 63 : omnibus_lexique_1_while
      true, // 64 : omnibus_lexique_1_yes
      true, // 65 : omnibus_lexique_1__3A_
      true, // 66 : omnibus_lexique_1__2E_
      true, // 67 : omnibus_lexique_1__2C_
      true, // 68 : omnibus_lexique_1__7B_
      true, // 69 : omnibus_lexique_1__7D_
      true, // 70 : omnibus_lexique_1__3D_
      true, // 71 : omnibus_lexique_1__28_
      true, // 72 : omnibus_lexique_1__29_
      true, // 73 : omnibus_lexique_1__5F_
      true, // 74 : omnibus_lexique_1__3D__3D_
      true, // 75 : omnibus_lexique_1__2260_
      true, // 76 : omnibus_lexique_1__3C_
      true, // 77 : omnibus_lexique_1__2264_
      true, // 78 : omnibus_lexique_1__3E_
      true, // 79 : omnibus_lexique_1__2265_
      true, // 80 : omnibus_lexique_1__5B_
      true, // 81 : omnibus_lexique_1__5D_
      true, // 82 : omnibus_lexique_1__5D__21_
      true, // 83 : omnibus_lexique_1__3C__3C_
      true, // 84 : omnibus_lexique_1__3E__3E_
      true, // 85 : omnibus_lexique_1__7E_
      true, // 86 : omnibus_lexique_1__7C__7C_
      true, // 87 : omnibus_lexique_1__26__26_
      true, // 88 : omnibus_lexique_1__2D__3E_
      true, // 89 : omnibus_lexique_1__2E__2E__3C_
      true, // 90 : omnibus_lexique_1__2E__2E__2E_
      true, // 91 : omnibus_lexique_1__7C_
      true, // 92 : omnibus_lexique_1__7C__3D_
      true, // 93 : omnibus_lexique_1__26_
      true, // 94 : omnibus_lexique_1__26__3D_
      true, // 95 : omnibus_lexique_1__5E_
      true, // 96 : omnibus_lexique_1__5E__3D_
      true, // 97 : omnibus_lexique_1__2B_
      true, // 98 : omnibus_lexique_1__2B__25_
      true, // 99 : omnibus_lexique_1__2B__3D_
      true, // 100 : omnibus_lexique_1__2B__25__3D_
      true, // 101 : omnibus_lexique_1__2D_
      true, // 102 : omnibus_lexique_1__2D__25_
      true, // 103 : omnibus_lexique_1__2D__3D_
      true, // 104 : omnibus_lexique_1__2D__25__3D_
      true, // 105 : omnibus_lexique_1__2A_
      true, // 106 : omnibus_lexique_1__2A__25_
      true, // 107 : omnibus_lexique_1__2A__3D_
      true, // 108 : omnibus_lexique_1__2A__25__3D_
      true, // 109 : omnibus_lexique_1__2F_
      true, // 110 : omnibus_lexique_1__21__2F_
      true, // 111 : omnibus_lexique_1__2F__3D_
      true, // 112 : omnibus_lexique_1__21__2F__3D_
      true, // 113 : omnibus_lexique_1__25_
      true, // 114 : omnibus_lexique_1__21__25_
      true, // 115 : omnibus_lexique_1__25__3D_
      true, // 116 : omnibus_lexique_1__21__25__3D_
      true, // 117 : omnibus_lexique_1__3C__3C__3D_
      true, // 118 : omnibus_lexique_1__3E__3E__3D_
      false, // 119 : omnibus_lexique_2_ERROR
      false  // 120 : omnibus_lexique_2_TEMPLATE
    ]
    return kTerminalAtomicSelection [Int (inTokenIndex)]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func indexingTitles () -> [String] {

    return []
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  S T Y L E S
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleCount () -> UInt8 {
    return 9
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleNameFor (styleIndex inIndex : UInt8) -> String {
    return omnibus_lexique_styleNameFor (styleIndex: inIndex)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
    return omnibus_lexique_styleIdentifierFor (styleIndex: inIndex)
  }

 // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))
  private var mLineHeight : Int = 12
  private var mDefaultColor : Color = .black
  private var mColorFor_keywordsStyle : Color = .black
  private var mBoldFor_keywordsStyle : Bool = false
  private var mItalicFor_keywordsStyle : Bool = false
  private var mColorFor_attributeStyle : Color = .black
  private var mBoldFor_attributeStyle : Bool = false
  private var mItalicFor_attributeStyle : Bool = false
  private var mColorFor_integerStyle : Color = .black
  private var mBoldFor_integerStyle : Bool = false
  private var mItalicFor_integerStyle : Bool = false
  private var mColorFor_stringStyle : Color = .black
  private var mBoldFor_stringStyle : Bool = false
  private var mItalicFor_stringStyle : Bool = false
  private var mColorFor_commentStyle : Color = .black
  private var mBoldFor_commentStyle : Bool = false
  private var mItalicFor_commentStyle : Bool = false
  private var mColorFor_delimitersStyle : Color = .black
  private var mBoldFor_delimitersStyle : Bool = false
  private var mItalicFor_delimitersStyle : Bool = false
  private var mColorFor_selectorStyle : Color = .black
  private var mBoldFor_selectorStyle : Bool = false
  private var mItalicFor_selectorStyle : Bool = false
  private var mColorFor_typeStyle : Color = .black
  private var mBoldFor_typeStyle : Bool = false
  private var mItalicFor_typeStyle : Bool = false
  private var mColorFor_groupStyle : Color = .black
  private var mBoldFor_groupStyle : Bool = false
  private var mItalicFor_groupStyle : Bool = false
  private var mColorFor_lexical_error : Color = .red
  private var mBoldFor_lexical_error : Bool = false
  private var mItalicFor_lexical_error : Bool = false
  private var mColorFor_template : Color = .gray
  private var mBoldFor_template : Bool = false
  private var mItalicFor_template : Bool = false
  private var mTokenAttributeArray = [[NSAttributedString.Key : Any]?] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func updateTokenStyleArrays (_ ioStyleDidChange : inout Bool) {
    ioStyleDidChange = false
    let ud = UserDefaults.standard
    if let s = ud.string (forKey: "FontFor_galgasScanner3"), let v = CustomFont (rawValue: s) {
      if self.mFont != v {
        self.mFont = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "LineHeightFor_galgasScanner3"), let v = Int (s) {
      if self.mLineHeight != v {
        self.mLineHeight = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasScanner3"), let v = Color (rawValue: s) {
      if self.mDefaultColor != v {
        self.mDefaultColor = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_omnibus_lexique-keywordsStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_keywordsStyle != v {
        self.mColorFor_keywordsStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_omnibus_lexique-keywordsStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_omnibus_lexique-keywordsStyle")
      if self.mBoldFor_keywordsStyle != v {
        self.mBoldFor_keywordsStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_omnibus_lexique-keywordsStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_omnibus_lexique-keywordsStyle")
      if self.mItalicFor_keywordsStyle != v {
        self.mItalicFor_keywordsStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_omnibus_lexique-attributeStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_attributeStyle != v {
        self.mColorFor_attributeStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_omnibus_lexique-attributeStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_omnibus_lexique-attributeStyle")
      if self.mBoldFor_attributeStyle != v {
        self.mBoldFor_attributeStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_omnibus_lexique-attributeStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_omnibus_lexique-attributeStyle")
      if self.mItalicFor_attributeStyle != v {
        self.mItalicFor_attributeStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_omnibus_lexique-integerStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_integerStyle != v {
        self.mColorFor_integerStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_omnibus_lexique-integerStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_omnibus_lexique-integerStyle")
      if self.mBoldFor_integerStyle != v {
        self.mBoldFor_integerStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_omnibus_lexique-integerStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_omnibus_lexique-integerStyle")
      if self.mItalicFor_integerStyle != v {
        self.mItalicFor_integerStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_omnibus_lexique-stringStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_stringStyle != v {
        self.mColorFor_stringStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_omnibus_lexique-stringStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_omnibus_lexique-stringStyle")
      if self.mBoldFor_stringStyle != v {
        self.mBoldFor_stringStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_omnibus_lexique-stringStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_omnibus_lexique-stringStyle")
      if self.mItalicFor_stringStyle != v {
        self.mItalicFor_stringStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_omnibus_lexique-commentStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_commentStyle != v {
        self.mColorFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_omnibus_lexique-commentStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_omnibus_lexique-commentStyle")
      if self.mBoldFor_commentStyle != v {
        self.mBoldFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_omnibus_lexique-commentStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_omnibus_lexique-commentStyle")
      if self.mItalicFor_commentStyle != v {
        self.mItalicFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_omnibus_lexique-delimitersStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_delimitersStyle != v {
        self.mColorFor_delimitersStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_omnibus_lexique-delimitersStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_omnibus_lexique-delimitersStyle")
      if self.mBoldFor_delimitersStyle != v {
        self.mBoldFor_delimitersStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_omnibus_lexique-delimitersStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_omnibus_lexique-delimitersStyle")
      if self.mItalicFor_delimitersStyle != v {
        self.mItalicFor_delimitersStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_omnibus_lexique-selectorStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_selectorStyle != v {
        self.mColorFor_selectorStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_omnibus_lexique-selectorStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_omnibus_lexique-selectorStyle")
      if self.mBoldFor_selectorStyle != v {
        self.mBoldFor_selectorStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_omnibus_lexique-selectorStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_omnibus_lexique-selectorStyle")
      if self.mItalicFor_selectorStyle != v {
        self.mItalicFor_selectorStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_omnibus_lexique-typeStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_typeStyle != v {
        self.mColorFor_typeStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_omnibus_lexique-typeStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_omnibus_lexique-typeStyle")
      if self.mBoldFor_typeStyle != v {
        self.mBoldFor_typeStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_omnibus_lexique-typeStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_omnibus_lexique-typeStyle")
      if self.mItalicFor_typeStyle != v {
        self.mItalicFor_typeStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_omnibus_lexique-groupStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_groupStyle != v {
        self.mColorFor_groupStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_omnibus_lexique-groupStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_omnibus_lexique-groupStyle")
      if self.mBoldFor_groupStyle != v {
        self.mBoldFor_groupStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_omnibus_lexique-groupStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_omnibus_lexique-groupStyle")
      if self.mItalicFor_groupStyle != v {
        self.mItalicFor_groupStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_omnibus_lexique_lexical_error"), let v = Color (rawValue: s) {
      if self.mColorFor_lexical_error != v {
        self.mColorFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_omnibus_lexique_lexical_error") != nil {
      let v = ud.bool (forKey: "BoldFor_omnibus_lexique_lexical_error")
      if self.mBoldFor_lexical_error != v {
        self.mBoldFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_omnibus_lexique_lexical_error") != nil {
      let v = ud.bool (forKey: "ItalicFor_omnibus_lexique_lexical_error")
      if self.mItalicFor_lexical_error != v {
        self.mItalicFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_omnibus_lexique_template"), let v = Color (rawValue: s) {
      if self.mColorFor_template != v {
        self.mColorFor_template = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_omnibus_lexique_template") != nil {
      let v = ud.bool (forKey: "BoldFor_omnibus_lexique_template")
      if self.mBoldFor_template != v {
        self.mBoldFor_template = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_omnibus_lexique_template") != nil {
      let v = ud.bool (forKey: "ItalicFor_omnibus_lexique_template")
      if self.mItalicFor_template != v {
        self.mItalicFor_template = v
        ioStyleDidChange = true
      }
    }
  //--- Build token attribute array
    if ioStyleDidChange {
      let fontManager = NSFontManager.shared
      let boldFont = fontManager.convert (self.mFont.nsFont, toHaveTrait: .boldFontMask)
      let italicFont = fontManager.convert (self.mFont.nsFont, toHaveTrait: .italicFontMask)
      let boldItalicFont = fontManager.convert (boldFont, toHaveTrait: .italicFontMask)
      self.mTokenAttributeArray.removeAll (keepingCapacity: true)
      var attributes = [NSAttributedString.Key : Any] ()
    //--- Attributes for keywordsStyle
      if self.mColorFor_keywordsStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_keywordsStyle)
      }
      if self.mBoldFor_keywordsStyle && self.mItalicFor_keywordsStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_keywordsStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_keywordsStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for attributeStyle
      if self.mColorFor_attributeStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_attributeStyle)
      }
      if self.mBoldFor_attributeStyle && self.mItalicFor_attributeStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_attributeStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_attributeStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for integerStyle
      if self.mColorFor_integerStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_integerStyle)
      }
      if self.mBoldFor_integerStyle && self.mItalicFor_integerStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_integerStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_integerStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for stringStyle
      if self.mColorFor_stringStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_stringStyle)
      }
      if self.mBoldFor_stringStyle && self.mItalicFor_stringStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_stringStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_stringStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for commentStyle
      if self.mColorFor_commentStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_commentStyle)
      }
      if self.mBoldFor_commentStyle && self.mItalicFor_commentStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_commentStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_commentStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for delimitersStyle
      if self.mColorFor_delimitersStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_delimitersStyle)
      }
      if self.mBoldFor_delimitersStyle && self.mItalicFor_delimitersStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_delimitersStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_delimitersStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for selectorStyle
      if self.mColorFor_selectorStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_selectorStyle)
      }
      if self.mBoldFor_selectorStyle && self.mItalicFor_selectorStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_selectorStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_selectorStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for typeStyle
      if self.mColorFor_typeStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_typeStyle)
      }
      if self.mBoldFor_typeStyle && self.mItalicFor_typeStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_typeStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_typeStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for groupStyle
      if self.mColorFor_groupStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_groupStyle)
      }
      if self.mBoldFor_groupStyle && self.mItalicFor_groupStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_groupStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_groupStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Lexical error
      if self.mColorFor_lexical_error != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_lexical_error)
      }
      if self.mBoldFor_lexical_error && self.mItalicFor_lexical_error {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_lexical_error {
        attributes [.font] = boldFont
      }else if self.mItalicFor_lexical_error {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Template
      if self.mColorFor_template != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_template)
      }
      if self.mBoldFor_template && self.mItalicFor_template {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_template {
        attributes [.font] = boldFont
      }else if self.mItalicFor_template {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func performLexicalColoringAfterUserDefaultChange (textStorage inTextStorage : NSTextStorage) {
    if self.mDebug { Swift.print ("performLexicalColoringAfterUserDefaultChange") }
    let start = Date ()
    var styleDidChange = false
    self.updateTokenStyleArrays (&styleDidChange)
    if styleDidChange {
      let nsString = inTextStorage.string as NSString
      let fullRange = NSRange (location: 0, length: nsString.length)
    //---- Apply default attributes
      let tsDelegate : NSTextStorageDelegate? = inTextStorage.delegate
      inTextStorage.delegate = nil // NSTextStorageDelegate
      inTextStorage.beginEditing ()
      let defaultFont = self.mFont.nsFont
      inTextStorage.font = defaultFont
      let ps = NSMutableParagraphStyle ()
      ps.lineHeightMultiple = CGFloat (self.mLineHeight) / 10.0
      let defaultAttributes : [NSAttributedString.Key : Any] = [
        .font: defaultFont,
        .foregroundColor: NSColor (self.mDefaultColor),
        .paragraphStyle : ps
      ]
      inTextStorage.setAttributes (defaultAttributes, range: fullRange)
    //--- Apply styles
      for token in self.mTokenArray {
        let idx = Int (self.styleIndexFor (token: token.tokenCode))
        if idx > 0, let attributes = self.mTokenAttributeArray [idx - 1] {
          inTextStorage.addAttributes (attributes, range: token.range)
        }
      }
      inTextStorage.endEditing ()
      inTextStorage.delegate = tsDelegate // NSTextStorageDelegate
    }
    if self.mDebug { Swift.print ("  done: \(Int (Date ().timeIntervalSince (start) * 1000.0)) ms") }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func performLexicalAnalysisAndColoring (textStorage inTextStorage : NSTextStorage,
                                                   editedRange inEditedRange : NSRange,
                                                   changeInLength inDelta : Int) {
    if self.mDebug { Swift.print ("performLexicalAnalysisAndColoring \(inEditedRange), delta \(inDelta)") }
    let nsString = inTextStorage.string as NSString
  //---
    var savedTokenCount = 0
    var found = false
    while savedTokenCount < self.mTokenArray.count, !found {
      if self.mTokenArray [savedTokenCount].range.upperBound < inEditedRange.location {
        savedTokenCount += 1
      }else{
        found = true
      }
    }
    if self.mDebug { Swift.print ("  savedTokenCount \(savedTokenCount), currently \(self.mTokenArray.count) tokens") }
  //--- Eliminate tokens beyond end of source string
    while let lastToken = self.mTokenArray.last, lastToken.range.upperBound > nsString.length {
      if self.mVerboseDebug { Swift.print ("Remove last token \(lastToken.range), beyond end") }
      _ = self.mTokenArray.removeLast ()
    }
    if self.mDebug { Swift.print ("  Eliminate token beyond end: \(self.mTokenArray.count) tokens") }
  //--- Translater les tokens suivants
    var i = savedTokenCount + 1
    while i < self.mTokenArray.count {
      let token = self.mTokenArray [i]
      let newToken = SWIFT_Token (
        range: NSRange (location: token.range.location + inDelta, length: token.range.length),
        tokenCode: token.tokenCode,
        templateDelimiterIndex: token.templateDelimiterIndex
      )
      self.mTokenArray [i] = newToken
      i += 1
    }
  //--- Eliminate tokens beyond end of source string
    while let lastToken = self.mTokenArray.last, lastToken.range.upperBound > nsString.length {
      if self.mVerboseDebug { Swift.print ("Remove last token \(lastToken.range), beyond end") }
      _ = self.mTokenArray.removeLast ()
    }
    if self.mDebug { Swift.print ("  Eliminate token beyond end, after delta correction: \(self.mTokenArray.count) tokens") }
  //--- Perform lexical analysis
    let start = Date ()
    if savedTokenCount == 0 {
      self.resetScannerLocation (withString: nsString)
    }else{
      self.resetScanner (
        withString: nsString,
        location: self.mTokenArray [savedTokenCount-1].range.upperBound,
        templateDelimiterIndex : self.mTokenArray [savedTokenCount-1].templateDelimiterIndex
      )
    }
    if self.mDebug { Swift.print ("  Scanning start location: \(self.currentLocation)") }
    var stop = false
    var insertionIndex = savedTokenCount
    while self.currentLocation < nsString.length, !stop {
      let token : SWIFT_Token = self.parseLexicalTokenForLexicalColoring ()
      if token.tokenCode > 0 { // For eliminating separators
        if self.mVerboseDebug { Swift.print ("  -> new token \(token.range) '\(nsString.substring (with: token.range))'") }
      //--- Eliminate previous tokens before new token location
        if insertionIndex < self.mTokenArray.count,
              self.mTokenArray [insertionIndex] == token,
              token.range.location > inEditedRange.upperBound {
          if self.mVerboseDebug { Swift.print ("    stop at \(insertionIndex)") }
          stop = true
        }else{
          while insertionIndex < self.mTokenArray.count,
                self.mTokenArray [insertionIndex].range.lowerBound <= token.range.location {
            if self.mVerboseDebug { Swift.print ("    remove token \(self.mTokenArray [insertionIndex].range) at \(insertionIndex)") }
            self.mTokenArray.remove (at: insertionIndex)
          }
          if insertionIndex == self.mTokenArray.count {
            if self.mVerboseDebug { Swift.print ("    append token \(token.range) at \(insertionIndex)") }
            self.mTokenArray.append (token)
            insertionIndex += 1
          }else{
            if self.mVerboseDebug {  Swift.print ("    insert token \(token.range) at \(insertionIndex)") }
            self.mTokenArray.insert (token, at: insertionIndex)
            insertionIndex += 1
          }
        }
      }
    }
    if self.mDebug { Swift.print ("  Lexical analysis time: \(Int (Date ().timeIntervalSince (start) * 1000.0)) ms") }
  //---- Apply default attributes
    let modificationStart = min (inEditedRange.location, (savedTokenCount == 0) ? 0 : self.mTokenArray [savedTokenCount - 1].range.upperBound)
    let modificationEnd = max (inEditedRange.upperBound, (insertionIndex == self.mTokenArray.count)
       ? nsString.length
       : self.mTokenArray [insertionIndex].range.upperBound
    )
    if self.mDebug { Swift.print ("  Attributes will change from char index \(modificationStart) to \(modificationEnd)") }
    let start2 = Date ()
    if modificationStart < modificationEnd {
      let modifiedRange = NSRange (location: modificationStart, length: modificationEnd - modificationStart)
      let tsDelegate : NSTextStorageDelegate? = inTextStorage.delegate
      inTextStorage.delegate = nil // NSTextStorageDelegate
      inTextStorage.beginEditing ()
      let defaultFont = self.mFont.nsFont
      let ps = NSMutableParagraphStyle ()
      ps.lineHeightMultiple = CGFloat (self.mLineHeight) / 10.0
      let defaultAttributes : [NSAttributedString.Key : Any] = [
        .font: defaultFont,
        .foregroundColor: NSColor (self.mDefaultColor),
        .paragraphStyle : ps
      ]
      if self.mVerboseDebug { Swift.print ("Apply default attributes \(modifiedRange)") }
      inTextStorage.setAttributes (defaultAttributes, range: modifiedRange)
    //--- Apply styles
      var idx = 0
      stop = false
      while idx < self.mTokenArray.count, !stop { // Apply token styles
        let token = self.mTokenArray [idx]
        idx += 1
        if token.range.lowerBound >= modifiedRange.upperBound {
          stop = true
        }else if token.range.upperBound > modifiedRange.lowerBound {
          let styleIndex = Int (self.styleIndexFor (token: token.tokenCode))
          if styleIndex > 0, let attributes = self.mTokenAttributeArray [styleIndex - 1] {
            inTextStorage.addAttributes (attributes, range: token.range)
          }
        }
      }
      inTextStorage.endEditing ()
      inTextStorage.delegate = tsDelegate // NSTextStorageDelegate
    }
    if self.mDebug { Swift.print ("  Adding attributes: \(Int (Date ().timeIntervalSince (start2) * 1000.0)) ms") }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Lexical analysis
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func parseLexicalTokenForLexicalColoring () -> SWIFT_Token {
    var loop = true
    var scanningOk = true
    self.mLexicalAttribute_bigInteger = ""
    self.mLexicalAttribute_tokenString = ""
    var tokenCode : UInt16 = 0
    let startLocation = self.currentLocation
    if scanningOk && (self.testForCharWithFunction (isUnicodeLetter)) {
      while (loop && scanningOk) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        if scanningOk && (self.testForCharWithFunction (isUnicodeLetter) || self.testForInputChar (95) || self.testForInputFromChar (48, toChar:57)) {
        }else{
          loop = false
        }
      }
      loop = true
      if (tokenCode == 0) {
        tokenCode = search_into_omnibus_5F_lexique_keyWordList (mLexicalAttribute_tokenString) ;
      }
      if tokenCode == 0 {
        tokenCode = omnibus_lexique_1_identifier ;
      }
    }else if scanningOk && (self.testForInputChar (64)) {
      if scanningOk && (self.testForCharWithFunction (isUnicodeLetter) || self.testForInputFromChar (48, toChar:57)) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForCharWithFunction (isUnicodeLetter) || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (46)) {
          }else{
            loop = false
          }
        }
        loop = true
      }else{
        scanningOk = false
      }
      tokenCode = omnibus_lexique_1__40_attribute
    }else if scanningOk && (self.testForInputString ("0b", advance: true)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputChar (95)) {
        }else{
          loop = false
        }
      }
      loop = true
      if scanningOk && (self.testForInputFromChar (48, toChar:49)) {
        scanner_cocoa_routine_enterBinaryDigitIntoBigInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_bigInteger)
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputFromChar (48, toChar:49)) {
            scanner_cocoa_routine_enterBinaryDigitIntoBigInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_bigInteger)
          }else if scanningOk && (self.testForInputChar (95)) {
          }else{
            loop = false
          }
        }
        loop = true
        tokenCode = omnibus_lexique_1_integer
      }else{
        scanningOk = false
      }
    }else if scanningOk && (self.testForInputString ("0x", advance: true)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputChar (95)) {
        }else{
          loop = false
        }
      }
      loop = true
      if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
        scanner_cocoa_routine_enterHexDigitIntoBigInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_bigInteger)
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
            scanner_cocoa_routine_enterHexDigitIntoBigInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_bigInteger)
          }else if scanningOk && (self.testForInputChar (95)) {
          }else{
            loop = false
          }
        }
        loop = true
        tokenCode = omnibus_lexique_1_integer
      }else{
        scanningOk = false
      }
    }else if scanningOk && (self.testForInputFromChar (48, toChar:57)) {
      scanner_cocoa_routine_enterDecimalDigitIntoBigInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_bigInteger)
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputFromChar (48, toChar:57)) {
          scanner_cocoa_routine_enterDecimalDigitIntoBigInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_bigInteger)
        }else if scanningOk && (self.testForInputChar (95)) {
        }else{
          loop = false
        }
      }
      loop = true
      tokenCode = omnibus_lexique_1_integer
    }else if scanningOk && (self.testForInputChar (34)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputString ("\\\"", advance: true)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 34)
        }else if scanningOk && (self.testForInputChar (32) || self.testForInputChar (33) || self.testForInputFromChar (35, toChar:65533)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        }else{
          loop = false
        }
      }
      loop = true
      if scanningOk && (self.testForInputChar (34)) {
        tokenCode = omnibus_lexique_1__22_string_22_
      }else{
        scanningOk = false
      }
    }else if scanningOk && (self.testForInputString ("//!", advance: true)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputFromChar (1, toChar:9) || self.testForInputChar (11) || self.testForInputChar (12) || self.testForInputFromChar (14, toChar:65533)) {
        }else{
          loop = false
        }
      }
      loop = true
      tokenCode = omnibus_lexique_1_commentMark
    }else if scanningOk && (self.testForInputString ("//", advance: true)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputFromChar (1, toChar:9) || self.testForInputChar (11) || self.testForInputChar (12) || self.testForInputFromChar (14, toChar:65533)) {
        }else{
          loop = false
        }
      }
      loop = true
      tokenCode = omnibus_lexique_1_comment
    }else if scanningOk && self.testForInputString (">>=", advance: true) {
      tokenCode = omnibus_lexique_1__3E__3E__3D_
    }else if scanningOk && self.testForInputString ("<<=", advance: true) {
      tokenCode = omnibus_lexique_1__3C__3C__3D_
    }else if scanningOk && self.testForInputString ("..<", advance: true) {
      tokenCode = omnibus_lexique_1__2E__2E__3C_
    }else if scanningOk && self.testForInputString ("...", advance: true) {
      tokenCode = omnibus_lexique_1__2E__2E__2E_
    }else if scanningOk && self.testForInputString ("-%=", advance: true) {
      tokenCode = omnibus_lexique_1__2D__25__3D_
    }else if scanningOk && self.testForInputString ("+%=", advance: true) {
      tokenCode = omnibus_lexique_1__2B__25__3D_
    }else if scanningOk && self.testForInputString ("*%=", advance: true) {
      tokenCode = omnibus_lexique_1__2A__25__3D_
    }else if scanningOk && self.testForInputString ("!/=", advance: true) {
      tokenCode = omnibus_lexique_1__21__2F__3D_
    }else if scanningOk && self.testForInputString ("!%=", advance: true) {
      tokenCode = omnibus_lexique_1__21__25__3D_
    }else if scanningOk && self.testForInputString ("||", advance: true) {
      tokenCode = omnibus_lexique_1__7C__7C_
    }else if scanningOk && self.testForInputString ("|=", advance: true) {
      tokenCode = omnibus_lexique_1__7C__3D_
    }else if scanningOk && self.testForInputString ("^=", advance: true) {
      tokenCode = omnibus_lexique_1__5E__3D_
    }else if scanningOk && self.testForInputString ("]!", advance: true) {
      tokenCode = omnibus_lexique_1__5D__21_
    }else if scanningOk && self.testForInputString (">>", advance: true) {
      tokenCode = omnibus_lexique_1__3E__3E_
    }else if scanningOk && self.testForInputString ("==", advance: true) {
      tokenCode = omnibus_lexique_1__3D__3D_
    }else if scanningOk && self.testForInputString ("<<", advance: true) {
      tokenCode = omnibus_lexique_1__3C__3C_
    }else if scanningOk && self.testForInputString ("/=", advance: true) {
      tokenCode = omnibus_lexique_1__2F__3D_
    }else if scanningOk && self.testForInputString ("->", advance: true) {
      tokenCode = omnibus_lexique_1__2D__3E_
    }else if scanningOk && self.testForInputString ("-=", advance: true) {
      tokenCode = omnibus_lexique_1__2D__3D_
    }else if scanningOk && self.testForInputString ("-%", advance: true) {
      tokenCode = omnibus_lexique_1__2D__25_
    }else if scanningOk && self.testForInputString ("+=", advance: true) {
      tokenCode = omnibus_lexique_1__2B__3D_
    }else if scanningOk && self.testForInputString ("+%", advance: true) {
      tokenCode = omnibus_lexique_1__2B__25_
    }else if scanningOk && self.testForInputString ("*=", advance: true) {
      tokenCode = omnibus_lexique_1__2A__3D_
    }else if scanningOk && self.testForInputString ("*%", advance: true) {
      tokenCode = omnibus_lexique_1__2A__25_
    }else if scanningOk && self.testForInputString ("&=", advance: true) {
      tokenCode = omnibus_lexique_1__26__3D_
    }else if scanningOk && self.testForInputString ("&&", advance: true) {
      tokenCode = omnibus_lexique_1__26__26_
    }else if scanningOk && self.testForInputString ("%=", advance: true) {
      tokenCode = omnibus_lexique_1__25__3D_
    }else if scanningOk && self.testForInputString ("!/", advance: true) {
      tokenCode = omnibus_lexique_1__21__2F_
    }else if scanningOk && self.testForInputString ("!%", advance: true) {
      tokenCode = omnibus_lexique_1__21__25_
    }else if scanningOk && self.testForInputString ("≥", advance: true) {
      tokenCode = omnibus_lexique_1__2265_
    }else if scanningOk && self.testForInputString ("≤", advance: true) {
      tokenCode = omnibus_lexique_1__2264_
    }else if scanningOk && self.testForInputString ("≠", advance: true) {
      tokenCode = omnibus_lexique_1__2260_
    }else if scanningOk && self.testForInputString ("~", advance: true) {
      tokenCode = omnibus_lexique_1__7E_
    }else if scanningOk && self.testForInputString ("}", advance: true) {
      tokenCode = omnibus_lexique_1__7D_
    }else if scanningOk && self.testForInputString ("|", advance: true) {
      tokenCode = omnibus_lexique_1__7C_
    }else if scanningOk && self.testForInputString ("{", advance: true) {
      tokenCode = omnibus_lexique_1__7B_
    }else if scanningOk && self.testForInputString ("_", advance: true) {
      tokenCode = omnibus_lexique_1__5F_
    }else if scanningOk && self.testForInputString ("^", advance: true) {
      tokenCode = omnibus_lexique_1__5E_
    }else if scanningOk && self.testForInputString ("]", advance: true) {
      tokenCode = omnibus_lexique_1__5D_
    }else if scanningOk && self.testForInputString ("[", advance: true) {
      tokenCode = omnibus_lexique_1__5B_
    }else if scanningOk && self.testForInputString (">", advance: true) {
      tokenCode = omnibus_lexique_1__3E_
    }else if scanningOk && self.testForInputString ("=", advance: true) {
      tokenCode = omnibus_lexique_1__3D_
    }else if scanningOk && self.testForInputString ("<", advance: true) {
      tokenCode = omnibus_lexique_1__3C_
    }else if scanningOk && self.testForInputString (":", advance: true) {
      tokenCode = omnibus_lexique_1__3A_
    }else if scanningOk && self.testForInputString ("/", advance: true) {
      tokenCode = omnibus_lexique_1__2F_
    }else if scanningOk && self.testForInputString (".", advance: true) {
      tokenCode = omnibus_lexique_1__2E_
    }else if scanningOk && self.testForInputString ("-", advance: true) {
      tokenCode = omnibus_lexique_1__2D_
    }else if scanningOk && self.testForInputString (",", advance: true) {
      tokenCode = omnibus_lexique_1__2C_
    }else if scanningOk && self.testForInputString ("+", advance: true) {
      tokenCode = omnibus_lexique_1__2B_
    }else if scanningOk && self.testForInputString ("*", advance: true) {
      tokenCode = omnibus_lexique_1__2A_
    }else if scanningOk && self.testForInputString (")", advance: true) {
      tokenCode = omnibus_lexique_1__29_
    }else if scanningOk && self.testForInputString ("(", advance: true) {
      tokenCode = omnibus_lexique_1__28_
    }else if scanningOk && self.testForInputString ("&", advance: true) {
      tokenCode = omnibus_lexique_1__26_
    }else if scanningOk && self.testForInputString ("%", advance: true) {
      tokenCode = omnibus_lexique_1__25_
    }else if scanningOk && (self.testForInputChar (63)) {
      let locationForTag_onlyInterrogationMark = self.savedScanningPoint ()
      if scanningOk && (self.testForInputChar (33)) {
        let locationForTag_onlyExclamationInterrogationMark = self.savedScanningPoint ()
        if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputFromChar (48, toChar:57)) {
          while (loop && scanningOk) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
            if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
            }else{
              loop = false
            }
          }
          loop = true
          if scanningOk && (self.testForInputChar (58)) {
            tokenCode = omnibus_lexique_1__3F__21_selector_3A_
          }else{
            scanner_cocoa_routine_resetString (&scanningOk, &self.mLexicalAttribute_tokenString)
            self.restoreScanningPoint (locationForTag_onlyExclamationInterrogationMark)
            tokenCode = omnibus_lexique_1__3F__21_selector_3A_
          }
        }else{
          tokenCode = omnibus_lexique_1__3F__21_selector_3A_
        }
      }else if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputFromChar (48, toChar:57)) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
          }else{
            loop = false
          }
        }
        loop = true
        if scanningOk && (self.testForInputChar (58)) {
          tokenCode = omnibus_lexique_1__3F_selector_3A_
        }else{
          scanner_cocoa_routine_resetString (&scanningOk, &self.mLexicalAttribute_tokenString)
          self.restoreScanningPoint (locationForTag_onlyInterrogationMark)
          tokenCode = omnibus_lexique_1__3F_selector_3A_
        }
      }else{
        tokenCode = omnibus_lexique_1__3F_selector_3A_
      }
    }else if scanningOk && (self.testForInputChar (33)) {
      let locationForTag_onlyExclamationMark = self.savedScanningPoint ()
      if scanningOk && (self.testForInputChar (63)) {
        let locationForTag_onlyInterrogationExclamationMark = self.savedScanningPoint ()
        if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputFromChar (48, toChar:57)) {
          while (loop && scanningOk) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
            if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
            }else{
              loop = false
            }
          }
          loop = true
          if scanningOk && (self.testForInputChar (58)) {
            tokenCode = omnibus_lexique_1__21__3F_selector_3A_
          }else{
            scanner_cocoa_routine_resetString (&scanningOk, &self.mLexicalAttribute_tokenString)
            self.restoreScanningPoint (locationForTag_onlyInterrogationExclamationMark)
            tokenCode = omnibus_lexique_1__21__3F_selector_3A_
          }
        }else{
          tokenCode = omnibus_lexique_1__21__3F_selector_3A_
        }
      }else if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputFromChar (48, toChar:57)) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
          }else{
            loop = false
          }
        }
        loop = true
        if scanningOk && (self.testForInputChar (58)) {
          tokenCode = omnibus_lexique_1__21_selector_3A_
        }else{
          scanner_cocoa_routine_resetString (&scanningOk, &self.mLexicalAttribute_tokenString)
          self.restoreScanningPoint (locationForTag_onlyExclamationMark)
          tokenCode = omnibus_lexique_1__21_selector_3A_
        }
      }else{
        tokenCode = omnibus_lexique_1__21_selector_3A_
      }
    }else if scanningOk && (self.testForInputChar (36)) {
      if scanningOk && (self.testForCharWithFunction (isUnicodeLetter)) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForCharWithFunction (isUnicodeLetter) || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
          }else{
            loop = false
          }
        }
        loop = true
      }else{
        scanningOk = false
      }
      tokenCode = omnibus_lexique_1__24_type
    }else if scanningOk && (self.testForInputChar (169)) {
      if scanningOk && (self.testForCharWithFunction (isUnicodeLetter)) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForCharWithFunction (isUnicodeLetter) || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
          }else{
            loop = false
          }
        }
        loop = true
      }else{
        scanningOk = false
      }
      tokenCode = omnibus_lexique_1__A9_group
    }else if scanningOk && (self.testForInputFromChar (1, toChar:32)) {
    }else if self.testForInputChar (0) { // End of source text ?
      tokenCode = omnibus_lexique_1_ ; // Empty string code
    }else{ // Unknown input character
      tokenCode = omnibus_lexique_2_TEMPLATE
      self.advance ()
    }
    return SWIFT_Token (
      range: NSRange (location: startLocation, length: self.currentLocation - startLocation),
      tokenCode: tokenCode,
      templateDelimiterIndex: self.mEndTemplateDelimiterIndex
    )
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
//             Key words table 'keyWordList'      
//--------------------------------------------------------------------------------------------------

fileprivate let kDictionary_omnibus_5F_lexique_keyWordList : [String : UInt16] = [
  "if" : omnibus_lexique_1_if,
  "in" : omnibus_lexique_1_in,
  "no" : omnibus_lexique_1_no,
  "for" : omnibus_lexique_1_for,
  "let" : omnibus_lexique_1_let,
  "not" : omnibus_lexique_1_not,
  "var" : omnibus_lexique_1_var,
  "yes" : omnibus_lexique_1_yes,
  "boot" : omnibus_lexique_1_boot,
  "case" : omnibus_lexique_1_case,
  "else" : omnibus_lexique_1_else,
  "enum" : omnibus_lexique_1_enum,
  "func" : omnibus_lexique_1_func,
  "llvm" : omnibus_lexique_1_llvm,
  "safe" : omnibus_lexique_1_safe,
  "self" : omnibus_lexique_1_self,
  "sync" : omnibus_lexique_1_sync,
  "task" : omnibus_lexique_1_task,
  "user" : omnibus_lexique_1_user,
  "when" : omnibus_lexique_1_when,
  "event" : omnibus_lexique_1_event,
  "guard" : omnibus_lexique_1_guard,
  "panic" : omnibus_lexique_1_panic,
  "until" : omnibus_lexique_1_until,
  "where" : omnibus_lexique_1_where,
  "while" : omnibus_lexique_1_while,
  "assert" : omnibus_lexique_1_assert,
  "driver" : omnibus_lexique_1_driver,
  "extend" : omnibus_lexique_1_extend,
  "extern" : omnibus_lexique_1_extern,
  "import" : omnibus_lexique_1_import,
  "opaque" : omnibus_lexique_1_opaque,
  "option" : omnibus_lexique_1_option,
  "public" : omnibus_lexique_1_public,
  "sizeof" : omnibus_lexique_1_sizeof,
  "struct" : omnibus_lexique_1_struct,
  "switch" : omnibus_lexique_1_switch,
  "target" : omnibus_lexique_1_target,
  "convert" : omnibus_lexique_1_convert,
  "section" : omnibus_lexique_1_section,
  "service" : omnibus_lexique_1_service,
  "startup" : omnibus_lexique_1_startup,
  "ctAssert" : omnibus_lexique_1_ctAssert,
  "required" : omnibus_lexique_1_required,
  "truncate" : omnibus_lexique_1_truncate,
  "addressof" : omnibus_lexique_1_addressof,
  "interrupt" : omnibus_lexique_1_interrupt,
  "primitive" : omnibus_lexique_1_primitive,
  "registers" : omnibus_lexique_1_registers,
  "typealias" : omnibus_lexique_1_typealias,
  "compiletime" : omnibus_lexique_1_compiletime,
  "staticArray" : omnibus_lexique_1_staticArray
]

fileprivate func search_into_omnibus_5F_lexique_keyWordList (_ inSearchedString : String) -> UInt16 {
  return kDictionary_omnibus_5F_lexique_keyWordList [inSearchedString, default: omnibus_lexique_1_]
}



//--------------------------------------------------------------------------------------------------

func omnibus_lexique_lexiqueIdentifier () -> String {
  return "omnibus_lexique"
}

//--------------------------------------------------------------------------------------------------

func omnibus_lexique_styleNameFor (styleIndex inIndex : UInt8) -> String {
  let kStyleArray : [String] = [
    "Default Style", // 0
    "Keywords", // 1
    "Attributes", // 2
    "Integer Constants", // 3
    "Literal Strings", // 4
    "Comments", // 5
    "Delimiters", // 6
    "Selectors", // 7
    "Types", // 8
    "Control Register Groups", // 9
    "Lexical error", // 10
    "Template" // 11
  ]
  return kStyleArray [Int (inIndex)]
}

//--------------------------------------------------------------------------------------------------

func omnibus_lexique_styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
  let kStyleArray : [String] = [
    "omnibus_lexique", // 0
    "omnibus_lexique-keywordsStyle", // 1
    "omnibus_lexique-attributeStyle", // 2
    "omnibus_lexique-integerStyle", // 3
    "omnibus_lexique-stringStyle", // 4
    "omnibus_lexique-commentStyle", // 5
    "omnibus_lexique-delimitersStyle", // 6
    "omnibus_lexique-selectorStyle", // 7
    "omnibus_lexique-typeStyle", // 8
    "omnibus_lexique-groupStyle", // 9
    "omnibus_lexique.ERROR", // 10
    "omnibus_lexique.TEMPLATE" // 11
  ]
  return kStyleArray [Int (inIndex)]
}

//--------------------------------------------------------------------------------------------------
//                           Template Replacements
//--------------------------------------------------------------------------------------------------



//--------------------------------------------------------------------------------------------------
//                           Template Delimiters
//--------------------------------------------------------------------------------------------------



//--------------------------------------------------------------------------------------------------
//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N
//--------------------------------------------------------------------------------------------------

let omnibus_lexique_1_ : UInt16 = 0
let omnibus_lexique_1_identifier : UInt16 = 1
let omnibus_lexique_1__40_attribute : UInt16 = 2
let omnibus_lexique_1_integer : UInt16 = 3
let omnibus_lexique_1__22_string_22_ : UInt16 = 4
let omnibus_lexique_1_comment : UInt16 = 5
let omnibus_lexique_1_commentMark : UInt16 = 6
let omnibus_lexique_1__3F_selector_3A_ : UInt16 = 7
let omnibus_lexique_1__3F__21_selector_3A_ : UInt16 = 8
let omnibus_lexique_1__21_selector_3A_ : UInt16 = 9
let omnibus_lexique_1__21__3F_selector_3A_ : UInt16 = 10
let omnibus_lexique_1__24_type : UInt16 = 11
let omnibus_lexique_1__A9_group : UInt16 = 12
let omnibus_lexique_1_addressof : UInt16 = 13
let omnibus_lexique_1_assert : UInt16 = 14
let omnibus_lexique_1_boot : UInt16 = 15
let omnibus_lexique_1_case : UInt16 = 16
let omnibus_lexique_1_convert : UInt16 = 17
let omnibus_lexique_1_ctAssert : UInt16 = 18
let omnibus_lexique_1_compiletime : UInt16 = 19
let omnibus_lexique_1_driver : UInt16 = 20
let omnibus_lexique_1_else : UInt16 = 21
let omnibus_lexique_1_enum : UInt16 = 22
let omnibus_lexique_1_event : UInt16 = 23
let omnibus_lexique_1_extend : UInt16 = 24
let omnibus_lexique_1_extern : UInt16 = 25
let omnibus_lexique_1_for : UInt16 = 26
let omnibus_lexique_1_func : UInt16 = 27
let omnibus_lexique_1_guard : UInt16 = 28
let omnibus_lexique_1_if : UInt16 = 29
let omnibus_lexique_1_import : UInt16 = 30
let omnibus_lexique_1_in : UInt16 = 31
let omnibus_lexique_1_interrupt : UInt16 = 32
let omnibus_lexique_1_let : UInt16 = 33
let omnibus_lexique_1_llvm : UInt16 = 34
let omnibus_lexique_1_no : UInt16 = 35
let omnibus_lexique_1_not : UInt16 = 36
let omnibus_lexique_1_opaque : UInt16 = 37
let omnibus_lexique_1_option : UInt16 = 38
let omnibus_lexique_1_panic : UInt16 = 39
let omnibus_lexique_1_primitive : UInt16 = 40
let omnibus_lexique_1_public : UInt16 = 41
let omnibus_lexique_1_registers : UInt16 = 42
let omnibus_lexique_1_required : UInt16 = 43
let omnibus_lexique_1_safe : UInt16 = 44
let omnibus_lexique_1_section : UInt16 = 45
let omnibus_lexique_1_self : UInt16 = 46
let omnibus_lexique_1_service : UInt16 = 47
let omnibus_lexique_1_sizeof : UInt16 = 48
let omnibus_lexique_1_startup : UInt16 = 49
let omnibus_lexique_1_struct : UInt16 = 50
let omnibus_lexique_1_staticArray : UInt16 = 51
let omnibus_lexique_1_switch : UInt16 = 52
let omnibus_lexique_1_sync : UInt16 = 53
let omnibus_lexique_1_target : UInt16 = 54
let omnibus_lexique_1_task : UInt16 = 55
let omnibus_lexique_1_truncate : UInt16 = 56
let omnibus_lexique_1_typealias : UInt16 = 57
let omnibus_lexique_1_var : UInt16 = 58
let omnibus_lexique_1_until : UInt16 = 59
let omnibus_lexique_1_user : UInt16 = 60
let omnibus_lexique_1_where : UInt16 = 61
let omnibus_lexique_1_when : UInt16 = 62
let omnibus_lexique_1_while : UInt16 = 63
let omnibus_lexique_1_yes : UInt16 = 64
let omnibus_lexique_1__3A_ : UInt16 = 65
let omnibus_lexique_1__2E_ : UInt16 = 66
let omnibus_lexique_1__2C_ : UInt16 = 67
let omnibus_lexique_1__7B_ : UInt16 = 68
let omnibus_lexique_1__7D_ : UInt16 = 69
let omnibus_lexique_1__3D_ : UInt16 = 70
let omnibus_lexique_1__28_ : UInt16 = 71
let omnibus_lexique_1__29_ : UInt16 = 72
let omnibus_lexique_1__5F_ : UInt16 = 73
let omnibus_lexique_1__3D__3D_ : UInt16 = 74
let omnibus_lexique_1__2260_ : UInt16 = 75
let omnibus_lexique_1__3C_ : UInt16 = 76
let omnibus_lexique_1__2264_ : UInt16 = 77
let omnibus_lexique_1__3E_ : UInt16 = 78
let omnibus_lexique_1__2265_ : UInt16 = 79
let omnibus_lexique_1__5B_ : UInt16 = 80
let omnibus_lexique_1__5D_ : UInt16 = 81
let omnibus_lexique_1__5D__21_ : UInt16 = 82
let omnibus_lexique_1__3C__3C_ : UInt16 = 83
let omnibus_lexique_1__3E__3E_ : UInt16 = 84
let omnibus_lexique_1__7E_ : UInt16 = 85
let omnibus_lexique_1__7C__7C_ : UInt16 = 86
let omnibus_lexique_1__26__26_ : UInt16 = 87
let omnibus_lexique_1__2D__3E_ : UInt16 = 88
let omnibus_lexique_1__2E__2E__3C_ : UInt16 = 89
let omnibus_lexique_1__2E__2E__2E_ : UInt16 = 90
let omnibus_lexique_1__7C_ : UInt16 = 91
let omnibus_lexique_1__7C__3D_ : UInt16 = 92
let omnibus_lexique_1__26_ : UInt16 = 93
let omnibus_lexique_1__26__3D_ : UInt16 = 94
let omnibus_lexique_1__5E_ : UInt16 = 95
let omnibus_lexique_1__5E__3D_ : UInt16 = 96
let omnibus_lexique_1__2B_ : UInt16 = 97
let omnibus_lexique_1__2B__25_ : UInt16 = 98
let omnibus_lexique_1__2B__3D_ : UInt16 = 99
let omnibus_lexique_1__2B__25__3D_ : UInt16 = 100
let omnibus_lexique_1__2D_ : UInt16 = 101
let omnibus_lexique_1__2D__25_ : UInt16 = 102
let omnibus_lexique_1__2D__3D_ : UInt16 = 103
let omnibus_lexique_1__2D__25__3D_ : UInt16 = 104
let omnibus_lexique_1__2A_ : UInt16 = 105
let omnibus_lexique_1__2A__25_ : UInt16 = 106
let omnibus_lexique_1__2A__3D_ : UInt16 = 107
let omnibus_lexique_1__2A__25__3D_ : UInt16 = 108
let omnibus_lexique_1__2F_ : UInt16 = 109
let omnibus_lexique_1__21__2F_ : UInt16 = 110
let omnibus_lexique_1__2F__3D_ : UInt16 = 111
let omnibus_lexique_1__21__2F__3D_ : UInt16 = 112
let omnibus_lexique_1__25_ : UInt16 = 113
let omnibus_lexique_1__21__25_ : UInt16 = 114
let omnibus_lexique_1__25__3D_ : UInt16 = 115
let omnibus_lexique_1__21__25__3D_ : UInt16 = 116
let omnibus_lexique_1__3C__3C__3D_ : UInt16 = 117
let omnibus_lexique_1__3E__3E__3D_ : UInt16 = 118
let omnibus_lexique_2_ERROR : UInt16 = 119
let omnibus_lexique_2_TEMPLATE : UInt16 = 120

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


