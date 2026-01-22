//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import SwiftUI
import UniformTypeIdentifiers

//--------------------------------------------------------------------------------------------------

extension UTType {
  nonisolated static let omnibus = UTType (exportedAs: Bundle.main.bundleIdentifier! + ".omnibus")
  nonisolated static let omnibus_2D_import = UTType (exportedAs: Bundle.main.bundleIdentifier! + ".omnibus-import")
  nonisolated static let omnibus_2D_target = UTType (exportedAs: Bundle.main.bundleIdentifier! + ".omnibus-target")
}

//--------------------------------------------------------------------------------------------------

extension ProjectDocument {
  static let readableContentTypes : [UTType] = [.omnibus, .omnibus_2D_import, .omnibus_2D_target]
}

//--------------------------------------------------------------------------------------------------
//    Project file extensions
//--------------------------------------------------------------------------------------------------

let projectFileExtensions = Set (["omnibus", "omnibus-import", "omnibus-target"])

//--------------------------------------------------------------------------------------------------
//   Scanner for a given extension
//--------------------------------------------------------------------------------------------------

@MainActor func scannerFor (extension inExtension : String) -> AbstractScanner? {
  var result : AbstractScanner? = nil
  let fileExtension = inExtension.lowercased ()
  if fileExtension == "omnibus" {
    result = ScannerFor_omnibus_lexique ()
  }else if fileExtension == "omnibus-import" {
    result = ScannerFor_omnibus_lexique ()
  }else if fileExtension == "omnibus-target" {
    result = ScannerFor_omnibus_lexique ()
  }
  return result
}

//--------------------------------------------------------------------------------------------------
// Setting View
//--------------------------------------------------------------------------------------------------

struct SettingsView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  enum SidebarItem {
    case commandLineOptions
    case omnibus_lexique_0
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @State private var mSelection : SidebarItem = .commandLineOptions

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder var body : some View {
    NavigationSplitView {
      List(selection: self.$mSelection) {
        Text ("Options").tag (SidebarItem.commandLineOptions)

        Text ("Source").tag (SidebarItem.omnibus_lexique_0)
      }
      .toolbar (removing: .sidebarToggle)
    } detail: {
      switch self.mSelection {
        case .commandLineOptions : OptionView ()
        case .omnibus_lexique_0 : SettingViewFor_omnibus_lexique ()
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}


//--------------------------------------------------------------------------------------------------
//   Popup list data for 'omnibus_lexique' lexique
//--------------------------------------------------------------------------------------------------

let gPopUpData_omnibus_lexique : [[UInt16]] = [
  [1, // Leading character count to strip
    omnibus_lexique_1_commentMark, 48
  ]
]

//--------------------------------------------------------------------------------------------------
//   Block Comment for 'omnibus_lexique' lexique
//--------------------------------------------------------------------------------------------------

let gBlockComment_omnibus_lexique : String? = "//"


//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


