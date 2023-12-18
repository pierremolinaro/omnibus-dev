//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------

#import "option-omnibus-5F-option-5F-not-5F-appearing-5F-in-5F-cocoa-cocoa.h"
#import "OC_GGS_CommandLineOption.h"

//--------------------------------------------------------------------------------------------------

void enterOptionsFor_omnibus_5F_option_5F_not_5F_appearing_5F_in_5F_cocoa (NSMutableArray * ioBoolOptionArray,
                                                                           NSMutableArray * ioUIntOptionArray,
                                                                           NSMutableArray * ioStringOptionArray,
                                                                           NSMutableArray * ioStringListOptionArray) {
  OC_GGS_CommandLineOption * option ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"omnibus_option_not_appearing_in_cocoa"
    identifier:@"performFlashing"
    commandChar:102
    commandString:@"flash-target"
    comment:@"After successful compilation, flash target"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


