#ifndef all_2D_declarations_2D__36__ENTITIES_DEFINED
#define all_2D_declarations_2D__36__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-5.h"

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category getter '@objectInMemoryIR llvmName' (as function)                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_llvmName (const class GALGAS_objectInMemoryIR & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category getter '@objectInMemoryIR name' (as function)                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_name (const class GALGAS_objectInMemoryIR & inObject,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category getter '@objectInMemoryIR type' (as function)                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedTypeMap_2D_proxy extensionGetter_type (const class GALGAS_objectInMemoryIR & inObject,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category getter '@objectInMemoryIR address' (as function)                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_operandIR extensionGetter_address (const class GALGAS_objectInMemoryIR & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@objectInMemoryIR loadFromMemory'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_loadFromMemory (const class GALGAS_objectInMemoryIR inObject,
                                    class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                    class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                    class GALGAS_operandIR & out_outResultingValue,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category method '@objectInMemoryIR storeInMemory'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_storeInMemory (const class GALGAS_objectInMemoryIR inObject,
                                   class GALGAS_operandIR in_inValue,
                                   class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

#endif
