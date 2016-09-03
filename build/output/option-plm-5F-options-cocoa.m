//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//---------------------------------------------------------------------------------------------------------------------*

#import "option-plm-5F-options-cocoa.h"
#import "OC_GGS_CommandLineOption.h"

//---------------------------------------------------------------------------------------------------------------------*

void enterOptionsFor_plm_5F_options (NSMutableArray * ioBoolOptionArray,
                                                       NSMutableArray * ioUIntOptionArray,
                                                       NSMutableArray * ioStringOptionArray,
                                                       NSMutableArray * ioStringListOptionArray) {
  OC_GGS_CommandLineOption * option ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"plm_options"
    identifier:@"doNotDetectRecursiveCalls"
    commandChar:114
    commandString:@"do-not-detect-recursive-calls"
    comment:@"Do not detect recursive calls"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"plm_options"
    identifier:@"listEmbeddedSampleFiles"
    commandChar:108
    commandString:@"list-embedded-samples"
    comment:@"List embedded sample files"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"plm_options"
    identifier:@"listEmbeddedTargets"
    commandChar:76
    commandString:@"list-embedded-targets"
    comment:@"List embedded targets"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"plm_options"
    identifier:@"noPanicGeneration"
    commandChar:0
    commandString:@"no-panic-generation"
    comment:@"Do not generate panic code"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"plm_options"
    identifier:@"optimization1"
    commandChar:0
    commandString:@"O1"
    comment:@"Optimization level 1"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"plm_options"
    identifier:@"optimization2"
    commandChar:0
    commandString:@"O2"
    comment:@"Optimization level 2"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"plm_options"
    identifier:@"optimizationS"
    commandChar:0
    commandString:@"Os"
    comment:@"Like previous option with extra optimizations for size"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"plm_options"
    identifier:@"optimizationZ"
    commandChar:0
    commandString:@"Oz"
    comment:@"Like previous option but reduces code size further"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"plm_options"
    identifier:@"optimizationZ3"
    commandChar:0
    commandString:@"O3"
    comment:@"Optimization level 3"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"plm_options"
    identifier:@"optimization_displayDeadCodeElimination"
    commandChar:122
    commandString:@"display-deadcode-elimination"
    comment:@"Display dead code elimination"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"plm_options"
    identifier:@"performFlashing"
    commandChar:102
    commandString:@"flash-target"
    comment:@"After successful compilation, flash target"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"plm_options"
    identifier:@"writeControlRegisterHTMLDumpFile"
    commandChar:0
    commandString:@"control-register-map"
    comment:@"Write control register map in an HTML file"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"plm_options"
    identifier:@"writeDeclarationDependencyGraphFile"
    commandChar:100
    commandString:@"declaration-dependency-graph"
    comment:@"Write declaration dependency graph file"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"plm_options"
    identifier:@"writeGlobalConstantHTMLDumpFile"
    commandChar:0
    commandString:@"global-constant-map"
    comment:@"Write global constant map in an HTML file"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"plm_options"
    identifier:@"writeRoutineInvocationGraphFile"
    commandChar:105
    commandString:@"routine-invocation-graph"
    comment:@"Write routine invocation graph file"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"plm_options"
    identifier:@"extractEmbeddedSampleFile"
    commandChar:120
    commandString:@"extract-embedded-sample-code"
    comment:@"Extract an embedded sample file"
    defaultValue:@""
  ] ;
  [ioStringOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"plm_options"
    identifier:@"extractEmbeddedTargets"
    commandChar:88
    commandString:@"extract-embedded-targets"
    comment:@"Extract embedded targets"
    defaultValue:@""
  ] ;
  [ioStringOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"plm_options"
    identifier:@"useDirAsTargetDir"
    commandChar:84
    commandString:@"use-target-dir"
    comment:@"Use directory as target definition directory, instead of using embedded targets"
    defaultValue:@""
  ] ;
  [ioStringOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"plm_options"
    identifier:@"pathList"
    commandChar:0
    commandString:@"path"
    comment:@"Search pathes for source files"
    defaultValue:@""
  ] ;
  [ioStringListOptionArray addObject:option] ;
}

//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


