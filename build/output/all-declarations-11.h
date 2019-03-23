#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-10.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Routine 'enter_NOP_function'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enter_5F_NOP_5F_function (class GALGAS_functionDeclarationListAST & ioArgument0,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'analyzeGuardCall'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_analyzeGuardCall (const class GALGAS_PLMType constinArgument0,
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
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Function 'waitForGuardChangeFunctionName'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string function_waitForGuardChangeFunctionName (class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'handleArrayAccess'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_handleArrayAccess (const class GALGAS_PLMType constinArgument0,
                                class GALGAS_PLMType & ioArgument1,
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
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'handlePropertyAccess'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_handlePropertyAccess (const class GALGAS_PLMType constinArgument0,
                                   class GALGAS_PLMType & ioArgument1,
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
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'handleNextOperand'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_handleNextOperand (const class GALGAS_PLMType constinArgument0,
                                class GALGAS_PLMType & ioArgument1,
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
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Function 'memoryAllocSectionName'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string function_memoryAllocSectionName (class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Function 'memoryFreeSectionName'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string function_memoryFreeSectionName (class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'codeOptimization'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_codeOptimization (const class GALGAS_string constinArgument0,
                               class GALGAS_intermediateCodeStruct & ioArgument1,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Routine 'displayInvocationGraph'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_displayInvocationGraph (const class GALGAS_routineListIR constinArgument0,
                                     const class GALGAS_string constinArgument1,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Function 'asSeparatorLine'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string function_asSeparatorLine (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Function 'asTitleComment'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string function_asTitleComment (const class GALGAS_string & constinArgument0,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Routine 'codeGeneration'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_codeGeneration (const class GALGAS_string constinArgument0,
                             const class GALGAS_string constinArgument1,
                             const class GALGAS_location constinArgument2,
                             const class GALGAS_intermediateCodeStruct constinArgument3,
                             const class GALGAS_userLLVMTypeDefinitionListIR constinArgument4,
                             const class GALGAS_lstring constinArgument5,
                             const class GALGAS_PLMType constinArgument6,
                             const class GALGAS_PLMType constinArgument7,
                             const class GALGAS_availableInterruptMap constinArgument8,
                             const class GALGAS_staticListInitializationMap constinArgument9,
                             const class GALGAS_targetParameters constinArgument10,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'generateCodeFiles'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateCodeFiles (const class GALGAS_string constinArgument0,
                                const class GALGAS_string constinArgument1,
                                const class GALGAS_intermediateCodeStruct constinArgument2,
                                const class GALGAS_userLLVMTypeDefinitionListIR constinArgument3,
                                const class GALGAS_lstring constinArgument4,
                                const class GALGAS_PLMType constinArgument5,
                                const class GALGAS_PLMType constinArgument6,
                                const class GALGAS_availableInterruptMap constinArgument7,
                                const class GALGAS_staticListInitializationMap constinArgument8,
                                const class GALGAS_targetParameters constinArgument9,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Routine 'generateTarget'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateTarget (const class GALGAS_string constinArgument0,
                             const class GALGAS_string constinArgument1,
                             const class GALGAS_lstring constinArgument2,
                             const class GALGAS_targetParameters constinArgument3,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

