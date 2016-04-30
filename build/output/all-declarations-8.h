#ifndef all_2D_declarations_2D__38__ENTITIES_DEFINED
#define all_2D_declarations_2D__38__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-7.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension getter '@integerDeclaration typeName'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_integerDeclaration_typeName) (const class cPtr_integerDeclaration * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_typeName (const int32_t inClassIndex,
                                    enterExtensionGetter_integerDeclaration_typeName inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_typeName (const cPtr_integerDeclaration * inObject,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract extension method '@expressionAST addDependenceEdgeForStaticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_expressionAST_addDependenceEdgeForStaticExpression) (const class cPtr_expressionAST * inObject,
                                                                                             const class GALGAS_lstring constinArgument0,
                                                                                             class GALGAS_semanticTypePrecedenceGraph & ioArgument1,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_addDependenceEdgeForStaticExpression (const int32_t inClassIndex,
                                                                extensionMethodSignature_expressionAST_addDependenceEdgeForStaticExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_addDependenceEdgeForStaticExpression (const class cPtr_expressionAST * inObject,
                                                               const GALGAS_lstring constin_inConstantName,
                                                               GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract extension method '@expressionAST noteExpressionTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_expressionAST_noteExpressionTypesInPrecedenceGraph) (const class cPtr_expressionAST * inObject,
                                                                                             class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                                extensionMethodSignature_expressionAST_noteExpressionTypesInPrecedenceGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_noteExpressionTypesInPrecedenceGraph (const class cPtr_expressionAST * inObject,
                                                               GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension method '@instructionListAST noteInstructionListTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteInstructionListTypesInPrecedenceGraph (const class GALGAS_instructionListAST inObject,
                                                                class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@taskVarListAST-element enterInContext'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const class GALGAS_taskVarListAST_2D_element inObject,
                                     class GALGAS_semanticContext & io_ioContext,
                                     class GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                     class GALGAS_propertyList & io_ioPropertyList,
                                     class GALGAS_propertyMap & io_ioPropertyMap,
                                     class GALGAS_operandIRList & io_ioInitialValueList,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension method '@taskList-element semanticAnalysis'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_semanticAnalysis (const class GALGAS_taskList_2D_element inObject,
                                       const class GALGAS_semanticContext constin_inContext,
                                       class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                       class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension method '@externProcedureDeclarationListAST-element enterExternProcInContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterExternProcInContext (const class GALGAS_externProcedureDeclarationListAST_2D_element inObject,
                                               class GALGAS_semanticContext & io_ioContext,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Extension method '@externProcedureDeclarationListAST-element externProcedureSemanticAnalysis'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_externProcedureSemanticAnalysis (const class GALGAS_externProcedureDeclarationListAST_2D_element inObject,
                                                      const class GALGAS_semanticContext constin_inContext,
                                                      class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                      class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension method '@externProcedureMapIR-element llvmPrototypeGeneration'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_llvmPrototypeGeneration (const class GALGAS_externProcedureMapIR_2D_element inObject,
                                              class GALGAS_string & io_ioLLVMcode,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension method '@sectionDeclarationListAST noteServiceTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteServiceTypesInPrecedenceGraph (const class GALGAS_sectionDeclarationListAST inObject,
                                                        class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@guardMapIR-element llvmCodeGeneration'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_llvmCodeGeneration (const class GALGAS_guardMapIR_2D_element inObject,
                                         class GALGAS_string & io_ioLLVMcode,
                                         const class GALGAS_generationContext constin_inGenerationContext,
                                         class GALGAS_generationAdds & io_ioGenerationAdds,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract extension method '@instructionAST noteInstructionTypesInPrecedenceGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_instructionAST_noteInstructionTypesInPrecedenceGraph) (const class cPtr_instructionAST * inObject,
                                                                                               class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                                 extensionMethodSignature_instructionAST_noteInstructionTypesInPrecedenceGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_noteInstructionTypesInPrecedenceGraph (const class cPtr_instructionAST * inObject,
                                                                GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Abstract extension method '@instructionAST analyze'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_instructionAST_analyze) (const class cPtr_instructionAST * inObject,
                                                                 const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                 const class GALGAS_lstring constinArgument1,
                                                                 const class GALGAS_semanticContext constinArgument2,
                                                                 const class GALGAS_stringset constinArgument3,
                                                                 const class GALGAS_bool constinArgument4,
                                                                 class GALGAS_semanticTemporariesStruct & ioArgument5,
                                                                 class GALGAS_staticStringMap & ioArgument6,
                                                                 class GALGAS_variableMap & ioArgument7,
                                                                 class GALGAS_allocaList & ioArgument8,
                                                                 class GALGAS_instructionListIR & ioArgument9,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyze (const int32_t inClassIndex,
                                   extensionMethodSignature_instructionAST_analyze inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyze (const class cPtr_instructionAST * inObject,
                                  const GALGAS_unifiedTypeMap_2D_proxy constin_inSelfType,
                                  const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                  const GALGAS_semanticContext constin_inContext,
                                  const GALGAS_stringset constin_inModeSet,
                                  const GALGAS_bool constin_inAllowPanic,
                                  GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                  GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                  GALGAS_variableMap & io_ioVariableMap,
                                  GALGAS_allocaList & io_ioAllocaList,
                                  GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@instructionListAST analyzeBranchInstructionList'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeBranchInstructionList (const class GALGAS_instructionListAST inObject,
                                                   const class GALGAS_unifiedTypeMap_2D_proxy constin_inSelfType,
                                                   const class GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                                   class GALGAS_location in_inEndOfInstructionList,
                                                   const class GALGAS_semanticContext constin_inContext,
                                                   const class GALGAS_stringset constin_inModeSet,
                                                   const class GALGAS_bool constin_inAllowPanic,
                                                   class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                   class GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                                   class GALGAS_variableMap & io_ioVariableMap,
                                                   class GALGAS_allocaList & io_ioAllocaList,
                                                   class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract extension method '@abstractInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_abstractInstructionIR_llvmInstructionCode) (const class cPtr_abstractInstructionIR * inObject,
                                                                                    class GALGAS_string & ioArgument0,
                                                                                    const class GALGAS_generationContext constinArgument1,
                                                                                    class GALGAS_generationAdds & ioArgument2,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_llvmInstructionCode (const int32_t inClassIndex,
                                               extensionMethodSignature_abstractInstructionIR_llvmInstructionCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_llvmInstructionCode (const class cPtr_abstractInstructionIR * inObject,
                                              GALGAS_string & io_ioLLVMcode,
                                              const GALGAS_generationContext constin_inGenerationContext,
                                              GALGAS_generationAdds & io_ioGenerationAdds,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@routineMapIR-element llvmCodeGeneration'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_llvmCodeGeneration (const class GALGAS_routineMapIR_2D_element inObject,
                                         class GALGAS_string & io_ioLLVMcode,
                                         class GALGAS_string & io_ioAssemblerCode,
                                         const class GALGAS_generationContext constin_inGenerationContext,
                                         class GALGAS_generationAdds & io_ioGenerationAdds,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension setter '@instructionListIR appendExtend'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendExtend (class GALGAS_instructionListIR & ioObject,
                                   const class GALGAS_operandIR constin_inResult,
                                   const class GALGAS_operandIR constin_inSource,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension setter '@instructionListIR appendBinaryOperation'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendBinaryOperation (class GALGAS_instructionListIR & ioObject,
                                            const class GALGAS_valueIR constin_inTarget,
                                            const class GALGAS_unifiedTypeMap_2D_proxy constin_inOperandType,
                                            const class GALGAS_location constin_inLocation,
                                            const class GALGAS_valueIR constin_inLeft,
                                            const class GALGAS_llvmBinaryOperation constin_inOperation,
                                            const class GALGAS_valueIR constin_inRight,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension setter '@instructionListIR appendShortCircuitAndOperation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendShortCircuitAndOperation (class GALGAS_instructionListIR & ioObject,
                                                     const class GALGAS_operandIR constin_inTargetOperand,
                                                     const class GALGAS_operandIR constin_inLeftOperand,
                                                     const class GALGAS_instructionListIR constin_inLeftInstructionList,
                                                     const class GALGAS_operandIR constin_inRightOperand,
                                                     const class GALGAS_instructionListIR constin_inRightInstructionList,
                                                     const class GALGAS_location constin_inLocation,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension setter '@instructionListIR appendLoadVolatileRegister'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendLoadVolatileRegister (class GALGAS_instructionListIR & ioObject,
                                                 const class GALGAS_operandIR constin_inTargetValue,
                                                 const class GALGAS_string constin_inRegisterName,
                                                 const class GALGAS_bigint constin_inAddress,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension setter '@instructionListIR appendLoadGlobalVariable'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendLoadGlobalVariable (class GALGAS_instructionListIR & ioObject,
                                               const class GALGAS_operandIR constin_inTargetValue,
                                               const class GALGAS_string constin_inRegisterName,
                                               class GALGAS_bool in_inIsVolatile,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension setter '@instructionListIR appendLoadLocalVariable'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendLoadLocalVariable (class GALGAS_instructionListIR & ioObject,
                                              const class GALGAS_operandIR constin_inTargetValue,
                                              const class GALGAS_string constin_inVariableName,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension setter '@instructionListIR appendLoadTaskVariable'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendLoadTaskVariable (class GALGAS_instructionListIR & ioObject,
                                             const class GALGAS_operandIR constin_inTargetValue,
                                             const class GALGAS_string constin_inTaskName,
                                             const class GALGAS_string constin_inVariableName,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension setter '@instructionListIR appendStoreVolatileRegister'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendStoreVolatileRegister (class GALGAS_instructionListIR & ioObject,
                                                  const class GALGAS_string constin_inRegisterName,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy constin_inTargetVarType,
                                                  const class GALGAS_bigint constin_inAddress,
                                                  const class GALGAS_operandIR constin_inSourceValue,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension setter '@instructionListIR appendStoreGlobalVariable'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendStoreGlobalVariable (class GALGAS_instructionListIR & ioObject,
                                                const class GALGAS_string constin_inGlobalVarName,
                                                const class GALGAS_unifiedTypeMap_2D_proxy constin_inTargetVarType,
                                                const class GALGAS_operandIR constin_inSourceValue,
                                                const class GALGAS_bool constin_inIsVolatile,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension setter '@instructionListIR appendStoreTaskVariable'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendStoreTaskVariable (class GALGAS_instructionListIR & ioObject,
                                              const class GALGAS_string constin_inTaskName,
                                              const class GALGAS_string constin_inVarName,
                                              const class GALGAS_unifiedTypeMap_2D_proxy constin_inTargetVarType,
                                              const class GALGAS_operandIR constin_inSourceValue,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension setter '@instructionListIR appendStoreLocalVariable'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendStoreLocalVariable (class GALGAS_instructionListIR & ioObject,
                                               const class GALGAS_string constin_inLocalVarName,
                                               const class GALGAS_unifiedTypeMap_2D_proxy constin_inTargetVarType,
                                               const class GALGAS_operandIR constin_inSourceValue,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension setter '@instructionListIR appendLoadFromMemory'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendLoadFromMemory (class GALGAS_instructionListIR & ioObject,
                                           class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                           const class GALGAS_objectInMemoryIR constin_inSource,
                                           class GALGAS_operandIR & out_outResultingValue,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension setter '@instructionListIR appendStoreInMemory'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendStoreInMemory (class GALGAS_instructionListIR & ioObject,
                                          const class GALGAS_objectInMemoryIR constin_inTargetPtr,
                                          const class GALGAS_operandIR constin_inValue,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension setter '@instructionListIR appendLoadStructureConstant'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendLoadStructureConstant (class GALGAS_instructionListIR & ioObject,
                                                  const class GALGAS_operandIR constin_inTargetValue,
                                                  const class GALGAS_string constin_inTypeName,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension setter '@instructionListIR appendGetElementPtr'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendGetElementPtr (class GALGAS_instructionListIR & ioObject,
                                          const class GALGAS_objectInMemoryIR constin_inTarget,
                                          const class GALGAS_objectInMemoryIR constin_inSource,
                                          const class GALGAS_uint constin_inIndex,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension setter '@instructionListIR appendSelectOperation'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendSelectOperation (class GALGAS_instructionListIR & ioObject,
                                            const class GALGAS_operandIR constin_inTargetValue,
                                            const class GALGAS_operandIR constin_in_5F_if_5F_variable,
                                            const class GALGAS_operandIR constin_in_5F_then_5F_variable,
                                            const class GALGAS_operandIR constin_in_5F_else_5F_variable,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract extension method '@abstractInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_abstractInstructionIR_enterAccessibleEntities) (const class cPtr_abstractInstructionIR * inObject,
                                                                                        class GALGAS_accessibleEntities & ioArgument0,
                                                                                        class GALGAS_uint & ioArgument1,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterAccessibleEntities (const int32_t inClassIndex,
                                                   extensionMethodSignature_abstractInstructionIR_enterAccessibleEntities inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterAccessibleEntities (const class cPtr_abstractInstructionIR * inObject,
                                                  GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                                  GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@structureDeclaration procedureSemanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_structureDeclaration_procedureSemanticAnalysis) (const class cPtr_structureDeclaration * inObject,
                                                                                         const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                                         const class GALGAS_semanticContext constinArgument1,
                                                                                         class GALGAS_semanticTemporariesStruct & ioArgument2,
                                                                                         class GALGAS_intermediateCodeStruct & ioArgument3,
                                                                                         class C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_procedureSemanticAnalysis (const int32_t inClassIndex,
                                                     extensionMethodSignature_structureDeclaration_procedureSemanticAnalysis inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_procedureSemanticAnalysis (const class cPtr_structureDeclaration * inObject,
                                                    const GALGAS_unifiedTypeMap_2D_proxy constin_inStructureType,
                                                    const GALGAS_semanticContext constin_inContext,
                                                    GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                    GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

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

#endif
