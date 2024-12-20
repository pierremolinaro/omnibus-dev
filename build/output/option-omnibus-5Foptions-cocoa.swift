//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//--------------------------------------------------------------------------------------------------

func enterOptions () -> [SWIFT_CommandLineOption] {
  var array = [SWIFT_CommandLineOption] ()
  array.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    type: .bool,
    identifier: "doNotDetectRecursiveCalls",
    commandChar: "r",
    commandString: "do-not-detect-recursive-calls",
    comment: "Do not detect recursive calls"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    type: .bool,
    identifier: "noPanicGeneration",
    commandChar: "",
    commandString: "no-panic-generation",
    comment: "Do not generate panic code"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    type: .bool,
    identifier: "emitControlRegisterHTMLDumpFile",
    commandChar: "",
    commandString: "emit-control-register-map",
    comment: "Emit control register map in an HTML file"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    type: .bool,
    identifier: "emitDeclarationDependencyGraphFile",
    commandChar: "d",
    commandString: "emit-declaration-dependency-graph",
    comment: "Emit declaration dependency graph file"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    type: .bool,
    identifier: "emitGlobalConstantHTMLDumpFile",
    commandChar: "",
    commandString: "emit-global-constant-map",
    comment: "Emit global constant map in an HTML file"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    type: .bool,
    identifier: "emitRoutineInvocationGraphFile",
    commandChar: "i",
    commandString: "emit-routine-invocation-graph",
    comment: "Emit routine invocation graph file"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    type: .bool,
    identifier: "emitTypeMap",
    commandChar: "t",
    commandString: "emit-type-map",
    comment: "Emit type map in an HTML file"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    type: .bool,
    identifier: "taskStrictPriorityOrder",
    commandChar: "",
    commandString: "task-strict-priority-order",
    comment: "Ensure task strict priority order"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    type: .bool,
    identifier: "optimizationZ",
    commandChar: "",
    commandString: "Oz",
    comment: "Like previous option but reduces code size further"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    type: .bool,
    identifier: "optimizationS",
    commandChar: "",
    commandString: "Os",
    comment: "Like previous option with extra optimizations for size"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    type: .bool,
    identifier: "listEmbeddedSampleFiles",
    commandChar: "l",
    commandString: "list-embedded-samples",
    comment: "List embedded sample files"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    type: .bool,
    identifier: "listTargets",
    commandChar: "L",
    commandString: "list-targets",
    comment: "List targets"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    type: .bool,
    identifier: "noDeadCodeElimination",
    commandChar: "",
    commandString: "no-deadcode-elimination",
    comment: "No dead code elimination"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    type: .bool,
    identifier: "optimization1",
    commandChar: "",
    commandString: "O1",
    comment: "Optimization level 1"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    type: .bool,
    identifier: "optimization2",
    commandChar: "",
    commandString: "O2",
    comment: "Optimization level 2"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    type: .bool,
    identifier: "optimizationZ3",
    commandChar: "",
    commandString: "O3",
    comment: "Optimization level 3"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    type: .bool,
    identifier: "printPasses",
    commandChar: "",
    commandString: "print-passes",
    comment: "Print pass information"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    type: .string,
    identifier: "extractEmbeddedSampleFile",
    commandChar: "x",
    commandString: "extract-embedded-sample-code",
    comment: "Extract an embedded sample file"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    type: .string,
    identifier: "extractEmbeddedTargets",
    commandChar: "X",
    commandString: "extract-embedded-targets",
    comment: "Extract embedded targets"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    type: .string,
    identifier: "useDirAsTargetDir",
    commandChar: "T",
    commandString: "use-target-dir",
    comment: "Use directory as target definition directory, instead of using embedded targets"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    type: .stringList,
    identifier: "pathList",
    commandChar: "",
    commandString: "path",
    comment: "Search pathes for source files"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "quiet_output",
    commandChar: "q",
    commandString: "quiet",
    comment: "Quiet output"
  ))
  return array
}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


