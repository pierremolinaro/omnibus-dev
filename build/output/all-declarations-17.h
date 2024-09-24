#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-16.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'copyExecutableFileWithSubstitutions?currentDir?from?to?'
//
//--------------------------------------------------------------------------------------------------

void routine_copyExecutableFileWithSubstitutions_3F_currentDir_3F_from_3F_to_3F_ (const class GGS_string constinArgument0,
                                                                                  const class GGS_string constinArgument1,
                                                                                  const class GGS_string constinArgument2,
                                                                                  const class GGS__32_stringlist constinArgument3,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'copyExecutableFile?currentDir?from?to'
//
//--------------------------------------------------------------------------------------------------

void routine_copyExecutableFile_3F_currentDir_3F_from_3F_to (const class GGS_string constinArgument0,
                                                             const class GGS_string constinArgument1,
                                                             const class GGS_string constinArgument2,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'copyFileWithSubstitutions?currentDir?from?to?'
//
//--------------------------------------------------------------------------------------------------

void routine_copyFileWithSubstitutions_3F_currentDir_3F_from_3F_to_3F_ (const class GGS_string constinArgument0,
                                                                        const class GGS_string constinArgument1,
                                                                        const class GGS_string constinArgument2,
                                                                        const class GGS__32_stringlist constinArgument3,
                                                                        class Compiler * inCompiler
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
//Filewrapper 'embeddedSampleCode'
//
//--------------------------------------------------------------------------------------------------

extern const char * gWrapperFileContent_0_embeddedSampleCode ;
extern const char * gWrapperFileContent_4_embeddedSampleCode ;
extern const char * gWrapperFileContent_12_embeddedSampleCode ;
extern const char * gWrapperFileContent_11_embeddedSampleCode ;
extern const char * gWrapperFileContent_2_embeddedSampleCode ;
extern const char * gWrapperFileContent_13_embeddedSampleCode ;
extern const char * gWrapperFileContent_3_embeddedSampleCode ;
extern const char * gWrapperFileContent_8_embeddedSampleCode ;
extern const char * gWrapperFileContent_15_embeddedSampleCode ;
extern const char * gWrapperFileContent_9_embeddedSampleCode ;
extern const char * gWrapperFileContent_14_embeddedSampleCode ;
extern const char * gWrapperFileContent_10_embeddedSampleCode ;
extern const char * gWrapperFileContent_6_embeddedSampleCode ;
extern const char * gWrapperFileContent_7_embeddedSampleCode ;
extern const char * gWrapperFileContent_5_embeddedSampleCode ;
extern const char * gWrapperFileContent_1_embeddedSampleCode ;
extern const char * gWrapperFileContent_27_embeddedSampleCode ;
extern const char * gWrapperFileContent_26_embeddedSampleCode ;
extern const char * gWrapperFileContent_33_embeddedSampleCode ;
extern const char * gWrapperFileContent_21_embeddedSampleCode ;
extern const char * gWrapperFileContent_30_embeddedSampleCode ;
extern const char * gWrapperFileContent_19_embeddedSampleCode ;
extern const char * gWrapperFileContent_37_embeddedSampleCode ;
extern const char * gWrapperFileContent_36_embeddedSampleCode ;
extern const char * gWrapperFileContent_38_embeddedSampleCode ;
extern const char * gWrapperFileContent_29_embeddedSampleCode ;
extern const char * gWrapperFileContent_40_embeddedSampleCode ;
extern const char * gWrapperFileContent_20_embeddedSampleCode ;
extern const char * gWrapperFileContent_22_embeddedSampleCode ;
extern const char * gWrapperFileContent_16_embeddedSampleCode ;
extern const char * gWrapperFileContent_28_embeddedSampleCode ;
extern const char * gWrapperFileContent_31_embeddedSampleCode ;
extern const char * gWrapperFileContent_34_embeddedSampleCode ;
extern const char * gWrapperFileContent_41_embeddedSampleCode ;
extern const char * gWrapperFileContent_32_embeddedSampleCode ;
extern const char * gWrapperFileContent_25_embeddedSampleCode ;
extern const char * gWrapperFileContent_18_embeddedSampleCode ;
extern const char * gWrapperFileContent_24_embeddedSampleCode ;
extern const char * gWrapperFileContent_35_embeddedSampleCode ;
extern const char * gWrapperFileContent_39_embeddedSampleCode ;
extern const char * gWrapperFileContent_23_embeddedSampleCode ;
extern const char * gWrapperFileContent_17_embeddedSampleCode ;

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cRegularFileWrapper gWrapperFile_0_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_1_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_2_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_3_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_4_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_5_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_6_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_7_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_8_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_9_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_10_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_11_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_12_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_13_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_14_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_15_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_16_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_17_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_18_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_19_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_20_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_21_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_22_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_23_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_24_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_25_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_26_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_27_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_28_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_29_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_30_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_31_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_32_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_33_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_34_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_35_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_36_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_37_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_38_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_39_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_40_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_41_embeddedSampleCode ;

//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_embeddedSampleCode ;
extern const cDirectoryWrapper gWrapperDirectory_1_embeddedSampleCode ;
extern const cDirectoryWrapper gWrapperDirectory_2_embeddedSampleCode ;
extern const cDirectoryWrapper gWrapperDirectory_3_embeddedSampleCode ;

