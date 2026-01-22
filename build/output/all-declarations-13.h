#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

//--------------------------------------------------------------------------------------------------
//  GRAMMAR omnibus_target_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_omnibus_5F_target_5F_grammar : public cParser_omnibus_5F_target_5F_specific_5F_syntax {
//------------------------------------- 'configuration_key' non terminal
//--- 'parse' label
  public: virtual void nt_configuration_5F_key_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_configuration_5F_key_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_configuration_5F_key_ (const GGS_string inArgument0,
                                                 Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'configuration_start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_configuration_5F_start_5F_symbol_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

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
  public: virtual void nt_interruptConfigList_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_interruptConfigList_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_interruptConfigList_ (GGS_interruptionConfigurationList & outArgument0,
                                                GGS_enumerationConstantList & outArgument1,
                                                Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'python_utility_tool_list' non terminal
//--- 'parse' label
  public: virtual void nt_python_5F_utility_5F_tool_5F_list_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

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
//Extension method '@externProcedureMapIR.element llvmPrototypeGeneration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_llvmPrototypeGeneration (const class GGS_externProcedureMapIR_2E_element inObject,
                                              class GGS_string & io_ioLLVMcode,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'functionResultVariableName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_functionResultVariableName (class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'voidType'
//
//--------------------------------------------------------------------------------------------------

class GGS_omnibusType function_voidType (class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@globalSyncInstanceMapIR.element generateLLVM'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVM (const class GGS_globalSyncInstanceMapIR_2E_element inObject,
                                   class GGS_string & io_ioLLVMcode,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@structurePropertyListAST.element enterPropertyInContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterPropertyInContext (const class GGS_structurePropertyListAST_2E_element inObject,
                                             class GGS_semanticContext & io_ioContext,
                                             class GGS_staticEntityMap & io_ioStaticEntityMap,
                                             const class GGS_lstring constin_inReceiverTypeName,
                                             const class GGS_lstring constin_inOmnibusTypeSpecificName,
                                             const class GGS_string constin_inReceiverLLVMBaseTypeName,
                                             class GGS_decoratedRegularRoutineList & io_ioDecoratedRoutineList,
                                             class GGS_propertyList & io_ioPropertyList,
                                             class GGS_sortedOperandIRList & io_sortedOperandIRList,
                                             class GGS_constructorSignature & io_constructorSignature,
                                             class GGS_string & io_ioConstructorKey,
                                             class GGS_bool & io_canBeCopied,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'boolType'
//
//--------------------------------------------------------------------------------------------------

class GGS_omnibusType function_boolType (class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'setterLLVMName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_setterLLVMName (const class GGS_string & constinArgument0,
                                          const class GGS_string & constinArgument1,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'println?'
//
//--------------------------------------------------------------------------------------------------

void routine_println_3F_ (const class GGS_string constinArgument0,
                          class Compiler * inCompiler
                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'print?'
//
//--------------------------------------------------------------------------------------------------

void routine_print_3F_ (const class GGS_string constinArgument0,
                        class Compiler * inCompiler
                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'omnibusNameForStaticListType'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_omnibusNameForStaticListType (const class GGS_lstring & constinArgument0,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForStaticListType'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_llvmNameForStaticListType (const class GGS_lstring & constinArgument0,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'omnibusNameForStaticListElementType'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_omnibusNameForStaticListElementType (const class GGS_lstring & constinArgument0,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'checkModeAndReturnsRoutineLLVMName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_checkModeAndReturnsRoutineLLVMName (const class GGS_routineLLVMNameDict & constinArgument0,
                                                              const class GGS_mode & constinArgument1,
                                                              const class GGS_lstring & constinArgument2,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'compileTimeIntegerType'
//
//--------------------------------------------------------------------------------------------------

class GGS_omnibusType function_compileTimeIntegerType (class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'importFilesAndCompile?sourceFilePath'
//
//--------------------------------------------------------------------------------------------------

void routine_importFilesAndCompile_3F_sourceFilePath (const class GGS_lstring constinArgument0,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProject?sourceFile?ast?forTarget?endOfSourceFile?currentDirectory?importedFilePathSet'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProject_3F_sourceFile_3F_ast_3F_forTarget_3F_endOfSourceFile_3F_currentDirectory_3F_importedFilePathSet (const class GGS_lstring constinArgument0,
                                                                                                                             const class GGS_ast constinArgument1,
                                                                                                                             const class GGS_lstring constinArgument2,
                                                                                                                             const class GGS_location constinArgument3,
                                                                                                                             const class GGS_string constinArgument4,
                                                                                                                             const class GGS_stringset constinArgument5,
                                                                                                                             class Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'recursiveImportFiles&ast?currentDirectory?importClauseList&importedFilePathSet'
//
//--------------------------------------------------------------------------------------------------

void routine_recursiveImportFiles_26_ast_3F_currentDirectory_3F_importClauseList_26_importedFilePathSet (class GGS_ast & ioArgument0,
                                                                                                         const class GGS_string constinArgument1,
                                                                                                         const class GGS_lstringlist constinArgument2,
                                                                                                         class GGS_stringset & ioArgument3,
                                                                                                         class Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'addTargetSpecificFiles?forTarget&toAST?currentDirectory&importedFilePathSet'
//
//--------------------------------------------------------------------------------------------------

void routine_addTargetSpecificFiles_3F_forTarget_26_toAST_3F_currentDirectory_26_importedFilePathSet (const class GGS_lstring constinArgument0,
                                                                                                      class GGS_ast & ioArgument1,
                                                                                                      const class GGS_string constinArgument2,
                                                                                                      class GGS_stringset & ioArgument3,
                                                                                                      class Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildOrderedDeclarationList?ast?sourceFile?endOfSourceFile!orderedDeclarationList'
//
//--------------------------------------------------------------------------------------------------

void routine_buildOrderedDeclarationList_3F_ast_3F_sourceFile_3F_endOfSourceFile_21_orderedDeclarationList (const class GGS_ast constinArgument0,
                                                                                                            const class GGS_string constinArgument1,
                                                                                                            const class GGS_location constinArgument2,
                                                                                                            class GGS_declarationListAST & outArgument3,
                                                                                                            class Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildSemanticContext?sourceFile?ast&staticEntityMap&staticlistValues!context!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildSemanticContext_3F_sourceFile_3F_ast_26_staticEntityMap_26_staticlistValues_21_context_21__21__21__21_ (const class GGS_lstring constinArgument0,
                                                                                                                          const class GGS_ast constinArgument1,
                                                                                                                          class GGS_staticEntityMap & ioArgument2,
                                                                                                                          class GGS_staticListInitializationMap & ioArgument3,
                                                                                                                          class GGS_semanticContext & outArgument4,
                                                                                                                          class GGS_declarationDecorationList & outArgument5,
                                                                                                                          class GGS_decoratedRegularRoutineList & outArgument6,
                                                                                                                          class GGS_routineListIR & outArgument7,
                                                                                                                          class GGS_userLLVMTypeDefinitionListIR & outArgument8,
                                                                                                                          class Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'codeGeneration?currentDir?outputFile?eof?intermediateCode?userDefinedTypes?target?panicCodeType?panicLineType?interrupts?staticlistValues?targetParameters'
//
//--------------------------------------------------------------------------------------------------

void routine_codeGeneration_3F_currentDir_3F_outputFile_3F_eof_3F_intermediateCode_3F_userDefinedTypes_3F_target_3F_panicCodeType_3F_panicLineType_3F_interrupts_3F_staticlistValues_3F_targetParameters (const class GGS_string constinArgument0,
                                                                                                                                                                                                          const class GGS_string constinArgument1,
                                                                                                                                                                                                          const class GGS_location constinArgument2,
                                                                                                                                                                                                          const class GGS_intermediateCodeStruct constinArgument3,
                                                                                                                                                                                                          const class GGS_userLLVMTypeDefinitionListIR constinArgument4,
                                                                                                                                                                                                          const class GGS_lstring constinArgument5,
                                                                                                                                                                                                          const class GGS_omnibusType constinArgument6,
                                                                                                                                                                                                          const class GGS_omnibusType constinArgument7,
                                                                                                                                                                                                          const class GGS_availableInterruptMap constinArgument8,
                                                                                                                                                                                                          const class GGS_staticListInitializationMap constinArgument9,
                                                                                                                                                                                                          const class GGS_targetParameters constinArgument10,
                                                                                                                                                                                                          class Compiler * inCompiler
                                                                                                                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'codeOptimization?&intermediateCode'
//
//--------------------------------------------------------------------------------------------------

void routine_codeOptimization_3F__26_intermediateCode (const class GGS_string constinArgument0,
                                                       class GGS_intermediateCodeStruct & ioArgument1,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enter_NOP_function&'
//
//--------------------------------------------------------------------------------------------------

void routine_enter_5F_NOP_5F_function_26_ (class GGS_declarationListAST & ioArgument0,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'retainRequiredDrivers&'
//
//--------------------------------------------------------------------------------------------------

void routine_retainRequiredDrivers_26_ (class GGS_ast & ioArgument0,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysis?sourceFile?ast?allSourceFilePaths?decoratedDeclarationList?decoratedRoutineList?routineListIR?context?endOfSourceFile?staticEntityMap!intermediateCode'
//
//--------------------------------------------------------------------------------------------------

void routine_semanticAnalysis_3F_sourceFile_3F_ast_3F_allSourceFilePaths_3F_decoratedDeclarationList_3F_decoratedRoutineList_3F_routineListIR_3F_context_3F_endOfSourceFile_3F_staticEntityMap_21_intermediateCode (const class GGS_string constinArgument0,
                                                                                                                                                                                                                    const class GGS_ast constinArgument1,
                                                                                                                                                                                                                    const class GGS_stringset constinArgument2,
                                                                                                                                                                                                                    const class GGS_declarationDecorationList constinArgument3,
                                                                                                                                                                                                                    const class GGS_decoratedRegularRoutineList constinArgument4,
                                                                                                                                                                                                                    const class GGS_routineListIR constinArgument5,
                                                                                                                                                                                                                    const class GGS_semanticContext constinArgument6,
                                                                                                                                                                                                                    const class GGS_location constinArgument7,
                                                                                                                                                                                                                    const class GGS_staticEntityMap constinArgument8,
                                                                                                                                                                                                                    class GGS_intermediateCodeStruct & outArgument9,
                                                                                                                                                                                                                    class Compiler * inCompiler
                                                                                                                                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'targetTemplates'
//
//--------------------------------------------------------------------------------------------------

extern const char * gWrapperFileContent_4_targetTemplates ;
extern const char * gWrapperFileContent_5_targetTemplates ;
extern const char * gWrapperFileContent_3_targetTemplates ;
extern const char * gWrapperFileContent_10_targetTemplates ;
extern const char * gWrapperFileContent_11_targetTemplates ;
extern const char * gWrapperFileContent_24_targetTemplates ;
extern const char * gWrapperFileContent_31_targetTemplates ;
extern const char * gWrapperFileContent_9_targetTemplates ;
extern const char * gWrapperFileContent_20_targetTemplates ;
extern const char * gWrapperFileContent_21_targetTemplates ;
extern const char * gWrapperFileContent_16_targetTemplates ;
extern const char * gWrapperFileContent_17_targetTemplates ;
extern const char * gWrapperFileContent_8_targetTemplates ;
extern const char * gWrapperFileContent_7_targetTemplates ;
extern const char * gWrapperFileContent_26_targetTemplates ;
extern const char * gWrapperFileContent_6_targetTemplates ;
extern const char * gWrapperFileContent_15_targetTemplates ;
extern const char * gWrapperFileContent_2_targetTemplates ;
extern const char * gWrapperFileContent_25_targetTemplates ;
extern const char * gWrapperFileContent_23_targetTemplates ;
extern const char * gWrapperFileContent_0_targetTemplates ;
extern const char * gWrapperFileContent_1_targetTemplates ;
extern const char * gWrapperFileContent_13_targetTemplates ;
extern const char * gWrapperFileContent_32_targetTemplates ;
extern const char * gWrapperFileContent_33_targetTemplates ;
extern const char * gWrapperFileContent_18_targetTemplates ;
extern const char * gWrapperFileContent_28_targetTemplates ;
extern const char * gWrapperFileContent_22_targetTemplates ;
extern const char * gWrapperFileContent_30_targetTemplates ;
extern const char * gWrapperFileContent_29_targetTemplates ;
extern const char * gWrapperFileContent_19_targetTemplates ;
extern const char * gWrapperFileContent_27_targetTemplates ;
extern const char * gWrapperFileContent_14_targetTemplates ;
extern const char * gWrapperFileContent_12_targetTemplates ;
extern const char * gWrapperFileContent_43_targetTemplates ;
extern const char * gWrapperFileContent_54_targetTemplates ;
extern const char * gWrapperFileContent_55_targetTemplates ;
extern const char * gWrapperFileContent_57_targetTemplates ;
extern const char * gWrapperFileContent_48_targetTemplates ;
extern const char * gWrapperFileContent_56_targetTemplates ;
extern const char * gWrapperFileContent_44_targetTemplates ;
extern const char * gWrapperFileContent_40_targetTemplates ;
extern const char * gWrapperFileContent_51_targetTemplates ;
extern const char * gWrapperFileContent_36_targetTemplates ;
extern const char * gWrapperFileContent_39_targetTemplates ;
extern const char * gWrapperFileContent_53_targetTemplates ;
extern const char * gWrapperFileContent_50_targetTemplates ;
extern const char * gWrapperFileContent_35_targetTemplates ;
extern const char * gWrapperFileContent_42_targetTemplates ;
extern const char * gWrapperFileContent_49_targetTemplates ;
extern const char * gWrapperFileContent_46_targetTemplates ;
extern const char * gWrapperFileContent_47_targetTemplates ;
extern const char * gWrapperFileContent_45_targetTemplates ;
extern const char * gWrapperFileContent_34_targetTemplates ;
extern const char * gWrapperFileContent_38_targetTemplates ;
extern const char * gWrapperFileContent_37_targetTemplates ;
extern const char * gWrapperFileContent_52_targetTemplates ;
extern const char * gWrapperFileContent_41_targetTemplates ;
extern const char * gWrapperFileContent_73_targetTemplates ;
extern const char * gWrapperFileContent_61_targetTemplates ;
extern const char * gWrapperFileContent_62_targetTemplates ;
extern const char * gWrapperFileContent_63_targetTemplates ;
extern const char * gWrapperFileContent_64_targetTemplates ;
extern const char * gWrapperFileContent_68_targetTemplates ;
extern const char * gWrapperFileContent_66_targetTemplates ;
extern const char * gWrapperFileContent_58_targetTemplates ;
extern const char * gWrapperFileContent_69_targetTemplates ;
extern const char * gWrapperFileContent_71_targetTemplates ;
extern const char * gWrapperFileContent_74_targetTemplates ;
extern const char * gWrapperFileContent_72_targetTemplates ;
extern const char * gWrapperFileContent_59_targetTemplates ;
extern const char * gWrapperFileContent_65_targetTemplates ;
extern const char * gWrapperFileContent_70_targetTemplates ;
extern const char * gWrapperFileContent_67_targetTemplates ;
extern const char * gWrapperFileContent_60_targetTemplates ;
extern const char * gWrapperFileContent_82_targetTemplates ;
extern const char * gWrapperFileContent_79_targetTemplates ;
extern const char * gWrapperFileContent_83_targetTemplates ;
extern const char * gWrapperFileContent_87_targetTemplates ;
extern const char * gWrapperFileContent_76_targetTemplates ;
extern const char * gWrapperFileContent_81_targetTemplates ;
extern const char * gWrapperFileContent_86_targetTemplates ;
extern const char * gWrapperFileContent_85_targetTemplates ;
extern const char * gWrapperFileContent_84_targetTemplates ;
extern const char * gWrapperFileContent_75_targetTemplates ;
extern const char * gWrapperFileContent_80_targetTemplates ;
extern const char * gWrapperFileContent_78_targetTemplates ;
extern const char * gWrapperFileContent_77_targetTemplates ;
extern const char * gWrapperFileContent_95_targetTemplates ;
extern const char * gWrapperFileContent_98_targetTemplates ;
extern const char * gWrapperFileContent_96_targetTemplates ;
extern const char * gWrapperFileContent_105_targetTemplates ;
extern const char * gWrapperFileContent_107_targetTemplates ;
extern const char * gWrapperFileContent_112_targetTemplates ;
extern const char * gWrapperFileContent_111_targetTemplates ;
extern const char * gWrapperFileContent_90_targetTemplates ;
extern const char * gWrapperFileContent_114_targetTemplates ;
extern const char * gWrapperFileContent_117_targetTemplates ;
extern const char * gWrapperFileContent_116_targetTemplates ;
extern const char * gWrapperFileContent_115_targetTemplates ;
extern const char * gWrapperFileContent_93_targetTemplates ;
extern const char * gWrapperFileContent_102_targetTemplates ;
extern const char * gWrapperFileContent_94_targetTemplates ;
extern const char * gWrapperFileContent_109_targetTemplates ;
extern const char * gWrapperFileContent_89_targetTemplates ;
extern const char * gWrapperFileContent_99_targetTemplates ;
extern const char * gWrapperFileContent_108_targetTemplates ;
extern const char * gWrapperFileContent_104_targetTemplates ;
extern const char * gWrapperFileContent_110_targetTemplates ;
extern const char * gWrapperFileContent_101_targetTemplates ;
extern const char * gWrapperFileContent_106_targetTemplates ;
extern const char * gWrapperFileContent_113_targetTemplates ;
extern const char * gWrapperFileContent_100_targetTemplates ;
extern const char * gWrapperFileContent_103_targetTemplates ;
extern const char * gWrapperFileContent_88_targetTemplates ;
extern const char * gWrapperFileContent_97_targetTemplates ;
extern const char * gWrapperFileContent_92_targetTemplates ;
extern const char * gWrapperFileContent_91_targetTemplates ;
extern const char * gWrapperFileContent_118_targetTemplates ;
extern const char * gWrapperFileContent_119_targetTemplates ;

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cRegularFileWrapper gWrapperFile_0_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_1_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_2_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_3_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_4_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_5_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_6_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_7_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_8_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_9_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_10_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_11_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_12_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_13_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_14_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_15_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_16_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_17_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_18_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_19_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_20_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_21_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_22_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_23_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_24_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_25_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_26_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_27_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_28_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_29_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_30_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_31_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_32_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_33_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_34_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_35_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_36_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_37_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_38_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_39_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_40_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_41_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_42_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_43_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_44_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_45_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_46_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_47_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_48_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_49_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_50_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_51_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_52_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_53_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_54_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_55_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_56_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_57_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_58_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_59_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_60_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_61_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_62_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_63_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_64_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_65_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_66_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_67_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_68_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_69_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_70_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_71_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_72_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_73_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_74_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_75_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_76_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_77_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_78_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_79_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_80_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_81_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_82_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_83_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_84_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_85_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_86_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_87_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_88_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_89_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_90_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_91_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_92_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_93_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_94_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_95_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_96_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_97_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_98_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_99_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_100_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_101_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_102_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_103_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_104_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_105_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_106_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_107_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_108_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_109_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_110_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_111_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_112_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_113_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_114_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_115_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_116_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_117_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_118_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_119_targetTemplates ;

//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_targetTemplates ;
extern const cDirectoryWrapper gWrapperDirectory_1_targetTemplates ;
extern const cDirectoryWrapper gWrapperDirectory_2_targetTemplates ;
extern const cDirectoryWrapper gWrapperDirectory_3_targetTemplates ;
extern const cDirectoryWrapper gWrapperDirectory_4_targetTemplates ;
extern const cDirectoryWrapper gWrapperDirectory_5_targetTemplates ;
extern const cDirectoryWrapper gWrapperDirectory_6_targetTemplates ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'recursiveImportEmbeddedTargetFiles&ast?currentDirectory?importClauseList&importedFilePathSet'
//
//--------------------------------------------------------------------------------------------------

void routine_recursiveImportEmbeddedTargetFiles_26_ast_3F_currentDirectory_3F_importClauseList_26_importedFilePathSet (class GGS_ast & ioArgument0,
                                                                                                                       const class GGS_string constinArgument1,
                                                                                                                       const class GGS_lstringlist constinArgument2,
                                                                                                                       class GGS_stringset & ioArgument3,
                                                                                                                       class Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'recursiveImportFileSystemTargetFiles&ast?targetDirectory?importClauseList&importedFilePathSet'
//
//--------------------------------------------------------------------------------------------------

void routine_recursiveImportFileSystemTargetFiles_26_ast_3F_targetDirectory_3F_importClauseList_26_importedFilePathSet (class GGS_ast & ioArgument0,
                                                                                                                        const class GGS_string constinArgument1,
                                                                                                                        const class GGS_lstringlist constinArgument2,
                                                                                                                        class GGS_stringset & ioArgument3,
                                                                                                                        class Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'configurationNodeNameForPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_configurationNodeNameForPrecedenceGraph (class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'assignmentOperatorFuncName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_assignmentOperatorFuncName (const class GGS_omnibusType & constinArgument0,
                                                      const class GGS_omnibusType & constinArgument1,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'ctBoolTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_ctBoolTypeName (class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'compileTimeBoolType'
//
//--------------------------------------------------------------------------------------------------

class GGS_omnibusType function_compileTimeBoolType (class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'staticStringTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_staticStringTypeName (class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'ctIntegerTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_ctIntegerTypeName (class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildTypeMapHTMLFile??????sourceFile'
//
//--------------------------------------------------------------------------------------------------

void routine_buildTypeMapHTMLFile_3F__3F__3F__3F__3F__3F_sourceFile (const class GGS_unifiedTypeMap constinArgument0,
                                                                     const class GGS_routineMapForContext constinArgument1,
                                                                     const class GGS_infixOperatorMap constinArgument2,
                                                                     const class GGS_prefixOperatorMap constinArgument3,
                                                                     const class GGS_assignmentOperatorMap constinArgument4,
                                                                     const class GGS_lstring constinArgument5,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'typeDumpGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_typeDumpGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeDumpGenerationTemplate dump'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeDumpGenerationTemplate_dump (class Compiler * inCompiler,
                                                                const class GGS_string & in_PROJECT_5F_NAME,
                                                                const class GGS_unifiedTypeMap & in_GLOBAL_5F_TYPE_5F_MAP,
                                                                const class GGS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                const class GGS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING,
                                                                const class GGS_routineMapForContext & in_ALL_5F_ROUTINE_5F_MAP,
                                                                const class GGS_infixOperatorMap & in_INFIX_5F_OPERATOR_5F_MAP,
                                                                const class GGS_prefixOperatorMap & in_PREFIX_5F_OPERATOR_5F_MAP,
                                                                const class GGS_assignmentOperatorMap & in_ASSIGNMENT_5F_OPERATOR_5F_MAP
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'linkForHTMLTypeMap'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_linkForHTMLTypeMap (const class GGS_string & constinArgument0,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'declareLLVMTypes?&'
//
//--------------------------------------------------------------------------------------------------

void routine_declareLLVMTypes_3F__26_ (const class GGS_userLLVMTypeDefinitionListIR constinArgument0,
                                       class GGS_string & ioArgument1,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'routineMangledNameFromCall'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_routineMangledNameFromCall (const class GGS_string & constinArgument0,
                                                       const class GGS_lstring & constinArgument1,
                                                       const class GGS_effectiveArgumentListAST & constinArgument2,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeEffectiveParameters?self?routineAttributes?formal?effective?errorLocation?context?requiredMode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&effectiveIR'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (const class GGS_omnibusType constinArgument0,
                                                                                                                                                                                                                                      const class GGS_routineAttributes constinArgument1,
                                                                                                                                                                                                                                      const class GGS_routineTypedSignature constinArgument2,
                                                                                                                                                                                                                                      const class GGS_effectiveArgumentListAST constinArgument3,
                                                                                                                                                                                                                                      const class GGS_location constinArgument4,
                                                                                                                                                                                                                                      const class GGS_semanticContext constinArgument5,
                                                                                                                                                                                                                                      const class GGS_mode constinArgument6,
                                                                                                                                                                                                                                      class GGS_semanticTemporariesStruct & ioArgument7,
                                                                                                                                                                                                                                      class GGS_staticEntityMap & ioArgument8,
                                                                                                                                                                                                                                      class GGS_universalValuedObjectMap & ioArgument9,
                                                                                                                                                                                                                                      class GGS_allocaList & ioArgument10,
                                                                                                                                                                                                                                      class GGS_instructionListIR & ioArgument11,
                                                                                                                                                                                                                                      class GGS_procCallEffectiveParameterListIR & ioArgument12,
                                                                                                                                                                                                                                      class Compiler * inCompiler
                                                                                                                                                                                                                                      COMMA_LOCATION_ARGS) ;

