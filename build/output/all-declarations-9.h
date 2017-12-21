#pragma once

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-8.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildGlobalConstantMapHTMLFile'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildGlobalConstantMapHTMLFile (class GALGAS_globalConstantMap inArgument0,
                                             const class GALGAS_lstring constinArgument1,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Filewrapper 'constantDumpGenerationTemplate'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_constantDumpGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Filewrapper template 'constantDumpGenerationTemplate dump'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_constantDumpGenerationTemplate_dump (class C_Compiler * inCompiler,
                                                                       const class GALGAS_string & in_PROJECT_5F_NAME,
                                                                       const class GALGAS_globalConstantMap & in_GLOBAL_5F_CONSTANT_5F_MAP,
                                                                       const class GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                       const class GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'linkForGlobalConstant'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_linkForGlobalConstant (const class GALGAS_string & constinArgument0,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'llvmDriverNameFromName'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_llvmDriverNameFromName (const class GALGAS_lstring & constinArgument0,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'retainRequiredDrivers'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_retainRequiredDrivers (class GALGAS_ast & ioArgument0,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'functionType'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_PLMType function_functionType (const class GALGAS_routineDescriptor & constinArgument0,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'plmNameForStaticListElementType'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_plmNameForStaticListElementType (const class GALGAS_lstring & constinArgument0,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'plmNameForStaticListType'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_plmNameForStaticListType (const class GALGAS_lstring & constinArgument0,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'setupNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_setupNameForInvocationGraph (const class GALGAS_string & constinArgument0,
                                                           const class GALGAS_lbigint & constinArgument1,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'panicNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_panicNameForInvocationGraph (const class GALGAS_string & constinArgument0,
                                                           const class GALGAS_lbigint & constinArgument1,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Function 'panicModeName'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_panicModeName (class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'staticStringTypeName'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_staticStringTypeName (class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'generatePanicCode'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generatePanicCode (class GALGAS_string & ioArgument0,
                                const class GALGAS_string constinArgument1,
                                const class GALGAS_stringset constinArgument2,
                                const class GALGAS_targetParameters constinArgument3,
                                const class GALGAS_string constinArgument4,
                                const class GALGAS_generationContext constinArgument5,
                                class GALGAS_generationAdds & ioArgument6,
                                const class GALGAS_instructionListSortedListIR constinArgument7,
                                const class GALGAS_instructionListSortedListIR constinArgument8,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'getTargetTextFile'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_getTargetTextFile (const class GALGAS_string & constinArgument0,
                                                const class GALGAS_string & constinArgument1,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'panicCodeForAssertViolation'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForAssertViolation (class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Function 'panicCodeForUnsignedAdditionOverflow'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForUnsignedAdditionOverflow (class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Function 'panicCodeForSignedAdditionOverflow'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForSignedAdditionOverflow (class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Function 'panicCodeForUnsignedSubtractOverflow'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForUnsignedSubtractOverflow (class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Function 'panicCodeForSignedSubtractOverflow'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForSignedSubtractOverflow (class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Function 'panicCodeForUnsignedMultiplicationOverflow'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForUnsignedMultiplicationOverflow (class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Function 'panicCodeForSignedMultiplicationOverflow'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForSignedMultiplicationOverflow (class C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Function 'panicCodeForUnsignedDivisionByZero'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForUnsignedDivisionByZero (class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'panicCodeForSignedDivisionByZero'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForSignedDivisionByZero (class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Function 'panicCodeForUnsignedRemainderByZero'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForUnsignedRemainderByZero (class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Function 'panicCodeForSignedRemainderByZero'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForSignedRemainderByZero (class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'panicCodeForConvertOverflow'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForConvertOverflow (class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'panicCodeForRegisterFieldOvf'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForRegisterFieldOvf (class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Function 'panicCodeForNegativeArrayIndex'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForNegativeArrayIndex (class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Function 'panicCodeForTooLargeArrayIndex'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForTooLargeArrayIndex (class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'panicCodeForClosedSync'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_panicCodeForClosedSync (class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'llvmFunctionCall'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmFunctionCall (const class GALGAS_PLMType & constinArgument0,
                                               const class GALGAS_string & constinArgument1,
                                               const class GALGAS_PLMType & constinArgument2,
                                               const class GALGAS_routineFormalArgumentListIR & constinArgument3,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'generateSectionAndSafeDispatcher'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateSectionAndSafeDispatcher (const class GALGAS_string constinArgument0,
                                               const class GALGAS_string constinArgument1,
                                               const class GALGAS_targetParameters constinArgument2,
                                               class GALGAS_string & ioArgument3,
                                               class GALGAS_string & ioArgument4,
                                               const class GALGAS_sectionIRlist constinArgument5,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'generatePrimitiveAndServiceDispatcher'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generatePrimitiveAndServiceDispatcher (const class GALGAS_string constinArgument0,
                                                    const class GALGAS_string constinArgument1,
                                                    class GALGAS_string & ioArgument2,
                                                    const class GALGAS__32_stringlist constinArgument3,
                                                    const class GALGAS_targetParameters constinArgument4,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'initNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_initNameForInvocationGraph (const class GALGAS_string & constinArgument0,
                                                          const class GALGAS_location & constinArgument1,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'initSemanticAnalysis'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_initSemanticAnalysis (const class GALGAS_semanticContext constinArgument0,
                                   class GALGAS_semanticTemporariesStruct & ioArgument1,
                                   class GALGAS_intermediateCodeStruct & ioArgument2,
                                   const class GALGAS_PLMType constinArgument3,
                                   const class GALGAS_location constinArgument4,
                                   const class GALGAS_instructionListAST constinArgument5,
                                   const class GALGAS_location constinArgument6,
                                   class GALGAS_allocaList & outArgument7,
                                   class GALGAS_instructionListIR & outArgument8,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'checkRequiredProcedures'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkRequiredProcedures (const class GALGAS_ast constinArgument0,
                                      const class GALGAS_semanticContext constinArgument1,
                                      const class GALGAS_location constinArgument2,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'interruptNameForInvocationGraph'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_interruptNameForInvocationGraph (const class GALGAS_lstring & constinArgument0,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'routineMangledNameFromCall'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_routineMangledNameFromCall (const class GALGAS_string & constinArgument0,
                                                          const class GALGAS_lstring & constinArgument1,
                                                          const class GALGAS_effectiveArgumentListAST & constinArgument2,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'analyzeEffectiveParameters'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeEffectiveParameters (const class GALGAS_PLMType constinArgument0,
                                         const class GALGAS_routineTypedSignature constinArgument1,
                                         const class GALGAS_effectiveArgumentListAST constinArgument2,
                                         const class GALGAS_location constinArgument3,
                                         const class GALGAS_lstring constinArgument4,
                                         const class GALGAS_semanticContext constinArgument5,
                                         const class GALGAS_mode constinArgument6,
                                         class GALGAS_semanticTemporariesStruct & ioArgument7,
                                         class GALGAS_staticStringMap & ioArgument8,
                                         class GALGAS_universalValuedObjectMap & ioArgument9,
                                         class GALGAS_allocaList & ioArgument10,
                                         class GALGAS_instructionListIR & ioArgument11,
                                         class GALGAS_procCallEffectiveParameterListIR & ioArgument12,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'getNewTempReference'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_getNewTempReference (const class GALGAS_PLMType constinArgument0,
                                  class GALGAS_semanticTemporariesStruct & ioArgument1,
                                  class GALGAS_objectIR & outArgument2,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'getInfixOperatorMap'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_infixOperatorMap function_getInfixOperatorMap (const class GALGAS_infixOperator & constinArgument0,
                                                            const class GALGAS_semanticContext & constinArgument1,
                                                            const class GALGAS_mode & constinArgument2,
                                                            const class GALGAS_location & constinArgument3,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'handleArraySubscriptNew'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleArraySubscriptNew (const class GALGAS_PLMType constinArgument0,
                                      const class GALGAS_routineAttributes constinArgument1,
                                      const class GALGAS_lstring constinArgument2,
                                      const class GALGAS_semanticContext constinArgument3,
                                      const class GALGAS_mode constinArgument4,
                                      class GALGAS_semanticTemporariesStruct & ioArgument5,
                                      class GALGAS_staticStringMap & ioArgument6,
                                      class GALGAS_universalValuedObjectMap & ioArgument7,
                                      class GALGAS_allocaList & ioArgument8,
                                      const class GALGAS_expressionAST constinArgument9,
                                      const class GALGAS_location constinArgument10,
                                      const class GALGAS_bigint constinArgument11,
                                      const class GALGAS_PLMType constinArgument12,
                                      class GALGAS_instructionListIR & ioArgument13,
                                      class GALGAS_objectIR & outArgument14,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'handleArraySubscript'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleArraySubscript (const class GALGAS_PLMType constinArgument0,
                                   const class GALGAS_routineAttributes constinArgument1,
                                   const class GALGAS_lstring constinArgument2,
                                   const class GALGAS_semanticContext constinArgument3,
                                   const class GALGAS_mode constinArgument4,
                                   class GALGAS_semanticTemporariesStruct & ioArgument5,
                                   class GALGAS_staticStringMap & ioArgument6,
                                   class GALGAS_universalValuedObjectMap & ioArgument7,
                                   class GALGAS_allocaList & ioArgument8,
                                   const class GALGAS_expressionAST constinArgument9,
                                   const class GALGAS_location constinArgument10,
                                   const class GALGAS_bigint constinArgument11,
                                   const class GALGAS_PLMType constinArgument12,
                                   class GALGAS_instructionListIR & ioArgument13,
                                   class GALGAS_objectIR & ioArgument14,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

