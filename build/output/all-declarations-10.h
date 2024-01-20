#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueAST analyzeLValue'
//
//--------------------------------------------------------------------------------------------------

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
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'mutatingAttribute'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_mutatingAttribute (class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSelfLValue?self?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSelfLValue_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__21_ (const class GALGAS_omnibusType constinArgument0,
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
                                                                                                                                                                      class Compiler * inCompiler
                                                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeVariableInLValue?self?readAccess?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR?variableName?llvmName?type?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeVariableInLValue_3F_self_3F_readAccess_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F_variableName_3F_llvmName_3F_type_3F__21_ (const class GALGAS_omnibusType constinArgument0,
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
                                                                                                                                                                                                                              class Compiler * inCompiler
                                                                                                                                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterLValueAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteExpressionTypesInPrecedenceGraph (const class GALGAS_controlRegisterLValueAST inObject,
                                                           class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterLValueAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addDependenceEdgeForStaticExpression (const class GALGAS_controlRegisterLValueAST inObject,
                                                           const class GALGAS_lstring constin_inConstantName,
                                                           class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterLValueAST controlRegisterLValueSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

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
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleArraySubscriptNew?self?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca????arraySize?elementType&!'
//
//--------------------------------------------------------------------------------------------------

void routine_handleArraySubscriptNew_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__3F__3F__3F_arraySize_3F_elementType_26__21_ (const class GALGAS_omnibusType constinArgument0,
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
                                                                                                                                                                                               class Compiler * inCompiler
                                                                                                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractRoutineIR svcDeclarationGeneration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_svcDeclarationGeneration (class cPtr_abstractRoutineIR * inObject,
                                                   class GALGAS_primitiveAndServiceIRlist & io_ioPrimitiveAndServiceList,
                                                   class GALGAS_sectionIRlist & io_ioSectionList,
                                                   class GALGAS_generationAdds & io_ioGenerationAdds,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractRoutineIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterAccessibleEntities (class cPtr_abstractRoutineIR * inObject,
                                                  class GALGAS_stringset & io_ioInvokedRoutineSet,
                                                  class GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@binaryOperationIR enterCodeForOverflowOperation'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterCodeForOverflowOperation (class cPtr_binaryOperationIR * inObject,
                                                        const class GALGAS_string constin_inOperation,
                                                        const class GALGAS_bigint constin_inPanicCode,
                                                        class GALGAS_string & io_ioLLVMcode,
                                                        const class GALGAS_generationContext constin_inGenerationContext,
                                                        class GALGAS_generationAdds & io_ioGenerationAdds,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicRoutineNameForLocationFile'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_panicRoutineNameForLocationFile (const class GALGAS_location & constinArgument0,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@binaryOperationIR enterCodeForDivisionWithZeroDivisorPanic'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (class cPtr_binaryOperationIR * inObject,
                                                                   const class GALGAS_string constin_inOperation,
                                                                   const class GALGAS_bigint constin_inPanicCode,
                                                                   class GALGAS_string & io_ioLLVMcode,
                                                                   const class GALGAS_generationContext constin_inGenerationContext,
                                                                   class GALGAS_generationAdds & io_ioGenerationAdds,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@semanticContext insertGetter'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertGetter (class GALGAS_semanticContext & ioObject,
                                   const class GALGAS_lstring constin_inTypeName,
                                   const class GALGAS_lstring constin_inGetterName,
                                   const class GALGAS_propertyVisibility constin_inVisibility,
                                   const class GALGAS_propertyGetterKind constin_inAccess,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@semanticContext addComputedPropertyGetter'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addComputedPropertyGetter (class GALGAS_semanticContext & ioObject,
                                                const class GALGAS_lstring constin_inTypeName,
                                                const class GALGAS_string constin_inLLVMBaseTypeName,
                                                const class GALGAS_lstring constin_inPropertyName,
                                                const class GALGAS_mode constin_inMode,
                                                const class GALGAS_propertyVisibility constin_inVisibility,
                                                const class GALGAS_unifiedTypeMapEntry constin_inResultTypeProxy,
                                                class GALGAS_lstring & out_outRoutineLLVMName,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'getterLLVMName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_getterLLVMName (class GALGAS_string inArgument0,
                                             const class GALGAS_string & constinArgument1,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@semanticContext insertPropertySetter'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertPropertySetter (class GALGAS_semanticContext & ioObject,
                                           const class GALGAS_lstring constin_inTypeName,
                                           const class GALGAS_lstring constin_inSetterName,
                                           const class GALGAS_propertyVisibility constin_inVisibility,
                                           const class GALGAS_propertySetterKind constin_inAccess,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticContext propertySetterMap' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_propertySetterMap extensionGetter_propertySetterMap (const class GALGAS_semanticContext & inObject,
                                                                  const class GALGAS_omnibusType & constinArgument0,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticContext booleanType' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_omnibusType extensionGetter_booleanType (const class GALGAS_semanticContext & inObject,
                                                      const class GALGAS_location & constinArgument0,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'boolTypeName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_boolTypeName (class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@structurePropertyListAST-element enterPropertyInContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterPropertyInContext (const class GALGAS_structurePropertyListAST_2D_element inObject,
                                             class GALGAS_semanticContext & io_ioContext,
                                             class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                             const class GALGAS_lstring constin_inReceiverTypeName,
                                             const class GALGAS_lstring constin_inOmnibusTypeSpecificName,
                                             const class GALGAS_string constin_inReceiverLLVMBaseTypeName,
                                             class GALGAS_decoratedRegularRoutineList & io_ioDecoratedRoutineList,
                                             class GALGAS_propertyList & io_ioPropertyList,
                                             class GALGAS_sortedOperandIRList & io_sortedOperandIRList,
                                             class GALGAS_constructorSignature & io_constructorSignature,
                                             class GALGAS_string & io_ioConstructorKey,
                                             class GALGAS_bool & io_canBeCopied,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'boolType'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_omnibusType function_boolType (class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'setterLLVMName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_setterLLVMName (class GALGAS_string inArgument0,
                                             const class GALGAS_string & constinArgument1,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'voidType'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_omnibusType function_voidType (class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'computeStaticExpression&context&staticEntityMap?expression?errorLocation?optionalContextualTypeName!result'
//
//--------------------------------------------------------------------------------------------------

void routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (class GALGAS_semanticContext & ioArgument0,
                                                                                                                                           class GALGAS_staticEntityMap & ioArgument1,
                                                                                                                                           const class GALGAS_expressionAST constinArgument2,
                                                                                                                                           const class GALGAS_location constinArgument3,
                                                                                                                                           const class GALGAS_lstring constinArgument4,
                                                                                                                                           class GALGAS_objectIR & outArgument5,
                                                                                                                                           class Compiler * inCompiler
                                                                                                                                           COMMA_LOCATION_ARGS) ;

