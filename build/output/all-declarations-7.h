#ifndef all_2D_declarations_2D__37__ENTITIES_DEFINED
#define all_2D_declarations_2D__37__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-6.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'checkMode'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_calleeKindIR function_checkMode (const class GALGAS_mode & constinArgument0,
                                              const class GALGAS_mode & constinArgument1,
                                              const class GALGAS_routineKind & constinArgument2,
                                              const class GALGAS_location & constinArgument3,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Function 'panicModeName'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_panicModeName (class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'generateSectionAndSafeDispatcher'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateSectionAndSafeDispatcher (const class GALGAS_string constinArgument0,
                                               const class GALGAS_string constinArgument1,
                                               class GALGAS_string & ioArgument2,
                                               const class GALGAS__32_stringlist constinArgument3,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'getTargetTextFile'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_getTargetTextFile (const class GALGAS_string & constinArgument0,
                                                const class GALGAS_string & constinArgument1,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'generatePrimitiveAndServiceDispatcher'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generatePrimitiveAndServiceDispatcher (const class GALGAS_string constinArgument0,
                                                    const class GALGAS_string constinArgument1,
                                                    class GALGAS_string & ioArgument2,
                                                    const class GALGAS__32_stringlist constinArgument3,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'initNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_initNameForInvocationGraph (const class GALGAS_unifiedTypeMap_2D_proxy & constinArgument0,
                                                          const class GALGAS_lbigint & constinArgument1,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'checkRequiredProcedures'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkRequiredProcedures (const class GALGAS_ast constinArgument0,
                                      const class GALGAS_semanticContext constinArgument1,
                                      const class GALGAS_location constinArgument2,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'panicCodeForConvertOverflow'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForConvertOverflow (class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'getInfixOperatorMap'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_infixOperatorMap function_getInfixOperatorMap (const class GALGAS_infixOperator & constinArgument0,
                                                            const class GALGAS_semanticContext & constinArgument1,
                                                            const class GALGAS_mode & constinArgument2,
                                                            const class GALGAS_location & constinArgument3,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'handleFunctionCallInExpression'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleFunctionCallInExpression (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                             const class GALGAS_string constinArgument1,
                                             const class GALGAS_bool constinArgument2,
                                             const class GALGAS_bool constinArgument3,
                                             const class GALGAS_bool constinArgument4,
                                             const class GALGAS_lstring constinArgument5,
                                             const class GALGAS_semanticContext constinArgument6,
                                             const class GALGAS_mode constinArgument7,
                                             class GALGAS_semanticTemporariesStruct & ioArgument8,
                                             class GALGAS_staticStringMap & ioArgument9,
                                             class GALGAS_variableMap & ioArgument10,
                                             class GALGAS_allocaList & ioArgument11,
                                             const class GALGAS_effectiveParameterListAST constinArgument12,
                                             const class GALGAS_location constinArgument13,
                                             class GALGAS_instructionListIR & ioArgument14,
                                             class GALGAS_objectIR & ioArgument15,
                                             class GALGAS_unifiedTypeMap_2D_proxy & outArgument16,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'handlePropertyInExpression'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handlePropertyInExpression (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                         const class GALGAS_bool constinArgument1,
                                         const class GALGAS_bool constinArgument2,
                                         const class GALGAS_lstring constinArgument3,
                                         const class GALGAS_semanticContext constinArgument4,
                                         const class GALGAS_mode constinArgument5,
                                         class GALGAS_semanticTemporariesStruct & ioArgument6,
                                         class GALGAS_staticStringMap & ioArgument7,
                                         class GALGAS_variableMap & ioArgument8,
                                         class GALGAS_allocaList & ioArgument9,
                                         const class GALGAS_lstring constinArgument10,
                                         class GALGAS_instructionListIR & ioArgument11,
                                         class GALGAS_objectIR & ioArgument12,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'handleSelfAccessInExpression'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSelfAccessInExpression (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                           const class GALGAS_objectIR constinArgument1,
                                           class GALGAS_semanticTemporariesStruct & ioArgument2,
                                           class GALGAS_instructionListIR & ioArgument3,
                                           class GALGAS_objectIR & outArgument4,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'handlePropertyAccessInExpression'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handlePropertyAccessInExpression (class GALGAS_objectIR & ioArgument0,
                                               const class GALGAS_location constinArgument1,
                                               const class GALGAS_objectIR constinArgument2,
                                               class GALGAS_semanticTemporariesStruct & ioArgument3,
                                               class GALGAS_instructionListIR & ioArgument4,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'analyzeEffectiveParameters'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeEffectiveParameters (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                         const class GALGAS_bool constinArgument1,
                                         const class GALGAS_bool constinArgument2,
                                         const class GALGAS_procedureSignature constinArgument3,
                                         const class GALGAS_effectiveParameterListAST constinArgument4,
                                         const class GALGAS_location constinArgument5,
                                         const class GALGAS_lstring constinArgument6,
                                         const class GALGAS_semanticContext constinArgument7,
                                         const class GALGAS_mode constinArgument8,
                                         class GALGAS_semanticTemporariesStruct & ioArgument9,
                                         class GALGAS_staticStringMap & ioArgument10,
                                         class GALGAS_variableMap & ioArgument11,
                                         class GALGAS_allocaList & ioArgument12,
                                         class GALGAS_instructionListIR & ioArgument13,
                                         class GALGAS_procCallEffectiveParameterListIR & ioArgument14,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'analyzeGuardCall'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeGuardCall (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                               const class GALGAS_lstring constinArgument1,
                               const class GALGAS_lstring constinArgument2,
                               const class GALGAS_effectiveParameterListAST constinArgument3,
                               const class GALGAS_lstring constinArgument4,
                               const class GALGAS_semanticContext constinArgument5,
                               const class GALGAS_mode constinArgument6,
                               class GALGAS_semanticTemporariesStruct & ioArgument7,
                               class GALGAS_staticStringMap & ioArgument8,
                               class GALGAS_variableMap & ioArgument9,
                               class GALGAS_allocaList & ioArgument10,
                               class GALGAS_instructionListIR & ioArgument11,
                               class GALGAS_procCallEffectiveParameterListIR & outArgument12,
                               class GALGAS_lstring & outArgument13,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'panicCodeForClosedSync'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForClosedSync (class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Function 'waitForGuardChangeFunctionName'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_waitForGuardChangeFunctionName (class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Routine 'handleSubscriptArrayInAssignmentAndExpression'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSubscriptArrayInAssignmentAndExpression (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                            const class GALGAS_bool constinArgument1,
                                                            const class GALGAS_bool constinArgument2,
                                                            const class GALGAS_lstring constinArgument3,
                                                            const class GALGAS_semanticContext constinArgument4,
                                                            const class GALGAS_mode constinArgument5,
                                                            class GALGAS_semanticTemporariesStruct & ioArgument6,
                                                            class GALGAS_staticStringMap & ioArgument7,
                                                            class GALGAS_variableMap & ioArgument8,
                                                            class GALGAS_allocaList & ioArgument9,
                                                            const class GALGAS_expressionAST constinArgument10,
                                                            const class GALGAS_location constinArgument11,
                                                            class GALGAS_instructionListIR & ioArgument12,
                                                            class GALGAS_objectIR & ioArgument13,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Routine 'handleSubscriptRegisterArrayInAssignmentAndExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSubscriptRegisterArrayInAssignmentAndExpression (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                    const class GALGAS_bool constinArgument1,
                                                                    const class GALGAS_bool constinArgument2,
                                                                    const class GALGAS_lstring constinArgument3,
                                                                    const class GALGAS_semanticContext constinArgument4,
                                                                    const class GALGAS_mode constinArgument5,
                                                                    class GALGAS_semanticTemporariesStruct & ioArgument6,
                                                                    class GALGAS_staticStringMap & ioArgument7,
                                                                    class GALGAS_variableMap & ioArgument8,
                                                                    class GALGAS_allocaList & ioArgument9,
                                                                    const class GALGAS_expressionAST constinArgument10,
                                                                    const class GALGAS_location constinArgument11,
                                                                    class GALGAS_instructionListIR & ioArgument12,
                                                                    class GALGAS_objectIR & ioArgument13,
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

#endif
