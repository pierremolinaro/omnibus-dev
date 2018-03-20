#pragma once

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-11.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'copyExecutableFile'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_copyExecutableFile (const class GALGAS_string constinArgument0,
                                 const class GALGAS_string constinArgument1,
                                 const class GALGAS_string constinArgument2,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'copyExecutableFileWithSubstitutions'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_copyExecutableFileWithSubstitutions (const class GALGAS_string constinArgument0,
                                                  const class GALGAS_string constinArgument1,
                                                  const class GALGAS_string constinArgument2,
                                                  const class GALGAS__32_stringlist constinArgument3,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'copyFileWithSubstitutions'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_copyFileWithSubstitutions (const class GALGAS_string constinArgument0,
                                        const class GALGAS_string constinArgument1,
                                        const class GALGAS_string constinArgument2,
                                        const class GALGAS__32_stringlist constinArgument3,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'importFilesAndCompile'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_importFilesAndCompile (const class GALGAS_lstring constinArgument0,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'compileProject'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileProject (const class GALGAS_lstring constinArgument0,
                             const class GALGAS_ast constinArgument1,
                             const class GALGAS_lstring constinArgument2,
                             const class GALGAS_location constinArgument3,
                             const class GALGAS_string constinArgument4,
                             const class GALGAS_stringset constinArgument5,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'recursiveImportFiles'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_recursiveImportFiles (class GALGAS_ast & ioArgument0,
                                   class GALGAS_string inArgument1,
                                   class GALGAS_lstringlist inArgument2,
                                   class GALGAS_stringset & ioArgument3,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'addTargetSpecificFiles'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_addTargetSpecificFiles (const class GALGAS_lstring constinArgument0,
                                     class GALGAS_ast & ioArgument1,
                                     const class GALGAS_string constinArgument2,
                                     class GALGAS_stringset & ioArgument3,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'recursiveImportEmbeddedTargetFiles'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_recursiveImportEmbeddedTargetFiles (class GALGAS_ast & ioArgument0,
                                                 const class GALGAS_string constinArgument1,
                                                 class GALGAS_lstringlist inArgument2,
                                                 class GALGAS_stringset & ioArgument3,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'recursiveImportFileSystemTargetFiles'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_recursiveImportFileSystemTargetFiles (class GALGAS_ast & ioArgument0,
                                                   const class GALGAS_string constinArgument1,
                                                   class GALGAS_lstringlist inArgument2,
                                                   class GALGAS_stringset & ioArgument3,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Filewrapper 'embeddedSampleCode'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern const char * gWrapperFileContent_0_embeddedSampleCode ;
extern const char * gWrapperFileContent_1_embeddedSampleCode ;
extern const char * gWrapperFileContent_2_embeddedSampleCode ;
extern const char * gWrapperFileContent_3_embeddedSampleCode ;
extern const char * gWrapperFileContent_4_embeddedSampleCode ;
extern const char * gWrapperFileContent_5_embeddedSampleCode ;
extern const char * gWrapperFileContent_6_embeddedSampleCode ;
extern const char * gWrapperFileContent_7_embeddedSampleCode ;
extern const char * gWrapperFileContent_8_embeddedSampleCode ;
extern const char * gWrapperFileContent_9_embeddedSampleCode ;
extern const char * gWrapperFileContent_10_embeddedSampleCode ;
extern const char * gWrapperFileContent_11_embeddedSampleCode ;
extern const char * gWrapperFileContent_12_embeddedSampleCode ;
extern const char * gWrapperFileContent_13_embeddedSampleCode ;
extern const char * gWrapperFileContent_14_embeddedSampleCode ;
extern const char * gWrapperFileContent_15_embeddedSampleCode ;
extern const char * gWrapperFileContent_16_embeddedSampleCode ;
extern const char * gWrapperFileContent_17_embeddedSampleCode ;
extern const char * gWrapperFileContent_18_embeddedSampleCode ;
extern const char * gWrapperFileContent_19_embeddedSampleCode ;
extern const char * gWrapperFileContent_20_embeddedSampleCode ;
extern const char * gWrapperFileContent_21_embeddedSampleCode ;
extern const char * gWrapperFileContent_22_embeddedSampleCode ;
extern const char * gWrapperFileContent_23_embeddedSampleCode ;
extern const char * gWrapperFileContent_24_embeddedSampleCode ;
extern const char * gWrapperFileContent_25_embeddedSampleCode ;
extern const char * gWrapperFileContent_26_embeddedSampleCode ;
extern const char * gWrapperFileContent_27_embeddedSampleCode ;
extern const char * gWrapperFileContent_28_embeddedSampleCode ;
extern const char * gWrapperFileContent_29_embeddedSampleCode ;
extern const char * gWrapperFileContent_30_embeddedSampleCode ;
extern const char * gWrapperFileContent_31_embeddedSampleCode ;
extern const char * gWrapperFileContent_32_embeddedSampleCode ;
extern const char * gWrapperFileContent_33_embeddedSampleCode ;
extern const char * gWrapperFileContent_34_embeddedSampleCode ;
extern const char * gWrapperFileContent_35_embeddedSampleCode ;
extern const char * gWrapperFileContent_36_embeddedSampleCode ;
extern const char * gWrapperFileContent_37_embeddedSampleCode ;
extern const char * gWrapperFileContent_38_embeddedSampleCode ;

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_embeddedSampleCode ;
extern const cDirectoryWrapper gWrapperDirectory_1_embeddedSampleCode ;
extern const cDirectoryWrapper gWrapperDirectory_2_embeddedSampleCode ;
extern const cDirectoryWrapper gWrapperDirectory_3_embeddedSampleCode ;

