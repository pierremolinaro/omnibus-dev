#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-10.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'buildOrderedDeclarationList'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildOrderedDeclarationList (const class GALGAS_ast constinArgument0,
                                          const class GALGAS_string constinArgument1,
                                          const class GALGAS_location constinArgument2,
                                          class GALGAS_declarationListAST & outArgument3,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'buildSemanticContext'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildSemanticContext (const class GALGAS_lstring constinArgument0,
                                   const class GALGAS_ast constinArgument1,
                                   class GALGAS_staticEntityMap & ioArgument2,
                                   class GALGAS_staticListInitializationMap & ioArgument3,
                                   class GALGAS_semanticContext & outArgument4,
                                   class GALGAS_subprogramInvocationGraph & outArgument5,
                                   class GALGAS_declarationDecorationList & outArgument6,
                                   class GALGAS_globalVariableIRList & outArgument7,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'buildTypeMapHTMLFile'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildTypeMapHTMLFile (class GALGAS_unifiedTypeMap inArgument0,
                                   const class GALGAS_lstring constinArgument1,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Filewrapper 'typeDumpGenerationTemplate'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const cDirectoryWrapper gWrapperDirectory_0_typeDumpGenerationTemplate ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Filewrapper template 'typeDumpGenerationTemplate dump'                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_typeDumpGenerationTemplate_dump (class C_Compiler * inCompiler,
                                                                   const class GALGAS_string & in_PROJECT_5F_NAME,
                                                                   const class GALGAS_unifiedTypeMap & in_GLOBAL_5F_TYPE_5F_MAP,
                                                                   const class GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                   const class GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                   COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'linkForHTMLTypeMap'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string function_linkForHTMLTypeMap (const class GALGAS_string & constinArgument0,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'declareLLVMTypes'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_declareLLVMTypes (const class GALGAS_unifiedTypeMap constinArgument0,
                               const class GALGAS_uint constinArgument1,
                               class GALGAS_generationAdds & ioArgument2,
                               class GALGAS_string & ioArgument3,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'semanticAnalysis'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_semanticAnalysis (const class GALGAS_string constinArgument0,
                               const class GALGAS_ast constinArgument1,
                               const class GALGAS_declarationDecorationList constinArgument2,
                               const class GALGAS_semanticContext constinArgument3,
                               class GALGAS_subprogramInvocationGraph inArgument4,
                               const class GALGAS_location constinArgument5,
                               const class GALGAS_staticEntityMap constinArgument6,
                               class GALGAS_intermediateCodeStruct & outArgument7,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Function 'llvmDriverStringFromName'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string function_llvmDriverStringFromName (const class GALGAS_string & constinArgument0,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Function 'llvmNameForPrimitiveCall'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string function_llvmNameForPrimitiveCall (const class GALGAS_string & constinArgument0,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Function 'memoryAllocSectionName'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string function_memoryAllocSectionName (class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Function 'memoryFreeSectionName'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string function_memoryFreeSectionName (class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'codeOptimisation'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_codeOptimisation (class GALGAS_intermediateCodeStruct & ioArgument0,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'suppressInaccessibleSubprograms'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_suppressInaccessibleSubprograms (class GALGAS_intermediateCodeStruct & ioArgument0,
                                              class GALGAS_accessibleEntities & outArgument1,
                                              class GALGAS_bool & ioArgument2,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               Routine 'exploreGuards'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_exploreGuards (class GALGAS_guardMapIR & ioArgument0,
                            class GALGAS_accessibleEntities & ioArgument1,
                            class GALGAS_guardMapIR & ioArgument2,
                            class GALGAS_bool & ioArgument3,
                            class GALGAS_uint & ioArgument4,
                            class C_Compiler * inCompiler
                            COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               Routine 'exploreProcs'                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_exploreProcs (class GALGAS_routineMapIR & ioArgument0,
                           class GALGAS_accessibleEntities & ioArgument1,
                           class GALGAS_routineMapIR & ioArgument2,
                           class GALGAS_bool & ioArgument3,
                           class GALGAS_uint & ioArgument4,
                           class C_Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Function 'asSeparatorLine'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string function_asSeparatorLine (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Function 'asTitleComment'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string function_asTitleComment (const class GALGAS_string & constinArgument0,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Routine 'codeGeneration'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_codeGeneration (const class GALGAS_string constinArgument0,
                             const class GALGAS_string constinArgument1,
                             const class GALGAS_location constinArgument2,
                             const class GALGAS_intermediateCodeStruct constinArgument3,
                             const class GALGAS_unifiedTypeMap constinArgument4,
                             const class GALGAS_lstring constinArgument5,
                             const class GALGAS_unifiedTypeMap_2D_proxy constinArgument6,
                             const class GALGAS_unifiedTypeMap_2D_proxy constinArgument7,
                             const class GALGAS_availableInterruptMap constinArgument8,
                             const class GALGAS_staticListInitializationMap constinArgument9,
                             const class GALGAS_stringset constinArgument10,
                             const class GALGAS_targetParameters constinArgument11,
                             const class GALGAS_globalVariableIRList constinArgument12,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'generateCodeFiles'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateCodeFiles (const class GALGAS_string constinArgument0,
                                const class GALGAS_string constinArgument1,
                                const class GALGAS_location constinArgument2,
                                const class GALGAS_intermediateCodeStruct constinArgument3,
                                const class GALGAS_unifiedTypeMap constinArgument4,
                                const class GALGAS_lstring constinArgument5,
                                const class GALGAS_unifiedTypeMap_2D_proxy constinArgument6,
                                const class GALGAS_unifiedTypeMap_2D_proxy constinArgument7,
                                const class GALGAS_availableInterruptMap constinArgument8,
                                const class GALGAS_staticListInitializationMap constinArgument9,
                                const class GALGAS_stringset constinArgument10,
                                const class GALGAS_targetParameters constinArgument11,
                                const class GALGAS_globalVariableIRList constinArgument12,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Routine 'generateTarget'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateTarget (const class GALGAS_string constinArgument0,
                             const class GALGAS_string constinArgument1,
                             const class GALGAS_lstring constinArgument2,
                             const class GALGAS_targetParameters constinArgument3,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Filewrapper 'targetTemplates'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * gWrapperFileContent_0_targetTemplates ;
extern const char * gWrapperFileContent_1_targetTemplates ;
extern const char * gWrapperFileContent_2_targetTemplates ;
extern const char * gWrapperFileContent_3_targetTemplates ;
extern const char * gWrapperFileContent_4_targetTemplates ;
extern const char * gWrapperFileContent_5_targetTemplates ;
extern const char * gWrapperFileContent_6_targetTemplates ;
extern const char * gWrapperFileContent_7_targetTemplates ;
extern const char * gWrapperFileContent_8_targetTemplates ;
extern const char * gWrapperFileContent_9_targetTemplates ;
extern const char * gWrapperFileContent_10_targetTemplates ;
extern const char * gWrapperFileContent_11_targetTemplates ;
extern const char * gWrapperFileContent_12_targetTemplates ;
extern const char * gWrapperFileContent_13_targetTemplates ;
extern const char * gWrapperFileContent_14_targetTemplates ;
extern const char * gWrapperFileContent_15_targetTemplates ;
extern const char * gWrapperFileContent_16_targetTemplates ;
extern const char * gWrapperFileContent_17_targetTemplates ;
extern const char * gWrapperFileContent_18_targetTemplates ;
extern const char * gWrapperFileContent_19_targetTemplates ;
extern const char * gWrapperFileContent_20_targetTemplates ;
extern const char * gWrapperFileContent_21_targetTemplates ;
extern const char * gWrapperFileContent_22_targetTemplates ;
extern const char * gWrapperFileContent_23_targetTemplates ;
extern const char * gWrapperFileContent_24_targetTemplates ;
extern const char * gWrapperFileContent_25_targetTemplates ;
extern const char * gWrapperFileContent_26_targetTemplates ;
extern const char * gWrapperFileContent_27_targetTemplates ;
extern const char * gWrapperFileContent_28_targetTemplates ;
extern const char * gWrapperFileContent_29_targetTemplates ;
extern const char * gWrapperFileContent_30_targetTemplates ;
extern const char * gWrapperFileContent_31_targetTemplates ;
extern const char * gWrapperFileContent_32_targetTemplates ;
extern const char * gWrapperFileContent_33_targetTemplates ;
extern const char * gWrapperFileContent_34_targetTemplates ;
extern const char * gWrapperFileContent_35_targetTemplates ;
extern const char * gWrapperFileContent_36_targetTemplates ;
extern const char * gWrapperFileContent_37_targetTemplates ;
extern const char * gWrapperFileContent_38_targetTemplates ;
extern const char * gWrapperFileContent_39_targetTemplates ;
extern const char * gWrapperFileContent_40_targetTemplates ;
extern const char * gWrapperFileContent_41_targetTemplates ;
extern const char * gWrapperFileContent_42_targetTemplates ;
extern const char * gWrapperFileContent_43_targetTemplates ;
extern const char * gWrapperFileContent_44_targetTemplates ;
extern const char * gWrapperFileContent_45_targetTemplates ;
extern const char * gWrapperFileContent_46_targetTemplates ;
extern const char * gWrapperFileContent_47_targetTemplates ;
extern const char * gWrapperFileContent_48_targetTemplates ;
extern const char * gWrapperFileContent_49_targetTemplates ;
extern const char * gWrapperFileContent_50_targetTemplates ;
extern const char * gWrapperFileContent_51_targetTemplates ;
extern const char * gWrapperFileContent_52_targetTemplates ;
extern const char * gWrapperFileContent_53_targetTemplates ;
extern const char * gWrapperFileContent_54_targetTemplates ;
extern const char * gWrapperFileContent_55_targetTemplates ;
extern const char * gWrapperFileContent_56_targetTemplates ;
extern const char * gWrapperFileContent_57_targetTemplates ;
extern const char * gWrapperFileContent_58_targetTemplates ;
extern const char * gWrapperFileContent_59_targetTemplates ;
extern const char * gWrapperFileContent_60_targetTemplates ;
extern const char * gWrapperFileContent_61_targetTemplates ;
extern const char * gWrapperFileContent_62_targetTemplates ;
extern const char * gWrapperFileContent_63_targetTemplates ;
extern const char * gWrapperFileContent_64_targetTemplates ;
extern const char * gWrapperFileContent_65_targetTemplates ;
extern const char * gWrapperFileContent_66_targetTemplates ;
extern const char * gWrapperFileContent_67_targetTemplates ;
extern const char * gWrapperFileContent_68_targetTemplates ;
extern const char * gWrapperFileContent_69_targetTemplates ;
extern const char * gWrapperFileContent_70_targetTemplates ;
extern const char * gWrapperFileContent_71_targetTemplates ;
extern const char * gWrapperFileContent_72_targetTemplates ;
extern const char * gWrapperFileContent_73_targetTemplates ;
extern const char * gWrapperFileContent_74_targetTemplates ;
extern const char * gWrapperFileContent_75_targetTemplates ;
extern const char * gWrapperFileContent_76_targetTemplates ;
extern const char * gWrapperFileContent_77_targetTemplates ;
extern const char * gWrapperFileContent_78_targetTemplates ;
extern const char * gWrapperFileContent_79_targetTemplates ;
extern const char * gWrapperFileContent_80_targetTemplates ;
extern const char * gWrapperFileContent_81_targetTemplates ;
extern const char * gWrapperFileContent_82_targetTemplates ;
extern const char * gWrapperFileContent_83_targetTemplates ;
extern const char * gWrapperFileContent_84_targetTemplates ;
extern const char * gWrapperFileContent_85_targetTemplates ;
extern const char * gWrapperFileContent_86_targetTemplates ;
extern const char * gWrapperFileContent_87_targetTemplates ;
extern const char * gWrapperFileContent_88_targetTemplates ;
extern const char * gWrapperFileContent_89_targetTemplates ;
extern const char * gWrapperFileContent_90_targetTemplates ;
extern const char * gWrapperFileContent_91_targetTemplates ;
extern const char * gWrapperFileContent_92_targetTemplates ;
extern const char * gWrapperFileContent_93_targetTemplates ;
extern const char * gWrapperFileContent_94_targetTemplates ;
extern const char * gWrapperFileContent_95_targetTemplates ;
extern const char * gWrapperFileContent_96_targetTemplates ;
extern const char * gWrapperFileContent_97_targetTemplates ;
extern const char * gWrapperFileContent_98_targetTemplates ;
extern const char * gWrapperFileContent_99_targetTemplates ;
extern const char * gWrapperFileContent_100_targetTemplates ;
extern const char * gWrapperFileContent_101_targetTemplates ;
extern const char * gWrapperFileContent_102_targetTemplates ;
extern const char * gWrapperFileContent_103_targetTemplates ;
extern const char * gWrapperFileContent_104_targetTemplates ;
extern const char * gWrapperFileContent_105_targetTemplates ;
extern const char * gWrapperFileContent_106_targetTemplates ;
extern const char * gWrapperFileContent_107_targetTemplates ;
extern const char * gWrapperFileContent_108_targetTemplates ;
extern const char * gWrapperFileContent_109_targetTemplates ;
extern const char * gWrapperFileContent_110_targetTemplates ;
extern const char * gWrapperFileContent_111_targetTemplates ;
extern const char * gWrapperFileContent_112_targetTemplates ;
extern const char * gWrapperFileContent_113_targetTemplates ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const cDirectoryWrapper gWrapperDirectory_0_targetTemplates ;
extern const cDirectoryWrapper gWrapperDirectory_1_targetTemplates ;
extern const cDirectoryWrapper gWrapperDirectory_2_targetTemplates ;
extern const cDirectoryWrapper gWrapperDirectory_3_targetTemplates ;
extern const cDirectoryWrapper gWrapperDirectory_4_targetTemplates ;
extern const cDirectoryWrapper gWrapperDirectory_5_targetTemplates ;
extern const cDirectoryWrapper gWrapperDirectory_6_targetTemplates ;

