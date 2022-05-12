#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@effectiveArgumentPassingModeAST passingModeForActualSelector' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_passingModeForActualSelector (const class GALGAS_effectiveArgumentPassingModeAST & inObject,
                                                                  const class GALGAS_lstring & constinArgument0,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@LValueAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const class GALGAS_LValueAST inObject,
                                                            class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@LValueAST analyzeLValue'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_analyzeLValue (const class GALGAS_LValueAST inObject,
                                    const class GALGAS_omnibusType constin_inSelfType,
                                    const class GALGAS_bool constin_inIsAddressOf,
                                    const class GALGAS_routineAttributes constin_inRoutineAttributes,
                                    const class GALGAS_semanticContext constin_inContext,
                                    const class GALGAS_mode constin_inMode,
                                    class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                    class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                    class GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                    class GALGAS_allocaList & io_ioAllocaList,
                                    class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                    class GALGAS_LValueRepresentation & out_outInternalRepresentation,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'mutatingAttribute'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_mutatingAttribute (class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSelfLValue'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeSelfLValue (const class GALGAS_omnibusType constinArgument0,
                                const class GALGAS_routineAttributes constinArgument1,
                                const class GALGAS_semanticContext constinArgument2,
                                const class GALGAS_mode constinArgument3,
                                class GALGAS_semanticTemporariesStruct & ioArgument4,
                                class GALGAS_staticEntityMap & ioArgument5,
                                class GALGAS_universalValuedObjectMap & ioArgument6,
                                class GALGAS_allocaList & ioArgument7,
                                class GALGAS_instructionListIR & ioArgument8,
                                const class GALGAS_LValueOperandAST constinArgument9,
                                class GALGAS_LValueRepresentation & outArgument10,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeVariableInLValue'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeVariableInLValue (const class GALGAS_omnibusType constinArgument0,
                                      const class GALGAS_bool constinArgument1,
                                      const class GALGAS_routineAttributes constinArgument2,
                                      const class GALGAS_semanticContext constinArgument3,
                                      const class GALGAS_mode constinArgument4,
                                      class GALGAS_semanticTemporariesStruct & ioArgument5,
                                      class GALGAS_staticEntityMap & ioArgument6,
                                      class GALGAS_universalValuedObjectMap & ioArgument7,
                                      class GALGAS_allocaList & ioArgument8,
                                      class GALGAS_instructionListIR & ioArgument9,
                                      const class GALGAS_lstring constinArgument10,
                                      const class GALGAS_string constinArgument11,
                                      const class GALGAS_omnibusType constinArgument12,
                                      const class GALGAS_LValueOperandAST constinArgument13,
                                      class GALGAS_LValueRepresentation & outArgument14,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterLValueAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_noteExpressionTypesInPrecedenceGraph (const class GALGAS_controlRegisterLValueAST inObject,
                                                           class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterLValueAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_addDependenceEdgeForStaticExpression (const class GALGAS_controlRegisterLValueAST inObject,
                                                           const class GALGAS_lstring constin_inConstantName,
                                                           class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterLValueAST controlRegisterLValueSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_controlRegisterLValueSemanticAnalysis (const class GALGAS_controlRegisterLValueAST inObject,
                                                            const class GALGAS_bool constin_inWriteAccess,
                                                            const class GALGAS_omnibusType constin_inSelfType,
                                                            const class GALGAS_routineAttributes constin_inRoutineAttributes,
                                                            const class GALGAS_semanticContext constin_inContext,
                                                            const class GALGAS_mode constin_inMode,
                                                            class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                            class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                            class GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                                            class GALGAS_allocaList & io_ioAllocaList,
                                                            class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                            class GALGAS_omnibusType & out_outRegisterType,
                                                            class GALGAS_uint & out_outRegisterTypeBitCount,
                                                            class GALGAS_sliceMap & out_outSliceMap,
                                                            class GALGAS_string & out_outllvmRegisterAddressName,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleArraySubscriptNew'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleArraySubscriptNew (const class GALGAS_omnibusType constinArgument0,
                                      const class GALGAS_routineAttributes constinArgument1,
                                      const class GALGAS_semanticContext constinArgument2,
                                      const class GALGAS_mode constinArgument3,
                                      class GALGAS_semanticTemporariesStruct & ioArgument4,
                                      class GALGAS_staticEntityMap & ioArgument5,
                                      class GALGAS_universalValuedObjectMap & ioArgument6,
                                      class GALGAS_allocaList & ioArgument7,
                                      const class GALGAS_expressionAST constinArgument8,
                                      const class GALGAS_location constinArgument9,
                                      const class GALGAS_bool constinArgument10,
                                      const class GALGAS_bigint constinArgument11,
                                      const class GALGAS_omnibusType constinArgument12,
                                      class GALGAS_instructionListIR & ioArgument13,
                                      class GALGAS_objectIR & outArgument14,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractRoutineIR svcDeclarationGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractRoutineIR_svcDeclarationGeneration) (const class cPtr_abstractRoutineIR * inObject,
                                                                                     class GALGAS_primitiveAndServiceIRlist & ioArgument0,
                                                                                     class GALGAS_sectionIRlist & ioArgument1,
                                                                                     class GALGAS_generationAdds & ioArgument2,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_svcDeclarationGeneration (const int32_t inClassIndex,
                                                    extensionMethodSignature_abstractRoutineIR_svcDeclarationGeneration inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_svcDeclarationGeneration (const class cPtr_abstractRoutineIR * inObject,
                                                   GALGAS_primitiveAndServiceIRlist & io_ioPrimitiveAndServiceList,
                                                   GALGAS_sectionIRlist & io_ioSectionList,
                                                   GALGAS_generationAdds & io_ioGenerationAdds,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractRoutineIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractRoutineIR_enterAccessibleEntities) (const class cPtr_abstractRoutineIR * inObject,
                                                                                    class GALGAS_stringset & ioArgument0,
                                                                                    class GALGAS_uint & ioArgument1,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterAccessibleEntities (const int32_t inClassIndex,
                                                   extensionMethodSignature_abstractRoutineIR_enterAccessibleEntities inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterAccessibleEntities (const class cPtr_abstractRoutineIR * inObject,
                                                  GALGAS_stringset & io_ioInvokedRoutineSet,
                                                  GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@binaryOperationIR enterCodeForOverflowOperation'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_binaryOperationIR_enterCodeForOverflowOperation) (const class cPtr_binaryOperationIR * inObject,
                                                                                          const class GALGAS_string constinArgument0,
                                                                                          const class GALGAS_bigint constinArgument1,
                                                                                          class GALGAS_string & ioArgument2,
                                                                                          const class GALGAS_generationContext constinArgument3,
                                                                                          class GALGAS_generationAdds & ioArgument4,
                                                                                          class C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterCodeForOverflowOperation (const int32_t inClassIndex,
                                                         extensionMethodSignature_binaryOperationIR_enterCodeForOverflowOperation inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterCodeForOverflowOperation (const class cPtr_binaryOperationIR * inObject,
                                                        const GALGAS_string constin_inOperation,
                                                        const GALGAS_bigint constin_inPanicCode,
                                                        GALGAS_string & io_ioLLVMcode,
                                                        const GALGAS_generationContext constin_inGenerationContext,
                                                        GALGAS_generationAdds & io_ioGenerationAdds,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'panicRoutineNameForLocationFile'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_panicRoutineNameForLocationFile (const class GALGAS_location & constinArgument0,
                                                              class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@binaryOperationIR enterCodeForDivisionWithZeroDivisorPanic'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic) (const class cPtr_binaryOperationIR * inObject,
                                                                                                     const class GALGAS_string constinArgument0,
                                                                                                     const class GALGAS_bigint constinArgument1,
                                                                                                     class GALGAS_string & ioArgument2,
                                                                                                     const class GALGAS_generationContext constinArgument3,
                                                                                                     class GALGAS_generationAdds & ioArgument4,
                                                                                                     class C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (const int32_t inClassIndex,
                                                                    extensionMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (const class cPtr_binaryOperationIR * inObject,
                                                                   const GALGAS_string constin_inOperation,
                                                                   const GALGAS_bigint constin_inPanicCode,
                                                                   GALGAS_string & io_ioLLVMcode,
                                                                   const GALGAS_generationContext constin_inGenerationContext,
                                                                   GALGAS_generationAdds & io_ioGenerationAdds,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

