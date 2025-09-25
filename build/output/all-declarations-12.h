#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@effectiveArgumentPassingModeAST passingModeForActualSelector' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_passingModeForActualSelector (const class GGS_effectiveArgumentPassingModeAST & inObject,
                                                               const class GGS_lstring & constinArgument0,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const class GGS_LValueAST inObject,
                                                            class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueAST analyzeLValue'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeLValue (const class GGS_LValueAST inObject,
                                    const class GGS_omnibusType constin_inSelfType,
                                    const class GGS_bool constin_inIsAddressOf,
                                    const class GGS_routineAttributes constin_inRoutineAttributes,
                                    const class GGS_semanticContext constin_inContext,
                                    const class GGS_mode constin_inMode,
                                    class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                    class GGS_staticEntityMap & io_ioStaticEntityMap,
                                    class GGS_universalValuedObjectMap & io_ioUniversalMap,
                                    class GGS_allocaList & io_ioAllocaList,
                                    class GGS_instructionListIR & io_ioInstructionGenerationList,
                                    class GGS_LValueRepresentation & out_outInternalRepresentation,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'mutatingAttribute'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_mutatingAttribute (class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSelfLValue?self?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSelfLValue_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__21_ (const class GGS_omnibusType constinArgument0,
                                                                                                                                                                      const class GGS_routineAttributes constinArgument1,
                                                                                                                                                                      const class GGS_semanticContext constinArgument2,
                                                                                                                                                                      const class GGS_mode constinArgument3,
                                                                                                                                                                      class GGS_semanticTemporariesStruct & ioArgument4,
                                                                                                                                                                      class GGS_staticEntityMap & ioArgument5,
                                                                                                                                                                      class GGS_universalValuedObjectMap & ioArgument6,
                                                                                                                                                                      class GGS_allocaList & ioArgument7,
                                                                                                                                                                      class GGS_instructionListIR & ioArgument8,
                                                                                                                                                                      const class GGS_LValueOperandAST constinArgument9,
                                                                                                                                                                      class GGS_LValueRepresentation & outArgument10,
                                                                                                                                                                      class Compiler * inCompiler
                                                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeVariableInLValue?self?readAccess?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR?variableName?llvmName?type?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeVariableInLValue_3F_self_3F_readAccess_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F_variableName_3F_llvmName_3F_type_3F__21_ (const class GGS_omnibusType constinArgument0,
                                                                                                                                                                                                                              const class GGS_bool constinArgument1,
                                                                                                                                                                                                                              const class GGS_routineAttributes constinArgument2,
                                                                                                                                                                                                                              const class GGS_semanticContext constinArgument3,
                                                                                                                                                                                                                              const class GGS_mode constinArgument4,
                                                                                                                                                                                                                              class GGS_semanticTemporariesStruct & ioArgument5,
                                                                                                                                                                                                                              class GGS_staticEntityMap & ioArgument6,
                                                                                                                                                                                                                              class GGS_universalValuedObjectMap & ioArgument7,
                                                                                                                                                                                                                              class GGS_allocaList & ioArgument8,
                                                                                                                                                                                                                              class GGS_instructionListIR & ioArgument9,
                                                                                                                                                                                                                              const class GGS_lstring constinArgument10,
                                                                                                                                                                                                                              const class GGS_string constinArgument11,
                                                                                                                                                                                                                              const class GGS_omnibusType constinArgument12,
                                                                                                                                                                                                                              const class GGS_LValueOperandAST constinArgument13,
                                                                                                                                                                                                                              class GGS_LValueRepresentation & outArgument14,
                                                                                                                                                                                                                              class Compiler * inCompiler
                                                                                                                                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterLValueAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteExpressionTypesInPrecedenceGraph (const class GGS_controlRegisterLValueAST inObject,
                                                           class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterLValueAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addDependenceEdgeForStaticExpression (const class GGS_controlRegisterLValueAST inObject,
                                                           const class GGS_lstring constin_inConstantName,
                                                           class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterLValueAST controlRegisterLValueSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_controlRegisterLValueSemanticAnalysis (const class GGS_controlRegisterLValueAST inObject,
                                                            const class GGS_bool constin_inWriteAccess,
                                                            const class GGS_omnibusType constin_inSelfType,
                                                            const class GGS_routineAttributes constin_inRoutineAttributes,
                                                            const class GGS_semanticContext constin_inContext,
                                                            const class GGS_mode constin_inMode,
                                                            class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                            class GGS_staticEntityMap & io_ioStaticEntityMap,
                                                            class GGS_universalValuedObjectMap & io_ioUniversalMap,
                                                            class GGS_allocaList & io_ioAllocaList,
                                                            class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                            class GGS_omnibusType & out_outRegisterType,
                                                            class GGS_uint & out_outRegisterTypeBitCount,
                                                            class GGS_sliceMap & out_outSliceMap,
                                                            class GGS_string & out_outllvmRegisterAddressName,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleArraySubscriptNew?self?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca????arraySize?elementType&!'
//
//--------------------------------------------------------------------------------------------------

void routine_handleArraySubscriptNew_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__3F__3F__3F_arraySize_3F_elementType_26__21_ (const class GGS_omnibusType constinArgument0,
                                                                                                                                                                                               const class GGS_routineAttributes constinArgument1,
                                                                                                                                                                                               const class GGS_semanticContext constinArgument2,
                                                                                                                                                                                               const class GGS_mode constinArgument3,
                                                                                                                                                                                               class GGS_semanticTemporariesStruct & ioArgument4,
                                                                                                                                                                                               class GGS_staticEntityMap & ioArgument5,
                                                                                                                                                                                               class GGS_universalValuedObjectMap & ioArgument6,
                                                                                                                                                                                               class GGS_allocaList & ioArgument7,
                                                                                                                                                                                               const class GGS_expressionAST constinArgument8,
                                                                                                                                                                                               const class GGS_location constinArgument9,
                                                                                                                                                                                               const class GGS_bool constinArgument10,
                                                                                                                                                                                               const class GGS_bigint constinArgument11,
                                                                                                                                                                                               const class GGS_omnibusType constinArgument12,
                                                                                                                                                                                               class GGS_instructionListIR & ioArgument13,
                                                                                                                                                                                               class GGS_objectIR & outArgument14,
                                                                                                                                                                                               class Compiler * inCompiler
                                                                                                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractRoutineIR svcDeclarationGeneration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_svcDeclarationGeneration (class cPtr_abstractRoutineIR * inObject,
                                                   class GGS_primitiveAndServiceIRlist & io_ioPrimitiveAndServiceList,
                                                   class GGS_sectionIRlist & io_ioSectionList,
                                                   class GGS_generationAdds & io_ioGenerationAdds,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractRoutineIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterAccessibleEntities (class cPtr_abstractRoutineIR * inObject,
                                                  class GGS_stringset & io_ioInvokedRoutineSet,
                                                  class GGS_uint & io_ioMaxBranchOfOnInstructions,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@binaryOperationIR enterCodeForOverflowOperation'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterCodeForOverflowOperation (class cPtr_binaryOperationIR * inObject,
                                                        const class GGS_string constin_inOperation,
                                                        const class GGS_bigint constin_inPanicCode,
                                                        class GGS_string & io_ioLLVMcode,
                                                        const class GGS_generationContext constin_inGenerationContext,
                                                        class GGS_generationAdds & io_ioGenerationAdds,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicRoutineNameForLocationFile'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_panicRoutineNameForLocationFile (const class GGS_location & constinArgument0,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@binaryOperationIR enterCodeForDivisionWithZeroDivisorPanic'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (class cPtr_binaryOperationIR * inObject,
                                                                   const class GGS_string constin_inOperation,
                                                                   const class GGS_bigint constin_inPanicCode,
                                                                   class GGS_string & io_ioLLVMcode,
                                                                   const class GGS_generationContext constin_inGenerationContext,
                                                                   class GGS_generationAdds & io_ioGenerationAdds,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

