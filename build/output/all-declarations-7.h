#ifndef all_2D_declarations_2D__37__ENTITIES_DEFINED
#define all_2D_declarations_2D__37__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-6.h"

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
//                                   Function 'panicCodeForUnsignedAdditionOverflow'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForUnsignedAdditionOverflow (class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Function 'panicCodeForSignedAdditionOverflow'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForSignedAdditionOverflow (class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Function 'panicCodeForUnsignedSubtractOverflow'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForUnsignedSubtractOverflow (class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Function 'panicCodeForSignedSubtractOverflow'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForSignedSubtractOverflow (class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Function 'panicCodeForUnsignedMultiplicationOverflow'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForUnsignedMultiplicationOverflow (class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Function 'panicCodeForSignedMultiplicationOverflow'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForSignedMultiplicationOverflow (class C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Function 'panicCodeForUnsignedDivisionByZero'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForUnsignedDivisionByZero (class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'panicCodeForSignedDivisionByZero'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForSignedDivisionByZero (class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Function 'panicCodeForUnsignedRemainderByZero'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForUnsignedRemainderByZero (class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Function 'panicCodeForSignedRemainderByZero'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForSignedRemainderByZero (class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Function 'panicCodeForNegativeArrayIndex'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForNegativeArrayIndex (class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Function 'panicCodeForTooLargeArrayIndex'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForTooLargeArrayIndex (class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

#endif
