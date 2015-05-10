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
    identifier:@"noExceptionGeneration"
    commandChar:0
    commandString:@"no-exception-generation"
    comment:@"Do not generate exception code"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
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



