#ifndef all_2D_declarations_2D__39__ENTITIES_DEFINED
#define all_2D_declarations_2D__39__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-8.h"

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

//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_embeddedSampleCode ;
extern const cDirectoryWrapper gWrapperDirectory_1_embeddedSampleCode ;
extern const cDirectoryWrapper gWrapperDirectory_2_embeddedSampleCode ;
extern const cDirectoryWrapper gWrapperDirectory_3_embeddedSampleCode ;

#endif
