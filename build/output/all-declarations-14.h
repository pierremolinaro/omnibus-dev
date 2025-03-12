#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

//--------------------------------------------------------------------------------------------------
//
//Function 'instantiableAttribute'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_instantiableAttribute (class Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
//
//Routine 'retainRequiredDrivers&'
//
//--------------------------------------------------------------------------------------------------

void routine_retainRequiredDrivers_26_ (class GGS_ast & ioArgument0,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'omnibusNameForStaticListType'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_omnibusNameForStaticListType (const class GGS_lstring & constinArgument0,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForStaticListType'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_llvmNameForStaticListType (const class GGS_lstring & constinArgument0,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'omnibusNameForStaticListElementType'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_omnibusNameForStaticListElementType (const class GGS_lstring & constinArgument0,
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
//Function 'noUnusedWarningAttribute'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_noUnusedWarningAttribute (class Compiler * inCompiler
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
//Function 'panicRoutineNameForFilePath'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_panicRoutineNameForFilePath (const class GGS_string & constinArgument0,
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
//Function 'panicCodeForAssertViolation'
//
//--------------------------------------------------------------------------------------------------

class GGS_bigint function_panicCodeForAssertViolation (class Compiler * inCompiler
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
//Function 'panicCodeForConvertOverflow'
//
//--------------------------------------------------------------------------------------------------

class GGS_bigint function_panicCodeForConvertOverflow (class Compiler * inCompiler
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
//Function 'panicCodeForClosedSync'
//
//--------------------------------------------------------------------------------------------------

class GGS_bigint function_panicCodeForClosedSync (class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

