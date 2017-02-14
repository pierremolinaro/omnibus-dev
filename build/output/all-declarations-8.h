#ifndef all_2D_declarations_2D__38__ENTITIES_DEFINED
#define all_2D_declarations_2D__38__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-7.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'accessAttribute'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_accessAttribute (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'staticIntegerTypeName'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_staticIntegerTypeName (class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'enterAliasInfixOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterAliasInfixOperator (class GALGAS_infixOperatorMap & ioArgument0,
                                      const class GALGAS_lstring constinArgument1,
                                      const class GALGAS_lstring constinArgument2,
                                      const class GALGAS_lstring constinArgument3,
                                      const class GALGAS_lstring constinArgument4,
                                      const class GALGAS_lstring constinArgument5,
                                      const class GALGAS_lstring constinArgument6,
                                      const class GALGAS_unifiedTypeMap_2D_proxy constinArgument7,
                                      const class GALGAS_unifiedTypeMap_2D_proxy constinArgument8,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'enterAliasPrefixOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterAliasPrefixOperator (class GALGAS_prefixOperatorMap & ioArgument0,
                                       const class GALGAS_lstring constinArgument1,
                                       const class GALGAS_lstring constinArgument2,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enter_integer_integer_operators'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enter_5F_integer_5F_integer_5F_operators (const class GALGAS_lstring constinArgument0,
                                                       const class GALGAS_bool constinArgument1,
                                                       class GALGAS_semanticContext & ioArgument2,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enter_integer_literal_operators'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enter_5F_integer_5F_literal_5F_operators (const class GALGAS_lstring constinArgument0,
                                                       const class GALGAS_bool constinArgument1,
                                                       class GALGAS_semanticContext & ioArgument2,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enter_literal_integer_operators'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enter_5F_literal_5F_integer_5F_operators (const class GALGAS_lstring constinArgument0,
                                                       const class GALGAS_bool constinArgument1,
                                                       class GALGAS_semanticContext & ioArgument2,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'enterLiteralIntegerOperators'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterLiteralIntegerOperators (const class GALGAS_lstring constinArgument0,
                                           class GALGAS_semanticContext & ioArgument1,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enterControlRegistersInContext'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterControlRegistersInContext (const class GALGAS_controlRegisterDeclarationListAST constinArgument0,
                                             class GALGAS_semanticContext & ioArgument1,
                                             class GALGAS_staticStringMap & ioArgument2,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildControlRegisterMapHTMLFile'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildControlRegisterMapHTMLFile (const class GALGAS_controlRegisterMap constinArgument0,
                                              const class GALGAS_lstring constinArgument1,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Filewrapper 'controlRegisterDumpGenerationTemplate'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_controlRegisterDumpGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'controlRegisterDumpGenerationTemplate dump'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_controlRegisterDumpGenerationTemplate_dump (class C_Compiler * inCompiler,
                                                                              const class GALGAS_string & in_PROJECT_5F_NAME,
                                                                              const class GALGAS_controlRegisterMap & in_CONTROL_5F_REGISTER_5F_MAP,
                                                                              const class GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                              const class GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'linkForControlRegister'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_linkForControlRegister (const class GALGAS_string & constinArgument0,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'arrayIndexListFor'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uintlist function_arrayIndexListFor (const class GALGAS_uint & constinArgument0,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'fieldIndexColumns'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_fieldIndexColumns (const class GALGAS_uint & constinArgument0,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildGlobalConstantMapHTMLFile'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildGlobalConstantMapHTMLFile (class GALGAS_globalConstantMap inArgument0,
                                             const class GALGAS_lstring constinArgument1,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Filewrapper 'constantDumpGenerationTemplate'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_constantDumpGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Filewrapper template 'constantDumpGenerationTemplate dump'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_constantDumpGenerationTemplate_dump (class C_Compiler * inCompiler,
                                                                       const class GALGAS_string & in_PROJECT_5F_NAME,
                                                                       const class GALGAS_globalConstantMap & in_GLOBAL_5F_CONSTANT_5F_MAP,
                                                                       const class GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                       const class GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'linkForGlobalConstant'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_linkForGlobalConstant (const class GALGAS_string & constinArgument0,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'plmNameForStaticListElementType'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_plmNameForStaticListElementType (const class GALGAS_lstring & constinArgument0,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

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
                                               const class GALGAS_string constinArgument2,
                                               class GALGAS_string & ioArgument3,
                                               const class GALGAS__32_stringlist constinArgument4,
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
//                                      Routine 'analyzeFunctionCallInExpression'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeFunctionCallInExpression (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
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
                                              class GALGAS_unifiedSymbolMap & ioArgument11,
                                              class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument12,
                                              class GALGAS_allocaList & ioArgument13,
                                              class GALGAS_instructionListIR & ioArgument14,
                                              class GALGAS_procCallEffectiveParameterListIR & outArgument15,
                                              class GALGAS_calleeKindIR & outArgument16,
                                              class GALGAS_lstring & outArgument17,
                                              class GALGAS_lstring & outArgument18,
                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument19,
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
//                                     Routine 'handleArrayAccessInExpressionNew'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleArrayAccessInExpressionNew (class GALGAS_internalRepresentation & ioArgument0,
                                               const class GALGAS_expressionAST constinArgument1,
                                               const class GALGAS_location constinArgument2,
                                               const class GALGAS_unifiedTypeMap_2D_proxy constinArgument3,
                                               const class GALGAS_bool constinArgument4,
                                               const class GALGAS_lstring constinArgument5,
                                               const class GALGAS_unifiedTypeMap_2D_proxy constinArgument6,
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
                                                const class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
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
//                                    Routine 'handlePropertyAccessInExpressionNew'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handlePropertyAccessInExpressionNew (class GALGAS_internalRepresentation & ioArgument0,
                                                  const class GALGAS_lstring constinArgument1,
                                                  const class GALGAS_lstring constinArgument2,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy constinArgument3,
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

void routine_handleSubscriptArrayInAssignmentAndExpressionNew (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
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

void routine_handleSubscriptRegisterArrayInAssignmentAndExpressionNew (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
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
                                              const class GALGAS_unifiedTypeMap_2D_proxy constinArgument2,
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
                                                       const class GALGAS_unifiedTypeMap_2D_proxy constinArgument2,
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

void routine_analyzeEffectiveParametersNew (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
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
                                             class GALGAS_unifiedSymbolMap & ioArgument10,
                                             class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument11,
                                             class GALGAS_allocaList & ioArgument12,
                                             const class GALGAS_effectiveArgumentListAST constinArgument13,
                                             const class GALGAS_location constinArgument14,
                                             class GALGAS_instructionListIR & ioArgument15,
                                             class GALGAS_objectIR & ioArgument16,
                                             class GALGAS_unifiedTypeMap_2D_proxy & outArgument17,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

#endif
