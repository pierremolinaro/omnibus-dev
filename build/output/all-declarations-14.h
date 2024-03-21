#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

//--------------------------------------------------------------------------------------------------
//
//Function 'infixOperatorFunctionName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_infixOperatorFunctionName (const class GALGAS_omnibusType & constinArgument0,
                                                        const class GALGAS_omnibusInfixOperator & constinArgument1,
                                                        const class GALGAS_omnibusType & constinArgument2,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'prefixOperatorFunctionName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_prefixOperatorFunctionName (const class GALGAS_omnibusType & constinArgument0,
                                                         const class GALGAS_prefixOperator & constinArgument1,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleArrayAccessInAssignment?self&&?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList????'
//
//--------------------------------------------------------------------------------------------------

void routine_handleArrayAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F__3F__3F_ (const class GALGAS_omnibusType constinArgument0,
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
                                                                                                                                                                                                                                      class Compiler * inCompiler
                                                                                                                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccessInAssignment?self&&?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList??'
//
//--------------------------------------------------------------------------------------------------

void routine_handlePropertyAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F_ (const class GALGAS_omnibusType constinArgument0,
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
                                                                                                                                                                                                                                 class Compiler * inCompiler
                                                                                                                                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNextOperandInAssignment?self&&??routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNextOperandInAssignment_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList (const class GALGAS_omnibusType constinArgument0,
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
                                                                                                                                                                                                                          class Compiler * inCompiler
                                                                                                                                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enter_NOP_function&'
//
//--------------------------------------------------------------------------------------------------

void routine_enter_5F_NOP_5F_function_26_ (class GALGAS_declarationListAST & ioArgument0,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeGuardCall?self?routineAttributes?receiver?guardName?effective?context?requiredMode&temporary&staticEntityMap&variableMap&alloca&instructionListIR!effectiveIR!guardMangledName'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeGuardCall_3F_self_3F_routineAttributes_3F_receiver_3F_guardName_3F_effective_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_21_effectiveIR_21_guardMangledName (const class GALGAS_omnibusType constinArgument0,
                                                                                                                                                                                                                                              const class GALGAS_routineAttributes constinArgument1,
                                                                                                                                                                                                                                              const class GALGAS_objectIR constinArgument2,
                                                                                                                                                                                                                                              const class GALGAS_lstring constinArgument3,
                                                                                                                                                                                                                                              const class GALGAS_effectiveArgumentListAST constinArgument4,
                                                                                                                                                                                                                                              const class GALGAS_semanticContext constinArgument5,
                                                                                                                                                                                                                                              const class GALGAS_mode constinArgument6,
                                                                                                                                                                                                                                              class GALGAS_semanticTemporariesStruct & ioArgument7,
                                                                                                                                                                                                                                              class GALGAS_staticEntityMap & ioArgument8,
                                                                                                                                                                                                                                              class GALGAS_universalValuedObjectMap & ioArgument9,
                                                                                                                                                                                                                                              class GALGAS_allocaList & ioArgument10,
                                                                                                                                                                                                                                              class GALGAS_instructionListIR & ioArgument11,
                                                                                                                                                                                                                                              class GALGAS_procCallEffectiveParameterListIR & outArgument12,
                                                                                                                                                                                                                                              class GALGAS_lstring & outArgument13,
                                                                                                                                                                                                                                              class Compiler * inCompiler
                                                                                                                                                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'waitForGuardChangeFunctionName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_waitForGuardChangeFunctionName (class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleArrayAccess?self&&?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR????'
//
//--------------------------------------------------------------------------------------------------

void routine_handleArrayAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F__3F__3F_ (const class GALGAS_omnibusType constinArgument0,
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
                                                                                                                                                                                      const class GALGAS_expressionAST constinArgument11,
                                                                                                                                                                                      const class GALGAS_location constinArgument12,
                                                                                                                                                                                      const class GALGAS_bool constinArgument13,
                                                                                                                                                                                      const class GALGAS_LValueOperandAST constinArgument14,
                                                                                                                                                                                      class Compiler * inCompiler
                                                                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccess?self&&?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR??'
//
//--------------------------------------------------------------------------------------------------

void routine_handlePropertyAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F_ (const class GALGAS_omnibusType constinArgument0,
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
                                                                                                                                                                                 const class GALGAS_lstring constinArgument11,
                                                                                                                                                                                 const class GALGAS_LValueOperandAST constinArgument12,
                                                                                                                                                                                 class Compiler * inCompiler
                                                                                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNextOperand?self&&??routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNextOperand_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR (const class GALGAS_omnibusType constinArgument0,
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
                                                                                                                                                                          class Compiler * inCompiler
                                                                                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'memoryAllocSectionName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_memoryAllocSectionName (class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'memoryFreeSectionName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_memoryFreeSectionName (class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

