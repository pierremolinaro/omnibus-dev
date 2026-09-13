#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

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
//Extension method '@externProcedureMapIR.element llvmPrototypeGeneration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_llvmPrototypeGeneration (const class GGS_externProcedureMapIR_2E_element inObject,
                                              class GGS_string & io_ioLLVMcode,
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
//Extension method '@driverListIR.element generateLLVMDriverVariableDefinition'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMDriverVariableDefinition (const class GGS_driverListIR_2E_element inObject,
                                                           class GGS_string & io_ioLLVMcode,
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
//Function 'assignmentOperatorFuncName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_assignmentOperatorFuncName (const class GGS_omnibusType & constinArgument0,
                                                      const class GGS_omnibusType & constinArgument1,
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
//Function 'ctIntegerTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_ctIntegerTypeName (class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'infixOperatorFunctionName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_infixOperatorFunctionName (const class GGS_omnibusType & constinArgument0,
                                                     const class GGS_omnibusInfixOperator & constinArgument1,
                                                     const class GGS_omnibusType & constinArgument2,
                                                     class Compiler * inCompiler
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
//Function 'prefixOperatorFunctionName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_prefixOperatorFunctionName (const class GGS_omnibusType & constinArgument0,
                                                      const class GGS_prefixOperator & constinArgument1,
                                                      class Compiler * inCompiler
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
//Function 'llvmNameForSectionCall'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForSectionCall (const class GGS_string & constinArgument0,
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
//Function 'acceptVariableOmnibusName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_acceptVariableOmnibusName (class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'waitForGuardChangeFunctionName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_waitForGuardChangeFunctionName (class Compiler * inCompiler
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
//Function 'copyableAttribute'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_copyableAttribute (class Compiler * inCompiler
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
//Function 'memoryAllocSectionName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_memoryAllocSectionName (class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'memoryFreeSectionName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_memoryFreeSectionName (class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

