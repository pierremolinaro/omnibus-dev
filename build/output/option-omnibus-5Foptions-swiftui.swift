//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

fileprivate let SELECTED_COMPILER_TOOL_INDEX_PREFKEY = "selected.compiler.tool.index"
fileprivate let doNotDetectRecursiveCalls_PREFKEY = "omnibus_options:doNotDetectRecursiveCalls"
fileprivate let noPanicGeneration_PREFKEY = "omnibus_options:noPanicGeneration"
fileprivate let emitControlRegisterHTMLDumpFile_PREFKEY = "omnibus_options:emitControlRegisterHTMLDumpFile"
fileprivate let emitDeclarationDependencyGraphFile_PREFKEY = "omnibus_options:emitDeclarationDependencyGraphFile"
fileprivate let emitGlobalConstantHTMLDumpFile_PREFKEY = "omnibus_options:emitGlobalConstantHTMLDumpFile"
fileprivate let emitRoutineInvocationGraphFile_PREFKEY = "omnibus_options:emitRoutineInvocationGraphFile"
fileprivate let emitTypeMap_PREFKEY = "omnibus_options:emitTypeMap"
fileprivate let taskStrictPriorityOrder_PREFKEY = "omnibus_options:taskStrictPriorityOrder"
fileprivate let optimizationZ_PREFKEY = "omnibus_options:optimizationZ"
fileprivate let optimizationS_PREFKEY = "omnibus_options:optimizationS"
fileprivate let listEmbeddedSampleFiles_PREFKEY = "omnibus_options:listEmbeddedSampleFiles"
fileprivate let listTargets_PREFKEY = "omnibus_options:listTargets"
fileprivate let noDeadCodeElimination_PREFKEY = "omnibus_options:noDeadCodeElimination"
fileprivate let optimization1_PREFKEY = "omnibus_options:optimization1"
fileprivate let optimization2_PREFKEY = "omnibus_options:optimization2"
fileprivate let optimizationZ3_PREFKEY = "omnibus_options:optimizationZ3"
fileprivate let printPasses_PREFKEY = "omnibus_options:printPasses"
fileprivate let extractEmbeddedSampleFile_PREFKEY = "omnibus_options:extractEmbeddedSampleFile"
fileprivate let extractEmbeddedTargets_PREFKEY = "omnibus_options:extractEmbeddedTargets"
fileprivate let useDirAsTargetDir_PREFKEY = "omnibus_options:useDirAsTargetDir"
fileprivate let pathList_PREFKEY = "omnibus_options:pathList"

//--------------------------------------------------------------------------------------------------
//   Options View
//--------------------------------------------------------------------------------------------------

