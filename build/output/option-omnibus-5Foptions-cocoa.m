//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------

#import "option-omnibus-5Foptions-cocoa.h"
#import "OC_GGS_CommandLineOption.h"

//--------------------------------------------------------------------------------------------------

void enterOptionsFor_omnibus_5F_options (NSMutableArray * ioBoolOptionArray,
                                         NSMutableArray * ioUIntOptionArray,
                                         NSMutableArray * ioStringOptionArray,
                                         NSMutableArray * ioStringListOptionArray) {
  OC_GGS_CommandLineOption * option ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"omnibus_options"
    identifier:@"doNotDetectRecursiveCalls"
    commandChar:114
    commandString:@"do-not-detect-recursive-calls"
    comment:@"Do not detect recursive calls"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"omnibus_options"
    identifier:@"emitControlRegisterHTMLDumpFile"
    commandChar:0
    commandString:@"emit-control-register-map"
    comment:@"Emit control register map in an HTML file"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"omnibus_options"
    identifier:@"emitDeclarationDependencyGraphFile"
    commandChar:100
    commandString:@"emit-declaration-dependency-graph"
    comment:@"Emit declaration dependency graph file"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"omnibus_options"
    identifier:@"emitGlobalConstantHTMLDumpFile"
    commandChar:0
    commandString:@"emit-global-constant-map"
    comment:@"Emit global constant map in an HTML file"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"omnibus_options"
    identifier:@"emitRoutineInvocationGraphFile"
    commandChar:105
    commandString:@"emit-routine-invocation-graph"
    comment:@"Emit routine invocation graph file"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"omnibus_options"
    identifier:@"emitTypeMap"
    commandChar:116
    commandString:@"emit-type-map"
    comment:@"Emit type map in an HTML file"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"omnibus_options"
    identifier:@"listEmbeddedSampleFiles"
    commandChar:108
    commandString:@"list-embedded-samples"
    comment:@"List embedded sample files"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"omnibus_options"
    identifier:@"listTargets"
    commandChar:76
    commandString:@"list-targets"
    comment:@"List targets"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"omnibus_options"
    identifier:@"noDeadCodeElimination"
    commandChar:0
    commandString:@"no-deadcode-elimination"
    comment:@"No dead code elimination"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"omnibus_options"
    identifier:@"noPanicGeneration"
    commandChar:0
    commandString:@"no-panic-generation"
    comment:@"Do not generate panic code"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"omnibus_options"
    identifier:@"optimization1"
    commandChar:0
    commandString:@"O1"
    comment:@"Optimization level 1"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"omnibus_options"
    identifier:@"optimization2"
    commandChar:0
    commandString:@"O2"
    comment:@"Optimization level 2"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"omnibus_options"
    identifier:@"optimizationS"
    commandChar:0
    commandString:@"Os"
    comment:@"Like previous option with extra optimizations for size"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"omnibus_options"
    identifier:@"optimizationZ"
    commandChar:0
    commandString:@"Oz"
    comment:@"Like previous option but reduces code size further"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"omnibus_options"
    identifier:@"optimizationZ3"
    commandChar:0
    commandString:@"O3"
    comment:@"Optimization level 3"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"omnibus_options"
    identifier:@"printPasses"
    commandChar:0
    commandString:@"print-passes"
    comment:@"Print pass information"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"omnibus_options"
    identifier:@"taskStrictPriorityOrder"
    commandChar:0
    commandString:@"task-strict-priority-order"
    comment:@"Ensure task strict priority order"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"omnibus_options"
    identifier:@"extractEmbeddedSampleFile"
    commandChar:120
    commandString:@"extract-embedded-sample-code"
    comment:@"Extract an embedded sample file"
    defaultValue:@""
  ] ;
  [ioStringOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"omnibus_options"
    identifier:@"extractEmbeddedTargets"
    commandChar:88
    commandString:@"extract-embedded-targets"
    comment:@"Extract embedded targets"
    defaultValue:@""
  ] ;
  [ioStringOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"omnibus_options"
    identifier:@"useDirAsTargetDir"
    commandChar:84
    commandString:@"use-target-dir"
    comment:@"Use directory as target definition directory, instead of using embedded targets"
    defaultValue:@""
  ] ;
  [ioStringOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"omnibus_options"
    identifier:@"pathList"
    commandChar:0
    commandString:@"path"
    comment:@"Search pathes for source files"
    defaultValue:@""
  ] ;
  [ioStringListOptionArray addObject:option] ;
}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


