#ifndef all_2D_declarations_2D__34__ENTITIES_DEFINED
#define all_2D_declarations_2D__34__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-3.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract category method '@abstractInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractInstructionIR_llvmInstructionCode) (const class cPtr_abstractInstructionIR * inObject,
                                                                                   class GALGAS_string & ioArgument0,
                                                                                   class C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_llvmInstructionCode (const int32_t inClassIndex,
                                              categoryMethodSignature_abstractInstructionIR_llvmInstructionCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_llvmInstructionCode (const class cPtr_abstractInstructionIR * inObject,
                                             GALGAS_string & io_ioCode,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category Getter '@operandIR string' (as function)                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_string (const class GALGAS_operandIR & inObject,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category Getter '@operandIR isStatic' (as function)                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool categoryReader_isStatic (const class GALGAS_operandIR & inObject,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category setter '@instructionListIR appendComment'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendComment (class GALGAS_instructionListIR & ioObject,
                                     const class GALGAS_string constin_inComment,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category setter '@instructionListIR appendBinaryOperation'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendBinaryOperation (class GALGAS_instructionListIR & ioObject,
                                             const class GALGAS_operandIR constin_inTargetOperand,
                                             const class GALGAS_unifiedTypeMap_2D_proxy constin_inTargetVarType,
                                             const class GALGAS_operandIR constin_inLeftOperand,
                                             const class GALGAS_string constin_inOperation,
                                             const class GALGAS_operandIR constin_inRightOperand,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category setter '@instructionListIR appendLoadVolatile'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendLoadVolatile (class GALGAS_instructionListIR & ioObject,
                                          const class GALGAS_operandIR constin_inTargetValue,
                                          const class GALGAS_string constin_inRegisterName,
                                          const class GALGAS_unifiedTypeMap_2D_proxy constin_inTargetVarType,
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
                                                const class GALGAS_unifiedTypeMap_2D_proxy constin_inTargetVarType,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category setter '@instructionListIR appendStoreVolatile'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendStoreVolatile (class GALGAS_instructionListIR & ioObject,
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
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category method '@literalStructureList enterAccessibleEntities'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterAccessibleEntities (const class GALGAS_literalStructureList inObject,
                                             class GALGAS_accessibleEntities & io_ioAccessibleEntities,
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
//                         Category Getter '@literalStructureList literalValue' (as function)                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_literalValue (const class GALGAS_literalStructureList & inObject,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract category reader '@abstractTypeIR headerCodeGenerationForType'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_abstractTypeIR_headerCodeGenerationForType) (const class cPtr_abstractTypeIR * inObject,
                                                                                                   class C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_headerCodeGenerationForType (const int32_t inClassIndex,
                                                      categoryReaderSignature_abstractTypeIR_headerCodeGenerationForType inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_headerCodeGenerationForType (const class cPtr_abstractTypeIR * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Category Getter '@functionDeclarationListAST-element mangledName' (as function)                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_mangledName (const class GALGAS_functionDeclarationListAST_2D_element & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Category method '@infixOperatorMap checkWith'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_checkWith (const class GALGAS_infixOperatorMap inObject,
                               const class GALGAS_unifiedTypeMap_2D_proxy constin_inLeftType,
                               const class GALGAS_unifiedTypeMap_2D_proxy constin_inRightType,
                               const class GALGAS_location constin_inOperatorLocation,
                               class GALGAS_unifiedTypeMap_2D_proxy & out_outResultType,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Category method '@prefixOperatorMap checkWith'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_checkWith (const class GALGAS_prefixOperatorMap inObject,
                               const class GALGAS_unifiedTypeMap_2D_proxy constin_inType,
                               const class GALGAS_location constin_inOperatorLocation,
                               class GALGAS_unifiedTypeMap_2D_proxy & out_outResultType,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Category Getter '@procEffectiveParameterPassingModeAST passingModeForActualSelector' (as function)          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_passingModeForActualSelector (const class GALGAS_procEffectiveParameterPassingModeAST & inObject,
                                                                 class GALGAS_lstring inArgument0,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category Getter '@variableKindIR isStatic' (as function)                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool categoryReader_isStatic (const class GALGAS_variableKindIR & inObject,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category Getter '@unifiedTypeMap-proxy llvmType' (as function)                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_llvmType (const class GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@variableKindIR enterAccessibleEntities'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterAccessibleEntities (const class GALGAS_variableKindIR inObject,
                                             class GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@assignmentTargetIR enterAccessibleEntities'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterAccessibleEntities (const class GALGAS_assignmentTargetIR inObject,
                                             class GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category Getter '@variableKindIR mangledName' (as function)                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_mangledName (const class GALGAS_variableKindIR & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category Getter '@assignmentTargetIR mangledName' (as function)                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_mangledName (const class GALGAS_assignmentTargetIR & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Category method '@functionDeclarationListAST-element enterInPrecedenceGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInPrecedenceGraph (const class GALGAS_functionDeclarationListAST_2D_element inObject,
                                            class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Category Getter '@procedureDeclarationListAST-element mangledName' (as function)                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_mangledName (const class GALGAS_procedureDeclarationListAST_2D_element & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Category Getter '@registerMapIR-element headerCodeGenerationForRegister' (as function)                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_headerCodeGenerationForRegister (const class GALGAS_registerMapIR_2D_element & inObject,
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category Getter '@procedureDeclarationListAST-element getMangledName' (as function)                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_getMangledName (const class GALGAS_procedureDeclarationListAST_2D_element & inObject,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

#endif
