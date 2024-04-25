#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

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

GALGAS_string filewrapperTemplate_constantDumpGenerationTemplate_dump (class Compiler * inCompiler,
                                                                       const class GALGAS_string & in_PROJECT_5F_NAME,
                                                                       const class GALGAS_globalConstantMap & in_GLOBAL_5F_CONSTANT_5F_MAP,
                                                                       const class GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                       const class GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'linkForGlobalConstant'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_linkForGlobalConstant (const class GALGAS_string & constinArgument0,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'retainRequiredDrivers&'
//
//--------------------------------------------------------------------------------------------------

void routine_retainRequiredDrivers_26_ (class GALGAS_ast & ioArgument0,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'omnibusNameForStaticListType'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_omnibusNameForStaticListType (const class GALGAS_lstring & constinArgument0,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForStaticListType'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_llvmNameForStaticListType (const class GALGAS_lstring & constinArgument0,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'omnibusNameForStaticListElementType'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_omnibusNameForStaticListElementType (const class GALGAS_lstring & constinArgument0,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'checkModeAndReturnsRoutineLLVMName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_checkModeAndReturnsRoutineLLVMName (const class GALGAS_routineLLVMNameDict & constinArgument0,
                                                                 const class GALGAS_mode & constinArgument1,
                                                                 const class GALGAS_lstring & constinArgument2,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'noUnusedWarningAttribute'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_noUnusedWarningAttribute (class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'systemUserMangledNameFromAST'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_systemUserMangledNameFromAST (const class GALGAS_string & constinArgument0,
                                                            const class GALGAS_routineKind & constinArgument1,
                                                            const class GALGAS_lstring & constinArgument2,
                                                            const class GALGAS_routineFormalArgumentListAST & constinArgument3,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'systemImplementationMangledNameFromAST'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_systemImplementationMangledNameFromAST (const class GALGAS_string & constinArgument0,
                                                                      const class GALGAS_routineKind & constinArgument1,
                                                                      const class GALGAS_lstring & constinArgument2,
                                                                      const class GALGAS_routineFormalArgumentListAST & constinArgument3,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmFunctionPrototype'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmFunctionPrototype (const class GALGAS_string & constinArgument0,
                                                    const class GALGAS_string & constinArgument1,
                                                    const class GALGAS_omnibusType & constinArgument2,
                                                    const class GALGAS_routineFormalArgumentListIR & constinArgument3,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateSectionDispatcher???targetParameters&?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateSectionDispatcher_3F__3F__3F_targetParameters_26__3F_ (const class GALGAS_string constinArgument0,
                                                                            const class GALGAS_string constinArgument1,
                                                                            const class GALGAS_targetParameters constinArgument2,
                                                                            class GALGAS_string & ioArgument3,
                                                                            const class GALGAS_sectionIRlist constinArgument4,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'getTargetTextFile'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_getTargetTextFile (const class GALGAS_string & constinArgument0,
                                                const class GALGAS_string & constinArgument1,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generatePrimitiveAndServiceDispatcher??&??targetParameters'
//
//--------------------------------------------------------------------------------------------------

void routine_generatePrimitiveAndServiceDispatcher_3F__3F__26__3F__3F_targetParameters (const class GALGAS_string constinArgument0,
                                                                                        const class GALGAS_string constinArgument1,
                                                                                        class GALGAS_string & ioArgument2,
                                                                                        const class GALGAS_primitiveAndServiceIRlist constinArgument3,
                                                                                        const class GALGAS_targetParameters constinArgument4,
                                                                                        class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'routineTypedSignature2??!'
//
//--------------------------------------------------------------------------------------------------

void routine_routineTypedSignature_32__3F__3F__21_ (class GALGAS_unifiedTypeMap inArgument0,
                                                    const class GALGAS_routineFormalArgumentListAST constinArgument1,
                                                    class GALGAS_routineTypedSignature & outArgument2,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'guardImplementationLLVMName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_guardImplementationLLVMName (const class GALGAS_string & constinArgument0,
                                                           const class GALGAS_lstring & constinArgument1,
                                                           const class GALGAS_routineFormalArgumentListAST & constinArgument2,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'guardUserLLVMName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_guardUserLLVMName (const class GALGAS_string & constinArgument0,
                                                 const class GALGAS_lstring & constinArgument1,
                                                 const class GALGAS_routineFormalArgumentListAST & constinArgument2,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'acceptVariableOmnibusName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_acceptVariableOmnibusName (class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeEffectiveParameters?self?routineAttributes?formal?effective?errorLocation?context?requiredMode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&effectiveIR'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (const class GALGAS_omnibusType constinArgument0,
                                                                                                                                                                                                                                      const class GALGAS_routineAttributes constinArgument1,
                                                                                                                                                                                                                                      const class GALGAS_routineTypedSignature constinArgument2,
                                                                                                                                                                                                                                      const class GALGAS_effectiveArgumentListAST constinArgument3,
                                                                                                                                                                                                                                      const class GALGAS_location constinArgument4,
                                                                                                                                                                                                                                      const class GALGAS_semanticContext constinArgument5,
                                                                                                                                                                                                                                      const class GALGAS_mode constinArgument6,
                                                                                                                                                                                                                                      class GALGAS_semanticTemporariesStruct & ioArgument7,
                                                                                                                                                                                                                                      class GALGAS_staticEntityMap & ioArgument8,
                                                                                                                                                                                                                                      class GALGAS_universalValuedObjectMap & ioArgument9,
                                                                                                                                                                                                                                      class GALGAS_allocaList & ioArgument10,
                                                                                                                                                                                                                                      class GALGAS_instructionListIR & ioArgument11,
                                                                                                                                                                                                                                      class GALGAS_procCallEffectiveParameterListIR & ioArgument12,
                                                                                                                                                                                                                                      class Compiler * inCompiler
                                                                                                                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicRoutineNameForFilePath'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_panicRoutineNameForFilePath (const class GALGAS_string & constinArgument0,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicModeName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_panicModeName (class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generatePanicCode&?generationContext&generationAdds'
//
//--------------------------------------------------------------------------------------------------

void routine_generatePanicCode_26__3F_generationContext_26_generationAdds (class GALGAS_string & ioArgument0,
                                                                           const class GALGAS_generationContext constinArgument1,
                                                                           class GALGAS_generationAdds & ioArgument2,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSectionImplementation'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmNameForSectionImplementation (const class GALGAS_string & constinArgument0,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicRoutineName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_panicRoutineName (class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSectionCall'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmNameForSectionCall (const class GALGAS_string & constinArgument0,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForAssertViolation'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForAssertViolation (class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForUnsignedAdditionOverflow'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForUnsignedAdditionOverflow (class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForSignedAdditionOverflow'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForSignedAdditionOverflow (class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForUnsignedSubtractOverflow'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForUnsignedSubtractOverflow (class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForSignedSubtractOverflow'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForSignedSubtractOverflow (class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForUnsignedMultiplicationOverflow'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForUnsignedMultiplicationOverflow (class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForSignedMultiplicationOverflow'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForSignedMultiplicationOverflow (class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForUnsignedDivisionByZero'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForUnsignedDivisionByZero (class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForSignedDivisionByZero'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForSignedDivisionByZero (class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForUnsignedRemainderByZero'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForUnsignedRemainderByZero (class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForSignedRemainderByZero'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForSignedRemainderByZero (class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForConvertOverflow'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForConvertOverflow (class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForNegativeArrayIndex'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForNegativeArrayIndex (class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForTooLargeArrayIndex'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForTooLargeArrayIndex (class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicCodeForClosedSync'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bigint function_panicCodeForClosedSync (class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

