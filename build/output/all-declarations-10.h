#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-9.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Function 'interruptNameForInvocationGraph'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_lstring function_interruptNameForInvocationGraph (const class GALGAS_lstring & constinArgument0,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'analyzeEffectiveParameters'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_analyzeEffectiveParameters (const class GALGAS_PLMType constinArgument0,
                                         const class GALGAS_routineAttributes constinArgument1,
                                         const class GALGAS_routineTypedSignature constinArgument2,
                                         const class GALGAS_effectiveArgumentListAST constinArgument3,
                                         const class GALGAS_location constinArgument4,
                                         const class GALGAS_lstring constinArgument5,
                                         const class GALGAS_semanticContext constinArgument6,
                                         const class GALGAS_mode constinArgument7,
                                         class GALGAS_semanticTemporariesStruct & ioArgument8,
                                         class GALGAS_staticEntityMap & ioArgument9,
                                         class GALGAS_universalValuedObjectMap & ioArgument10,
                                         class GALGAS_allocaList & ioArgument11,
                                         class GALGAS_instructionListIR & ioArgument12,
                                         class GALGAS_procCallEffectiveParameterListIR & ioArgument13,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Function 'getInfixOperatorMap'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_infixOperatorMap function_getInfixOperatorMap (const class GALGAS_infixOperator & constinArgument0,
                                                            const class GALGAS_semanticContext & constinArgument1,
                                                            const class GALGAS_mode & constinArgument2,
                                                            const class GALGAS_location & constinArgument3,
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
                               const class GALGAS_lstring constinArgument5,
                               const class GALGAS_semanticContext constinArgument6,
                               const class GALGAS_mode constinArgument7,
                               class GALGAS_semanticTemporariesStruct & ioArgument8,
                               class GALGAS_staticEntityMap & ioArgument9,
                               class GALGAS_universalValuedObjectMap & ioArgument10,
                               class GALGAS_allocaList & ioArgument11,
                               class GALGAS_instructionListIR & ioArgument12,
                               class GALGAS_procCallEffectiveParameterListIR & outArgument13,
                               class GALGAS_lstring & outArgument14,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'analyzeStandaloneGuardCall'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_analyzeStandaloneGuardCall (const class GALGAS_PLMType constinArgument0,
                                         const class GALGAS_routineAttributes constinArgument1,
                                         const class GALGAS_lstring constinArgument2,
                                         const class GALGAS_effectiveArgumentListAST constinArgument3,
                                         const class GALGAS_lstring constinArgument4,
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

