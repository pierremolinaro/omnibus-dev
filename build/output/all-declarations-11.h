#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

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

class GGS_string function_getterLLVMName (const class GGS_string & constinArgument0,
                                          const class GGS_string & constinArgument1,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@semanticContext insertPropertySetter'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertPropertySetter (class GGS_semanticContext & ioObject,
                                           const class GGS_lstring constin_inTypeName,
                                           const class GGS_lstring constin_inSetterName,
                                           const class GGS_propertyVisibility constin_inVisibility,
                                           const class GGS_propertySetterKind constin_inAccess,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticContext propertySetterMap' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_propertySetterMap extensionGetter_propertySetterMap (const class GGS_semanticContext & inObject,
                                                               const class GGS_omnibusType & constinArgument0,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@staticEntityMap findOrAddStaticString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_findOrAddStaticString (class GGS_staticEntityMap & ioObject,
                                            const class GGS_string constin_inString,
                                            class GGS_uint & out_outIndex,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticContext booleanType' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_omnibusType extensionGetter_booleanType (const class GGS_semanticContext & inObject,
                                                   const class GGS_location & constinArgument0,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'boolTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_boolTypeName (class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractRoutineIR svcDeclarationGeneration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_svcDeclarationGeneration (class cPtr_abstractRoutineIR * inObject,
                                                   class GGS_primitiveAndServiceIRlist & io_ioPrimitiveAndServiceList,
                                                   class GGS_sectionIRlist & io_ioSectionList,
                                                   class GGS_generationAdds & io_ioGenerationAdds,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractRoutineIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterAccessibleEntities (class cPtr_abstractRoutineIR * inObject,
                                                  class GGS_stringset & io_ioInvokedRoutineSet,
                                                  class GGS_uint & io_ioMaxBranchOfOnInstructions,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

