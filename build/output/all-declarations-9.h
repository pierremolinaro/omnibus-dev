#pragma once

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-8.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'buildOrderedDeclarationList'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildOrderedDeclarationList (const class GALGAS_ast constinArgument0,
                                          const class GALGAS_string constinArgument1,
                                          const class GALGAS_location constinArgument2,
                                          class GALGAS_declarationListAST & outArgument3,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'buildSemanticContext'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildSemanticContext (const class GALGAS_lstring constinArgument0,
                                   const class GALGAS_ast constinArgument1,
                                   class GALGAS_staticStringMap & ioArgument2,
                                   class GALGAS_staticListInitializationMap & ioArgument3,
                                   class GALGAS_semanticContext & outArgument4,
                                   class GALGAS_subprogramInvocationGraph & outArgument5,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'buildTypeMapHTMLFile'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildTypeMapHTMLFile (class GALGAS_unifiedTypeMap inArgument0,
                                   const class GALGAS_lstring constinArgument1,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Filewrapper 'typeDumpGenerationTemplate'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_typeDumpGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Filewrapper template 'typeDumpGenerationTemplate dump'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeDumpGenerationTemplate_dump (class C_Compiler * inCompiler,
                                                                   const class GALGAS_string & in_PROJECT_5F_NAME,
                                                                   const class GALGAS_unifiedTypeMap & in_GLOBAL_5F_TYPE_5F_MAP,
                                                                   const class GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                   const class GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'linkForHTMLTypeMap'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_linkForHTMLTypeMap (const class GALGAS_string & constinArgument0,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'semanticAnalysis'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysis (const class GALGAS_string constinArgument0,
                               const class GALGAS_ast constinArgument1,
                               const class GALGAS_semanticContext constinArgument2,
                               class GALGAS_subprogramInvocationGraph inArgument3,
                               const class GALGAS_location constinArgument4,
                               const class GALGAS_staticStringMap constinArgument5,
                               class GALGAS_intermediateCodeStruct & outArgument6,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'llvmNameForPrimitiveCall'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForPrimitiveCall (const class GALGAS_string & constinArgument0,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'llvmNameForSafeCall'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForSafeCall (const class GALGAS_string & constinArgument0,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'llvmNameForSectionCall'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForSectionCall (const class GALGAS_string & constinArgument0,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'codeOptimisation'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_codeOptimisation (class GALGAS_intermediateCodeStruct & ioArgument0,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'suppressInaccessibleSubprograms'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_suppressInaccessibleSubprograms (class GALGAS_intermediateCodeStruct & ioArgument0,
                                              class GALGAS_accessibleEntities & outArgument1,
                                              class GALGAS_bool & ioArgument2,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'exploreGuards'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_exploreGuards (class GALGAS_guardMapIR & ioArgument0,
                            class GALGAS_accessibleEntities & ioArgument1,
                            class GALGAS_guardMapIR & ioArgument2,
                            class GALGAS_bool & ioArgument3,
                            class GALGAS_uint & ioArgument4,
                            class C_Compiler * inCompiler
                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'exploreProcs'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_exploreProcs (class GALGAS_routineMapIR & ioArgument0,
                           class GALGAS_accessibleEntities & ioArgument1,
                           class GALGAS_routineMapIR & ioArgument2,
                           class GALGAS_bool & ioArgument3,
                           class GALGAS_uint & ioArgument4,
                           class C_Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'asSeparatorLine'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_asSeparatorLine (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Function 'asTitleComment'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_asTitleComment (const class GALGAS_string & constinArgument0,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'codeGeneration'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_codeGeneration (const class GALGAS_string constinArgument0,
                             const class GALGAS_string constinArgument1,
                             const class GALGAS_location constinArgument2,
                             const class GALGAS_intermediateCodeStruct constinArgument3,
                             const class GALGAS_unifiedTypeMap constinArgument4,
                             const class GALGAS_lstring constinArgument5,
                             const class GALGAS_unifiedTypeMap_2D_proxy constinArgument6,
                             const class GALGAS_unifiedTypeMap_2D_proxy constinArgument7,
                             const class GALGAS_availableInterruptMap constinArgument8,
                             const class GALGAS_staticListInitializationMap constinArgument9,
                             const class GALGAS_stringset constinArgument10,
                             const class GALGAS_targetParameters constinArgument11,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'generateCodeFiles'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateCodeFiles (const class GALGAS_string constinArgument0,
                                const class GALGAS_string constinArgument1,
                                const class GALGAS_location constinArgument2,
                                const class GALGAS_intermediateCodeStruct constinArgument3,
                                const class GALGAS_unifiedTypeMap constinArgument4,
                                const class GALGAS_lstring constinArgument5,
                                const class GALGAS_unifiedTypeMap_2D_proxy constinArgument6,
                                const class GALGAS_unifiedTypeMap_2D_proxy constinArgument7,
                                const class GALGAS_availableInterruptMap constinArgument8,
                                const class GALGAS_staticListInitializationMap constinArgument9,
                                const class GALGAS_stringset constinArgument10,
                                const class GALGAS_targetParameters constinArgument11,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'generateTarget'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateTarget (const class GALGAS_string constinArgument0,
                             const class GALGAS_string constinArgument1,
                             const class GALGAS_lstring constinArgument2,
                             const class GALGAS_targetParameters constinArgument3,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'declareLLVMTypes'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_declareLLVMTypes (const class GALGAS_unifiedTypeMap constinArgument0,
                               class GALGAS_string & ioArgument1,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

