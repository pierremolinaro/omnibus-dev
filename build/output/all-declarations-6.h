#ifndef all_2D_declarations_2D__36__ENTITIES_DEFINED
#define all_2D_declarations_2D__36__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-5.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category setter '@instructionListIR appendAlloca'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendAlloca (class GALGAS_instructionListIR & ioObject,
                                    const class GALGAS_string constin_inLocalVariableName,
                                    const class GALGAS_unifiedTypeMap_2D_proxy constin_inTargetVarType,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category setter '@instructionListIR appendExtractValue'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendExtractValue (class GALGAS_instructionListIR & ioObject,
                                          const class GALGAS_operandIR constin_inTarget,
                                          const class GALGAS_operandIR constin_inSource,
                                          const class GALGAS_uint constin_inIndex,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category setter '@instructionListIR appendExtend'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendExtend (class GALGAS_instructionListIR & ioObject,
                                    const class GALGAS_operandIR constin_inResult,
                                    const class GALGAS_operandIR constin_inSource,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category setter '@instructionListIR appendBinaryOperation'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendBinaryOperation (class GALGAS_instructionListIR & ioObject,
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
//                         Category setter '@instructionListIR appendShortCircuitAndOperation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendShortCircuitAndOperation (class GALGAS_instructionListIR & ioObject,
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
//                           Category setter '@instructionListIR appendLoadVolatileRegister'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendLoadVolatileRegister (class GALGAS_instructionListIR & ioObject,
                                                  const class GALGAS_operandIR constin_inTargetValue,
                                                  const class GALGAS_string constin_inRegisterName,
                                                  const class GALGAS_bigint constin_inAddress,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category setter '@instructionListIR appendLoadGlobalVariable'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendLoadGlobalVariable (class GALGAS_instructionListIR & ioObject,
                                                const class GALGAS_operandIR constin_inTargetValue,
                                                const class GALGAS_string constin_inRegisterName,
                                                class GALGAS_bool in_inIsVolatile,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category setter '@instructionListIR appendLoadLocalVariable'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendLoadLocalVariable (class GALGAS_instructionListIR & ioObject,
                                               const class GALGAS_operandIR constin_inTargetValue,
                                               const class GALGAS_string constin_inVariableName,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category setter '@instructionListIR appendStoreVolatileRegister'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendStoreVolatileRegister (class GALGAS_instructionListIR & ioObject,
                                                   const class GALGAS_string constin_inRegisterName,
                                                   const class GALGAS_unifiedTypeMap_2D_proxy constin_inTargetVarType,
                                                   const class GALGAS_bigint constin_inAddress,
                                                   const class GALGAS_operandIR constin_inSourceValue,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category setter '@instructionListIR appendStoreGlobalVariable'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendStoreGlobalVariable (class GALGAS_instructionListIR & ioObject,
                                                 const class GALGAS_string constin_inGlobalVarName,
                                                 const class GALGAS_unifiedTypeMap_2D_proxy constin_inTargetVarType,
                                                 const class GALGAS_operandIR constin_inSourceValue,
                                                 const class GALGAS_bool constin_inIsVolatile,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category setter '@instructionListIR appendStoreLocalVariable'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendStoreLocalVariable (class GALGAS_instructionListIR & ioObject,
                                                const class GALGAS_string constin_inLocalVarName,
                                                const class GALGAS_unifiedTypeMap_2D_proxy constin_inTargetVarType,
                                                const class GALGAS_operandIR constin_inSourceValue,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category setter '@instructionListIR appendLoadStructureConstant'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendLoadStructureConstant (class GALGAS_instructionListIR & ioObject,
                                                   const class GALGAS_operandIR constin_inTargetValue,
                                                   const class GALGAS_string constin_inTypeName,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category setter '@instructionListIR appendGetElementPtr'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendGetElementPtr (class GALGAS_instructionListIR & ioObject,
                                           const class GALGAS_objectInMemoryIR constin_inTarget,
                                           const class GALGAS_objectInMemoryIR constin_inSource,
                                           const class GALGAS_uint constin_inIndex,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category method '@abstractInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractInstructionIR_enterAccessibleEntities) (const class cPtr_abstractInstructionIR * inObject,
                                                                                       class GALGAS_accessibleEntities & ioArgument0,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterAccessibleEntities (const int32_t inClassIndex,
                                                  categoryMethodSignature_abstractInstructionIR_enterAccessibleEntities inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterAccessibleEntities (const class cPtr_abstractInstructionIR * inObject,
                                                 GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@procedureMapIR-element llvmCodeGeneration'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_llvmCodeGeneration (const class GALGAS_procedureMapIR_2D_element inObject,
                                        class GALGAS_string & io_ioLLVMcode,
                                        class GALGAS_string & io_ioAssemblerCode,
                                        const class GALGAS_generationContext constin_inGenerationContext,
                                        class GALGAS_generationAdds & io_ioGenerationAdds,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@procedureMapIR-element llvmPrototypeGeneration'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_llvmPrototypeGeneration (const class GALGAS_procedureMapIR_2D_element inObject,
                                             class GALGAS_string & io_ioLLVMcode,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@infixOperatorMap checkBinaryOperationWith'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_checkBinaryOperationWith (const class GALGAS_infixOperatorMap inObject,
                                              const class GALGAS_unifiedTypeMap_2D_proxy constin_inLeftType,
                                              const class GALGAS_unifiedTypeMap_2D_proxy constin_inRightType,
                                              const class GALGAS_location constin_inOperatorLocation,
                                              class GALGAS_unifiedTypeMap_2D_proxy & out_outResultType,
                                              class GALGAS_infixOperatorDescription & out_outOperation,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Category getter '@procEffectiveParameterPassingModeAST passingModeForActualSelector' (as function)          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_passingModeForActualSelector (const class GALGAS_procEffectiveParameterPassingModeAST & inObject,
                                                                  class GALGAS_lstring inArgument0,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Category getter '@valueIR name' (as function)                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_name (const class GALGAS_valueIR & inObject,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category getter '@valueIR isStatic' (as function)                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_isStatic (const class GALGAS_valueIR & inObject,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@binaryOperationIR enterCodeForOverflowOperation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_binaryOperationIR_enterCodeForOverflowOperation) (const class cPtr_binaryOperationIR * inObject,
                                                                                         const class GALGAS_string constinArgument0,
                                                                                         const class GALGAS_uint constinArgument1,
                                                                                         class GALGAS_string & ioArgument2,
                                                                                         const class GALGAS_generationContext constinArgument3,
                                                                                         class GALGAS_generationAdds & ioArgument4,
                                                                                         class C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterCodeForOverflowOperation (const int32_t inClassIndex,
                                                        categoryMethodSignature_binaryOperationIR_enterCodeForOverflowOperation inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterCodeForOverflowOperation (const class cPtr_binaryOperationIR * inObject,
                                                       const GALGAS_string constin_inOperation,
                                                       const GALGAS_uint constin_inCode,
                                                       GALGAS_string & io_ioLLVMcode,
                                                       const GALGAS_generationContext constin_inGenerationContext,
                                                       GALGAS_generationAdds & io_ioGenerationAdds,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Category method '@binaryOperationIR enterCodeForDivisionWithZeroDivisorException'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException) (const class cPtr_binaryOperationIR * inObject,
                                                                                                        const class GALGAS_string constinArgument0,
                                                                                                        const class GALGAS_uint constinArgument1,
                                                                                                        class GALGAS_string & ioArgument2,
                                                                                                        const class GALGAS_generationContext constinArgument3,
                                                                                                        class GALGAS_generationAdds & ioArgument4,
                                                                                                        class C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterCodeForDivisionWithZeroDivisorException (const int32_t inClassIndex,
                                                                       categoryMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorException inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterCodeForDivisionWithZeroDivisorException (const class cPtr_binaryOperationIR * inObject,
                                                                      const GALGAS_string constin_inOperation,
                                                                      const GALGAS_uint constin_inCode,
                                                                      GALGAS_string & io_ioLLVMcode,
                                                                      const GALGAS_generationContext constin_inGenerationContext,
                                                                      GALGAS_generationAdds & io_ioGenerationAdds,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

#endif
