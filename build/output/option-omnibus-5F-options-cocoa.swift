//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//----------------------------------------------------------------------------------------------------------------------

func enterOptions (_ ioBoolOptionArray : inout [SWIFT_CommandLineOption],
                   _ ioUIntOptionArray : inout [SWIFT_CommandLineOption],
                   _ ioStringOptionArray : inout [SWIFT_CommandLineOption],
                   _ ioStringListOptionArray : inout [SWIFT_CommandLineOption]) {
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    identifier: "doNotDetectRecursiveCalls",
    commandChar: "r",
    commandString: "do-not-detect-recursive-calls",
    comment: "Do not detect recursive calls",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    identifier: "emitControlRegisterHTMLDumpFile",
    commandChar: "",
    commandString: "emit-control-register-map",
    comment: "Emit control register map in an HTML file",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    identifier: "emitDeclarationDependencyGraphFile",
    commandChar: "d",
    commandString: "emit-declaration-dependency-graph",
    comment: "Emit declaration dependency graph file",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    identifier: "emitGlobalConstantHTMLDumpFile",
    commandChar: "",
    commandString: "emit-global-constant-map",
    comment: "Emit global constant map in an HTML file",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    identifier: "emitRoutineInvocationGraphFile",
    commandChar: "i",
    commandString: "emit-routine-invocation-graph",
    comment: "Emit routine invocation graph file",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    identifier: "emitTypeMap",
    commandChar: "t",
    commandString: "emit-type-map",
    comment: "Emit type map in an HTML file",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    identifier: "listEmbeddedSampleFiles",
    commandChar: "l",
    commandString: "list-embedded-samples",
    comment: "List embedded sample files",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    identifier: "listTargets",
    commandChar: "L",
    commandString: "list-targets",
    comment: "List targets",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    identifier: "noDeadCodeElimination",
    commandChar: "",
    commandString: "no-deadcode-elimination",
    comment: "No dead code elimination",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    identifier: "noPanicGeneration",
    commandChar: "",
    commandString: "no-panic-generation",
    comment: "Do not generate panic code",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    identifier: "optimization1",
    commandChar: "",
    commandString: "O1",
    comment: "Optimization level 1",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    identifier: "optimization2",
    commandChar: "",
    commandString: "O2",
    comment: "Optimization level 2",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    identifier: "optimizationS",
    commandChar: "",
    commandString: "Os",
    comment: "Like previous option with extra optimizations for size",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    identifier: "optimizationZ",
    commandChar: "",
    commandString: "Oz",
    comment: "Like previous option but reduces code size further",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    identifier: "optimizationZ3",
    commandChar: "",
    commandString: "O3",
    comment: "Optimization level 3",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    identifier: "printPasses",
    commandChar: "",
    commandString: "print-passes",
    comment: "Print pass information",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    identifier: "taskStrictPriorityOrder",
    commandChar: "",
    commandString: "task-strict-priority-order",
    comment: "Ensure task strict priority order",
    defaultValue: ""
  ))
  ioStringOptionArray.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    identifier: "extractEmbeddedSampleFile",
    commandChar: "x",
    commandString: "extract-embedded-sample-code",
    comment: "Extract an embedded sample file",
    defaultValue: ""
  ))
  ioStringOptionArray.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    identifier: "extractEmbeddedTargets",
    commandChar: "X",
    commandString: "extract-embedded-targets",
    comment: "Extract embedded targets",
    defaultValue: ""
  ))
  ioStringOptionArray.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    identifier: "useDirAsTargetDir",
    commandChar: "T",
    commandString: "use-target-dir",
    comment: "Use directory as target definition directory, instead of using embedded targets",
    defaultValue: ""
  ))
  ioStringListOptionArray.append (SWIFT_CommandLineOption (
    domainName: "omnibus_options",
    identifier: "pathList",
    commandChar: "",
    commandString: "path",
    comment: "Search pathes for source files",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "quiet_output",
    commandChar: "q",
    commandString: "quiet",
    comment: "Quiet output",
    defaultValue: ""
  ))
}

//----------------------------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


