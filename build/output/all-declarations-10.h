#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//--------------------------------------------------------------------------------------------------
//
//Parser class 'omnibus_target_specific_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_omnibus_5F_target_5F_specific_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_omnibus_5F_target_5F_specific_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_configuration_5F_key_ (const class GGS_string constinArgument0,
                                                    class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_key_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_key_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_start_5F_symbol_ (class GGS_ast & ioArgument0,
                                                                class GGS_lstringlist & outArgument1,
                                                                class GGS_location & outArgument2,
                                                                class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_start_5F_symbol_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_start_5F_symbol_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interruptConfigList_ (class GGS_interruptionConfigurationList & outArgument0,
                                                   class GGS_enumerationConstantList & outArgument1,
                                                   class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interruptConfigList_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interruptConfigList_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_python_5F_utility_5F_tool_5F_list_ (class GGS__32_lstringlist & outArgument0,
                                                                 class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_python_5F_utility_5F_tool_5F_list_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_python_5F_utility_5F_tool_5F_list_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_ (const GGS_string constinArgument0,
                                                                                         Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_ (GGS__32_lstringlist & outArgument0,
                                                                                                      Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_ (GGS_ast & ioArgument0,
                                                                                                     GGS_lstringlist & outArgument1,
                                                                                                     GGS_location & outArgument2,
                                                                                                     Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_ (GGS_interruptionConfigurationList & outArgument0,
                                                                                        GGS_enumerationConstantList & outArgument1,
                                                                                        Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_indexing (Lexique_omnibus_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_0 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_1 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_2 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_3 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_4 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_5 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_6 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_7 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_8 (Lexique_omnibus_5F_lexique *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Function 'isrSlotTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_isrSlotTypeName (class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

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
//Routine 'enterFormalArguments?context?&&?warningOnUnusedArgs'
//
//--------------------------------------------------------------------------------------------------

void routine_enterFormalArguments_3F_context_3F__26__26__3F_warningOnUnusedArgs (const class GGS_semanticContext constinArgument0,
                                                                                 const class GGS_routineFormalArgumentListAST constinArgument1,
                                                                                 class GGS_universalValuedObjectMap & ioArgument2,
                                                                                 class GGS_routineFormalArgumentListIR & ioArgument3,
                                                                                 const class GGS_bool constinArgument4,
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
//Extension getter '@unifiedTypeMap unsolvedEntryList' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_lstringlist extensionGetter_unsolvedEntryList (const class GGS_unifiedTypeMap & inObject,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass definition'
//
//--------------------------------------------------------------------------------------------------

class GGS_omnibusType callExtensionGetter_definition (const cPtr_unifiedTypeMapElementClass * inObject,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueAST analyzeLValueInAssignment'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeLValueInAssignment (const class GGS_LValueAST inObject,
                                                const class GGS_omnibusType constin_inSelfType,
                                                const class GGS_routineAttributes constin_inRoutineAttributes,
                                                const class GGS_semanticContext constin_inContext,
                                                const class GGS_mode constin_inMode,
                                                class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                class GGS_staticEntityMap & io_ioStaticEntityMap,
                                                class GGS_universalValuedObjectMap & io_ioUniversalMap,
                                                class GGS_allocaList & io_ioAllocaList,
                                                class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                class GGS_instructionListListIR & io_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                class GGS_LValueRepresentation & out_outInternalRepresentation,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSelfLValueInAssignment?self?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSelfLValueInAssignment_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__21_ (const class GGS_omnibusType constinArgument0,
                                                                                                                                                                                                                      const class GGS_routineAttributes constinArgument1,
                                                                                                                                                                                                                      const class GGS_semanticContext constinArgument2,
                                                                                                                                                                                                                      const class GGS_mode constinArgument3,
                                                                                                                                                                                                                      class GGS_semanticTemporariesStruct & ioArgument4,
                                                                                                                                                                                                                      class GGS_staticEntityMap & ioArgument5,
                                                                                                                                                                                                                      class GGS_universalValuedObjectMap & ioArgument6,
                                                                                                                                                                                                                      class GGS_allocaList & ioArgument7,
                                                                                                                                                                                                                      class GGS_instructionListIR & ioArgument8,
                                                                                                                                                                                                                      class GGS_instructionListListIR & ioArgument9,
                                                                                                                                                                                                                      const class GGS_LValueOperandAST constinArgument10,
                                                                                                                                                                                                                      class GGS_LValueRepresentation & outArgument11,
                                                                                                                                                                                                                      class Compiler * inCompiler
                                                                                                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeVariableInLValueInAssignment?self?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList?variableName?llvmName?type?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeVariableInLValueInAssignment_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F_variableName_3F_llvmName_3F_type_3F__21_ (const class GGS_omnibusType constinArgument0,
                                                                                                                                                                                                                                                                const class GGS_routineAttributes constinArgument1,
                                                                                                                                                                                                                                                                const class GGS_semanticContext constinArgument2,
                                                                                                                                                                                                                                                                const class GGS_mode constinArgument3,
                                                                                                                                                                                                                                                                class GGS_semanticTemporariesStruct & ioArgument4,
                                                                                                                                                                                                                                                                class GGS_staticEntityMap & ioArgument5,
                                                                                                                                                                                                                                                                class GGS_universalValuedObjectMap & ioArgument6,
                                                                                                                                                                                                                                                                class GGS_allocaList & ioArgument7,
                                                                                                                                                                                                                                                                class GGS_instructionListIR & ioArgument8,
                                                                                                                                                                                                                                                                class GGS_instructionListListIR & ioArgument9,
                                                                                                                                                                                                                                                                const class GGS_lstring constinArgument10,
                                                                                                                                                                                                                                                                const class GGS_string constinArgument11,
                                                                                                                                                                                                                                                                const class GGS_omnibusType constinArgument12,
                                                                                                                                                                                                                                                                const class GGS_LValueOperandAST constinArgument13,
                                                                                                                                                                                                                                                                class GGS_LValueRepresentation & outArgument14,
                                                                                                                                                                                                                                                                class Compiler * inCompiler
                                                                                                                                                                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@compileTimeInfixOperatorUsage eval'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_eval (class cPtr_compileTimeInfixOperatorUsage * inObject,
                               const class GGS_objectIR constin_inLeftOperand,
                               const class GGS_objectIR constin_inRightOperand,
                               class GGS_bigint & out_outResult,
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

