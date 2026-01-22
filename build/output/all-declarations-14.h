#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateTarget?currentDir?productDirectory?targetName?targetParameters'
//
//--------------------------------------------------------------------------------------------------

void routine_generateTarget_3F_currentDir_3F_productDirectory_3F_targetName_3F_targetParameters (const class GGS_string constinArgument0,
                                                                                                 const class GGS_string constinArgument1,
                                                                                                 const class GGS_lstring constinArgument2,
                                                                                                 const class GGS_targetParameters constinArgument3,
                                                                                                 class Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

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
//Function 'getTargetTextFile'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_getTargetTextFile (const class GGS_string & constinArgument0,
                                             const class GGS_string & constinArgument1,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicRoutineNameForFilePath'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_panicRoutineNameForFilePath (const class GGS_string & constinArgument0,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPanicRoutines?allSourceFilePaths&intermediateCode'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPanicRoutines_3F_allSourceFilePaths_26_intermediateCode (const class GGS_stringset constinArgument0,
                                                                            class GGS_intermediateCodeStruct & ioArgument1,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicModeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_panicModeName (class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generatePanicCode&?generationContext&generationAdds'
//
//--------------------------------------------------------------------------------------------------

void routine_generatePanicCode_26__3F_generationContext_26_generationAdds (class GGS_string & ioArgument0,
                                                                           const class GGS_generationContext constinArgument1,
                                                                           class GGS_generationAdds & ioArgument2,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSectionImplementation'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForSectionImplementation (const class GGS_string & constinArgument0,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicRoutineName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_panicRoutineName (class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSectionCall'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForSectionCall (const class GGS_string & constinArgument0,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'getNewTempReference?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_getNewTempReference_3F__26__21_ (const class GGS_omnibusType constinArgument0,
                                              class GGS_semanticTemporariesStruct & ioArgument1,
                                              class GGS_objectIR & outArgument2,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkRequiredProcedures?ast?context?endOfSourceFile'
//
//--------------------------------------------------------------------------------------------------

void routine_checkRequiredProcedures_3F_ast_3F_context_3F_endOfSourceFile (const class GGS_ast constinArgument0,
                                                                           const class GGS_semanticContext constinArgument1,
                                                                           const class GGS_location constinArgument2,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPrefixOperatorDeclaration_minus?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPrefixOperatorDeclaration_5F_minus_3F__26_ (const class GGS_string constinArgument0,
                                                               class GGS_semanticTypePrecedenceGraph & ioArgument1,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPrefixOperatorDeclaration_bitWiseComplement?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPrefixOperatorDeclaration_5F_bitWiseComplement_3F__26_ (const class GGS_string constinArgument0,
                                                                           class GGS_semanticTypePrecedenceGraph & ioArgument1,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'prefixOperatorFunctionName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_prefixOperatorFunctionName (const class GGS_omnibusType & constinArgument0,
                                                      const class GGS_prefixOperator & constinArgument1,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'guardImplementationLLVMName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_guardImplementationLLVMName (const class GGS_string & constinArgument0,
                                                        const class GGS_lstring & constinArgument1,
                                                        const class GGS_routineFormalArgumentListAST & constinArgument2,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'guardUserLLVMName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_guardUserLLVMName (const class GGS_string & constinArgument0,
                                              const class GGS_lstring & constinArgument1,
                                              const class GGS_routineFormalArgumentListAST & constinArgument2,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'acceptVariableOmnibusName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_acceptVariableOmnibusName (class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'noUnusedWarningAttribute'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_noUnusedWarningAttribute (class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmFunctionPrototype'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmFunctionPrototype (const class GGS_string & constinArgument0,
                                                 const class GGS_string & constinArgument1,
                                                 const class GGS_omnibusType & constinArgument2,
                                                 const class GGS_routineFormalArgumentListIR & constinArgument3,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForConvertOverflow'
//
//--------------------------------------------------------------------------------------------------

class GGS_bigint function_panicCodeForConvertOverflow (class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'registerGroupNameFromOmnibusName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_registerGroupNameFromOmnibusName (const class GGS_lstring & constinArgument0,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildControlRegisterMapHTMLFile??sourceFile'
//
//--------------------------------------------------------------------------------------------------

void routine_buildControlRegisterMapHTMLFile_3F__3F_sourceFile (const class GGS_controlRegisterGroupMap constinArgument0,
                                                                const class GGS_lstring constinArgument1,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'controlRegisterDumpGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_controlRegisterDumpGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'controlRegisterDumpGenerationTemplate dumpByName'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByName (class Compiler * inCompiler,
                                                                                 const class GGS_string & in_PROJECT_5F_NAME,
                                                                                 const class GGS_uint & in_CONTROL_5F_REGISTER_5F_COUNT,
                                                                                 const class GGS_controlRegisterByName & in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'controlRegisterDumpGenerationTemplate dumpByAddress'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByAddress (class Compiler * inCompiler,
                                                                                    const class GGS_string & in_PROJECT_5F_NAME,
                                                                                    const class GGS_uint & in_CONTROL_5F_REGISTER_5F_COUNT,
                                                                                    const class GGS_controlRegisterByAddress & in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildControlRegisterMaps???&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildControlRegisterMaps_3F__3F__3F__26__26__26_ (const class GGS_controlRegisterMap constinArgument0,
                                                               const class GGS_bigint constinArgument1,
                                                               const class GGS_string constinArgument2,
                                                               class GGS_controlRegisterByAddress & ioArgument3,
                                                               class GGS_controlRegisterByName & ioArgument4,
                                                               class GGS_uint & ioArgument5,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'arrayIndexListFor'
//
//--------------------------------------------------------------------------------------------------

class GGS_uintlist function_arrayIndexListFor (const class GGS_uint & constinArgument0,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'fieldIndexColumns'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_fieldIndexColumns (const class GGS_uint & constinArgument0,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'copyableAttribute'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_copyableAttribute (class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'instantiableAttribute'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_instantiableAttribute (class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'systemUserMangledNameFromAST'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_systemUserMangledNameFromAST (const class GGS_string & constinArgument0,
                                                         const class GGS_routineKind & constinArgument1,
                                                         const class GGS_lstring & constinArgument2,
                                                         const class GGS_routineFormalArgumentListAST & constinArgument3,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'systemImplementationMangledNameFromAST'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_systemImplementationMangledNameFromAST (const class GGS_string & constinArgument0,
                                                                   const class GGS_routineKind & constinArgument1,
                                                                   const class GGS_lstring & constinArgument2,
                                                                   const class GGS_routineFormalArgumentListAST & constinArgument3,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateSectionDispatcher???targetParameters&?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateSectionDispatcher_3F__3F__3F_targetParameters_26__3F_ (const class GGS_string constinArgument0,
                                                                            const class GGS_string constinArgument1,
                                                                            const class GGS_targetParameters constinArgument2,
                                                                            class GGS_string & ioArgument3,
                                                                            const class GGS_sectionIRlist constinArgument4,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generatePrimitiveAndServiceDispatcher??&??targetParameters'
//
//--------------------------------------------------------------------------------------------------

void routine_generatePrimitiveAndServiceDispatcher_3F__3F__26__3F__3F_targetParameters (const class GGS_string constinArgument0,
                                                                                        const class GGS_string constinArgument1,
                                                                                        class GGS_string & ioArgument2,
                                                                                        const class GGS_primitiveAndServiceIRlist constinArgument3,
                                                                                        const class GGS_targetParameters constinArgument4,
                                                                                        class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForAssertViolation'
//
//--------------------------------------------------------------------------------------------------

class GGS_bigint function_panicCodeForAssertViolation (class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

extern BoolCommandLineOption gOption_omnibus_5F_option_5F_not_5F_appearing_5F_in_5F_cocoa_performFlashing ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForNegativeArrayIndex'
//
//--------------------------------------------------------------------------------------------------

class GGS_bigint function_panicCodeForNegativeArrayIndex (class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForTooLargeArrayIndex'
//
//--------------------------------------------------------------------------------------------------

class GGS_bigint function_panicCodeForTooLargeArrayIndex (class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildGlobalConstantMapHTMLFile??sourceFile'
//
//--------------------------------------------------------------------------------------------------

void routine_buildGlobalConstantMapHTMLFile_3F__3F_sourceFile (const class GGS_globalConstantMap constinArgument0,
                                                               const class GGS_lstring constinArgument1,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'constantDumpGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_constantDumpGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'constantDumpGenerationTemplate dump'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_constantDumpGenerationTemplate_dump (class Compiler * inCompiler,
                                                                    const class GGS_string & in_PROJECT_5F_NAME,
                                                                    const class GGS_globalConstantMap & in_GLOBAL_5F_CONSTANT_5F_MAP,
                                                                    const class GGS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                    const class GGS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'linkForGlobalConstant'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_linkForGlobalConstant (const class GGS_string & constinArgument0,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

