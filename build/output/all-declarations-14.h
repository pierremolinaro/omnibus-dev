#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

//--------------------------------------------------------------------------------------------------
//
//Function 'compileTimeIntegerType'
//
//--------------------------------------------------------------------------------------------------

class GGS_omnibusType function_compileTimeIntegerType (class Compiler * inCompiler
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
//Function 'ctBoolTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_ctBoolTypeName (class Compiler * inCompiler
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
//Function 'minValueForInteger'
//
//--------------------------------------------------------------------------------------------------

class GGS_bigint function_minValueForInteger (const class GGS_bool & constinArgument0,
                                              const class GGS_uint & constinArgument1,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'maxValueForInteger'
//
//--------------------------------------------------------------------------------------------------

class GGS_bigint function_maxValueForInteger (const class GGS_bool & constinArgument0,
                                              const class GGS_uint & constinArgument1,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'addIntegerInfixOperator???&?'
//
//--------------------------------------------------------------------------------------------------

void routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (const class GGS_omnibusInfixOperator constinArgument0,
                                                          const class GGS_omnibusType constinArgument1,
                                                          const class GGS_string constinArgument2,
                                                          class GGS_infixOperatorMap & ioArgument3,
                                                          const class GGS_omnibusType constinArgument4,
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
//Function 'configurationNodeNameForPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_configurationNodeNameForPrecedenceGraph (class Compiler * inCompiler
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
//Function 'panicModeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_panicModeName (class Compiler * inCompiler
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
//Function 'getTargetTextFile'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_getTargetTextFile (const class GGS_string & constinArgument0,
                                             const class GGS_string & constinArgument1,
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
//Function 'assignValueToFixedSizeArrayElements_functionName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_assignValueToFixedSizeArrayElements_5F_functionName (const class GGS_omnibusType & constinArgument0,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

