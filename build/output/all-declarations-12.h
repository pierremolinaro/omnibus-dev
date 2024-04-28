#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@semanticContext insertGetter'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertGetter (class GGS_semanticContext & ioObject,
                                   const class GGS_lstring constin_inTypeName,
                                   const class GGS_lstring constin_inGetterName,
                                   const class GGS_propertyVisibility constin_inVisibility,
                                   const class GGS_propertyGetterKind constin_inAccess,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@semanticContext addComputedPropertyGetter'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addComputedPropertyGetter (class GGS_semanticContext & ioObject,
                                                const class GGS_lstring constin_inTypeName,
                                                const class GGS_string constin_inLLVMBaseTypeName,
                                                const class GGS_lstring constin_inPropertyName,
                                                const class GGS_mode constin_inMode,
                                                const class GGS_propertyVisibility constin_inVisibility,
                                                const class GGS_unifiedTypeMapEntry constin_inResultTypeProxy,
                                                class GGS_lstring & out_outRoutineLLVMName,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'getterLLVMName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_getterLLVMName (class GGS_string inArgument0,
                                          const class GGS_string & constinArgument1,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