struct OptionView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mCompilerTools : [CompilerTool] = compilerTools ()
  @AppStorage(SELECTED_COMPILER_TOOL_INDEX_PREFKEY) private var mSelectedCompilerIndex = 0
  @State private var mCommandLine = compilerCommandExplained ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Bool options
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @AppStorage(doNotDetectRecursiveCalls_PREFKEY) private var doNotDetectRecursiveCalls : Bool = false
  @AppStorage(noPanicGeneration_PREFKEY) private var noPanicGeneration : Bool = false
  @AppStorage(emitControlRegisterHTMLDumpFile_PREFKEY) private var emitControlRegisterHTMLDumpFile : Bool = false
  @AppStorage(emitDeclarationDependencyGraphFile_PREFKEY) private var emitDeclarationDependencyGraphFile : Bool = false
  @AppStorage(emitGlobalConstantHTMLDumpFile_PREFKEY) private var emitGlobalConstantHTMLDumpFile : Bool = false
  @AppStorage(emitRoutineInvocationGraphFile_PREFKEY) private var emitRoutineInvocationGraphFile : Bool = false
  @AppStorage(emitTypeMap_PREFKEY) private var emitTypeMap : Bool = false
  @AppStorage(taskStrictPriorityOrder_PREFKEY) private var taskStrictPriorityOrder : Bool = false
  @AppStorage(optimizationZ_PREFKEY) private var optimizationZ : Bool = false
  @AppStorage(optimizationS_PREFKEY) private var optimizationS : Bool = false
  @AppStorage(listEmbeddedSampleFiles_PREFKEY) private var listEmbeddedSampleFiles : Bool = false
  @AppStorage(listTargets_PREFKEY) private var listTargets : Bool = false
  @AppStorage(noDeadCodeElimination_PREFKEY) private var noDeadCodeElimination : Bool = false
  @AppStorage(optimization1_PREFKEY) private var optimization1 : Bool = false
  @AppStorage(optimization2_PREFKEY) private var optimization2 : Bool = false
  @AppStorage(optimizationZ3_PREFKEY) private var optimizationZ3 : Bool = false
  @AppStorage(printPasses_PREFKEY) private var printPasses : Bool = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // UInt options
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // String options
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @AppStorage(extractEmbeddedSampleFile_PREFKEY) private var extractEmbeddedSampleFile : String = ""
  @AppStorage(extractEmbeddedTargets_PREFKEY) private var extractEmbeddedTargets : String = ""
  @AppStorage(useDirAsTargetDir_PREFKEY) private var useDirAsTargetDir : String = ""

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // String list options
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @AppStorage(pathList_PREFKEY) private var pathList : [String] = ""

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Body
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder var body : some View {
    VStack {
      HStack {
        Picker("Compiler", selection: self.$mSelectedCompilerIndex) {
          ForEach (self.mCompilerTools, id: \.id) { tool in
            Text (tool.url.lastPathComponent).tag (tool.id)
          }
        }.pickerStyle (.automatic)
        Spacer ()
      }
      ScrollView {
        VStack (alignment: .leading) {
          Toggle ("Do not detect recursive calls", isOn: self.$doNotDetectRecursiveCalls)
          Toggle ("Do not generate panic code", isOn: self.$noPanicGeneration)
          Toggle ("Emit control register map in an HTML file", isOn: self.$emitControlRegisterHTMLDumpFile)
          Toggle ("Emit declaration dependency graph file", isOn: self.$emitDeclarationDependencyGraphFile)
          Toggle ("Emit global constant map in an HTML file", isOn: self.$emitGlobalConstantHTMLDumpFile)
          Toggle ("Emit routine invocation graph file", isOn: self.$emitRoutineInvocationGraphFile)
          Toggle ("Emit type map in an HTML file", isOn: self.$emitTypeMap)
          Toggle ("Ensure task strict priority order", isOn: self.$taskStrictPriorityOrder)
          Toggle ("Like previous option but reduces code size further", isOn: self.$optimizationZ)
          Toggle ("Like previous option with extra optimizations for size", isOn: self.$optimizationS)
          Toggle ("List embedded sample files", isOn: self.$listEmbeddedSampleFiles)
          Toggle ("List targets", isOn: self.$listTargets)
          Toggle ("No dead code elimination", isOn: self.$noDeadCodeElimination)
          Toggle ("Optimization level 1", isOn: self.$optimization1)
          Toggle ("Optimization level 2", isOn: self.$optimization2)
          Toggle ("Optimization level 3", isOn: self.$optimizationZ3)
          Toggle ("Print pass information", isOn: self.$printPasses)
          HStack { Text ("Extract an embedded sample file") ; TextField ("", text: self.$extractEmbeddedSampleFile) }
          HStack { Text ("Extract embedded targets") ; TextField ("", text: self.$extractEmbeddedTargets) }
          HStack { Text ("Use directory as target definition directory, instead of using embedded targets") ; TextField ("", text: self.$useDirAsTargetDir) }
          HStack { Text ("Search paths for source files") ; TextField ("", text: self.$pathList)
        }.padding ()
      }.background (.white)
      HStack { Text ("Build Command") ; Spacer () }
      TextEditor (text: .constant (self.mCommandLine))
      .font (.system (size: 12).monospaced())
      .frame (height: 64)
    }.padding ()
    .onReceive (NotificationCenter.default.publisher (for: UserDefaults.didChangeNotification)) { _ in
      self.mCommandLine = compilerCommandExplained ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

private func compilerCommandExplained () -> String {
  let command : CommandLineToolInvocation = commandLineToolInvocation ()
  var result = command.tool.lastPathComponent
  for arg in command.arguments {
    result += " " + arg
  }
  return result
}

//--------------------------------------------------------------------------------------------------

struct CommandLineToolInvocation {
  let tool : URL
  let arguments : [String]
}

//--------------------------------------------------------------------------------------------------

func commandLineToolInvocation () -> CommandLineToolInvocation {
  let ud = UserDefaults.standard
  let compilerTools : [CompilerTool] = compilerTools ()
  let selectedCompilerIndex : Int = ud.integer (forKey: SELECTED_COMPILER_TOOL_INDEX_PREFKEY)
  let tool = compilerTools [selectedCompilerIndex].url
  var arguments = [String] ()
  if ud.bool (forKey: doNotDetectRecursiveCalls_PREFKEY) {
    arguments.append ("--do-not-detect-recursive-calls")
  }
  if ud.bool (forKey: noPanicGeneration_PREFKEY) {
    arguments.append ("--no-panic-generation")
  }
  if ud.bool (forKey: emitControlRegisterHTMLDumpFile_PREFKEY) {
    arguments.append ("--emit-control-register-map")
  }
  if ud.bool (forKey: emitDeclarationDependencyGraphFile_PREFKEY) {
    arguments.append ("--emit-declaration-dependency-graph")
  }
  if ud.bool (forKey: emitGlobalConstantHTMLDumpFile_PREFKEY) {
    arguments.append ("--emit-global-constant-map")
  }
  if ud.bool (forKey: emitRoutineInvocationGraphFile_PREFKEY) {
    arguments.append ("--emit-routine-invocation-graph")
  }
  if ud.bool (forKey: emitTypeMap_PREFKEY) {
    arguments.append ("--emit-type-map")
  }
  if ud.bool (forKey: taskStrictPriorityOrder_PREFKEY) {
    arguments.append ("--task-strict-priority-order")
  }
  if ud.bool (forKey: optimizationZ_PREFKEY) {
    arguments.append ("--Oz")
  }
  if ud.bool (forKey: optimizationS_PREFKEY) {
    arguments.append ("--Os")
  }
  if ud.bool (forKey: listEmbeddedSampleFiles_PREFKEY) {
    arguments.append ("--list-embedded-samples")
  }
  if ud.bool (forKey: listTargets_PREFKEY) {
    arguments.append ("--list-targets")
  }
  if ud.bool (forKey: noDeadCodeElimination_PREFKEY) {
    arguments.append ("--no-deadcode-elimination")
  }
  if ud.bool (forKey: optimization1_PREFKEY) {
    arguments.append ("--O1")
  }
  if ud.bool (forKey: optimization2_PREFKEY) {
    arguments.append ("--O2")
  }
  if ud.bool (forKey: optimizationZ3_PREFKEY) {
    arguments.append ("--O3")
  }
  if ud.bool (forKey: printPasses_PREFKEY) {
    arguments.append ("--print-passes")
  }
  do{
    let v : String = ud.string (forKey: extractEmbeddedSampleFile_PREFKEY) ?? ""
    if v != "" {
      arguments.append ("--extract-embedded-sample-code=" + v)
    }
  }
  do{
    let v : String = ud.string (forKey: extractEmbeddedTargets_PREFKEY) ?? ""
    if v != "" {
      arguments.append ("--extract-embedded-targets=" + v)
    }
  }
  do{
    let v : String = ud.string (forKey: useDirAsTargetDir_PREFKEY) ?? ""
    if v != "" {
      arguments.append ("--use-target-dir=" + v)
    }
  }
  do{
    let v : String = ud.string (forKey: pathList_PREFKEY) ?? ""
    if v != "" {
      arguments.append ("--path=" + v)
    }
  }
  return CommandLineToolInvocation (tool: tool, arguments: arguments)
}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


