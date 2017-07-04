#ifndef all_2D_declarations_2D__39__ENTITIES_DEFINED
#define all_2D_declarations_2D__39__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-8.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'analyzeFunctionCallInExpression'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeFunctionCallInExpression (const class GALGAS_PLMType constinArgument0,
                                              const class GALGAS_bool constinArgument1,
                                              const class GALGAS_bool constinArgument2,
                                              const class GALGAS_objectIR constinArgument3,
                                              const class GALGAS_lstring constinArgument4,
                                              const class GALGAS_effectiveArgumentListAST constinArgument5,
                                              const class GALGAS_lstring constinArgument6,
                                              const class GALGAS_semanticContext constinArgument7,
                                              const class GALGAS_mode constinArgument8,
                                              class GALGAS_semanticTemporariesStruct & ioArgument9,
                                              class GALGAS_staticStringMap & ioArgument10,
                                              class GALGAS_unifiedSymbolMapEx & ioArgument11,
                                              class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument12,
                                              class GALGAS_allocaList & ioArgument13,
                                              class GALGAS_instructionListIR & ioArgument14,
                                              class GALGAS_procCallEffectiveParameterListIR & outArgument15,
                                              class GALGAS_calleeKindIR & outArgument16,
                                              class GALGAS_lstring & outArgument17,
                                              class GALGAS_lstring & outArgument18,
                                              class GALGAS_PLMType & outArgument19,
                                              class C_Compiler * inCompiler
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
//                                       Routine 'handleArrayAccessInExpression'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleArrayAccessInExpression (class GALGAS_internalRepresentation & ioArgument0,
                                            const class GALGAS_expressionAST constinArgument1,
                                            const class GALGAS_location constinArgument2,
                                            const class GALGAS_PLMType constinArgument3,
                                            const class GALGAS_bool constinArgument4,
                                            const class GALGAS_lstring constinArgument5,
                                            const class GALGAS_PLMType constinArgument6,
                                            const class GALGAS_semanticContext constinArgument7,
                                            const class GALGAS_mode constinArgument8,
                                            class GALGAS_semanticTemporariesStruct & ioArgument9,
                                            class GALGAS_staticStringMap & ioArgument10,
                                            class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument11,
                                            class GALGAS_allocaList & ioArgument12,
                                            class GALGAS_instructionListIR & ioArgument13,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'handleFunctionCallInExpressionNew'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleFunctionCallInExpressionNew (class GALGAS_internalRepresentation & ioArgument0,
                                                const class GALGAS_PLMType constinArgument1,
                                                const class GALGAS_bool constinArgument2,
                                                const class GALGAS_lstring constinArgument3,
                                                const class GALGAS_semanticContext constinArgument4,
                                                const class GALGAS_mode constinArgument5,
                                                class GALGAS_semanticTemporariesStruct & ioArgument6,
                                                class GALGAS_staticStringMap & ioArgument7,
                                                class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument8,
                                                class GALGAS_allocaList & ioArgument9,
                                                const class GALGAS_effectiveArgumentListAST constinArgument10,
                                                const class GALGAS_location constinArgument11,
                                                class GALGAS_instructionListIR & ioArgument12,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'handlePropertyAccessInExpression'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handlePropertyAccessInExpression (class GALGAS_internalRepresentation & ioArgument0,
                                               const class GALGAS_lstring constinArgument1,
                                               const class GALGAS_lstring constinArgument2,
                                               const class GALGAS_PLMType constinArgument3,
                                               const class GALGAS_semanticContext constinArgument4,
                                               const class GALGAS_mode constinArgument5,
                                               class GALGAS_semanticTemporariesStruct & ioArgument6,
                                               class GALGAS_staticStringMap & ioArgument7,
                                               class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument8,
                                               class GALGAS_allocaList & ioArgument9,
                                               class GALGAS_instructionListIR & ioArgument10,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Routine 'handleSubscriptArrayInAssignmentAndExpressionNew'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSubscriptArrayInAssignmentAndExpressionNew (const class GALGAS_PLMType constinArgument0,
                                                               const class GALGAS_bool constinArgument1,
                                                               const class GALGAS_lstring constinArgument2,
                                                               const class GALGAS_semanticContext constinArgument3,
                                                               const class GALGAS_mode constinArgument4,
                                                               class GALGAS_semanticTemporariesStruct & ioArgument5,
                                                               class GALGAS_staticStringMap & ioArgument6,
                                                               class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument7,
                                                               class GALGAS_allocaList & ioArgument8,
                                                               const class GALGAS_expressionAST constinArgument9,
                                                               const class GALGAS_location constinArgument10,
                                                               class GALGAS_instructionListIR & ioArgument11,
                                                               class GALGAS_objectIR & ioArgument12,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Routine 'handleSubscriptRegisterArrayInAssignmentAndExpressionNew'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSubscriptRegisterArrayInAssignmentAndExpressionNew (const class GALGAS_PLMType constinArgument0,
                                                                       const class GALGAS_bool constinArgument1,
                                                                       const class GALGAS_lstring constinArgument2,
                                                                       const class GALGAS_semanticContext constinArgument3,
                                                                       const class GALGAS_mode constinArgument4,
                                                                       class GALGAS_semanticTemporariesStruct & ioArgument5,
                                                                       class GALGAS_staticStringMap & ioArgument6,
                                                                       class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument7,
                                                                       class GALGAS_allocaList & ioArgument8,
                                                                       const class GALGAS_expressionAST constinArgument9,
                                                                       const class GALGAS_location constinArgument10,
                                                                       class GALGAS_instructionListIR & ioArgument11,
                                                                       class GALGAS_objectIR & ioArgument12,
                                                                       class GALGAS_sliceMap & outArgument13,
                                                                       class C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'handleMethodCallInExpressionNew'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleMethodCallInExpressionNew (const class GALGAS_lstring constinArgument0,
                                              const class GALGAS_objectIR constinArgument1,
                                              const class GALGAS_PLMType constinArgument2,
                                              const class GALGAS_lstring constinArgument3,
                                              const class GALGAS_semanticContext constinArgument4,
                                              const class GALGAS_mode constinArgument5,
                                              class GALGAS_semanticTemporariesStruct & ioArgument6,
                                              class GALGAS_staticStringMap & ioArgument7,
                                              class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument8,
                                              class GALGAS_allocaList & ioArgument9,
                                              const class GALGAS_effectiveArgumentListAST constinArgument10,
                                              class GALGAS_instructionListIR & ioArgument11,
                                              class GALGAS_objectIR & outArgument12,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'handleStandAloneFunctionCallInExpression'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleStandAloneFunctionCallInExpression (class GALGAS_internalRepresentation & ioArgument0,
                                                       const class GALGAS_lstring constinArgument1,
                                                       const class GALGAS_PLMType constinArgument2,
                                                       const class GALGAS_bool constinArgument3,
                                                       const class GALGAS_lstring constinArgument4,
                                                       const class GALGAS_semanticContext constinArgument5,
                                                       const class GALGAS_mode constinArgument6,
                                                       class GALGAS_semanticTemporariesStruct & ioArgument7,
                                                       class GALGAS_staticStringMap & ioArgument8,
                                                       class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument9,
                                                       class GALGAS_allocaList & ioArgument10,
                                                       const class GALGAS_effectiveArgumentListAST constinArgument11,
                                                       const class GALGAS_location constinArgument12,
                                                       class GALGAS_instructionListIR & ioArgument13,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'routineMangledNameFromCall'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_routineMangledNameFromCall (const class GALGAS_string & constinArgument0,
                                                          const class GALGAS_lstring & constinArgument1,
                                                          const class GALGAS_effectiveArgumentListAST & constinArgument2,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'analyzeEffectiveParametersNew'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeEffectiveParametersNew (const class GALGAS_PLMType constinArgument0,
                                            const class GALGAS_routineTypedSignature constinArgument1,
                                            const class GALGAS_effectiveArgumentListAST constinArgument2,
                                            const class GALGAS_location constinArgument3,
                                            const class GALGAS_lstring constinArgument4,
                                            const class GALGAS_semanticContext constinArgument5,
                                            const class GALGAS_mode constinArgument6,
                                            class GALGAS_semanticTemporariesStruct & ioArgument7,
                                            class GALGAS_staticStringMap & ioArgument8,
                                            class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument9,
                                            class GALGAS_allocaList & ioArgument10,
                                            class GALGAS_instructionListIR & ioArgument11,
                                            class GALGAS_procCallEffectiveParameterListIR & ioArgument12,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'handleFunctionCallInExpression'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleFunctionCallInExpression (const class GALGAS_PLMType constinArgument0,
                                             const class GALGAS_string constinArgument1,
                                             const class GALGAS_bool constinArgument2,
                                             const class GALGAS_bool constinArgument3,
                                             const class GALGAS_bool constinArgument4,
                                             const class GALGAS_lstring constinArgument5,
                                             const class GALGAS_semanticContext constinArgument6,
                                             const class GALGAS_mode constinArgument7,
                                             class GALGAS_semanticTemporariesStruct & ioArgument8,
                                             class GALGAS_staticStringMap & ioArgument9,
                                             class GALGAS_unifiedSymbolMapEx & ioArgument10,
                                             class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument11,
                                             class GALGAS_allocaList & ioArgument12,
                                             const class GALGAS_effectiveArgumentListAST constinArgument13,
                                             const class GALGAS_location constinArgument14,
                                             class GALGAS_instructionListIR & ioArgument15,
                                             class GALGAS_objectIR & ioArgument16,
                                             class GALGAS_PLMType & outArgument17,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'analyzeEffectiveParameters'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeEffectiveParameters (const class GALGAS_PLMType constinArgument0,
                                         const class GALGAS_bool constinArgument1,
                                         const class GALGAS_bool constinArgument2,
                                         const class GALGAS_routineTypedSignature constinArgument3,
                                         const class GALGAS_effectiveArgumentListAST constinArgument4,
                                         const class GALGAS_location constinArgument5,
                                         const class GALGAS_lstring constinArgument6,
                                         const class GALGAS_semanticContext constinArgument7,
                                         const class GALGAS_mode constinArgument8,
                                         class GALGAS_semanticTemporariesStruct & ioArgument9,
                                         class GALGAS_staticStringMap & ioArgument10,
                                         class GALGAS_unifiedSymbolMapEx & ioArgument11,
                                         class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument12,
                                         class GALGAS_allocaList & ioArgument13,
                                         class GALGAS_instructionListIR & ioArgument14,
                                         class GALGAS_procCallEffectiveParameterListIR & ioArgument15,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'analyzeGuardCall'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeGuardCall (const class GALGAS_PLMType constinArgument0,
                               const class GALGAS_lstring constinArgument1,
                               const class GALGAS_lstring constinArgument2,
                               const class GALGAS_effectiveArgumentListAST constinArgument3,
                               const class GALGAS_lstring constinArgument4,
                               const class GALGAS_semanticContext constinArgument5,
                               const class GALGAS_mode constinArgument6,
                               class GALGAS_semanticTemporariesStruct & ioArgument7,
                               class GALGAS_staticStringMap & ioArgument8,
                               class GALGAS_unifiedSymbolMapEx & ioArgument9,
                               class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument10,
                               class GALGAS_allocaList & ioArgument11,
                               class GALGAS_instructionListIR & ioArgument12,
                               class GALGAS_procCallEffectiveParameterListIR & outArgument13,
                               class GALGAS_lstring & outArgument14,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Function 'waitForGuardChangeFunctionName'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_waitForGuardChangeFunctionName (class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

#endif
