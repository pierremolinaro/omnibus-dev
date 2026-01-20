#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-15.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleArrayAccessInAssignment?self&&?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList????'
//
//--------------------------------------------------------------------------------------------------

void routine_handleArrayAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F__3F__3F_ (const class GGS_omnibusType constinArgument0,
                                                                                                                                                                                                                                      class GGS_omnibusType & ioArgument1,
                                                                                                                                                                                                                                      class GGS_string & ioArgument2,
                                                                                                                                                                                                                                      const class GGS_routineAttributes constinArgument3,
                                                                                                                                                                                                                                      const class GGS_semanticContext constinArgument4,
                                                                                                                                                                                                                                      const class GGS_mode constinArgument5,
                                                                                                                                                                                                                                      class GGS_semanticTemporariesStruct & ioArgument6,
                                                                                                                                                                                                                                      class GGS_staticEntityMap & ioArgument7,
                                                                                                                                                                                                                                      class GGS_universalValuedObjectMap & ioArgument8,
                                                                                                                                                                                                                                      class GGS_allocaList & ioArgument9,
                                                                                                                                                                                                                                      class GGS_instructionListIR & ioArgument10,
                                                                                                                                                                                                                                      class GGS_instructionListListIR & ioArgument11,
                                                                                                                                                                                                                                      const class GGS_expressionAST constinArgument12,
                                                                                                                                                                                                                                      const class GGS_location constinArgument13,
                                                                                                                                                                                                                                      const class GGS_bool constinArgument14,
                                                                                                                                                                                                                                      const class GGS_LValueOperandAST constinArgument15,
                                                                                                                                                                                                                                      class Compiler * inCompiler
                                                                                                                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccessInAssignment?self&&?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList??'
//
//--------------------------------------------------------------------------------------------------

void routine_handlePropertyAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F_ (const class GGS_omnibusType constinArgument0,
                                                                                                                                                                                                                                 class GGS_omnibusType & ioArgument1,
                                                                                                                                                                                                                                 class GGS_string & ioArgument2,
                                                                                                                                                                                                                                 const class GGS_routineAttributes constinArgument3,
                                                                                                                                                                                                                                 const class GGS_semanticContext constinArgument4,
                                                                                                                                                                                                                                 const class GGS_mode constinArgument5,
                                                                                                                                                                                                                                 class GGS_semanticTemporariesStruct & ioArgument6,
                                                                                                                                                                                                                                 class GGS_staticEntityMap & ioArgument7,
                                                                                                                                                                                                                                 class GGS_universalValuedObjectMap & ioArgument8,
                                                                                                                                                                                                                                 class GGS_allocaList & ioArgument9,
                                                                                                                                                                                                                                 class GGS_instructionListIR & ioArgument10,
                                                                                                                                                                                                                                 class GGS_instructionListListIR & ioArgument11,
                                                                                                                                                                                                                                 const class GGS_lstring constinArgument12,
                                                                                                                                                                                                                                 const class GGS_LValueOperandAST constinArgument13,
                                                                                                                                                                                                                                 class Compiler * inCompiler
                                                                                                                                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNextOperandInAssignment?self&&??routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNextOperandInAssignment_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList (const class GGS_omnibusType constinArgument0,
                                                                                                                                                                                                                          class GGS_omnibusType & ioArgument1,
                                                                                                                                                                                                                          class GGS_string & ioArgument2,
                                                                                                                                                                                                                          const class GGS_LValueOperandAST constinArgument3,
                                                                                                                                                                                                                          const class GGS_routineAttributes constinArgument4,
                                                                                                                                                                                                                          const class GGS_semanticContext constinArgument5,
                                                                                                                                                                                                                          const class GGS_mode constinArgument6,
                                                                                                                                                                                                                          class GGS_semanticTemporariesStruct & ioArgument7,
                                                                                                                                                                                                                          class GGS_staticEntityMap & ioArgument8,
                                                                                                                                                                                                                          class GGS_universalValuedObjectMap & ioArgument9,
                                                                                                                                                                                                                          class GGS_allocaList & ioArgument10,
                                                                                                                                                                                                                          class GGS_instructionListIR & ioArgument11,
                                                                                                                                                                                                                          class GGS_instructionListListIR & ioArgument12,
                                                                                                                                                                                                                          class Compiler * inCompiler
                                                                                                                                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForUnsignedAdditionOverflow'
//
//--------------------------------------------------------------------------------------------------

class GGS_bigint function_panicCodeForUnsignedAdditionOverflow (class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForSignedAdditionOverflow'
//
//--------------------------------------------------------------------------------------------------

class GGS_bigint function_panicCodeForSignedAdditionOverflow (class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForUnsignedSubtractOverflow'
//
//--------------------------------------------------------------------------------------------------

class GGS_bigint function_panicCodeForUnsignedSubtractOverflow (class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForSignedSubtractOverflow'
//
//--------------------------------------------------------------------------------------------------

class GGS_bigint function_panicCodeForSignedSubtractOverflow (class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForUnsignedMultiplicationOverflow'
//
//--------------------------------------------------------------------------------------------------

class GGS_bigint function_panicCodeForUnsignedMultiplicationOverflow (class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForSignedMultiplicationOverflow'
//
//--------------------------------------------------------------------------------------------------

class GGS_bigint function_panicCodeForSignedMultiplicationOverflow (class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForUnsignedDivisionByZero'
//
//--------------------------------------------------------------------------------------------------

class GGS_bigint function_panicCodeForUnsignedDivisionByZero (class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForSignedDivisionByZero'
//
//--------------------------------------------------------------------------------------------------

class GGS_bigint function_panicCodeForSignedDivisionByZero (class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForUnsignedRemainderByZero'
//
//--------------------------------------------------------------------------------------------------

class GGS_bigint function_panicCodeForUnsignedRemainderByZero (class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForSignedRemainderByZero'
//
//--------------------------------------------------------------------------------------------------

class GGS_bigint function_panicCodeForSignedRemainderByZero (class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForClosedSync'
//
//--------------------------------------------------------------------------------------------------

class GGS_bigint function_panicCodeForClosedSync (class Compiler * inCompiler
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
//Routine 'appendSignedOperatorsTo?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendSignedOperatorsTo_3F__26_ (const class GGS_string constinArgument0,
                                              class GGS_semanticTypePrecedenceGraph & ioArgument1,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'routineTypedSignature2??!'
//
//--------------------------------------------------------------------------------------------------

void routine_routineTypedSignature_32__3F__3F__21_ (const class GGS_unifiedTypeMap constinArgument0,
                                                    const class GGS_routineFormalArgumentListAST constinArgument1,
                                                    class GGS_routineTypedSignature & outArgument2,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'displayInvocationGraph??'
//
//--------------------------------------------------------------------------------------------------

void routine_displayInvocationGraph_3F__3F_ (const class GGS_routineListIR constinArgument0,
                                             const class GGS_string constinArgument1,
                                             class Compiler * inCompiler
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
//Function 'waitForGuardChangeFunctionName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_waitForGuardChangeFunctionName (class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

