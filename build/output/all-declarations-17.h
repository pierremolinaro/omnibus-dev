#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-16.h"

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
//Function 'asSeparatorLine'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_asSeparatorLine (class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'asTitleComment'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_asTitleComment (const class GGS_string & constinArgument0,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateCodeFiles?currentDir?productDir?intermediateCode?userDefinedTypes?target?panicCodeType?panicLineType?interrupts?staticlistValues?targetParameters'
//
//--------------------------------------------------------------------------------------------------

void routine_generateCodeFiles_3F_currentDir_3F_productDir_3F_intermediateCode_3F_userDefinedTypes_3F_target_3F_panicCodeType_3F_panicLineType_3F_interrupts_3F_staticlistValues_3F_targetParameters (const class GGS_string constinArgument0,
                                                                                                                                                                                                      const class GGS_string constinArgument1,
                                                                                                                                                                                                      const class GGS_intermediateCodeStruct constinArgument2,
                                                                                                                                                                                                      const class GGS_userLLVMTypeDefinitionListIR constinArgument3,
                                                                                                                                                                                                      const class GGS_lstring constinArgument4,
                                                                                                                                                                                                      const class GGS_omnibusType constinArgument5,
                                                                                                                                                                                                      const class GGS_omnibusType constinArgument6,
                                                                                                                                                                                                      const class GGS_availableInterruptMap constinArgument7,
                                                                                                                                                                                                      const class GGS_staticListInitializationMap constinArgument8,
                                                                                                                                                                                                      const class GGS_targetParameters constinArgument9,
                                                                                                                                                                                                      class Compiler * inCompiler
                                                                                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleArrayAccess?self&&?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR????'
//
//--------------------------------------------------------------------------------------------------

void routine_handleArrayAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F__3F__3F_ (const class GGS_omnibusType constinArgument0,
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
                                                                                                                                                                                      const class GGS_expressionAST constinArgument11,
                                                                                                                                                                                      const class GGS_location constinArgument12,
                                                                                                                                                                                      const class GGS_bool constinArgument13,
                                                                                                                                                                                      const class GGS_LValueOperandAST constinArgument14,
                                                                                                                                                                                      class Compiler * inCompiler
                                                                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccess?self&&?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR??'
//
//--------------------------------------------------------------------------------------------------

void routine_handlePropertyAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F_ (const class GGS_omnibusType constinArgument0,
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
                                                                                                                                                                                 const class GGS_lstring constinArgument11,
                                                                                                                                                                                 const class GGS_LValueOperandAST constinArgument12,
                                                                                                                                                                                 class Compiler * inCompiler
                                                                                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNextOperand?self&&??routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNextOperand_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR (const class GGS_omnibusType constinArgument0,
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
                                                                                                                                                                          class Compiler * inCompiler
                                                                                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeGuardCall?self?routineAttributes?receiver?guardName?effective?context?requiredMode&temporary&staticEntityMap&variableMap&alloca&instructionListIR!effectiveIR!guardMangledName'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeGuardCall_3F_self_3F_routineAttributes_3F_receiver_3F_guardName_3F_effective_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_21_effectiveIR_21_guardMangledName (const class GGS_omnibusType constinArgument0,
                                                                                                                                                                                                                                              const class GGS_routineAttributes constinArgument1,
                                                                                                                                                                                                                                              const class GGS_objectIR constinArgument2,
                                                                                                                                                                                                                                              const class GGS_lstring constinArgument3,
                                                                                                                                                                                                                                              const class GGS_effectiveArgumentListAST constinArgument4,
                                                                                                                                                                                                                                              const class GGS_semanticContext constinArgument5,
                                                                                                                                                                                                                                              const class GGS_mode constinArgument6,
                                                                                                                                                                                                                                              class GGS_semanticTemporariesStruct & ioArgument7,
                                                                                                                                                                                                                                              class GGS_staticEntityMap & ioArgument8,
                                                                                                                                                                                                                                              class GGS_universalValuedObjectMap & ioArgument9,
                                                                                                                                                                                                                                              class GGS_allocaList & ioArgument10,
                                                                                                                                                                                                                                              class GGS_instructionListIR & ioArgument11,
                                                                                                                                                                                                                                              class GGS_procCallEffectiveParameterListIR & outArgument12,
                                                                                                                                                                                                                                              class GGS_lstring & outArgument13,
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

