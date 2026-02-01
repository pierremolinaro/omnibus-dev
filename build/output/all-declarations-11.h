#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

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

