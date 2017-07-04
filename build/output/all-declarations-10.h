#ifndef all_2D_declarations_2D__31__30__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__30__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-9.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'handlePropertyAccessInAssignment'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handlePropertyAccessInAssignment (class GALGAS_objectIR & ioArgument0,
                                               const class GALGAS_lstring constinArgument1,
                                               class GALGAS_semanticTemporariesStruct & ioArgument2,
                                               class GALGAS_instructionListIR & ioArgument3,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'handleSubscriptInAssignmentAndExpression'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSubscriptInAssignmentAndExpression (const class GALGAS_PLMType constinArgument0,
                                                       const class GALGAS_bool constinArgument1,
                                                       const class GALGAS_bool constinArgument2,
                                                       const class GALGAS_lstring constinArgument3,
                                                       const class GALGAS_semanticContext constinArgument4,
                                                       const class GALGAS_mode constinArgument5,
                                                       class GALGAS_semanticTemporariesStruct & ioArgument6,
                                                       class GALGAS_staticStringMap & ioArgument7,
                                                       class GALGAS_unifiedSymbolMapEx & ioArgument8,
                                                       class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument9,
                                                       class GALGAS_allocaList & ioArgument10,
                                                       const class GALGAS_expressionAST constinArgument11,
                                                       const class GALGAS_location constinArgument12,
                                                       class GALGAS_instructionListIR & ioArgument13,
                                                       class GALGAS_objectIR & ioArgument14,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'handleSelfAccessInAssignment'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSelfAccessInAssignment (const class GALGAS_PLMType constinArgument0,
                                           const class GALGAS_objectIR constinArgument1,
                                           class GALGAS_semanticTemporariesStruct & ioArgument2,
                                           class GALGAS_instructionListIR & ioArgument3,
                                           class GALGAS_objectIR & outArgument4,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Routine 'handleSubscriptArrayInAssignmentAndExpression'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSubscriptArrayInAssignmentAndExpression (const class GALGAS_PLMType constinArgument0,
                                                            const class GALGAS_bool constinArgument1,
                                                            const class GALGAS_bool constinArgument2,
                                                            const class GALGAS_lstring constinArgument3,
                                                            const class GALGAS_semanticContext constinArgument4,
                                                            const class GALGAS_mode constinArgument5,
                                                            class GALGAS_semanticTemporariesStruct & ioArgument6,
                                                            class GALGAS_staticStringMap & ioArgument7,
                                                            class GALGAS_unifiedSymbolMapEx & ioArgument8,
                                                            class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument9,
                                                            class GALGAS_allocaList & ioArgument10,
                                                            const class GALGAS_expressionAST constinArgument11,
                                                            const class GALGAS_location constinArgument12,
                                                            class GALGAS_instructionListIR & ioArgument13,
                                                            class GALGAS_objectIR & ioArgument14,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Routine 'handleSubscriptRegisterArrayInAssignmentAndExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSubscriptRegisterArrayInAssignmentAndExpression (const class GALGAS_PLMType constinArgument0,
                                                                    const class GALGAS_bool constinArgument1,
                                                                    const class GALGAS_bool constinArgument2,
                                                                    const class GALGAS_lstring constinArgument3,
                                                                    const class GALGAS_semanticContext constinArgument4,
                                                                    const class GALGAS_mode constinArgument5,
                                                                    class GALGAS_semanticTemporariesStruct & ioArgument6,
                                                                    class GALGAS_staticStringMap & ioArgument7,
                                                                    class GALGAS_unifiedSymbolMapEx & ioArgument8,
                                                                    class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument9,
                                                                    class GALGAS_allocaList & ioArgument10,
                                                                    const class GALGAS_expressionAST constinArgument11,
                                                                    const class GALGAS_location constinArgument12,
                                                                    class GALGAS_instructionListIR & ioArgument13,
                                                                    class GALGAS_objectIR & ioArgument14,
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

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

void routine_buildSemanticContext (const class GALGAS_declarationListAST constinArgument0,
                                   const class GALGAS_lstring constinArgument1,
                                   const class GALGAS_ast constinArgument2,
                                   class GALGAS_staticStringMap & ioArgument3,
                                   class GALGAS_staticlistValues_5F_listMap & ioArgument4,
                                   class GALGAS_semanticContext & outArgument5,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'llvmNameForStaticListType'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForStaticListType (const class GALGAS_string & constinArgument0,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'plmNameForStaticListType'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_plmNameForStaticListType (const class GALGAS_lstring & constinArgument0,
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
//                                               Routine 'solveEntities'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_solveEntities (const class GALGAS_ast constinArgument0,
                            const class GALGAS_semanticContext constinArgument1,
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
                               const class GALGAS_location constinArgument3,
                               const class GALGAS_staticStringMap constinArgument4,
                               class GALGAS_intermediateCodeStruct & outArgument5,
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
                             const class GALGAS_staticlistValues_5F_listMap constinArgument9,
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
                                const class GALGAS_staticlistValues_5F_listMap constinArgument9,
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

#endif
