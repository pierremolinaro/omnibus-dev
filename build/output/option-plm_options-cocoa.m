//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//---------------------------------------------------------------------------------------------------------------------*

#import "option-plm_options-cocoa.h"
#import "OC_GGS_CommandLineOption.h"

//---------------------------------------------------------------------------------------------------------------------*

void enterOptionsFor_plm_5F_options (NSMutableArray * ioBoolOptionArray,
                                                       NSMutableArray * ioUIntOptionArray,
                                                       NSMutableArray * ioStringOptionArray,
                                                       NSMutableArray * ioStringListOptionArray) {
  OC_GGS_CommandLineOption * option ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"plm_options"
    identifier:@"compileOnly"
    commandChar:99
    commandString:@"no-c-compilation"
    comment:@"Do not compile generated C code"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
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
    identifier:@"noExceptionGeneration"
    commandChar:0
    commandString:@"no-exception-generation"
    comment:@"Do not generate exception code"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"plm_options"
    identifier:@"noFlashing"
    commandChar:102
    commandString:@"no-flash"
    comment:@"Do not flash target"
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



