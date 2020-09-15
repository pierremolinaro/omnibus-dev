#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'panicRoutineNameForFilePath'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_panicRoutineNameForFilePath (const class GALGAS_string & constinArgument0,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'panicModeName'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_panicModeName (class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generatePanicCode'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generatePanicCode (class GALGAS_string & ioArgument0,
                                const class GALGAS_generationContext constinArgument1,
                                class GALGAS_generationAdds & ioArgument2,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSectionImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmNameForSectionImplementation (const class GALGAS_string & constinArgument0,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'panicRoutineName'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_panicRoutineName (class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSectionCall'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmNameForSectionCall (const class GALGAS_string & constinArgument0,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForAssertViolation'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForAssertViolation (class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForUnsignedAdditionOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForUnsignedAdditionOverflow (class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForSignedAdditionOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForSignedAdditionOverflow (class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForUnsignedSubtractOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForUnsignedSubtractOverflow (class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForSignedSubtractOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForSignedSubtractOverflow (class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForUnsignedMultiplicationOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForUnsignedMultiplicationOverflow (class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForSignedMultiplicationOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForSignedMultiplicationOverflow (class C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForUnsignedDivisionByZero'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForUnsignedDivisionByZero (class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForSignedDivisionByZero'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForSignedDivisionByZero (class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForUnsignedRemainderByZero'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForUnsignedRemainderByZero (class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForSignedRemainderByZero'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForSignedRemainderByZero (class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForConvertOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForConvertOverflow (class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForNegativeArrayIndex'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForNegativeArrayIndex (class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForTooLargeArrayIndex'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForTooLargeArrayIndex (class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForClosedSync'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForClosedSync (class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'infixOperatorFunctionName'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_infixOperatorFunctionName (const class GALGAS_omnibusType & constinArgument0,
                                                        const class GALGAS_omnibusInfixOperator & constinArgument1,
                                                        const class GALGAS_omnibusType & constinArgument2,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'prefixOperatorFunctionName'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_prefixOperatorFunctionName (const class GALGAS_omnibusType & constinArgument0,
                                                         const class GALGAS_prefixOperator & constinArgument1,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleArrayAccessInAssignment'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleArrayAccessInAssignment (const class GALGAS_omnibusType constinArgument0,
                                            class GALGAS_omnibusType & ioArgument1,
                                            class GALGAS_string & ioArgument2,
                                            const class GALGAS_routineAttributes constinArgument3,
                                            const class GALGAS_semanticContext constinArgument4,
                                            const class GALGAS_mode constinArgument5,
                                            class GALGAS_semanticTemporariesStruct & ioArgument6,
                                            class GALGAS_staticEntityMap & ioArgument7,
                                            class GALGAS_universalValuedObjectMap & ioArgument8,
                                            class GALGAS_allocaList & ioArgument9,
                                            class GALGAS_instructionListIR & ioArgument10,
                                            class GALGAS_instructionListListIR & ioArgument11,
                                            const class GALGAS_expressionAST constinArgument12,
                                            const class GALGAS_location constinArgument13,
                                            const class GALGAS_bool constinArgument14,
                                            const class GALGAS_LValueOperandAST constinArgument15,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccessInAssignment'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handlePropertyAccessInAssignment (const class GALGAS_omnibusType constinArgument0,
                                               class GALGAS_omnibusType & ioArgument1,
                                               class GALGAS_string & ioArgument2,
                                               const class GALGAS_routineAttributes constinArgument3,
                                               const class GALGAS_semanticContext constinArgument4,
                                               const class GALGAS_mode constinArgument5,
                                               class GALGAS_semanticTemporariesStruct & ioArgument6,
                                               class GALGAS_staticEntityMap & ioArgument7,
                                               class GALGAS_universalValuedObjectMap & ioArgument8,
                                               class GALGAS_allocaList & ioArgument9,
                                               class GALGAS_instructionListIR & ioArgument10,
                                               class GALGAS_instructionListListIR & ioArgument11,
                                               const class GALGAS_lstring constinArgument12,
                                               const class GALGAS_LValueOperandAST constinArgument13,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleNextOperandInAssignment'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleNextOperandInAssignment (const class GALGAS_omnibusType constinArgument0,
                                            class GALGAS_omnibusType & ioArgument1,
                                            class GALGAS_string & ioArgument2,
                                            const class GALGAS_LValueOperandAST constinArgument3,
                                            const class GALGAS_routineAttributes constinArgument4,
                                            const class GALGAS_semanticContext constinArgument5,
                                            const class GALGAS_mode constinArgument6,
                                            class GALGAS_semanticTemporariesStruct & ioArgument7,
                                            class GALGAS_staticEntityMap & ioArgument8,
                                            class GALGAS_universalValuedObjectMap & ioArgument9,
                                            class GALGAS_allocaList & ioArgument10,
                                            class GALGAS_instructionListIR & ioArgument11,
                                            class GALGAS_instructionListListIR & ioArgument12,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

