#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"


//----------------------------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

extern C_BoolCommandLineOption gOption_omnibus_5F_option_5F_not_5F_appearing_5F_in_5F_cocoa_performFlashing ;

//----------------------------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'configurationNodeNameForPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_configurationNodeNameForPrecedenceGraph (class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'ctBoolTypeName'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_ctBoolTypeName (class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'routineMangledNameFromCall'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring function_routineMangledNameFromCall (const class GALGAS_string & constinArgument0,
                                                          const class GALGAS_lstring & constinArgument1,
                                                          const class GALGAS_effectiveArgumentListAST & constinArgument2,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendUnsignedOperatorsTo'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendUnsignedOperatorsTo (const class GALGAS_string constinArgument0,
                                        class GALGAS_semanticTypePrecedenceGraph & ioArgument1,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendInfixOperatorDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendInfixOperatorDeclaration (const class GALGAS_omnibusInfixOperator constinArgument0,
                                             const class GALGAS_string constinArgument1,
                                             const class GALGAS_string constinArgument2,
                                             const class GALGAS_string constinArgument3,
                                             class GALGAS_semanticTypePrecedenceGraph & ioArgument4,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendPrefixOperatorDeclaration_bitWiseComplement'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendPrefixOperatorDeclaration_5F_bitWiseComplement (const class GALGAS_string constinArgument0,
                                                                   class GALGAS_semanticTypePrecedenceGraph & ioArgument1,
                                                                   class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendSignedOperatorsTo'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendSignedOperatorsTo (const class GALGAS_string constinArgument0,
                                      class GALGAS_semanticTypePrecedenceGraph & ioArgument1,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendPrefixOperatorDeclaration_minus'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendPrefixOperatorDeclaration_5F_minus (const class GALGAS_string constinArgument0,
                                                       class GALGAS_semanticTypePrecedenceGraph & ioArgument1,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildOrderedDeclarationList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildOrderedDeclarationList (const class GALGAS_ast constinArgument0,
                                          const class GALGAS_string constinArgument1,
                                          const class GALGAS_location constinArgument2,
                                          class GALGAS_declarationListAST & outArgument3,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildSemanticContext (const class GALGAS_lstring constinArgument0,
                                   const class GALGAS_ast constinArgument1,
                                   class GALGAS_staticEntityMap & ioArgument2,
                                   class GALGAS_staticListInitializationMap & ioArgument3,
                                   class GALGAS_semanticContext & outArgument4,
                                   class GALGAS_declarationDecorationList & outArgument5,
                                   class GALGAS_decoratedRegularRoutineList & outArgument6,
                                   class GALGAS_routineListIR & outArgument7,
                                   class GALGAS_userLLVMTypeDefinitionListIR & outArgument8,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildControlRegisterMapHTMLFile'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildControlRegisterMapHTMLFile (const class GALGAS_controlRegisterGroupMap constinArgument0,
                                              const class GALGAS_lstring constinArgument1,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildGlobalConstantMapHTMLFile'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildGlobalConstantMapHTMLFile (class GALGAS_globalConstantMap inArgument0,
                                             const class GALGAS_lstring constinArgument1,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildTypeMapHTMLFile'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildTypeMapHTMLFile (const class GALGAS_unifiedTypeMap constinArgument0,
                                   const class GALGAS_routineMapForContext constinArgument1,
                                   const class GALGAS_infixOperatorMap constinArgument2,
                                   const class GALGAS_prefixOperatorMap constinArgument3,
                                   const class GALGAS_assignmentOperatorMap constinArgument4,
                                   const class GALGAS_lstring constinArgument5,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'compileTimeIntegerType'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_omnibusType function_compileTimeIntegerType (class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'ctIntegerTypeName'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_ctIntegerTypeName (class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'compileTimeBoolType'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_omnibusType function_compileTimeBoolType (class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'staticStringTypeName'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_staticStringTypeName (class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'typeDumpGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_typeDumpGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeDumpGenerationTemplate dump'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeDumpGenerationTemplate_dump (class C_Compiler * inCompiler,
                                                                   const class GALGAS_string & in_PROJECT_5F_NAME,
                                                                   const class GALGAS_unifiedTypeMap & in_GLOBAL_5F_TYPE_5F_MAP,
                                                                   const class GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                   const class GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING,
                                                                   const class GALGAS_routineMapForContext & in_ALL_5F_ROUTINE_5F_MAP,
                                                                   const class GALGAS_infixOperatorMap & in_INFIX_5F_OPERATOR_5F_MAP,
                                                                   const class GALGAS_prefixOperatorMap & in_PREFIX_5F_OPERATOR_5F_MAP,
                                                                   const class GALGAS_assignmentOperatorMap & in_ASSIGNMENT_5F_OPERATOR_5F_MAP
                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'linkForHTMLTypeMap'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_linkForHTMLTypeMap (const class GALGAS_string & constinArgument0,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'declareLLVMTypes'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_declareLLVMTypes (const class GALGAS_userLLVMTypeDefinitionListIR constinArgument0,
                               class GALGAS_string & ioArgument1,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'getNewTempReference'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_getNewTempReference (const class GALGAS_omnibusType constinArgument0,
                                  class GALGAS_semanticTemporariesStruct & ioArgument1,
                                  class GALGAS_objectIR & outArgument2,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_semanticAnalysis (const class GALGAS_string constinArgument0,
                               const class GALGAS_ast constinArgument1,
                               const class GALGAS_stringset constinArgument2,
                               const class GALGAS_declarationDecorationList constinArgument3,
                               const class GALGAS_decoratedRegularRoutineList constinArgument4,
                               const class GALGAS_routineListIR constinArgument5,
                               const class GALGAS_semanticContext constinArgument6,
                               const class GALGAS_location constinArgument7,
                               const class GALGAS_staticEntityMap constinArgument8,
                               class GALGAS_intermediateCodeStruct & outArgument9,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendPanicRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendPanicRoutines (const class GALGAS_stringset constinArgument0,
                                  class GALGAS_intermediateCodeStruct & ioArgument1,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkRequiredProcedures'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkRequiredProcedures (const class GALGAS_ast constinArgument0,
                                      const class GALGAS_semanticContext constinArgument1,
                                      const class GALGAS_location constinArgument2,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'assignmentOperatorFuncName'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_assignmentOperatorFuncName (const class GALGAS_omnibusType & constinArgument0,
                                                         const class GALGAS_omnibusType & constinArgument1,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'assignValueToFixedSizeArrayElements_functionName'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_assignValueToFixedSizeArrayElements_5F_functionName (const class GALGAS_omnibusType & constinArgument0,
                                                                                  class C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'addIntegerInfixOperator'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_addIntegerInfixOperator (const class GALGAS_omnibusInfixOperator constinArgument0,
                                      const class GALGAS_omnibusType constinArgument1,
                                      const class GALGAS_string constinArgument2,
                                      class GALGAS_infixOperatorMap & ioArgument3,
                                      const class GALGAS_omnibusType constinArgument4,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'copyableAttribute'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_copyableAttribute (class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'minValueForInteger'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bigint function_minValueForInteger (const class GALGAS_bool & constinArgument0,
                                                 const class GALGAS_uint & constinArgument1,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'maxValueForInteger'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bigint function_maxValueForInteger (const class GALGAS_bool & constinArgument0,
                                                 const class GALGAS_uint & constinArgument1,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'instantiableAttribute'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_instantiableAttribute (class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'registerGroupNameFromOmnibusName'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring function_registerGroupNameFromOmnibusName (const class GALGAS_lstring & constinArgument0,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'controlRegisterDumpGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_controlRegisterDumpGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'controlRegisterDumpGenerationTemplate dumpByName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByName (class C_Compiler * inCompiler,
                                                                                    const class GALGAS_string & in_PROJECT_5F_NAME,
                                                                                    const class GALGAS_uint & in_CONTROL_5F_REGISTER_5F_COUNT,
                                                                                    const class GALGAS_controlRegisterByName & in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME
                                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'controlRegisterDumpGenerationTemplate dumpByAddress'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByAddress (class C_Compiler * inCompiler,
                                                                                       const class GALGAS_string & in_PROJECT_5F_NAME,
                                                                                       const class GALGAS_uint & in_CONTROL_5F_REGISTER_5F_COUNT,
                                                                                       const class GALGAS_controlRegisterByAddress & in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS
                                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildControlRegisterMaps'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildControlRegisterMaps (const class GALGAS_controlRegisterMap constinArgument0,
                                       const class GALGAS_bigint constinArgument1,
                                       const class GALGAS_string constinArgument2,
                                       class GALGAS_controlRegisterByAddress & ioArgument3,
                                       class GALGAS_controlRegisterByName & ioArgument4,
                                       class GALGAS_uint & ioArgument5,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'arrayIndexListFor'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uintlist function_arrayIndexListFor (const class GALGAS_uint & constinArgument0,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'fieldIndexColumns'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_fieldIndexColumns (const class GALGAS_uint & constinArgument0,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'constantDumpGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_constantDumpGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'constantDumpGenerationTemplate dump'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_constantDumpGenerationTemplate_dump (class C_Compiler * inCompiler,
                                                                       const class GALGAS_string & in_PROJECT_5F_NAME,
                                                                       const class GALGAS_globalConstantMap & in_GLOBAL_5F_CONSTANT_5F_MAP,
                                                                       const class GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                       const class GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'linkForGlobalConstant'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_linkForGlobalConstant (const class GALGAS_string & constinArgument0,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'retainRequiredDrivers'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_retainRequiredDrivers (class GALGAS_ast & ioArgument0,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

