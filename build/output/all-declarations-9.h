#ifndef all_2D_declarations_2D__39__ENTITIES_DEFINED
#define all_2D_declarations_2D__39__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-8.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@infixOperatorMap checkBinaryOperationWith'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_checkBinaryOperationWith (const class GALGAS_infixOperatorMap inObject,
                                               const class GALGAS_unifiedTypeMap_2D_proxy constin_inLeftType,
                                               const class GALGAS_unifiedTypeMap_2D_proxy constin_inRightType,
                                               const class GALGAS_location constin_inOperatorLocation,
                                               class GALGAS_unifiedTypeMap_2D_proxy & out_outResultType,
                                               class GALGAS_infixOperatorDescription & out_outOperation,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract extension method '@infixOperatorDescription generateInfixOperatorCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_infixOperatorDescription_generateInfixOperatorCode) (const class cPtr_infixOperatorDescription * inObject,
                                                                                             class GALGAS_semanticTemporariesStruct & ioArgument0,
                                                                                             class GALGAS_instructionListIR & ioArgument1,
                                                                                             const class GALGAS_operandIR constinArgument2,
                                                                                             const class GALGAS_location constinArgument3,
                                                                                             const class GALGAS_operandIR constinArgument4,
                                                                                             const class GALGAS_unifiedTypeMap_2D_proxy constinArgument5,
                                                                                             class GALGAS_operandIR & outArgument6,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_generateInfixOperatorCode (const int32_t inClassIndex,
                                                     extensionMethodSignature_infixOperatorDescription_generateInfixOperatorCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_generateInfixOperatorCode (const class cPtr_infixOperatorDescription * inObject,
                                                    GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                    GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                    const GALGAS_operandIR constin_inLeftOperand,
                                                    const GALGAS_location constin_inOperatorLocation,
                                                    const GALGAS_operandIR constin_inRightOperand,
                                                    const GALGAS_unifiedTypeMap_2D_proxy constin_inResultType,
                                                    GALGAS_operandIR & out_outResultValue,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension getter '@infixOperatorDescription performStaticOperation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bigint (*enterExtensionGetter_infixOperatorDescription_performStaticOperation) (const class cPtr_infixOperatorDescription * inObject,
                                                                                                     const class GALGAS_bigint & constinArgument0,
                                                                                                     const class GALGAS_bigint & constinArgument1,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_performStaticOperation (const int32_t inClassIndex,
                                                  enterExtensionGetter_infixOperatorDescription_performStaticOperation inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint callExtensionGetter_performStaticOperation (const cPtr_infixOperatorDescription * inObject,
                                                                const GALGAS_bigint & constin_inLeft,
                                                                const GALGAS_bigint & constin_inRight,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@varInExpressionAST analyzeExpression_register'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_varInExpressionAST_analyzeExpression_5F_register) (const class cPtr_varInExpressionAST * inObject,
                                                                                           const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                                           const class GALGAS_bool constinArgument1,
                                                                                           const class GALGAS_bool constinArgument2,
                                                                                           const class GALGAS_lstring constinArgument3,
                                                                                           const class GALGAS_unifiedTypeMap_2D_proxy constinArgument4,
                                                                                           const class GALGAS_semanticContext constinArgument5,
                                                                                           const class GALGAS_stringset constinArgument6,
                                                                                           const class GALGAS_bool constinArgument7,
                                                                                           class GALGAS_semanticTemporariesStruct & ioArgument8,
                                                                                           class GALGAS_staticStringMap & ioArgument9,
                                                                                           class GALGAS_variableMap & ioArgument10,
                                                                                           class GALGAS_localVariableMap & ioArgument11,
                                                                                           class GALGAS_namedObjectMap & ioArgument12,
                                                                                           class GALGAS_allocaList & ioArgument13,
                                                                                           class GALGAS_instructionListIR & ioArgument14,
                                                                                           const class GALGAS_objectInMemoryIR constinArgument15,
                                                                                           const class GALGAS_location constinArgument16,
                                                                                           class GALGAS_unifiedTypeMap_2D_proxy & ioArgument17,
                                                                                           class GALGAS_operandIR & outArgument18,
                                                                                           class C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzeExpression_5F_register (const int32_t inClassIndex,
                                                         extensionMethodSignature_varInExpressionAST_analyzeExpression_5F_register inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzeExpression_5F_register (const class cPtr_varInExpressionAST * inObject,
                                                        const GALGAS_unifiedTypeMap_2D_proxy constin_inSelfType,
                                                        const GALGAS_bool constin_inDirectAccessToPropertiesAllowed,
                                                        const GALGAS_bool constin_inGuard,
                                                        const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                                        const GALGAS_unifiedTypeMap_2D_proxy constin_inOptionalTargetType,
                                                        const GALGAS_semanticContext constin_inContext,
                                                        const GALGAS_stringset constin_inModeSet,
                                                        const GALGAS_bool constin_inAllowPanic,
                                                        GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                        GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                                        GALGAS_variableMap & io_ioVariableMap,
                                                        GALGAS_localVariableMap & io_ioLocalVariableMap,
                                                        GALGAS_namedObjectMap & io_ioNamedObjectMap,
                                                        GALGAS_allocaList & io_ioAllocaList,
                                                        GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                        const GALGAS_objectInMemoryIR constin_inVariableKind,
                                                        const GALGAS_location constin_inErrorLocation,
                                                        GALGAS_unifiedTypeMap_2D_proxy & io_ioType,
                                                        GALGAS_operandIR & out_outResult,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@varInExpressionAST analyzeExpression_otherKind'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_varInExpressionAST_analyzeExpression_5F_otherKind) (const class cPtr_varInExpressionAST * inObject,
                                                                                            const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                                            const class GALGAS_bool constinArgument1,
                                                                                            const class GALGAS_bool constinArgument2,
                                                                                            const class GALGAS_lstring constinArgument3,
                                                                                            const class GALGAS_unifiedTypeMap_2D_proxy constinArgument4,
                                                                                            const class GALGAS_semanticContext constinArgument5,
                                                                                            const class GALGAS_stringset constinArgument6,
                                                                                            const class GALGAS_bool constinArgument7,
                                                                                            class GALGAS_semanticTemporariesStruct & ioArgument8,
                                                                                            class GALGAS_staticStringMap & ioArgument9,
                                                                                            class GALGAS_variableMap & ioArgument10,
                                                                                            class GALGAS_localVariableMap & ioArgument11,
                                                                                            class GALGAS_namedObjectMap & ioArgument12,
                                                                                            class GALGAS_allocaList & ioArgument13,
                                                                                            class GALGAS_instructionListIR & ioArgument14,
                                                                                            const class GALGAS_objectInMemoryIR constinArgument15,
                                                                                            class GALGAS_unifiedTypeMap_2D_proxy & ioArgument16,
                                                                                            class GALGAS_operandIR & outArgument17,
                                                                                            class C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzeExpression_5F_otherKind (const int32_t inClassIndex,
                                                          extensionMethodSignature_varInExpressionAST_analyzeExpression_5F_otherKind inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzeExpression_5F_otherKind (const class cPtr_varInExpressionAST * inObject,
                                                         const GALGAS_unifiedTypeMap_2D_proxy constin_inSelfType,
                                                         const GALGAS_bool constin_inDirectAccessToPropertiesAllowed,
                                                         const GALGAS_bool constin_inGuard,
                                                         const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                                         const GALGAS_unifiedTypeMap_2D_proxy constin_inOptionalTargetType,
                                                         const GALGAS_semanticContext constin_inContext,
                                                         const GALGAS_stringset constin_inModeSet,
                                                         const GALGAS_bool constin_inAllowPanic,
                                                         GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                         GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                                         GALGAS_variableMap & io_ioVariableMap,
                                                         GALGAS_localVariableMap & io_ioLocalVariableMap,
                                                         GALGAS_namedObjectMap & io_ioNamedObjectMap,
                                                         GALGAS_allocaList & io_ioAllocaList,
                                                         GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                         const GALGAS_objectInMemoryIR constin_inVariableKind,
                                                         GALGAS_unifiedTypeMap_2D_proxy & io_ioType,
                                                         GALGAS_operandIR & out_outResult,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@binaryOperationIR enterCodeForOverflowOperation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_binaryOperationIR_enterCodeForOverflowOperation) (const class cPtr_binaryOperationIR * inObject,
                                                                                          const class GALGAS_string constinArgument0,
                                                                                          const class GALGAS_bigint constinArgument1,
                                                                                          class GALGAS_string & ioArgument2,
                                                                                          const class GALGAS_generationContext constinArgument3,
                                                                                          class GALGAS_generationAdds & ioArgument4,
                                                                                          class C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterCodeForOverflowOperation (const int32_t inClassIndex,
                                                         extensionMethodSignature_binaryOperationIR_enterCodeForOverflowOperation inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterCodeForOverflowOperation (const class cPtr_binaryOperationIR * inObject,
                                                        const GALGAS_string constin_inOperation,
                                                        const GALGAS_bigint constin_inPanicCode,
                                                        GALGAS_string & io_ioLLVMcode,
                                                        const GALGAS_generationContext constin_inGenerationContext,
                                                        GALGAS_generationAdds & io_ioGenerationAdds,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension method '@binaryOperationIR enterCodeForDivisionWithZeroDivisorPanic'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic) (const class cPtr_binaryOperationIR * inObject,
                                                                                                     const class GALGAS_string constinArgument0,
                                                                                                     const class GALGAS_bigint constinArgument1,
                                                                                                     class GALGAS_string & ioArgument2,
                                                                                                     const class GALGAS_generationContext constinArgument3,
                                                                                                     class GALGAS_generationAdds & ioArgument4,
                                                                                                     class C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (const int32_t inClassIndex,
                                                                    extensionMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (const class cPtr_binaryOperationIR * inObject,
                                                                   const GALGAS_string constin_inOperation,
                                                                   const GALGAS_bigint constin_inPanicCode,
                                                                   GALGAS_string & io_ioLLVMcode,
                                                                   const GALGAS_generationContext constin_inGenerationContext,
                                                                   GALGAS_generationAdds & io_ioGenerationAdds,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@objectInMemoryIR enterAccessibleEntities'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterAccessibleEntities (const class GALGAS_objectInMemoryIR inObject,
                                              class GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension getter '@objectInMemoryIR mangledName' (as function)                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_mangledName (const class GALGAS_objectInMemoryIR & inObject,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

#endif
