#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@semanticContext insertGetter'
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
//Extension setter '@semanticContext addComputedPropertyGetter'
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
//Extension setter '@semanticContext insertPropertySetter'
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
//Extension getter '@semanticContext propertySetterMap' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_propertySetterMap extensionGetter_propertySetterMap (const class GGS_semanticContext & inObject,
                                                               const class GGS_omnibusType & constinArgument0,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticContext booleanType' (as function)
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
//Function 'voidType'
//
//--------------------------------------------------------------------------------------------------

class GGS_omnibusType function_voidType (class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'computeStaticExpression&context&staticEntityMap?expression?errorLocation?optionalContextualTypeName!result'
//
//--------------------------------------------------------------------------------------------------

void routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (class GGS_semanticContext & ioArgument0,
                                                                                                                                           class GGS_staticEntityMap & ioArgument1,
                                                                                                                                           const class GGS_expressionAST constinArgument2,
                                                                                                                                           const class GGS_location constinArgument3,
                                                                                                                                           const class GGS_lstring constinArgument4,
                                                                                                                                           class GGS_objectIR & outArgument5,
                                                                                                                                           class Compiler * inCompiler
                                                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterDeclarationList.element buildControlRegisterMapForGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildControlRegisterMapForGroup (const class GGS_controlRegisterDeclarationList_2E_element inObject,
                                                      class GGS_semanticContext & io_ioContext,
                                                      class GGS_controlRegisterMap & io_ioControlRegisterMap,
                                                      class GGS_staticEntityMap & io_ioStaticEntityMap,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildControlRegisterSliceMap??&context&type?bitCount!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildControlRegisterSliceMap_3F__3F__26_context_26_type_3F_bitCount_21__21__21_ (const class GGS_controlRegisterBitSliceList constinArgument0,
                                                                                              const class GGS_location constinArgument1,
                                                                                              class GGS_semanticContext & ioArgument2,
                                                                                              class GGS_omnibusType & ioArgument3,
                                                                                              const class GGS_uint constinArgument4,
                                                                                              class GGS_controlRegisterFieldMap & outArgument5,
                                                                                              class GGS_sliceMap & outArgument6,
                                                                                              class GGS_controlRegisterFieldList & outArgument7,
                                                                                              class Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'controlRegisterType?&context!type!bitCount'
//
//--------------------------------------------------------------------------------------------------

void routine_controlRegisterType_3F__26_context_21_type_21_bitCount (const class GGS_lstring constinArgument0,
                                                                     class GGS_semanticContext & ioArgument1,
                                                                     class GGS_omnibusType & outArgument2,
                                                                     class GGS_uint & outArgument3,
                                                                     class Compiler * inCompiler
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
//Extension method '@driverListIR.element generateLLVMDriverVariableDefinition'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMDriverVariableDefinition (const class GGS_driverListIR_2E_element inObject,
                                                           class GGS_string & io_ioLLVMcode,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@decoratedTaskList.element taskSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_taskSemanticAnalysis (const class GGS_decoratedTaskList_2E_element inObject,
                                           const class GGS_semanticContext constin_inContext,
                                           const class GGS_uint constin_inPriority,
                                           class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                           class GGS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOrderedTaskRoutines?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeOrderedTaskRoutines_3F__21_ (const class GGS_taskSetupListAST constinArgument0,
                                                 class GGS_stringlist & outArgument1,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

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
//Abstract extension method '@callInstructionAST baseGuardAnalyze'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_baseGuardAnalyze (class cPtr_callInstructionAST * inObject,
                                           const class GGS_omnibusType constin_inSelfType,
                                           const class GGS_routineAttributes constin_inRoutineAttributes,
                                           const class GGS_semanticContext constin_inContext,
                                           const class GGS_mode constin_inMode,
                                           class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                           class GGS_staticEntityMap & io_ioStaticEntityMap,
                                           class GGS_universalValuedObjectMap & io_ioUniversalMap,
                                           class GGS_guardKindGenerationIR & out_outConvenienceGuardGenerationIR,
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
//Function 'configurationNodeNameForPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_configurationNodeNameForPrecedenceGraph (class Compiler * inCompiler
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
//Routine 'appendUnsignedOperatorsTo?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendUnsignedOperatorsTo_3F__26_ (const class GGS_string constinArgument0,
                                                class GGS_semanticTypePrecedenceGraph & ioArgument1,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendInfixOperatorDeclaration????&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (const class GGS_omnibusInfixOperator constinArgument0,
                                                                 const class GGS_string constinArgument1,
                                                                 const class GGS_string constinArgument2,
                                                                 const class GGS_string constinArgument3,
                                                                 class GGS_semanticTypePrecedenceGraph & ioArgument4,
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
//Routine 'appendSignedOperatorsTo?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendSignedOperatorsTo_3F__26_ (const class GGS_string constinArgument0,
                                              class GGS_semanticTypePrecedenceGraph & ioArgument1,
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
//Routine 'buildControlRegisterMapHTMLFile??sourceFile'
//
//--------------------------------------------------------------------------------------------------

void routine_buildControlRegisterMapHTMLFile_3F__3F_sourceFile (const class GGS_controlRegisterGroupMap constinArgument0,
                                                                const class GGS_lstring constinArgument1,
                                                                class Compiler * inCompiler
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
//Function 'compileTimeIntegerType'
//
//--------------------------------------------------------------------------------------------------

class GGS_omnibusType function_compileTimeIntegerType (class Compiler * inCompiler
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
//Routine 'appendPanicRoutines?allSourceFilePaths&intermediateCode'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPanicRoutines_3F_allSourceFilePaths_26_intermediateCode (const class GGS_stringset constinArgument0,
                                                                            class GGS_intermediateCodeStruct & ioArgument1,
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
//Function 'assignmentOperatorFuncName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_assignmentOperatorFuncName (const class GGS_omnibusType & constinArgument0,
                                                      const class GGS_omnibusType & constinArgument1,
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
//Function 'copyableAttribute'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_copyableAttribute (class Compiler * inCompiler
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

