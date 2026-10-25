#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//--------------------------------------------------------------------------------------------------
//  GRAMMAR omnibus_target_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_omnibus_5F_target_5F_grammar : public cParser_omnibus_5F_target_5F_specific_5F_syntax {
//------------------------------------- 'configuration_key' non terminal
//--- 'parse' label
 /*  public: virtual void nt_configuration_5F_key_parse (Lexique_omnibus_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_configuration_5F_key_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_configuration_5F_key_ (const GGS_string inArgument0,
                                                 Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'configuration_start_symbol' non terminal
//--- 'parse' label
 /*  public: virtual void nt_configuration_5F_start_5F_symbol_parse (Lexique_omnibus_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_configuration_5F_start_5F_symbol_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_configuration_5F_start_5F_symbol_ (GGS_ast & ioArgument0,
                                                             GGS_lstringlist & outArgument1,
                                                             GGS_location & outArgument2,
                                                             Lexique_omnibus_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS_ast & ioArgument0,
                                                  GGS_lstringlist & outArgument1,
                                                  GGS_location & outArgument2
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS_ast & ioArgument0,
                                                    GGS_lstringlist & outArgument1,
                                                    GGS_location & outArgument2
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (Compiler * inCompiler,
                                       const String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (Compiler * inCompiler,
                                                  const String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (Compiler * inCompiler,
                                                 const String & inSourceFilePath) ;

//------------------------------------- 'interruptConfigList' non terminal
//--- 'parse' label
 /*  public: virtual void nt_interruptConfigList_parse (Lexique_omnibus_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_interruptConfigList_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_interruptConfigList_ (GGS_interruptionConfigurationList & outArgument0,
                                                GGS_enumerationConstantList & outArgument1,
                                                Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'python_utility_tool_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_python_5F_utility_5F_tool_5F_list_parse (Lexique_omnibus_5F_lexique * inCompiler) ; */

//--- indexing
  public: virtual void nt_python_5F_utility_5F_tool_5F_list_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_python_5F_utility_5F_tool_5F_list_ (GGS__32_lstringlist & outArgument0,
                                                              Lexique_omnibus_5F_lexique * inCompiler) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_0 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_1 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_2 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_3 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_4 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_5 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_6 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_7 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_8 (Lexique_omnibus_5F_lexique *) ;
} ;

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
//
//Extension proc '@LValueAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const class GGS_LValueAST inObject,
                                                            class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@LValueAST analyzeLValue'
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
//Extension func '@unifiedTypeMap unsolvedEntryList' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_lstringlist extensionGetter_unsolvedEntryList (const class GGS_unifiedTypeMap & inObject,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@unifiedTypeMapElementClass definition'
//
//--------------------------------------------------------------------------------------------------

class GGS_omnibusType callExtensionGetter_definition (const cPtr_unifiedTypeMapElementClass * inObject,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@abstractRoutineIR svcDeclarationGeneration'
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
//Extension proc '@abstractRoutineIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterAccessibleEntities (class cPtr_abstractRoutineIR * inObject,
                                                  class GGS_stringset & io_ioInvokedRoutineSet,
                                                  class GGS_uint & io_ioMaxBranchOfOnInstructions,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@binaryOperationIR enterCodeForOverflowOperation'
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
//Extension proc '@binaryOperationIR enterCodeForDivisionWithZeroDivisorPanic'
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
//Extension mutating proc '@semanticContext insertGetter'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertGetter (class GGS_semanticContext & ioObject,
                                   const class GGS_lstring constin_inTypeName,
                                   const class GGS_lstring constin_inGetterName,
                                   const class GGS_propertyVisibility constin_inVisibility,
                                   const class GGS_propertyGetterKind constin_inAccess,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@semanticContext addComputedPropertyGetter'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addComputedPropertyGetter (class GGS_semanticContext & ioObject,
                                                const class GGS_lstring constin_inTypeName,
                                                const class GGS_string constin_inLLVMBaseTypeName,
                                                const class GGS_lstring constin_inPropertyName,
                                                const class GGS_mode constin_inMode,
                                                const class GGS_propertyVisibility constin_inVisibility,
                                                const class GGS_unifiedTypeMapEntry constin_inResultTypeProxy,
                                                class GGS_lstring & out_outRoutineLLVMName,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'getterLLVMName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_getterLLVMName (const class GGS_string & constinArgument0,
                                          const class GGS_string & constinArgument1,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@semanticContext insertPropertySetter'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertPropertySetter (class GGS_semanticContext & ioObject,
                                           const class GGS_lstring constin_inTypeName,
                                           const class GGS_lstring constin_inSetterName,
                                           const class GGS_propertyVisibility constin_inVisibility,
                                           const class GGS_propertySetterKind constin_inAccess,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@semanticContext propertySetterMap' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_propertySetterMap extensionGetter_propertySetterMap (const class GGS_semanticContext & inObject,
                                                               const class GGS_omnibusType & constinArgument0,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@staticEntityMap findOrAddStaticString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_findOrAddStaticString (class GGS_staticEntityMap & ioObject,
                                            const class GGS_string constin_inString,
                                            class GGS_uint & out_outIndex,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@semanticContext booleanType' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_omnibusType extensionGetter_booleanType (const class GGS_semanticContext & inObject,
                                                   const class GGS_location & constinArgument0,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'boolTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_boolTypeName (class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@LValueAST analyzeLValueInAssignment'
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
//Extension proc '@typeOpaqueDeclarationAST noteTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (class cPtr_typeOpaqueDeclarationAST * inObject,
                                                     class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

