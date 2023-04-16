#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@semanticContext insertGetter'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertGetter (class GALGAS_semanticContext & ioObject,
                                   const class GALGAS_lstring constin_inTypeName,
                                   const class GALGAS_lstring constin_inGetterName,
                                   const class GALGAS_propertyVisibility constin_inVisibility,
                                   const class GALGAS_propertyGetterKind constin_inAccess,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@semanticContext addComputedPropertyGetter'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addComputedPropertyGetter (class GALGAS_semanticContext & ioObject,
                                                const class GALGAS_lstring constin_inTypeName,
                                                const class GALGAS_string constin_inLLVMBaseTypeName,
                                                const class GALGAS_lstring constin_inPropertyName,
                                                const class GALGAS_mode constin_inMode,
                                                const class GALGAS_propertyVisibility constin_inVisibility,
                                                const class GALGAS_unifiedTypeMapEntry constin_inResultTypeProxy,
                                                class GALGAS_lstring & out_outRoutineLLVMName,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'getterLLVMName'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_getterLLVMName (class GALGAS_string inArgument0,
                                             const class GALGAS_string & constinArgument1,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@semanticContext insertPropertySetter'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertPropertySetter (class GALGAS_semanticContext & ioObject,
                                           const class GALGAS_lstring constin_inTypeName,
                                           const class GALGAS_lstring constin_inSetterName,
                                           const class GALGAS_propertyVisibility constin_inVisibility,
                                           const class GALGAS_propertySetterKind constin_inAccess,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticContext propertySetterMap' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertySetterMap extensionGetter_propertySetterMap (const class GALGAS_semanticContext & inObject,
                                                                  const class GALGAS_omnibusType & constinArgument0,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticContext booleanType' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_omnibusType extensionGetter_booleanType (const class GALGAS_semanticContext & inObject,
                                                      const class GALGAS_location & constinArgument0,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'boolTypeName'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_boolTypeName (class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@structurePropertyListAST-element enterPropertyInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_enterPropertyInContext (const class GALGAS_structurePropertyListAST_2D_element inObject,
                                             class GALGAS_semanticContext & io_ioContext,
                                             class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                             const class GALGAS_lstring constin_inReceiverTypeName,
                                             const class GALGAS_lstring constin_inOmnibusTypeSpecificName,
                                             const class GALGAS_string constin_inReceiverLLVMBaseTypeName,
                                             class GALGAS_decoratedRegularRoutineList & io_ioDecoratedRoutineList,
                                             class GALGAS_propertyList & io_ioPropertyList,
                                             class GALGAS_sortedOperandIRList & io_sortedOperandIRList,
                                             class GALGAS_constructorSignature & io_constructorSignature,
                                             class GALGAS_string & io_ioConstructorKey,
                                             class GALGAS_bool & io_canBeCopied,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'boolType'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_omnibusType function_boolType (class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'setterLLVMName'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_setterLLVMName (class GALGAS_string inArgument0,
                                             const class GALGAS_string & constinArgument1,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'voidType'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_omnibusType function_voidType (class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'computeStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_computeStaticExpression (class GALGAS_semanticContext & ioArgument0,
                                      class GALGAS_staticEntityMap & ioArgument1,
                                      const class GALGAS_expressionAST constinArgument2,
                                      const class GALGAS_location constinArgument3,
                                      const class GALGAS_lstring constinArgument4,
                                      class GALGAS_objectIR & outArgument5,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterDeclarationList-element buildControlRegisterMapForGroup'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_buildControlRegisterMapForGroup (const class GALGAS_controlRegisterDeclarationList_2D_element inObject,
                                                      class GALGAS_semanticContext & io_ioContext,
                                                      class GALGAS_controlRegisterMap & io_ioControlRegisterMap,
                                                      class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildControlRegisterSliceMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildControlRegisterSliceMap (const class GALGAS_controlRegisterBitSliceList constinArgument0,
                                           const class GALGAS_location constinArgument1,
                                           class GALGAS_semanticContext & ioArgument2,
                                           class GALGAS_omnibusType & ioArgument3,
                                           const class GALGAS_uint constinArgument4,
                                           class GALGAS_controlRegisterFieldMap & outArgument5,
                                           class GALGAS_sliceMap & outArgument6,
                                           class GALGAS_controlRegisterFieldList & outArgument7,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'controlRegisterType'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_controlRegisterType (const class GALGAS_lstring constinArgument0,
                                  class GALGAS_semanticContext & ioArgument1,
                                  class GALGAS_omnibusType & outArgument2,
                                  class GALGAS_uint & outArgument3,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@globalSyncInstanceMapIR-element generateLLVM'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVM (const class GALGAS_globalSyncInstanceMapIR_2D_element inObject,
                                   class GALGAS_string & io_ioLLVMcode,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@driverListIR-element generateLLVMDriverVariableDefinition'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMDriverVariableDefinition (const class GALGAS_driverListIR_2D_element inObject,
                                                           class GALGAS_string & io_ioLLVMcode,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@decoratedTaskList-element taskSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_taskSemanticAnalysis (const class GALGAS_decoratedTaskList_2D_element inObject,
                                           const class GALGAS_semanticContext constin_inContext,
                                           const class GALGAS_uint constin_inPriority,
                                           class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                           class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOrderedTaskRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeOrderedTaskRoutines (const class GALGAS_taskSetupListAST constinArgument0,
                                         class GALGAS_stringlist & outArgument1,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@externProcedureMapIR-element llvmPrototypeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_llvmPrototypeGeneration (const class GALGAS_externProcedureMapIR_2D_element inObject,
                                              class GALGAS_string & io_ioLLVMcode,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@callInstructionAST baseGuardAnalyze'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_baseGuardAnalyze (class cPtr_callInstructionAST * inObject,
                                           const class GALGAS_omnibusType constin_inSelfType,
                                           const class GALGAS_routineAttributes constin_inRoutineAttributes,
                                           const class GALGAS_semanticContext constin_inContext,
                                           const class GALGAS_mode constin_inMode,
                                           class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                           class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                           class GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                           class GALGAS_guardKindGenerationIR & out_outConvenienceGuardGenerationIR,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'functionResultVariableName'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_functionResultVariableName (class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


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

