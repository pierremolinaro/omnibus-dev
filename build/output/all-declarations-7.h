#ifndef all_2D_declarations_2D__37__ENTITIES_DEFINED
#define all_2D_declarations_2D__37__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-6.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category method '@taskProcListAST-element taskProcedureSemanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_taskProcedureSemanticAnalysis (const class GALGAS_taskProcListAST_2D_element inObject,
                                                   const class GALGAS_string constin_inTaskName,
                                                   const class GALGAS_semanticContext constin_inContext,
                                                   class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                   class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

#endif
