#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-6.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'llvmNameForFunction'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForFunction (GALGAS_string inArgument_inName,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("func.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 122)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 122)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForFunction [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForFunction (C_Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GALGAS_location & /* §§ inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForFunction (operand0,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForFunction ("llvmNameForFunction",
                                                                     functionWithGenericHeader_llvmNameForFunction,
                                                                     & kTypeDescriptor_GALGAS_string,
                                                                     1,
                                                                     functionArgs_llvmNameForFunction) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'interruptNameForInvocationGraph'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_interruptNameForInvocationGraph (GALGAS_lstring inArgument_inName,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outName ; // Returned variable
  GALGAS_string var_s_5035 = GALGAS_string ("interrupt ").add_operation (inArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 130)) ;
  result_outName = GALGAS_lstring::constructor_new (var_s_5035, inArgument_inName.mAttribute_location  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 131)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_interruptNameForInvocationGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_interruptNameForInvocationGraph (C_Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* §§ inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_interruptNameForInvocationGraph (operand0,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_interruptNameForInvocationGraph ("interruptNameForInvocationGraph",
                                                                                 functionWithGenericHeader_interruptNameForInvocationGraph,
                                                                                 & kTypeDescriptor_GALGAS_lstring,
                                                                                 1,
                                                                                 functionArgs_interruptNameForInvocationGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'llvmNameForInterrupt'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_llvmNameForInterrupt (GALGAS_lstring inArgument_inName,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outName ; // Returned variable
  result_outName = GALGAS_lstring::constructor_new (GALGAS_string ("interrupt.").add_operation (inArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 137)), inArgument_inName.mAttribute_location  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 137)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForInterrupt [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForInterrupt (C_Compiler * inCompiler,
                                                                     const cObjectArray & inEffectiveParameterArray,
                                                                     const GALGAS_location & /* §§ inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmNameForInterrupt (operand0,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForInterrupt ("llvmNameForInterrupt",
                                                                      functionWithGenericHeader_llvmNameForInterrupt,
                                                                      & kTypeDescriptor_GALGAS_lstring,
                                                                      1,
                                                                      functionArgs_llvmNameForInterrupt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Function 'llvmNameForISR'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForISR (GALGAS_string inArgument_inName,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("isr.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 143)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForISR [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForISR (C_Compiler * inCompiler,
                                                               const cObjectArray & inEffectiveParameterArray,
                                                               const GALGAS_location & /* §§ inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForISR (operand0,
                                  inCompiler
                                  COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForISR ("llvmNameForISR",
                                                                functionWithGenericHeader_llvmNameForISR,
                                                                & kTypeDescriptor_GALGAS_string,
                                                                1,
                                                                functionArgs_llvmNameForISR) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'llvmNameForPrimitiveCall'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForPrimitiveCall (GALGAS_string inArgument_inName,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("primitive.call.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 151)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 151)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForPrimitiveCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForPrimitiveCall (C_Compiler * inCompiler,
                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                         const GALGAS_location & /* §§ inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForPrimitiveCall (operand0,
                                            inCompiler
                                            COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForPrimitiveCall ("llvmNameForPrimitiveCall",
                                                                          functionWithGenericHeader_llvmNameForPrimitiveCall,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          1,
                                                                          functionArgs_llvmNameForPrimitiveCall) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Function 'llvmNameForPrimitiveImplementation'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForPrimitiveImplementation (GALGAS_string inArgument_inName,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("primitive.implementation.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 157)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 157)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForPrimitiveImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForPrimitiveImplementation (C_Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* §§ inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForPrimitiveImplementation (operand0,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForPrimitiveImplementation ("llvmNameForPrimitiveImplementation",
                                                                                    functionWithGenericHeader_llvmNameForPrimitiveImplementation,
                                                                                    & kTypeDescriptor_GALGAS_string,
                                                                                    1,
                                                                                    functionArgs_llvmNameForPrimitiveImplementation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'llvmNameForServiceCall'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForServiceCall (GALGAS_string inArgument_inName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("service.call.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 165)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 165)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForServiceCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForServiceCall (C_Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GALGAS_location & /* §§ inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForServiceCall (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForServiceCall ("llvmNameForServiceCall",
                                                                        functionWithGenericHeader_llvmNameForServiceCall,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_llvmNameForServiceCall) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'llvmNameForServiceImplementation'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForServiceImplementation (GALGAS_string inArgument_inName,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("service.implementation.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 171)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 171)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForServiceImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForServiceImplementation (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* §§ inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForServiceImplementation (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForServiceImplementation ("llvmNameForServiceImplementation",
                                                                                  functionWithGenericHeader_llvmNameForServiceImplementation,
                                                                                  & kTypeDescriptor_GALGAS_string,
                                                                                  1,
                                                                                  functionArgs_llvmNameForServiceImplementation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'llvmNameForSectionCall'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForSectionCall (GALGAS_string inArgument_inName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("section.call.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 179)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 179)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForSectionCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForSectionCall (C_Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GALGAS_location & /* §§ inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForSectionCall (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionCall ("llvmNameForSectionCall",
                                                                        functionWithGenericHeader_llvmNameForSectionCall,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_llvmNameForSectionCall) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'llvmNameForSectionImplementation'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForSectionImplementation (GALGAS_string inArgument_inName,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("section.implementation.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 185)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 185)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForSectionImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForSectionImplementation (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* §§ inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForSectionImplementation (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionImplementation ("llvmNameForSectionImplementation",
                                                                                  functionWithGenericHeader_llvmNameForSectionImplementation,
                                                                                  & kTypeDescriptor_GALGAS_string,
                                                                                  1,
                                                                                  functionArgs_llvmNameForSectionImplementation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'acceptVariableName'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_acceptVariableName (C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("accept") ;
//---
  return result_outName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_acceptVariableName = false ;
static GALGAS_string gOnceFunctionResult_acceptVariableName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_acceptVariableName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_acceptVariableName) {
    gOnceFunctionResult_acceptVariableName = onceFunction_acceptVariableName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_acceptVariableName = true ;
  }
  return gOnceFunctionResult_acceptVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_acceptVariableName (void) {
  gOnceFunctionResult_acceptVariableName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_acceptVariableName (NULL,
                                                                releaseOnceFunctionResult_acceptVariableName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_acceptVariableName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_acceptVariableName (C_Compiler * inCompiler,
                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  return function_acceptVariableName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_acceptVariableName ("acceptVariableName",
                                                                    functionWithGenericHeader_acceptVariableName,
                                                                    & kTypeDescriptor_GALGAS_string,
                                                                    0,
                                                                    functionArgs_acceptVariableName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'llvmNameForGuardCall'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForGuardCall (GALGAS_string inArgument_inName,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("guard.call.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 199)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 199)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForGuardCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForGuardCall (C_Compiler * inCompiler,
                                                                     const cObjectArray & inEffectiveParameterArray,
                                                                     const GALGAS_location & /* §§ inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForGuardCall (operand0,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForGuardCall ("llvmNameForGuardCall",
                                                                      functionWithGenericHeader_llvmNameForGuardCall,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      1,
                                                                      functionArgs_llvmNameForGuardCall) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Function 'llvmNameForGuardImplementation'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForGuardImplementation (GALGAS_string inArgument_inName,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("guard.implementation.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 205)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 205)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForGuardImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForGuardImplementation (C_Compiler * inCompiler,
                                                                               const cObjectArray & inEffectiveParameterArray,
                                                                               const GALGAS_location & /* §§ inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForGuardImplementation (operand0,
                                                  inCompiler
                                                  COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForGuardImplementation ("llvmNameForGuardImplementation",
                                                                                functionWithGenericHeader_llvmNameForGuardImplementation,
                                                                                & kTypeDescriptor_GALGAS_string,
                                                                                1,
                                                                                functionArgs_llvmNameForGuardImplementation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Once function 'waitForGuardChangeFunctionName'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_waitForGuardChangeFunctionName (C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("waitForGuardChange") ;
//---
  return result_outName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_waitForGuardChangeFunctionName = false ;
static GALGAS_string gOnceFunctionResult_waitForGuardChangeFunctionName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_waitForGuardChangeFunctionName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_waitForGuardChangeFunctionName) {
    gOnceFunctionResult_waitForGuardChangeFunctionName = onceFunction_waitForGuardChangeFunctionName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_waitForGuardChangeFunctionName = true ;
  }
  return gOnceFunctionResult_waitForGuardChangeFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_waitForGuardChangeFunctionName (void) {
  gOnceFunctionResult_waitForGuardChangeFunctionName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_waitForGuardChangeFunctionName (NULL,
                                                                            releaseOnceFunctionResult_waitForGuardChangeFunctionName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_waitForGuardChangeFunctionName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_waitForGuardChangeFunctionName (C_Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_waitForGuardChangeFunctionName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_waitForGuardChangeFunctionName ("waitForGuardChangeFunctionName",
                                                                                functionWithGenericHeader_waitForGuardChangeFunctionName,
                                                                                & kTypeDescriptor_GALGAS_string,
                                                                                0,
                                                                                functionArgs_waitForGuardChangeFunctionName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'llvmNameForLocalVariable'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForLocalVariable (GALGAS_string inArgument_inName,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("var.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 219)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 219)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForLocalVariable [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForLocalVariable (C_Compiler * inCompiler,
                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                         const GALGAS_location & /* §§ inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForLocalVariable (operand0,
                                            inCompiler
                                            COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForLocalVariable ("llvmNameForLocalVariable",
                                                                          functionWithGenericHeader_llvmNameForLocalVariable,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          1,
                                                                          functionArgs_llvmNameForLocalVariable) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'llvmNameForGlobalVariable'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForGlobalVariable (GALGAS_string inArgument_inName,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("gvar.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 225)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 225)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForGlobalVariable [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForGlobalVariable (C_Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GALGAS_location & /* §§ inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForGlobalVariable (operand0,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForGlobalVariable ("llvmNameForGlobalVariable",
                                                                           functionWithGenericHeader_llvmNameForGlobalVariable,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_llvmNameForGlobalVariable) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'llvmNameForRegister'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForRegister (GALGAS_string inArgument_inName,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("register.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 231)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 231)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForRegister [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForRegister (C_Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GALGAS_location & /* §§ inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForRegister (operand0,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForRegister ("llvmNameForRegister",
                                                                     functionWithGenericHeader_llvmNameForRegister,
                                                                     & kTypeDescriptor_GALGAS_string,
                                                                     1,
                                                                     functionArgs_llvmNameForRegister) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'mutatingAttribute'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_mutatingAttribute (C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("mutating") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_mutatingAttribute = false ;
static GALGAS_string gOnceFunctionResult_mutatingAttribute ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_mutatingAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_mutatingAttribute) {
    gOnceFunctionResult_mutatingAttribute = onceFunction_mutatingAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_mutatingAttribute = true ;
  }
  return gOnceFunctionResult_mutatingAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_mutatingAttribute (void) {
  gOnceFunctionResult_mutatingAttribute.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_mutatingAttribute (NULL,
                                                               releaseOnceFunctionResult_mutatingAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_mutatingAttribute [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_mutatingAttribute (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_mutatingAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_mutatingAttribute ("mutatingAttribute",
                                                                   functionWithGenericHeader_mutatingAttribute,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_mutatingAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'userAccessAttribute'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_userAccessAttribute (C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("userAccess") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_userAccessAttribute = false ;
static GALGAS_string gOnceFunctionResult_userAccessAttribute ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_userAccessAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_userAccessAttribute) {
    gOnceFunctionResult_userAccessAttribute = onceFunction_userAccessAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_userAccessAttribute = true ;
  }
  return gOnceFunctionResult_userAccessAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_userAccessAttribute (void) {
  gOnceFunctionResult_userAccessAttribute.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_userAccessAttribute (NULL,
                                                                 releaseOnceFunctionResult_userAccessAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_userAccessAttribute [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_userAccessAttribute (C_Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_userAccessAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_userAccessAttribute ("userAccessAttribute",
                                                                     functionWithGenericHeader_userAccessAttribute,
                                                                     & kTypeDescriptor_GALGAS_string,
                                                                     0,
                                                                     functionArgs_userAccessAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Once function 'noUnusedWarningAttribute'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_noUnusedWarningAttribute (C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("noUnusedWarning") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_noUnusedWarningAttribute = false ;
static GALGAS_string gOnceFunctionResult_noUnusedWarningAttribute ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_noUnusedWarningAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_noUnusedWarningAttribute) {
    gOnceFunctionResult_noUnusedWarningAttribute = onceFunction_noUnusedWarningAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_noUnusedWarningAttribute = true ;
  }
  return gOnceFunctionResult_noUnusedWarningAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_noUnusedWarningAttribute (void) {
  gOnceFunctionResult_noUnusedWarningAttribute.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_noUnusedWarningAttribute (NULL,
                                                                      releaseOnceFunctionResult_noUnusedWarningAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_noUnusedWarningAttribute [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_noUnusedWarningAttribute (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_noUnusedWarningAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_noUnusedWarningAttribute ("noUnusedWarningAttribute",
                                                                          functionWithGenericHeader_noUnusedWarningAttribute,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          0,
                                                                          functionArgs_noUnusedWarningAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Once function 'globalAttribute'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_globalAttribute (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("global") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_globalAttribute = false ;
static GALGAS_string gOnceFunctionResult_globalAttribute ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_globalAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_globalAttribute) {
    gOnceFunctionResult_globalAttribute = onceFunction_globalAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_globalAttribute = true ;
  }
  return gOnceFunctionResult_globalAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_globalAttribute (void) {
  gOnceFunctionResult_globalAttribute.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_globalAttribute (NULL,
                                                             releaseOnceFunctionResult_globalAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_globalAttribute [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_globalAttribute (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_globalAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_globalAttribute ("globalAttribute",
                                                                 functionWithGenericHeader_globalAttribute,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_globalAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'weakAttribute'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_weakAttribute (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("weak") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_weakAttribute = false ;
static GALGAS_string gOnceFunctionResult_weakAttribute ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_weakAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_weakAttribute) {
    gOnceFunctionResult_weakAttribute = onceFunction_weakAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_weakAttribute = true ;
  }
  return gOnceFunctionResult_weakAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_weakAttribute (void) {
  gOnceFunctionResult_weakAttribute.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_weakAttribute (NULL,
                                                           releaseOnceFunctionResult_weakAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_weakAttribute [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_weakAttribute (C_Compiler * inCompiler,
                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                              const GALGAS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  return function_weakAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_weakAttribute ("weakAttribute",
                                                               functionWithGenericHeader_weakAttribute,
                                                               & kTypeDescriptor_GALGAS_string,
                                                               0,
                                                               functionArgs_weakAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Function 'taskProcNameForInvocationGraph'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_taskProcNameForInvocationGraph (GALGAS_string inArgument_inTaskName,
                                                        GALGAS_lstring inArgument_inProcName,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outName ; // Returned variable
  GALGAS_string var_s_11019 = GALGAS_string ("taskproc ").add_operation (inArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 271)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 271)).add_operation (inArgument_inProcName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 271)) ;
  result_outName = GALGAS_lstring::constructor_new (var_s_11019, inArgument_inProcName.mAttribute_location  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 272)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_taskProcNameForInvocationGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_taskProcNameForInvocationGraph (C_Compiler * inCompiler,
                                                                               const cObjectArray & inEffectiveParameterArray,
                                                                               const GALGAS_location & /* §§ inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_taskProcNameForInvocationGraph (operand0,
                                                  operand1,
                                                  inCompiler
                                                  COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_taskProcNameForInvocationGraph ("taskProcNameForInvocationGraph",
                                                                                functionWithGenericHeader_taskProcNameForInvocationGraph,
                                                                                & kTypeDescriptor_GALGAS_lstring,
                                                                                2,
                                                                                functionArgs_taskProcNameForInvocationGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'stackNameForTask'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_stackNameForTask (const GALGAS_string & constinArgument_inTaskName,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("@").add_operation (GALGAS_string ("task.stack.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 278)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 278)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_stackNameForTask [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_stackNameForTask (C_Compiler * inCompiler,
                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                 const GALGAS_location & /* §§ inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_stackNameForTask (operand0,
                                    inCompiler
                                    COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_stackNameForTask ("stackNameForTask",
                                                                  functionWithGenericHeader_stackNameForTask,
                                                                  & kTypeDescriptor_GALGAS_string,
                                                                  1,
                                                                  functionArgs_stackNameForTask) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'initNameForTaskType'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_initNameForTaskType (const GALGAS_string & constinArgument_inTaskTypeName,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("@").add_operation (GALGAS_string ("task.init.$").add_operation (constinArgument_inTaskTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 284)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 284)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_initNameForTaskType [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_initNameForTaskType (C_Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GALGAS_location & /* §§ inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_initNameForTaskType (operand0,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_initNameForTaskType ("initNameForTaskType",
                                                                     functionWithGenericHeader_initNameForTaskType,
                                                                     & kTypeDescriptor_GALGAS_string,
                                                                     1,
                                                                     functionArgs_initNameForTaskType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'stackAddressForTask'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_stackAddressForTask (const GALGAS_string & constinArgument_inTaskName,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("%").add_operation (GALGAS_string ("task.stack.address.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 290)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 290)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_stackAddressForTask [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_stackAddressForTask (C_Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GALGAS_location & /* §§ inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_stackAddressForTask (operand0,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_stackAddressForTask ("stackAddressForTask",
                                                                     functionWithGenericHeader_stackAddressForTask,
                                                                     & kTypeDescriptor_GALGAS_string,
                                                                     1,
                                                                     functionArgs_stackAddressForTask) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'mainRoutineNameForTask'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_mainRoutineNameForTask (const GALGAS_string & constinArgument_inTaskName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("@").add_operation (GALGAS_string ("task.main.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 296)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 296)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_mainRoutineNameForTask [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_mainRoutineNameForTask (C_Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GALGAS_location & /* §§ inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_mainRoutineNameForTask (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_mainRoutineNameForTask ("mainRoutineNameForTask",
                                                                        functionWithGenericHeader_mainRoutineNameForTask,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_mainRoutineNameForTask) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'llvmNameForTaskGlobalVar'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForTaskGlobalVar (GALGAS_string inArgument_inTaskName,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("task.globalvar.").add_operation (inArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 302)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 302)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForTaskGlobalVar [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForTaskGlobalVar (C_Compiler * inCompiler,
                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                         const GALGAS_location & /* §§ inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForTaskGlobalVar (operand0,
                                            inCompiler
                                            COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForTaskGlobalVar ("llvmNameForTaskGlobalVar",
                                                                          functionWithGenericHeader_llvmNameForTaskGlobalVar,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          1,
                                                                          functionArgs_llvmNameForTaskGlobalVar) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'llvmNameForTaskVariable'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForTaskVariable (GALGAS_string inArgument_inTaskName,
                                                GALGAS_string inArgument_inVarName,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("task.var.").add_operation (inArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 308)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 308)).add_operation (inArgument_inVarName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 308)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 308)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForTaskVariable [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForTaskVariable (C_Compiler * inCompiler,
                                                                        const cObjectArray & inEffectiveParameterArray,
                                                                        const GALGAS_location & /* §§ inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_string operand1 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForTaskVariable (operand0,
                                           operand1,
                                           inCompiler
                                           COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForTaskVariable ("llvmNameForTaskVariable",
                                                                         functionWithGenericHeader_llvmNameForTaskVariable,
                                                                         & kTypeDescriptor_GALGAS_string,
                                                                         2,
                                                                         functionArgs_llvmNameForTaskVariable) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Once function 'llvmNameForTaskLoopFunction'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_llvmNameForTaskLoopFunction (C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("task$loop") ;
//---
  return result_outName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_llvmNameForTaskLoopFunction = false ;
static GALGAS_string gOnceFunctionResult_llvmNameForTaskLoopFunction ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForTaskLoopFunction (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForTaskLoopFunction) {
    gOnceFunctionResult_llvmNameForTaskLoopFunction = onceFunction_llvmNameForTaskLoopFunction (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForTaskLoopFunction = true ;
  }
  return gOnceFunctionResult_llvmNameForTaskLoopFunction ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_llvmNameForTaskLoopFunction (void) {
  gOnceFunctionResult_llvmNameForTaskLoopFunction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_llvmNameForTaskLoopFunction (NULL,
                                                                         releaseOnceFunctionResult_llvmNameForTaskLoopFunction) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForTaskLoopFunction [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForTaskLoopFunction (C_Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_llvmNameForTaskLoopFunction (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForTaskLoopFunction ("llvmNameForTaskLoopFunction",
                                                                             functionWithGenericHeader_llvmNameForTaskLoopFunction,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             0,
                                                                             functionArgs_llvmNameForTaskLoopFunction) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Once function 'llvmNameForTaskSelfTerminateService'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_llvmNameForTaskSelfTerminateService (C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("self.terminate") ;
//---
  return result_outName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_llvmNameForTaskSelfTerminateService = false ;
static GALGAS_string gOnceFunctionResult_llvmNameForTaskSelfTerminateService ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForTaskSelfTerminateService (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForTaskSelfTerminateService) {
    gOnceFunctionResult_llvmNameForTaskSelfTerminateService = onceFunction_llvmNameForTaskSelfTerminateService (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForTaskSelfTerminateService = true ;
  }
  return gOnceFunctionResult_llvmNameForTaskSelfTerminateService ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_llvmNameForTaskSelfTerminateService (void) {
  gOnceFunctionResult_llvmNameForTaskSelfTerminateService.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_llvmNameForTaskSelfTerminateService (NULL,
                                                                                 releaseOnceFunctionResult_llvmNameForTaskSelfTerminateService) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForTaskSelfTerminateService [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForTaskSelfTerminateService (C_Compiler * inCompiler,
                                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                                    const GALGAS_location & /* inErrorLocation */
                                                                                    COMMA_LOCATION_ARGS) {
  return function_llvmNameForTaskSelfTerminateService (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForTaskSelfTerminateService ("llvmNameForTaskSelfTerminateService",
                                                                                     functionWithGenericHeader_llvmNameForTaskSelfTerminateService,
                                                                                     & kTypeDescriptor_GALGAS_string,
                                                                                     0,
                                                                                     functionArgs_llvmNameForTaskSelfTerminateService) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'codeOptimisation'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_codeOptimisation (GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMapIR var_initialProcedureMap_2540 = ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR ;
  GALGAS_guardMapIR var_initialGuardMap_2603 = ioArgument_ioIntermediateCodeStruct.mAttribute_mGuardMapIR ;
  GALGAS_uint var_pass_2655 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_bool var_optimizing_2678 = GALGAS_bool (true) ;
  if (ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.getter_count (SOURCE_FILE ("code-optimisation.galgas", 56)).add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mGuardMapIR.getter_count (SOURCE_FILE ("code-optimisation.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 56)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 56)).isValid ()) {
    uint32_t variant_2692 = ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.getter_count (SOURCE_FILE ("code-optimisation.galgas", 56)).add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mGuardMapIR.getter_count (SOURCE_FILE ("code-optimisation.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 56)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 56)).uintValue () ;
    bool loop_2692 = true ;
    while (loop_2692) {
      loop_2692 = var_optimizing_2678.isValid () ;
      if (loop_2692) {
        loop_2692 = var_optimizing_2678.boolValue () ;
      }
      if (loop_2692 && (0 == variant_2692)) {
        loop_2692 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("code-optimisation.galgas", 56)) ;
      }
      if (loop_2692) {
        variant_2692 -- ;
        var_optimizing_2678 = GALGAS_bool (false) ;
        var_pass_2655.increment_operation (inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 59)) ;
        const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_optimization_5F_displayDeadCodeElimination.getter_value ()).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_string var_s_2955 = GALGAS_string ("Optimisation pass ").add_operation (var_pass_2655.getter_string (SOURCE_FILE ("code-optimisation.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 62)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 62)) ;
          var_s_2955.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap.getter_count (SOURCE_FILE ("code-optimisation.galgas", 63)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 63)).add_operation (GALGAS_string (" static strings\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 63)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 63)) ;
          var_s_2955.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalConstantMap.getter_count (SOURCE_FILE ("code-optimisation.galgas", 64)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 64)).add_operation (GALGAS_string (" global constants\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 64)) ;
          var_s_2955.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalVariableMap.getter_count (SOURCE_FILE ("code-optimisation.galgas", 65)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 65)).add_operation (GALGAS_string (" global variables\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 65)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 65)) ;
          var_s_2955.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.getter_count (SOURCE_FILE ("code-optimisation.galgas", 66)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 66)).add_operation (GALGAS_string (" routines\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 66)) ;
          var_s_2955.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mGuardMapIR.getter_count (SOURCE_FILE ("code-optimisation.galgas", 67)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 67)).add_operation (GALGAS_string (" guards\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 67)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 67)) ;
          inCompiler->printMessage (var_s_2955  COMMA_SOURCE_FILE ("code-optimisation.galgas", 68)) ;
        }
        GALGAS_accessibleEntities var_accessibleEntities_3659 ;
        {
        routine_suppressInaccessibleSubprograms (ioArgument_ioIntermediateCodeStruct, var_accessibleEntities_3659, var_optimizing_2678, inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 71)) ;
        }
        GALGAS_globalConstantMapIR var_globalConstantMap_3759 = GALGAS_globalConstantMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 77)) ;
        cEnumerator_globalConstantMapIR enumerator_3828 (ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalConstantMap, kEnumeration_up) ;
        while (enumerator_3828.hasCurrentObject ()) {
          const enumGalgasBool test_1 = var_accessibleEntities_3659.mAttribute_mGlobalVariableSet.getter_hasKey (enumerator_3828.current (HERE).mAttribute_lkey.mAttribute_string COMMA_SOURCE_FILE ("code-optimisation.galgas", 79)).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            var_globalConstantMap_3759.setter_insertKey (enumerator_3828.current (HERE).mAttribute_lkey, enumerator_3828.current (HERE).mAttribute_mType, enumerator_3828.current (HERE).mAttribute_mSourceExpression, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 80)) ;
            }
          }else if (kBoolFalse == test_1) {
            var_optimizing_2678 = GALGAS_bool (true) ;
          }
          enumerator_3828.gotoNextObject () ;
        }
        ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalConstantMap = var_globalConstantMap_3759 ;
        GALGAS_globalVariableMapIR var_globalVariableMap_4219 = GALGAS_globalVariableMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 87)) ;
        cEnumerator_globalVariableMapIR enumerator_4294 (ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalVariableMap, kEnumeration_up) ;
        while (enumerator_4294.hasCurrentObject ()) {
          const enumGalgasBool test_2 = var_accessibleEntities_3659.mAttribute_mGlobalVariableSet.getter_hasKey (enumerator_4294.current (HERE).mAttribute_lkey.mAttribute_string COMMA_SOURCE_FILE ("code-optimisation.galgas", 89)).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            var_globalVariableMap_4219.setter_insertKey (enumerator_4294.current (HERE).mAttribute_lkey, enumerator_4294.current (HERE).mAttribute_mType, enumerator_4294.current (HERE).mAttribute_mGenerateVolatile, enumerator_4294.current (HERE).mAttribute_mInitialValue, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 90)) ;
            }
          }else if (kBoolFalse == test_2) {
            var_optimizing_2678 = GALGAS_bool (true) ;
          }
          enumerator_4294.gotoNextObject () ;
        }
        ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalVariableMap = var_globalVariableMap_4219 ;
      }
    }
  }
  cEnumerator_routineMapIR enumerator_4772 (var_initialProcedureMap_2540, kEnumeration_up) ;
  while (enumerator_4772.hasCurrentObject ()) {
    GALGAS_bool test_3 = ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.getter_hasKey (enumerator_4772.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("code-optimisation.galgas", 104)).operator_not (SOURCE_FILE ("code-optimisation.galgas", 104)) ;
    if (kBoolTrue == test_3.boolEnum ()) {
      test_3 = enumerator_4772.current_mWarnIfUnused (HERE) ;
    }
    const enumGalgasBool test_4 = test_3.boolEnum () ;
    if (kBoolTrue == test_4) {
      inCompiler->emitSemanticWarning (enumerator_4772.current_lkey (HERE).getter_location (SOURCE_FILE ("code-optimisation.galgas", 105)), GALGAS_string ("unused procedure; use @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 105)).add_operation (GALGAS_string (" attribute for removing this warning"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 105))  COMMA_SOURCE_FILE ("code-optimisation.galgas", 105)) ;
    }
    enumerator_4772.gotoNextObject () ;
  }
  cEnumerator_guardMapIR enumerator_5056 (var_initialGuardMap_2603, kEnumeration_up) ;
  while (enumerator_5056.hasCurrentObject ()) {
    GALGAS_bool test_5 = ioArgument_ioIntermediateCodeStruct.mAttribute_mGuardMapIR.getter_hasKey (enumerator_5056.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("code-optimisation.galgas", 110)).operator_not (SOURCE_FILE ("code-optimisation.galgas", 110)) ;
    if (kBoolTrue == test_5.boolEnum ()) {
      test_5 = enumerator_5056.current_mWarnIfUnused (HERE) ;
    }
    const enumGalgasBool test_6 = test_5.boolEnum () ;
    if (kBoolTrue == test_6) {
      inCompiler->emitSemanticWarning (enumerator_5056.current_lkey (HERE).getter_location (SOURCE_FILE ("code-optimisation.galgas", 111)), GALGAS_string ("unused guard; use @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 111)).add_operation (GALGAS_string (" attribute for removing this warning"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 111))  COMMA_SOURCE_FILE ("code-optimisation.galgas", 111)) ;
    }
    enumerator_5056.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'suppressInaccessibleSubprograms'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_suppressInaccessibleSubprograms (GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                              GALGAS_accessibleEntities & outArgument_outAccessibleEntities,
                                              GALGAS_bool & ioArgument_ioOptimizing,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outAccessibleEntities.drop () ; // Release 'out' argument
  outArgument_outAccessibleEntities = GALGAS_accessibleEntities::constructor_default (SOURCE_FILE ("code-optimisation.galgas", 123)) ;
  GALGAS_routineMapIR var_accessibleProcedureMap_5664 = GALGAS_routineMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 124)) ;
  GALGAS_routineMapIR var_nonExploredProcedureMap_5709 = GALGAS_routineMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 125)) ;
  GALGAS_guardMapIR var_accessibleGuardMap_5747 = GALGAS_guardMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 126)) ;
  GALGAS_guardMapIR var_nonExploredGuardMap_5786 = ioArgument_ioIntermediateCodeStruct.mAttribute_mGuardMapIR ;
  cEnumerator_routineMapIR enumerator_5915 (ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR, kEnumeration_up) ;
  while (enumerator_5915.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_5915.current (HERE).mAttribute_mIsRequired.boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      var_accessibleProcedureMap_5664.setter_insertKey (enumerator_5915.current (HERE).mAttribute_lkey, enumerator_5915.current (HERE).mAttribute_mRoutineNameForGeneration, enumerator_5915.current (HERE).mAttribute_mFormalArgumentListForGeneration, enumerator_5915.current (HERE).mAttribute_mAllocaList, enumerator_5915.current (HERE).mAttribute_mInstructionGenerationList, enumerator_5915.current (HERE).mAttribute_mIsRequired, enumerator_5915.current (HERE).mAttribute_mWarnIfUnused, enumerator_5915.current (HERE).mAttribute_mWeak, enumerator_5915.current (HERE).mAttribute_mGlobal, enumerator_5915.current (HERE).mAttribute_mKind, enumerator_5915.current (HERE).mAttribute_mReturnType, enumerator_5915.current (HERE).mAttribute_mAppendFileAndLineArgumentForPanicLocation, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 131)) ;
      }
      extensionMethod_enterAccessibleEntities (enumerator_5915.current (HERE), outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mAttribute_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 145)) ;
      outArgument_outAccessibleEntities.mAttribute_mRoutineSet.addAssign_operation (enumerator_5915.current (HERE).mAttribute_mRoutineNameForGeneration.mAttribute_string  COMMA_SOURCE_FILE ("code-optimisation.galgas", 146)) ;
    }else if (kBoolFalse == test_0) {
      {
      var_nonExploredProcedureMap_5709.setter_insertKey (enumerator_5915.current (HERE).mAttribute_lkey, enumerator_5915.current (HERE).mAttribute_mRoutineNameForGeneration, enumerator_5915.current (HERE).mAttribute_mFormalArgumentListForGeneration, enumerator_5915.current (HERE).mAttribute_mAllocaList, enumerator_5915.current (HERE).mAttribute_mInstructionGenerationList, enumerator_5915.current (HERE).mAttribute_mIsRequired, enumerator_5915.current (HERE).mAttribute_mWarnIfUnused, enumerator_5915.current (HERE).mAttribute_mWeak, enumerator_5915.current (HERE).mAttribute_mGlobal, enumerator_5915.current (HERE).mAttribute_mKind, enumerator_5915.current (HERE).mAttribute_mReturnType, enumerator_5915.current (HERE).mAttribute_mAppendFileAndLineArgumentForPanicLocation, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 148)) ;
      }
    }
    enumerator_5915.gotoNextObject () ;
  }
  cEnumerator_bootListIR enumerator_7245 (ioArgument_ioIntermediateCodeStruct.mAttribute_mBootList, kEnumeration_up) ;
  while (enumerator_7245.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_7245.current (HERE).mAttribute_mInstructionListIR, outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mAttribute_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 166)) ;
    enumerator_7245.gotoNextObject () ;
  }
  cEnumerator_initListIR enumerator_7435 (ioArgument_ioIntermediateCodeStruct.mAttribute_mInitList, kEnumeration_up) ;
  while (enumerator_7435.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_7435.current (HERE).mAttribute_mInstructionListIR, outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mAttribute_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 169)) ;
    enumerator_7435.gotoNextObject () ;
  }
  cEnumerator_taskMapIR enumerator_7654 (ioArgument_ioIntermediateCodeStruct.mAttribute_mTaskMapIR, kEnumeration_up) ;
  while (enumerator_7654.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_7654.current (HERE).mAttribute_mInitInstructionListIR, outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mAttribute_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 173)) ;
    outArgument_outAccessibleEntities.mAttribute_mRoutineSet.addAssign_operation (GALGAS_string ("$").add_operation (enumerator_7654.current (HERE).mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 174)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 174)).add_operation (function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 174)).add_operation (GALGAS_string ("()"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 174))  COMMA_SOURCE_FILE ("code-optimisation.galgas", 174)) ;
    enumerator_7654.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("code-optimisation.galgas", 177)).boolEnum () ;
  if (kBoolTrue == test_1) {
    extensionMethod_enterAccessibleEntities (ioArgument_ioIntermediateCodeStruct.mAttribute_mPanicSetupInstructionListIR, outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mAttribute_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 178)) ;
    extensionMethod_enterAccessibleEntities (ioArgument_ioIntermediateCodeStruct.mAttribute_mPanicLoopInstructionListIR, outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mAttribute_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 182)) ;
  }
  extensionMethod_enterAccessibleEntities (ioArgument_ioIntermediateCodeStruct.mAttribute_mInterruptMapIR, outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mAttribute_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 188)) ;
  GALGAS_bool var_continues_8592 = GALGAS_bool (true) ;
  GALGAS_uint var_bound_8611 = ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.getter_count (SOURCE_FILE ("code-optimisation.galgas", 194)).add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mGuardMapIR.getter_count (SOURCE_FILE ("code-optimisation.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 194)) ;
  if (var_bound_8611.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 196)).isValid ()) {
    uint32_t variant_8718 = var_bound_8611.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 196)).uintValue () ;
    bool loop_8718 = true ;
    while (loop_8718) {
      loop_8718 = var_continues_8592.isValid () ;
      if (loop_8718) {
        loop_8718 = var_continues_8592.boolValue () ;
      }
      if (loop_8718 && (0 == variant_8718)) {
        loop_8718 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("code-optimisation.galgas", 196)) ;
      }
      if (loop_8718) {
        variant_8718 -- ;
        var_continues_8592 = GALGAS_bool (false) ;
        {
        routine_exploreProcs (var_accessibleProcedureMap_5664, outArgument_outAccessibleEntities, var_nonExploredProcedureMap_5709, var_continues_8592, ioArgument_ioIntermediateCodeStruct.mAttribute_mMaxBranchOfOnInstructions, inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 198)) ;
        }
        {
        routine_exploreGuards (var_accessibleGuardMap_5747, outArgument_outAccessibleEntities, var_nonExploredGuardMap_5786, var_continues_8592, ioArgument_ioIntermediateCodeStruct.mAttribute_mMaxBranchOfOnInstructions, inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 199)) ;
        }
      }
    }
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.objectCompare (var_accessibleProcedureMap_5664)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR = var_accessibleProcedureMap_5664 ;
    ioArgument_ioOptimizing = GALGAS_bool (true) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, ioArgument_ioIntermediateCodeStruct.mAttribute_mGuardMapIR.objectCompare (var_accessibleGuardMap_5747)).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioIntermediateCodeStruct.mAttribute_mGuardMapIR = var_accessibleGuardMap_5747 ;
    ioArgument_ioOptimizing = GALGAS_bool (true) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'exploreProcs'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_exploreProcs (GALGAS_routineMapIR & ioArgument_ioAccessibleProcedureMap,
                           GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                           GALGAS_routineMapIR & ioArgument_ioNonExploredProcedureMap,
                           GALGAS_bool & ioArgument_ioContinueExploreRoutines,
                           GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                           C_Compiler * inCompiler
                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMapIR var_exNonExploredProcedureMap_9829 = ioArgument_ioNonExploredProcedureMap ;
  ioArgument_ioNonExploredProcedureMap = GALGAS_routineMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 221)) ;
  cEnumerator_routineMapIR enumerator_9935 (var_exNonExploredProcedureMap_9829, kEnumeration_up) ;
  while (enumerator_9935.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioAccessibleEntities.mAttribute_mRoutineSet.getter_hasKey (enumerator_9935.current (HERE).mAttribute_mRoutineNameForGeneration.mAttribute_string COMMA_SOURCE_FILE ("code-optimisation.galgas", 223)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioAccessibleProcedureMap.setter_insertKey (enumerator_9935.current (HERE).mAttribute_lkey, enumerator_9935.current (HERE).mAttribute_mRoutineNameForGeneration, enumerator_9935.current (HERE).mAttribute_mFormalArgumentListForGeneration, enumerator_9935.current (HERE).mAttribute_mAllocaList, enumerator_9935.current (HERE).mAttribute_mInstructionGenerationList, enumerator_9935.current (HERE).mAttribute_mIsRequired, enumerator_9935.current (HERE).mAttribute_mWarnIfUnused, enumerator_9935.current (HERE).mAttribute_mWeak, enumerator_9935.current (HERE).mAttribute_mGlobal, enumerator_9935.current (HERE).mAttribute_mKind, enumerator_9935.current (HERE).mAttribute_mReturnType, enumerator_9935.current (HERE).mAttribute_mAppendFileAndLineArgumentForPanicLocation, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 224)) ;
      }
      extensionMethod_enterAccessibleEntities (enumerator_9935.current (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 238)) ;
      ioArgument_ioContinueExploreRoutines = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_0) {
      {
      ioArgument_ioNonExploredProcedureMap.setter_insertKey (enumerator_9935.current (HERE).mAttribute_lkey, enumerator_9935.current (HERE).mAttribute_mRoutineNameForGeneration, enumerator_9935.current (HERE).mAttribute_mFormalArgumentListForGeneration, enumerator_9935.current (HERE).mAttribute_mAllocaList, enumerator_9935.current (HERE).mAttribute_mInstructionGenerationList, enumerator_9935.current (HERE).mAttribute_mIsRequired, enumerator_9935.current (HERE).mAttribute_mWarnIfUnused, enumerator_9935.current (HERE).mAttribute_mWeak, enumerator_9935.current (HERE).mAttribute_mGlobal, enumerator_9935.current (HERE).mAttribute_mKind, enumerator_9935.current (HERE).mAttribute_mReturnType, enumerator_9935.current (HERE).mAttribute_mAppendFileAndLineArgumentForPanicLocation, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 241)) ;
      }
    }
    enumerator_9935.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'exploreGuards'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_exploreGuards (GALGAS_guardMapIR & ioArgument_ioAccessibleGuardMap,
                            GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                            GALGAS_guardMapIR & ioArgument_ioNonExploredGuardMap,
                            GALGAS_bool & ioArgument_ioContinueExploreRoutines,
                            GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                            C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guardMapIR var_exNonExploredGuardMap_11563 = ioArgument_ioNonExploredGuardMap ;
  ioArgument_ioNonExploredGuardMap = GALGAS_guardMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 269)) ;
  cEnumerator_guardMapIR enumerator_11653 (var_exNonExploredGuardMap_11563, kEnumeration_up) ;
  while (enumerator_11653.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioAccessibleEntities.mAttribute_mGuardSet.getter_hasKey (enumerator_11653.current (HERE).mAttribute_lkey.mAttribute_string COMMA_SOURCE_FILE ("code-optimisation.galgas", 271)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioAccessibleGuardMap.setter_insertKey (enumerator_11653.current (HERE).mAttribute_lkey, enumerator_11653.current (HERE).mAttribute_mFormalArgumentListForGeneration, enumerator_11653.current (HERE).mAttribute_mGuardKindGenerationIR, enumerator_11653.current (HERE).mAttribute_mAllocaList, enumerator_11653.current (HERE).mAttribute_mInstructionGenerationList, enumerator_11653.current (HERE).mAttribute_mWarnIfUnused, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 272)) ;
      }
      extensionMethod_enterAccessibleEntities (enumerator_11653.current (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 280)) ;
      ioArgument_ioContinueExploreRoutines = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_0) {
      {
      ioArgument_ioNonExploredGuardMap.setter_insertKey (enumerator_11653.current (HERE).mAttribute_lkey, enumerator_11653.current (HERE).mAttribute_mFormalArgumentListForGeneration, enumerator_11653.current (HERE).mAttribute_mGuardKindGenerationIR, enumerator_11653.current (HERE).mAttribute_mAllocaList, enumerator_11653.current (HERE).mAttribute_mInstructionGenerationList, enumerator_11653.current (HERE).mAttribute_mWarnIfUnused, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 283)) ;
      }
    }
    enumerator_11653.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'llvmSeparatorLine'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_llvmSeparatorLine (C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string (";-------------------------------------------------------------------------") ;
  result_outResult.plusAssign_operation(GALGAS_string ("---------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 70)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_llvmSeparatorLine = false ;
static GALGAS_string gOnceFunctionResult_llvmSeparatorLine ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmSeparatorLine (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmSeparatorLine) {
    gOnceFunctionResult_llvmSeparatorLine = onceFunction_llvmSeparatorLine (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmSeparatorLine = true ;
  }
  return gOnceFunctionResult_llvmSeparatorLine ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_llvmSeparatorLine (void) {
  gOnceFunctionResult_llvmSeparatorLine.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_llvmSeparatorLine (NULL,
                                                               releaseOnceFunctionResult_llvmSeparatorLine) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmSeparatorLine [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmSeparatorLine (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_llvmSeparatorLine (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmSeparatorLine ("llvmSeparatorLine",
                                                                   functionWithGenericHeader_llvmSeparatorLine,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_llvmSeparatorLine) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'llvmTitleComment'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmTitleComment (GALGAS_string inArgument_inTitle,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outTitle ; // Returned variable
  result_outTitle = function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 76)) ;
  result_outTitle.plusAssign_operation(GALGAS_string (";    ").add_operation (inArgument_inTitle.getter_stringByRightPadding (GALGAS_uint ((uint32_t) 114U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("code-generation.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 77)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 77)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 77)) ;
  result_outTitle.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 78)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 78)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 78)) ;
//---
  return result_outTitle ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmTitleComment [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmTitleComment (C_Compiler * inCompiler,
                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                 const GALGAS_location & /* §§ inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmTitleComment (operand0,
                                    inCompiler
                                    COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmTitleComment ("llvmTitleComment",
                                                                  functionWithGenericHeader_llvmTitleComment,
                                                                  & kTypeDescriptor_GALGAS_string,
                                                                  1,
                                                                  functionArgs_llvmTitleComment) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Once function 'asSeparatorLine'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_asSeparatorLine (C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("@-------------------------------------------------------------------------") ;
  result_outResult.plusAssign_operation(GALGAS_string ("---------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 85)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_asSeparatorLine = false ;
static GALGAS_string gOnceFunctionResult_asSeparatorLine ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_asSeparatorLine (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_asSeparatorLine) {
    gOnceFunctionResult_asSeparatorLine = onceFunction_asSeparatorLine (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_asSeparatorLine = true ;
  }
  return gOnceFunctionResult_asSeparatorLine ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_asSeparatorLine (void) {
  gOnceFunctionResult_asSeparatorLine.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_asSeparatorLine (NULL,
                                                             releaseOnceFunctionResult_asSeparatorLine) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_asSeparatorLine [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_asSeparatorLine (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_asSeparatorLine (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_asSeparatorLine ("asSeparatorLine",
                                                                 functionWithGenericHeader_asSeparatorLine,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_asSeparatorLine) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Function 'asTitleComment'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_asTitleComment (GALGAS_string inArgument_inTitle,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outTitle ; // Returned variable
  result_outTitle = function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 91)) ;
  result_outTitle.plusAssign_operation(GALGAS_string ("@    ").add_operation (inArgument_inTitle.getter_stringByRightPadding (GALGAS_uint ((uint32_t) 114U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("code-generation.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 92)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 92)) ;
  result_outTitle.plusAssign_operation(function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 93)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 93)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 93)) ;
//---
  return result_outTitle ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_asTitleComment [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_asTitleComment (C_Compiler * inCompiler,
                                                               const cObjectArray & inEffectiveParameterArray,
                                                               const GALGAS_location & /* §§ inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_asTitleComment (operand0,
                                  inCompiler
                                  COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_asTitleComment ("asTitleComment",
                                                                functionWithGenericHeader_asTitleComment,
                                                                & kTypeDescriptor_GALGAS_string,
                                                                1,
                                                                functionArgs_asTitleComment) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'codeGeneration'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_codeGeneration (const GALGAS_string constinArgument_inCurrentDirectory,
                             const GALGAS_string constinArgument_inSourceFileName,
                             const GALGAS_location constinArgument_inEndOfSourceFileLocation,
                             const GALGAS_intermediateCodeStruct constinArgument_inIntermediateCodeStruct,
                             const GALGAS_unifiedTypeMap constinArgument_inTypeMap,
                             const GALGAS_lstring constinArgument_inTargetName,
                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inPanicCodeType,
                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inPanicLineType,
                             const GALGAS_availableInterruptMap constinArgument_inAvailableInterruptMap,
                             const GALGAS_stringset constinArgument_inSourceFileAbsolutePathSet,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_homeDir_5080 = GALGAS_string::constructor_homeDirectory (SOURCE_FILE ("code-generation.galgas", 110)).add_operation (GALGAS_string ("/plm-products/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 110)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("no-panic") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }
  GALGAS_string var_productDirectory_5195 = var_homeDir_5080.add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 112)).add_operation (constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("code-generation.galgas", 114)).getter_stringByReplacingStringByString (GALGAS_string ("/"), GALGAS_string ("+"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 113)) ;
  GALGAS_string var_sourceDirectory_5408 = var_productDirectory_5195.add_operation (GALGAS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 115)) ;
  var_sourceDirectory_5408.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 116)) ;
  {
  routine_generateTarget (constinArgument_inCurrentDirectory, var_productDirectory_5195, constinArgument_inTargetName, constinArgument_inIntermediateCodeStruct.mAttribute_mTargetParameters, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 118)) ;
  }
  {
  routine_generateCodeFiles (constinArgument_inCurrentDirectory, var_productDirectory_5195, constinArgument_inEndOfSourceFileLocation, constinArgument_inIntermediateCodeStruct, constinArgument_inTypeMap, constinArgument_inTargetName, constinArgument_inPanicCodeType, constinArgument_inPanicLineType, constinArgument_inAvailableInterruptMap, constinArgument_inSourceFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 125)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'generateCodeFiles'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateCodeFiles (const GALGAS_string constinArgument_inCurrentDirectory,
                                const GALGAS_string constinArgument_inProductDirectory,
                                const GALGAS_location constinArgument_inEndOfSourceFileLocation,
                                const GALGAS_intermediateCodeStruct constinArgument_inIntermediateCodeStruct,
                                const GALGAS_unifiedTypeMap constinArgument_inTypeMap,
                                const GALGAS_lstring constinArgument_inTargetName,
                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inPanicCodeType,
                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inPanicLineType,
                                const GALGAS_availableInterruptMap constinArgument_inAvailableInterruptMap,
                                const GALGAS_stringset constinArgument_inSourceFileAbsolutePathSet,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generationAdds var_generationAdds_7147 = GALGAS_generationAdds::constructor_default (SOURCE_FILE ("code-generation.galgas", 162)) ;
  var_generationAdds_7147.mAttribute_mStaticStringMap = constinArgument_inIntermediateCodeStruct.mAttribute_mStaticStringMap ;
  GALGAS_generationContext var_generationContext_7279 = GALGAS_generationContext::constructor_new (constinArgument_inPanicCodeType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 165)), constinArgument_inPanicLineType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 166)), constinArgument_inIntermediateCodeStruct.mAttribute_mGlobalTaskVariableList, constinArgument_inAvailableInterruptMap  COMMA_SOURCE_FILE ("code-generation.galgas", 164)) ;
  GALGAS_string var_sourceDirectory_7469 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 170)) ;
  GALGAS_string var_asCode_7591 = function_asTitleComment (GALGAS_string ("Target specific code"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 172)) ;
  GALGAS_string var_asFileContents_7655 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/target.s"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 173)) ;
  GALGAS_string var_x_7770 = var_asFileContents_7655.getter_stringByReplacingStringByString (GALGAS_string ("!FUNC!"), function_llvmNameForFunction (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 177)) ;
  var_asCode_7591.plusAssign_operation(var_x_7770.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), function_llvmNameForISR (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 178)) ;
  var_asCode_7591.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 179)) ;
  GALGAS_string var_llvmCode_8040 = function_llvmTitleComment (GALGAS_string ("Target specific code"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 181)) ;
  GALGAS_string var_targetLLVMcode_8106 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/target.ll"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 182)) ;
  var_llvmCode_8040.plusAssign_operation(var_targetLLVMcode_8106.getter_stringByReplacingStringByString (GALGAS_string ("!FUNC!"), function_llvmNameForFunction (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 186)) ;
  var_llvmCode_8040.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 187)) ;
  {
  routine_declareLLVMTypes (constinArgument_inTypeMap, var_llvmCode_8040, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 189)) ;
  }
  cEnumerator_globalVariableMapIR enumerator_8576 (constinArgument_inIntermediateCodeStruct.mAttribute_mGlobalVariableMap, kEnumeration_up) ;
  const bool bool_0 = true ;
  if (enumerator_8576.hasCurrentObject () && bool_0) {
    var_llvmCode_8040.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Global variables"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 192)) ;
    while (enumerator_8576.hasCurrentObject () && bool_0) {
      extensionMethod_generateLLVM (enumerator_8576.current (HERE), var_llvmCode_8040, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 193)) ;
      enumerator_8576.gotoNextObject () ;
    }
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 194)) ;
  }
  cEnumerator_moduleListIR enumerator_8823 (constinArgument_inIntermediateCodeStruct.mAttribute_mModuleList, kEnumeration_up) ;
  const bool bool_1 = true ;
  if (enumerator_8823.hasCurrentObject () && bool_1) {
    var_llvmCode_8040.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Modules"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 198)) ;
    while (enumerator_8823.hasCurrentObject () && bool_1) {
      extensionMethod_generateLLVM (enumerator_8823.current (HERE), var_llvmCode_8040, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 199)) ;
      enumerator_8823.gotoNextObject () ;
    }
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 200)) ;
  }
  var_llvmCode_8040.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Boot routines"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 203)) ;
  var_llvmCode_8040.plusAssign_operation(GALGAS_string ("define internal void @boot ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 204)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 204)) ;
  cEnumerator_bootListIR enumerator_9177 (constinArgument_inIntermediateCodeStruct.mAttribute_mBootList, kEnumeration_up) ;
  while (enumerator_9177.hasCurrentObject ()) {
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("  call void @boot.").add_operation (enumerator_9177.current (HERE).mAttribute_mBootIndex.getter_string (SOURCE_FILE ("code-generation.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 206)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 206)) ;
    enumerator_9177.gotoNextObject () ;
  }
  var_llvmCode_8040.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 208)) ;
  var_llvmCode_8040.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 209)) ;
  cEnumerator_bootListIR enumerator_9351 (constinArgument_inIntermediateCodeStruct.mAttribute_mBootList, kEnumeration_up) ;
  while (enumerator_9351.hasCurrentObject ()) {
    var_llvmCode_8040.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 211)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 211)) ;
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("define internal void @boot.").add_operation (enumerator_9351.current (HERE).mAttribute_mBootIndex.getter_string (SOURCE_FILE ("code-generation.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 212)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 212)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 212)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 212)) ;
    cEnumerator_allocaList enumerator_9549 (enumerator_9351.current (HERE).mAttribute_mAllocaList, kEnumeration_up) ;
    while (enumerator_9549.hasCurrentObject ()) {
      var_llvmCode_8040.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (enumerator_9549.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 214)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 214)).add_operation (enumerator_9549.current_mType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 214)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 214)) ;
      enumerator_9549.gotoNextObject () ;
    }
    extensionMethod_instructionListLLVMCode (enumerator_9351.current (HERE).mAttribute_mInstructionListIR, var_llvmCode_8040, var_generationContext_7279, var_generationAdds_7147, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 216)) ;
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 217)) ;
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 218)) ;
    enumerator_9351.gotoNextObject () ;
  }
  extensionMethod_generateLLVMinitCode (constinArgument_inIntermediateCodeStruct.mAttribute_mInitList, var_llvmCode_8040, constinArgument_inIntermediateCodeStruct.mAttribute_mRoutineMapIR, var_generationContext_7279, var_generationAdds_7147, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 221)) ;
  extensionMethod_llvmCodeGeneration (constinArgument_inIntermediateCodeStruct.mAttribute_mRoutineMapIR, var_llvmCode_8040, var_asCode_7591, var_generationContext_7279, var_generationAdds_7147, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 228)) ;
  GALGAS_string var_undefinedInterruptString_10298 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/undefined-interrupt.s"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 230)) ;
  GALGAS_string var_XTRInterruptHandlerString_10448 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/xtr-interrupt-handler.s"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 234)) ;
  extensionMethod_interruptCodeGeneration (constinArgument_inIntermediateCodeStruct.mAttribute_mInterruptMapIR, var_llvmCode_8040, var_asCode_7591, var_undefinedInterruptString_10298, var_XTRInterruptHandlerString_10448, var_generationContext_7279, var_generationAdds_7147, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 238)) ;
  extensionMethod_llvmPrototypeGeneration (constinArgument_inIntermediateCodeStruct.mAttribute_mExternProcedureMapIR, var_llvmCode_8040, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 247)) ;
  GALGAS__32_stringlist var_serviceList_10947 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("code-generation.galgas", 248)) ;
  GALGAS__32_stringlist var_sectionList_10979 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("code-generation.galgas", 249)) ;
  const enumGalgasBool test_2 = var_generationAdds_7147.mAttribute_mUsesGuards.boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_string var_waitForGuardChange_11104 = function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 252)) ;
    var_serviceList_10947.addAssign_operation (function_llvmNameForServiceCall (var_waitForGuardChange_11104, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 253)), function_llvmNameForServiceImplementation (var_waitForGuardChange_11104, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 253))  COMMA_SOURCE_FILE ("code-generation.galgas", 253)) ;
    var_generationAdds_7147.mAttribute_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("declare i1 @").add_operation (function_llvmNameForServiceCall (var_waitForGuardChange_11104, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 254)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 254))  COMMA_SOURCE_FILE ("code-generation.galgas", 254)) ;
  }
  extensionMethod_sectionCodeGeneration (constinArgument_inIntermediateCodeStruct.mAttribute_mRoutineMapIR, var_llvmCode_8040, var_sectionList_10979, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 257)) ;
  extensionMethod_serviceCodeGeneration (constinArgument_inIntermediateCodeStruct.mAttribute_mRoutineMapIR, var_llvmCode_8040, var_serviceList_10947, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 262)) ;
  extensionMethod_primitiveCodeGeneration (constinArgument_inIntermediateCodeStruct.mAttribute_mRoutineMapIR, var_llvmCode_8040, var_serviceList_10947, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 267)) ;
  extensionMethod_guardCodeGeneration (constinArgument_inIntermediateCodeStruct.mAttribute_mGuardMapIR, var_llvmCode_8040, var_serviceList_10947, var_generationContext_7279, var_generationAdds_7147, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 272)) ;
  extensionMethod_generateCode (constinArgument_inIntermediateCodeStruct.mAttribute_mTaskMapIR, var_llvmCode_8040, var_generationContext_7279, var_generationAdds_7147, var_serviceList_10947, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 279)) ;
  {
  routine_generateServiceDispatcher (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string, var_asCode_7591, var_serviceList_10947, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 281)) ;
  }
  {
  routine_generateSectionDispatcher (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string, var_asCode_7591, var_sectionList_10979, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 288)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("code-generation.galgas", 295)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_string var_s_12677 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/target-panic.ll"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 296)) ;
    GALGAS_string var_s_31__12808 = var_s_12677.getter_stringByReplacingStringByString (GALGAS_string ("!PANICCODE!"), var_generationContext_7279.mAttribute_mPanicCodeLLVMType, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 300)) ;
    GALGAS_string var_s_32__12910 = var_s_31__12808.getter_stringByReplacingStringByString (GALGAS_string ("!PANICLINE!"), var_generationContext_7279.mAttribute_mPanicLineLLVMType, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 301)) ;
    var_llvmCode_8040.plusAssign_operation(var_s_32__12910, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 302)) ;
    var_llvmCode_8040.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Raise Panic internal"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 303)) ;
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("define internal void @raise_panic_internal ("), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 304)) ;
    var_llvmCode_8040.plusAssign_operation(var_generationContext_7279.mAttribute_mPanicLineLLVMType.add_operation (GALGAS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 305)) ;
    var_llvmCode_8040.plusAssign_operation(var_generationContext_7279.mAttribute_mPanicCodeLLVMType.add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 306)) ;
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("i8* %in.FILE)").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 307)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 307)) ;
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (GALGAS_string ("LINE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 309)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 309)) ;
    var_llvmCode_8040.plusAssign_operation(var_generationContext_7279.mAttribute_mPanicLineLLVMType.add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 310)) ;
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_generationContext_7279.mAttribute_mPanicLineLLVMType, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 311)).add_operation (GALGAS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 311)) ;
    var_llvmCode_8040.plusAssign_operation(var_generationContext_7279.mAttribute_mPanicLineLLVMType.add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 312)).add_operation (function_llvmNameForLocalVariable (GALGAS_string ("LINE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 312)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 312)) ;
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (GALGAS_string ("CODE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 314)) ;
    var_llvmCode_8040.plusAssign_operation(GALGAS_string (" = alloca ").add_operation (var_generationContext_7279.mAttribute_mPanicCodeLLVMType, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 315)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 315)) ;
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_generationContext_7279.mAttribute_mPanicCodeLLVMType, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 316)).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 316)) ;
    var_llvmCode_8040.plusAssign_operation(var_generationContext_7279.mAttribute_mPanicCodeLLVMType.add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 317)).add_operation (function_llvmNameForLocalVariable (GALGAS_string ("CODE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 317)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 317)) ;
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (GALGAS_string ("FILE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 319)).add_operation (GALGAS_string (" = alloca i8*\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 319)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 319)) ;
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("  store i8* %in.FILE, i8** %").add_operation (function_llvmNameForLocalVariable (GALGAS_string ("FILE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 320)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 320)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 320)) ;
    extensionMethod_instructionListLLVMCode (constinArgument_inIntermediateCodeStruct.mAttribute_mPanicSetupInstructionListIR, var_llvmCode_8040, var_generationContext_7279, var_generationAdds_7147, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 321)) ;
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("  br label %panic.loop\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 326)) ;
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("panic.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 327)) ;
    extensionMethod_instructionListLLVMCode (constinArgument_inIntermediateCodeStruct.mAttribute_mPanicLoopInstructionListIR, var_llvmCode_8040, var_generationContext_7279, var_generationAdds_7147, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 328)) ;
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("  br label %panic.loop\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 333)) ;
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 334)) ;
    GALGAS_uint var_staticStringIndex_14835 ;
    {
    extensionSetter_findOrAddStaticString (var_generationAdds_7147.mAttribute_mStaticStringMap, GALGAS_string ("-"), var_staticStringIndex_14835, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 336)) ;
    }
    var_llvmCode_8040.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Panic for ISR"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 340)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 340)) ;
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("define internal void @panic.isr (").add_operation (var_generationContext_7279.mAttribute_mPanicCodeLLVMType, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 341)).add_operation (GALGAS_string (" %in.CODE) "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 341)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 341)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 341)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 341)) ;
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("  %str.FILE = load i8*, i8** @string.").add_operation (var_staticStringIndex_14835.getter_string (SOURCE_FILE ("code-generation.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 342)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 342)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 342)) ;
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("  %isr.code = sub ").add_operation (var_generationContext_7279.mAttribute_mPanicCodeLLVMType, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 343)).add_operation (GALGAS_string (" 0, %in.CODE\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 343)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 343)) ;
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("  call void @raise_panic_internal ("), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 344)) ;
    var_llvmCode_8040.plusAssign_operation(var_generationContext_7279.mAttribute_mPanicLineLLVMType.add_operation (GALGAS_string (" 0, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 345)) ;
    var_llvmCode_8040.plusAssign_operation(var_generationContext_7279.mAttribute_mPanicCodeLLVMType.add_operation (GALGAS_string (" %isr.code, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 346)) ;
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("i8* %str.FILE"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 347)) ;
    var_llvmCode_8040.plusAssign_operation(GALGAS_string (" )\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 348)) ;
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 349)) ;
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 350)) ;
    cEnumerator_stringset enumerator_15617 (constinArgument_inSourceFileAbsolutePathSet, kEnumeration_up) ;
    while (enumerator_15617.hasCurrentObject ()) {
      GALGAS_uint var_staticStringIndex_15784 ;
      {
      extensionSetter_findOrAddStaticString (var_generationAdds_7147.mAttribute_mStaticStringMap, enumerator_15617.current_key (HERE).getter_lastPathComponent (SOURCE_FILE ("code-generation.galgas", 354)).getter_stringByDeletingPathExtension (SOURCE_FILE ("code-generation.galgas", 354)), var_staticStringIndex_15784, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 353)) ;
      }
      GALGAS_string var_routineName_15814 = GALGAS_string ("@raise_panic.").add_operation (var_staticStringIndex_15784.getter_string (SOURCE_FILE ("code-generation.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 357)) ;
      var_llvmCode_8040.plusAssign_operation(function_llvmTitleComment (var_routineName_15814.add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 358)).add_operation (enumerator_15617.current_key (HERE).getter_lastPathComponent (SOURCE_FILE ("code-generation.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 358)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 358)) ;
      var_llvmCode_8040.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (var_routineName_15814, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 359)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 359)) ;
      var_llvmCode_8040.plusAssign_operation(var_generationContext_7279.mAttribute_mPanicLineLLVMType.add_operation (GALGAS_string (" %inSourceLine, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 360)) ;
      var_llvmCode_8040.plusAssign_operation(var_generationContext_7279.mAttribute_mPanicCodeLLVMType.add_operation (GALGAS_string (" %inCode)"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 361)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 361)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 361)) ;
      var_llvmCode_8040.plusAssign_operation(GALGAS_string ("  %str.FILE = load i8*, i8** @string.").add_operation (var_staticStringIndex_15784.getter_string (SOURCE_FILE ("code-generation.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 362)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 362)) ;
      var_llvmCode_8040.plusAssign_operation(GALGAS_string ("  call void @raise_panic ("), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 363)) ;
      var_llvmCode_8040.plusAssign_operation(var_generationContext_7279.mAttribute_mPanicLineLLVMType.add_operation (GALGAS_string (" %inSourceLine, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 364)) ;
      var_llvmCode_8040.plusAssign_operation(var_generationContext_7279.mAttribute_mPanicCodeLLVMType.add_operation (GALGAS_string (" %inCode, i8* %str.FILE)\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 365)) ;
      var_llvmCode_8040.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 366)) ;
      var_llvmCode_8040.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 367)) ;
      enumerator_15617.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_generationAdds_7147.mAttribute_mExternFunctionDeclarationSet.getter_count (SOURCE_FILE ("code-generation.galgas", 371)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    var_llvmCode_8040.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("LLVM extern functions"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 372)) ;
    cEnumerator_stringset enumerator_16809 (var_generationAdds_7147.mAttribute_mExternFunctionDeclarationSet, kEnumeration_up) ;
    while (enumerator_16809.hasCurrentObject ()) {
      var_llvmCode_8040.plusAssign_operation(enumerator_16809.current_key (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 374)) ;
      enumerator_16809.gotoNextObject () ;
    }
    var_llvmCode_8040.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 376)) ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_generationAdds_7147.mAttribute_mStaticStringMap.getter_count (SOURCE_FILE ("code-generation.galgas", 379)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    var_llvmCode_8040.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Static strings"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 380)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 380)) ;
    cEnumerator_staticStringMap enumerator_17085 (var_generationAdds_7147.mAttribute_mStaticStringMap, kEnumeration_up) ;
    while (enumerator_17085.hasCurrentObject ()) {
      GALGAS_string var_lgStr_17104 = enumerator_17085.current_lkey (HERE).mAttribute_string.getter_length (SOURCE_FILE ("code-generation.galgas", 382)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 382)).getter_string (SOURCE_FILE ("code-generation.galgas", 382)) ;
      var_llvmCode_8040.plusAssign_operation(function_literalCharacterArrayName (enumerator_17085.current_mIndex (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 383)).add_operation (GALGAS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 383)) ;
      var_llvmCode_8040.plusAssign_operation(var_lgStr_17104.add_operation (GALGAS_string (" x i8] c\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 384)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 384)) ;
      var_llvmCode_8040.plusAssign_operation(enumerator_17085.current_lkey (HERE).mAttribute_string.getter_utf_38_RepresentationWithoutDelimiters (SOURCE_FILE ("code-generation.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 385)) ;
      var_llvmCode_8040.plusAssign_operation(GALGAS_string ("\\00\", align 1\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 386)) ;
      var_llvmCode_8040.plusAssign_operation(function_literalStringName (enumerator_17085.current_mIndex (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 387)).add_operation (GALGAS_string (" = private constant i8* getelementptr inbounds (["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 387)) ;
      var_llvmCode_8040.plusAssign_operation(var_lgStr_17104.add_operation (GALGAS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 388)).add_operation (var_lgStr_17104, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 388)).add_operation (GALGAS_string (" x i8]* "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 388)) ;
      var_llvmCode_8040.plusAssign_operation(function_literalCharacterArrayName (enumerator_17085.current_mIndex (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 389)).add_operation (GALGAS_string (", i32 0, i32 0), align 4\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 389)) ;
      enumerator_17085.gotoNextObject () ;
    }
  }
  var_llvmCode_8040.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 393)) ;
  GALGAS_bool joker_17808 ; // Joker input parameter
  var_llvmCode_8040.method_writeToFileWhenDifferentContents (var_sourceDirectory_7469.add_operation (GALGAS_string ("/src.ll"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 394)), joker_17808, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 394)) ;
  var_asCode_7591.plusAssign_operation(function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 396)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 396)) ;
  GALGAS_bool joker_17979 ; // Joker input parameter
  var_asCode_7591.method_writeToFileWhenDifferentContents (var_sourceDirectory_7469.add_operation (GALGAS_string ("/src.s"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 397)), joker_17979, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 397)) ;
  GALGAS_string var_cCode_18050 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/target.c"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 399)) ;
  GALGAS_string var_s_31__18164 = var_cCode_18050.getter_stringByReplacingStringByString (GALGAS_string ("!TASKCOUNT!"), constinArgument_inIntermediateCodeStruct.mAttribute_mTaskMapIR.getter_count (SOURCE_FILE ("code-generation.galgas", 403)).getter_string (SOURCE_FILE ("code-generation.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 403)) ;
  GALGAS_string var_s_32__18284 = var_s_31__18164.getter_stringByReplacingStringByString (GALGAS_string ("!GUARDCOUNT!"), constinArgument_inIntermediateCodeStruct.mAttribute_mMaxBranchOfOnInstructions.getter_string (SOURCE_FILE ("code-generation.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 404)) ;
  GALGAS_string var_s_33__18410 = var_s_32__18284.getter_stringByReplacingStringByString (GALGAS_string ("!FUNC!"), function_llvmNameForFunction (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 405)) ;
  GALGAS_string var_s_34__18495 = var_s_33__18410.getter_stringByReplacingStringByString (GALGAS_string ("!SERVICEIMPLEMENTATION!"), function_llvmNameForServiceImplementation (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 406)) ;
  GALGAS_string var_s_35__18610 = var_s_34__18495.getter_stringByReplacingStringByString (GALGAS_string ("!SERVICECALL!"), function_llvmNameForServiceCall (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 407)) ;
  GALGAS_bool joker_18765 ; // Joker input parameter
  var_s_35__18610.method_writeToFileWhenDifferentContents (var_sourceDirectory_7469.add_operation (GALGAS_string ("/src.c"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 408)), joker_18765, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 408)) ;
  GALGAS_string var_json_18858 = GALGAS_string ("{\n") ;
  var_json_18858.plusAssign_operation(GALGAS_string ("  \"system-stack-size\" : ").add_operation (constinArgument_inIntermediateCodeStruct.mAttribute_mTargetParameters.mAttribute_mSystemStackSize.mAttribute_bigint.getter_string (SOURCE_FILE ("code-generation.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 412)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 412)) ;
  var_json_18858.plusAssign_operation(GALGAS_string ("  \"stacked-register-size-on-user-stack\" : ").add_operation (constinArgument_inIntermediateCodeStruct.mAttribute_mTargetParameters.mAttribute_mStackedUserRegisterOnInterruptByteSize.mAttribute_bigint.getter_string (SOURCE_FILE ("code-generation.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 413)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 414)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 413)) ;
  var_json_18858.plusAssign_operation(GALGAS_string ("  \"service-stack-needs\" : ").add_operation (constinArgument_inIntermediateCodeStruct.mAttribute_mTargetParameters.mAttribute_mServicePushedRegisterByteSize.mAttribute_bigint.getter_string (SOURCE_FILE ("code-generation.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 415)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 415)) ;
  var_json_18858.plusAssign_operation(GALGAS_string ("  \"section-stack-needs\" : ").add_operation (constinArgument_inIntermediateCodeStruct.mAttribute_mTargetParameters.mAttribute_mSectionPushedRegisterByteSize.mAttribute_bigint.getter_string (SOURCE_FILE ("code-generation.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 416)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 416)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 416)) ;
  var_json_18858.plusAssign_operation(GALGAS_string ("  \"tasks\" : {"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 418)) ;
  cEnumerator_taskMapIR enumerator_19522 (constinArgument_inIntermediateCodeStruct.mAttribute_mTaskMapIR, kEnumeration_up) ;
  while (enumerator_19522.hasCurrentObject ()) {
    var_json_18858.plusAssign_operation(GALGAS_string ("\n"
      "    \"").add_operation (enumerator_19522.current (HERE).mAttribute_lkey.mAttribute_string.getter_assemblerRepresentation (SOURCE_FILE ("code-generation.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 420)).add_operation (GALGAS_string ("\" : "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 420)).add_operation (enumerator_19522.current (HERE).mAttribute_mStackSize.getter_string (SOURCE_FILE ("code-generation.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 420)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 420)) ;
    if (enumerator_19522.hasNextObject ()) {
      var_json_18858.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 421)) ;
    }
    enumerator_19522.gotoNextObject () ;
  }
  var_json_18858.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 423)) ;
  var_json_18858.plusAssign_operation(GALGAS_string ("  },\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 424)) ;
  var_json_18858.plusAssign_operation(GALGAS_string ("  \"services\" : ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 426)) ;
  cEnumerator__32_stringlist enumerator_19770 (var_serviceList_10947, kEnumeration_up) ;
  const bool bool_6 = true ;
  if (enumerator_19770.hasCurrentObject () && bool_6) {
    while (enumerator_19770.hasCurrentObject () && bool_6) {
      var_json_18858.plusAssign_operation(GALGAS_string ("\n"
        "    \"").add_operation (enumerator_19770.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 428)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 428)) ;
      enumerator_19770.gotoNextObject () ;
      if (enumerator_19770.hasCurrentObject () && bool_6) {
        var_json_18858.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 429)) ;
      }
    }
    var_json_18858.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 430)) ;
  }
  var_json_18858.plusAssign_operation(GALGAS_string ("  ],\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 432)) ;
  var_json_18858.plusAssign_operation(GALGAS_string ("  \"sections\" : ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 434)) ;
  cEnumerator__32_stringlist enumerator_19991 (var_sectionList_10979, kEnumeration_up) ;
  const bool bool_7 = true ;
  if (enumerator_19991.hasCurrentObject () && bool_7) {
    while (enumerator_19991.hasCurrentObject () && bool_7) {
      var_json_18858.plusAssign_operation(GALGAS_string ("\n"
        "    \"").add_operation (enumerator_19991.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 436)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 436)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 436)) ;
      enumerator_19991.gotoNextObject () ;
      if (enumerator_19991.hasCurrentObject () && bool_7) {
        var_json_18858.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 437)) ;
      }
    }
    var_json_18858.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 438)) ;
  }
  var_json_18858.plusAssign_operation(GALGAS_string ("  ],\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 440)) ;
  var_json_18858.plusAssign_operation(GALGAS_string ("  \"isr\" : ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 442)) ;
  GALGAS_bool var_first_20167 = GALGAS_bool (true) ;
  cEnumerator_interruptMapIR enumerator_20251 (constinArgument_inIntermediateCodeStruct.mAttribute_mInterruptMapIR, kEnumeration_up) ;
  while (enumerator_20251.hasCurrentObject ()) {
    const enumGalgasBool test_8 = var_first_20167.boolEnum () ;
    if (kBoolTrue == test_8) {
      var_first_20167 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_8) {
      var_json_18858.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 448)) ;
    }
    GALGAS_string temp_9 ;
    const enumGalgasBool test_10 = enumerator_20251.current_mXTR (HERE).boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = function_llvmNameForInterrupt (enumerator_20251.current_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 451)).mAttribute_string ;
    }else if (kBoolFalse == test_10) {
      temp_9 = function_llvmNameForISR (enumerator_20251.current_lkey (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 453)) ;
    }
    GALGAS_string var_interruptImplementationName_20363 = temp_9 ;
    var_json_18858.plusAssign_operation(GALGAS_string ("\n"
      "    \"").add_operation (var_interruptImplementationName_20363, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 455)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 455)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 455)) ;
    enumerator_20251.gotoNextObject () ;
  }
  const enumGalgasBool test_11 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("code-generation.galgas", 457)).boolEnum () ;
  if (kBoolTrue == test_11) {
    cEnumerator_availableInterruptMap enumerator_20671 (constinArgument_inAvailableInterruptMap, kEnumeration_up) ;
    while (enumerator_20671.hasCurrentObject ()) {
      const enumGalgasBool test_12 = constinArgument_inIntermediateCodeStruct.mAttribute_mInterruptMapIR.getter_hasKey (enumerator_20671.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("code-generation.galgas", 459)).operator_not (SOURCE_FILE ("code-generation.galgas", 459)).boolEnum () ;
      if (kBoolTrue == test_12) {
        switch (enumerator_20671.current_mInterruptionPanicCode (HERE).enumValue ()) {
        case GALGAS_interruptionPanicCode::kNotBuilt:
          break ;
        case GALGAS_interruptionPanicCode::kEnum_noPanicCode:
          {
          }
          break ;
        case GALGAS_interruptionPanicCode::kEnum_panicCode:
          {
            const enumGalgasBool test_13 = var_first_20167.boolEnum () ;
            if (kBoolTrue == test_13) {
              var_first_20167 = GALGAS_bool (false) ;
            }else if (kBoolFalse == test_13) {
              var_json_18858.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 466)) ;
            }
            var_json_18858.plusAssign_operation(GALGAS_string ("\n"
              "    \"").add_operation (function_llvmNameForISR (enumerator_20671.current_lkey (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 468)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 468)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 468)) ;
          }
          break ;
        }
      }
      enumerator_20671.gotoNextObject () ;
    }
  }
  var_json_18858.plusAssign_operation(GALGAS_string ("\n"
    "  ]\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 473)) ;
  var_json_18858.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 475)) ;
  GALGAS_bool joker_21181 ; // Joker input parameter
  var_json_18858.method_writeToFileWhenDifferentContents (var_sourceDirectory_7469.add_operation (GALGAS_string ("/provided-stacks.json"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 476)), joker_21181, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 476)) ;
  const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("code-generation.galgas", 478)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_14) {
    GALGAS_string temp_15 ;
    const enumGalgasBool test_16 = GALGAS_bool (gOption_plm_5F_options_performFlashing.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_16) {
      temp_15 = GALGAS_string ("run") ;
    }else if (kBoolFalse == test_16) {
      temp_15 = GALGAS_string ("build") ;
    }
    GALGAS_string var_script_21299 = temp_15 ;
    GALGAS_string var_fullScript_21394 = GALGAS_string ("python ").add_operation (constinArgument_inProductDirectory, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 480)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 480)).add_operation (var_script_21299, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 480)).add_operation (GALGAS_string (".py"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 480)) ;
    GALGAS_sint var_result_21467 = var_fullScript_21394.getter_system (SOURCE_FILE ("code-generation.galgas", 481)) ;
    const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, var_result_21467.objectCompare (GALGAS_sint ((int32_t) 0L))).boolEnum () ;
    if (kBoolTrue == test_17) {
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFileLocation, GALGAS_string ("error during LLVM compilation or flashing")  COMMA_SOURCE_FILE ("code-generation.galgas", 483)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'declareLLVMTypes'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_declareLLVMTypes (const GALGAS_unifiedTypeMap constinArgument_inTypeMap,
                               GALGAS_string & ioArgument_ioLLVMcode,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Types"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 491)) ;
  cEnumerator_unifiedTypeMap enumerator_21878 (constinArgument_inTypeMap, kEnumeration_up) ;
  while (enumerator_21878.hasCurrentObject ()) {
    switch (enumerator_21878.current_kind (HERE).enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolean:
      {
      }
      break ;
    case GALGAS_typeKind::kEnum_enumeration:
      {
      }
      break ;
    case GALGAS_typeKind::kEnum_integer:
      {
      }
      break ;
    case GALGAS_typeKind::kEnum_structure:
      {
        const cEnumAssociatedValues_typeKind_structure * extractPtr_22205 = (const cEnumAssociatedValues_typeKind_structure *) (enumerator_21878.current_kind (HERE).unsafePointer ()) ;
        const GALGAS_propertyList extractedValue_propertyList = extractPtr_22205->mAssociatedValue2 ;
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_21878.current_llvmTypeName (HERE).add_operation (GALGAS_string (" = type {"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 498)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 498)) ;
        cEnumerator_propertyList enumerator_22088 (extractedValue_propertyList, kEnumeration_up) ;
        while (enumerator_22088.hasCurrentObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(enumerator_22088.current_mType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 500)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 500)) ;
          if (enumerator_22088.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 501)) ;
          }
          enumerator_22088.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 503)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_literalString:
      {
      }
      break ;
    case GALGAS_typeKind::kEnum_staticInteger:
      {
      }
      break ;
    case GALGAS_typeKind::kEnum_opaque:
      {
      }
      break ;
    case GALGAS_typeKind::kEnum_arrayType:
      {
        const cEnumAssociatedValues_typeKind_arrayType * extractPtr_22428 = (const cEnumAssociatedValues_typeKind_arrayType *) (enumerator_21878.current_kind (HERE).unsafePointer ()) ;
        const GALGAS_unifiedTypeMap_2D_proxy extractedValue_elementType = extractPtr_22428->mAssociatedValue0 ;
        const GALGAS_bigint extractedValue_arraySize = extractPtr_22428->mAssociatedValue1 ;
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_21878.current_llvmTypeName (HERE).add_operation (GALGAS_string (" = type ["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 508)).add_operation (extractedValue_arraySize.getter_string (SOURCE_FILE ("code-generation.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 508)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 508)).add_operation (extractedValue_elementType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 508)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 508)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 508)) ;
      }
      break ;
    }
    enumerator_21878.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 511)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Filewrapper 'targetTemplates'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- File '/LPC-L2294.plm-target'

const char * gWrapperFileContent_0_targetTemplates = "\n"
  "configuration\n"
  "  32 // Pointer bit count\n"
  "  :$int32 // Panic code type\n"
  "  :$uint32 // Panic line type\n"
  "  :$uint32 // Unsigned integer type\n"
  "  :1024 // System stack size\n"
  "  :0 // Stacked registers bytes count (ARM7TDMI save no reg in user stack on interrupt)\n"
  "  :16 // as_swi_handler saves 4 registers on system stack\n"
  "  :8 // as_undef_handler saves 2 registers on system stack\n"
  "{\n"
  "  WDT\n"
  "  ARMCore0\n"
  "  ARMCore1\n"
  "  TIMER0\n"
  "  TIMER1\n"
  "  UART0\n"
  "  UART1\n"
  "  PWM0\n"
  "  I2C\n"
  "  SPI0\n"
  "  SPI1_SSP\n"
  "  PLL\n"
  "  RTC\n"
  "  EINT0\n"
  "  EINT1\n"
  "  EINT2\n"
  "  EINT3\n"
  "  ADC\n"
  "  CAN_COMMON\n"
  "  CAN0_TX\n"
  "  CAN1_TX\n"
  "  CAN2_TX\n"
  "  CAN3_TX\n"
  "  FULLCAN\n"
  "  CAN0_RX\n"
  "  CAN1_RX\n"
  "  CAN2_RX\n"
  "  CAN3_RX\n"
  "  \n"
  "  PAbort : 40\n"
  "  DAbort : 41\n"
  "  FIQ : 42\n"
  "}\n"
  "\n"
  "import \"files/registers-lpc2294.plm\"\n"
  "//import \"files/teensy-3-1-boot.plm\"\n"
  "//import \"files/teensy-3-1-default-isr.plm\"\n"
  "import \"files/lpc2294-xtr.plm\"\n"
  "//import \"files/teensy-3-1-leds.plm\"\n"
  "//import \"files/teensy-3-1-lcd.plm\"\n"
  "import \"files/semaphore.plm\"\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_0_targetTemplates (
  "LPC-L2294.plm-target",
  "plm-target",
  true, // Text file
  915, // Text length
  gWrapperFileContent_0_targetTemplates
) ;

//--- File '/check-stacks.py'

const char * gWrapperFileContent_1_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: utf-8 -*-\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "import sys, os, json\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def printUTF8 (s) :\n"
  "  print s.encode ('utf-8')\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def dictionaryFromJsonFile (file) :\n"
  "  result = {}\n"
  "  if not os.path.exists (os.path.abspath (file)):\n"
  "    printUTF8 (u\"Error: the '\" + file + u\"' file does not exist\")\n"
  "    sys.exit (1)\n"
  "  try:\n"
  "    f = open (file, \"r\")\n"
  "    result = json.loads (f.read ())\n"
  "    f.close ()\n"
  "  except:\n"
  "    printUTF8 (u\"Syntax error in '\" + file + u\"' JSON file\")\n"
  "    sys.exit (1)\n"
  "  return result\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#    MAIN                                                                                                              *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "ok = True\n"
  "providedStacksJSONFile = sys.argv [1]\n"
  "# print u\"providedStacksJSONFile '\" + providedStacksJSONFile + u\"'\"\n"
  "stackAnalysisJSONFile = sys.argv [2]\n"
  "# print u\"stackAnalysisJSONFile '\" + stackAnalysisJSONFile + u\"'\"\n"
  "resultFile = sys.argv [3]\n"
  "# print u\"resultFile '\" + resultFile + u\"'\"\n"
  "resultContents = \"\"\n"
  "#--- Read JSON file\n"
  "requirementsDictionary = dictionaryFromJsonFile (providedStacksJSONFile)\n"
  "stackAnalysisDictionary = dictionaryFromJsonFile (stackAnalysisJSONFile)\n"
  "solvedFunctionDictionary = stackAnalysisDictionary [\"solved\"]\n"
  "#--- Saved register byte count in user stack\n"
  "savedRegisterInUserStackByteCount = requirementsDictionary [\"stacked-register-size-on-user-stack\"]\n"
  "systemStackSize = requirementsDictionary [\"system-stack-size\"]\n"
  "serviceStackRequirement = requirementsDictionary [\"service-stack-needs\"]\n"
  "sectionStackRequirement = requirementsDictionary [\"section-stack-needs\"]\n"
  "#--- Check task stacks\n"
  "resultContents += u\"*----------------------------------------------------------------*\\n\"\n"
  "resultContents += u\"*   CHECK TASK STACKS                                            *\\n\"\n"
  "resultContents += u\"*----------------------------------------------------------------*\\n\\n\"\n"
  "resultContents += u\"  Interrupt stacked register size: \" + str (savedRegisterInUserStackByteCount) + u\" bytes\\n\\n\"\n"
  "taskDictionary = requirementsDictionary [\"tasks\"]\n"
  "for taskName in taskDictionary :\n"
  "  unicodeTaskName = (taskName)\n"
  "  availableStackSize = taskDictionary [unicodeTaskName]\n"
  "  taskFunctionName = u\"task.main.\" + unicodeTaskName\n"
  "  if solvedFunctionDictionary.has_key (taskFunctionName) :\n"
  "    stackRequirement = solvedFunctionDictionary [taskFunctionName] + savedRegisterInUserStackByteCount\n"
  "    resultContents += u\"  task '\" + taskName + u\"', provided stack: \"\n"
  "    resultContents += str (availableStackSize) + u\" bytes, required: \" + str (stackRequirement) + u\"\\n\"\n"
  "    if stackRequirement > availableStackSize:\n"
  "      ok = False\n"
  "      printUTF8 (u\"Error: insufficient stack size for '\" + unicodeTaskName + u\"' task\")\n"
  "      resultContents += u\"Error: insufficient stack size for '\" + unicodeTaskName + u\"' task\\n\"\n"
  "  else:\n"
  "    printUTF8 (u\"Error: \" + unicodeTaskName + u\": unsolved '\" + taskFunctionName + u\"', cannot compute\")\n"
  "    resultContents += u\"Error: \" + unicodeTaskName + u\": unsolved '\" + taskFunctionName + u\"', cannot compute\\n\"\n"
  "    ok = False\n"
  "resultContents += u\"\\n\"\n"
  "#--- Check services\n"
  "resultContents += u\"*----------------------------------------------------------------*\\n\"\n"
  "resultContents += u\"*   CHECK SERVICE STACK                                          *\\n\"\n"
  "resultContents += u\"*----------------------------------------------------------------*\\n\\n\"\n"
  "resultContents += u\"  System stack: \" + str (systemStackSize) + u\" bytes\\n\"\n"
  "resultContents += u\"  Service handler stack needs: \" + str (serviceStackRequirement) + u\" bytes\\n\\n\"\n"
  "for serviceName in requirementsDictionary [\"services\"]:\n"
  "  if solvedFunctionDictionary.has_key (serviceName) :\n"
  "    stackRequirement = solvedFunctionDictionary [serviceName] + serviceStackRequirement\n"
  "    resultContents += u\"  Service '\" + serviceName + u\"', required stack: \" + str (stackRequirement) + u\"\\n\"\n"
  "    if stackRequirement > systemStackSize:\n"
  "      ok = False\n"
  "      printUTF8 (u\"Error: insufficient stack size for service '\" + serviceName + u\"' task\")\n"
  "      resultContents += u\"Error: insufficient stack size for service '\" + serviceName + u\"' task\\n\"\n"
  "  else:\n"
  "    printUTF8 (u\"Error: service u\" + serviceName + u\": unsolved\")\n"
  "    resultContents += u\"Error: service \" + serviceName + u\": unsolved\\n\"\n"
  "    ok = False\n"
  "resultContents += u\"\\n\"\n"
  "#--- Check sections\n"
  "resultContents += u\"*----------------------------------------------------------------*\\n\"\n"
  "resultContents += u\"*   CHECK SECTION STACK                                          *\\n\"\n"
  "resultContents += u\"*----------------------------------------------------------------*\\n\\n\"\n"
  "resultContents += u\"  System stack: \" + str (systemStackSize) + u\" bytes\\n\"\n"
  "resultContents += u\"  Section handler stack needs: \" + str (sectionStackRequirement) + u\" bytes\\n\\n\"\n"
  "for sectionName in requirementsDictionary [\"sections\"]:\n"
  "  if solvedFunctionDictionary.has_key (sectionName) :\n"
  "    stackRequirement = solvedFunctionDictionary [sectionName] + sectionStackRequirement\n"
  "    resultContents += u\"  Section '\" + sectionName + u\"', required stack: \" + str (stackRequirement) + u\"\\n\"\n"
  "    if stackRequirement > systemStackSize:\n"
  "      ok = False\n"
  "      printUTF8 (u\"Error: insufficient stack size for section '\" + sectionName + u\"' task\")\n"
  "      resultContents += u\"Error: insufficient stack size for section '\" + sectionName + u\"' task\\n\"\n"
  "  else:\n"
  "    printUTF8 (u\"Error: section \" + sectionName + u\": unsolved\")\n"
  "    resultContents += u\"Error: section \" + sectionName + u\": unsolved\\n\"\n"
  "    ok = False\n"
  "resultContents += u\"\\n\"\n"
  "#--- Check sections\n"
  "resultContents += u\"*----------------------------------------------------------------*\\n\"\n"
  "resultContents += u\"*   CHECK INTERRUPT SERVICE ROUTINE STACKS                       *\\n\"\n"
  "resultContents += u\"*----------------------------------------------------------------*\\n\\n\"\n"
  "resultContents += u\"  System stack: \" + str (systemStackSize) + u\" bytes\\n\"\n"
  "#resultContents += u\"  Section handler stack needs: \" + str (sectionStackRequirement) + u\" bytes\\n\\n\"\n"
  "for isr in requirementsDictionary [\"isr\"]:\n"
  "  if solvedFunctionDictionary.has_key (isr) :\n"
  "    stackRequirement = solvedFunctionDictionary [isr]\n"
  "    resultContents += u\"  ISR '\" + isr + u\"', required stack: \" + str (stackRequirement) + u\"\\n\"\n"
  "    if stackRequirement > systemStackSize:\n"
  "      ok = False\n"
  "      printUTF8 (u\"Error: insufficient stack size for isr '\" + isr + u\"' task\")\n"
  "      resultContents += u\"Error: insufficient stack size for isr '\" + isr + u\"' task\\n\"\n"
  "  else:\n"
  "    printUTF8 (u\"Error: isr \" + isr + u\": unsolved\")\n"
  "    resultContents += u\"Error: isr \" + isr + u\": unsolved\\n\"\n"
  "    ok = False\n"
  "resultContents += u\"\\n\"\n"
  "#--- Write result file\n"
  "resultContents += u\"*----------------------------------------------------------------*\\n\"\n"
  "f = open (resultFile, 'w')\n"
  "f.write (resultContents.encode ('utf-8'))\n"
  "f.close ()\n"
  "#--- return\n"
  "if not ok :\n"
  "  sys.exit (1)\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_1_targetTemplates (
  "check-stacks.py",
  "py",
  true, // Text file
  7469, // Text length
  gWrapperFileContent_1_targetTemplates
) ;

//--- File '/makefile.py'

const char * gWrapperFileContent_2_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "#   Releases                                                                                                           *\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "# 1.0: march 18th, 2015\n"
  "#        first release\n"
  "# 2.0: october 2th, 2015\n"
  "#        added several target definition for rules\n"
  "# 2.1: october 5th, 2015\n"
  "#        added checking routine formal argument run-time types\n"
  "# 2.2: october 24th, 2015\n"
  "#        changed subprocess.Popen to subprocess.call in runCommand\n"
  "#        added command tool checking using 'find_executable' function\n"
  "#        added optional argument to Make class initializer to log command utility tool path\n"
  "# 2.3: april 16th, 2016\n"
  "#        added advance percentage\n"
  "#\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "\n"
  "import subprocess, sys, os, copy\n"
  "import urllib, shutil, subprocess\n"
  "import platform, json, operator\n"
  "import threading, types, traceback\n"
  "\n"
  "if sys.version_info >= (2, 6) :\n"
  "  import multiprocessing\n"
  "\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "#   find_executable                                                                                                    *\n"
  "# From:                                                                                                                *\n"
  "# https://gist.github.com/4368898                                                                                      *\n"
  "# Public domain code by anatoly techtonik <techtonik@gmail.com>                                                        *\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "\n"
  "def find_executable(executable, path=None):\n"
  "    \"\"\"Try to find 'executable' in the directories listed in 'path' (a\n"
  "    string listing directories separated by 'os.pathsep'; defaults to\n"
  "    os.environ['PATH']).  Returns the complete filename or None if not\n"
  "    found\n"
  "    \"\"\"\n"
  "    if path is None:\n"
  "        path = os.environ['PATH']\n"
  "    paths = path.split(os.pathsep)\n"
  "    extlist = ['']\n"
  "    if os.name == 'os2':\n"
  "        (base, ext) = os.path.splitext(executable)\n"
  "        # executable files on OS/2 can have an arbitrary extension, but\n"
  "        # .exe is automatically appended if no dot is present in the name\n"
  "        if not ext:\n"
  "            executable = executable + \".exe\"\n"
  "    elif sys.platform == 'win32':\n"
  "        pathext = os.environ['PATHEXT'].lower().split(os.pathsep)\n"
  "        (base, ext) = os.path.splitext(executable)\n"
  "        if ext.lower() not in pathext:\n"
  "            extlist = pathext\n"
  "    for ext in extlist:\n"
  "        execname = executable + ext\n"
  "        if os.path.isfile(execname):\n"
  "            return execname\n"
  "        else:\n"
  "            for p in paths:\n"
  "                f = os.path.join(p, execname)\n"
  "                if os.path.isfile(f):\n"
  "                    return f\n"
  "    else:\n"
  "        return None\n"
  "\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "#   processorCount                                                                                                     *\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "\n"
  "def processorCount () :\n"
  "  if sys.version_info >= (2, 6) :\n"
  "    coreCount = multiprocessing.cpu_count ()\n"
  "  else:\n"
  "    coreCount = 1\n"
  "  return coreCount\n"
  "\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "#   FOR PRINTING IN COLOR                                                                                              *\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "\n"
  "def BLACK () :\n"
  "  return '\\033[90m'\n"
  "\n"
  "#\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "def RED () :\n"
  "  return '\\033[91m'\n"
  "\n"
  "#\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "def GREEN () :\n"
  "  return '\\033[92m'\n"
  "\n"
  "#\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "def YELLOW () :\n"
  "  return '\\033[93m'\n"
  "\n"
  "#\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "def BLUE () :\n"
  "  return '\\033[94m'\n"
  "\n"
  "#\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "def MAGENTA () :\n"
  "  return '\\033[95m'\n"
  "\n"
  "#\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "def CYAN () :\n"
  "  return '\\033[96m'\n"
  "\n"
  "#\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "def WHITE () :\n"
  "  return '\\033[97m'\n"
  "\n"
  "#\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "def ENDC () :\n"
  "  return '\\033[0m'\n"
  "\n"
  "#\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "def BOLD () :\n"
  "  return '\\033[1m'\n"
  "\n"
  "#\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "def UNDERLINE () :\n"
  "  return '\\033[4m'\n"
  "\n"
  "#\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "def BLINK () :\n"
  "  return '\\033[5m'\n"
  "\n"
  "#\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "def BOLD_BLUE () :\n"
  "  return BOLD () + BLUE ()\n"
  "\n"
  "#\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "def BOLD_GREEN () :\n"
  "  return BOLD () + GREEN ()\n"
  "\n"
  "#\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "def BOLD_RED () :\n"
  "  return BOLD () + RED ()\n"
  "\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "#   runHiddenCommand                                                                                                   *\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "\n"
  "def runHiddenCommand (cmd, logUtilityTool=False) :\n"
  "  executable = find_executable (cmd [0])\n"
  "  if executable == None:\n"
  "    print BOLD_RED () + \"*** Cannot find '\" + cmd[0] + \"' executable ***\" + ENDC ()\n"
  "    sys.exit (1)\n"
  "  if logUtilityTool:\n"
  "    print \"Utility tool is '\" + executable + \"'\"\n"
  "  result = \"\"\n"
  "  childProcess = subprocess.Popen (cmd, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)\n"
  "  while True:\n"
  "    line = childProcess.stdout.readline ()\n"
  "    if line != \"\":\n"
  "      result += line\n"
  "    else:\n"
  "      childProcess.wait ()\n"
  "      if childProcess.returncode != 0 :\n"
  "        sys.exit (childProcess.returncode)\n"
  "      return result\n"
  "\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "#   runCommand                                                                                                         *\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "\n"
  "def runCommand (cmd, title, showCommand, logUtilityTool) :\n"
  "  if title != \"\":\n"
  "    print BOLD_BLUE () + title + ENDC ()\n"
  "  if (title == \"\") or showCommand :\n"
  "    cmdAsString = \"\"\n"
  "    for s in cmd:\n"
  "      if (s == \"\") or (s.find (\" \") >= 0):\n"
  "        cmdAsString += '\"' + s + '\" '\n"
  "      else:\n"
  "        cmdAsString += s + ' '\n"
  "    print cmdAsString\n"
  "  executable = find_executable (cmd [0])\n"
  "  if executable == None:\n"
  "    print BOLD_RED () + \"*** Cannot find '\" + cmd[0] + \"' executable ***\" + ENDC ()\n"
  "    sys.exit (1)\n"
  "  if logUtilityTool:\n"
  "    print \"Utility tool is '\" + executable + \"'\"\n"
  "  returncode = subprocess.call (cmd)\n"
  "  if returncode != 0 :\n"
  "    sys.exit (returncode)\n"
  "\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "#   runInThread                                                                                                        *\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "\n"
  "def runInThread (job, displayLock, terminationSemaphore):\n"
  "  executable = find_executable (job.mCommand [0])\n"
  "  if executable == None:\n"
  "    print BOLD_RED () + \"*** Cannot find '\" + job.mCommand[0] + \"' executable ***\" + ENDC ()\n"
  "    job.mReturnCode = 1\n"
  "    terminationSemaphore.release ()\n"
  "  else:\n"
  "    if job.mLogUtilityTool :\n"
  "      print \"Utility tool is '\" + executable + \"'\"\n"
  "    childProcess = subprocess.Popen (job.mCommand, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)\n"
  "    while True:\n"
  "      line = childProcess.stdout.readline ()\n"
  "      if line != \"\":\n"
  "        job.mOutputLines.append (line)\n"
  "        displayLock.acquire ()\n"
  "        sys.stdout.write (line) # Print without newline\n"
  "        displayLock.release ()\n"
  "      else:\n"
  "        childProcess.wait ()\n"
  "        job.mReturnCode = childProcess.returncode\n"
  "        terminationSemaphore.release ()\n"
  "        break\n"
  "\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "#   modificationDateForFile                                                                                            *\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "\n"
  "def modificationDateForFile (dateCacheDictionary, file):\n"
  "  absFilePath = os.path.abspath (file)\n"
  "  if dateCacheDictionary.has_key (absFilePath) :\n"
  "    return dateCacheDictionary [absFilePath]\n"
  "  elif not os.path.exists (absFilePath):\n"
  "    date = sys.float_info.max # Very far in future\n"
  "    dateCacheDictionary [absFilePath] = date\n"
  "    return date\n"
  "  else:\n"
  "    date = os.path.getmtime (absFilePath)\n"
  "    dateCacheDictionary [absFilePath] = date\n"
  "    return date\n"
  "\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "#   class PostCommand                                                                                                  *\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "\n"
  "class PostCommand:\n"
  "  mCommand = []\n"
  "  mTitle = \"\"\n"
  "\n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def __init__ (self, title = \"\"):\n"
  "    self.mCommand = []\n"
  "    self.mTitle = title\n"
  "\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "#   class Job                                                                                                          *\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "\n"
  "class Job:\n"
  "  mTargets = []\n"
  "  mCommand = []\n"
  "  mTitle = \"\"\n"
  "  mRequiredFiles = []\n"
  "  mPostCommands = []\n"
  "  mReturnCode = None\n"
  "  mPriority = 0\n"
  "  mState = 0 # 0: waiting for execution\n"
  "  mOutputLines = []\n"
  "  mOpenSourceOnError = False # Do not try to open source file on error\n"
  "  mLogUtilityTool = False\n"
  "  \n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def __init__ (self, targets, requiredFiles, command, postCommands, priority, title, openSourceOnError, logUtilityTool):\n"
  "    self.mTargets = copy.deepcopy (targets)\n"
  "    self.mCommand = copy.deepcopy (command)\n"
  "    self.mRequiredFiles = copy.deepcopy (requiredFiles)\n"
  "    self.mTitle = copy.deepcopy (title)\n"
  "    self.mPostCommands = copy.deepcopy (postCommands)\n"
  "    self.mPriority = priority\n"
  "    self.mOutputLines = []\n"
  "    self.mOpenSourceOnError = openSourceOnError\n"
  "    self.mLogUtilityTool = logUtilityTool\n"
  "\n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def run (self, displayLock, terminationSemaphore, showCommand, progressString):\n"
  "    displayLock.acquire ()\n"
  "    if self.mTitle != \"\":\n"
  "      print progressString + BOLD_BLUE () + self.mTitle + ENDC ()\n"
  "    if (self.mTitle == \"\") or showCommand :\n"
  "      cmdAsString = \"\"\n"
  "      for s in self.mCommand:\n"
  "        if (s == \"\") or (s.find (\" \") >= 0):\n"
  "          cmdAsString += '\"' + s + '\" '\n"
  "        else:\n"
  "          cmdAsString += s + ' '\n"
  "      print progressString + cmdAsString\n"
  "    displayLock.release ()\n"
  "    thread = threading.Thread (target=runInThread, args=(self, displayLock, terminationSemaphore))\n"
  "    thread.start()\n"
  "\n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def runPostCommand (self, displayLock, terminationSemaphore, showCommand):\n"
  "    postCommand = self.mPostCommands [0]\n"
  "    self.mCommand = postCommand.mCommand\n"
  "    displayLock.acquire ()\n"
  "    print BOLD_BLUE () + postCommand.mTitle + ENDC ()\n"
  "    if showCommand:\n"
  "      cmdAsString = \"\"\n"
  "      for s in self.mCommand:\n"
  "        if (s == \"\") or (s.find (\" \") >= 0):\n"
  "          cmdAsString += '\"' + s + '\" '\n"
  "        else:\n"
  "          cmdAsString += s + ' '\n"
  "      print cmdAsString\n"
  "    displayLock.release ()\n"
  "    thread = threading.Thread (target=runInThread, args=(self, displayLock, terminationSemaphore))\n"
  "    thread.start()\n"
  "\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "#   class Rule                                                                                                         *\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "\n"
  "class Rule:\n"
  "  mTargets = []\n"
  "  mDependences = []\n"
  "  mCommand = []\n"
  "  mSecondaryMostRecentModificationDate = 0.0 # Far in the past\n"
  "  mTitle = \"\"\n"
  "  mPostCommands = []\n"
  "  mPriority = 0\n"
  "  mDeleteTargetOnError = False # No operation on error\n"
  "  mCleanOperation = 0 # No operation on clean\n"
  "  mOpenSourceOnError = False # Do not try to open source file on error\n"
  "  \n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def __init__ (self, targets, title = \"\"):\n"
  "    if not isinstance (targets, types.ListType):\n"
  "      print BOLD_RED () + \"*** Rule type instanciation: first argument 'targets' is not a list ***\" + ENDC ()\n"
  "      traceback.print_stack ()\n"
  "      sys.exit (1)\n"
  "    else:\n"
  "      for aTarget in targets:\n"
  "        if not isinstance (aTarget, types.StringTypes):\n"
  "          print BOLD_RED () + \"*** Rule type instanciation: an element of first argument 'targets' is not a string ***\" + ENDC ()\n"
  "          traceback.print_stack ()\n"
  "          sys.exit (1)\n"
  "    if not isinstance (title, types.StringTypes):\n"
  "      print BOLD_RED () + \"*** Rule type instanciation: second argument 'title' is not a string ***\" + ENDC ()\n"
  "      traceback.print_stack ()\n"
  "      sys.exit (1)\n"
  "    self.mTargets = copy.deepcopy (targets)\n"
  "    self.mDependences = []\n"
  "    self.mCommand = []\n"
  "    self.mSecondaryMostRecentModificationDate = 0.0\n"
  "    self.mPostCommands = []\n"
  "    self.mPriority = 0\n"
  "    self.mDeleteTargetOnError = False # No operation on error\n"
  "    self.mOpenSourceOnError = False # Do not try to open source file on error\n"
  "    self.mCleanOperation = 0 # No operation on clean\n"
  "    if title == \"\":\n"
  "      self.mTitle = \"Building\"\n"
  "      for s in targets:\n"
  "        self.mTitle += \" \" + s\n"
  "    else:\n"
  "      self.mTitle = copy.deepcopy (title)\n"
  "  \n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def deleteTargetFileOnClean (self):\n"
  "    self.mCleanOperation = 1\n"
  "  \n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def deleteTargetDirectoryOnClean (self):\n"
  "    self.mCleanOperation = 2\n"
  "  \n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def enterSecondaryDependanceFile (self, secondaryDependanceFile, make):\n"
  "    if not isinstance (secondaryDependanceFile, types.StringTypes):\n"
  "      print BOLD_RED () + \"*** Rule.enterSecondaryDependanceFile: 'secondaryDependanceFile' argument is not a string ***\" + ENDC ()\n"
  "      traceback.print_stack ()\n"
  "      sys.exit (1)\n"
  "    if make.mSelectedGoal != \"clean\":\n"
  "      filePath = os.path.abspath (secondaryDependanceFile)\n"
  "      if not os.path.exists (filePath):\n"
  "        self.mSecondaryMostRecentModificationDate = sys.float_info.max # Very far in future\n"
  "      else:\n"
  "        f = open (filePath, \"r\")\n"
  "        s = f.read ()\n"
  "        f.close ()\n"
  "        s = s.replace (\"\\\\ \", \"\\x01\") # Replace escaped spaces by \\0x01\n"
  "        s = s.replace (\"\\\\\\n\", \"\") # Suppress \\ at the end of lines\n"
  "        liste = s.split (\"\\n\\n\")\n"
  "        for s in liste:\n"
  "          components = s.split (':')\n"
  "          target = components [0].replace (\"\\x01\", \" \")\n"
  "          #print \"------- Optional dependency rules for target '\" + target + \"'\"\n"
  "          #print \"Secondary target '\" + target + \"'\"\n"
  "          for src in components [1].split ():\n"
  "            secondarySource = src.replace (\"\\x01\", \" \")\n"
  "            #print \"  '\" + secondarySource + \"'\"\n"
  "            modifDate = modificationDateForFile (make.mModificationDateDictionary, secondarySource)\n"
  "            if self.mSecondaryMostRecentModificationDate < modifDate :\n"
  "              self.mSecondaryMostRecentModificationDate = modifDate\n"
  "              #print BOLD_BLUE () + str (modifDate) + ENDC ()\n"
  "    \n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "#   class Make                                                                                                         *\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
  "\n"
  "class Make:\n"
  "  mRuleList = []\n"
  "  mJobList = []\n"
  "  mErrorCount = 0\n"
  "  mModificationDateDictionary = {}\n"
  "  mGoals = {}\n"
  "  mSelectedGoal = \"\"\n"
  "  mLinuxTextEditor = \"\"\n"
  "  mMacTextEditor = \"\"\n"
  "  mSimulateClean = False\n"
  "  mLogUtilityTool = True\n"
  "  mShowProgressString = True\n"
  "\n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def __init__ (self, goal, logUtilityTool=False):\n"
  "    if not isinstance (goal, types.StringTypes):\n"
  "      print BOLD_RED () + \"*** Make instanciation: 'goal' argument is not a string ***\" + ENDC ()\n"
  "      traceback.print_stack ()\n"
  "      sys.exit (1)\n"
  "    self.mRuleList = []\n"
  "    self.mJobList = []\n"
  "    self.mErrorCount = 0\n"
  "    self.mModificationDateDictionary = {}\n"
  "    self.mGoals = {}\n"
  "    self.mSelectedGoal = goal\n"
  "    self.mLinuxTextEditor = \"gEdit\"\n"
  "    self.mMacTextEditor = \"TextEdit\"\n"
  "    self.mLogUtilityTool = logUtilityTool\n"
  "\n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def doNotShowProgressString (self) :\n"
  "     self.mShowProgressString = False\n"
  "\n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def addRule (self, rule):\n"
  "    if not isinstance (rule, Rule):\n"
  "      print BOLD_RED () + \"*** Make.addRule: 'rule' argument is not an instance of Rule type ***\" + ENDC ()\n"
  "      traceback.print_stack ()\n"
  "      sys.exit (1)\n"
  "    self.mRuleList.append (copy.deepcopy (rule))\n"
  "\n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def printRules (self):\n"
  "    print BOLD_BLUE () + \"--- Print \" + str (len (self.mRuleList)) + \" rule\" + (\"s\" if len (self.mRuleList) > 1 else \"\") + \" ---\" + ENDC ()\n"
  "    for rule in self.mRuleList:\n"
  "      message = \"\"\n"
  "      for s in rule.mTargets:\n"
  "        message += \" \\\"\" + s + \"\\\"\"\n"
  "      print BOLD_GREEN () + \"Target:\" + message +  ENDC ()\n"
  "      for dep in rule.mDependences:\n"
  "        print \"  Dependence: \\\"\" + dep + \"\\\"\"\n"
  "      s = \"  Command: \"\n"
  "      for cmd in rule.mCommand:\n"
  "        s += \" \\\"\" + cmd + \"\\\"\"\n"
  "      print s\n"
  "      print \"  Title: \\\"\" + rule.mTitle + \"\\\"\"\n"
  "      print \"  Delete target on error: \" + (\"yes\" if rule.mDeleteTargetOnError else \"no\")\n"
  "      cleanOp = \"none\"\n"
  "      if rule.mCleanOperation == 1:\n"
  "        cleanOp = \"delete target file(s)\"\n"
  "      elif rule.mCleanOperation == 2:\n"
  "        dirSet = set ()\n"
  "        for s in rule.mTargets:\n"
  "          path = os.path.dirname (s)\n"
  "          if path != \"\":\n"
  "            dirSet.add (path)\n"
  "        cleanOp = \"delete target directory:\"\n"
  "        for s in dirSet:\n"
  "          cleanOp += \" \\\"\" + s + \"\\\"\"\n"
  "      print \"  Clean operation: \" + cleanOp\n"
  "      index = 0\n"
  "      for postCommand in rule.mPostCommands:\n"
  "         index = index + 1\n"
  "         s = \"  Post command \" + str (index) + \": \"\n"
  "         for cmd in postCommand.mCommand:\n"
  "           s += \" \\\"\" + cmd + \"\\\"\"\n"
  "         print s\n"
  "         print \"    Title: \\\"\" + postCommand.mTitle + \"\\\"\"\n"
  "        \n"
  "    print BOLD_BLUE () + \"--- End of print rule ---\" + ENDC ()\n"
  "\n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def writeRuleDependancesInDotFile (self, dotFileName):\n"
  "    s = \"digraph G {\\n\"\n"
  "    s += \"  node [fontname=courier]\\n\"\n"
  "    arrowSet = set ()\n"
  "    for rule in self.mRuleList:\n"
  "      for target in rule.mTargets:\n"
  "        s += '  \"' + target + '\" [shape=rectangle]\\n'\n"
  "        for dep in rule.mDependences:\n"
  "          arrowSet.add ('  \"' + target + '\" -> \"' + dep + '\"\\n')\n"
  "    for arrow in arrowSet:\n"
  "      s += arrow\n"
  "    s += \"}\\n\"\n"
  "    f = open (dotFileName, \"w\")\n"
  "    f.write (s)\n"
  "    f.close ()\n"
  "\n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def checkRules (self):\n"
  "    if self.mErrorCount == 0:\n"
  "      ruleList = copy.deepcopy (self.mRuleList)\n"
  "      index = 0\n"
  "      looping = True\n"
  "    #--- loop on rules\n"
  "      while looping:\n"
  "        looping = False\n"
  "        while index < len (ruleList):\n"
  "          aRule = ruleList [index]\n"
  "          index = index + 1\n"
  "        #--- Check dependance files have rule for building, or does exist\n"
  "          depIdx = 0\n"
  "          while depIdx < len (aRule.mDependences):\n"
  "            dep = aRule.mDependences [depIdx]\n"
  "            depIdx = depIdx + 1\n"
  "            hasBuildRule = False\n"
  "            for r in ruleList:\n"
  "              for target in r.mTargets:\n"
  "                if dep == target:\n"
  "                  hasBuildRule = True\n"
  "                  break\n"
  "            if not hasBuildRule:\n"
  "              looping = True\n"
  "              if not os.path.exists (os.path.abspath (dep)):\n"
  "                self.mErrorCount = self.mErrorCount + 1\n"
  "                print BOLD_RED () + \"Check rules error: '\" + dep + \"' does not exist, and there is no rule for building it.\" + ENDC ()\n"
  "              depIdx = depIdx - 1\n"
  "              aRule.mDependences.pop (depIdx)\n"
  "        #--- Rule with no dependances\n"
  "          if len (aRule.mDependences) == 0 :\n"
  "            looping = True\n"
  "            index = index - 1\n"
  "            ruleList.pop (index)\n"
  "            idx = 0\n"
  "            while idx < len (ruleList):\n"
  "              r = ruleList [idx]\n"
  "              idx = idx + 1\n"
  "              for target in aRule.mTargets:\n"
  "                while r.mDependences.count (target) > 0 :\n"
  "                  r.mDependences.remove (target)\n"
  "    #--- Error if rules remain\n"
  "      if len (ruleList) > 0:\n"
  "        self.mErrorCount = self.mErrorCount + 1\n"
  "        print BOLD_RED () + \"Check rules error; circulary dependances between:\" + ENDC ()\n"
  "        for aRule in ruleList:\n"
  "          targetList = \"\"\n"
  "          for target in aRule.mTargets:\n"
  "            targetList += \" '\" + aRule.mTarget + \"'\"\n"
  "          print BOLD_RED () + \"  - \" + targetList + \", depends from:\" + ENDC ()\n"
  "          for dep in aRule.mDependences:\n"
  "            print BOLD_RED () + \"      '\" + dep + \"'\" + ENDC ()\n"
  "\n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def existsJobForTarget (self, target):\n"
  "    for job in self.mJobList:\n"
  "      for aTarget in job.mTargets:\n"
  "        if aTarget == target:\n"
  "          return True\n"
  "    return False\n"
  "\n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def makeJob (self, target): # Return a bool indicating wheither the target should be built\n"
  "  #--- If there are errors, return immediatly\n"
  "    if self.mErrorCount != 0:\n"
  "      return False\n"
  "  #--- Target already in job list \?\n"
  "    if self.existsJobForTarget (target):\n"
  "      return True # yes, return target will be built\n"
  "  #--- Find a rule for making the target\n"
  "    absTarget = os.path.abspath (target)\n"
  "    rule = None\n"
  "    matchCount = 0\n"
  "    for r in self.mRuleList:\n"
  "      for aTarget in r.mTargets:\n"
  "        if target == aTarget:\n"
  "          matchCount = matchCount + 1\n"
  "          rule = r\n"
  "    if matchCount == 0:\n"
  "      absTarget = os.path.abspath (target)\n"
  "      if not os.path.exists (absTarget):\n"
  "        print BOLD_RED () + \"No rule for making '\" + target + \"'\" + ENDC ()\n"
  "        self.mErrorCount = self.mErrorCount + 1\n"
  "      return False # Error or target exists, and no rule for building it\n"
  "    elif matchCount > 1:\n"
  "      print BOLD_RED () + str (matchCount) + \" rules for making '\" + target + \"'\" + ENDC ()\n"
  "      self.mErrorCount = self.mErrorCount + 1\n"
  "      return False # Error\n"
  "  #--- Target file does not exist, and 'rule' variable indicates how build it\n"
  "    appendToJobList = not os.path.exists (absTarget)\n"
  "  #--- Build primary dependences\n"
  "    jobDependenceFiles = []\n"
  "    for dependence in rule.mDependences:\n"
  "      willBeBuilt = self.makeJob (dependence)\n"
  "      if willBeBuilt:\n"
  "        jobDependenceFiles.append (dependence)\n"
  "        appendToJobList = True\n"
  "  #--- Check primary file modification dates\n"
  "    if not appendToJobList:\n"
  "      targetDateModification = os.path.getmtime (absTarget)\n"
  "      for source in rule.mDependences:\n"
  "        sourceDateModification = os.path.getmtime (source)\n"
  "        if targetDateModification < sourceDateModification:\n"
  "          appendToJobList = True\n"
  "          break\n"
  "  #--- Check for secondary dependancy files\n"
  "    if not appendToJobList:\n"
  "      targetDateModification = os.path.getmtime (absTarget)\n"
  "      if targetDateModification < rule.mSecondaryMostRecentModificationDate:\n"
  "        appendToJobList = True\n"
  "  #--- Append to job list\n"
  "    if appendToJobList:\n"
  "      self.mJobList.append (Job (\n"
  "        rule.mTargets,\n"
  "        jobDependenceFiles,\n"
  "        rule.mCommand,\n"
  "        rule.mPostCommands,\n"
  "        rule.mPriority,\n"
  "        rule.mTitle,\n"
  "        rule.mOpenSourceOnError,\n"
  "        self.mLogUtilityTool\n"
  "      ))\n"
  "  #--- Return\n"
  "    return appendToJobList\n"
  "\n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "  #Job state\n"
  "  # 0: waiting\n"
  "  # 1:running\n"
  "  # 2: waiting for executing post command\n"
  "  # 3:executing for executing post command\n"
  "  # 4: completed\n"
  "\n"
  "  def runJobs (self, maxConcurrentJobs, showCommand):\n"
  "    if self.mErrorCount == 0:\n"
  "      if len (self.mJobList) == 0:\n"
  "        print BOLD_BLUE () + \"Nothing to make.\" + ENDC ()\n"
  "      else:\n"
  "      #--- Sort jobs following their priorities\n"
  "        self.mJobList = sorted (self.mJobList, key=operator.attrgetter(\"mPriority\"), reverse=True)\n"
  "      #--- Run\n"
  "        if maxConcurrentJobs <= 0:\n"
  "          maxConcurrentJobs = processorCount () - maxConcurrentJobs\n"
  "        jobCount = 0 ;\n"
  "        terminationSemaphore = threading.Semaphore (0)\n"
  "        displayLock = threading.Lock ()\n"
  "        loop = True\n"
  "        returnCode = 0\n"
  "        totalJobCount = float (len (self.mJobList))\n"
  "        launchedJobCount = 0.0\n"
  "        while loop:\n"
  "        #--- Launch jobs in parallel\n"
  "          for job in self.mJobList:\n"
  "            if (returnCode == 0) and (jobCount < maxConcurrentJobs):\n"
  "              if (job.mState == 0) and (len (job.mRequiredFiles) == 0):\n"
  "                #--- Create target directory if does not exist\n"
  "                for aTarget in job.mTargets:\n"
  "                  absTargetDirectory = os.path.dirname (os.path.abspath (aTarget))\n"
  "                  if not os.path.exists (absTargetDirectory):\n"
  "                    displayLock.acquire ()\n"
  "                    runCommand (\n"
  "                      [\"mkdir\", \"-p\", os.path.dirname (aTarget)], \"Making \\\"\" + os.path.dirname (aTarget) + \"\\\" directory\",\n"
  "                      showCommand,\n"
  "                      job.mLogUtilityTool\n"
  "                    )\n"
  "                    displayLock.release ()\n"
  "                #--- Progress string\n"
  "                launchedJobCount += 1.0\n"
  "                if self.mShowProgressString:\n"
  "                  progressString = \"[{0:3d}%] \".format (int (100.0 * launchedJobCount / totalJobCount))\n"
  "                else:\n"
  "                  progressString = \"\"\n"
  "                #--- Run job\n"
  "                job.run (displayLock, terminationSemaphore, showCommand, progressString)\n"
  "                jobCount = jobCount + 1\n"
  "                job.mState = 1 # Means is running\n"
  "              elif job.mState == 2: # Waiting for executing post command\n"
  "                job.mReturnCode = None # Means post command not terminated\n"
  "                job.runPostCommand (displayLock, terminationSemaphore, showCommand)\n"
  "                jobCount = jobCount + 1\n"
  "                job.mState = 3 # Means post command is running\n"
  "        #--- Wait for a job termination\n"
  "          #print \"wait \" + str (jobCount) + \" \" + str (len (self.mJobList))\n"
  "          terminationSemaphore.acquire ()\n"
  "        #--- Checks for terminated jobs\n"
  "          index = 0\n"
  "          while index < len (self.mJobList):\n"
  "            job = self.mJobList [index]\n"
  "            index = index + 1\n"
  "            if (job.mState == 1) and (job.mReturnCode == 0) : # Terminated without error\n"
  "              jobCount = jobCount - 1\n"
  "              for aTarget in job.mTargets:\n"
  "                if not os.path.exists (os.path.abspath (aTarget)): # Warning: target does not exist\n"
  "                  displayLock.acquire ()\n"
  "                  print MAGENTA () + BOLD () + \"Warning: target \\\"\" + aTarget + \"\\\" was not created by rule execution.\" + ENDC ()\n"
  "                  displayLock.release ()\n"
  "              if len (job.mPostCommands) > 0:\n"
  "                job.mState = 2 # Ready to execute next post command\n"
  "              else:\n"
  "                job.mState = 4 # Completed\n"
  "                index = index - 1 # For removing job from list\n"
  "            elif (job.mState == 1) and (job.mReturnCode > 0) : # terminated with error : exit\n"
  "              jobCount = jobCount - 1\n"
  "              job.mState = 4 # Means Terminated\n"
  "              index = index - 1 # For removing job from list\n"
  "              if job.mOpenSourceOnError:\n"
  "                for line in job.mOutputLines:\n"
  "                  components = line.split (':')\n"
  "                  if (len (components) > 1) and os.path.exists (os.path.abspath (components [0])) :\n"
  "                    if sys.platform == \"darwin\":\n"
  "                      os.system (\"open -a \\\"\" + self.mMacTextEditor + \"\\\" \\\"\" + components [0] + \"\\\"\")\n"
  "                    elif sys.platform == \"linux2\":\n"
  "                      os.system (\"\\\"\" + self.mLinuxTextEditor + \"\\\" \\\"\" + components [0] + \"\\\"\")\n"
  "            elif (job.mState == 3) and (job.mReturnCode == 0): # post command is terminated without error\n"
  "              jobCount = jobCount - 1\n"
  "              job.mPostCommands.pop (0) # Remove completed post command\n"
  "              if len (job.mPostCommands) > 0:\n"
  "                job.mState = 2 # Ready to execute next post command\n"
  "              else:\n"
  "                job.mState = 4 # Completed\n"
  "                index = index - 1 # For removing job from list\n"
  "            elif (job.mState == 3) and (job.mReturnCode > 0): # post command is terminated with error\n"
  "              jobCount = jobCount - 1\n"
  "              job.mState = 4 # Completed\n"
  "              index = index - 1 # For removing job from list\n"
  "            elif job.mState == 4: # Completed: delete job\n"
  "              index = index - 1\n"
  "              self.mJobList.pop (index) # Remove terminated job\n"
  "              #displayLock.acquire ()\n"
  "              #print \"Completed '\" + job.mTitle + \"'\"\n"
  "              #--- Remove dependences from this job\n"
  "              idx = 0\n"
  "              while idx < len (self.mJobList):\n"
  "                aJob = self.mJobList [idx]\n"
  "                idx = idx + 1\n"
  "                for aTarget in job.mTargets:\n"
  "                  while aJob.mRequiredFiles.count (aTarget) > 0 :\n"
  "                    aJob.mRequiredFiles.remove (aTarget)\n"
  "                  #print \"  Removed from '\" + aJob.mTitle + \"': \" + str (len (aJob.mRequiredFiles))\n"
  "              #displayLock.release ()\n"
  "              #--- Signal error \?\n"
  "              if (job.mReturnCode > 0) and (returnCode == 0):\n"
  "                self.mErrorCount = self.mErrorCount + 1\n"
  "                print BOLD_RED () + \"Return code: \" + str (job.mReturnCode) + ENDC ()\n"
  "                if (returnCode == 0) and (jobCount > 0) :\n"
  "                  print \"Wait for job termination...\"\n"
  "                returnCode = job.mReturnCode\n"
  "          loop = (len (self.mJobList) > 0) if (returnCode == 0) else (jobCount > 0)\n"
  "\n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def searchFileInDirectories (self, file, directoryList): # returns \"\" if not found, register error\n"
  "    matchCount = 0\n"
  "    result = \"\"\n"
  "    for sourceDir in directoryList:\n"
  "      sourcePath = sourceDir + \"/\" + file\n"
  "      if os.path.exists (os.path.abspath (sourcePath)):\n"
  "        matchCount = matchCount + 1\n"
  "        result = sourcePath\n"
  "    if matchCount == 0:\n"
  "      print BOLD_RED () + \"Cannot find '\" + file + \"'\" + ENDC ()\n"
  "      self.mErrorCount = self.mErrorCount + 1\n"
  "    elif matchCount > 1:\n"
  "      print BOLD_RED () + str (matchCount) + \" source files for making '\" + file + \"'\" + ENDC ()\n"
  "      self.mErrorCount = self.mErrorCount + 1\n"
  "      result = \"\"\n"
  "    return result\n"
  "\n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def addGoal (self, goal, targetList, message):\n"
  "    if not isinstance (goal, types.StringTypes):\n"
  "      print BOLD_RED () + \"*** Make.addGoal: 'goal' first argument is not a string ***\" + ENDC ()\n"
  "      traceback.print_stack ()\n"
  "      sys.exit (1)\n"
  "    if not isinstance (targetList, types.ListType):\n"
  "      print BOLD_RED () + \"*** Make.addGoal: 'targetList' second argument is not a list ***\" + ENDC ()\n"
  "      traceback.print_stack ()\n"
  "      sys.exit (1)\n"
  "    else:\n"
  "      for aTarget in targetList:\n"
  "        if not isinstance (aTarget, types.StringTypes):\n"
  "          print BOLD_RED () + \"*** Make.addGoal: an element of 'targetList' second argument 'targets' is not a string ***\" + ENDC ()\n"
  "          traceback.print_stack ()\n"
  "          sys.exit (1)\n"
  "    if not isinstance (message, types.StringTypes):\n"
  "      print BOLD_RED () + \"*** Make.addGoal: 'message' third argument is not a string ***\" + ENDC ()\n"
  "      traceback.print_stack ()\n"
  "      sys.exit (1)\n"
  "    if self.mGoals.has_key (goal) or (goal == \"clean\") :\n"
  "      self.enterError (\"The '\" + goal + \"' goal is already defined\")\n"
  "    else:\n"
  "      self.mGoals [goal] = (targetList, message)\n"
  "    #print '%s' % ', '.join(map(str, self.mGoals))\n"
  "\n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def printGoals (self):\n"
  "    print BOLD_BLUE () + \"--- Print \" + str (len (self.mGoals)) + \" goal\" + (\"s\" if len (self.mGoals) > 1 else \"\") + \" ---\" + ENDC ()\n"
  "    for goalKey in self.mGoals.keys ():\n"
  "      print BOLD_GREEN () + \"Goal: \\\"\" + goalKey + \"\\\"\" + ENDC ()\n"
  "      (targetList, message) = self.mGoals [goalKey]\n"
  "      for target in targetList:\n"
  "        print \"  Target: \\\"\" + target + \"\\\"\"\n"
  "      print \"  Message: \\\"\" + message + \"\\\"\"\n"
  "        \n"
  "    print BOLD_BLUE () + \"--- End of print goals ---\" + ENDC ()\n"
  "\n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def runGoal (self, maxConcurrentJobs, showCommand):\n"
  "    if not isinstance (maxConcurrentJobs, types.IntType):\n"
  "      print BOLD_RED () + \"*** Make.runGoal: 'maxConcurrentJobs' first argument is not an integer ***\" + ENDC ()\n"
  "      traceback.print_stack ()\n"
  "      sys.exit (1)\n"
  "    if not isinstance (showCommand, types.BooleanType):\n"
  "      print BOLD_RED () + \"*** Make.runGoal: 'showCommand' second argument is not a boolean ***\" + ENDC ()\n"
  "      traceback.print_stack ()\n"
  "      sys.exit (1)\n"
  "    if self.mGoals.has_key (self.mSelectedGoal) :\n"
  "      (targetList, message) = self.mGoals [self.mSelectedGoal]\n"
  "      for target in targetList:\n"
  "        self.makeJob (target)\n"
  "      self.runJobs (maxConcurrentJobs, showCommand)\n"
  "      if self.mErrorCount > 0:\n"
  "        for rule in self.mRuleList:\n"
  "          for aTarget in rule.mTargets:\n"
  "            if rule.mDeleteTargetOnError and os.path.exists (os.path.abspath (aTarget)):\n"
  "              runCommand ([\"rm\", aTarget], \"Delete \\\"\" + aTarget + \"\\\" on error\", showCommand, self.mLogUtilityTool)\n"
  "    elif self.mSelectedGoal == \"clean\" :\n"
  "      filesToRemoveList = []\n"
  "      directoriesToRemoveSet = set ()\n"
  "      for rule in self.mRuleList:\n"
  "        if rule.mCleanOperation == 1: # Delete target\n"
  "          for aTarget in rule.mTargets:\n"
  "            filesToRemoveList.append (aTarget)\n"
  "        elif rule.mCleanOperation == 2: # Delete target directories\n"
  "          for aTarget in rule.mTargets:\n"
  "            dirPath = os.path.dirname (aTarget)\n"
  "            if dirPath == \"\":\n"
  "              filesToRemoveList.append (aTarget)\n"
  "            else:\n"
  "              directoriesToRemoveSet.add (dirPath)\n"
  "      for dir in directoriesToRemoveSet:\n"
  "        if os.path.exists (os.path.abspath (dir)):\n"
  "          if self.mSimulateClean:\n"
  "            print MAGENTA () + BOLD () + \"Simulated clean command: \" + ENDC () + \"rm -fr '\" + dir + \"'\"\n"
  "          else:\n"
  "            runCommand ([\"rm\", \"-fr\", dir], \"Removing \\\"\" + dir + \"\\\"\", showCommand, self.mLogUtilityTool)\n"
  "      for file in filesToRemoveList:\n"
  "        if os.path.exists (os.path.abspath (file)):\n"
  "          if self.mSimulateClean:\n"
  "            print MAGENTA () + BOLD () + \"Simulated clean command: \" + ENDC () + \"rm -f '\" + file + \"'\"\n"
  "          else:\n"
  "            runCommand ([\"rm\", \"-f\", file], \"Deleting \\\"\" + file + \"\\\"\", showCommand, self.mLogUtilityTool)\n"
  "    else:\n"
  "      errorMessage = \"The '\" + self.mSelectedGoal + \"' goal is not defined; defined goals:\"\n"
  "      for key in self.mGoals:\n"
  "        (targetList, message) = self.mGoals [key]\n"
  "        errorMessage += \"\\n  '\" + key + \"': \" + message\n"
  "      print BOLD_RED () + errorMessage + ENDC ()\n"
  "      self.mErrorCount = self.mErrorCount + 1\n"
  "\n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def simulateClean (self):\n"
  "    self.mSimulateClean = True\n"
  "\n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def enterError (self, message):\n"
  "    print BOLD_RED () + message + ENDC ()\n"
  "    self.mErrorCount = self.mErrorCount + 1\n"
  "\n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def printErrorCountAndExitOnError (self):\n"
  "    if self.mErrorCount == 1:\n"
  "      print BOLD_RED () + \"1 error.\" + ENDC ()\n"
  "      sys.exit (1)\n"
  "    elif self.mErrorCount > 1:\n"
  "      print BOLD_RED () + str (self.mErrorCount) + \" errors.\" + ENDC ()\n"
  "      sys.exit (1)\n"
  "\n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def printErrorCount (self):\n"
  "    if self.mErrorCount == 1:\n"
  "      print BOLD_RED () + \"1 error.\" + ENDC ()\n"
  "    elif self.mErrorCount > 1:\n"
  "      print BOLD_RED () + str (self.mErrorCount) + \" errors.\" + ENDC ()\n"
  "\n"
  "  #\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""*\n"
  "\n"
  "  def errorCount (self):\n"
  "    return self.mErrorCount\n"
  "\n"
  "#\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n" ;

const cRegularFileWrapper gWrapperFile_2_targetTemplates (
  "makefile.py",
  "py",
  true, // Text file
  40378, // Text length
  gWrapperFileContent_2_targetTemplates
) ;

//--- File '/plm.py'

const char * gWrapperFileContent_3_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "# https://docs.python.org/2/library/subprocess.html#module-subprocess\n"
  "\n"
  "import sys, os, subprocess, urllib\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "import makefile\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   Run process and wait for termination                                                                               *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def runProcess (command) :\n"
  "  childProcess = subprocess.Popen (command)\n"
  "#--- Wait for subprocess termination\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.wait ()\n"
  "  if childProcess.returncode != 0 :\n"
  "    print makefile.BOLD_RED () + \"Error \" + str (childProcess.returncode) + makefile.ENDC ()\n"
  "    sys.exit (childProcess.returncode)\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   Run process, get output and wait for termination                                                                   *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def runProcessAndGetOutput (command) :\n"
  "  result = \"\"\n"
  "  childProcess = subprocess.Popen (command, stdout=subprocess.PIPE, stderr=subprocess.PIPE)\n"
  "  while True:\n"
  "    out = childProcess.stdout.read(1)\n"
  "    if out == '' and childProcess.poll() != None:\n"
  "      break\n"
  "    if out != '':\n"
  "      result += out\n"
  "#--- Wait for subprocess termination\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.wait ()\n"
  "  if childProcess.returncode != 0 :\n"
  "    print makefile.BOLD_RED () + \"Error \" + str (childProcess.returncode) + makefile.ENDC ()\n"
  "    sys.exit (childProcess.returncode)\n"
  "  return result\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   ARCHIVE DOWNLOAD                                                                                                   *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "downloadProgression = 0.0\n"
  "\n"
  "def downloadReportHook (a, b, fileSize) :\n"
  "  global downloadProgression\n"
  "  newProgression = min (100.0, float(a * b) / fileSize * 100.0)\n"
  "  if newProgression > downloadProgression :\n"
  "    downloadProgression = downloadProgression + 1.0\n"
  "    sys.stdout.write(\".\")\n"
  "    sys.stdout.flush()\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def downloadArchive (archiveURL, archivePath):\n"
  "  global downloadProgression\n"
  "  downloadProgression = 0.0\n"
  "  makefile.runHiddenCommand ([\"rm\", \"-f\", archivePath + \".downloading\"])\n"
  "  makefile.runHiddenCommand ([\"rm\", \"-f\", archivePath + \".tar.bz2\"])\n"
  "  makefile.runHiddenCommand ([\"mkdir\", \"-p\", os.path.dirname (archivePath)])\n"
  "  #print \"URL: \"+ archiveURL\n"
  "  #print \"Downloading... \" + archivePath + \".downloading\"\n"
  "  try:\n"
  "    urllib.urlretrieve (archiveURL,  archivePath + \".downloading\", downloadReportHook)\n"
  "    print \"\"\n"
  "    fileSize = os.path.getsize (archivePath + \".downloading\")\n"
  "    ok = fileSize > 1000000\n"
  "    if ok:\n"
  "      makefile.runHiddenCommand ([\"mv\", archivePath + \".downloading\", archivePath + \".tar.bz2\"])\n"
  "    else:\n"
  "      print makefile.BOLD_RED () + \"Error: cannot download file\" + makefile.ENDC ()\n"
  "      sys.exit (1)\n"
  "  except:\n"
  "    print makefile.BOLD_RED () + \"Error: no network connection\" + makefile.ENDC ()\n"
  "    sys.exit (1)\n"
  "    \n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def runMakefile (toolDirectory, archiveBaseURL, LLVMsourceList, assemblerSourceList, \\\n"
  "                 objectDir, LLCcompiler, llvmOptimizerCompiler, \\\n"
  "                 asAssembler, \\\n"
  "                 productDir, linker, linkerScripts, linkerLibraries, objcopy, \\\n"
  "                 dumpObjectCode, displayObjectSize, runExecutableOnTarget, \\\n"
  "                 CLANGcompiler, CsourceList, LLVMLinkerCompiler, \\\n"
  "                 currentFile, arm_stack_computations, check_stack_utility) :\n"
  "  #--- Get max parallel jobs as first argument\n"
  "  goal = \"all\"\n"
  "  if len (sys.argv) > 1 :\n"
  "    goal = sys.argv [1]\n"
  "  #--- Get max parallel jobs as first argument\n"
  "  maxParallelJobs = 0 # 0 means use host processor count\n"
  "  if len (sys.argv) > 2 :\n"
  "    maxParallelJobs = int (sys.argv [2])\n"
  "  #--- Get script absolute path\n"
  "  scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
  "  #--- Download compiler tool if needed\n"
  "  if not os.path.exists (toolDirectory):\n"
  "    print makefile.BOLD_GREEN () + \"Downloading compiler tool chain\" + makefile.ENDC ()\n"
  "    archiveName = os.path.basename (toolDirectory)\n"
  "    archiveURL = archiveBaseURL + archiveName + \".tar.bz2\"\n"
  "    downloadArchive (archiveURL, toolDirectory)\n"
  "    installDir = os.path.normpath (toolDirectory + \"/..\")\n"
  "    os.chdir (installDir)\n"
  "    makefile.runHiddenCommand ([\"bunzip2\", \"-k\", archiveName + \".tar.bz2\"])\n"
  "    makefile.runHiddenCommand ([\"rm\", archiveName + \".tar.bz2\"])\n"
  "    makefile.runHiddenCommand ([\"tar\", \"xf\", archiveName + \".tar\"])\n"
  "    makefile.runHiddenCommand ([\"rm\", archiveName + \".tar\"])\n"
  "  #---\n"
  "  os.chdir (scriptDir)\n"
  "  #print \"Product directory: \" + scriptDir\n"
  "  #--- Build python makefile\n"
  "  make = makefile.Make (goal, maxParallelJobs == 1) # Display command utility tool if sequential build\n"
  "  #---------------------------------------------- Add C files compile rule\n"
  "  llvmSourceFileList = []\n"
  "  for source in CsourceList:\n"
  "  #--- Compile C --> LLVM\n"
  "    llvmSource = objectDir + \"/\" + source + \".ll\"\n"
  "    rule = makefile.Rule ([llvmSource], \"Compiling \" + source)\n"
  "    rule.mDependences.append (\"sources/\" + source)\n"
  "    rule.mDependences.append (currentFile)\n"
  "    rule.mCommand += CLANGcompiler\n"
  "    rule.mCommand += [\"-emit-llvm\", \"-S\"]\n"
  "    rule.mCommand += [\"sources/\" + source]\n"
  "    rule.mCommand += [\"-o\", llvmSource]\n"
  "    make.addRule (rule)\n"
  "    llvmSourceFileList.append (source + \".ll\")\n"
  "  #---------------------------------------------- LLVM Linking\n"
  "  llvmLinkedSource = objectDir + \"/all.ll\"\n"
  "  title = \"LLVM Link\"\n"
  "  for source in LLVMsourceList:\n"
  "    title += \" sources/\" + source\n"
  "  for source in llvmSourceFileList:\n"
  "    title += \" \" + objectDir + \"/\" + source\n"
  "  rule = makefile.Rule ([llvmLinkedSource], title)\n"
  "  rule.mCommand += LLVMLinkerCompiler\n"
  "  rule.mDependences.append (currentFile)\n"
  "  for source in LLVMsourceList:\n"
  "    rule.mCommand += [\"sources/\" + source]\n"
  "    rule.mDependences.append (\"sources/\" + source)\n"
  "  for source in llvmSourceFileList:\n"
  "    rule.mCommand += [objectDir + \"/\" + source]\n"
  "    rule.mDependences.append (objectDir + \"/\" + source)\n"
  "  rule.mCommand += [\"-o\", llvmLinkedSource]\n"
  "  make.addRule (rule)\n"
  "  LLVMsourceList = [\"all.ll\"]\n"
  "  #---------------------------------------------- Add LLVM files compile rule\n"
  "  objectList = []\n"
  "  for source in LLVMsourceList:\n"
  "  #--- Optimize LLVM source\n"
  "    optimizedSource = objectDir + \"/opt.\" + source\n"
  "    rule = makefile.Rule ([optimizedSource], \"Optimizing \" + source)\n"
  "    rule.mDependences.append (objectDir + \"/\" + source)\n"
  "    rule.mDependences.append (currentFile)\n"
  "    rule.mCommand += llvmOptimizerCompiler\n"
  "    rule.mCommand += [objectDir + \"/\" + source]\n"
  "    rule.mCommand += [\"-o\", optimizedSource]\n"
  "    make.addRule (rule)\n"
  "  #--- Compile optimized LLVM source\n"
  "    asSource = objectDir + \"/opt.\" + source + \".s\"\n"
  "    rule = makefile.Rule ([asSource], \"Compiling \" + optimizedSource)\n"
  "    rule.mDependences.append (optimizedSource)\n"
  "    rule.mCommand += LLCcompiler\n"
  "    rule.mCommand += [optimizedSource]\n"
  "    rule.mCommand += [\"-o\", asSource]\n"
  "    make.addRule (rule)\n"
  "  #--- Assembling\n"
  "    asObject = objectDir + \"/opt.\" + source + \".s.o\"\n"
  "    listingFile = objectDir + \"/opt.\" + source + \".s.list\"\n"
  "    rule = makefile.Rule ([asObject, listingFile], \"Assembling \" + asSource)\n"
  "    rule.mDependences.append (asSource)\n"
  "    rule.mCommand += asAssembler\n"
  "    rule.mCommand += [asSource]\n"
  "    rule.mCommand += [\"-o\", asObject]\n"
  "    rule.mCommand += [\"-aln=\" + listingFile]\n"
  "    make.addRule (rule)\n"
  "    objectList.append (asObject)\n"
  "  #---------------------------------------------- Add assembler files compile rule\n"
  "  for source in assemblerSourceList:\n"
  "    object = objectDir + \"/\" + source + \".o\"\n"
  "    listingFile = objectDir + \"/opt.\" + source + \".list\"\n"
  "    rule = makefile.Rule ([object, listingFile], \"Assembling \" + source)\n"
  "    rule.mDependences.append (\"sources/\" + source)\n"
  "    rule.mCommand += asAssembler\n"
  "    rule.mCommand += [\"sources/\" + source]\n"
  "    rule.mCommand += [\"-o\", object]\n"
  "    rule.mCommand += [\"-aln=\" + listingFile]\n"
  "    make.addRule (rule)\n"
  "    objectList.append (object)\n"
  "  #---------------------------------------------- Add linker rule\n"
  "  for lkScript in linkerScripts:\n"
  "    productELF = productDir + \"/product-\" + lkScript + \".elf\"\n"
  "    rule = makefile.Rule ([productELF], \"Linking \" + productELF)\n"
  "    rule.mDependences += objectList\n"
  "    rule.mCommand += linker\n"
  "    rule.mCommand += objectList\n"
  "    for library in linkerLibraries:\n"
  "      rule.mCommand += [toolDirectory + \"/lib/\" + library]\n"
  "    rule.mCommand += [\"-o\", productELF]\n"
  "    rule.mCommand += [\"-Tsources/\" + lkScript + \".ld\"]\n"
  "    rule.mDependences += [\"sources/\" + lkScript + \".ld\"]\n"
  "    rule.mCommand += [\"-Map=\" + productELF + \".map\"]\n"
  "    make.addRule (rule)\n"
  "    #--- Add objcopy rule\n"
  "    productHEX = productDir + \"/product.ihex\"\n"
  "    rule = makefile.Rule ([productHEX], \"Hexing \" + productHEX)\n"
  "    rule.mDependences += [productELF]\n"
  "    rule.mCommand += objcopy\n"
  "    rule.mCommand += [\"-O\", \"ihex\"]\n"
  "    rule.mCommand += [productELF]\n"
  "    rule.mCommand += [productHEX]\n"
  "    make.addRule (rule)\n"
  "  #---------------------------------------------- Add stack computation rule\n"
  "  stackComputationResultFile = objectDir + \"/stack-computations.json\"\n"
  "  rule = makefile.Rule ([stackComputationResultFile], \"Stack requirements\")\n"
  "  rule.mCommand += arm_stack_computations\n"
  "  for source in assemblerSourceList:\n"
  "    rule.mDependences.append (\"sources/\" + source)\n"
  "    rule.mCommand += [\"sources/\" + source]\n"
  "  for source in LLVMsourceList:\n"
  "    src = objectDir + \"/opt.\" + source + \".s\"\n"
  "    rule.mDependences.append (src)\n"
  "    rule.mCommand += [src]\n"
  "  rule.mCommand += [\"-o\", stackComputationResultFile]\n"
  "  make.addRule (rule)\n"
  "  objectList.append (object)\n"
  "  #---------------------------------------------- Add stacks check rule\n"
  "  checkStackResultFile = productDir + \"/check-stacks-result.txt\"\n"
  "  rule = makefile.Rule ([checkStackResultFile], \"Check stacks\")\n"
  "  rule.mCommand.append (\"python\")\n"
  "  rule.mCommand += check_stack_utility\n"
  "  rule.mDependences.append (\"sources/provided-stacks.json\")\n"
  "  rule.mCommand += [\"sources/provided-stacks.json\"]\n"
  "  rule.mDependences.append (stackComputationResultFile)\n"
  "  rule.mCommand += [stackComputationResultFile]\n"
  "  rule.mCommand += [checkStackResultFile]\n"
  "  make.addRule (rule)\n"
  "  objectList.append (object)\n"
  "  #---------------------------------------------- Add goals\n"
  "  make.addGoal (\"run\", [productHEX, checkStackResultFile], \"Building all and run\")\n"
  "  make.addGoal (\"all\", [productHEX, checkStackResultFile], \"Building all\")\n"
  "  make.addGoal (\"display-object-size\", [productHEX, checkStackResultFile], \"Display Object Size\")\n"
  "  make.addGoal (\"object-dump\", [productHEX, checkStackResultFile], \"Dump Object Code\")\n"
  "  #---------------------------------------------- Build\n"
  "  #make.printRules ()\n"
  "  make.doNotShowProgressString ()\n"
  "  make.runGoal (maxParallelJobs, maxParallelJobs == 1)\n"
  "  #---------------------------------------------- Build Ok \?\n"
  "  make.printErrorCountAndExitOnError ()\n"
  "  #---------------------------------------------- Run or all \? Display size\n"
  "  if (goal == \"run\") or (goal == \"all\") :\n"
  "    s = runProcessAndGetOutput (displayObjectSize + [productELF])\n"
  "    secondLine = s.split('\\n')[1]\n"
  "    numbers = [int(s) for s in secondLine.split() if s.isdigit()]\n"
  "    print \"Code:        \" + str (numbers [0]) + \" bytes\"\n"
  "    print \"ROM data:    \" + str (numbers [1]) + \" bytes\"\n"
  "    print \"RAM + STACK: \" + str (numbers [2]) + \" bytes\"\n"
  "  #----------------------------------------------- Run \?\n"
  "  if goal == \"run\":\n"
  "    print makefile.BOLD_BLUE () + \"Loading Teensy...\" + makefile.ENDC ()\n"
  "    runProcess (runExecutableOnTarget + [productHEX])\n"
  "    print makefile.BOLD_GREEN () + \"Success\" + makefile.ENDC ()\n"
  "  elif goal == \"display-object-size\":\n"
  "    print makefile.BOLD_BLUE () + \"Display Object Sizes\" + makefile.ENDC ()\n"
  "    runProcess (displayObjectSize + objectList)\n"
  "    print makefile.BOLD_GREEN () + \"Success\" + makefile.ENDC ()\n"
  "  elif goal == \"object-dump\":\n"
  "    print makefile.BOLD_BLUE () + \"Dump Object Code\" + makefile.ENDC ()\n"
  "    runProcess (dumpObjectCode + [productELF])\n"
  "    print makefile.BOLD_GREEN () + \"Success\" + makefile.ENDC ()\n"
  "\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_3_targetTemplates (
  "plm.py",
  "py",
  true, // Text file
  13071, // Text length
  gWrapperFileContent_3_targetTemplates
) ;

//--- File '/teensy-3-1-tp.plm-target'

const char * gWrapperFileContent_4_targetTemplates = "\n"
  "configuration\n"
  "  32 // Pointer bit count\n"
  "  :$int32 // Panic code type\n"
  "  :$uint32 // Panic line type\n"
  "  :$uint32 // Unsigned integer type\n"
  "  :1024 // System stack size\n"
  "  :32 // Stacked registers bytes count (Cortex M4 saves 8 regs in user stack on interrupt)\n"
  "  :12 // as_svc_handler saves 3 registers on system stack\n"
  "  :8 // as_section_handler saves 2 registers on system stack\n"
  "{\n"
  "  NMI : 2\n"
  "  MemManage : 4\n"
  "  BusFault : 5\n"
  "  UsageFault : 6\n"
  "  DebugMonitor : 12\n"
  "  PendSV : 14\n"
  "  systick : 15\n"
  "  DMAChannel0TranfertComplete : 16\n"
  "  DMAChannel1TranfertComplete : 17\n"
  "  DMAChannel2TranfertComplete : 18\n"
  "  DMAChannel3TranfertComplete : 19\n"
  "  DMAChannel4TranfertComplete : 20\n"
  "  DMAChannel5TranfertComplete : 21\n"
  "  DMAChannel6TranfertComplete : 22\n"
  "  DMAChannel7TranfertComplete : 23\n"
  "  DMAChannel8TranfertComplete : 24\n"
  "  DMAChannel9TranfertComplete : 25\n"
  "  DMAChannel10TranfertComplete : 26\n"
  "  DMAChannel11TranfertComplete : 27\n"
  "  DMAChannel12TranfertComplete : 28\n"
  "  DMAChannel13TranfertComplete : 29\n"
  "  DMAChannel14TranfertComplete : 30\n"
  "  DMAChannel15TranfertComplete : 31\n"
  "  DMAError : 32\n"
  "  flashMemoryCommandComplete : 34\n"
  "  flashMemoryReadCollision : 35\n"
  "  modeController : 36\n"
  "  LLWU : 37\n"
  "  WDOGEWM : 38\n"
  "  I2C0 : 40\n"
  "  I2C1 : 41\n"
  "  SPI0 : 42\n"
  "  SPI1 : 43\n"
  "  CAN0MessageBuffer : 45\n"
  "  CAN0BusOff : 46\n"
  "  CAN0Error : 47\n"
  "  CAN0TransmitWarning : 48\n"
  "  CAN0ReceiveWarning : 49\n"
  "  CAN0WakeUp : 50\n"
  "  I2S0Transmit : 51\n"
  "  I2S0Receive : 52\n"
  "  UART0LON : 60\n"
  "  UART0Status : 61\n"
  "  UART0Error : 62\n"
  "  UART1Status : 63\n"
  "  UART1Error : 64\n"
  "  UART2Status : 65\n"
  "  UART2Error : 66\n"
  "  ADC0 : 73\n"
  "  ADC1 : 74\n"
  "  CMP0 : 75\n"
  "  CMP1 : 76\n"
  "  CMP2 : 77\n"
  "  FMT0 : 78\n"
  "  FMT1 : 79\n"
  "  FMT2 : 80\n"
  "  CMT : 81\n"
  "  RTCAlarm : 82\n"
  "  RTCSecond : 83\n"
  "  PITChannel0 : 84\n"
  "  PITChannel1 : 85\n"
  "  PITChannel2 : 86\n"
  "  PITChannel3 : 87\n"
  "  PDB : 88\n"
  "  USBOTG : 89\n"
  "  USBChargerDetect : 90\n"
  "  DAC0 : 97\n"
  "  TSI : 99\n"
  "  MCG : 100\n"
  "  lowPowerTimer : 101\n"
  "  pinDetectPortA : 103\n"
  "  pinDetectPortB : 104\n"
  "  pinDetectPortC : 105\n"
  "  pinDetectPortD : 106\n"
  "  pinDetectPortE : 107\n"
  "  softwareInterrupt : 110\n"
  "}\n"
  "\n"
  "import \"files/registers-mk20dx256.plm\"\n"
  "import \"files/teensy-3-1-boot.plm\"\n"
  "import \"files/teensy-3-1-xtr.plm\"\n"
  "import \"files/teensy-3-1-leds.plm\"\n"
  "import \"files/teensy-3-1-lcd.plm\"\n"
  "import \"files/teensy-3-1-panic.plm\"\n"
  "import \"files/semaphore.plm\"\n" ;

const cRegularFileWrapper gWrapperFile_4_targetTemplates (
  "teensy-3-1-tp.plm-target",
  "plm-target",
  true, // Text file
  2234, // Text length
  gWrapperFileContent_4_targetTemplates
) ;

//--- File '/toolpath.py'

const char * gWrapperFileContent_5_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "import os\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   Tool dir                                                                                                           *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def toolDir ():\n"
  "  (SYSTEM_NAME, MODE_NAME, RELEASE, VERSION, MACHINE) = os.uname ()\n"
  "  if SYSTEM_NAME == \"Darwin\":\n"
  "    MACHINE = \"i386\"\n"
  "  return os.path.expanduser (\"~/plm-tools/plm-\" + SYSTEM_NAME + \"-\" + MACHINE + \"-llvm-3.8.1-binutils-2.26-openocd-0.8.0-libusb-1.0.20\")\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_5_targetTemplates (
  "toolpath.py",
  "py",
  true, // Text file
  939, // Text length
  gWrapperFileContent_5_targetTemplates
) ;

//--- File 'LPC-L2294/build-verbose.py'

const char * gWrapperFileContent_6_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "# https://docs.python.org/2/library/subprocess.html#module-subprocess\n"
  "\n"
  "import subprocess\n"
  "import sys\n"
  "import os\n"
  "import atexit\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "def cleanup():\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.kill ()\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "#--- Register a function for killing subprocess\n"
  "atexit.register (cleanup)\n"
  "#--- Get script absolute path\n"
  "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
  "os.chdir (scriptDir)\n"
  "#---\n"
  "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"all\", \"1\"])\n"
  "#--- Wait for subprocess termination\n"
  "if childProcess.poll () == None :\n"
  "  childProcess.wait ()\n"
  "if childProcess.returncode != 0 :\n"
  "  sys.exit (childProcess.returncode)\n"
  "\n"
  "#------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_6_targetTemplates (
  "build-verbose.py",
  "py",
  true, // Text file
  1002, // Text length
  gWrapperFileContent_6_targetTemplates
) ;

//--- File 'LPC-L2294/build.py'

const char * gWrapperFileContent_7_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "import sys, os\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "sys.path.append (os.path.dirname (os.path.abspath (sys.argv [0])) + \"/sources\")\n"
  "import plm\n"
  "import toolpath\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def archiveBaseURL ():\n"
  "  return \"http://crossgcc.rts-software.org/downloads/plm-tools/\"\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   LLVM optimizer invocation                                                                                          *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def llvmOptimizerCompiler ():\n"
  "  return [toolpath.toolDir () + \"/bin/opt\", \"-<<OPT_OPTIMIZATION_OPTION>>\", \"-disable-simplify-libcalls\", \"-S\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   LLC Compiler invocation                                                                                            *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def LLCcompiler ():\n"
  "  return [toolpath.toolDir () + \"/bin/llc\", \"-function-sections\", \"-data-sections\", \"-<<LLC_OPTIMIZATION_OPTION>>\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   LLVM Linker invocation                                                                                             *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def LLVMLinkercompiler ():\n"
  "  return [toolpath.toolDir () + \"/bin/llvm-link\", \"-S\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   CLANG Compiler invocation                                                                                          *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def CLANGcompiler ():\n"
  "  result = [toolpath.toolDir () + \"/bin/clang\"]\n"
  "  result.append (\"--target=armv4-none--eabi\")\n"
  "  result.append (\"-Oz\")\n"
  "  result.append (\"-fomit-frame-pointer\")\n"
  "  result.append (\"-fshort-enums\")\n"
  "  return result\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   AS assembler invocation                                                                                            *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def asAssembler ():\n"
  "  return [toolpath.toolDir () + \"/bin/arm-eabi-as\", \"-mcpu=arm7tdmi-s\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Display object size invocation                                                                                     *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def displayObjectSize ():\n"
  "  return [toolpath.toolDir () + \"/bin/arm-eabi-size\", \"-t\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Object Dump invocation                                                                                             *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def dumpObjectCode ():\n"
  "  return [toolpath.toolDir () + \"/bin/arm-eabi-objdump\", \"-Sdh\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Linker invocation                                                                                                  *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def linkerInvocation ():\n"
  "  result = [toolpath.toolDir () + \"/bin/arm-eabi-ld\"]\n"
  "  result.append (\"-nostartfiles\")\n"
  "  result.append (\"--fatal-warnings\")\n"
  "  result.append (\"--warn-common\")\n"
  "  result.append (\"--no-undefined\")\n"
  "  result.append (\"--cref\")\n"
  "  result.append (\"-static\")\n"
  "  result.append (\"--gc-sections\")\n"
  "  return result\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Linker scripts                                                                                                     *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def linkerScripts ():\n"
  "#  result = [\"external-ram\"] # Linker script is external-ram.ld\n"
  "  result = [\"linker\"] # Linker script is linker.ld\n"
  "  return result\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Linker libraries                                                                                                   *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def linkerLibraries ():\n"
  "  result = [\"libgcc-armv4.a\"]\n"
  "  return result\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   objcopy invocation                                                                                                 *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def objcopy ():\n"
  "  return [toolpath.toolDir () + \"/bin/arm-eabi-objcopy\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   C Source files                                                                                                     *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def CsourceList ():\n"
  "  return [\"src.c\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   LLVM Source files                                                                                                  *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def LLVMsourceList ():\n"
  "  return [\"src.ll\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Assembler Source files                                                                                             *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def assemblerSourceList ():\n"
  "  return [\"src.s\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Product directory                                                                                                  *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def productDir ():\n"
  "  return \"product\"\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#                         Object files directories                                                                     *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def objectDir ():\n"
  "  return \"objects\"\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Run executable                                                                                                      *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def runExecutableOnTarget ():\n"
  "  return [toolpath.toolDir () + \"/bin/teensy-loader-cli\", \"-w\", \"-v\", \"-mmcu=mk20dx256\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   ARM stack computations utility                                                                                     *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def arm_stack_computations ():\n"
  "  return [toolpath.toolDir () + \"/bin/arm-stack-computations\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   check stack utility                                                                                                *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def check_stack_utility ():\n"
  "  return [\"sources/check-stacks.py\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   MAIN                                                                                                               *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "currentFile = os.path.abspath (sys.argv [0])\n"
  "plm.runMakefile (toolpath.toolDir (), archiveBaseURL (), LLVMsourceList (), assemblerSourceList (), objectDir (), \\\n"
  "                 LLCcompiler (), llvmOptimizerCompiler (), \\\n"
  "                 asAssembler (), productDir (), \\\n"
  "                 linkerInvocation (), linkerScripts (), linkerLibraries (), \\\n"
  "                 objcopy (), dumpObjectCode (), displayObjectSize (), runExecutableOnTarget (), \\\n"
  "                 CLANGcompiler (), CsourceList (), LLVMLinkercompiler (), \\\n"
  "                 currentFile, arm_stack_computations (), check_stack_utility ())\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_7_targetTemplates (
  "build.py",
  "py",
  true, // Text file
  15454, // Text length
  gWrapperFileContent_7_targetTemplates
) ;

//--- File 'LPC-L2294/clean.py'

const char * gWrapperFileContent_8_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "# https://docs.python.org/2/library/subprocess.html#module-subprocess\n"
  "\n"
  "import subprocess\n"
  "import sys\n"
  "import os\n"
  "import atexit\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def cleanup():\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.kill ()\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "#--- Register a function for killing subprocess\n"
  "atexit.register (cleanup)\n"
  "#--- Get script absolute path\n"
  "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
  "#--- Directories to clean\n"
  "dir1 = scriptDir + \"/objects\"\n"
  "dir2 = scriptDir + \"/product\"\n"
  "dir3 = scriptDir + \"/as\"\n"
  "#---\n"
  "childProcess = subprocess.Popen ([\"rm\", \"-fr\", dir1, dir2, dir3], cwd=scriptDir)\n"
  "#--- Wait for subprocess termination\n"
  "if childProcess.poll () == None :\n"
  "  childProcess.wait ()\n"
  "if childProcess.returncode != 0 :\n"
  "  sys.exit (childProcess.returncode)\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_8_targetTemplates (
  "clean.py",
  "py",
  true, // Text file
  1264, // Text length
  gWrapperFileContent_8_targetTemplates
) ;

//--- File 'LPC-L2294/flash.ld'

const char * gWrapperFileContent_9_targetTemplates = "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "/*                                                                                                                    */\n"
  "/*                                   Memory                                                                           */\n"
  "/*                                                                                                                    */\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "MEMORY {\n"
  "  flash (rx) : ORIGIN = 0, LENGTH = 248k \n"
  "  internalRam (rwx) : ORIGIN = 0x40000000, LENGTH = 16k \n"
  "  externalRam (rwx) : ORIGIN = 0x81000000, LENGTH = 1M \n"
  "}\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "__internalRam_end = 0x40000000 + 16k ;\n"
  "__externalRam_end = 0x81000000 + 1M ;\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "/*                                                                                                                    */\n"
  "/*                                ISR Vectors                                                                         */\n"
  "/*                                                                                                                    */\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .vectors : {\n"
  "    __vectors_start = . ;\n"
  "    KEEP (*(.isr_vector)) ;\n"
  "    __vectors_end = . ;\n"
  "  } > flash\n"
  "}\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "/*                                                                                                                    */\n"
  "/*                                    Code                                                                            */\n"
  "/*                                                                                                                    */\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .text : {\n"
  "    FILL(0xff)\n"
  "    __code_start = . ;\n"
  "  /*--- Tableau des routines d'initialisation */\n"
  "    . = ALIGN (4) ;\n"
  "    __init_routine_array_start = . ;\n"
  "    KEEP (*(init_routine_array)) ;\n"
  "    . = ALIGN (4) ;\n"
  "    __init_routine_array_end = . ;\n"
  "  /*--- Initialisation des objets globaux C++ */\n"
  "    . = ALIGN (4) ;\n"
  "    __constructor_array_start = . ;\n"
  "    KEEP (*(.init_array)) ;\n"
  "    . = ALIGN (4) ;\n"
  "    __constructor_array_end = . ;\n"
  "  /*--- Real Interrupt Service Routine Array */\n"
  "    . = ALIGN (4) ;\n"
  "    __real_time_isr_array_start = . ;\n"
  "    KEEP (*(real_time_isr_array)) ;\n"
  "    . = ALIGN (4) ;\n"
  "    __real_time_isr_array_end = . ;\n"
  "  /*--- Code */\n"
  "    *(.text.*) ;\n"
  "    *(.text) ;\n"
  "    *(text) ;\n"
  "    *(.gnu.linkonce.t.*) ;\n"
  "  /*---- ROM data ----*/\n"
  "    . = ALIGN(4);\n"
  "    *(.rodata);\n"
  "    . = ALIGN(4);\n"
  "    *(.rodata*);\n"
  "    . = ALIGN(4);\n"
  "    *(.gnu.linkonce.r.*);\n"
  "    . = ALIGN(4);\n"
  "    *(.glue_7t);\n"
  "    . = ALIGN(4);\n"
  "    *(.glue_7);\n"
  "    . = ALIGN(4);\n"
  "    __code_end = . ;\n"
  "  } > flash\n"
  "\n"
  "  /DISCARD/ : {\n"
  "    *(rel.ARM.*);\n"
  "    *(.ARM.*);\n"
  "    *(.gnu.linkonce.armexidx.*);\n"
  "  }\n"
  "}\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "/*                                                                                                                    */\n"
  "/*                          Data (initialized data)                                                                   */\n"
  "/*                                                                                                                    */\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .data : {\n"
  "    FILL (0xFF)\n"
  "    . = ALIGN (4) ;\n"
  "    __data_start = . ;\n"
  "    * (.data.*init*) ;\n"
  "    * (.data*) ;\n"
  "    . = ALIGN (4) ;\n"
  "    __data_end = . ;\n"
  "  } > externalRam AT > flash\n"
  "}\n"
  "\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "__data_load_start = LOADADDR (.data) ;\n"
  "__data_load_end   = LOADADDR (.data) + SIZEOF (.data) ;\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "/*                                                                                                                    */\n"
  "/*                          BSS (zero initialized data)                                                               */\n"
  "/*                                                                                                                    */\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .bss : {\n"
  "    . = ALIGN(4);\n"
  "    __bss_start = . ;\n"
  "    * (.bss.*) ;\n"
  "    * (.bss) ;\n"
  "    * (COMMON) ;\n"
  "    . = ALIGN(4);\n"
  "    __bss_end = . ;\n"
  "  } > externalRam\n"
  "}\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "/*                                                                                                                    */\n"
  "/*                                Stacks                                                                              */\n"
  "/*                                                                                                                    */\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .stacks :{\n"
  "    . = ALIGN (4) ;\n"
  "    . += 1k ;\n"
  "    . = ALIGN (4) ;\n"
  "    __irq_stack_end = . ;\n"
  "    __svc_stack_end = . ;\n"
  "  } > internalRam\n"
  "}\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .stacks :{\n"
  "    . = ALIGN (4) ;\n"
  "    . += 1k ;\n"
  "    . = ALIGN (4) ;\n"
  "    __und_stack_end = . ;\n"
  "  } > internalRam\n"
  "}\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .stacks :{\n"
  "    . = ALIGN (4) ;\n"
  "    . += 512 ;\n"
  "    . = ALIGN (4) ;\n"
  "    __abt_stack_end = . ;\n"
  "  } > internalRam\n"
  "}\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .stacks :{\n"
  "    . = ALIGN (4) ;\n"
  "    . += 512 ;\n"
  "    . = ALIGN (4) ;\n"
  "    __fiq_stack_end = . ;\n"
  "  } > internalRam\n"
  "}\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "/*                                                                                                                    */\n"
  "/*                                    Heap                                                                            */\n"
  "/*                                                                                                                    */\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .heap : {\n"
  "    . = ALIGN (4) ;\n"
  "    __heap_start = . ;\n"
  "  } > externalRam\n"
  "}\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "__heap_end = __externalRam_end ;\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n" ;

const cRegularFileWrapper gWrapperFile_9_targetTemplates (
  "flash.ld",
  "ld",
  true, // Text file
  7649, // Text length
  gWrapperFileContent_9_targetTemplates
) ;

//--- File 'LPC-L2294/linker.ld'

const char * gWrapperFileContent_10_targetTemplates = "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "/*                                                                                                                    */\n"
  "/*                                   Memory                                                                           */\n"
  "/*                                                                                                                    */\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "MEMORY {\n"
  "  flash (rx) : ORIGIN = 0, LENGTH = 248k \n"
  "  internalRam (rwx) : ORIGIN = 0x40000000, LENGTH = 16k \n"
  "  externalRam (rwx) : ORIGIN = 0x81000000, LENGTH = 1M \n"
  "}\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "__internalRam_end = 0x40000000 + 16k ;\n"
  "__externalRam_end = 0x81000000 + 1M ;\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "/*                                                                                                                    */\n"
  "/*                                ISR Vectors                                                                         */\n"
  "/*                                                                                                                    */\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .vectors : {\n"
  "    __vectors_start = . ;\n"
  "    KEEP (*(.isr_vector)) ;\n"
  "    __vectors_end = . ;\n"
  "  } > internalRam\n"
  "}\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "/*                                                                                                                    */\n"
  "/*                                    Code                                                                            */\n"
  "/*                                                                                                                    */\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .text : {\n"
  "    FILL(0xff)\n"
  "    __code_start = . ;\n"
  "  /*--- Code */\n"
  "    *(.text.*) ;\n"
  "    *(.text) ;\n"
  "    *(text) ;\n"
  "    *(.gnu.linkonce.t.*) ;\n"
  "  /*---- ROM data ----*/\n"
  "    . = ALIGN(4);\n"
  "    *(.rodata);\n"
  "    . = ALIGN(4);\n"
  "    *(.rodata*);\n"
  "    . = ALIGN(4);\n"
  "    *(.gnu.linkonce.r.*);\n"
  "    . = ALIGN(4);\n"
  "    *(.glue_7t);\n"
  "    . = ALIGN(4);\n"
  "    *(.glue_7);\n"
  "    . = ALIGN(4);\n"
  "    __code_end = . ;\n"
  "  } > externalRam\n"
  "\n"
  "  /DISCARD/ : {\n"
  "    *(rel.ARM.*);\n"
  "    *(.ARM.*);\n"
  "    *(.gnu.linkonce.armexidx.*);\n"
  "  }\n"
  "}\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "/*                                                                                                                    */\n"
  "/*                          Data (initialized data)                                                                   */\n"
  "/*                                                                                                                    */\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .data : {\n"
  "    FILL (0xFF)\n"
  "    . = ALIGN (4) ;\n"
  "    __data_start = . ;\n"
  "    * (.data.*init*) ;\n"
  "    * (.data*) ;\n"
  "    . = ALIGN (4) ;\n"
  "    __data_end = . ;\n"
  "  } > externalRam AT > flash\n"
  "}\n"
  "\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "__data_load_start = LOADADDR (.data) ;\n"
  "__data_load_end   = LOADADDR (.data) + SIZEOF (.data) ;\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "/*                                                                                                                    */\n"
  "/*                          BSS (zero initialized data)                                                               */\n"
  "/*                                                                                                                    */\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .bss : {\n"
  "    . = ALIGN(4);\n"
  "    __bss_start = . ;\n"
  "    * (.bss.*) ;\n"
  "    * (.bss) ;\n"
  "    * (COMMON) ;\n"
  "    . = ALIGN(4);\n"
  "    __bss_end = . ;\n"
  "  } > externalRam\n"
  "}\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "/*                                                                                                                    */\n"
  "/*                                Stacks                                                                              */\n"
  "/*                                                                                                                    */\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .stacks :{\n"
  "    . = ALIGN (4) ;\n"
  "    . += !SYSTEMSTACKSIZE! ;\n"
  "    . = ALIGN (4) ;\n"
  "    __irq_stack_end = . ;\n"
  "    __svc_stack_end = . ;\n"
  "  } > externalRam\n"
  "}\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .stacks :{\n"
  "    . = ALIGN (4) ;\n"
  "    . += 1k ;\n"
  "    . = ALIGN (4) ;\n"
  "    __und_stack_end = . ;\n"
  "  } > externalRam\n"
  "}\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .stacks :{\n"
  "    . = ALIGN (4) ;\n"
  "    . += 512 ;\n"
  "    . = ALIGN (4) ;\n"
  "    __abt_stack_end = . ;\n"
  "  } > externalRam\n"
  "}\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .stacks :{\n"
  "    . = ALIGN (4) ;\n"
  "    . += 512 ;\n"
  "    . = ALIGN (4) ;\n"
  "    __fiq_stack_end = . ;\n"
  "  } > externalRam\n"
  "}\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "/*                                                                                                                    */\n"
  "/*                                    Heap                                                                            */\n"
  "/*                                                                                                                    */\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .heap : {\n"
  "    . = ALIGN (4) ;\n"
  "    __heap_start = . ;\n"
  "  } > externalRam\n"
  "}\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n"
  "\n"
  "__heap_end = __externalRam_end ;\n"
  "\n"
  "/*--------------------------------------------------------------------------------------------------------------------*/\n" ;

const cRegularFileWrapper gWrapperFile_10_targetTemplates (
  "linker.ld",
  "ld",
  true, // Text file
  7095, // Text length
  gWrapperFileContent_10_targetTemplates
) ;

//--- File 'LPC-L2294/objdump.py'

const char * gWrapperFileContent_11_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "# https://docs.python.org/2/library/subprocess.html#module-subprocess\n"
  "\n"
  "import subprocess\n"
  "import sys\n"
  "import os\n"
  "import atexit\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "def cleanup():\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.kill ()\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "#--- Register a function for killing subprocess\n"
  "atexit.register (cleanup)\n"
  "#--- Get script absolute path\n"
  "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
  "os.chdir (scriptDir)\n"
  "#---\n"
  "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"object-dump\"])\n"
  "#--- Wait for subprocess termination\n"
  "if childProcess.poll () == None :\n"
  "  childProcess.wait ()\n"
  "if childProcess.returncode != 0 :\n"
  "  sys.exit (childProcess.returncode)\n"
  "\n"
  "#------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_11_targetTemplates (
  "objdump.py",
  "py",
  true, // Text file
  1005, // Text length
  gWrapperFileContent_11_targetTemplates
) ;

//--- File 'LPC-L2294/objsize.py'

const char * gWrapperFileContent_12_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "# https://docs.python.org/2/library/subprocess.html#module-subprocess\n"
  "\n"
  "import subprocess\n"
  "import sys\n"
  "import os\n"
  "import atexit\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "def cleanup():\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.kill ()\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "#--- Register a function for killing subprocess\n"
  "atexit.register (cleanup)\n"
  "#--- Get script absolute path\n"
  "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
  "os.chdir (scriptDir)\n"
  "#---\n"
  "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"display-object-size\"])\n"
  "#--- Wait for subprocess termination\n"
  "if childProcess.poll () == None :\n"
  "  childProcess.wait ()\n"
  "if childProcess.returncode != 0 :\n"
  "  sys.exit (childProcess.returncode)\n"
  "\n"
  "#------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_12_targetTemplates (
  "objsize.py",
  "py",
  true, // Text file
  1013, // Text length
  gWrapperFileContent_12_targetTemplates
) ;

//--- File 'LPC-L2294/run.py'

const char * gWrapperFileContent_13_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "import subprocess, sys, time, os, socket\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   Colors                                                                                                           *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def RED () :\n"
  "  return '\\033[91m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def GREEN () :\n"
  "  return '\\033[92m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def BLUE () :\n"
  "  return '\\033[94m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def ENDC () :\n"
  "  return '\\033[0m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "#--- Get script absolute path\n"
  "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
  "os.chdir (scriptDir)\n"
  "sys.path.append (scriptDir + \"/sources\")\n"
  "import toolpath\n"
  "#--- Build project\n"
  "returncode = subprocess.call ([\"python\", \"build.py\"])\n"
  "if returncode != 0 :\n"
  "  sys.exit (returncode)\n"
  "#---\n"
  "openOCD = [\n"
  "  toolpath.toolDir () + \"/bin/openocd\",\n"
  "  \"--search\",\n"
  "  toolpath.toolDir (),\n"
  "  \"-f\",\n"
  "  \"openocd-interfaces/olimex-arm-usb-ocd.cfg\",\n"
  "  \"-f\",\n"
  "  \"openocd-boards/olimex-lpc-l2294-1Mo.cfg\",\n"
  "]\n"
  "str = \"+\"\n"
  "for s in openOCD :\n"
  "  str += \" \" + s\n"
  "print BLUE () + str + ENDC ()\n"
  "openOCDProcess = subprocess.Popen (openOCD, cwd=scriptDir)\n"
  "#--- Wait for openOCD is listening on port 4444\n"
  "time.sleep (1)\n"
  "#print (\"openOCD pid: \", openOCDProcess.pid)\n"
  "#--- OpenOCD Script\n"
  "openOCDScript  = \"reset halt\\n\"\n"
  "openOCDScript += \"mww 0xE01FC040 0\\n\"\n"
  "openOCDScript += \"mdw 0xE01FC040\\n\"\n"
  "openOCDScript += \"mww 0xE002C014 0x0F804924\\n\"\n"
  "openOCDScript += \"mdw 0xE002C014\\n\"\n"
  "openOCDScript += \"mww 0xFFE00004 0x20000400\\n\"\n"
  "openOCDScript += \"mdw 0xFFE00004\\n\"\n"
  "openOCDScript += \"load_image product/product-linker.elf\\n\"\n"
  "openOCDScript += \"mww 0xE01FC040 2\\n\"\n"
  "openOCDScript += \"mdw 0xE01FC040\\n\"\n"
  "openOCDScript += \"soft_reset_halt\\n\"\n"
  "openOCDScript += \"resume\\n\"\n"
  "openOCDScript += \"shutdown\\n\"\n"
  "#--- \n"
  "client = socket.socket (socket.AF_INET, socket.SOCK_STREAM)\n"
  "ok = False\n"
  "if openOCDProcess.poll () == None :\n"
  "  try:\n"
  "    client.connect (('localhost', 4444))\n"
  "    try:\n"
  "      client.send (openOCDScript)\n"
  "      ok = True\n"
  "    except:\n"
  "      print (\"Cannot send data\")\n"
  "  except:\n"
  "    print (\"Connection refused\")\n"
  "#--- Wait for openOCD to exit\n"
  "if openOCDProcess.poll () == None :\n"
  "  openOCDProcess.wait ()\n"
  "if openOCDProcess.returncode == 0 :\n"
  "  print GREEN () + \"Success\" + ENDC ()\n"
  "else:\n"
  "  print RED () + \"Error\" + ENDC ()\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_13_targetTemplates (
  "run.py",
  "py",
  true, // Text file
  3092, // Text length
  gWrapperFileContent_13_targetTemplates
) ;

//--- File 'LPC-L2294/section-dispatcher-entry.s'

const char * gWrapperFileContent_14_targetTemplates = "  .word  !ENTRY! @ !IDX!\n" ;

const cRegularFileWrapper gWrapperFile_14_targetTemplates (
  "section-dispatcher-entry.s",
  "s",
  true, // Text file
  25, // Text length
  gWrapperFileContent_14_targetTemplates
) ;

//--- File 'LPC-L2294/section-dispatcher-header.s'

const char * gWrapperFileContent_15_targetTemplates = "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@                 S E C T I O N   T A B L E                                                                            *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "__und_dispatcher_table:\n" ;

const cRegularFileWrapper gWrapperFile_15_targetTemplates (
  "section-dispatcher-header.s",
  "s",
  true, // Text file
  630, // Text length
  gWrapperFileContent_15_targetTemplates
) ;

//--- File 'LPC-L2294/section-entry.s'

const char * gWrapperFileContent_16_targetTemplates = "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@  Section !ENTRY!\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "\t.section\t\".text.!ENTRY!\",\"ax\",%progbits\n"
  "\t.globl\t!ENTRY!\n"
  "\t.align\t1\n"
  "\t.type\t!ENTRY!,%function\n"
  "\t.code\t32\n"
  "\n"
  "!ENTRY!:\n"
  "\t.fnstart\n"
  "  .word  UNDEFINED_INSTRUCTION + (!IDX! << 8)\n"
  "  bx  lr\n"
  "\n"
  ".Lfunc_end_!ENTRY!:\n"
  "  .size\t!ENTRY!, .Lfunc_end_!ENTRY! - !ENTRY!\n"
  "  .cantunwind\n"
  "\t.fnend\n"
  "\n"
  "  .global !ENTRY!\n"
  "  .type !ENTRY!, %function\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_16_targetTemplates (
  "section-entry.s",
  "s",
  true, // Text file
  575, // Text length
  gWrapperFileContent_16_targetTemplates
) ;

//--- File 'LPC-L2294/service-dispatcher-entry.s'

const char * gWrapperFileContent_17_targetTemplates = "  .word  !ENTRY! @ !IDX!\n" ;

const cRegularFileWrapper gWrapperFile_17_targetTemplates (
  "service-dispatcher-entry.s",
  "s",
  true, // Text file
  25, // Text length
  gWrapperFileContent_17_targetTemplates
) ;

//--- File 'LPC-L2294/service-dispatcher-header.s'

const char * gWrapperFileContent_18_targetTemplates = "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@                 S V C    D I S P A T C H E R    T A B L E                                                            *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "__swi_dispatcher_table:\n" ;

const cRegularFileWrapper gWrapperFile_18_targetTemplates (
  "service-dispatcher-header.s",
  "s",
  true, // Text file
  630, // Text length
  gWrapperFileContent_18_targetTemplates
) ;

//--- File 'LPC-L2294/service-entry.s'

const char * gWrapperFileContent_19_targetTemplates = "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@  Service !ENTRY!\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "\t.section\t\".text.!ENTRY!\",\"ax\",%progbits\n"
  "\t.globl\t!ENTRY!\n"
  "\t.align\t1\n"
  "\t.type\t!ENTRY!,%function\n"
  "\t.code\t32\n"
  "\n"
  "!ENTRY!:\n"
  "\t.fnstart\n"
  "  swi #!IDX!\n"
  "  bx  lr\n"
  "\n"
  ".Lfunc_end_!ENTRY!:\n"
  "  .size\t!ENTRY!, .Lfunc_end_!ENTRY! - !ENTRY!\n"
  "  .cantunwind\n"
  "\t.fnend\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_19_targetTemplates (
  "service-entry.s",
  "s",
  true, // Text file
  496, // Text length
  gWrapperFileContent_19_targetTemplates
) ;

//--- File 'LPC-L2294/target-panic.ll'

const char * gWrapperFileContent_20_targetTemplates = ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "define internal void @raise_panic (!PANICLINE! %inSourceLine, !PANICCODE! %inCode, i8* %inSourceFile) nounwind noreturn naked {\n"
  ";--- Mask interrupt: write 1 into FAULTMASK register\n"
  ";  call void asm sideeffect \"msr FAULTMASK, $0\", \"r\"(i32 1) nounwind\n"
  ";--- Goto user code\n"
  "  call void @raise_panic_internal (!PANICLINE! %inSourceLine, !PANICCODE! %inCode, i8* %inSourceFile) noreturn\n"
  "  unreachable\n"
  "}\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_20_targetTemplates (
  "target-panic.ll",
  "ll",
  true, // Text file
  520, // Text length
  gWrapperFileContent_20_targetTemplates
) ;

//--- File 'LPC-L2294/target.c'

const char * gWrapperFileContent_21_targetTemplates = "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "#define VICIntEnClr    (*((volatile unsigned *) 0xFFFFF014))\n"
  "#define VICIntEnable   (*((volatile unsigned *) 0xFFFFF010))\n"
  "#define VICVect(INDEX) (*((volatile unsigned *) (0xFFFFF100 + ((INDEX) << 2))))\n"
  "#define VICVectCntl(INDEX) (*((volatile unsigned *) (0xFFFFF200 + ((INDEX) << 2))))\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static unsigned gSlotID ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static void installInterruptServiceRoutine (const unsigned irq_routine, const unsigned inSourceID) {\n"
  "//---\n"
  "  VICVect (gSlotID) = irq_routine ;\n"
  "  VICVectCntl (gSlotID) = 0x20 | inSourceID ;\n"
  "//---\n"
  "  VICIntEnClr   = 1 << inSourceID ;\n"
  "  VICIntEnable |= 1 << inSourceID ;\n"
  "//---\n"
  "  gSlotID ++ ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "extern unsigned __plm_interrupt_vectors [30] ;\n"
  "\n"
  "void installInterrupts (void) ;\n"
  "\n"
  "void installInterrupts (void) {\n"
  "  for (unsigned i=0 ; i<30 ; i++) {\n"
  "    if (__plm_interrupt_vectors [i] != 0) {\n"
  "      installInterruptServiceRoutine (__plm_interrupt_vectors [i], i) ;\n"
  "    }\n"
  "  }\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "#define TASK_COUNT (!TASKCOUNT!)\n"
  "#define GUARD_COUNT (!GUARDCOUNT!)\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "typedef unsigned TaskList ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "typedef struct { unsigned mGuardValue ; } GuardList ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "typedef unsigned char bool ;\n"
  "\n"
  "#define true  ((bool) 1)\n"
  "#define false ((bool) 0)\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "// GUARD_EVALUATING_OR_OUTSIDE should be the first constant\n"
  "typedef enum {GUARD_EVALUATING_OR_OUTSIDE, GUARD_DID_CHANGE, GUARD_WAITING_FOR_CHANGE} GuardState ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//                                                                                                                     *\n"
  "//   T A S K    R O U T I N E    T Y P E                                                                               *\n"
  "//                                                                                                                     *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "typedef void (* RoutineTaskType) (void) ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static unsigned countTrainingZeros (const unsigned inValue) {\n"
  "  unsigned result = 0 ;\n"
  "  unsigned w = inValue ;\n"
  "  while ((w & 1) == 0) {\n"
  "    result ++ ;\n"
  "    w >>= 1 ;\n"
  "  }\n"
  "  return result ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//                                                                                                                     *\n"
  "//   T A S K    C O N T E X T                                                                                          *\n"
  "//                                                                                                                     *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//                                           *---------------------* +68\n"
  "//                                           | PC_USR              | +64 [16]\n"
  "//                                           | R12                 | +60 [15]\n"
  "//                                           | R11                 | +56 [14]\n"
  "//                                           | R10                 | +52 [13]\n"
  "//                                           | R9                  | +48 [12]\n"
  "//                                           | R8                  | +44 [11]\n"
  "//                                           | R7                  | +40 [10]\n"
  "//                                           | R6                  | +36 [ 9]\n"
  "//                                           | R5                  | +32 [ 8]\n"
  "//                                           | R4                  | +28 [ 7]\n"
  "//                                           | R3                  | +24 [ 6]\n"
  "//                                           | R2                  | +20 [ 5]\n"
  "//                                           | R1                  | +16 [ 4]\n"
  "//                                           | R0                  | +12 [ 3]\n"
  "//                                           | LR_USR              | + 8 [ 2]\n"
  "// *--------------------------------*        | SP_USR              | + 4 [ 1]\n"
  "// |                                +------> | CPSR                | + 0 [ 0]\n"
  "// *--------------------------------*        *---------------------*\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "typedef struct {\n"
  "  unsigned mCPSR ;\n"
  "  unsigned mSP_USR ;\n"
  "  unsigned mLR_USR ;\n"
  "  unsigned mR0 ;\n"
  "  unsigned mR1 ;\n"
  "  unsigned mR2 ;\n"
  "  unsigned mR3 ;\n"
  "  unsigned mR4 ;\n"
  "  unsigned mR5 ;\n"
  "  unsigned mR6 ;\n"
  "  unsigned mR7 ;\n"
  "  unsigned mR8 ;\n"
  "  unsigned mR9 ;\n"
  "  unsigned mR10 ;\n"
  "  unsigned mR11 ;\n"
  "  unsigned mR12 ;\n"
  "  unsigned mPC_USR ;\n"
  "} TaskContext ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static void kernel_set_task_context (TaskContext * inTaskContext,\n"
  "                                     const unsigned inTopOfStack,\n"
  "                                     RoutineTaskType inTaskRoutine) {\n"
  "//--- Initialize PC\n"
  "  inTaskContext->mPC_USR = (unsigned) inTaskRoutine ;\n"
  "//--- Initialize SP\n"
  "  inTaskContext->mSP_USR = inTopOfStack ;\n"
  "//--- Initialize CPSR\n"
  "  inTaskContext->mCPSR = 0x10 ; // ARM USER MODE, IRQ and FIRQ interrupts enabled\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static void kernel_set_return_code (TaskContext * inTaskContext, const unsigned inReturnCode) {\n"
  "  inTaskContext->mR0 = inReturnCode ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//   T A S K    C O N T R O L    B L O C K                                                                             *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "typedef struct {\n"
  "//--- Context buffer (SHOULD BE THE FIRST FIELD)\n"
  "  TaskContext mTaskContext ;\n"
  "//--- This field is used for deadline waiting\n"
  "  unsigned mTaskDeadline ;\n"
  "//---\n"
  "  TaskList * mWaitingList ;\n"
  "//--- Stack buffer parameters\n"
  "//  unsigned * mStackBufferAddress ;\n"
  "//  unsigned mStackBufferSize ; // In bytes\n"
  "//--- Task index\n"
  "  unsigned char mTaskIndex ;\n"
  "//--- Guards\n"
  "  GuardState mGuardState ;\n"
  "  bool mHaveDeadlineGuard ;\n"
  "  unsigned mGuardCount ;\n"
  "  GuardList * mGuardListArray [GUARD_COUNT] ;\n"
  "} TaskControlBlock ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static TaskControlBlock gTaskDescriptorArray [TASK_COUNT] ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//   S C H E D U L E R                                                                                                 *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "TaskControlBlock * gRunningTaskControlBlock ; // Shared with assembly code (arm_context.s)\n"
  "static TaskList gReadyTaskList ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static void kernel_makeTaskReady (const unsigned inTaskIndex) {\n"
  "  gReadyTaskList |= 1 << inTaskIndex ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static void kernel_makeNoTaskRunning (void) {\n"
  "  gRunningTaskControlBlock = (TaskControlBlock *) 0 ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void kernel_selectTaskToRun (void) ;\n"
  "\n"
  "void kernel_selectTaskToRun (void) {\n"
  "  if (gRunningTaskControlBlock != ((TaskControlBlock *) 0)) {\n"
  "    gReadyTaskList |= 1 << gRunningTaskControlBlock->mTaskIndex ;\n"
  "    gRunningTaskControlBlock = (TaskControlBlock *) 0 ;\n"
  "  }\n"
  "  if (gReadyTaskList != 0) {\n"
  "    const unsigned runningTaskIndex = countTrainingZeros (gReadyTaskList) ;\n"
  "    gReadyTaskList &= ~ (1 << runningTaskIndex) ;\n"
  "    gRunningTaskControlBlock = & gTaskDescriptorArray [runningTaskIndex] ;\n"
  "  }\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//   kernel_create_task                                                                                                *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void kernel_create_task (const unsigned inTaskIndex,\n"
  "                         unsigned * inStackBufferAddress,\n"
  "                         unsigned inStackBufferSize,\n"
  "                         RoutineTaskType inTaskRoutine) ;\n"
  "\n"
  "void kernel_create_task (const unsigned inTaskIndex,\n"
  "                         unsigned * inStackBufferAddress,\n"
  "                         unsigned inStackBufferSize,\n"
  "                         RoutineTaskType inTaskRoutine) {\n"
  "  TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [inTaskIndex] ;\n"
  "  taskControlBlockPtr->mTaskIndex = (unsigned char) inTaskIndex ;\n"
  "  taskControlBlockPtr->mWaitingList = (TaskList *) 0 ; // statically initialized to 0\n"
  "  taskControlBlockPtr->mGuardCount = 0 ; // statically initialized to 0\n"
  "  taskControlBlockPtr->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ; // statically initialized to 0\n"
  "//--- Store stack parameters\n"
  "//  taskControlBlockPtr->mStackBufferAddress = inStackBufferAddress ;\n"
  "//  taskControlBlockPtr->mStackBufferSize = inStackBufferSize ;\n"
  "//--- Stack Pointer initial value\n"
  "  const unsigned topOfStack = ((unsigned) inStackBufferAddress) + inStackBufferSize ;\n"
  "//--- Initialize Context\n"
  "  kernel_set_task_context (& taskControlBlockPtr->mTaskContext, topOfStack, inTaskRoutine) ;\n"
  "//--- Make task ready\n"
  "  kernel_makeTaskReady (inTaskIndex) ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//   kernel_self_terminate                                                                                             *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void kernel_self_terminate (void) asm (\"!SERVICEIMPLEMENTATION!self.terminate\") ;\n"
  "\n"
  "void kernel_self_terminate (void) {\n"
  "  kernel_makeNoTaskRunning () ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//   L I S T    M A N A G E M E N T                                                                                    *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static TaskList gDeadlineWaitingTaskList ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//  B L O C K I N G    R U N N I N G    T A S K                                                                        *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void block_in_list (TaskList * ioWaitingList) asm (\"!FUNC!blockInList\") ;\n"
  "\n"
  "void block_in_list (TaskList * ioWaitingList) {\n"
  "  const unsigned currentTaskIndex = gRunningTaskControlBlock->mTaskIndex ;\n"
  "//--- Insert in tool list\n"
  "  *ioWaitingList |= 1 << currentTaskIndex ;\n"
  "  gRunningTaskControlBlock->mWaitingList = ioWaitingList ;\n"
  "//--- Block task\n"
  "  kernel_makeNoTaskRunning () ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void blockOnDeadline (const unsigned inDeadline) asm (\"!FUNC!blockOnDeadline\") ;\n"
  "\n"
  "void blockOnDeadline (const unsigned inDeadline) {\n"
  "  const unsigned currentTaskIndex = gRunningTaskControlBlock->mTaskIndex ;\n"
  "//--- Insert in deadline list\n"
  "  gDeadlineWaitingTaskList |= 1 << currentTaskIndex ;\n"
  "  gRunningTaskControlBlock->mTaskDeadline = inDeadline ;\n"
  "  kernel_makeNoTaskRunning () ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void blockInListAndOnDeadline (TaskList * ioWaitingList, const unsigned inDeadline) asm (\"!FUNC!blockInListAndOnDeadline\") ;\n"
  "\n"
  "void blockInListAndOnDeadline (TaskList * ioWaitingList, const unsigned inDeadline) {\n"
  "  const unsigned currentTaskIndex = gRunningTaskControlBlock->mTaskIndex ;\n"
  "//--- Insert in tool list\n"
  "  *ioWaitingList |= 1 << currentTaskIndex ;\n"
  "  gRunningTaskControlBlock->mWaitingList = ioWaitingList ;\n"
  "//--- Insert in deadline list\n"
  "  gDeadlineWaitingTaskList |= 1 << currentTaskIndex ;\n"
  "  gRunningTaskControlBlock->mTaskDeadline = inDeadline ;\n"
  "//--- Block task\n"
  "  kernel_makeNoTaskRunning () ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//  M A K E    T A S K    R E A D Y                                                                                    *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void makeTaskReady (TaskList * ioWaitingList, bool * outFound) asm (\"!FUNC!makeTaskReady\") ;\n"
  "\n"
  "void makeTaskReady (TaskList * ioWaitingList, bool * outFound) {\n"
  "  *outFound = (* ioWaitingList) != 0 ;\n"
  "  if (*outFound) {\n"
  "  //--- Get index of waiting task\n"
  "    const unsigned taskIndex = countTrainingZeros (* ioWaitingList) ;\n"
  "    TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [taskIndex] ;\n"
  "  //--- Remove task from deadline list\n"
  "    gDeadlineWaitingTaskList &= ~ (1 << taskIndex) ;\n"
  "  //--- Remove task from waiting list\n"
  "    *(ioWaitingList) &= ~ (1 << taskIndex) ;\n"
  "  //--- Clear task waiting list pointer\n"
  "    taskControlBlockPtr->mWaitingList = (TaskList *) 0 ;\n"
  "  //--- Set return code and make task ready\n"
  "    kernel_set_return_code (& taskControlBlockPtr->mTaskContext, 1) ;\n"
  "    kernel_makeTaskReady (taskIndex) ;\n"
  "  }\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void makeTasksReadyFromCurrentDate (const unsigned inCurrentDate) asm (\"!FUNC!makeTasksReadyFromCurrentDate\") ;\n"
  "\n"
  "void makeTasksReadyFromCurrentDate (const unsigned inCurrentDate) {\n"
  "  unsigned w = gDeadlineWaitingTaskList ;\n"
  "  while (w > 0) {\n"
  "    const unsigned taskIndex = countTrainingZeros (w) ;\n"
  "    w &= ~ (1 << taskIndex) ;\n"
  "    TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [taskIndex] ;\n"
  "    if (inCurrentDate >= taskControlBlockPtr->mTaskDeadline) {\n"
  "    //--- Remove task from deadline list\n"
  "      gDeadlineWaitingTaskList &= ~ (1 << taskIndex) ;\n"
  "    //--- Remove task for waiting list \?\n"
  "      if (taskControlBlockPtr->mWaitingList != (TaskList *) 0) {\n"
  "        *(taskControlBlockPtr->mWaitingList) &= ~ (1 << taskIndex) ;\n"
  "        taskControlBlockPtr->mWaitingList = (TaskList *) 0 ;\n"
  "      }\n"
  "    //--- Set return code and make task ready\n"
  "      kernel_set_return_code (& taskControlBlockPtr->mTaskContext, 0) ;\n"
  "      kernel_makeTaskReady (taskIndex) ;\n"
  "    }\n"
  "  }\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//  G U A R D S                                                                                                        *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static TaskList gDeadlineWaitingInGuardTaskList ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static void removeTaskFromGuards (TaskControlBlock * taskControlBlockPtr) {\n"
  "  const unsigned mask = ~ (1 << taskControlBlockPtr->mTaskIndex) ;\n"
  "  const unsigned guardCount = taskControlBlockPtr->mGuardCount ;\n"
  "  for (unsigned i=0 ; i<guardCount ; i++) {\n"
  "    taskControlBlockPtr->mGuardListArray [i]->mGuardValue &= mask ;\n"
  "  }\n"
  "  taskControlBlockPtr->mGuardCount = 0 ;\n"
  "  gDeadlineWaitingInGuardTaskList &= mask ;\n"
  "  taskControlBlockPtr->mHaveDeadlineGuard = false ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void noteGuardHasBeenAccepted (void) asm (\"noteGuardHasBeenAccepted\") ;\n"
  "\n"
  "void noteGuardHasBeenAccepted (void) {\n"
  "  gRunningTaskControlBlock->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ;\n"
  "  removeTaskFromGuards (gRunningTaskControlBlock) ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void kernel_handleGuardedCommand (GuardList * ioGuardList) asm (\"!FUNC!handleGuardedCommand\") ;\n"
  "\n"
  "void kernel_handleGuardedCommand (GuardList * ioGuardList) {\n"
  "  if (gRunningTaskControlBlock->mGuardState == GUARD_EVALUATING_OR_OUTSIDE) {\n"
  "    const unsigned runningTaskIndex = gRunningTaskControlBlock->mTaskIndex ;\n"
  "    ioGuardList->mGuardValue |= 1 << runningTaskIndex ;\n"
  "    const unsigned guardCount = gRunningTaskControlBlock->mGuardCount ;\n"
  "    gRunningTaskControlBlock->mGuardListArray [guardCount] = ioGuardList ;\n"
  "    gRunningTaskControlBlock->mGuardCount = guardCount + 1 ;\n"
  "  }\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void handleGuardedWaitUntil (const unsigned inDeadline) asm (\"!FUNC!handleGuardedWaitUntil\") ;\n"
  "\n"
  "void handleGuardedWaitUntil (const unsigned inDeadline) {\n"
  "  if (gRunningTaskControlBlock->mGuardState == GUARD_EVALUATING_OR_OUTSIDE) {\n"
  "    gRunningTaskControlBlock->mHaveDeadlineGuard = true ;\n"
  "    const unsigned runningTaskIndex = gRunningTaskControlBlock->mTaskIndex ;\n"
  "    const unsigned mask = 1 << runningTaskIndex ;\n"
  "    if (((gDeadlineWaitingInGuardTaskList & mask) == 0) || (gRunningTaskControlBlock->mTaskDeadline > inDeadline)) {\n"
  "      gRunningTaskControlBlock->mTaskDeadline = inDeadline ;\n"
  "    }\n"
  "    gDeadlineWaitingInGuardTaskList |= mask ;\n"
  "  }\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "bool waitForGuardChange (void) asm (\"!SERVICECALL!waitForGuardChange\") ;\n"
  "\n"
  "bool kernel_waitForGuardChange (void) asm (\"!SERVICEIMPLEMENTATION!waitForGuardChange\") ;\n"
  "\n"
  "bool kernel_waitForGuardChange (void) {\n"
  "  bool result = gRunningTaskControlBlock->mGuardState == GUARD_DID_CHANGE ;\n"
  "  if (result) { // GUARD_DID_CHANGE\n"
  "    gRunningTaskControlBlock->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ;\n"
  "  }else{ // GUARD_EVALUATING_OR_OUTSIDE\n"
  "    result = gRunningTaskControlBlock->mHaveDeadlineGuard || (gRunningTaskControlBlock->mGuardCount > 0) ;\n"
  "    if (result) {\n"
  "      gRunningTaskControlBlock->mGuardState = GUARD_WAITING_FOR_CHANGE ;\n"
  "      kernel_makeNoTaskRunning () ;\n"
  "    }\n"
  "  }\n"
  "  return result ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void kernel_guardDidChange (GuardList * ioGuardList) asm (\"!FUNC!guardDidChange\") ;\n"
  "\n"
  "void kernel_guardDidChange (GuardList * ioGuardList) {\n"
  "  while (ioGuardList->mGuardValue > 0) {\n"
  "    const unsigned taskIndex = countTrainingZeros (ioGuardList->mGuardValue) ;\n"
  "    ioGuardList->mGuardValue &= ~ (1 << taskIndex) ;\n"
  "    TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [taskIndex] ;\n"
  "    removeTaskFromGuards (taskControlBlockPtr) ;    \n"
  "    if (taskControlBlockPtr->mGuardState == GUARD_WAITING_FOR_CHANGE) {\n"
  "      kernel_set_return_code (& taskControlBlockPtr->mTaskContext, 1) ;\n"
  "      kernel_makeTaskReady (taskIndex) ;\n"
  "      taskControlBlockPtr->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ;\n"
  "    }else if (taskControlBlockPtr->mGuardState == GUARD_EVALUATING_OR_OUTSIDE) {\n"
  "      taskControlBlockPtr->mGuardState = GUARD_DID_CHANGE ;\n"
  "    }else{ // GUARD_DID_CHANGE\n"
  "      // Nothing to do\n"
  "    }\n"
  "  }\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void tickHandlerForGuardedWaitUntil (const unsigned inUptime) asm (\"!FUNC!tickHandlerForGuardedWaitUntil\") ;\n"
  "\n"
  "void tickHandlerForGuardedWaitUntil (const unsigned inUptime) {\n"
  "  unsigned w = gDeadlineWaitingInGuardTaskList ;\n"
  "  while (w > 0) {\n"
  "    const unsigned taskIndex = countTrainingZeros (w) ;\n"
  "    w &= ~ (1 << taskIndex) ;\n"
  "    TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [taskIndex] ;\n"
  "    if (inUptime >= taskControlBlockPtr->mTaskDeadline) {\n"
  "      removeTaskFromGuards (taskControlBlockPtr) ;\n"
  "      if (taskControlBlockPtr->mGuardState == GUARD_WAITING_FOR_CHANGE) {\n"
  "        taskControlBlockPtr->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ;\n"
  "        kernel_set_return_code (& taskControlBlockPtr->mTaskContext, 1) ;\n"
  "        kernel_makeTaskReady (taskIndex) ;\n"
  "      }else if (taskControlBlockPtr->mGuardState == GUARD_EVALUATING_OR_OUTSIDE) {\n"
  "        taskControlBlockPtr->mGuardState = GUARD_DID_CHANGE ;\n"
  "      }else{ // GUARD_DID_CHANGE\n"
  "        // Nothing to do\n"
  "      }\n"
  "    }\n"
  "  }\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_21_targetTemplates (
  "target.c",
  "c",
  true, // Text file
  22165, // Text length
  gWrapperFileContent_21_targetTemplates
) ;

//--- File 'LPC-L2294/target.ll'

const char * gWrapperFileContent_22_targetTemplates = "target datalayout = \"e-m:e-p:32:32-i64:64-v128:64:128-a:0:32-n32-S64\"\n"
  "target triple = \"armv4-none--eabi\"\n"
  "\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  ";   Clear BSS                                                                                                          *\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  ";void clearBSS (void) {\n"
  ";  extern unsigned __bss_start ;\n"
  ";  extern unsigned __bss_end ;\n"
  ";  unsigned * p = & __bss_start ;\n"
  ";  while (p != & __bss_end) {\n"
  ";    * p = 0 ;\n"
  ";    p ++ ;\n"
  ";  }\n"
  ";}\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "@__bss_start = external global [0 x i32]\n"
  "@__bss_end = external global [0 x i32]\n"
  "\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "define internal void @clearBSS () nounwind minsize optsize {\n"
  "entry:\n"
  "  %startPtr = getelementptr  [0 x i32], [0 x i32]* @__bss_start, i32 0, i32 0\n"
  "  %endPtr = getelementptr  [0 x i32], [0 x i32]* @__bss_end, i32 0, i32 0\n"
  "  br label %bssLoopTest\n"
  " \n"
  "bssLoopTest:\n"
  "  %p = phi i32* [%startPtr, %entry], [%p.next, %bssLoop]\n"
  "  %completed = icmp eq i32* %p, %endPtr\n"
  "  br i1 %completed, label %clearCompleted, label %bssLoop\n"
  " \n"
  "bssLoop:\n"
  "  store i32 0, i32* %p, align 4\n"
  "  %p.next = getelementptr inbounds i32, i32* %p, i32 1\n"
  "  br label %bssLoopTest\n"
  " \n"
  "clearCompleted:\n"
  "  ret void\n"
  "}\n"
  "\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  ";   Copy .data section                                                                                                 *\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  ";void copyData (void) {\n"
  ";  extern unsigned __data_start ;\n"
  ";  extern unsigned __data_end ;\n"
  ";  extern unsigned __data_load_start ;\n"
  ";  unsigned * pSrc = & __data_load_start ;\n"
  ";  unsigned * pDest = & __data_start ;\n"
  ";  while (pDest != & __data_end) {\n"
  ";    * pDest = * pSrc ;\n"
  ";    pDest ++ ;\n"
  ";    pSrc ++ ;\n"
  ";  }\n"
  ";}\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "@__data_start = external global [0 x i32]\n"
  "@__data_end = external global [0 x i32]\n"
  "@__data_load_start = external global [0 x i32]\n"
  "\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "define internal void @copyData () nounwind minsize optsize {\n"
  "entry:\n"
  "  %data_start = getelementptr  [0 x i32], [0 x i32]* @__data_start, i32 0, i32 0\n"
  "  %data_end = getelementptr  [0 x i32], [0 x i32]* @__data_end, i32 0, i32 0\n"
  "  %data_load_start = getelementptr  [0 x i32], [0 x i32]* @__data_load_start, i32 0, i32 0\n"
  "  br label %copyLoop.test\n"
  " \n"
  "copyLoop.test:\n"
  "  %pDest = phi i32* [%data_start, %entry], [%pDestInct, %copyLoop]\n"
  "  %pSource = phi i32* [%data_load_start, %entry], [%pSourceInc, %copyLoop]\n"
  "  %equal = icmp eq i32* %pDest, %data_end\n"
  "  br i1 %equal, label %copyCompleted, label %copyLoop\n"
  " \n"
  "copyLoop:\n"
  "  %value = load i32, i32* %pSource\n"
  "  store i32 %value, i32* %pDest, align 4\n"
  "  %pDestInct = getelementptr inbounds i32, i32* %pDest, i32 1\n"
  "  %pSourceInc = getelementptr inbounds i32, i32* %pSource, i32 1\n"
  "  br label %copyLoop.test\n"
  "\n"
  "copyCompleted:\n"
  "  ret void\n"
  "}\n"
  "\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  ";   configuration.on.boot                                                                                              *\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "define void @configuration.on.boot () nounwind minsize optsize {\n"
  "  call void @boot ()\n"
  "  call void @clearBSS ()\n"
  "  call void @copyData ()\n"
  "  call void @init ()\n"
  "  call void @installInterrupts ()\n"
  "  call void @start.tasks ()\n"
  "  ret  void\n"
  "}\n"
  "\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "declare void @installInterrupts () nounwind\n"
  "\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  ";   Real time Kernel interface                                                                                         *\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  ";--- Create task \n"
  "declare void @kernel_create_task (i32 %inTaskIndex, i32* %inStackBufferAddress, i32 %inStackBufferSize, void ()* %inTaskRoutine) nounwind\n" ;

const cRegularFileWrapper gWrapperFile_22_targetTemplates (
  "target.ll",
  "ll",
  true, // Text file
  4749, // Text length
  gWrapperFileContent_22_targetTemplates
) ;

//--- File 'LPC-L2294/target.s'

const char * gWrapperFileContent_23_targetTemplates = "  .code 32\n"
  "\t.text\n"
  "\t.syntax unified\n"
  "\t.cpu\tarm7tdmi-s\n"
  "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@       A C T I V I T Y    L E D    M A N A G E M E N T                                                                *\n"
  "@                                                                                                                      *\n"
  "@  This file provides macros for managing activity led.                                                                *\n"
  "@  It is included by sources/xtr/arm-context.s file.                                                                   *\n"
  "@  On the LPC-L2294 card, we use 'STAT' led (formely P1.23):                                                           *\n"
  "@    P1.23 low: led on;                                                                                                *\n"
  "@    P1.23 high: led off.                                                                                              *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  IO0CLR      = 0xE002800C\n"
  "  IO0SET      = 0xE0028004\n"
  "  IO1CLR      = 0xE002801C\n"
  "  IO1SET      = 0xE0028014\n"
  "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@       A C T I V I T Y    L E D    O N                                                                                *\n"
  "@                                                                                                                      *\n"
  "@  When this macro is used, we can only use R6 and R7 registers.                                                       *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  .macro ACTIVITY_LED_ON\n"
  "@    ldr   r7, =IO1CLR\n"
  "@    mov   r6, #(1 << 23)\n"
  "@    str   r6, [r7]\n"
  "  .endm\n"
  "  \n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@       A C T I V I T Y    L E D    O F F                                                                              *\n"
  "@                                                                                                                      *\n"
  "@  When this macro is used, we can only use R6 and R7 registers.                                                       *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  .macro ACTIVITY_LED_OFF\n"
  "@    ldr   r7, =IO1SET\n"
  "@    mov   r6, #(1 << 23)\n"
  "@    str   r6, [r7]\n"
  "  .endm\n"
  "  \n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@                 R E S E T    H A N D L E R                                                                           *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "@--- Modes defined status Register\n"
  "   ARM_MODE_USER  = 0x10      @ Normal User Mode\n"
  "   ARM_MODE_FIQ   = 0x11      @ FIQ Interrupt Mode\n"
  "   ARM_MODE_IRQ   = 0x12      @ IRQ Interrupt Mode\n"
  "   ARM_MODE_SVC   = 0x13      @ SWI Interrupt Mode\n"
  "   ARM_MODE_ABORT = 0x17      @ Abort Processing memory Fault Mode\n"
  "   ARM_MODE_UNDEF = 0x1B      @ Undefined Instruction Mode\n"
  "   \n"
  "@--- Interrupt masks for status Register\n"
  "   I_BIT          = 0x80      @ IRQ (IRQ is disabled when I bit is set)\n"
  "   F_BIT          = 0x40      @ FIQ (FIQ is disabled when F bit is set)\n"
  "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@               Vector table and reset entry                                                                           *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "   .section .isr_vector, \"ax\"\n"
  "\n"
  "   ldr pc, ResetAddr    @ Reset\n"
  "   ldr pc, UndefAddr    @ Undefined instruction\n"
  "   ldr pc, SWIAddr      @ Software interrupt\n"
  "   ldr pc, PAbortAddr   @ Prefetch abort\n"
  "   ldr pc, DAbortAddr   @ Data abort\n"
  "   .word   0xb8a06f60   @ Checksum\n"
  "   ldr pc, IRQAddr      @ IRQ interrupt\n"
  "   ldr pc, FIQAddr      @ FIQ interrupt\n"
  "ResetAddr:     .word as_reset_handler\n"
  "UndefAddr:     .word as_undef_handler\n"
  "SWIAddr:       .word as_swi_handler\n"
  "PAbortAddr:    .word !ISR!PAbort\n"
  "DAbortAddr:    .word !ISR!DAbort\n"
  "IRQAddr:       .word as_irq_handler\n"
  "FIQAddr:       .word !ISR!FIQ\n"
  "               .word 0xFFFFFFFF @ pad word to get 64 bytes in isr_vector section\n"
  "   \n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@                           Reset handler                                                                              *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "   .section .init, \"ax\"\n"
  "   .global as_reset_handler\n"
  "\n"
  "as_reset_handler:\n"
  "@-------------------------- Setup a stack and  status register for each mode\n"
  "   msr   CPSR_c, #ARM_MODE_UNDEF | I_BIT | F_BIT  @ Undefined Instruction Mode     \n"
  "   ldr   sp, =__und_stack_end\n"
  "   \n"
  "   msr   CPSR_c, #ARM_MODE_ABORT | I_BIT | F_BIT  @ Abort Mode\n"
  "   ldr   sp, =__abt_stack_end\n"
  "   \n"
  "   msr   CPSR_c, #ARM_MODE_FIQ | I_BIT | F_BIT @ FIQ Mode\n"
  "   ldr   sp, =__fiq_stack_end\n"
  "   \n"
  "   msr   CPSR_c, #ARM_MODE_IRQ | I_BIT | F_BIT  @ IRQ Mode\n"
  "   ldr   sp, =__irq_stack_end\n"
  "   \n"
  "   msr   CPSR_c, #ARM_MODE_SVC | I_BIT | F_BIT @ Supervisor Mode\n"
  "   ldr   sp, =__svc_stack_end\n"
  "\n"
  "@---------------------------------------- Initialize system (boot, init)\n"
  "   bl    configuration.on.boot\n"
  "\n"
  "@---------------------------------------- Call entry point\n"
  "   b    __entry_point\n"
  "\n"
  "   .text\n"
  "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@              I N T E R R U P T    V E C T O R S                                                                      *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  .global __plm_interrupt_vectors\n"
  "\n"
  "__plm_interrupt_vectors :\n"
  "  .word !ISR!WDT      @ 0\n"
  "  .word 0             @ 1\n"
  "  .word !ISR!ARMCore0 @ 2\n"
  "  .word !ISR!ARMCore1 @ 3\n"
  "  .word !ISR!TIMER0   @ 4\n"
  "  .word !ISR!TIMER1   @ 5\n"
  "  .word !ISR!UART0    @ 6\n"
  "  .word !ISR!UART1    @ 7\n"
  "  .word !ISR!PWM0     @ 8\n"
  "  .word !ISR!I2C      @ 9\n"
  "  .word !ISR!SPI0     @ 10\n"
  "  .word !ISR!SPI1_SSP @ 11\n"
  "  .word !ISR!PLL      @ 12\n"
  "  .word !ISR!RTC      @ 13\n"
  "  .word !ISR!EINT0    @ 14\n"
  "  .word !ISR!EINT1    @ 15\n"
  "  .word !ISR!EINT2    @ 16\n"
  "  .word !ISR!EINT3    @ 17\n"
  "  .word !ISR!ADC      @ 18\n"
  "  .word !ISR!CAN_COMMON @ 19\n"
  "  .word !ISR!CAN0_TX @ 20\n"
  "  .word !ISR!CAN1_TX @ 21\n"
  "  .word !ISR!CAN2_TX @ 22\n"
  "  .word !ISR!CAN3_TX @ 23\n"
  "  .word 0            @ 24\n"
  "  .word !ISR!FULLCAN @ 25\n"
  "  .word !ISR!CAN0_RX @ 26\n"
  "  .word !ISR!CAN1_RX @ 27\n"
  "  .word !ISR!CAN2_RX @ 28\n"
  "  .word !ISR!CAN3_RX @ 29\n"
  "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@              A R M 4    C O N T E X T                                                                                *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@ ARM4 task context is stored is an 17 * 4 byte buffer.                                                                *\n"
  "@                                                                                                                      *\n"
  "@ The gRunningTaskControlBlock shared variable points to the buffer associated to the current task.                    *\n"
  "@                                                                                                                      *\n"
  "@                                                                      offset                                          *\n"
  "@                                              *---------------------*                                                 *\n"
  "@                                              | PC_USR              | +64                                             *\n"
  "@                                              | R12                 | +60                                             *\n"
  "@                                              | R11                 | +56                                             *\n"
  "@                                              | R10                 | +52                                             *\n"
  "@                                              | R9                  | +48                                             *\n"
  "@                                              | R8                  | +44                                             *\n"
  "@                                              | R7                  | +40                                             *\n"
  "@                                              | R6                  | +36                                             *\n"
  "@                                              | R5                  | +32                                             *\n"
  "@                                              | R4                  | +28                                             *\n"
  "@                                              | R3                  | +24                                             *\n"
  "@                                              | R2                  | +20                                             *\n"
  "@                                              | R1                  | +16                                             *\n"
  "@                                              | R0                  | +12                                             *\n"
  "@                                              | LR_USR              | + 8                                             *\n"
  "@    *--------------------------------*        | SP_USR              | + 4                                             *\n"
  "@    | gRunningTaskControlBlock       +------> | CPSR                | + 0                                             *\n"
  "@    *--------------------------------*        *---------------------*                                                 *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@        A R M    A B I                                                                                                *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@    From document ARM IHI 0042C, current through ABI release 2.07                                                     *\n"
  "@                                                                                                                      *\n"
  "@ The first four registers r0-r3 are used to pass argument values into a subroutine and to return a result value from  *\n"
  "@ a function. They may also be used to hold intermediate values within a routine (but, in general, only between        *\n"
  "@ subroutine calls).                                                                                                   *\n"
  "@                                                                                                                      *\n"
  "@ A subroutine must preserve the contents of the registers r4-r8, r10, r11 and SP (and r9 in PCS variants that         *\n"
  "@ designate r9 as v6).                                                                                                 *\n"
  "@                                                                                                                      *\n"
  "@ So we can freely use r9 in SWI handler \? No, we preserve r4-r11                                                      *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@        S W I    H A N D L E R                                                                                        *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  .global as_swi_handler\n"
  "\n"
  "as_swi_handler:\n"
  "@ Here :\n"
  "@  - lr points to the next instruction after the SWI instruction\n"
  "@  - the user sp can be retrieved into reg register using mrs reg, spsr\n"
  "@  - do not modify r0-r3, they contain actual parameters\n"
  "@-------------------------- Save working registers\n"
  "  stmfd sp!, {r6-r8, lr}\n"
  "@-------------------------- Led On (uses only r6 and r7)\n"
  "  ACTIVITY_LED_ON @ macro defined in activity_led_management.s file\n"
  "@--------------------------- Get SWI Immediat value\n"
  "@   LDRH loads a halfword from memory and zero-extends it to a 32-bit word.\n"
  "  ldrh  r6, [lr, #-4] @ Get 16 last bits of swi instruction\n"
  "@--------------------------- r8 <- address of sys_xxx routine to call\n"
  "  ldr   r8, =__swi_dispatcher_table\n"
  "  ldr   r8, [r8, r6, LSL #2]\n"
  "@--------------------------- R6 <- address of gRunningTaskControlBlock variable\n"
  "  ldr   r6, =gRunningTaskControlBlock\n"
  "@--------------------------- Save context pointer of current running task in R7\n"
  "  ldr   r7, [r6]\n"
  "@--------------------------- Call sys_xxx routine\n"
  "  mov   lr, pc\n"
  "  bx    r8\n"
  "@--------------------------- Save 32-bit return value in R8\n"
  "  mov   r8, r0\n"
  "@--------------------------- Select Running Task\n"
  "  bl    kernel_selectTaskToRun\n"
  "@--------------------------- Restore return value from r8\n"
  "  mov   r0, r8\n"
  "@--------------------------- R2 <- address of new running task context\n"
  "@  R7: context of running task on SWI call\n"
  "@  R6: 'gRunningTaskControlBlock' address\n"
  "  ldr   r2, [r6] @ R2 <- address of new running task context\n"
  "  mov   r3, r7 @ R3: context of running task on SWI call\n"
  "@--------------------------- Restore task registers\n"
  "  ldmfd sp!, {r6-r8, lr}\n"
  "@--------------------------- Context Switch\n"
  "  teq    r2, r3 @ Compare R2 (new task), with R3 (calling task)\n"
  "  moveq  pc, lr @ Return from interrupt if no context swith\n"
  "@--------------------------- Perform the context switch\n"
  "@----------- First save context of calling task\n"
  "@--- If sp is NULL, there is no context to save\n"
  "  movs  r3, r3\n"
  "  beq   __restore_context_of_running_task\n"
  "@--- Save registers R0, ..., R12, LR of calling task\n"
  "  add   r3, r3, #12 @ Make room for sp_usr, lr_usr and cpsr_usr\n"
  "  stmia r3, {r0-r12, lr}\n"
  "@--- cpsr_usr -> R8\n"
  "  mrs   r8, spsr\n"
  "@--- Save sp_usr (R8)\n"
  "  str   r8, [r3, #-12]\n"
  "@--- Store sp_usr, lr_usr\n"
  "  sub   r3, r3, #8 @ Restore original value of R8\n"
  "  stmia r3, {r13, r14}^\n"
  "@---------------------------------- Restore context of the new running task\n"
  "__restore_context_of_running_task:\n"
  "  movs  r2, r2\n"
  "  beq   __no_context_to_restore\n"
  "@--- Restore cpsr_usr from R8\n"
  "  ldr   r8, [r2]\n"
  "  msr   spsr, r8\n"
  "@--- Restore sp_usr, lr_usr\n"
  "  add   r2, r2, #4\n"
  "  ldmia r2, {r13, r14}^\n"
  "@--- Restore registers R0, ..., R12, and PC\n"
  "@    (^ and pc using perform here return from interrupt)\n"
  "  add   r2, r2, #8\n"
  "  ldmia r2, {r0-r12, pc}^\n"
  "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "__no_context_to_restore:\n"
  "@--- Led Off (uses only r6 and r7)\n"
  "  ACTIVITY_LED_OFF @ macro defined in activity_led_management.s file\n"
  "@--- Set User Mode, interrupts enabled\n"
  "  msr   CPSR_c, #ARM_MODE_USER\n"
  "@--- Wait for interrupt\n"
  "__wait_interrupt:\n"
  "  b     __wait_interrupt\n"
  "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@        C O N T R O L   R E G I S T E R                                                                               *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  VICVectAddr = 0xFFFFF030\n"
  "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@        I R Q    H A N D L E R                                                                                        *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  .global as_irq_handler\n"
  "  .global __entry_point\n"
  "  .type __entry_point, %function\n"
  "  .global kernel_selectTaskToRun\n"
  "  .type kernel_selectTaskToRun, %function\n"
  "\n"
  "as_irq_handler:\n"
  "@--------------------------- Adjust return address\n"
  "  sub   r14, r14, #4\n"
  "@--------------------------- Save r0 on IRQ stack\n"
  "  stmfd sp!, {r0}\n"
  "@--------------------------- Context save\n"
  "@--- R0 <- Address of current task context save\n"
  "  ldr   r0, =gRunningTaskControlBlock\n"
  "  ldr   r0, [r0]\n"
  "@--- If r0 is NULL, there is no context to save\n"
  "  movs  r0, r0\n"
  "  beq   __no_context_to_save_on_irq\n"
  "@--- Save registers R1, ..., R12, LR\n"
  "  add   r0, r0, #4*4 @ Make room for sp_usr, lr_usr, cpsr_usr and r0\n"
  "  stmia r0, {r1-r12, lr}\n"
  "@--- cpsr_usr -> R8\n"
  "  mrs   r8, spsr\n"
  "@--- Save sp_usr (R8)\n"
  "  sub   r0, r0, #4*4 @ Restore original value\n"
  "  str   r8, [r0]\n"
  "@--- Store sp_usr, lr_usr\n"
  "  add   r0, r0, #4\n"
  "  stmia r0, {r13, r14}^\n"
  "@--- Store user task r0\n"
  "  add   r0, r0, #8\n"
  "  ldr   r1, [sp]\n"
  "  str   r1, [r0]\n"
  "@--------------------------- Adjust IRQ stack\n"
  "__no_context_to_save_on_irq:\n"
  "  add   sp, sp, #4\n"
  "@--------------------------- Led On (uses only r6 and r7)\n"
  "  ACTIVITY_LED_ON @ macro defined in activity_led_management.s file\n"
  "@--------------------------- IRQ Body : run interrupt service routine\n"
  "@--- R1 <- contenu du registre VICVectAddr (call interrupt routine service)\n"
  "  ldr   r1, =VICVectAddr\n"
  "  ldr   r1, [r1]\n"
  "@--- Call interrupt routine service\n"
  "  mov   lr, pc @--- Link Register -> return address\n"
  "  bx    r1\n"
  "@--- Acknowledge interrupt service (write any value into VICVectAddr register)\n"
  "  ldr   r0, =VICVectAddr\n"
  "  str   r0, [r0]\n"
  "@--------------------------- Select Running Task\n"
  "__entry_point: @ This entry point is kernel start routine\n"
  "  bl    kernel_selectTaskToRun\n"
  "@--------------------------- Context restore\n"
  "@--- r0 <- Address of current running task context save\n"
  "  ldr   r0, =gRunningTaskControlBlock\n"
  "  ldr   r0, [r0]\n"
  "  movs  r0, r0\n"
  "  beq   __no_context_to_restore\n"
  "@--- Restore cpsr_usr (r1)\n"
  "  ldr   r1, [r0]\n"
  "@--- Restore cpsr_usr from r1\n"
  "  msr   spsr, r1\n"
  "@--- Restore sp_usr, lr_usr\n"
  "  add   r0, r0, #4\n"
  "  ldmia r0, {r13, r14}^\n"
  "@--- Restore registers R0, ..., R12, PC\n"
  "@    ('^' and 'pc' means return from interrupt)\n"
  "  add   r0, r0, #8\n"
  "  ldmia r0, {r0-r12, pc}^\n"
  "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@        U N D E F I N E D    I N S T R U C T I O N    H A N D L E R                                                   *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@ We use some arm undefined instructions for performing kernel defined operations that do not use context switchs.     *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@           In ARM Architecture ReferenceManual, page A3-39                                                            *\n"
  "@          A3.16.5 Architecturally Undefined Instruction space                                                         *\n"
  "@                                                                                                                      *\n"
  "@ In general, Undefined instructions might be used to extend the ARM instruction set in the future. However, it is     *\n"
  "@ intended that instructions with the following encoding will not be used for this:                                    *\n"
  "@                                                                                                                      *\n"
  "@ 3322 2222 2222 1111  1111 1100 0000 0000                                                                             *\n"
  "@ 1098 7654 3210 9876  5432 1098 7654 3210                                                                             *\n"
  "@ ---- ---- ---- ----  ---- ---- ---- ----                                                                             *\n"
  "@ cond 0111 1111 xxxx  xxxx xxxx 1111 xxxx                                                                             *\n"
  "@                                                                                                                      *\n"
  "@ If a programmer wants to use an Undefined instruction for software, purposes with minimal risk that future hardware  *\n"
  "@ will treat it as a defined instruction, one of the instructions with this encoding must be used.                     *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  .global as_undef_handler\n"
  "\n"
  "as_undef_handler:\n"
  "@--- Save preserved registers\n"
  "  stmfd r13!, {r7, lr}\n"
  "@--- r7 <- bits 15-8 of undef instruction\n"
  "@    LDRB loads a byte from memory and zero-extends the byte to a 32-bit word.\n"
  "  ldrb  r7, [lr, #-4 + 1] @ -4 for undef instruction, +1 for getting second byte\n"
  "@--- r12 <- address of routine to call\n"
  "  ldr   r12, =__und_dispatcher_table\n"
  "  ldr   r12, [r12, r7, LSL #2]\n"
  "@--- Call routine\n"
  "  mov   lr, pc\n"
  "  bx    r12\n"
  "@--- Return from interrupt\n"
  "  ldmfd r13!, {r7, pc}^\n"
  "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  I_BIT_MASK = 0x80      @ IRQ is disabled when I bit is set\n"
  "  UNDEFINED_INSTRUCTION = 0xE7F000F0\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_23_targetTemplates (
  "target.s",
  "s",
  true, // Text file
  25306, // Text length
  gWrapperFileContent_23_targetTemplates
) ;

//--- File 'LPC-L2294/undefined-interrupt.s'

const char * gWrapperFileContent_24_targetTemplates = "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@  Undefined interrupt !ISR!\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "\t!ISR! = 0\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_24_targetTemplates (
  "undefined-interrupt.s",
  "s",
  true, // Text file
  284, // Text length
  gWrapperFileContent_24_targetTemplates
) ;

//--- File 'LPC-L2294/xtr-interrupt-handler.s'

const char * gWrapperFileContent_25_targetTemplates = "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@                 S Y S T I C K    H A N D L E R    ( D O U B L E    S T A C K    M O D E )                            *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  .global !ISR!\n"
  "  .type !ISR!, %function\n"
  "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  .global !HANDLER!\n"
  "  .type !HANDLER!, %function\n"
  "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "!ISR!:\n"
  "@----------------------------------------- Call Interrupt handler\n"
  "  b    !HANDLER!\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_25_targetTemplates (
  "xtr-interrupt-handler.s",
  "s",
  true, // Text file
  1034, // Text length
  gWrapperFileContent_25_targetTemplates
) ;

//--- All files of 'LPC-L2294' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetTemplates_1 [21] = {
  & gWrapperFile_6_targetTemplates,
  & gWrapperFile_7_targetTemplates,
  & gWrapperFile_8_targetTemplates,
  & gWrapperFile_9_targetTemplates,
  & gWrapperFile_10_targetTemplates,
  & gWrapperFile_11_targetTemplates,
  & gWrapperFile_12_targetTemplates,
  & gWrapperFile_13_targetTemplates,
  & gWrapperFile_14_targetTemplates,
  & gWrapperFile_15_targetTemplates,
  & gWrapperFile_16_targetTemplates,
  & gWrapperFile_17_targetTemplates,
  & gWrapperFile_18_targetTemplates,
  & gWrapperFile_19_targetTemplates,
  & gWrapperFile_20_targetTemplates,
  & gWrapperFile_21_targetTemplates,
  & gWrapperFile_22_targetTemplates,
  & gWrapperFile_23_targetTemplates,
  & gWrapperFile_24_targetTemplates,
  & gWrapperFile_25_targetTemplates,
  NULL
} ;

//--- All sub-directories of 'LPC-L2294' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetTemplates_1 [1] = {
  NULL
} ;

//--- Directory 'LPC-L2294'

const cDirectoryWrapper gWrapperDirectory_1_targetTemplates (
  "LPC-L2294",
  20,
  gWrapperAllFiles_targetTemplates_1,
  0,
  gWrapperAllDirectories_targetTemplates_1
) ;

//--- File 'files/lpc2294-xtr.plm'

const char * gWrapperFileContent_26_targetTemplates = "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   SYNCHRONIZATION TOOLS ROUTINES                                             \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "type $taskList : ((32)) @instantiable\n"
  "\n"
  "//--- Block running task\n"
  "extern func `kernel block (\?!inList:ioWaitingList $taskList) : \"blockInList\"\n"
  "\n"
  "extern func `kernel block (\?onDeadline:inDeadline $uint32) : \"blockOnDeadline\"\n"
  "\n"
  "extern func `kernel block (\?!inList:ioWaitingList $taskList\n"
  "                           \?onDeadline:inDeadline $uint32) : \"blockInListAndOnDeadline\"\n"
  "\n"
  "//--- Make task Ready\n"
  "extern func `kernel `service `guard\n"
  "makeTaskReady (\?!fromList:ioWaitingList $taskList\n"
  "               !found: outFound $bool) : \"makeTaskReady\"\n"
  "\n"
  "extern func `service makeTasksReady (\?fromCurrentDate:inCurrentDate $uint32) : \"makeTasksReadyFromCurrentDate\"\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   GUARD                                                                      \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "type $guardList : ((32)) @instantiable\n"
  "\n"
  "extern func `guard handle (\?!guard:ioGuard $guardList) : \"handleGuardedCommand\"\n"
  "\n"
  "extern func `guard handle (\?guardedDeadline:inDeadlineMS $uint32) : \"handleGuardedWaitUntil\"\n"
  "\n"
  "extern func `kernel `service notifyChange (\?!forGuard:ioGuard $guardList) : \"guardDidChange\"\n"
  "\n"
  "extern func `service notifyChangeForGuardedWaitUntil (\?withCurrentDate:inCurrentDate $uint32) : \"tickHandlerForGuardedWaitUntil\"\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "let TIMER_PRESCALER = 6\n"
  "let TICKS_PER_MILLISECONDS = 10000\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "init 100 {\n"
  "//--- Program pin P1.23 as an output (STAT led)\n"
  "  IO1DIR |= 1 << 23\n"
  "  IO1CLR  = 1 << 23 // Led On\n"
  "//-------------------------------- Timer 1\n"
  "//--- 1. Set Prescaler\n"
  "  TIMER1_PR = TIMER_PRESCALER - 1\n"
  "//--- 2. Set Match Register 0\n"
  "//    We want an interrupt every millisecond\n"
  "  TIMER1_MR0 = TICKS_PER_MILLISECONDS - 1\n"
  "//--- 2. Set Count control Register\n"
  "//    Bits 1-0: 00 (timer mode)\n"
  "//    Bits 3-2: XX (any value, because timer mode)\n"
  "  TIMER1_CCR = 0\n"
  "//--- 3. Match Control Register\n"
  "//    Bit 0: 1 (interrupt on MR0 match)\n"
  "//    Bit 1: 1 (reset on MR0 match)\n"
  "//    Bit 2: 0 (do not stop on MR0 match)\n"
  "//    Bit 5-3: 000 (MR1 not used)\n"
  "//    Bit 8-6: 000 (MR2 not used)\n"
  "//    Bit 11-9: 000 (MR3 not used)\n"
  "  TIMER1_MCR = 3\n"
  "//--- 4. Use vector 9 for TIMER1 interrupt\n"
  "//  sys_installInterruptServiceRoutine (MODE_ TIMER1InterruptServiceRoutine, 5) ;\n"
  "//  VICVectAddr9 = (uint32_t) TIMER1InterruptServiceRoutine ;\n"
  "//  VICVectCntl9 = 0x20 | 5 ; // Timer interrupt number is #5\n"
  "//--- 5. Use IRQ for tracking MR0 matches\n"
  "//  TIMER1 gets interruption #5 (mask: 0x20)\n"
  "//  VICIntEnClr   = 1 << 5 ; // Timer1 interrupt generates IRQ\n"
  "//  VICIntEnable |= 1 << 5 ; // Enable Timer1 interrupt\n"
  "//--- 6. Start Counter 0 (Timer Control Register)\n"
  "// Bit 0 : 1 (Enables counting)\n"
  "// Bit 1 : 0 (No reset)\n"
  "  TIMER1_TCR = 1\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "  \n"
  "public func `service userSystickHandler @weak () {\n"
  "}\n"
  "  \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "module time {\n"
  "\n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "\n"
  "  var mUptimeMS $uint32 = 0\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  public func `service `kernel `user `guard millis @noUnusedWarning @userAccess () -> $uint32 {\n"
  "    result = self.mUptimeMS\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  isr TIMER1 @xtr {\n"
  "    TIMER1_IR = 1 // Clears MR0 interrupt\n"
  "    let now = self.mUptimeMS +% 1\n"
  "    self.mUptimeMS = now\n"
  "    makeTasksReady (!fromCurrentDate:now)\n"
  "    notifyChangeForGuardedWaitUntil (!withCurrentDate:now)\n"
  "    userSystickHandler ()\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  public primitive waitUntilMS @noUnusedWarning (\?deadline: inDate $uint32) {\n"
  "    if inDate > self.millis () {\n"
  "      block (!onDeadline:inDate)\n"
  "    }\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  public func `user waitDuringMS @noUnusedWarning @mutating @userAccess (\?delay: inDelay $uint32) {\n"
  "    self.waitUntilMS (!deadline:self.millis () + inDelay)\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  public guard waitUntilMS @noUnusedWarning (\?deadline:inDeadline $uint32) {\n"
  "    accept = inDeadline <= self.millis ()\n"
  "    if not accept {\n"
  "      handle (!guardedDeadline:inDeadline)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n" ;

const cRegularFileWrapper gWrapperFile_26_targetTemplates (
  "lpc2294-xtr.plm",
  "plm",
  true, // Text file
  4950, // Text length
  gWrapperFileContent_26_targetTemplates
) ;

//--- File 'files/registers-lpc2294.plm'

const char * gWrapperFileContent_27_targetTemplates = "//------------------------------------------------------------------------------\n"
  "\n"
  "// Vectored Interrupt Controller (VIC)\n"
  "register VICIRQStatus   at 0xFFFF_F000 $uint32\n"
  "register VICFIQStatus   at 0xFFFF_F000 $uint32\n"
  "register VICRawIntr     at 0xFFFF_F008 $uint32\n"
  "register VICIntSelect   at 0xFFFF_F00C $uint32\n"
  "register VICIntEnable   at 0xFFFF_F010 $uint32\n"
  "register VICIntEnClr    at 0xFFFF_F014 $uint32\n"
  "register VICSoftInt     at 0xFFFF_F018 $uint32\n"
  "register VICSoftIntClr  at 0xFFFF_F01C $uint32\n"
  "register VICProtection  at 0xFFFF_F020 $uint32\n"
  "register VICVectAddr    at 0xFFFF_F030 $uint32\n"
  "register VICDefVectAddr at 0xFFFF_F034 $uint32\n"
  "\n"
  "//register VICVect(INDEX) $uint32 (0xFFFF_F100 + ((INDEX) << 2\n"
  "\n"
  "// register VICVectAddr[16] at 0xFFFF_F100 : 4 $uint32\n"
  "register VICVectAddr0   at 0xFFFF_F100 $uint32\n"
  "register VICVectAddr1   at 0xFFFF_F104 $uint32\n"
  "register VICVectAddr2   at 0xFFFF_F108 $uint32\n"
  "register VICVectAddr3   at 0xFFFF_F10C $uint32\n"
  "register VICVectAddr4   at 0xFFFF_F110 $uint32\n"
  "register VICVectAddr5   at 0xFFFF_F114 $uint32\n"
  "register VICVectAddr6   at 0xFFFF_F118 $uint32\n"
  "register VICVectAddr7   at 0xFFFF_F11C $uint32\n"
  "register VICVectAddr8   at 0xFFFF_F120 $uint32\n"
  "register VICVectAddr9   at 0xFFFF_F124 $uint32\n"
  "register VICVectAddr10  at 0xFFFF_F128 $uint32\n"
  "register VICVectAddr11  at 0xFFFF_F12C $uint32\n"
  "register VICVectAddr12  at 0xFFFF_F130 $uint32\n"
  "register VICVectAddr13  at 0xFFFF_F134 $uint32\n"
  "register VICVectAddr14  at 0xFFFF_F138 $uint32\n"
  "register VICVectAddr15  at 0xFFFF_F13C $uint32\n"
  "\n"
  "//register VICVectCntl(INDEX) $uint32 (0xFFFF_F200 + ((INDEX) << 2\n"
  "\n"
  "register VICVectCntl0   at 0xFFFF_F200 $uint32\n"
  "register VICVectCntl1   at 0xFFFF_F204 $uint32\n"
  "register VICVectCntl2   at 0xFFFF_F208 $uint32\n"
  "register VICVectCntl3   at 0xFFFF_F20C $uint32\n"
  "register VICVectCntl4   at 0xFFFF_F210 $uint32\n"
  "register VICVectCntl5   at 0xFFFF_F214 $uint32\n"
  "register VICVectCntl6   at 0xFFFF_F218 $uint32\n"
  "register VICVectCntl7   at 0xFFFF_F21C $uint32\n"
  "register VICVectCntl8   at 0xFFFF_F220 $uint32\n"
  "register VICVectCntl9   at 0xFFFF_F224 $uint32\n"
  "register VICVectCntl10  at 0xFFFF_F228 $uint32\n"
  "register VICVectCntl11  at 0xFFFF_F22C $uint32\n"
  "register VICVectCntl12  at 0xFFFF_F230 $uint32\n"
  "register VICVectCntl13  at 0xFFFF_F234 $uint32\n"
  "register VICVectCntl14  at 0xFFFF_F238 $uint32\n"
  "register VICVectCntl15  at 0xFFFF_F23C $uint32\n"
  "\n"
  "//------------------------------------------------------------------------------\n"
  "\n"
  "// Watchdog\n"
  "register WDMOD            at 0xE000_0000 $uint8\n"
  "register WDTC             at 0xE000_0004 $uint32\n"
  "register WDFEED           at 0xE000_0008 $uint8\n"
  "register WDTV             at 0xE000_000C $uint32\n"
  "\n"
  "// Pin Connect Block\n"
  "register PINSEL0        at 0xE002_C000 $uint32\n"
  "register PINSEL1        at 0xE002_C004 $uint32\n"
  "register PINSEL2        at 0xE002_C014 $uint32\n"
  "\n"
  "// General Purpose Input/Output (GPIO)\n"
  "register IO0PIN          at 0xE002_8000 $uint32\n"
  "register IO0SET @user    at 0xE002_8004 $uint32\n"
  "register IO0DIR          at 0xE002_8008 $uint32\n"
  "register IO0CLR @user    at 0xE002_800C $uint32\n"
  "\n"
  "register IO1PIN          at 0xE002_8010 $uint32\n"
  "register IO1SET @user    at 0xE002_8014 $uint32\n"
  "register IO1DIR          at 0xE002_8018 $uint32\n"
  "register IO1CLR @user    at 0xE002_801C $uint32\n"
  "\n"
  "register IO2PIN          at 0xE002_8020 $uint32\n"
  "register IO2SET @user    at 0xE002_8024 $uint32\n"
  "register IO2DIR          at 0xE002_8028 $uint32\n"
  "register IO2CLR @user    at 0xE002_802C $uint32\n"
  "\n"
  "register IO3PIN          at 0xE002_8030 $uint32\n"
  "register IO3SET @user    at 0xE002_8034 $uint32\n"
  "register IO3DIR          at 0xE002_8038 $uint32\n"
  "register IO3CLR @user    at 0xE002_803C $uint32\n"
  "\n"
  "// Memory Accelerator Module (MAM)\n"
  "register MAMCR            at 0xE01F_C000 $uint8\n"
  "register MAMTIM           at 0xE01F_C004 $uint8\n"
  "register MEMMAP           at 0xE01F_C040 $uint8\n"
  "\n"
  "// Phase Locked Loop (PLL)\n"
  "register PLLCON           at 0xE01F_C080 $uint8\n"
  "register PLLCFG           at 0xE01F_C084 $uint8\n"
  "register PLLSTAT          at 0xE01F_C088 $uint16\n"
  "register PLLFEED          at 0xE01F_C08C $uint8\n"
  "\n"
  "// VPB Divider */\n"
  "register VPBDIV           at 0xE01F_C100 $uint8\n"
  "\n"
  "// Power Control */\n"
  "register PCON             at 0xE01F_C0C0 $uint8\n"
  "register PCONP            at 0xE01F_C0C4 $uint32\n"
  "\n"
  "// External Interrupts\n"
  "register EXTINT           at 0xE01F_C140 $uint8\n"
  "register EXTWAKE          at 0xE01F_C144 $uint8\n"
  "register EXTMODE          at 0xE01F_C148 $uint8\n"
  "register EXTPOLAR         at 0xE01F_C14C $uint8\n"
  "\n"
  "// Timer 0\n"
  "register TIMER0_IR      at 0xE000_4000 $uint32\n"
  "register TIMER0_TCR     at 0xE000_4004 $uint32\n"
  "register TIMER0_TC      at 0xE000_4008 $uint32\n"
  "register TIMER0_PR      at 0xE000_400C $uint32\n"
  "register TIMER0_PC      at 0xE000_4010 $uint32\n"
  "register TIMER0_MCR     at 0xE000_4014 $uint32\n"
  "register TIMER0_MR0     at 0xE000_4018 $uint32\n"
  "register TIMER0_MR1     at 0xE000_401C $uint32\n"
  "register TIMER0_MR2     at 0xE000_4020 $uint32\n"
  "register TIMER0_MR3     at 0xE000_4024 $uint32\n"
  "register TIMER0_CCR     at 0xE000_4028 $uint32\n"
  "register TIMER0_CR0     at 0xE000_402C $uint32\n"
  "register TIMER0_CR1     at 0xE000_4030 $uint32\n"
  "register TIMER0_CR2     at 0xE000_4034 $uint32\n"
  "register TIMER0_CR3     at 0xE000_4038 $uint32\n"
  "register TIMER0_EMR     at 0xE000_403C $uint32\n"
  "\n"
  "// Timer 1\n"
  "register TIMER1_IR      at 0xE000_8000 $uint32\n"
  "register TIMER1_TCR     at 0xE000_8004 $uint32\n"
  "register TIMER1_TC      at 0xE000_8008 $uint32\n"
  "register TIMER1_PR      at 0xE000_800C $uint32\n"
  "register TIMER1_PC      at 0xE000_8010 $uint32\n"
  "register TIMER1_MCR     at 0xE000_8014 $uint32\n"
  "register TIMER1_MR0     at 0xE000_8018 $uint32\n"
  "register TIMER1_MR1     at 0xE000_801C $uint32\n"
  "register TIMER1_MR2     at 0xE000_8020 $uint32\n"
  "register TIMER1_MR3     at 0xE000_8024 $uint32\n"
  "register TIMER1_CCR     at 0xE000_8028 $uint32\n"
  "register TIMER1_CR0     at 0xE000_802C $uint32\n"
  "register TIMER1_CR1     at 0xE000_8030 $uint32\n"
  "register TIMER1_CR2     at 0xE000_8034 $uint32\n"
  "register TIMER1_CR3     at 0xE000_8038 $uint32\n"
  "register TIMER1_EMR     at 0xE000_803C $uint32\n"
  "\n"
  "// Pulse Width Modulator (PWM)\n"
  "register PWM_IR         at 0xE001_4000 $uint32\n"
  "register PWM_TCR        at 0xE001_4004 $uint32\n"
  "register PWM_TC         at 0xE001_4008 $uint32\n"
  "register PWM_PR         at 0xE001_400C $uint32\n"
  "register PWM_PC         at 0xE001_4010 $uint32\n"
  "register PWM_MCR        at 0xE001_4014 $uint32\n"
  "register PWM_MR0        at 0xE001_4018 $uint32\n"
  "register PWM_MR1        at 0xE001_401C $uint32\n"
  "register PWM_MR2        at 0xE001_4020 $uint32\n"
  "register PWM_MR3        at 0xE001_4024 $uint32\n"
  "register PWM_MR4        at 0xE001_4040 $uint32\n"
  "register PWM_MR5        at 0xE001_4044 $uint32\n"
  "register PWM_MR6        at 0xE001_4048 $uint32\n"
  "register PWM_CCR        at 0xE001_4028 $uint32\n"
  "register PWM_CR0        at 0xE001_402C $uint32\n"
  "register PWM_CR1        at 0xE001_4030 $uint32\n"
  "register PWM_CR2        at 0xE001_4034 $uint32\n"
  "register PWM_CR3        at 0xE001_4038 $uint32\n"
  "register PWM_EMR        at 0xE001_403C $uint32\n"
  "register PWM_PCR        at 0xE001_404C $uint32\n"
  "register PWM_LER        at 0xE001_4050 $uint32\n"
  "\n"
  "// Universal Asynchronous Receiver Transmitter 0 (UART0)\n"
  "register U0RBR        at 0xE000_C000 $uint8\n"
  "register U0THR        at 0xE000_C000 $uint8\n"
  "register U0DLL        at 0xE000_C000 $uint8\n"
  "register U0DLM        at 0xE000_C004 $uint8\n"
  "register U0IER        at 0xE000_C004 $uint32\n"
  "register U0IIR        at 0xE000_C008 $uint32\n"
  "register U0FCR        at 0xE000_C008 $uint8\n"
  "register U0LCR        at 0xE000_C00C $uint8\n"
  "register U0LSR        at 0xE000_C014 $uint8\n"
  "register U0SCR        at 0xE000_C01C $uint8\n"
  "register U0ACR        at 0xE000_C020 $uint32\n"
  "register U0FDR        at 0xE000_C028 $uint32\n"
  "register U0TER        at 0xE000_C030 $uint8\n"
  "\n"
  "\n"
  "// Universal Asynchronous Receiver Transmitter 1 (UART1)\n"
  "register U1RBR        at 0xE001_0000 $uint8\n"
  "register U1THR        at 0xE001_0000 $uint8\n"
  "register U1DLL        at 0xE001_0000 $uint8\n"
  "register U1DLM        at 0xE001_0004 $uint8\n"
  "register U1IER        at 0xE001_0004 $uint32\n"
  "register U1IIR        at 0xE001_0008 $uint32\n"
  "register U1FCR        at 0xE001_0008 $uint8\n"
  "register U1LCR        at 0xE001_000C $uint8\n"
  "register U1MCR        at 0xE001_0010 $uint8\n"
  "register U1LSR        at 0xE001_0014 $uint8\n"
  "register U1MSR        at 0xE001_0018 $uint8\n"
  "register U1SCR        at 0xE001_001C $uint8\n"
  "register U1ACR        at 0xE001_0020 $uint32\n"
  "register U1FDR        at 0xE001_0028 $uint32\n"
  "register U1TER        at 0xE001_0030 $uint8\n"
  "\n"
  "\n"
  "// I2C Interface\n"
  "register I2C_I2CONSET     at 0xE001_C000 $uint8\n"
  "register I2C_I2STAT       at 0xE001_C004 $uint8\n"
  "register I2C_I2DAT        at 0xE001_C008 $uint8\n"
  "register I2C_I2ADR        at 0xE001_C00C $uint8\n"
  "register I2C_I2SCLH       at 0xE001_C010 $uint16\n"
  "register I2C_I2SCLL       at 0xE001_C014 $uint16\n"
  "register I2C_I2CONCLR     at 0xE001_C018 $uint8\n"
  "\n"
  "// SPI 0 (Serial Peripheral Interface 0)\n"
  "register SPI0_SPCR          at 0xE002_0000 $uint16\n"
  "register SPI0_SPSR          at 0xE002_0004 $uint8\n"
  "register SPI0_SPDR          at 0xE002_0008 $uint16\n"
  "register SPI0_SPCCR         at 0xE002_000C $uint8\n"
  "// register SPI0_SPTCR        at 0xE002_0010 $uint8\n"
  "// register SPI0_SPTSR        at 0xE002_0014 $uint8\n"
  "// register SPI0_SPTOR        at 0xE002_0018 $uint8\n"
  "register SPI0_SPINT         at 0xE002_001C $uint8\n"
  "\n"
  "// SPI 1 (Serial Peripheral Interface 1)\n"
  "register SPI1_SPCR          at 0xE003_0000 $uint16\n"
  "register SPI1_SPSR          at 0xE003_0004 $uint8\n"
  "register SPI1_SPDR          at 0xE003_0008 $uint16\n"
  "register SPI1_SPCCR         at 0xE003_000C $uint8\n"
  "// register SPI1_SPTCR        at  $uint8   0xE003_0010\n"
  "// register SPI1_SPTSR        at  $uint8   0xE003_0014\n"
  "// register SPI1_SPTOR        at  $uint8   0xE003_0018\n"
  "register SPI1_SPINT         at 0xE003_001C $uint8\n"
  "\n"
  "// Real Time Clock\n"
  "register RTC_ILR          at 0xE002_4000 $uint8\n"
  "register RTC_CTC          at 0xE002_4004 $uint16\n"
  "register RTC_CCR          at 0xE002_4008 $uint8\n"
  "register RTC_CIIR         at 0xE002_400C $uint8\n"
  "register RTC_AMR          at 0xE002_4010 $uint8\n"
  "register RTC_CTIME0       at 0xE002_4014 $uint32\n"
  "register RTC_CTIME1       at 0xE002_4018 $uint32\n"
  "register RTC_CTIME2       at 0xE002_401C $uint32\n"
  "register RTC_SEC          at 0xE002_4020 $uint8\n"
  "register RTC_MIN          at 0xE002_4024 $uint8\n"
  "register RTC_HOUR         at 0xE002_4028 $uint8\n"
  "register RTC_DOM          at 0xE002_402C $uint8\n"
  "register RTC_DOW          at 0xE002_4030 $uint8\n"
  "register RTC_DOY          at 0xE002_4034 $uint16\n"
  "register RTC_MONTH        at 0xE002_4038 $uint8\n"
  "register RTC_YEAR         at 0xE002_403C $uint16\n"
  "register RTC_ALSEC        at 0xE002_4060 $uint8\n"
  "register RTC_ALMIN        at 0xE002_4064 $uint8\n"
  "register RTC_ALHOUR       at 0xE002_4068 $uint8\n"
  "register RTC_ALDOM        at 0xE002_406C $uint8\n"
  "register RTC_ALDOW        at 0xE002_4070 $uint8\n"
  "register RTC_ALDOY        at 0xE002_4074 $uint16\n"
  "register RTC_ALMON        at 0xE002_4078 $uint8\n"
  "register RTC_ALYEAR       at 0xE002_407C $uint16\n"
  "register RTC_PREINT       at 0xE002_4080 $uint16\n"
  "register RTC_PREFRAC      at 0xE002_4084 $uint16\n"
  "\n"
  "// Bank Configuration registers\n"
  "register BCFG0          at 0xFFE0_0000 $uint32\n"
  "register BCFG1          at 0xFFE0_0004 $uint32\n"
  "register BCFG2          at 0xFFE0_0008 $uint32\n"
  "register BCFG3          at 0xFFE0_000C $uint32\n"
  "\n"
  "// CAN Controllers\n"
  "register CAN_AMFR          at 0xE003_C000 $uint32\n"
  "register CAN_SFF_SA        at 0xE003_C004 $uint32\n"
  "register CAN_SFF_GRP_SA    at 0xE003_C008 $uint32\n"
  "register CAN_EFF_SA        at 0xE003_C00C $uint32\n"
  "register CAN_EFF_GRP_SA    at 0xE003_C010 $uint32\n"
  "register CAN_END_OF_TABLES at 0xE003_C014 $uint32\n"
  "\n"
  "// Analog/Digital Converter (ADC)\n"
  "register ADCR           at 0xE003_4000 $uint32\n"
  "register ADGDR          at 0xE003_4004 $uint32\n"
  "register ADINTEN        at 0xE003_400C $uint32\n"
  "\n"
  "\n"
  "// CAN registers\n"
  "register CANCMR [4] at 0xE004_4004 : 1 << 14 $uint8 {\n"
  "  STB3, STB2, STB1, SRR, CDO, RRB, AT, TR\n"
  "}\n"
  "\n"
  "//------------------------------------------------------------------------------\n" ;

const cRegularFileWrapper gWrapperFile_27_targetTemplates (
  "registers-lpc2294.plm",
  "plm",
  true, // Text file
  11760, // Text length
  gWrapperFileContent_27_targetTemplates
) ;

//--- File 'files/registers-mk20dx256.plm'

const char * gWrapperFileContent_28_targetTemplates = "\n"
  "let f_cpu $uint32 = 96_000_000\n"
  "\n"
  "let f_bus $uint32 = 48_000_000\n"
  "let f_mem  $uint32= 24_000_000\n"
  "\n"
  "// chapter 11: Port control and interrupts (PORT)\n"
  " // Pin Control Register n\n"
  "register\n"
  "  PORTA_PCR0   at 0x40049000\n"
  "  PORTA_PCR1   at 0x40049004\n"
  "  PORTA_PCR2   at 0x40049008\n"
  "  PORTA_PCR3   at 0x4004900C\n"
  "  PORTA_PCR4   at 0x40049010\n"
  "  PORTA_PCR5   at 0x40049014\n"
  "  PORTA_PCR6   at 0x40049018\n"
  "  PORTA_PCR7   at 0x4004901C\n"
  "  PORTA_PCR8   at 0x40049020\n"
  "  PORTA_PCR9   at 0x40049024\n"
  "  PORTA_PCR10  at 0x40049028\n"
  "  PORTA_PCR11  at 0x4004902C\n"
  "  PORTA_PCR12  at 0x40049030\n"
  "  PORTA_PCR13  at 0x40049034\n"
  "  PORTA_PCR14  at 0x40049038\n"
  "  PORTA_PCR15  at 0x4004903C\n"
  "  PORTA_PCR16  at 0x40049040\n"
  "  PORTA_PCR17  at 0x40049044\n"
  "  PORTA_PCR18  at 0x40049048\n"
  "  PORTA_PCR19  at 0x4004904C\n"
  "  PORTA_PCR20  at 0x40049050\n"
  "  PORTA_PCR21  at 0x40049054\n"
  "  PORTA_PCR22  at 0x40049058\n"
  "  PORTA_PCR23  at 0x4004905C\n"
  "  PORTA_PCR24  at 0x40049060\n"
  "  PORTA_PCR25  at 0x40049064\n"
  "  PORTA_PCR26  at 0x40049068\n"
  "  PORTA_PCR27  at 0x4004906C\n"
  "  PORTA_PCR28  at 0x40049070\n"
  "  PORTA_PCR29  at 0x40049074\n"
  "  PORTA_PCR30  at 0x40049078\n"
  "  PORTA_PCR31  at 0x4004907C\n"
  "  PORTB_PCR0   at 0x4004A000\n"
  "  PORTB_PCR1   at 0x4004A004\n"
  "  PORTB_PCR2   at 0x4004A008\n"
  "  PORTB_PCR3   at 0x4004A00C\n"
  "  PORTB_PCR4   at 0x4004A010\n"
  "  PORTB_PCR5   at 0x4004A014\n"
  "  PORTB_PCR6   at 0x4004A018\n"
  "  PORTB_PCR7   at 0x4004A01C\n"
  "  PORTB_PCR8   at 0x4004A020\n"
  "  PORTB_PCR9   at 0x4004A024\n"
  "  PORTB_PCR10  at 0x4004A028\n"
  "  PORTB_PCR11  at 0x4004A02C\n"
  "  PORTB_PCR12  at 0x4004A030\n"
  "  PORTB_PCR13  at 0x4004A034\n"
  "  PORTB_PCR14  at 0x4004A038\n"
  "  PORTB_PCR15  at 0x4004A03C\n"
  "  PORTB_PCR16  at 0x4004A040\n"
  "  PORTB_PCR17  at 0x4004A044\n"
  "  PORTB_PCR18  at 0x4004A048\n"
  "  PORTB_PCR19  at 0x4004A04C\n"
  "  PORTB_PCR20  at 0x4004A050\n"
  "  PORTB_PCR21  at 0x4004A054\n"
  "  PORTB_PCR22  at 0x4004A058\n"
  "  PORTB_PCR23  at 0x4004A05C\n"
  "  PORTB_PCR24  at 0x4004A060\n"
  "  PORTB_PCR25  at 0x4004A064\n"
  "  PORTB_PCR26  at 0x4004A068\n"
  "  PORTB_PCR27  at 0x4004A06C\n"
  "  PORTB_PCR28  at 0x4004A070\n"
  "  PORTB_PCR29  at 0x4004A074\n"
  "  PORTB_PCR30  at 0x4004A078\n"
  "  PORTB_PCR31  at 0x4004A07C\n"
  "  PORTC_PCR0   at 0x4004B000\n"
  "  PORTC_PCR1   at 0x4004B004\n"
  "  PORTC_PCR2   at 0x4004B008\n"
  "  PORTC_PCR3   at 0x4004B00C\n"
  "  PORTC_PCR4   at 0x4004B010\n"
  "  PORTC_PCR5   at 0x4004B014\n"
  "  PORTC_PCR6   at 0x4004B018\n"
  "  PORTC_PCR7   at 0x4004B01C\n"
  "  PORTC_PCR8   at 0x4004B020\n"
  "  PORTC_PCR9   at 0x4004B024\n"
  "  PORTC_PCR10  at 0x4004B028\n"
  "  PORTC_PCR11  at 0x4004B02C\n"
  "  PORTC_PCR12  at 0x4004B030\n"
  "  PORTC_PCR13  at 0x4004B034\n"
  "  PORTC_PCR14  at 0x4004B038\n"
  "  PORTC_PCR15  at 0x4004B03C\n"
  "  PORTC_PCR16  at 0x4004B040\n"
  "  PORTC_PCR17  at 0x4004B044\n"
  "  PORTC_PCR18  at 0x4004B048\n"
  "  PORTC_PCR19  at 0x4004B04C\n"
  "  PORTC_PCR20  at 0x4004B050\n"
  "  PORTC_PCR21  at 0x4004B054\n"
  "  PORTC_PCR22  at 0x4004B058\n"
  "  PORTC_PCR23  at 0x4004B05C\n"
  "  PORTC_PCR24  at 0x4004B060\n"
  "  PORTC_PCR25  at 0x4004B064\n"
  "  PORTC_PCR26  at 0x4004B068\n"
  "  PORTC_PCR27  at 0x4004B06C\n"
  "  PORTC_PCR28  at 0x4004B070\n"
  "  PORTC_PCR29  at 0x4004B074\n"
  "  PORTC_PCR30  at 0x4004B078\n"
  "  PORTC_PCR31  at 0x4004B07C\n"
  "  PORTD_PCR0   at 0x4004C000\n"
  "  PORTD_PCR1   at 0x4004C004\n"
  "  PORTD_PCR2   at 0x4004C008\n"
  "  PORTD_PCR3   at 0x4004C00C\n"
  "  PORTD_PCR4   at 0x4004C010\n"
  "  PORTD_PCR5   at 0x4004C014\n"
  "  PORTD_PCR6   at 0x4004C018\n"
  "  PORTD_PCR7   at 0x4004C01C\n"
  "  PORTD_PCR8   at 0x4004C020\n"
  "  PORTD_PCR9   at 0x4004C024\n"
  "  PORTD_PCR10  at 0x4004C028\n"
  "  PORTD_PCR11  at 0x4004C02C\n"
  "  PORTD_PCR12  at 0x4004C030\n"
  "  PORTD_PCR13  at 0x4004C034\n"
  "  PORTD_PCR14  at 0x4004C038\n"
  "  PORTD_PCR15  at 0x4004C03C\n"
  "  PORTD_PCR16  at 0x4004C040\n"
  "  PORTD_PCR17  at 0x4004C044\n"
  "  PORTD_PCR18  at 0x4004C048\n"
  "  PORTD_PCR19  at 0x4004C04C\n"
  "  PORTD_PCR20  at 0x4004C050\n"
  "  PORTD_PCR21  at 0x4004C054\n"
  "  PORTD_PCR22  at 0x4004C058\n"
  "  PORTD_PCR23  at 0x4004C05C\n"
  "  PORTD_PCR24  at 0x4004C060\n"
  "  PORTD_PCR25  at 0x4004C064\n"
  "  PORTD_PCR26  at 0x4004C068\n"
  "  PORTD_PCR27  at 0x4004C06C\n"
  "  PORTD_PCR28  at 0x4004C070\n"
  "  PORTD_PCR29  at 0x4004C074\n"
  "  PORTD_PCR30  at 0x4004C078\n"
  "  PORTD_PCR31  at 0x4004C07C\n"
  "  PORTE_PCR0   at 0x4004D000\n"
  "  PORTE_PCR1   at 0x4004D004\n"
  "  PORTE_PCR2   at 0x4004D008\n"
  "  PORTE_PCR3   at 0x4004D00C\n"
  "  PORTE_PCR4   at 0x4004D010\n"
  "  PORTE_PCR5   at 0x4004D014\n"
  "  PORTE_PCR6   at 0x4004D018\n"
  "  PORTE_PCR7   at 0x4004D01C\n"
  "  PORTE_PCR8   at 0x4004D020\n"
  "  PORTE_PCR9   at 0x4004D024\n"
  "  PORTE_PCR10  at 0x4004D028\n"
  "  PORTE_PCR11  at 0x4004D02C\n"
  "  PORTE_PCR12  at 0x4004D030\n"
  "  PORTE_PCR13  at 0x4004D034\n"
  "  PORTE_PCR14  at 0x4004D038\n"
  "  PORTE_PCR15  at 0x4004D03C\n"
  "  PORTE_PCR16  at 0x4004D040\n"
  "  PORTE_PCR17  at 0x4004D044\n"
  "  PORTE_PCR18  at 0x4004D048\n"
  "  PORTE_PCR19  at 0x4004D04C\n"
  "  PORTE_PCR20  at 0x4004D050\n"
  "  PORTE_PCR21  at 0x4004D054\n"
  "  PORTE_PCR22  at 0x4004D058\n"
  "  PORTE_PCR23  at 0x4004D05C\n"
  "  PORTE_PCR24  at 0x4004D060\n"
  "  PORTE_PCR25  at 0x4004D064\n"
  "  PORTE_PCR26  at 0x4004D068\n"
  "  PORTE_PCR27  at 0x4004D06C\n"
  "  PORTE_PCR28  at 0x4004D070\n"
  "  PORTE_PCR29  at 0x4004D074\n"
  "  PORTE_PCR30  at 0x4004D078\n"
  "  PORTE_PCR31  at 0x4004D07C\n"
  "$uint32 {\n"
  "  7, ISF, 4, IRQC[4], LK, 4, MUX[3], 1, DSE, ODE, PFE, 1, SRE, PE, PS\n"
  "}\n"
  "\n"
  "let PORT_PCR_ISF  $uint32  = 0x01000000  // Interrupt Status Flag\n"
  "//register $uint32 PORT_PCR_IRQC(n)   (((n) & 15) << 16) // Interrupt Configuration\n"
  "let PORT_PCR_IRQC_MASK  $uint32 = 0x000F0000\n"
  "let PORT_PCR_LK   $uint32 = 0x00008000  // Lock Register\n"
  "//register $uint32 PORT_PCR_MUX(n)    (((n) & 7) << 8) // Pin Mux Control\n"
  "let PORT_PCR_MUX_MASK $uint32 = 0x00000700\n"
  "let PORT_PCR_DSE      $uint32 = 0x00000040  // Drive Strength Enable\n"
  "let PORT_PCR_ODE      $uint32 = 0x00000020  // Open Drain Enable\n"
  "let PORT_PCR_PFE      $uint32 = 0x00000010  // Passive Filter Enable\n"
  "let PORT_PCR_SRE      $uint32 = 0x00000004  // Slew Rate Enable\n"
  "let PORT_PCR_PE       $uint32 = 0x00000002  // Pull Enable\n"
  "let PORT_PCR_PS       $uint32 = 0x00000001  // Pull Select\n"
  "\n"
  "register PORTA_GPCLR  at 0x40049080 $uint32 // Global Pin Control Low Register\n"
  "register PORTA_GPCHR  at 0x40049084 $uint32 // Global Pin Control High Register\n"
  "register PORTA_ISFR   at 0x400490A0 $uint32 // Interrupt Status Flag Register\n"
  "\n"
  "register PORTB_GPCLR  at 0x4004A080 $uint32 // Global Pin Control Low Register\n"
  "register PORTB_GPCHR  at 0x4004A084 $uint32 // Global Pin Control High Register\n"
  "register PORTB_ISFR   at 0x4004A0A0 $uint32 // Interrupt Status Flag Register\n"
  "\n"
  "register PORTC_GPCLR  at 0x4004B080 $uint32 // Global Pin Control Low Register\n"
  "register PORTC_GPCHR  at 0x4004B084 $uint32 // Global Pin Control High Register\n"
  "register PORTC_ISFR   at 0x4004B0A0 $uint32 // Interrupt Status Flag Register\n"
  "\n"
  "register PORTD_GPCLR  at 0x4004C080 $uint32 // Global Pin Control Low Register\n"
  "register PORTD_GPCHR  at 0x4004C084 $uint32 // Global Pin Control High Register\n"
  "register PORTD_ISFR   at 0x4004C0A0 $uint32 // Interrupt Status Flag Register\n"
  "\n"
  "register PORTE_GPCLR  at 0x4004D080 $uint32 // Global Pin Control Low Register\n"
  "register PORTE_GPCHR  at 0x4004D084 $uint32 // Global Pin Control High Register\n"
  "register PORTE_ISFR   at 0x4004D0A0 $uint32 // Interrupt Status Flag Register\n"
  "\n"
  "// Chapter 12: System Integration Module (SIM)\n"
  "register SIM_SOPT1    at 0x40047000 $uint32 // System Options Register 1\n"
  "register SIM_SOPT1CFG at 0x40047004 $uint32 // SOPT1 Configuration Register\n"
  "register SIM_SOPT2    at 0x40048004 $uint32 // System Options Register 2\n"
  "let SIM_SOPT2_USBSRC      $uint32 = 0x40000  // 0=USB_CLKIN, 1=FFL/PLL \n"
  "let SIM_SOPT2_PLLFLLSEL   $uint32 = 0x10000 // 0=FLL, 1=PLL\n"
  "let SIM_SOPT2_TRACECLKSEL $uint32 = 0x1000  // 0=MCGOUTCLK, 1=CPU\n"
  "let SIM_SOPT2_PTD7PAD     $uint32 = 0x800  // 0=normal, 1=double drive PTD7\n"
  "//register $uint32 SIM_SOPT2_CLKOUTSEL(n)   (((n) & 7) << 5) // Selects the clock to output on the CLKOUT pin.\n"
  "let SIM_SOPT2_RTCCLKOUTSEL $uint32 = 0x00000010  // RTC clock out select\n"
  "register SIM_SOPT4   at 0x4004800C $uint32 // System Options Register 4\n"
  "register SIM_SOPT5   at 0x40048010 $uint32 // System Options Register 5\n"
  "register SIM_SOPT7   at 0x40048018 $uint32 // System Options Register 7\n"
  "register SIM_SDID @ro at 0x40048024 $uint32 // System Device Identification Register\n"
  "register SIM_SCGC2  at 0x4004802C $uint32 // System Clock Gating Control Register 2\n"
  "let SIM_SCGC2_DAC0  $uint32 =  0x00001000 // DAC0 Clock Gate Control\n"
  "register SIM_SCGC3  at 0x40048030 $uint32 // System Clock Gating Control Register 3\n"
  "let SIM_SCGC3_ADC1 $uint32 =  0x08000000 // ADC1 Clock Gate Control\n"
  "let SIM_SCGC3_FTM2 $uint32 =  0x01000000 // FTM2 Clock Gate Control\n"
  "register SIM_SCGC4 at 0x40048034 $uint32 // System Clock Gating Control Register 4\n"
  "let SIM_SCGC4_VREF  $uint32 =  0x00100000  // VREF Clock Gate Control\n"
  "let SIM_SCGC4_CMP   $uint32 = 0x00080000  // Comparator Clock Gate Control\n"
  "let SIM_SCGC4_USBOTG  $uint32 = 0x00040000  // USB Clock Gate Control\n"
  "let SIM_SCGC4_UART2  $uint32 =  0x00001000  // UART2 Clock Gate Control\n"
  "let SIM_SCGC4_UART1  $uint32 =  0x00000800  // UART1 Clock Gate Control\n"
  "let SIM_SCGC4_UART0  $uint32 =  0x00000400  // UART0 Clock Gate Control\n"
  "let SIM_SCGC4_I2C1  $uint32 =  0x00000080  // I2C1 Clock Gate Control\n"
  "let SIM_SCGC4_I2C0  $uint32 =  0x00000040  // I2C0 Clock Gate Control\n"
  "let SIM_SCGC4_CMT  $uint32 =  0x00000004  // CMT Clock Gate Control\n"
  "let SIM_SCGC4_EWM  $uint32 =  0x00000002  // EWM Clock Gate Control\n"
  "register SIM_SCGC5 at 0x40048038 $uint32 // System Clock Gating Control Register 5\n"
  "let SIM_SCGC5_PORTE  $uint32 =  0x00002000  // Port E Clock Gate Control\n"
  "let SIM_SCGC5_PORTD  $uint32 =  0x00001000  // Port D Clock Gate Control\n"
  "let SIM_SCGC5_PORTC  $uint32 =  0x00000800  // Port C Clock Gate Control\n"
  "let SIM_SCGC5_PORTB  $uint32 =  0x00000400  // Port B Clock Gate Control\n"
  "let SIM_SCGC5_PORTA  $uint32 =  0x00000200  // Port A Clock Gate Control\n"
  "let SIM_SCGC5_TSI  $uint32 =  0x00000020  // Touch Sense Input TSI Clock Gate Control\n"
  "let SIM_SCGC5_LPTIMER  $uint32 =  0x00000001  // Low Power Timer Access Control\n"
  "register SIM_SCGC6 at 0x4004803C $uint32 // System Clock Gating Control Register 6\n"
  "let SIM_SCGC6_RTC   $uint32 = 0x20000000  // RTC Access\n"
  "let SIM_SCGC6_ADC0  $uint32 =   0x08000000  // ADC0 Clock Gate Control\n"
  "let SIM_SCGC6_FTM1  $uint32 =   0x02000000  // FTM1 Clock Gate Control\n"
  "let SIM_SCGC6_FTM0  $uint32 =   0x01000000  // FTM0 Clock Gate Control\n"
  "let SIM_SCGC6_PIT  $uint32 =  0x00800000  // PIT Clock Gate Control\n"
  "let SIM_SCGC6_PDB  $uint32 =  0x00400000  // PDB Clock Gate Control\n"
  "let SIM_SCGC6_USBDCD  $uint32=  0x00200000  // USB DCD Clock Gate Control\n"
  "let SIM_SCGC6_CRC  $uint32 =  0x00040000  // CRC Clock Gate Control\n"
  "let SIM_SCGC6_I2S  $uint32 =  0x00008000  // I2S Clock Gate Control\n"
  "let SIM_SCGC6_SPI1  $uint32=   0x00002000  // SPI1 Clock Gate Control\n"
  "let SIM_SCGC6_SPI0  $uint32=   0x00001000  // SPI0 Clock Gate Control\n"
  "let SIM_SCGC6_FLEXCAN0  $uint32 =  0x00000010  // FlexCAN0 Clock Gate Control\n"
  "let SIM_SCGC6_DMAMUX $uint32 =  0x00000002  // DMA Mux Clock Gate Control\n"
  "let SIM_SCGC6_FTFL  $uint32 =  0x00000001  // Flash Memory Clock Gate Control\n"
  "\n"
  "register SIM_SCGC7 at 0x40048040 $uint32 // System Clock Gating Control Register 7\n"
  "let SIM_SCGC7_DMA  $uint32 =  0x00000002  // DMA Clock Gate Control\n"
  "\n"
  "register SIM_CLKDIV1 at 0x4004_8044 $uint32 {// System Clock Divider Register 1\n"
  "  OUTDIV1[4], // Divide value for the core/system clock\n"
  "  OUTDIV2[4], // Divide value for the peripheral clock\n"
  "  4,\n"
  "  OUTDIV4[4], // Divide value for the flash clock\n"
  "  16\n"
  "}\n"
  "\n"
  "register SIM_CLKDIV2 at 0x40048048 $uint32 // System Clock Divider Register 2\n"
  "//register $uint32 SIM_CLKDIV2_USBDIV(n)   (((n) & 0x07) << 1)\n"
  "let SIM_CLKDIV2_USBFRAC  $uint32 =  0x01\n"
  "register SIM_FCFG1 @ro at 0x4004804C $uint32 // Flash Configuration Register 1\n"
  "register SIM_FCFG2 @ro at 0x40048050 $uint32 // Flash Configuration Register 2\n"
  "register SIM_UIDH  @ro at 0x40048054 $uint32 // Unique Identification Register High\n"
  "register SIM_UIDMH @ro at 0x40048058 $uint32 // Unique Identification Register Mid-High\n"
  "register SIM_UIDML @ro at 0x4004805C $uint32 // Unique Identification Register Mid Low\n"
  "register SIM_UIDL  @ro at 0x40048060 $uint32 // Unique Identification Register Low\n"
  "\n"
  "// Chapter 13: Reset Control Module (RCM)\n"
  "register RCM_SRS0 at 0x4007F000 $uint8 // System Reset Status Register 0\n"
  "register RCM_SRS1 at 0x4007F001 $uint8 // System Reset Status Register 1\n"
  "register RCM_RPFC at 0x4007F004 $uint8 // Reset Pin Filter Control Register\n"
  "register RCM_RPFW at 0x4007F005 $uint8 // Reset Pin Filter Width Register\n"
  "register RCM_MR   at 0x4007F007 $uint8 // Mode Register\n"
  "\n"
  "// Chapter 14: System Mode Controller\n"
  "register SMC_PMPROT  at 0x4007E000 $uint8 // Power Mode Protection Register\n"
  "let SMC_PMPROT_AVLP  $uint8 = 0x20   // Allow very low power modes\n"
  "let SMC_PMPROT_ALLS $uint8  = 0x08   // Allow low leakage stop mode\n"
  "let SMC_PMPROT_AVLLS $uint8 = 0x02   // Allow very low leakage stop mode\n"
  "\n"
  "register SMC_PMCTRL  at 0x4007E001 $uint8 // Power Mode Control Register\n"
  "let SMC_PMCTRL_LPWUI $uint8  = 0x80   // Low Power Wake Up on Interrupt\n"
  "//register $uint8 SMC_PMCTRL_RUNM(n)  ($uint8_t)(((n) & 0x03) << 5) // Run Mode Control\n"
  "let SMC_PMCTRL_STOPA $uint8  = 0x08   // Stop Aborted\n"
  "//register $uint8 SMC_PMCTRL_STOPM(n)  ($uint8_t)((n) & 0x07)  // Stop Mode Control\n"
  "\n"
  "register SMC_VLLSCTRL at 0x4007E002 $uint8 // VLLS Control Register\n"
  "let SMC_VLLSCTRL_PORPO $uint8 = 0x20   // POR Power Option\n"
  "//let $uint8 SMC_VLLSCTRL_VLLSM(n)  ($uint8_t)((n) & 0x07)  // VLLS Mode Control\n"
  "\n"
  "register SMC_PMST at 0x4007E003 $uint8 // Power Mode Status Register\n"
  "let SMC_PMSTAT_RUN  $uint8 = 0x01   // Current power mode is RUN\n"
  "let SMC_PMSTAT_STOP $uint8 = 0x02   // Current power mode is STOP\n"
  "let SMC_PMSTAT_VLPR $uint8 = 0x04   // Current power mode is VLPR\n"
  "let SMC_PMSTAT_VLPW $uint8 = 0x08   // Current power mode is VLPW\n"
  "let SMC_PMSTAT_VLPS $uint8 = 0x10   // Current power mode is VLPS\n"
  "let SMC_PMSTAT_LLS  $uint8 = 0x20   // Current power mode is LLS\n"
  "let SMC_PMSTAT_VLLS $uint8 = 0x40   // Current power mode is VLLS\n"
  "\n"
  "// Chapter 15: Power Management Controller\n"
  "register PMC_LVDSC1 at 0x4007D000 $uint8 // Low Voltage Detect Status And Control 1 register\n"
  "let PMC_LVDSC1_LVDF $uint8 = 0x80   // Low-Voltage Detect Flag\n"
  "let PMC_LVDSC1_LVDACK $uint8 = 0x40   // Low-Voltage Detect Acknowledge\n"
  "let PMC_LVDSC1_LVDIE $uint8 = 0x20   // Low-Voltage Detect Interrupt Enable\n"
  "let PMC_LVDSC1_LVDRE $uint8 = 0x10   // Low-Voltage Detect Reset Enable\n"
  "//let $uint8 PMC_LVDSC1_LVDV(n)  ($uint8_t)((n) & 0x03)  // Low-Voltage Detect Voltage Select\n"
  "register PMC_LVDSC2 at 0x4007D001 $uint8 // Low Voltage Detect Status And Control 2 register\n"
  "let PMC_LVDSC2_LVWF $uint8  = 0x80   // Low-Voltage Warning Flag\n"
  "let PMC_LVDSC2_LVWACK $uint8 = 0x40   // Low-Voltage Warning Acknowledge\n"
  "let PMC_LVDSC2_LVWIE $uint8 = 0x20   // Low-Voltage Warning Interrupt Enable\n"
  "//let $uint8 PMC_LVDSC2_LVWV(n)  ($uint8_t)((n) & 0x03)  // Low-Voltage Warning Voltage Select\n"
  "\n"
  "register PMC_REGSC at 0x4007D002 $uint8 { // Regulator Status And Control register\n"
  "  3, BGEN, ACKISO, REGONS, BGBE, 1\n"
  "}\n"
  "\n"
  "// Chapter 16: Low-Leakage Wakeup Unit (LLWU)\n"
  "register LLWU_PE1  at 0x4007C000 $uint8 // LLWU Pin Enable 1 register\n"
  "register LLWU_PE2  at 0x4007C001 $uint8 // LLWU Pin Enable 2 register\n"
  "register LLWU_PE3  at 0x4007C002 $uint8 // LLWU Pin Enable 3 register\n"
  "register LLWU_PE4  at 0x4007C003 $uint8 // LLWU Pin Enable 4 register\n"
  "register LLWU_ME   at 0x4007C004 $uint8 // LLWU Module Enable register\n"
  "register LLWU_F1   at 0x4007C005 $uint8 // LLWU Flag 1 register\n"
  "register LLWU_F2   at 0x4007C006 $uint8 // LLWU Flag 2 register\n"
  "register LLWU_F3   at 0x4007C007 $uint8 // LLWU Flag 3 register\n"
  "register LLWU_FILT1 at 0x4007C008 $uint8 // LLWU Pin Filter 1 register\n"
  "register LLWU_FILT2 at 0x4007C009 $uint8 // LLWU Pin Filter 2 register\n"
  "register LLWU_RST  at 0x4007C00A $uint8 // LLWU Reset Enable register\n"
  "\n"
  "// Chapter 17: Miscellaneous Control Module (MCM)\n"
  "register MCM_PLASC at 0xE0080008 $uint16 // Crossbar Switch (AXBS) Slave Configuration\n"
  "\n"
  "register MCM_PLAMC at 0xE008000A $uint16 // Crossbar Switch (AXBS) Master Configuration\n"
  "\n"
  "register MCM_PLACR at 0xE008000C $uint32 // Crossbar Switch (AXBS) Control Register (MK20DX128)\n"
  "let MCM_PLACR_ARG   $uint32 = 0x00000200  // Arbitration select, 0=fixed, 1=round-robin\n"
  "\n"
  "register MCM_CR at 0xE008000C $uint32 // RAM arbitration control register (MK20DX256)\n"
  "let MCM_CR_SRAMLWP  $uint32 =  0x4000_0000  // SRAM_L write protect\n"
  "//let $uint32 MCM_CR_SRAMLAP(n)   (((n) & 0x03) << 28) // SRAM_L priority, 0=RR, 1=favor DMA, 2=CPU, 3=DMA\n"
  "let MCM_CR_SRAMUWP  $uint32 =  0x0400_0000  // SRAM_U write protect\n"
  "//let $uint32 MCM_CR_SRAMUAP(n)   (((n) & 0x03) << 24) // SRAM_U priority, 0=RR, 1=favor DMA, 2=CPU, 3=DMA\n"
  "\n"
  "// Crossbar Switch (AXBS) - only programmable on MK20DX256\n"
  "register AXBS_PRS0   at 0x40004000 $uint32 // Priority Registers Slave 0\n"
  "register AXBS_CRS0   at 0x40004010 $uint32 // Control Register 0\n"
  "register AXBS_PRS1   at 0x40004100 $uint32 // Priority Registers Slave 1\n"
  "register AXBS_CRS1   at 0x40004110 $uint32 // Control Register 1\n"
  "register AXBS_PRS2   at 0x40004200 $uint32 // Priority Registers Slave 2\n"
  "register AXBS_CRS2   at 0x40004210 $uint32 // Control Register 2\n"
  "register AXBS_PRS3   at 0x40004300 $uint32 // Priority Registers Slave 3\n"
  "register AXBS_CRS3   at 0x40004310 $uint32 // Control Register 3\n"
  "register AXBS_PRS4   at 0x40004400 $uint32 // Priority Registers Slave 4\n"
  "register AXBS_CRS4   at 0x40004410 $uint32 // Control Register 4\n"
  "register AXBS_PRS5   at 0x40004500 $uint32 // Priority Registers Slave 5\n"
  "register AXBS_CRS5   at 0x40004510 $uint32 // Control Register 5\n"
  "register AXBS_PRS6   at 0x40004600 $uint32 // Priority Registers Slave 6\n"
  "register AXBS_CRS6   at 0x40004610 $uint32 // Control Register 6\n"
  "register AXBS_PRS7   at 0x40004700 $uint32 // Priority Registers Slave 7\n"
  "register AXBS_CRS7   at 0x40004710 $uint32 // Control Register 7\n"
  "register AXBS_MGPCR0 at 0x40004800 $uint32 // Master 0 General Purpose Control Register\n"
  "register AXBS_MGPCR1 at 0x40004900 $uint32 // Master 1 General Purpose Control Register\n"
  "register AXBS_MGPCR2 at 0x40004A00 $uint32 // Master 2 General Purpose Control Register\n"
  "register AXBS_MGPCR3 at 0x40004B00 $uint32 // Master 3 General Purpose Control Register\n"
  "register AXBS_MGPCR4 at 0x40004C00 $uint32 // Master 4 General Purpose Control Register\n"
  "register AXBS_MGPCR5 at 0x40004D00 $uint32 // Master 5 General Purpose Control Register\n"
  "register AXBS_MGPCR6 at 0x40004E00 $uint32 // Master 6 General Purpose Control Register\n"
  "register AXBS_MGPCR7 at 0x40004F00 $uint32 // Master 7 General Purpose Control Register\n"
  "let AXBS_CRS_READONLY  $uint32=  0x80000000\n"
  "let AXBS_CRS_HALTLOWPRIORITY  $uint32 = 0x40000000\n"
  "let AXBS_CRS_ARB_FIXED  $uint32 = 0x00000000\n"
  "let AXBS_CRS_ARB_ROUNDROBIN  $uint32 = 0x00010000\n"
  "let AXBS_CRS_PARK_FIXED  $uint32 =  0x00000000\n"
  "let AXBS_CRS_PARK_PREVIOUS  $uint32 =  0x00000010\n"
  "let AXBS_CRS_PARK_NONE  $uint32 =  0x00000020\n"
  "//let $uint32 AXBS_CRS_PARK(n)   (((n) & 7) << 0)\n"
  "\n"
  "\n"
  "\n"
  "// Chapter 20: Direct Memory Access Multiplexer (DMAMUX)\n"
  "register DMAMUX0_CHCFG0  at 0x40021000 $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG1  at 0x40021001 $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG2  at 0x40021002 $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG3  at 0x40021003 $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG4  at 0x40021004 $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG5  at 0x40021005 $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG6  at 0x40021006 $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG7  at 0x40021007 $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG8  at 0x40021008 $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG9  at 0x40021009 $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG10 at 0x4002100A $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG11 at 0x4002100B $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG12 at 0x4002100C $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG13 at 0x4002100D $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG14 at 0x4002100E $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG15 at 0x4002100F $uint8 // Channel Configuration register\n"
  "let DMAMUX_DISABLE $uint8 =  0\n"
  "let DMAMUX_TRIG  $uint8 = 64\n"
  "let DMAMUX_ENABLE $uint8 =  128\n"
  "let DMAMUX_SOURCE_UART0_RX $uint8 = 2\n"
  "let DMAMUX_SOURCE_UART0_TX $uint8 = 3\n"
  "let DMAMUX_SOURCE_UART1_RX $uint8 = 4\n"
  "let DMAMUX_SOURCE_UART1_TX $uint8 = 5\n"
  "let DMAMUX_SOURCE_UART2_RX $uint8 = 6\n"
  "let DMAMUX_SOURCE_UART2_TX $uint8 = 7\n"
  "let DMAMUX_SOURCE_I2S0_RX  $uint8 =14\n"
  "let DMAMUX_SOURCE_I2S0_TX  $uint8 =15\n"
  "let DMAMUX_SOURCE_SPI0_RX  $uint8 =16\n"
  "let DMAMUX_SOURCE_SPI0_TX  $uint8 =17\n"
  "let DMAMUX_SOURCE_I2C0  $uint8 =22\n"
  "let DMAMUX_SOURCE_I2C1  $uint8 =23\n"
  "let DMAMUX_SOURCE_FTM0_CH0 $uint8 = 24\n"
  "let DMAMUX_SOURCE_FTM0_CH1 $uint8 = 25\n"
  "let DMAMUX_SOURCE_FTM0_CH2 $uint8 = 26\n"
  "let DMAMUX_SOURCE_FTM0_CH3 $uint8 = 27\n"
  "let DMAMUX_SOURCE_FTM0_CH4 $uint8 = 28\n"
  "let DMAMUX_SOURCE_FTM0_CH5 $uint8 = 29\n"
  "let DMAMUX_SOURCE_FTM0_CH6 $uint8 = 30\n"
  "let DMAMUX_SOURCE_FTM0_CH7 $uint8 = 31\n"
  "let DMAMUX_SOURCE_FTM1_CH0 $uint8 = 32\n"
  "let DMAMUX_SOURCE_FTM1_CH1 $uint8 = 33\n"
  "let DMAMUX_SOURCE_FTM2_CH0 $uint8 = 34\n"
  "let DMAMUX_SOURCE_FTM2_CH1 $uint8 = 35\n"
  "let DMAMUX_SOURCE_ADC0 $uint8 = 40\n"
  "let DMAMUX_SOURCE_ADC1 $uint8 = 41\n"
  "let DMAMUX_SOURCE_CMP0 $uint8 = 42\n"
  "let DMAMUX_SOURCE_CMP1 $uint8 = 43\n"
  "let DMAMUX_SOURCE_CMP2 $uint8 = 44\n"
  "let DMAMUX_SOURCE_DAC0 $uint8 = 45\n"
  "let DMAMUX_SOURCE_CMT  $uint8 = 47\n"
  "let DMAMUX_SOURCE_PDB  $uint8 = 48\n"
  "let DMAMUX_SOURCE_PORTA $uint8 = 49\n"
  "let DMAMUX_SOURCE_PORTB $uint8 = 50\n"
  "let DMAMUX_SOURCE_PORTC $uint8 = 51\n"
  "let DMAMUX_SOURCE_PORTD $uint8 = 52\n"
  "let DMAMUX_SOURCE_PORTE $uint8 = 53\n"
  "let DMAMUX_SOURCE_ALWAYS0 $uint8 = 54\n"
  "let DMAMUX_SOURCE_ALWAYS1 $uint8 = 55\n"
  "let DMAMUX_SOURCE_ALWAYS2 $uint8 = 56\n"
  "let DMAMUX_SOURCE_ALWAYS3 $uint8 = 57\n"
  "let DMAMUX_SOURCE_ALWAYS4 $uint8 = 58\n"
  "let DMAMUX_SOURCE_ALWAYS5 $uint8 = 59\n"
  "let DMAMUX_SOURCE_ALWAYS6 $uint8 = 60\n"
  "let DMAMUX_SOURCE_ALWAYS7 $uint8 = 61\n"
  "let DMAMUX_SOURCE_ALWAYS8 $uint8 = 62\n"
  "let DMAMUX_SOURCE_ALWAYS9 $uint8 = 63\n"
  "\n"
  "// Chapter 21: Direct Memory Access Controller (eDMA)\n"
  "register DMA_CR at 0x40008000 $uint32 // Control Register\n"
  "let DMA_CR_CX   $uint32  = 0x2_0000 // Cancel Transfer\n"
  "let DMA_CR_ECX   $uint32 = 0x1_0000 // Error Cancel Transfer\n"
  "let DMA_CR_EMLM   $uint32= 0x80 // Enable Minor Loop Mapping\n"
  "let DMA_CR_CLM   $uint32 = 0x40 // Continuous Link Mode\n"
  "let DMA_CR_HALT  $uint32 = 0x20 // Halt DMA Operations\n"
  "let DMA_CR_HOE   $uint32 = 0x10 // Halt On Error\n"
  "let DMA_CR_ERCA  $uint32 = 0x04 // Enable Round Robin Channel Arbitration\n"
  "let DMA_CR_EDBG   $uint32= 0x02 // Enable Debug\n"
  "register DMA_ES  at 0x40008004 $uint32 // Error Status Register\n"
  "register DMA_ERQ at 0x4000800C $uint32 // Enable Request Register\n"
  "let DMA_ERQ_ERQ0   $uint32 = 1 // Enable DMA Request 0\n"
  "let DMA_ERQ_ERQ1   $uint32 = 2 // Enable DMA Request 1\n"
  "let DMA_ERQ_ERQ2   $uint32 = 4 // Enable DMA Request 2\n"
  "let DMA_ERQ_ERQ3   $uint32 = 8 // Enable DMA Request 3\n"
  "register DMA_EEI at 0x40008014 $uint8 // Enable Error Interrupt Register\n"
  "let DMA_EEI_EEI0   $uint32 = 1 // Enable Error Interrupt 0\n"
  "let DMA_EEI_EEI1   $uint32 = 2 // Enable Error Interrupt 1\n"
  "let DMA_EEI_EEI2   $uint32 = 4 // Enable Error Interrupt 2\n"
  "let DMA_EEI_EEI3   $uint32 = 8 // Enable Error Interrupt 3\n"
  "//register $uint8 DMA_CEEI  *(volatile $uint8_t  *)0x40008018 // Clear Enable Error Interrupt Register\n"
  "//register $uint32 DMA_CEEI_CEEI(n)  (($uint8_t)(n & 3)<<0) // Clear Enable Error Interrupt\n"
  "//register $uint32 DMA_CEEI_CAEE   (($uint8_t)1<<6)  // Clear All Enable Error Interrupts\n"
  "//register $uint32 DMA_CEEI_NOP   (($uint8_t)1<<7)  // NOP\n"
  "//register $uint32 DMA_SEEI  *(volatile $uint8_t  *)0x40008019 // Set Enable Error Interrupt Register\n"
  "//register $uint32 DMA_SEEI_SEEI(n)  (($uint8_t)(n & 3)<<0) // Set Enable Error Interrupt\n"
  "//register $uint32 DMA_SEEI_SAEE   (($uint8_t)1<<6)  // Set All Enable Error Interrupts\n"
  "//register $uint32 DMA_SEEI_NOP   (($uint8_t)1<<7)  // NOP\n"
  "//register $uint32 DMA_CERQ  *(volatile $uint8_t  *)0x4000801A // Clear Enable Request Register\n"
  "//register $uint32 DMA_CERQ_CERQ(n)  (($uint8_t)(n & 3)<<0) // Clear Enable Request\n"
  "//register $uint32 DMA_CERQ_CAER   (($uint8_t)1<<6)  // Clear All Enable Requests\n"
  "//register $uint32 DMA_CERQ_NOP   (($uint8_t)1<<7)  // NOP\n"
  "//register $uint32 DMA_SERQ  *(volatile $uint8_t  *)0x4000801B // Set Enable Request Register\n"
  "//register $uint32 DMA_SERQ_SERQ(n)  (($uint8_t)(n & 3)<<0) // Set Enable Request\n"
  "//register $uint32 DMA_SERQ_SAER   (($uint8_t)1<<6)  // Set All Enable Requests\n"
  "//register $uint32 DMA_SERQ_NOP   (($uint8_t)1<<7)  // NOP\n"
  "//register $uint32 DMA_CDNE  *(volatile $uint8_t  *)0x4000801C // Clear DONE Status Bit Register\n"
  "//register $uint32 DMA_CDNE_CDNE(n)  (($uint8_t)(n & 3)<<0) // Clear Done Bit\n"
  "//register $uint32 DMA_CDNE_CADN   (($uint8_t)1<<6)  // Clear All Done Bits\n"
  "//register $uint32 DMA_CDNE_NOP   (($uint8_t)1<<7)  // NOP\n"
  "//register $uint32 DMA_SSRT  *(volatile $uint8_t  *)0x4000801D // Set START Bit Register\n"
  "//register $uint32 DMA_SSRT_SSRT(n)  (($uint8_t)(n & 3)<<0) // Set Start Bit\n"
  "//register $uint32 DMA_SSRT_SAST   (($uint8_t)1<<6)  // Set All Start Bits\n"
  "//register $uint32 DMA_SSRT_NOP   (($uint8_t)1<<7)  // NOP\n"
  "//register $uint32 DMA_CERR  *(volatile $uint8_t  *)0x4000801E // Clear Error Register\n"
  "//register $uint32 DMA_CERR_CERR(n)  (($uint8_t)(n & 3)<<0) // Clear Error Indicator\n"
  "//register $uint32 DMA_CERR_CAEI   (($uint8_t)1<<6)  // Clear All Error Indicators\n"
  "//register $uint32 DMA_CERR_NOP   (($uint8_t)1<<7)  // NOP\n"
  "//register $uint32 DMA_CINT  *(volatile $uint8_t  *)0x4000801F // Clear Interrupt Request Register\n"
  "//register $uint32 DMA_CINT_CINT(n)  (($uint8_t)(n & 3)<<0) // Clear Interrupt Request\n"
  "//register $uint32 DMA_CINT_CAIR   (($uint8_t)1<<6)  // Clear All Interrupt Requests\n"
  "//register $uint32 DMA_CINT_NOP   (($uint8_t)1<<7)  // NOP\n"
  "//register $uint32 DMA_INT    0x40008024 // Interrupt Request Register\n"
  "//register $uint32 DMA_INT_INT0   ( 1<<0) // Interrupt Request 0\n"
  "//register $uint32 DMA_INT_INT1   ( 1<<1) // Interrupt Request 1\n"
  "//register $uint32 DMA_INT_INT2   ( 1<<2) // Interrupt Request 2\n"
  "//register $uint32 DMA_INT_INT3   ( 1<<3) // Interrupt Request 3\n"
  "//register $uint32 DMA_ERR    0x4000802C // Error Register\n"
  "//register $uint32 DMA_ERR_ERR0   ( 1<<0) // Error in Channel 0\n"
  "//register $uint32 DMA_ERR_ERR1   ( 1<<1) // Error in Channel 1\n"
  "//register $uint32 DMA_ERR_ERR2   ( 1<<2) // Error in Channel 2\n"
  "//register $uint32 DMA_ERR_ERR3   ( 1<<3) // Error in Channel 3\n"
  "//register $uint32 DMA_HRS    0x40008034 // Hardware Request Status Register\n"
  "//register $uint32 DMA_HRS_HRS0   ( 1<<0) // Hardware Request Status Channel 0\n"
  "//register $uint32 DMA_HRS_HRS1   ( 1<<1) // Hardware Request Status Channel 1\n"
  "//register $uint32 DMA_HRS_HRS2   ( 1<<2) // Hardware Request Status Channel 2\n"
  "//register $uint32 DMA_HRS_HRS3   ( 1<<3) // Hardware Request Status Channel 3\n"
  "//register $uint32 DMA_DCHPRI3  *(volatile $uint8_t  *)0x40008100 // Channel n Priority Register\n"
  "//register $uint32 DMA_DCHPRI2  *(volatile $uint8_t  *)0x40008101 // Channel n Priority Register\n"
  "//register $uint32 DMA_DCHPRI1  *(volatile $uint8_t  *)0x40008102 // Channel n Priority Register\n"
  "//register $uint32 DMA_DCHPRI0  *(volatile $uint8_t  *)0x40008103 // Channel n Priority Register\n"
  "//register $uint32 DMA_DCHPRI_CHPRI(n)  (($uint8_t)(n & 3)<<0) // Channel Arbitration Priority\n"
  "//register $uint32 DMA_DCHPRI_DPA   (($uint8_t)1<<6)  // Disable PreEmpt Ability\n"
  "//register $uint32 DMA_DCHPRI_ECP   (($uint8_t)1<<7)  // Enable PreEmption\n"
  "//\n"
  "//\n"
  "//register DMA_TCD_ATTR_SMOD(n)  (((n) & 0x1F) << 11)\n"
  "//register DMA_TCD_ATTR_SSIZE(n)  (((n) & 0x7) << 8)\n"
  "//register DMA_TCD_ATTR_DMOD(n)  (((n) & 0x1F) << 3)\n"
  "//register DMA_TCD_ATTR_DSIZE(n)  (((n) & 0x7) << 0)\n"
  "//register DMA_TCD_ATTR_SIZE_8BIT  0\n"
  "//register DMA_TCD_ATTR_SIZE_16BIT  1\n"
  "//register DMA_TCD_ATTR_SIZE_32BIT  2\n"
  "//register DMA_TCD_ATTR_SIZE_16BYTE 4\n"
  "//register DMA_TCD_ATTR_SIZE_32BYTE 5\n"
  "//register DMA_TCD_CSR_BWC(n)  (((n) & 0x3) << 14)\n"
  "//register DMA_TCD_CSR_MAJORLINKCH(n) (((n) & 0x3) << 8)\n"
  "//register DMA_TCD_CSR_DONE  0x0080\n"
  "//register DMA_TCD_CSR_ACTIVE  0x0040\n"
  "//register DMA_TCD_CSR_MAJORELINK  0x0020\n"
  "//register DMA_TCD_CSR_ESG   0x0010\n"
  "//register DMA_TCD_CSR_DREQ  0x0008\n"
  "//register DMA_TCD_CSR_INTHALF  0x0004\n"
  "//register DMA_TCD_CSR_INTMAJOR  0x0002\n"
  "//register DMA_TCD_CSR_START  0x0001\n"
  "//register DMA_TCD_CITER_MASK      (($uint16_t)0x7FFF)    // Loop count mask\n"
  "//register DMA_TCD_CITER_ELINK      (($uint16_t)1<<15)    // Enable channel linking on minor-loop complete\n"
  "//register DMA_TCD_BITER_MASK      (($uint16_t)0x7FFF)    // Loop count mask\n"
  "//register DMA_TCD_BITER_ELINK      (($uint16_t)1<<15)    // Enable channel linking on minor-loop complete\n"
  "//register DMA_TCD_NBYTES_SMLOE      ( 1<<31)      // Source Minor Loop Offset Enable\n"
  "//register DMA_TCD_NBYTES_DMLOE      ( 1<<30)      // Destination Minor Loop Offset Enable\n"
  "//register DMA_TCD_NBYTES_MLOFFNO_NBYTES(n)    ( (n))      // NBytes transfer count when minor loop disabled\n"
  "//register DMA_TCD_NBYTES_MLOFFYES_NBYTES(n)   ( (n & 0x1F))     // NBytes transfer count when minor loop enabled\n"
  "//register DMA_TCD_NBYTES_MLOFFYES_MLOFF(n)    ( (n & 0xFFFFF)<<10)   // Offset \n"
  "//\n"
  "//register DMA_TCD0_SADDR  *(volatile const void * volatile *)0x40009000 // TCD Source Address\n"
  "//register DMA_TCD0_SOFF  *(volatile int16_t *)0x40009004  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD0_ATTR  *(volatile $uint16_t *)0x40009006 // TCD Transfer Attributes\n"
  "//register DMA_TCD0_NBYTES_MLNO  0x40009008 // TCD Minor Byte Count (Minor Loop Disabled)\n"
  "//register DMA_TCD0_NBYTES_MLOFFNO  0x40009008 // TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)\n"
  "//register DMA_TCD0_NBYTES_MLOFFYES  0x40009008 // TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)\n"
  "//register DMA_TCD0_SLAST  *(volatile int32_t *)0x4000900C  // TCD Last Source Address Adjustment\n"
  "//register DMA_TCD0_DADDR  *(volatile void * volatile *)0x40009010 // TCD Destination Address\n"
  "//register DMA_TCD0_DOFF  *(volatile int16_t *)0x40009014  // TCD Signed Destination Address Offset\n"
  "//register DMA_TCD0_CITER_ELINKYES *(volatile $uint16_t *)0x40009016 // TCD Current Minor Loop Link, Major Loop Count, Channel Linking Enabled\n"
  "//register DMA_TCD0_CITER_ELINKNO *(volatile $uint16_t *)0x40009016 // \?\?\n"
  "//register DMA_TCD0_DLASTSGA *(volatile int32_t *)0x40009018  // TCD Last Destination Address Adjustment/Scatter Gather Address\n"
  "//register DMA_TCD0_CSR  *(volatile $uint16_t *)0x4000901C // TCD Control and Status\n"
  "//register DMA_TCD0_BITER_ELINKYES *(volatile $uint16_t *)0x4000901E // TCD Beginning Minor Loop Link, Major Loop Count, Channel Linking Enabled\n"
  "//register DMA_TCD0_BITER_ELINKNO *(volatile $uint16_t *)0x4000901E // TCD Beginning Minor Loop Link, Major Loop Count, Channel Linking Disabled\n"
  "//\n"
  "//register DMA_TCD1_SADDR  *(volatile const void * volatile *)0x40009020 // TCD Source Address\n"
  "//register DMA_TCD1_SOFF  *(volatile int16_t *)0x40009024  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD1_ATTR  *(volatile $uint16_t *)0x40009026 // TCD Transfer Attributes\n"
  "//register DMA_TCD1_NBYTES_MLNO  0x40009028 // TCD Minor Byte Count, Minor Loop Disabled\n"
  "//register DMA_TCD1_NBYTES_MLOFFNO  0x40009028 // TCD Signed Minor Loop Offset, Minor Loop Enabled and Offset Disabled\n"
  "//register DMA_TCD1_NBYTES_MLOFFYES  0x40009028 // TCD Signed Minor Loop Offset, Minor Loop and Offset Enabled\n"
  "//register DMA_TCD1_SLAST  *(volatile int32_t *)0x4000902C  // TCD Last Source Address Adjustment\n"
  "//register DMA_TCD1_DADDR  *(volatile void * volatile *)0x40009030 // TCD Destination Address\n"
  "//register DMA_TCD1_DOFF  *(volatile int16_t *)0x40009034  // TCD Signed Destination Address Offset\n"
  "//register DMA_TCD1_CITER_ELINKYES *(volatile $uint16_t *)0x40009036 // TCD Current Minor Loop Link, Major Loop Count, Channel Linking Enabled\n"
  "//register DMA_TCD1_CITER_ELINKNO *(volatile $uint16_t *)0x40009036 // \?\?\n"
  "//register DMA_TCD1_DLASTSGA *(volatile int32_t *)0x40009038  // TCD Last Destination Address Adjustment/Scatter Gather Address\n"
  "//register DMA_TCD1_CSR  *(volatile $uint16_t *)0x4000903C // TCD Control and Status\n"
  "//register DMA_TCD1_BITER_ELINKYES *(volatile $uint16_t *)0x4000903E // TCD Beginning Minor Loop Link, Major Loop Count Channel Linking Enabled\n"
  "//register DMA_TCD1_BITER_ELINKNO *(volatile $uint16_t *)0x4000903E // TCD Beginning Minor Loop Link, Major Loop Count, Channel Linking Disabled\n"
  "//\n"
  "//register DMA_TCD2_SADDR  *(volatile const void * volatile *)0x40009040 // TCD Source Address\n"
  "//register DMA_TCD2_SOFF  *(volatile int16_t *)0x40009044  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD2_ATTR  *(volatile $uint16_t *)0x40009046 // TCD Transfer Attributes\n"
  "//register DMA_TCD2_NBYTES_MLNO  0x40009048 // TCD Minor Byte Count, Minor Loop Disabled\n"
  "//register DMA_TCD2_NBYTES_MLOFFNO  0x40009048 // TCD Signed Minor Loop Offset, Minor Loop Enabled and Offset Disabled\n"
  "//register DMA_TCD2_NBYTES_MLOFFYES  0x40009048 // TCD Signed Minor Loop Offset, Minor Loop and Offset Enabled\n"
  "//register DMA_TCD2_SLAST  *(volatile int32_t *)0x4000904C  // TCD Last Source Address Adjustment\n"
  "//register DMA_TCD2_DADDR  *(volatile void * volatile *)0x40009050 // TCD Destination Address\n"
  "//register DMA_TCD2_DOFF  *(volatile int16_t *)0x40009054  // TCD Signed Destination Address Offset\n"
  "//register DMA_TCD2_CITER_ELINKYES *(volatile $uint16_t *)0x40009056 // TCD Current Minor Loop Link, Major Loop Count, Channel Linking Enabled\n"
  "//register DMA_TCD2_CITER_ELINKNO *(volatile $uint16_t *)0x40009056 // \?\?\n"
  "//register DMA_TCD2_DLASTSGA *(volatile int32_t *)0x40009058  // TCD Last Destination Address Adjustment/Scatter Gather Address\n"
  "//register DMA_TCD2_CSR  *(volatile $uint16_t *)0x4000905C // TCD Control and Status\n"
  "//register DMA_TCD2_BITER_ELINKYES *(volatile $uint16_t *)0x4000905E // TCD Beginning Minor Loop Link, Major Loop Count, Channel Linking Enabled\n"
  "//register DMA_TCD2_BITER_ELINKNO *(volatile $uint16_t *)0x4000905E // TCD Beginning Minor Loop Link, Major Loop Count, Channel Linking Disabled\n"
  "//\n"
  "//register DMA_TCD3_SADDR  *(volatile const void * volatile *)0x40009060 // TCD Source Address\n"
  "//register DMA_TCD3_SOFF  *(volatile int16_t *)0x40009064  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD3_ATTR  *(volatile $uint16_t *)0x40009066 // TCD Transfer Attributes\n"
  "//register DMA_TCD3_NBYTES_MLNO  0x40009068 // TCD Minor Byte Count, Minor Loop Disabled\n"
  "//register DMA_TCD3_NBYTES_MLOFFNO  0x40009068 // TCD Signed Minor Loop Offset, Minor Loop Enabled and Offset Disabled\n"
  "//register DMA_TCD3_NBYTES_MLOFFYES  0x40009068 // TCD Signed Minor Loop Offset, Minor Loop and Offset Enabled\n"
  "//register DMA_TCD3_SLAST  *(volatile int32_t *)0x4000906C  // TCD Last Source Address Adjustment\n"
  "//register DMA_TCD3_DADDR  *(volatile void * volatile *)0x40009070 // TCD Destination Address\n"
  "//register DMA_TCD3_DOFF  *(volatile int16_t *)0x40009074  // TCD Signed Destination Address Offset\n"
  "//register DMA_TCD3_CITER_ELINKYES *(volatile $uint16_t *)0x40009076 // TCD Current Minor Loop Link, Major Loop Count, Channel Linking Enabled\n"
  "//register DMA_TCD3_CITER_ELINKNO *(volatile $uint16_t *)0x40009076 // \?\?\n"
  "//register DMA_TCD3_DLASTSGA *(volatile int32_t *)0x40009078  // TCD Last Destination Address Adjustment/Scatter Gather Address\n"
  "//register DMA_TCD3_CSR  *(volatile $uint16_t *)0x4000907C // TCD Control and Status\n"
  "//register DMA_TCD3_BITER_ELINKYES *(volatile $uint16_t *)0x4000907E // TCD Beginning Minor Loop Link, Major Loop Count ,Channel Linking Enabled\n"
  "//register DMA_TCD3_BITER_ELINKNO *(volatile $uint16_t *)0x4000907E // TCD Beginning Minor Loop Link, Major Loop Count ,Channel Linking Disabled\n"
  "//\n"
  "//register DMA_TCD4_SADDR  *(volatile const void * volatile *)0x40009080 // TCD Source Addr\n"
  "//register DMA_TCD4_SOFF  *(volatile int16_t *)0x40009084  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD4_ATTR  *(volatile $uint16_t *)0x40009086 // TCD Transfer Attributes\n"
  "//register DMA_TCD4_NBYTES_MLNO  0x40009088 // TCD Minor Byte Count\n"
  "//register DMA_TCD4_NBYTES_MLOFFNO  0x40009088 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD4_NBYTES_MLOFFYES  0x40009088 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD4_SLAST  *(volatile int32_t *)0x4000908C  // TCD Last Source Addr Adj.\n"
  "//register DMA_TCD4_DADDR  *(volatile void * volatile *)0x40009090 // TCD Destination Address\n"
  "//register DMA_TCD4_DOFF  *(volatile int16_t *)0x40009094  // TCD Signed Dest Address Offset\n"
  "//register DMA_TCD4_CITER_ELINKYES *(volatile $uint16_t *)0x40009096 // TCD Current Minor Loop Link\n"
  "//register DMA_TCD4_CITER_ELINKNO *(volatile $uint16_t *)0x40009096 // \?\?\n"
  "//register DMA_TCD4_DLASTSGA *(volatile int32_t *)0x40009098  // TCD Last Destination Addr Adj\n"
  "//register DMA_TCD4_CSR  *(volatile $uint16_t *)0x4000909C // TCD Control and Status\n"
  "//register DMA_TCD4_BITER_ELINKYES *(volatile $uint16_t *)0x4000909E // TCD Beginning Minor Loop Link\n"
  "//register DMA_TCD4_BITER_ELINKNO *(volatile $uint16_t *)0x4000909E // TCD Beginning Minor Loop Link\n"
  "//\n"
  "//register DMA_TCD5_SADDR  *(volatile const void * volatile *)0x400090A0 // TCD Source Addr\n"
  "//register DMA_TCD5_SOFF  *(volatile int16_t *)0x400090A4  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD5_ATTR  *(volatile $uint16_t *)0x400090A6 // TCD Transfer Attributes\n"
  "//register DMA_TCD5_NBYTES_MLNO  0x400090A8 // TCD Minor Byte Count\n"
  "//register DMA_TCD5_NBYTES_MLOFFNO  0x400090A8 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD5_NBYTES_MLOFFYES  0x400090A8 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD5_SLAST  *(volatile int32_t *)0x400090AC  // TCD Last Source Addr Adj.\n"
  "//register DMA_TCD5_DADDR  *(volatile void * volatile *)0x400090B0 // TCD Destination Address\n"
  "//register DMA_TCD5_DOFF  *(volatile int16_t *)0x400090B4  // TCD Signed Dest Address Offset\n"
  "//register DMA_TCD5_CITER_ELINKYES *(volatile $uint16_t *)0x400090B6 // TCD Current Minor Loop Link\n"
  "//register DMA_TCD5_CITER_ELINKNO *(volatile $uint16_t *)0x400090B6 // \?\?\n"
  "//register DMA_TCD5_DLASTSGA *(volatile int32_t *)0x400090B8  // TCD Last Destination Addr Adj\n"
  "//register DMA_TCD5_CSR  *(volatile $uint16_t *)0x400090BC // TCD Control and Status\n"
  "//register DMA_TCD5_BITER_ELINKYES *(volatile $uint16_t *)0x400090BE // TCD Beginning Minor Loop Link\n"
  "//register DMA_TCD5_BITER_ELINKNO *(volatile $uint16_t *)0x400090BE // TCD Beginning Minor Loop Link\n"
  "//\n"
  "//register DMA_TCD6_SADDR  *(volatile const void * volatile *)0x400090C0 // TCD Source Addr\n"
  "//register DMA_TCD6_SOFF  *(volatile int16_t *)0x400090C4  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD6_ATTR  *(volatile $uint16_t *)0x400090C6 // TCD Transfer Attributes\n"
  "//register DMA_TCD6_NBYTES_MLNO  0x400090C8 // TCD Minor Byte Count\n"
  "//register DMA_TCD6_NBYTES_MLOFFNO  0x400090C8 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD6_NBYTES_MLOFFYES  0x400090C8 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD6_SLAST  *(volatile int32_t *)0x400090CC  // TCD Last Source Addr Adj.\n"
  "//register DMA_TCD6_DADDR  *(volatile void * volatile *)0x400090D0 // TCD Destination Address\n"
  "//register DMA_TCD6_DOFF  *(volatile int16_t *)0x400090D4  // TCD Signed Dest Address Offset\n"
  "//register DMA_TCD6_CITER_ELINKYES *(volatile $uint16_t *)0x400090D6 // TCD Current Minor Loop Link\n"
  "//register DMA_TCD6_CITER_ELINKNO *(volatile $uint16_t *)0x400090D6 // \?\?\n"
  "//register DMA_TCD6_DLASTSGA *(volatile int32_t *)0x400090D8  // TCD Last Destination Addr Adj\n"
  "//register DMA_TCD6_CSR  *(volatile $uint16_t *)0x400090DC // TCD Control and Status\n"
  "//register DMA_TCD6_BITER_ELINKYES *(volatile $uint16_t *)0x400090DE // TCD Beginning Minor Loop Link\n"
  "//register DMA_TCD6_BITER_ELINKNO *(volatile $uint16_t *)0x400090DE // TCD Beginning Minor Loop Link\n"
  "//\n"
  "//register DMA_TCD7_SADDR  *(volatile const void * volatile *)0x400090E0 // TCD Source Addr\n"
  "//register DMA_TCD7_SOFF  *(volatile int16_t *)0x400090E4  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD7_ATTR  *(volatile $uint16_t *)0x400090E6 // TCD Transfer Attributes\n"
  "//register DMA_TCD7_NBYTES_MLNO  0x400090E8 // TCD Minor Byte Count\n"
  "//register DMA_TCD7_NBYTES_MLOFFNO  0x400090E8 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD7_NBYTES_MLOFFYES  0x400090E8 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD7_SLAST  *(volatile int32_t *)0x400090EC  // TCD Last Source Addr Adj.\n"
  "//register DMA_TCD7_DADDR  *(volatile void * volatile *)0x400090F0 // TCD Destination Address\n"
  "//register DMA_TCD7_DOFF  *(volatile int16_t *)0x400090F4  // TCD Signed Dest Address Offset\n"
  "//register DMA_TCD7_CITER_ELINKYES *(volatile $uint16_t *)0x400090F6 // TCD Current Minor Loop Link\n"
  "//register DMA_TCD7_CITER_ELINKNO *(volatile $uint16_t *)0x400090F6 // \?\?\n"
  "//register DMA_TCD7_DLASTSGA *(volatile int32_t *)0x400090F8  // TCD Last Destination Addr Adj\n"
  "//register DMA_TCD7_CSR  *(volatile $uint16_t *)0x400090FC // TCD Control and Status\n"
  "//register DMA_TCD7_BITER_ELINKYES *(volatile $uint16_t *)0x400090FE // TCD Beginning Minor Loop Link\n"
  "//register DMA_TCD7_BITER_ELINKNO *(volatile $uint16_t *)0x400090FE // TCD Beginning Minor Loop Link\n"
  "//\n"
  "//register DMA_TCD8_SADDR  *(volatile const void * volatile *)0x40009100 // TCD Source Addr\n"
  "//register DMA_TCD8_SOFF  *(volatile int16_t *)0x40009104  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD8_ATTR  *(volatile $uint16_t *)0x40009106 // TCD Transfer Attributes\n"
  "//register DMA_TCD8_NBYTES_MLNO  0x40009108 // TCD Minor Byte Count\n"
  "//register DMA_TCD8_NBYTES_MLOFFNO  0x40009108 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD8_NBYTES_MLOFFYES  0x40009108 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD8_SLAST  *(volatile int32_t *)0x4000910C  // TCD Last Source Addr Adj.\n"
  "//register DMA_TCD8_DADDR  *(volatile void * volatile *)0x40009110 // TCD Destination Address\n"
  "//register DMA_TCD8_DOFF  *(volatile int16_t *)0x40009114  // TCD Signed Dest Address Offset\n"
  "//register DMA_TCD8_CITER_ELINKYES *(volatile $uint16_t *)0x40009116 // TCD Current Minor Loop Link\n"
  "//register DMA_TCD8_CITER_ELINKNO *(volatile $uint16_t *)0x40009116 // \?\?\n"
  "//register DMA_TCD8_DLASTSGA *(volatile int32_t *)0x40009118  // TCD Last Destination Addr Adj\n"
  "//register DMA_TCD8_CSR  *(volatile $uint16_t *)0x4000911C // TCD Control and Status\n"
  "//register DMA_TCD8_BITER_ELINKYES *(volatile $uint16_t *)0x4000911E // TCD Beginning Minor Loop Link\n"
  "//register DMA_TCD8_BITER_ELINKNO *(volatile $uint16_t *)0x4000911E // TCD Beginning Minor Loop Link\n"
  "//\n"
  "//register DMA_TCD9_SADDR  *(volatile const void * volatile *)0x40009120 // TCD Source Addr\n"
  "//register DMA_TCD9_SOFF  *(volatile int16_t *)0x40009124  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD9_ATTR  *(volatile $uint16_t *)0x40009126 // TCD Transfer Attributes\n"
  "//register DMA_TCD9_NBYTES_MLNO  0x40009128 // TCD Minor Byte Count\n"
  "//register DMA_TCD9_NBYTES_MLOFFNO  0x40009128 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD9_NBYTES_MLOFFYES  0x40009128 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD9_SLAST  *(volatile int32_t *)0x4000912C  // TCD Last Source Addr Adj.\n"
  "//register DMA_TCD9_DADDR  *(volatile void * volatile *)0x40009130 // TCD Destination Address\n"
  "//register DMA_TCD9_DOFF  *(volatile int16_t *)0x40009134  // TCD Signed Dest Address Offset\n"
  "//register DMA_TCD9_CITER_ELINKYES *(volatile $uint16_t *)0x40009136 // TCD Current Minor Loop Link\n"
  "//register DMA_TCD9_CITER_ELINKNO *(volatile $uint16_t *)0x40009136 // \?\?\n"
  "//register DMA_TCD9_DLASTSGA *(volatile int32_t *)0x40009138  // TCD Last Destination Addr Adj\n"
  "//register DMA_TCD9_CSR  *(volatile $uint16_t *)0x4000913C // TCD Control and Status\n"
  "//register DMA_TCD9_BITER_ELINKYES *(volatile $uint16_t *)0x4000913E // TCD Beginning Minor Loop Link\n"
  "//register DMA_TCD9_BITER_ELINKNO *(volatile $uint16_t *)0x4000913E // TCD Beginning Minor Loop Link\n"
  "//\n"
  "//register DMA_TCD10_SADDR  *(volatile const void * volatile *)0x40009140 // TCD Source Addr\n"
  "//register DMA_TCD10_SOFF  *(volatile int16_t *)0x40009144  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD10_ATTR  *(volatile $uint16_t *)0x40009146 // TCD Transfer Attributes\n"
  "//register DMA_TCD10_NBYTES_MLNO  0x40009148 // TCD Minor Byte Count\n"
  "//register DMA_TCD10_NBYTES_MLOFFNO  0x40009148 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD10_NBYTES_MLOFFYES  0x40009148 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD10_SLAST  *(volatile int32_t *)0x4000914C  // TCD Last Source Addr Adj.\n"
  "//register DMA_TCD10_DADDR  *(volatile void * volatile *)0x40009150 // TCD Destination Address\n"
  "//register DMA_TCD10_DOFF  *(volatile int16_t *)0x40009154  // TCD Signed Dest Address Offset\n"
  "//register DMA_TCD10_CITER_ELINKYES *(volatile $uint16_t *)0x40009156 // TCD Current Minor Loop Link\n"
  "//register DMA_TCD10_CITER_ELINKNO *(volatile $uint16_t *)0x40009156 // \?\?\n"
  "//register DMA_TCD10_DLASTSGA *(volatile int32_t *)0x40009158  // TCD Last Destination Addr Adj\n"
  "//register DMA_TCD10_CSR  *(volatile $uint16_t *)0x4000915C // TCD Control and Status\n"
  "//register DMA_TCD10_BITER_ELINKYES *(volatile $uint16_t *)0x4000915E // TCD Beginning Minor Loop Link\n"
  "//register DMA_TCD10_BITER_ELINKNO *(volatile $uint16_t *)0x4000915E // TCD Beginning Minor Loop Link\n"
  "//\n"
  "//register DMA_TCD11_SADDR  *(volatile const void * volatile *)0x40009160 // TCD Source Addr\n"
  "//register DMA_TCD11_SOFF  *(volatile int16_t *)0x40009164  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD11_ATTR  *(volatile $uint16_t *)0x40009166 // TCD Transfer Attributes\n"
  "//register DMA_TCD11_NBYTES_MLNO  0x40009168 // TCD Minor Byte Count\n"
  "//register DMA_TCD11_NBYTES_MLOFFNO  0x40009168 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD11_NBYTES_MLOFFYES  0x40009168 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD11_SLAST  *(volatile int32_t *)0x4000916C  // TCD Last Source Addr Adj.\n"
  "//register DMA_TCD11_DADDR  *(volatile void * volatile *)0x40009170 // TCD Destination Address\n"
  "//register DMA_TCD11_DOFF  *(volatile int16_t *)0x40009174  // TCD Signed Dest Address Offset\n"
  "//register DMA_TCD11_CITER_ELINKYES *(volatile $uint16_t *)0x40009176 // TCD Current Minor Loop Link\n"
  "//register DMA_TCD11_CITER_ELINKNO *(volatile $uint16_t *)0x40009176 // \?\?\n"
  "//register DMA_TCD11_DLASTSGA *(volatile int32_t *)0x40009178  // TCD Last Destination Addr Adj\n"
  "//register DMA_TCD11_CSR  *(volatile $uint16_t *)0x4000917C // TCD Control and Status\n"
  "//register DMA_TCD11_BITER_ELINKYES *(volatile $uint16_t *)0x4000917E // TCD Beginning Minor Loop Link\n"
  "//register DMA_TCD11_BITER_ELINKNO *(volatile $uint16_t *)0x4000917E // TCD Beginning Minor Loop Link\n"
  "//\n"
  "//register DMA_TCD12_SADDR  *(volatile const void * volatile *)0x40009180 // TCD Source Addr\n"
  "//register DMA_TCD12_SOFF  *(volatile int16_t *)0x40009184  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD12_ATTR  *(volatile $uint16_t *)0x40009186 // TCD Transfer Attributes\n"
  "//register DMA_TCD12_NBYTES_MLNO  0x40009188 // TCD Minor Byte Count\n"
  "//register DMA_TCD12_NBYTES_MLOFFNO  0x40009188 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD12_NBYTES_MLOFFYES  0x40009188 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD12_SLAST  *(volatile int32_t *)0x4000918C  // TCD Last Source Addr Adj.\n"
  "//register DMA_TCD12_DADDR  *(volatile void * volatile *)0x40009190 // TCD Destination Address\n"
  "//register DMA_TCD12_DOFF  *(volatile int16_t *)0x40009194  // TCD Signed Dest Address Offset\n"
  "//register DMA_TCD12_CITER_ELINKYES *(volatile $uint16_t *)0x40009196 // TCD Current Minor Loop Link\n"
  "//register DMA_TCD12_CITER_ELINKNO *(volatile $uint16_t *)0x40009196 // \?\?\n"
  "//register DMA_TCD12_DLASTSGA *(volatile int32_t *)0x40009198  // TCD Last Destination Addr Adj\n"
  "//register DMA_TCD12_CSR  *(volatile $uint16_t *)0x4000919C // TCD Control and Status\n"
  "//register DMA_TCD12_BITER_ELINKYES *(volatile $uint16_t *)0x4000919E // TCD Beginning Minor Loop Link\n"
  "//register DMA_TCD12_BITER_ELINKNO *(volatile $uint16_t *)0x4000919E // TCD Beginning Minor Loop Link\n"
  "//\n"
  "//register DMA_TCD13_SADDR  *(volatile const void * volatile *)0x400091A0 // TCD Source Addr\n"
  "//register DMA_TCD13_SOFF  *(volatile int16_t *)0x400091A4  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD13_ATTR  *(volatile $uint16_t *)0x400091A6 // TCD Transfer Attributes\n"
  "//register DMA_TCD13_NBYTES_MLNO  0x400091A8 // TCD Minor Byte Count\n"
  "//register DMA_TCD13_NBYTES_MLOFFNO  0x400091A8 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD13_NBYTES_MLOFFYES  0x400091A8 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD13_SLAST  *(volatile int32_t *)0x400091AC  // TCD Last Source Addr Adj.\n"
  "//register DMA_TCD13_DADDR  *(volatile void * volatile *)0x400091B0 // TCD Destination Address\n"
  "//register DMA_TCD13_DOFF  *(volatile int16_t *)0x400091B4  // TCD Signed Dest Address Offset\n"
  "//register DMA_TCD13_CITER_ELINKYES *(volatile $uint16_t *)0x400091B6 // TCD Current Minor Loop Link\n"
  "//register DMA_TCD13_CITER_ELINKNO *(volatile $uint16_t *)0x400091B6 // \?\?\n"
  "//register DMA_TCD13_DLASTSGA *(volatile int32_t *)0x400091B8  // TCD Last Destination Addr Adj\n"
  "//register DMA_TCD13_CSR  *(volatile $uint16_t *)0x400091BC // TCD Control and Status\n"
  "//register DMA_TCD13_BITER_ELINKYES *(volatile $uint16_t *)0x400091BE // TCD Beginning Minor Loop Link\n"
  "//register DMA_TCD13_BITER_ELINKNO *(volatile $uint16_t *)0x400091BE // TCD Beginning Minor Loop Link\n"
  "//\n"
  "//register DMA_TCD14_SADDR  *(volatile const void * volatile *)0x400091C0 // TCD Source Addr\n"
  "//register DMA_TCD14_SOFF  *(volatile int16_t *)0x400091C4  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD14_ATTR  *(volatile $uint16_t *)0x400091C6 // TCD Transfer Attributes\n"
  "//register DMA_TCD14_NBYTES_MLNO  0x400091C8 // TCD Minor Byte Count\n"
  "//register DMA_TCD14_NBYTES_MLOFFNO  0x400091C8 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD14_NBYTES_MLOFFYES  0x400091C8 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD14_SLAST  *(volatile int32_t *)0x400091CC  // TCD Last Source Addr Adj.\n"
  "//register DMA_TCD14_DADDR  *(volatile void * volatile *)0x400091D0 // TCD Destination Address\n"
  "//register DMA_TCD14_DOFF  *(volatile int16_t *)0x400091D4  // TCD Signed Dest Address Offset\n"
  "//register DMA_TCD14_CITER_ELINKYES *(volatile $uint16_t *)0x400091D6 // TCD Current Minor Loop Link\n"
  "//register DMA_TCD14_CITER_ELINKNO *(volatile $uint16_t *)0x400091D6 // \?\?\n"
  "//register DMA_TCD14_DLASTSGA *(volatile int32_t *)0x400091D8  // TCD Last Destination Addr Adj\n"
  "//register DMA_TCD14_CSR  *(volatile $uint16_t *)0x400091DC // TCD Control and Status\n"
  "//register DMA_TCD14_BITER_ELINKYES *(volatile $uint16_t *)0x400091DE // TCD Beginning Minor Loop Link\n"
  "//register DMA_TCD14_BITER_ELINKNO *(volatile $uint16_t *)0x400091DE // TCD Beginning Minor Loop Link\n"
  "//\n"
  "//register DMA_TCD15_SADDR  *(volatile const void * volatile *)0x400091E0 // TCD Source Addr\n"
  "//register DMA_TCD15_SOFF  *(volatile int16_t *)0x400091E4  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD15_ATTR  *(volatile $uint16_t *)0x400091E6 // TCD Transfer Attributes\n"
  "//register DMA_TCD15_NBYTES_MLNO  0x400091E8 // TCD Minor Byte Count\n"
  "//register DMA_TCD15_NBYTES_MLOFFNO  0x400091E8 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD15_NBYTES_MLOFFYES  0x400091E8 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD15_SLAST  *(volatile int32_t *)0x400091EC  // TCD Last Source Addr Adj.\n"
  "//register DMA_TCD15_DADDR  *(volatile void * volatile *)0x400091F0 // TCD Destination Address\n"
  "//register DMA_TCD15_DOFF  *(volatile int16_t *)0x400091F4  // TCD Signed Dest Address Offset\n"
  "//register DMA_TCD15_CITER_ELINKYES *(volatile $uint16_t *)0x400091F6 // TCD Current Minor Loop Link\n"
  "//register DMA_TCD15_CITER_ELINKNO *(volatile $uint16_t *)0x400091F6 // \?\?\n"
  "//register DMA_TCD15_DLASTSGA *(volatile int32_t *)0x400091F8  // TCD Last Destination Addr Adj\n"
  "//register DMA_TCD15_CSR  *(volatile $uint16_t *)0x400091FC // TCD Control and Status\n"
  "//register DMA_TCD15_BITER_ELINKYES *(volatile $uint16_t *)0x400091FE // TCD Beginning Minor Loop Link\n"
  "//register DMA_TCD15_BITER_ELINKNO *(volatile $uint16_t *)0x400091FE // TCD Beginning Minor Loop Link\n"
  "//\n"
  "//\n"
  "//// Chapter 22: External Watchdog Monitor (EWM)\n"
  "//register EWM_CTRL  *(volatile $uint8_t  *)0x40061000 // Control Register\n"
  "//register EWM_SERV  *(volatile $uint8_t  *)0x40061001 // Service Register\n"
  "//register EWM_CMPL  *(volatile $uint8_t  *)0x40061002 // Compare Low Register\n"
  "//register EWM_CMPH  *(volatile $uint8_t  *)0x40061003 // Compare High Register\n"
  "//\n"
  "//// Chapter 23: Watchdog Timer (WDOG)\n"
  "register WDOG_STCTRLH at 0x40052000 $uint16 // Watchdog Status and Control Register High\n"
  "let WDOG_STCTRLH_DISTESTWDOG $uint16 = 0x4000  // Allows the WDOG's functional test mode to be disabled permanently.\n"
  "//register WDOG_STCTRLH_BYTESEL(n)  ($uint16_t)(((n) & 3) << 12) // selects the byte to be tested when the watchdog is in the byte test mode.\n"
  "let WDOG_STCTRLH_TESTSEL  $uint16 = 0x0800\n"
  "let WDOG_STCTRLH_TESTWDOG $uint16 = 0x0400\n"
  "let WDOG_STCTRLH_WAITEN $uint16 = 0x0080\n"
  "let WDOG_STCTRLH_STOPEN $uint16 = 0x0040\n"
  "let WDOG_STCTRLH_DBGEN  $uint16 = 0x0020\n"
  "let WDOG_STCTRLH_ALLOWUPDATE $uint16 = 0x0010\n"
  "let WDOG_STCTRLH_WINEN $uint16 = 0x0008\n"
  "let WDOG_STCTRLH_IRQRSTEN $uint16 = 0x0004\n"
  "let WDOG_STCTRLH_CLKSRC $uint16 = 0x0002\n"
  "let WDOG_STCTRLH_WDOGEN $uint16 = 0x0001\n"
  "register WDOG_STCTRLL  at 0x40052002 $uint16 // Watchdog Status and Control Register Low\n"
  "register WDOG_TOVALH   at 0x40052004 $uint16 // Watchdog Time-out Value Register High\n"
  "register WDOG_TOVALL   at 0x40052006 $uint16 // Watchdog Time-out Value Register Low\n"
  "register WDOG_WINH     at 0x40052008 $uint16 // Watchdog Window Register High\n"
  "register WDOG_WINL     at 0x4005200A $uint16 // Watchdog Window Register Low\n"
  "register WDOG_REFRESH  at 0x4005200C $uint16 // Watchdog Refresh register\n"
  "register WDOG_UNLOCK   at 0x4005200E $uint16 // Watchdog Unlock register\n"
  "let WDOG_UNLOCK_SEQ1 $uint16   = 0xC520\n"
  "let WDOG_UNLOCK_SEQ2 $uint16   = 0xD928\n"
  "register WDOG_TMROUTH  at 0x40052010 $uint16 // Watchdog Timer Output Register High\n"
  "register WDOG_TMROUTL  at 0x40052012 $uint16 // Watchdog Timer Output Register Low\n"
  "register WDOG_RSTCNT   at 0x40052014 $uint16 // Watchdog Reset Count register\n"
  "register WDOG_PRESC    at 0x40052016 $uint16 // Watchdog Prescaler register\n"
  "\n"
  "// Chapter 24: Multipurpose Clock Generator (MCG)\n"
  "register MCG_C1 at 0x40064000 $uint8 { // MCG Control 1 Register\n"
  "  CLKS [2], // Clock Source Select, Selects the clock source for MCGOUTCLK\n"
  "  FRDIV [3], // FLL External Reference Divider, Selects the amount to divide down the external reference clock for the FLL\n"
  "  IREFS, // Internal Reference Select, Selects the reference clock source for the FLL\n"
  "  IRCLKEN, // Internal Reference Clock Enable, Enables the internal reference clock for use as MCGIRCLK\n"
  "  IREFSTEN // Internal Reference Stop Enable, Controls whether or not the internal reference clock remains enabled when the MCG enters Stop mode\n"
  "}\n"
  "\n"
  "register MCG_C2 at 0x4006_4001 $uint8 { // MCG Control 2 Register\n"
  "  LOCRE0, // Loss of Clock Reset Enable, Determines whether an interrupt \n"
  "          // or a reset request is made following a loss of OSC0\n"
  "  1,\n"
  "  RANGE0[2], // Frequency Range Select, Selects the frequency range\n"
  "             // for the crystal oscillator\n"
  "  HGO0, // High Gain Oscillator Select, Controls the crystal oscillator mode of operation  \n"
  "  EREFS, // External Reference Select, selects the source for the external reference clock\n"
  "  LP, // Low Power Select, Controls whether the FLL or PLL is disabled in BLPI and BLPE modes.\n"
  "  IRCS // Internal Reference Clock Select, Selects between the fast or slow internal reference clock source.\n"
  "}\n"
  "\n"
  "register MCG_C3 at 0x4006_4002 $uint8 // MCG Control 3 Register\n"
  "//register MCG_C3_SCTRIM(n)  ($uint8_t)(n)   // Slow Internal Reference Clock Trim Setting\n"
  "register MCG_C4 at 0x40064003 $uint8 // MCG Control 4 Register\n"
  "let MCG_C4_SCFTRIM $uint8 = 0x01   // Slow Internal Reference Clock Fine Trim\n"
  "//register MCG_C4_FCTRIM(n)  ($uint8_t)(((n) & 0x0F) << 1) // Fast Internal Reference Clock Trim Setting\n"
  "//register MCG_C4_DRST_DRS(n)  ($uint8_t)(((n) & 0x03) << 5) // DCO Range Select\n"
  "let MCG_C4_DMX32 $uint8 = 0x80   // DCO Maximum Frequency with 32.768 kHz Reference, controls whether the DCO frequency range is narrowed\n"
  "\n"
  "\n"
  "register MCG_C5 at 0x4006_4004 $uint8 { // MCG Control 5 Register\n"
  " 1,\n"
  " PLLCLKEN0, // PLL Clock Enable\n"
  " PLLSTEN0,  // PLL Stop Enable\n"
  " PRDIV0 [5] // PLL External Reference Divider\n"
  "}\n"
  "\n"
  "register MCG_C6 at 0x4006_4005 $uint8 { // MCG Control 6 Register\n"
  " LOLIE0, // Loss of Lock Interrrupt Enable\n"
  " PLLS, // PLL Select, Controls whether the PLL or FLL output is selected as the MCG source when CLKS[1:0]=00\n"
  " CME0,   // Clock Monitor Enable\n"
  " VDIV0[5] // VCO 0 Divider\n"
  "}\n"
  "\n"
  "register MCG_S @ro at 0x40064006 $uint8 { // MCG Status Register\n"
  " LOLS0, // Loss of Lock Status\n"
  " LOCK0, // Lock Status, 0=PLL Unlocked, 1=PLL Locked\n"
  " PLLST, // PLL Select Status\n"
  " IREFST, // Internal Reference Status\n"
  " CLKST [2], // Clock Mode Status, 0=FLL is selected, 1= Internal ref, 2=External ref, 3=PLL\n"
  " OSCINIT0, // OSC Initialization, resets to 0, is set to 1 after the initialization cycles of the crystal oscillator\n"
  " IRCST   // Internal Reference Clock Status\n"
  "}\n"
  "\n"
  "register MCG_SC at 0x40064008 $uint8 // MCG Status and Control Register\n"
  "let MCG_SC_LOCS0 $uint8 = 0x01   // OSC0 Loss of Clock Status\n"
  "//register MCG_SC_FCRDIV(n)  ($uint8_t)(((n) & 0x07) << 1) // Fast Clock Internal Reference Divider\n"
  "let MCG_SC_FLTPRSRV $uint8 = 0x10   // FLL Filter Preserve Enable\n"
  "let MCG_SC_ATMF $uint8 = 0x20   // Automatic Trim Machine Fail Flag\n"
  "let MCG_SC_ATMS $uint8 = 0x40   // Automatic Trim Machine Select\n"
  "let MCG_SC_ATME $uint8 = 0x80   // Automatic Trim Machine Enable\n"
  "\n"
  "register MCG_ATCVH at 0x4006400A $uint8 // MCG Auto Trim Compare Value High Register\n"
  "register MCG_ATCVL at 0x4006400B $uint8 // MCG Auto Trim Compare Value Low Register\n"
  "register MCG_C7    at 0x4006400C $uint8 // MCG Control 7 Register\n"
  "register MCG_C8    at 0x4006400D $uint8 // MCG Control 8 Register\n"
  "//\n"
  "//// Chapter 25: Oscillator (OSC)\n"
  "register OSC_CR at 0x40065000 $uint8 {// OSC Control Register\n"
  "  ERCLKEN, // External Reference Enable, Enables external reference clock (OSCERCLK)\n"
  "  1,\n"
  "  EREFSTEN, // External Reference Stop Enable, Controls whether or not \n"
  "            // the external reference clock (OSCERCLK) remains enabled when\n"
  "            // MCU enters Stop mode.\n"
  "  1,\n"
  "  SC2P, // Oscillator 2 pF Capacitor Load Configure\n"
  "  SC4P, // Oscillator 4 pF Capacitor Load Configure\n"
  "  SC8P, // Oscillator 8 pF Capacitor Load Configure\n"
  "  SC16P // Oscillator 16 pF Capacitor Load Configure\n"
  "}\n"
  "let OSC_SC16P  $uint8 = 0x01   \n"
  "\n"
  "//// Chapter 27: Flash Memory Controller (FMC)\n"
  "register FMC_PFAPR     at 0x4001F000 $uint32 // Flash Access Protection\n"
  "register FMC_PFB0CR    at 0x4001F004 $uint32 // Flash Control\n"
  "register FMC_TAGVDW0S0 at 0x4001F100 $uint32 // Cache Tag Storage\n"
  "register FMC_TAGVDW0S1 at 0x4001F104 $uint32 // Cache Tag Storage\n"
  "register FMC_TAGVDW1S0 at 0x4001F108 $uint32 // Cache Tag Storage\n"
  "register FMC_TAGVDW1S1 at 0x4001F10C $uint32 // Cache Tag Storage\n"
  "register FMC_TAGVDW2S0 at 0x4001F110 $uint32 // Cache Tag Storage\n"
  "register FMC_TAGVDW2S1 at 0x4001F114 $uint32 // Cache Tag Storage\n"
  "register FMC_TAGVDW3S0 at 0x4001F118 $uint32 // Cache Tag Storage\n"
  "register FMC_TAGVDW3S1 at 0x4001F11C $uint32 // Cache Tag Storage\n"
  "register FMC_DATAW0S0  at 0x4001F200 $uint32 // Cache Data Storage\n"
  "register FMC_DATAW0S1  at 0x4001F204 $uint32 // Cache Data Storage\n"
  "register FMC_DATAW1S0  at 0x4001F208 $uint32 // Cache Data Storage\n"
  "register FMC_DATAW1S1  at 0x4001F20C $uint32 // Cache Data Storage\n"
  "register FMC_DATAW2S0  at 0x4001F210 $uint32 // Cache Data Storage\n"
  "register FMC_DATAW2S1  at 0x4001F214 $uint32 // Cache Data Storage\n"
  "register FMC_DATAW3S0  at 0x4001F218 $uint32 // Cache Data Storage\n"
  "register FMC_DATAW3S1  at 0x4001F21C $uint32 // Cache Data Storage\n"
  "//\n"
  "//// Chapter 28: Flash Memory Module (FTFL)\n"
  "//register FTFL_FST *(volatile $uint8_t  *)0x40020000      // Flash Status Register\n"
  "//register FTFL_FSTAT_CCIF   ($uint8_t)0x80   // Command Complete Interrupt Flag\n"
  "//register FTFL_FSTAT_RDCOLERR  ($uint8_t)0x40   // Flash Read Collision Error Flag\n"
  "//register FTFL_FSTAT_ACCERR  ($uint8_t)0x20   // Flash Access Error Flag\n"
  "//register FTFL_FSTAT_FPVIOL  ($uint8_t)0x10   // Flash Protection Violation Flag\n"
  "//register FTFL_FSTAT_MGSTAT0  ($uint8_t)0x01   // Memory Controller Command Completion Status Flag\n"
  "//register FTFL_FCNFG  *(volatile $uint8_t  *)0x40020001      // Flash Configuration Register\n"
  "//register FTFL_FCNFG_CCIE   ($uint8_t)0x80   // Command Complete Interrupt Enable\n"
  "//register FTFL_FCNFG_RDCOLLIE  ($uint8_t)0x40   // Read Collision Error Interrupt Enable\n"
  "//register FTFL_FCNFG_ERSAREQ  ($uint8_t)0x20   // Erase All Request\n"
  "//register FTFL_FCNFG_ERSSUSP  ($uint8_t)0x10   // Erase Suspend\n"
  "//register FTFL_FCNFG_PFLSH  ($uint8_t)0x04   // Flash memory configuration\n"
  "//register FTFL_FCNFG_RAMRDY  ($uint8_t)0x02   // RAM Ready\n"
  "//register FTFL_FCNFG_EEERDY  ($uint8_t)0x01   // EEPROM Ready\n"
  "//register FTFL_FSEC  *(const    $uint8_t  *)0x40020002      // Flash Security Register\n"
  "//register FTFL_FOPT  *(const    $uint8_t  *)0x40020003      // Flash Option Register\n"
  "//register FTFL_FCCOB3  *(volatile $uint8_t  *)0x40020004      // Flash Common Command Object Registers\n"
  "//register FTFL_FCCOB2  *(volatile $uint8_t  *)0x40020005\n"
  "//register FTFL_FCCOB1  *(volatile $uint8_t  *)0x40020006\n"
  "//register FTFL_FCCOB0  *(volatile $uint8_t  *)0x40020007\n"
  "//register FTFL_FCCOB7  *(volatile $uint8_t  *)0x40020008\n"
  "//register FTFL_FCCOB6  *(volatile $uint8_t  *)0x40020009\n"
  "//register FTFL_FCCOB5  *(volatile $uint8_t  *)0x4002000A\n"
  "//register FTFL_FCCOB4  *(volatile $uint8_t  *)0x4002000B\n"
  "//register FTFL_FCCOBB  *(volatile $uint8_t  *)0x4002000C\n"
  "//register FTFL_FCCOBA  *(volatile $uint8_t  *)0x4002000D\n"
  "//register FTFL_FCCOB9  *(volatile $uint8_t  *)0x4002000E\n"
  "//register FTFL_FCCOB8  *(volatile $uint8_t  *)0x4002000F\n"
  "//register FTFL_FPROT3  *(volatile $uint8_t  *)0x40020010      // Program Flash Protection Registers\n"
  "//register FTFL_FPROT2  *(volatile $uint8_t  *)0x40020011      // Program Flash Protection Registers\n"
  "//register FTFL_FPROT1  *(volatile $uint8_t  *)0x40020012      // Program Flash Protection Registers\n"
  "//register FTFL_FPROT0  *(volatile $uint8_t  *)0x40020013      // Program Flash Protection Registers\n"
  "//register FTFL_FEPROT  *(volatile $uint8_t  *)0x40020016      // EEPROM Protection Register\n"
  "//register FTFL_FDPROT  *(volatile $uint8_t  *)0x40020017      // Data Flash Protection Register\n"
  "\n"
  "// Chapter 30: Cyclic Redundancy Check (CRC)\n"
  "register CRC_CRC   at 0x40032000 $uint32 // CRC Data register\n"
  "register CRC_GPOLY at 0x40032004 $uint32 // CRC Polynomial register\n"
  "register CRC_CTRL  at 0x40032008 $uint32 // CRC Control register\n"
  "\n"
  "// Chapter 31: Analog-to-Digital Converter (ADC)\n"
  "register ADC0_SC1A   at 0x4003B000 $uint32 // ADC status and control registers 1\n"
  "register ADC0_SC1B   at 0x4003B004 $uint32 // ADC status and control registers 1\n"
  "let ADC_SC1_COCO  $uint32 = 0x80   // Conversion complete flag\n"
  "let ADC_SC1_AIEN  $uint32 = 0x40   // Interrupt enable\n"
  "let ADC_SC1_DIFF  $uint32 = 0x20   // Differential mode enable\n"
  "//register ADC_SC1_ADCH(n)    ((n) & 0x1F)  // Input channel select\n"
  "register ADC0_CFG1   at 0x4003B008 $uint32 // ADC configuration register 1\n"
  "let ADC_CFG1_ADLPC  $uint32 = 0x80   // Low-power configuration\n"
  "//register ADC_CFG1_ADIV(n)   (((n) & 3) << 5) // Clock divide select, 0=direct, 1=div2, 2=div4, 3=div8\n"
  "let ADC_CFG1_ADLSMP  $uint32 = 0x10   // Sample time configuration, 0=Short, 1=Long\n"
  "//register ADC_CFG1_MODE(n)   (((n) & 3) << 2) // Conversion mode, 0=8 bit, 1=12 bit, 2=10 bit, 3=16 bit\n"
  "//register ADC_CFG1_ADICLK(n)   (((n) & 3) << 0) // Input clock, 0=bus, 1=bus/2, 2=OSCERCLK, 3=async\n"
  "register ADC0_CFG2  at 0x4003B00C $uint32 // Configuration register 2\n"
  "let ADC_CFG2_MUXSEL  $uint32 = 0x10   // 0=a channels, 1=b channels\n"
  "let ADC_CFG2_ADACKEN  $uint32 = 0x08   // async clock enable\n"
  "let ADC_CFG2_ADHSC   $uint32 = 0x04   // High speed configuration\n"
  "//register ADC_CFG2_ADLSTS(n)   (((n) & 3) << 0) // Sample time, 0=24 cycles, 1=12 cycles, 2=6 cycles, 3=2 cycles\n"
  "register ADC0_RA    at 0x4003B010 $uint32 // ADC data result register\n"
  "register ADC0_RB    at 0x4003B014 $uint32 // ADC data result register\n"
  "register ADC0_CV1   at 0x4003B018 $uint32 // Compare value registers\n"
  "register ADC0_CV2   at 0x4003B01C $uint32 // Compare value registers\n"
  "register ADC0_SC2   at 0x4003B020 $uint32 // Status and control register 2\n"
  "let ADC_SC2_ADACT  $uint32 = 0x80   // Conversion active\n"
  "let ADC_SC2_ADTRG  $uint32 = 0x40   // Conversion trigger select, 0=software, 1=hardware\n"
  "let ADC_SC2_ACFE   $uint32 = 0x20   // Compare function enable\n"
  "let ADC_SC2_ACFGT  $uint32 = 0x10   // Compare function greater than enable\n"
  "let ADC_SC2_ACREN  $uint32 = 0x08   // Compare function range enable\n"
  "let ADC_SC2_DMAEN  $uint32= 0x04   // DMA enable\n"
  "//register ADC_SC2_REFSEL(n)   (((n) & 3) << 0) // Voltage reference, 0=vcc/external, 1=1.2 volts\n"
  "register ADC0_SC3   at 0x4003B024 $uint32 // Status and control register 3\n"
  "let ADC_SC3_CAL  $uint32 = 0x80   // Calibration, 1=begin, stays set while cal in progress\n"
  "let ADC_SC3_CALF  $uint32= 0x40   // Calibration failed flag\n"
  "let ADC_SC3_ADCO  $uint32= 0x08   // Continuous conversion enable\n"
  "let ADC_SC3_AVGE  $uint32= 0x04   // Hardware average enable\n"
  "//register ADC_SC3_AVGS(n)    (((n) & 3) << 0) // avg select, 0=4 samples, 1=8 samples, 2=16 samples, 3=32 samples\n"
  "register ADC0_OFS   at 0x4003B028 $uint32 // ADC offset correction register\n"
  "register ADC0_PG    at 0x4003B02C $uint32 // ADC plus-side gain register\n"
  "register ADC0_MG    at 0x4003B030 $uint32 // ADC minus-side gain register\n"
  "register ADC0_CLPD  at 0x4003B034 $uint32 // ADC plus-side general calibration value register\n"
  "register ADC0_CLPS  at 0x4003B038 $uint32 // ADC plus-side general calibration value register\n"
  "register ADC0_CLP4  at 0x4003B03C $uint32 // ADC plus-side general calibration value register\n"
  "register ADC0_CLP3  at 0x4003B040 $uint32 // ADC plus-side general calibration value register\n"
  "register ADC0_CLP2  at 0x4003B044 $uint32 // ADC plus-side general calibration value register\n"
  "register ADC0_CLP1  at 0x4003B048 $uint32 // ADC plus-side general calibration value register\n"
  "register ADC0_CLP0  at 0x4003B04C $uint32 // ADC plus-side general calibration value register\n"
  "register ADC0_PGA   at 0x4003B050 $uint32 // ADC Programmable Gain Amplifier\n"
  "let ADC0_PGA_PGAEN  $uint32 = 0x00800000  // Enable\n"
  "let ADC0_PGA_PGALPB  $uint32 = 0x00100000  // Low-Power Mode Control, 0=low power, 1=normal\n"
  "//register ADC0_PGA_PGAG(n)   (((n) & 15) << 16) // Gain, 0=1X, 1=2X, 2=4X, 3=8X, 4=16X, 5=32X, 6=64X\n"
  "register ADC0_CLMD   at 0x4003B054 $uint32 // ADC minus-side general calibration value register\n"
  "register ADC0_CLMS   at 0x4003B058 $uint32 // ADC minus-side general calibration value register\n"
  "register ADC0_CLM4   at 0x4003B05C $uint32 // ADC minus-side general calibration value register\n"
  "register ADC0_CLM3   at 0x4003B060 $uint32 // ADC minus-side general calibration value register\n"
  "register ADC0_CLM2   at 0x4003B064 $uint32 // ADC minus-side general calibration value register\n"
  "register ADC0_CLM1   at 0x4003B068 $uint32 // ADC minus-side general calibration value register\n"
  "register ADC0_CLM0   at 0x4003B06C $uint32 // ADC minus-side general calibration value register\n"
  "\n"
  "register ADC1_SC1A   at 0x400BB000 $uint32 // ADC status and control registers 1\n"
  "register ADC1_SC1B   at 0x400BB004 $uint32 // ADC status and control registers 1\n"
  "register ADC1_CFG1   at 0x400BB008 $uint32 // ADC configuration register 1\n"
  "register ADC1_CFG2   at 0x400BB00C $uint32 // Configuration register 2\n"
  "register ADC1_RA     at 0x400BB010 $uint32 // ADC data result register\n"
  "register ADC1_RB     at 0x400BB014 $uint32 // ADC data result register\n"
  "register ADC1_CV1    at 0x400BB018 $uint32 // Compare value registers\n"
  "register ADC1_CV2    at 0x400BB01C $uint32 // Compare value registers\n"
  "register ADC1_SC2    at 0x400BB020 $uint32 // Status and control register 2\n"
  "register ADC1_SC3    at 0x400BB024 $uint32 // Status and control register 3\n"
  "register ADC1_OFS    at 0x400BB028 $uint32 // ADC offset correction register\n"
  "register ADC1_PG     at 0x400BB02C $uint32 // ADC plus-side gain register\n"
  "register ADC1_MG     at 0x400BB030 $uint32 // ADC minus-side gain register\n"
  "register ADC1_CLPD   at 0x400BB034 $uint32 // ADC plus-side general calibration value register\n"
  "register ADC1_CLPS   at 0x400BB038 $uint32 // ADC plus-side general calibration value register\n"
  "register ADC1_CLP4   at 0x400BB03C $uint32 // ADC plus-side general calibration value register\n"
  "register ADC1_CLP3   at 0x400BB040 $uint32 // ADC plus-side general calibration value register\n"
  "register ADC1_CLP2   at 0x400BB044 $uint32 // ADC plus-side general calibration value register\n"
  "register ADC1_CLP1   at 0x400BB048 $uint32 // ADC plus-side general calibration value register\n"
  "register ADC1_CLP0   at 0x400BB04C $uint32 // ADC plus-side general calibration value register\n"
  "register ADC1_PGA    at 0x400BB050 $uint32 // ADC Programmable Gain Amplifier\n"
  "register ADC1_CLMD   at 0x400BB054 $uint32 // ADC minus-side general calibration value register\n"
  "register ADC1_CLMS   at 0x400BB058 $uint32 // ADC minus-side general calibration value register\n"
  "register ADC1_CLM4   at 0x400BB05C $uint32 // ADC minus-side general calibration value register\n"
  "register ADC1_CLM3   at 0x400BB060 $uint32 // ADC minus-side general calibration value register\n"
  "register ADC1_CLM2   at 0x400BB064 $uint32 // ADC minus-side general calibration value register\n"
  "register ADC1_CLM1   at 0x400BB068 $uint32 // ADC minus-side general calibration value register\n"
  "register ADC1_CLM0   at 0x400BB06C $uint32 // ADC minus-side general calibration value register\n"
  "\n"
  "register DAC0_DAT0L at 0x400CC000 $uint8 // DAC Data Low Register \n"
  "register DAC0_DATH  at 0x400CC001 $uint8 // DAC Data High Register \n"
  "register DAC0_DAT1L at 0x400CC002 $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT2L at 0x400CC004 $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT3L at 0x400CC006 $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT4L at 0x400CC008 $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT5L at 0x400CC00A $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT6L at 0x400CC00C $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT7L at 0x400CC00E $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT8L at 0x400CC010 $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT9L at 0x400CC012 $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT10L at 0x400CC014 $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT11L at 0x400CC016 $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT12L at 0x400CC018 $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT13L at 0x400CC01A $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT14L at 0x400CC01C $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT15L at 0x400CC01E $uint8 // DAC Data Low Register \n"
  "register DAC0_SR     at 0x400CC020 $uint8 // DAC Status Register \n"
  "register DAC0_C0     at 0x400CC021 $uint8 // DAC Control Register \n"
  "let DAC_C0_DACEN  $uint8 = 0x80    // DAC Enable\n"
  "let DAC_C0_DACRFS $uint8 = 0x40    // DAC Reference Select\n"
  "let DAC_C0_DACTRGSEL $uint8 = 0x20    // DAC Trigger Select\n"
  "let DAC_C0_DACSWTRG  $uint8 = 0x10    // DAC Software Trigger\n"
  "let DAC_C0_LPEN  $uint8 = 0x08    // DAC Low Power Control\n"
  "let DAC_C0_DACBWIEN  $uint8 = 0x04    // DAC Buffer Watermark Interrupt Enable\n"
  "let DAC_C0_DACBTIEN $uint8 = 0x02    // DAC Buffer Read Pointer Top Flag Interrupt Enable\n"
  "let DAC_C0_DACBBIEN $uint8 = 0x01    // DAC Buffer Read Pointer Bottom Flag Interrupt Enable\n"
  "\n"
  "register DAC0_C1  at 0x400CC022 $uint8 // DAC Control Register 1 \n"
  "let DAC_C1_DMAEN $uint8 = 0x80    // DMA Enable Select\n"
  "//register DAC_C1_DACBFWM(n)  (((n) & 3) << 3)  // DAC Buffer Watermark Select\n"
  "//register DAC_C1_DACBFMD(n)  (((n) & 3) << 0)  // DAC Buffer Work Mode Select\n"
  "let DAC_C1_DACBFEN $uint8 = 0x00    // DAC Buffer Enable\n"
  "//\n"
  "register DAC0_C2  at 0x400CC023 $uint8 // DAC Control Register 2 \n"
  "//register DAC_C2_DACBFRP(n)  (((n) & 15) << 4)  // DAC Buffer Read Pointer\n"
  "//register DAC_C2_DACBFUP(n)  (((n) & 15) << 0)  // DAC Buffer Upper Limit\n"
  "//\n"
  "//\n"
  "////register MCG_C2_RANGE0(n)  ($uint8_t)(((n) & 0x03) << 4) // Frequency Range Select, Selects the frequency range for the crystal oscillator\n"
  "////register MCG_C2_LOCRE0   ($uint8_t)0x80   // Loss of Clock Reset Enable, Determines whether an interrupt or a reset request is made following a lo"
  "ss of OSC0 \n"
  "//\n"
  "//// Chapter 32: Comparator (CMP)\n"
  "register CMP0_CR0   at 0x40073000 $uint8 // CMP Control Register 0\n"
  "register CMP0_CR1   at 0x40073001 $uint8 // CMP Control Register 1\n"
  "register CMP0_FPR   at 0x40073002 $uint8 // CMP Filter Period Register\n"
  "register CMP0_SCR   at 0x40073003 $uint8 // CMP Status and Control Register\n"
  "register CMP0_DACCR at 0x40073004 $uint8 // DAC Control Register\n"
  "register CMP0_MUXCR at 0x40073005 $uint8 // MUX Control Register\n"
  "register CMP1_CR0   at 0x40073008 $uint8 // CMP Control Register 0\n"
  "register CMP1_CR1   at 0x40073009 $uint8 // CMP Control Register 1\n"
  "register CMP1_FPR   at 0x4007300A $uint8 // CMP Filter Period Register\n"
  "register CMP1_SCR   at 0x4007300B $uint8 // CMP Status and Control Register\n"
  "register CMP1_DACCR at 0x4007300C $uint8 // DAC Control Register\n"
  "register CMP1_MUXCR at 0x4007300D $uint8 // MUX Control Register\n"
  "//\n"
  "//// Chapter 33: Voltage Reference (VREFV1)\n"
  "register VREF_TRM  at 0x40074000 $uint8 // VREF Trim Register\n"
  "register VREF_SC   at 0x40074001 $uint8 // VREF Status and Control Register\n"
  "\n"
  "// Chapter 34: Programmable Delay Block (PDB)\n"
  "//register PDB0_SC    0x40036000 // Status and Control Register\n"
  "//register PDB_SC_LDMOD(n)   (((n) & 3) << 18) // Load Mode Select\n"
  "//register PDB_SC_PDBEIE   0x00020000  // Sequence Error Interrupt Enable\n"
  "//register PDB_SC_SWTRIG   0x00010000  // Software Trigger\n"
  "//register PDB_SC_DMAEN   0x00008000  // DMA Enable\n"
  "//register PDB_SC_PRESCALER(n)  (((n) & 7) << 12) // Prescaler Divider Select\n"
  "//register PDB_SC_TRGSEL(n)  (((n) & 15) << 8) // Trigger Input Source Select\n"
  "//register PDB_SC_PDBEN   0x00000080  // PDB Enable\n"
  "//register PDB_SC_PDBIF   0x00000040  // PDB Interrupt Flag\n"
  "//register PDB_SC_PDBIE   0x00000020  // PDB Interrupt Enable.\n"
  "//register PDB_SC_MULT(n)   (((n) & 3) << 2) // Multiplication Factor\n"
  "//register PDB_SC_CONT   0x00000002  // Continuous Mode Enable\n"
  "//register PDB_SC_LDOK   0x00000001  // Load OK\n"
  "//register PDB0_MOD   0x40036004 // Modulus Register\n"
  "//register PDB0_CNT   0x40036008 // Counter Register\n"
  "//register PDB0_IDLY   0x4003600C // Interrupt Delay Register\n"
  "//register PDB0_CH0C1   0x40036010 // Channel n Control Register 1\n"
  "//register PDB0_CH0S   0x40036014 // Channel n Status Register\n"
  "//register PDB0_CH0DLY0   0x40036018 // Channel n Delay 0 Register\n"
  "//register PDB0_CH0DLY1   0x4003601C // Channel n Delay 1 Register\n"
  "//register PDB0_POEN   0x40036190 // Pulse-Out n Enable Register\n"
  "//register PDB0_PO0DLY   0x40036194 // Pulse-Out n Delay Register\n"
  "//register PDB0_PO1DLY   0x40036198 // Pulse-Out n Delay Register\n"
  "//\n"
  "//// Chapter 35: FlexTimer Module (FTM)\n"
  "//register FTM0_SC    0x40038000 // Status And Control\n"
  "//register FTM_SC_TOF   0x80    // Timer Overflow Flag\n"
  "//register FTM_SC_TOIE   0x40    // Timer Overflow Interrupt Enable\n"
  "//register FTM_SC_CPWMS   0x20    // Center-Aligned PWM Select\n"
  "//register FTM_SC_CLKS(n)   (((n) & 3) << 3)  // Clock Source Selection\n"
  "//register FTM_SC_PS(n)   (((n) & 7) << 0)  // Prescale Factor Selection\n"
  "//register FTM0_CNT   0x40038004 // Counter\n"
  "//register FTM0_MOD   0x40038008 // Modulo\n"
  "//register FTM0_C0SC   0x4003800C // Channel 0 Status And Control\n"
  "//register FTM0_C0V   0x40038010 // Channel 0 Value\n"
  "//register FTM0_C1SC   0x40038014 // Channel 1 Status And Control\n"
  "//register FTM0_C1V   0x40038018 // Channel 1 Value\n"
  "//register FTM0_C2SC   0x4003801C // Channel 2 Status And Control\n"
  "//register FTM0_C2V   0x40038020 // Channel 2 Value\n"
  "//register FTM0_C3SC   0x40038024 // Channel 3 Status And Control\n"
  "//register FTM0_C3V   0x40038028 // Channel 3 Value\n"
  "//register FTM0_C4SC   0x4003802C // Channel 4 Status And Control\n"
  "//register FTM0_C4V   0x40038030 // Channel 4 Value\n"
  "//register FTM0_C5SC   0x40038034 // Channel 5 Status And Control\n"
  "//register FTM0_C5V   0x40038038 // Channel 5 Value\n"
  "//register FTM0_C6SC   0x4003803C // Channel 6 Status And Control\n"
  "//register FTM0_C6V   0x40038040 // Channel 6 Value\n"
  "//register FTM0_C7SC   0x40038044 // Channel 7 Status And Control\n"
  "//register FTM0_C7V   0x40038048 // Channel 7 Value\n"
  "//register FTM0_CNTIN   0x4003804C // Counter Initial Value\n"
  "//register FTM0_STATUS   0x40038050 // Capture And Compare Status\n"
  "//register FTM0_MODE   0x40038054 // Features Mode Selection\n"
  "//register FTM_MODE_FAULTIE  0x80    // Fault Interrupt Enable\n"
  "//register FTM_MODE_FAULTM(n)  (((n) & 3) << 5)  // Fault Control Mode\n"
  "//register FTM_MODE_CAPTEST  0x10    // Capture Test Mode Enable\n"
  "//register FTM_MODE_PWMSYNC  0x08    // PWM Synchronization Mode\n"
  "//register FTM_MODE_WPDIS   0x04    // Write Protection Disable\n"
  "//register FTM_MODE_INIT   0x02    // Initialize The Channels Output\n"
  "//register FTM_MODE_FTMEN   0x01    // FTM Enable\n"
  "//register FTM0_SYNC   0x40038058 // Synchronization\n"
  "//register FTM_SYNC_SWSYNC   0x80    // \n"
  "//register FTM_SYNC_TRIG2   0x40    // \n"
  "//register FTM_SYNC_TRIG1   0x20    // \n"
  "//register FTM_SYNC_TRIG0   0x10    // \n"
  "//register FTM_SYNC_SYNCHOM  0x08    // \n"
  "//register FTM_SYNC_REINIT   0x04    // \n"
  "//register FTM_SYNC_CNTMAX   0x02    // \n"
  "//register FTM_SYNC_CNTMIN   0x01    // \n"
  "//register FTM0_OUTINIT   0x4003805C // Initial State For Channels Output\n"
  "//register FTM0_OUTMASK   0x40038060 // Output Mask\n"
  "//register FTM0_COMBINE   0x40038064 // Function For Linked Channels\n"
  "//register FTM0_DEADTIME   0x40038068 // Deadtime Insertion Control\n"
  "//register FTM0_EXTTRIG   0x4003806C // FTM External Trigger\n"
  "//register FTM0_POL   0x40038070 // Channels Polarity\n"
  "//register FTM0_FMS   0x40038074 // Fault Mode Status\n"
  "//register FTM0_FILTER   0x40038078 // Input Capture Filter Control\n"
  "//register FTM0_FLTCTRL   0x4003807C // Fault Control\n"
  "//register FTM0_QDCTRL   0x40038080 // Quadrature Decoder Control And Status\n"
  "//register FTM0_CONF   0x40038084 // Configuration\n"
  "//register FTM0_FLTPOL   0x40038088 // FTM Fault Input Polarity\n"
  "//register FTM0_SYNCONF   0x4003808C // Synchronization Configuration\n"
  "//register FTM0_INVCTRL   0x40038090 // FTM Inverting Control\n"
  "//register FTM0_SWOCTRL   0x40038094 // FTM Software Output Control\n"
  "//register FTM0_PWMLOAD   0x40038098 // FTM PWM Load\n"
  "//register FTM1_SC    0x40039000 // Status And Control\n"
  "//register FTM1_CNT   0x40039004 // Counter\n"
  "//register FTM1_MOD   0x40039008 // Modulo\n"
  "//register FTM1_C0SC   0x4003900C // Channel 0 Status And Control\n"
  "//register FTM1_C0V   0x40039010 // Channel 0 Value\n"
  "//register FTM1_C1SC   0x40039014 // Channel 1 Status And Control\n"
  "//register FTM1_C1V   0x40039018 // Channel 1 Value\n"
  "//register FTM1_CNTIN   0x4003904C // Counter Initial Value\n"
  "//register FTM1_STATUS   0x40039050 // Capture And Compare Status\n"
  "//register FTM1_MODE   0x40039054 // Features Mode Selection\n"
  "//register FTM1_SYNC   0x40039058 // Synchronization\n"
  "//register FTM1_OUTINIT   0x4003905C // Initial State For Channels Output\n"
  "//register FTM1_OUTMASK   0x40039060 // Output Mask\n"
  "//register FTM1_COMBINE   0x40039064 // Function For Linked Channels\n"
  "//register FTM1_DEADTIME   0x40039068 // Deadtime Insertion Control\n"
  "//register FTM1_EXTTRIG   0x4003906C // FTM External Trigger\n"
  "//register FTM1_POL   0x40039070 // Channels Polarity\n"
  "//register FTM1_FMS   0x40039074 // Fault Mode Status\n"
  "//register FTM1_FILTER   0x40039078 // Input Capture Filter Control\n"
  "//register FTM1_FLTCTRL   0x4003907C // Fault Control\n"
  "//register FTM1_QDCTRL   0x40039080 // Quadrature Decoder Control And Status\n"
  "//register FTM1_CONF   0x40039084 // Configuration\n"
  "//register FTM1_FLTPOL   0x40039088 // FTM Fault Input Polarity\n"
  "//register FTM1_SYNCONF   0x4003908C // Synchronization Configuration\n"
  "//register FTM1_INVCTRL   0x40039090 // FTM Inverting Control\n"
  "//register FTM1_SWOCTRL   0x40039094 // FTM Software Output Control\n"
  "//register FTM1_PWMLOAD   0x40039098 // FTM PWM Load\n"
  "//register FTM2_SC    0x400B8000 // Status And Control\n"
  "//register FTM2_CNT   0x400B8004 // Counter\n"
  "//register FTM2_MOD   0x400B8008 // Modulo\n"
  "//register FTM2_C0SC   0x400B800C // Channel 0 Status And Control\n"
  "//register FTM2_C0V   0x400B8010 // Channel 0 Value\n"
  "//register FTM2_C1SC   0x400B8014 // Channel 1 Status And Control\n"
  "//register FTM2_C1V   0x400B8018 // Channel 1 Value\n"
  "//register FTM2_CNTIN   0x400B804C // Counter Initial Value\n"
  "//register FTM2_STATUS   0x400B8050 // Capture And Compare Status\n"
  "//register FTM2_MODE   0x400B8054 // Features Mode Selection\n"
  "//register FTM2_SYNC   0x400B8058 // Synchronization\n"
  "//register FTM2_OUTINIT   0x400B805C // Initial State For Channels Output\n"
  "//register FTM2_OUTMASK   0x400B8060 // Output Mask\n"
  "//register FTM2_COMBINE   0x400B8064 // Function For Linked Channels\n"
  "//register FTM2_DEADTIME   0x400B8068 // Deadtime Insertion Control\n"
  "//register FTM2_EXTTRIG   0x400B806C // FTM External Trigger\n"
  "//register FTM2_POL   0x400B8070 // Channels Polarity\n"
  "//register FTM2_FMS   0x400B8074 // Fault Mode Status\n"
  "//register FTM2_FILTER   0x400B8078 // Input Capture Filter Control\n"
  "//register FTM2_FLTCTRL   0x400B807C // Fault Control\n"
  "//register FTM2_QDCTRL   0x400B8080 // Quadrature Decoder Control And Status\n"
  "//register FTM2_CONF   0x400B8084 // Configuration\n"
  "//register FTM2_FLTPOL   0x400B8088 // FTM Fault Input Polarity\n"
  "//register FTM2_SYNCONF   0x400B808C // Synchronization Configuration\n"
  "//register FTM2_INVCTRL   0x400B8090 // FTM Inverting Control\n"
  "//register FTM2_SWOCTRL   0x400B8094 // FTM Software Output Control\n"
  "//register FTM2_PWMLOAD   0x400B8098 // FTM PWM Load\n"
  "//\n"
  "//// Chapter 36: Periodic Interrupt Timer (PIT)\n"
  "register PIT_MCR    at 0x40037000 $uint32 // PIT Module Control Register\n"
  "register PIT_LDVAL0 at 0x40037100 $uint32 // Timer Load Value Register\n"
  "register PIT_CVAL0  at 0x40037104 $uint32 // Current Timer Value Register\n"
  "register PIT_TCTRL0 at 0x40037108 $uint32 // Timer Control Register\n"
  "register PIT_TFLG0  at 0x4003710C $uint32 // Timer Flag Register\n"
  "register PIT_LDVAL1 at 0x40037110 $uint32 // Timer Load Value Register\n"
  "register PIT_CVAL1  at 0x40037114 $uint32 // Current Timer Value Register\n"
  "register PIT_TCTRL1 at 0x40037118 $uint32 // Timer Control Register\n"
  "register PIT_TFLG1  at 0x4003711C $uint32 // Timer Flag Register\n"
  "register PIT_LDVAL2 at 0x40037120 $uint32 // Timer Load Value Register\n"
  "register PIT_CVAL2  at 0x40037124 $uint32 // Current Timer Value Register\n"
  "register PIT_TCTRL2 at 0x40037128 $uint32 // Timer Control Register\n"
  "register PIT_TFLG2  at 0x4003712C $uint32 // Timer Flag Register\n"
  "register PIT_LDVAL3 at 0x40037130 $uint32 // Timer Load Value Register\n"
  "register PIT_CVAL3  at 0x40037134 $uint32 // Current Timer Value Register\n"
  "register PIT_TCTRL3 at 0x40037138 $uint32 // Timer Control Register\n"
  "register PIT_TFLG3  at 0x4003713C $uint32 // Timer Flag Register\n"
  "//\n"
  "//// Chapter 37: Low-Power Timer (LPTMR)\n"
  "//register LPTMR0_CSR   0x40040000 // Low Power Timer Control Status Register\n"
  "//register LPTMR0_PSR   0x40040004 // Low Power Timer Prescale Register\n"
  "//register LPTMR0_CMR   0x40040008 // Low Power Timer Compare Register\n"
  "//register LPTMR0_CNR   0x4004000C // Low Power Timer Counter Register\n"
  "//\n"
  "//// Chapter 38: Carrier Modulator Transmitter (CMT)\n"
  "//register CMT_CGH1  *(volatile $uint8_t  *)0x40062000 // CMT Carrier Generator High Data Register 1\n"
  "//register CMT_CGL1  *(volatile $uint8_t  *)0x40062001 // CMT Carrier Generator Low Data Register 1\n"
  "//register CMT_CGH2  *(volatile $uint8_t  *)0x40062002 // CMT Carrier Generator High Data Register 2\n"
  "//register CMT_CGL2  *(volatile $uint8_t  *)0x40062003 // CMT Carrier Generator Low Data Register 2\n"
  "//register CMT_OC   *(volatile $uint8_t  *)0x40062004 // CMT Output Control Register\n"
  "//register CMT_MSC   *(volatile $uint8_t  *)0x40062005 // CMT Modulator Status and Control Register\n"
  "//register CMT_CMD1  *(volatile $uint8_t  *)0x40062006 // CMT Modulator Data Register Mark High\n"
  "//register CMT_CMD2  *(volatile $uint8_t  *)0x40062007 // CMT Modulator Data Register Mark Low\n"
  "//register CMT_CMD3  *(volatile $uint8_t  *)0x40062008 // CMT Modulator Data Register Space High\n"
  "//register CMT_CMD4  *(volatile $uint8_t  *)0x40062009 // CMT Modulator Data Register Space Low\n"
  "//register CMT_PPS   *(volatile $uint8_t  *)0x4006200A // CMT Primary Prescaler Register\n"
  "//register CMT_DMA   *(volatile $uint8_t  *)0x4006200B // CMT Direct Memory Access Register\n"
  "//\n"
  "//// Chapter 39: Real Time Clock (RTC)\n"
  "register RTC_TSR at  0x4003D000 $uint32 // RTC Time Seconds Register\n"
  "register RTC_TPR at  0x4003D004 $uint32 // RTC Time Prescaler Register\n"
  "register RTC_TAR at  0x4003D008 $uint32 // RTC Time Alarm Register\n"
  "register RTC_TCR at  0x4003D00C $uint32 // RTC Time Compensation Register\n"
  "//register RTC_TCR_CIC(n)   (((n) & 255) << 24)  // Compensation Interval Counter\n"
  "//register RTC_TCR_TCV(n)   (((n) & 255) << 16)  // Time Compensation Value\n"
  "//register RTC_TCR_CIR(n)   (((n) & 255) << 8)  // Compensation Interval Register\n"
  "//register RTC_TCR_TCR(n)   (((n) & 255) << 0)  // Time Compensation Register\n"
  "register RTC_CR at  0x4003D010 $uint32 {// RTC Control Register\n"
  "  18, SC2P, SC4P, SC8P, SC16P,CKLO, OSCE, 4, UM, SUP, WPE, SWR\n"
  "}\n"
  " \n"
  "register RTC_SR at  0x4003D014 $uint32 // RTC Status Register\n"
  "let RTC_SR_TCE $uint32 = 0x00000010  \n"
  "let RTC_SR_TAF $uint32 = 0x00000004  // \n"
  "let RTC_SR_TOF $uint32 = 0x00000002  // \n"
  "let RTC_SR_TIF $uint32 = 0x00000001  // \n"
  "\n"
  "register RTC_LR  at 0x4003D018 $uint32 // RTC Lock Register\n"
  "register RTC_IER at 0x4003D01C $uint32 // RTC Interrupt Enable Register\n"
  "register RTC_WAR at 0x4003D800 $uint32 // RTC Write Access Register\n"
  "register RTC_RAR at 0x4003D804 $uint32 // RTC Read Access Register\n"
  "\n"
  "//// Chapter 40: Universal Serial Bus OTG Controller (USBOTG)\n"
  "//register USB0_PERID  *(const    $uint8_t  *)0x40072000 // Peripheral ID register\n"
  "//register USB0_IDCOMP  *(const    $uint8_t  *)0x40072004 // Peripheral ID Complement register\n"
  "//register USB0_REV  *(const    $uint8_t  *)0x40072008 // Peripheral Revision register\n"
  "//register USB0_ADDINFO  *(volatile $uint8_t  *)0x4007200C // Peripheral Additional Info register\n"
  "//register USB0_OTGIST *(volatile $uint8_t  *)0x40072010 // OTG Interrupt Status register\n"
  "//register USB_OTGISTAT_IDCHG  ($uint8_t)0x80   //\n"
  "//register USB_OTGISTAT_ONEMSEC  ($uint8_t)0x40   //\n"
  "//register USB_OTGISTAT_LINE_STATE_CHG ($uint8_t)0x20   //\n"
  "//register USB_OTGISTAT_SESSVLDCHG  ($uint8_t)0x08   //\n"
  "//register USB_OTGISTAT_B_SESS_CHG  ($uint8_t)0x04   //\n"
  "//register USB_OTGISTAT_AVBUSCHG  ($uint8_t)0x01   //\n"
  "//register USB0_OTGICR  *(volatile $uint8_t  *)0x40072014 // OTG Interrupt Control Register\n"
  "//register USB_OTGICR_IDEN   ($uint8_t)0x80   // \n"
  "//register USB_OTGICR_ONEMSECEN  ($uint8_t)0x40   // \n"
  "//register USB_OTGICR_LINESTATEEN  ($uint8_t)0x20   // \n"
  "//register USB_OTGICR_SESSVLDEN  ($uint8_t)0x08   // \n"
  "//register USB_OTGICR_BSESSEN  ($uint8_t)0x04   // \n"
  "//register USB_OTGICR_AVBUSEN  ($uint8_t)0x01   // \n"
  "//register USB0_OTGST *(volatile $uint8_t  *)0x40072018 // OTG Status register\n"
  "//register USB_OTGSTAT_ID   ($uint8_t)0x80   // \n"
  "//register USB_OTGSTAT_ONEMSECEN  ($uint8_t)0x40   // \n"
  "//register USB_OTGSTAT_LINESTATESTABLE ($uint8_t)0x20   // \n"
  "//register USB_OTGSTAT_SESS_VLD  ($uint8_t)0x08   // \n"
  "//register USB_OTGSTAT_BSESSEND  ($uint8_t)0x04   // \n"
  "//register USB_OTGSTAT_AVBUSVLD  ($uint8_t)0x01   // \n"
  "//register USB0_OTGCTL  *(volatile $uint8_t  *)0x4007201C // OTG Control Register\n"
  "//register USB_OTGCTL_DPHIGH  ($uint8_t)0x80   // \n"
  "//register USB_OTGCTL_DPLOW  ($uint8_t)0x20   // \n"
  "//register USB_OTGCTL_DMLOW  ($uint8_t)0x10   // \n"
  "//register USB_OTGCTL_OTGEN  ($uint8_t)0x04   // \n"
  "//register USB0_IST *(volatile $uint8_t  *)0x40072080 // Interrupt Status Register\n"
  "//register USB_ISTAT_STALL   ($uint8_t)0x80   // \n"
  "//register USB_ISTAT_ATTACH  ($uint8_t)0x40   // \n"
  "//register USB_ISTAT_RESUME  ($uint8_t)0x20   // \n"
  "//register USB_ISTAT_SLEEP   ($uint8_t)0x10   // \n"
  "//register USB_ISTAT_TOKDNE  ($uint8_t)0x08   // \n"
  "//register USB_ISTAT_SOFTOK  ($uint8_t)0x04   // \n"
  "//register USB_ISTAT_ERROR   ($uint8_t)0x02   // \n"
  "//register USB_ISTAT_USBRST  ($uint8_t)0x01   // \n"
  "//register USB0_INTEN  *(volatile $uint8_t  *)0x40072084 // Interrupt Enable Register\n"
  "//register USB_INTEN_STALLEN  ($uint8_t)0x80   // \n"
  "//register USB_INTEN_ATTACHEN  ($uint8_t)0x40   // \n"
  "//register USB_INTEN_RESUMEEN  ($uint8_t)0x20   // \n"
  "//register USB_INTEN_SLEEPEN  ($uint8_t)0x10   // \n"
  "//register USB_INTEN_TOKDNEEN  ($uint8_t)0x08   // \n"
  "//register USB_INTEN_SOFTOKEN  ($uint8_t)0x04   // \n"
  "//register USB_INTEN_ERROREN  ($uint8_t)0x02   // \n"
  "//register USB_INTEN_USBRSTEN  ($uint8_t)0x01   // \n"
  "//register USB0_ERRST *(volatile $uint8_t  *)0x40072088 // Error Interrupt Status Register\n"
  "//register USB_ERRSTAT_BTSERR  ($uint8_t)0x80   // \n"
  "//register USB_ERRSTAT_DMAERR  ($uint8_t)0x20   // \n"
  "//register USB_ERRSTAT_BTOERR  ($uint8_t)0x10   // \n"
  "//register USB_ERRSTAT_DFN8  ($uint8_t)0x08   // \n"
  "//register USB_ERRSTAT_CRC16  ($uint8_t)0x04   // \n"
  "//register USB_ERRSTAT_CRC5EOF  ($uint8_t)0x02   // \n"
  "//register USB_ERRSTAT_PIDERR  ($uint8_t)0x01   // \n"
  "//register USB0_ERREN  *(volatile $uint8_t  *)0x4007208C // Error Interrupt Enable Register\n"
  "//register USB_ERREN_BTSERREN  ($uint8_t)0x80   // \n"
  "//register USB_ERREN_DMAERREN  ($uint8_t)0x20   // \n"
  "//register USB_ERREN_BTOERREN  ($uint8_t)0x10   // \n"
  "//register USB_ERREN_DFN8EN  ($uint8_t)0x08   // \n"
  "//register USB_ERREN_CRC16EN  ($uint8_t)0x04   // \n"
  "//register USB_ERREN_CRC5EOFEN  ($uint8_t)0x02   // \n"
  "//register USB_ERREN_PIDERREN  ($uint8_t)0x01   // \n"
  "//register USB0_ST *(volatile $uint8_t  *)0x40072090 // Status Register\n"
  "//register USB_STAT_TX   ($uint8_t)0x08   // \n"
  "//register USB_STAT_ODD   ($uint8_t)0x04   // \n"
  "//register USB_STAT_ENDP(n)  ($uint8_t)((n) >> 4)  // \n"
  "//register USB0_CTL  *(volatile $uint8_t  *)0x40072094 // Control Register\n"
  "//register USB_CTL_JSTATE   ($uint8_t)0x80   // \n"
  "//register USB_CTL_SE0   ($uint8_t)0x40   // \n"
  "//register USB_CTL_TXSUSPENDTOKENBUSY ($uint8_t)0x20   // \n"
  "//register USB_CTL_RESET   ($uint8_t)0x10   // \n"
  "//register USB_CTL_HOSTMODEEN  ($uint8_t)0x08   // \n"
  "//register USB_CTL_RESUME   ($uint8_t)0x04   // \n"
  "//register USB_CTL_ODDRST   ($uint8_t)0x02   // \n"
  "//register USB_CTL_USBENSOFEN  ($uint8_t)0x01   // \n"
  "//register USB0_ADDR  *(volatile $uint8_t  *)0x40072098 // Address Register\n"
  "//register USB0_BDTPAGE1  *(volatile $uint8_t  *)0x4007209C // BDT Page Register 1\n"
  "//register USB0_FRMNUML  *(volatile $uint8_t  *)0x400720A0 // Frame Number Register Low\n"
  "//register USB0_FRMNUMH  *(volatile $uint8_t  *)0x400720A4 // Frame Number Register High\n"
  "//register USB0_TOKEN  *(volatile $uint8_t  *)0x400720A8 // Token Register\n"
  "//register USB0_SOFTHLD  *(volatile $uint8_t  *)0x400720AC // SOF Threshold Register\n"
  "//register USB0_BDTPAGE2  *(volatile $uint8_t  *)0x400720B0 // BDT Page Register 2\n"
  "//register USB0_BDTPAGE3  *(volatile $uint8_t  *)0x400720B4 // BDT Page Register 3\n"
  "//register USB0_ENDPT0  *(volatile $uint8_t  *)0x400720C0 // Endpoint Control Register\n"
  "//register USB_ENDPT_HOSTWOHUB  ($uint8_t)0x80   // host only, enable low speed\n"
  "//register USB_ENDPT_RETRYDIS  ($uint8_t)0x40   // host only, set to disable NAK retry\n"
  "//register USB_ENDPT_EPCTLDIS  ($uint8_t)0x10   // 0=control, 1=bulk, interrupt, isync\n"
  "//register USB_ENDPT_EPRXEN  ($uint8_t)0x08   // enables the endpoint for RX transfers.\n"
  "//register USB_ENDPT_EPTXEN  ($uint8_t)0x04   // enables the endpoint for TX transfers.\n"
  "//register USB_ENDPT_EPSTALL  ($uint8_t)0x02   // set to stall endpoint\n"
  "//register USB_ENDPT_EPHSHK  ($uint8_t)0x01   // enable handshaking during a transaction, generally set unless Isochronous\n"
  "//register USB0_ENDPT1  *(volatile $uint8_t  *)0x400720C4 // Endpoint Control Register\n"
  "//register USB0_ENDPT2  *(volatile $uint8_t  *)0x400720C8 // Endpoint Control Register\n"
  "//register USB0_ENDPT3  *(volatile $uint8_t  *)0x400720CC // Endpoint Control Register\n"
  "//register USB0_ENDPT4  *(volatile $uint8_t  *)0x400720D0 // Endpoint Control Register\n"
  "//register USB0_ENDPT5  *(volatile $uint8_t  *)0x400720D4 // Endpoint Control Register\n"
  "//register USB0_ENDPT6  *(volatile $uint8_t  *)0x400720D8 // Endpoint Control Register\n"
  "//register USB0_ENDPT7  *(volatile $uint8_t  *)0x400720DC // Endpoint Control Register\n"
  "//register USB0_ENDPT8  *(volatile $uint8_t  *)0x400720E0 // Endpoint Control Register\n"
  "//register USB0_ENDPT9  *(volatile $uint8_t  *)0x400720E4 // Endpoint Control Register\n"
  "//register USB0_ENDPT10  *(volatile $uint8_t  *)0x400720E8 // Endpoint Control Register\n"
  "//register USB0_ENDPT11  *(volatile $uint8_t  *)0x400720EC // Endpoint Control Register\n"
  "//register USB0_ENDPT12  *(volatile $uint8_t  *)0x400720F0 // Endpoint Control Register\n"
  "//register USB0_ENDPT13  *(volatile $uint8_t  *)0x400720F4 // Endpoint Control Register\n"
  "//register USB0_ENDPT14  *(volatile $uint8_t  *)0x400720F8 // Endpoint Control Register\n"
  "//register USB0_ENDPT15  *(volatile $uint8_t  *)0x400720FC // Endpoint Control Register\n"
  "//register USB0_USBCTRL  *(volatile $uint8_t  *)0x40072100 // USB Control Register\n"
  "//register USB_USBCTRL_SUSP  ($uint8_t)0x80   // Places the USB transceiver into the suspend state.\n"
  "//register USB_USBCTRL_PDE   ($uint8_t)0x40   // Enables the weak pulldowns on the USB transceiver.\n"
  "//register USB0_OBSERVE  *(volatile $uint8_t  *)0x40072104 // USB OTG Observe Register\n"
  "//register USB_OBSERVE_DPPU  ($uint8_t)0x80   // \n"
  "//register USB_OBSERVE_DPPD  ($uint8_t)0x40   // \n"
  "//register USB_OBSERVE_DMPD  ($uint8_t)0x10   // \n"
  "//register USB0_CONTROL  *(volatile $uint8_t  *)0x40072108 // USB OTG Control Register\n"
  "//register USB_CONTROL_DPPULLUPNONOTG ($uint8_t)0x10   //  Provides control of the DP PULLUP in the USB OTG module, if USB is configured in non-OTG de"
  "vice mode.\n"
  "//register USB0_USBTRC0  *(volatile $uint8_t  *)0x4007210C // USB Transceiver Control Register 0\n"
  "//register USB_USBTRC_USBRESET  ($uint8_t)0x80   //\n"
  "//register USB_USBTRC_USBRESMEN  ($uint8_t)0x20   //\n"
  "//register USB_USBTRC_SYNC_DET  ($uint8_t)0x02   //\n"
  "//register USB_USBTRC_USB_RESUME_INT ($uint8_t)0x01   //\n"
  "//register USB0_USBFRMADJUST *(volatile $uint8_t  *)0x40072114 // Frame Adjust Register\n"
  "//\n"
  "//// Chapter 41: USB Device Charger Detection Module (USBDCD)\n"
  "//register USBDCD_CONTROL   0x40035000 // Control register\n"
  "//register USBDCD_CLOCK   0x40035004 // Clock register\n"
  "//register USBDCD_STATUS   0x40035008 // Status register\n"
  "//register USBDCD_TIMER0   0x40035010 // TIMER0 register\n"
  "//register USBDCD_TIMER1   0x40035014 // TIMER1 register\n"
  "//register USBDCD_TIMER2   0x40035018 // TIMER2 register\n"
  "//\n"
  "//// Chapter 43: SPI (DSPI)\n"
  "//register SPI0_MCR   0x4002C000 // DSPI Module Configuration Register\n"
  "//register SPI_MCR_MSTR    0x80000000  // Master/Slave Mode Select\n"
  "//register SPI_MCR_CONT_SCKE   0x40000000  // \n"
  "//register SPI_MCR_DCONF(n)  (((n) & 3) << 28)  // \n"
  "//register SPI_MCR_FRZ    0x08000000  // \n"
  "//register SPI_MCR_MTFE    0x04000000  // \n"
  "//register SPI_MCR_ROOE    0x01000000  // \n"
  "//register SPI_MCR_PCSIS(n)  (((n) & 0x1F) << 16)  //\n"
  "//register SPI_MCR_DOZE    0x00008000  // \n"
  "//register SPI_MCR_MDIS    0x00004000  // \n"
  "//register SPI_MCR_DIS_TXF    0x00002000  // \n"
  "//register SPI_MCR_DIS_RXF    0x00001000  // \n"
  "//register SPI_MCR_CLR_TXF    0x00000800  // \n"
  "//register SPI_MCR_CLR_RXF    0x00000400  // \n"
  "//register SPI_MCR_SMPL_PT(n)  (((n) & 3) << 8)  //\n"
  "//register SPI_MCR_HALT    0x00000001  // \n"
  "//register SPI0_TCR   0x4002C008 // DSPI Transfer Count Register\n"
  "//register SPI0_CTAR0   0x4002C00C // DSPI Clock and Transfer Attributes Register, In Master Mode\n"
  "//register SPI_CTAR_DBR    0x80000000  // Double Baud Rate\n"
  "//register SPI_CTAR_FMSZ(n)  (((n) & 15) << 27)  // Frame Size (+1)\n"
  "//register SPI_CTAR_CPOL    0x04000000  // Clock Polarity\n"
  "//register SPI_CTAR_CPHA    0x02000000  // Clock Phase\n"
  "//register SPI_CTAR_LSBFE    0x01000000  // LSB First\n"
  "//register SPI_CTAR_PCSSCK(n)  (((n) & 3) << 22)  // PCS to SCK Delay Prescaler\n"
  "//register SPI_CTAR_PASC(n)  (((n) & 3) << 20)  // After SCK Delay Prescaler\n"
  "//register SPI_CTAR_PDT(n)   (((n) & 3) << 18)  // Delay after Transfer Prescaler\n"
  "//register SPI_CTAR_PBR(n)   (((n) & 3) << 16)  // Baud Rate Prescaler\n"
  "//register SPI_CTAR_CSSCK(n)  (((n) & 15) << 12)  // PCS to SCK Delay Scaler\n"
  "//register SPI_CTAR_ASC(n)   (((n) & 15) << 8)  // After SCK Delay Scaler\n"
  "//register SPI_CTAR_DT(n)   (((n) & 15) << 4)  // Delay After Transfer Scaler\n"
  "//register SPI_CTAR_BR(n)   (((n) & 15) << 0)  // Baud Rate Scaler\n"
  "//register SPI0_CTAR0_SLAVE  0x4002C00C // DSPI Clock and Transfer Attributes Register, In Slave Mode\n"
  "//register SPI0_CTAR1   0x4002C010 // DSPI Clock and Transfer Attributes Register, In Master Mode\n"
  "//register SPI0_SR    0x4002C02C // DSPI Status Register\n"
  "//register SPI_SR_TCF    0x80000000  // Transfer Complete Flag\n"
  "//register SPI_SR_TXRXS    0x40000000  // TX and RX Status\n"
  "//register SPI_SR_EOQF    0x10000000  // End of Queue Flag\n"
  "//register SPI_SR_TFUF    0x08000000  // Transmit FIFO Underflow Flag\n"
  "//register SPI_SR_TFFF    0x02000000  // Transmit FIFO Fill Flag\n"
  "//register SPI_SR_RFOF    0x00080000  // Receive FIFO Overflow Flag\n"
  "//register SPI_SR_RFDF    0x00020000  // Receive FIFO Drain Flag\n"
  "//register SPI0_RSER   0x4002C030 // DSPI DMA/Interrupt Request Select and Enable Register\n"
  "//register SPI_RSER_TCF_RE    0x80000000  // Transmission Complete Request Enable\n"
  "//register SPI_RSER_EOQF_RE   0x10000000  // DSPI Finished Request Request Enable\n"
  "//register SPI_RSER_TFUF_RE   0x08000000  // Transmit FIFO Underflow Request Enable\n"
  "//register SPI_RSER_TFFF_RE   0x02000000  // Transmit FIFO Fill Request Enable\n"
  "//register SPI_RSER_TFFF_DIRS   0x01000000  // Transmit FIFO FIll Dma or Interrupt Request Select\n"
  "//register SPI_RSER_RFOF_RE   0x00080000  // Receive FIFO Overflow Request Enable\n"
  "//register SPI_RSER_RFDF_RE   0x00020000  // Receive FIFO Drain Request Enable\n"
  "//register SPI_RSER_RFDF_DIRS   0x00010000  // Receive FIFO Drain DMA or Interrupt Request Select\n"
  "//register SPI0_PUSHR   0x4002C034 // DSPI PUSH TX FIFO Register In Master Mode\n"
  "//register SPI_PUSHR_CONT    0x80000000  // \n"
  "//register SPI_PUSHR_CTAS(n)  (((n) & 7) << 28)  // \n"
  "//register SPI_PUSHR_EOQ    0x08000000  // \n"
  "//register SPI_PUSHR_CTCNT    0x04000000  // \n"
  "//register SPI_PUSHR_PCS(n)  (((n) & 31) << 16)  //\n"
  "//register SPI0_PUSHR_SLAVE  0x4002C034 // DSPI PUSH TX FIFO Register In Slave Mode\n"
  "//register SPI0_POPR   0x4002C038 // DSPI POP RX FIFO Register\n"
  "//register SPI0_TXFR0   0x4002C03C // DSPI Transmit FIFO Registers\n"
  "//register SPI0_TXFR1   0x4002C040 // DSPI Transmit FIFO Registers\n"
  "//register SPI0_TXFR2   0x4002C044 // DSPI Transmit FIFO Registers\n"
  "//register SPI0_TXFR3   0x4002C048 // DSPI Transmit FIFO Registers\n"
  "//register SPI0_RXFR0   0x4002C07C // DSPI Receive FIFO Registers\n"
  "//register SPI0_RXFR1   0x4002C080 // DSPI Receive FIFO Registers\n"
  "//register SPI0_RXFR2   0x4002C084 // DSPI Receive FIFO Registers\n"
  "//register SPI0_RXFR3   0x4002C088 // DSPI Receive FIFO Registers\n"
  "//typedef struct {\n"
  "// volatile $uint32_t MCR; // 0\n"
  "// volatile $uint32_t unused1;// 4\n"
  "// volatile $uint32_t TCR; // 8\n"
  "// volatile $uint32_t CTAR0; // c\n"
  "// volatile $uint32_t CTAR1; // 10\n"
  "// volatile $uint32_t CTAR2; // 14\n"
  "// volatile $uint32_t CTAR3; // 18\n"
  "// volatile $uint32_t CTAR4; // 1c\n"
  "// volatile $uint32_t CTAR5; // 20\n"
  "// volatile $uint32_t CTAR6; // 24\n"
  "// volatile $uint32_t CTAR7; // 28\n"
  "// volatile $uint32_t SR; // 2c\n"
  "// volatile $uint32_t RSER; // 30\n"
  "// volatile $uint32_t PUSHR; // 34\n"
  "// volatile $uint32_t POPR; // 38\n"
  "// volatile $uint32_t TXFR[16]; // 3c\n"
  "// volatile $uint32_t RXFR[16]; // 7c\n"
  "//} SPI_t;\n"
  "//register SPI0  (*(SPI_t *)0x4002C000)\n"
  "//\n"
  "//// Chapter 44: Inter-Integrated Circuit (I2C)\n"
  "//register I2C0_A1   *(volatile $uint8_t  *)0x40066000 // I2C Address Register 1\n"
  "//register I2C0_F   *(volatile $uint8_t  *)0x40066001 // I2C Frequency Divider register\n"
  "//register I2C0_C1   *(volatile $uint8_t  *)0x40066002 // I2C Control Register 1\n"
  "//register I2C_C1_IICEN   ($uint8_t)0x80   // I2C Enable\n"
  "//register I2C_C1_IICIE   ($uint8_t)0x40   // I2C Interrupt Enable\n"
  "//register I2C_C1_MST   ($uint8_t)0x20   // Master Mode Select\n"
  "//register I2C_C1_TX   ($uint8_t)0x10   // Transmit Mode Select\n"
  "//register I2C_C1_TXAK   ($uint8_t)0x08   // Transmit Acknowledge Enable\n"
  "//register I2C_C1_RSTA   ($uint8_t)0x04   // RepeSTART\n"
  "//register I2C_C1_WUEN   ($uint8_t)0x02   // Wakeup Enable\n"
  "//register I2C_C1_DMAEN   ($uint8_t)0x01   // DMA Enable\n"
  "//register I2C0_S   *(volatile $uint8_t  *)0x40066003 // I2C Status register\n"
  "//register I2C_S_TCF   ($uint8_t)0x80   // Transfer Complete Flag\n"
  "//register I2C_S_IAAS   ($uint8_t)0x40   // Addressed As A Slave\n"
  "//register I2C_S_BUSY   ($uint8_t)0x20   // Bus Busy\n"
  "//register I2C_S_ARBL   ($uint8_t)0x10   // Arbitration Lost\n"
  "//register I2C_S_RAM   ($uint8_t)0x08   // Range Address Match\n"
  "//register I2C_S_SRW   ($uint8_t)0x04   // Slave Read/Write\n"
  "//register I2C_S_IICIF   ($uint8_t)0x02   // Interrupt Flag\n"
  "//register I2C_S_RXAK   ($uint8_t)0x01   // Receive Acknowledge\n"
  "//register I2C0_D   *(volatile $uint8_t  *)0x40066004 // I2C Data I/O register\n"
  "//register I2C0_C2   *(volatile $uint8_t  *)0x40066005 // I2C Control Register 2\n"
  "//register I2C_C2_GCAEN   ($uint8_t)0x80   // General Call Address Enable\n"
  "//register I2C_C2_ADEXT   ($uint8_t)0x40   // Address Extension\n"
  "//register I2C_C2_HDRS   ($uint8_t)0x20   // High Drive Select\n"
  "//register I2C_C2_SBRC   ($uint8_t)0x10   // Slave Baud Rate Control\n"
  "//register I2C_C2_RMEN   ($uint8_t)0x08   // Range Address Matching Enable\n"
  "//register I2C_C2_AD(n)   ((n) & 7)   // Slave Address, upper 3 bits\n"
  "//register I2C0_FLT  *(volatile $uint8_t  *)0x40066006 // I2C Programmable Input Glitch Filter register\n"
  "//register I2C0_RA   *(volatile $uint8_t  *)0x40066007 // I2C Range Address register\n"
  "//register I2C0_SMB  *(volatile $uint8_t  *)0x40066008 // I2C SMBus Control and Status register\n"
  "//register I2C0_A2   *(volatile $uint8_t  *)0x40066009 // I2C Address Register 2\n"
  "//register I2C0_SLTH  *(volatile $uint8_t  *)0x4006600A // I2C SCL Low Timeout Register High\n"
  "//register I2C0_SLTL  *(volatile $uint8_t  *)0x4006600B // I2C SCL Low Timeout Register Low\n"
  "//\n"
  "//register I2C1_A1   *(volatile $uint8_t  *)0x40067000 // I2C Address Register 1\n"
  "//register I2C1_F   *(volatile $uint8_t  *)0x40067001 // I2C Frequency Divider register\n"
  "//register I2C1_C1   *(volatile $uint8_t  *)0x40067002 // I2C Control Register 1\n"
  "//register I2C1_S   *(volatile $uint8_t  *)0x40067003 // I2C Status register\n"
  "//register I2C1_D   *(volatile $uint8_t  *)0x40067004 // I2C Data I/O register\n"
  "//register I2C1_C2   *(volatile $uint8_t  *)0x40067005 // I2C Control Register 2\n"
  "//register I2C1_FLT  *(volatile $uint8_t  *)0x40067006 // I2C Programmable Input Glitch Filter register\n"
  "//register I2C1_RA   *(volatile $uint8_t  *)0x40067007 // I2C Range Address register\n"
  "//register I2C1_SMB  *(volatile $uint8_t  *)0x40067008 // I2C SMBus Control and Status register\n"
  "//register I2C1_A2   *(volatile $uint8_t  *)0x40067009 // I2C Address Register 2\n"
  "//register I2C1_SLTH  *(volatile $uint8_t  *)0x4006700A // I2C SCL Low Timeout Register High\n"
  "//register I2C1_SLTL  *(volatile $uint8_t  *)0x4006700B // I2C SCL Low Timeout Register Low\n"
  "//\n"
  "//// Chapter 45: Universal Asynchronous Receiver/Transmitter (UART)\n"
  "//register UART0_BDH  *(volatile $uint8_t  *)0x4006A000 // UART Baud Rate Registers: High\n"
  "//register UART0_BDL  *(volatile $uint8_t  *)0x4006A001 // UART Baud Rate Registers: Low\n"
  "//register UART0_C1  *(volatile $uint8_t  *)0x4006A002 // UART Control Register 1\n"
  "//register UART_C1_LOOPS   ($uint8_t)0x80   // When LOOPS is set, the RxD pin is disconnected from the UART and the transmitter output is internally c"
  "onnected to the receiver input\n"
  "//register UART_C1_UARTSWAI  ($uint8_t)0x40   // UART Stops in Wait Mode\n"
  "//register UART_C1_RSRC   ($uint8_t)0x20   // When LOOPS is set, the RSRC field determines the source for the receiver shift register input\n"
  "//register UART_C1_M   ($uint8_t)0x10   // 9-bit or 8-bit Mode Select\n"
  "//register UART_C1_WAKE   ($uint8_t)0x08   // Determines which condition wakes the UART\n"
  "//register UART_C1_ILT   ($uint8_t)0x04   // Idle Line Type Select\n"
  "//register UART_C1_PE   ($uint8_t)0x02   // Parity Enable\n"
  "//register UART_C1_PT   ($uint8_t)0x01   // Parity Type, 0=even, 1=odd\n"
  "//register UART0_C2  *(volatile $uint8_t  *)0x4006A003 // UART Control Register 2\n"
  "//register UART_C2_TIE   ($uint8_t)0x80   // Transmitter Interrupt or DMA Transfer Enable.\n"
  "//register UART_C2_TCIE   ($uint8_t)0x40   // Transmission Complete Interrupt Enable\n"
  "//register UART_C2_RIE   ($uint8_t)0x20   // Receiver Full Interrupt or DMA Transfer Enable\n"
  "//register UART_C2_ILIE   ($uint8_t)0x10   // Idle Line Interrupt Enable\n"
  "//register UART_C2_TE   ($uint8_t)0x08   // Transmitter Enable\n"
  "//register UART_C2_RE   ($uint8_t)0x04   // Receiver Enable\n"
  "//register UART_C2_RWU   ($uint8_t)0x02   // Receiver Wakeup Control\n"
  "//register UART_C2_SBK   ($uint8_t)0x01   // Send Break\n"
  "//register UART0_S1  *(volatile $uint8_t  *)0x4006A004 // UART Status Register 1\n"
  "//register UART_S1_TDRE   ($uint8_t)0x80   // Transmit Data Register Empty Flag\n"
  "//register UART_S1_TC   ($uint8_t)0x40   // Transmit Complete Flag\n"
  "//register UART_S1_RDRF   ($uint8_t)0x20   // Receive Data Register Full Flag\n"
  "//register UART_S1_IDLE   ($uint8_t)0x10   // Idle Line Flag\n"
  "//register UART_S1_OR   ($uint8_t)0x08   // Receiver Overrun Flag\n"
  "//register UART_S1_NF   ($uint8_t)0x04   // Noise Flag\n"
  "//register UART_S1_FE   ($uint8_t)0x02   // Framing Error Flag\n"
  "//register UART_S1_PF   ($uint8_t)0x01   // Parity Error Flag\n"
  "//register UART0_S2  *(volatile $uint8_t  *)0x4006A005 // UART Status Register 2\n"
  "//register UART0_C3  *(volatile $uint8_t  *)0x4006A006 // UART Control Register 3\n"
  "//register UART0_D   *(volatile $uint8_t  *)0x4006A007 // UART Data Register\n"
  "//register UART0_MA1  *(volatile $uint8_t  *)0x4006A008 // UART Match Address Registers 1\n"
  "//register UART0_MA2  *(volatile $uint8_t  *)0x4006A009 // UART Match Address Registers 2\n"
  "//register UART0_C4  *(volatile $uint8_t  *)0x4006A00A // UART Control Register 4\n"
  "//register UART0_C5  *(volatile $uint8_t  *)0x4006A00B // UART Control Register 5\n"
  "//register UART0_ED  *(volatile $uint8_t  *)0x4006A00C // UART Extended Data Register\n"
  "//register UART0_MODEM  *(volatile $uint8_t  *)0x4006A00D // UART Modem Register\n"
  "//register UART0_IR  *(volatile $uint8_t  *)0x4006A00E // UART Infrared Register\n"
  "//register UART0_PFIFO  *(volatile $uint8_t  *)0x4006A010 // UART FIFO Parameters\n"
  "//register UART_PFIFO_TXFE   ($uint8_t)0x80\n"
  "//register UART_PFIFO_RXFE   ($uint8_t)0x08\n"
  "//register UART0_CFIFO  *(volatile $uint8_t  *)0x4006A011 // UART FIFO Control Register\n"
  "//register UART_CFIFO_TXFLUSH  ($uint8_t)0x80   // \n"
  "//register UART_CFIFO_RXFLUSH  ($uint8_t)0x40   // \n"
  "//register UART_CFIFO_RXOFE  ($uint8_t)0x04   // \n"
  "//register UART_CFIFO_TXOFE  ($uint8_t)0x02   // \n"
  "//register UART_CFIFO_RXUFE  ($uint8_t)0x01   // \n"
  "//register UART0_SFIFO  *(volatile $uint8_t  *)0x4006A012 // UART FIFO Status Register\n"
  "//register UART_SFIFO_TXEMPT  ($uint8_t)0x80\n"
  "//register UART_SFIFO_RXEMPT  ($uint8_t)0x40\n"
  "//register UART_SFIFO_RXOF   ($uint8_t)0x04\n"
  "//register UART_SFIFO_TXOF   ($uint8_t)0x02\n"
  "//register UART_SFIFO_RXUF   ($uint8_t)0x01\n"
  "//register UART0_TWFIFO  *(volatile $uint8_t  *)0x4006A013 // UART FIFO Transmit Watermark\n"
  "//register UART0_TCFIFO  *(volatile $uint8_t  *)0x4006A014 // UART FIFO Transmit Count\n"
  "//register UART0_RWFIFO  *(volatile $uint8_t  *)0x4006A015 // UART FIFO Receive Watermark\n"
  "//register UART0_RCFIFO  *(volatile $uint8_t  *)0x4006A016 // UART FIFO Receive Count\n"
  "//register UART0_C7816  *(volatile $uint8_t  *)0x4006A018 // UART 7816 Control Register\n"
  "//register UART0_IE7816  *(volatile $uint8_t  *)0x4006A019 // UART 7816 Interrupt Enable Register\n"
  "//register UART0_IS7816  *(volatile $uint8_t  *)0x4006A01A // UART 7816 Interrupt Status Register\n"
  "//register UART0_WP7816T0  *(volatile $uint8_t  *)0x4006A01B // UART 7816 Wait Parameter Register\n"
  "//register UART0_WP7816T1  *(volatile $uint8_t  *)0x4006A01B // UART 7816 Wait Parameter Register\n"
  "//register UART0_WN7816  *(volatile $uint8_t  *)0x4006A01C // UART 7816 Wait N Register\n"
  "//register UART0_WF7816  *(volatile $uint8_t  *)0x4006A01D // UART 7816 Wait FD Register\n"
  "//register UART0_ET7816  *(volatile $uint8_t  *)0x4006A01E // UART 7816 Error Threshold Register\n"
  "//register UART0_TL7816  *(volatile $uint8_t  *)0x4006A01F // UART 7816 Transmit Length Register\n"
  "//register UART0_C6  *(volatile $uint8_t  *)0x4006A021 // UART CEA709.1-B Control Register 6\n"
  "//register UART0_PCTH  *(volatile $uint8_t  *)0x4006A022 // UART CEA709.1-B Packet Cycle Time Counter High\n"
  "//register UART0_PCTL  *(volatile $uint8_t  *)0x4006A023 // UART CEA709.1-B Packet Cycle Time Counter Low\n"
  "//register UART0_B1T  *(volatile $uint8_t  *)0x4006A024 // UART CEA709.1-B Beta1 Timer\n"
  "//register UART0_SDTH  *(volatile $uint8_t  *)0x4006A025 // UART CEA709.1-B Secondary Delay Timer High\n"
  "//register UART0_SDTL  *(volatile $uint8_t  *)0x4006A026 // UART CEA709.1-B Secondary Delay Timer Low\n"
  "//register UART0_PRE  *(volatile $uint8_t  *)0x4006A027 // UART CEA709.1-B Preamble\n"
  "//register UART0_TPL  *(volatile $uint8_t  *)0x4006A028 // UART CEA709.1-B Transmit Packet Length\n"
  "//register UART0_IE  *(volatile $uint8_t  *)0x4006A029 // UART CEA709.1-B Interrupt Enable Register\n"
  "//register UART0_WB  *(volatile $uint8_t  *)0x4006A02A // UART CEA709.1-B WBASE\n"
  "//register UART0_S3  *(volatile $uint8_t  *)0x4006A02B // UART CEA709.1-B Status Register\n"
  "//register UART0_S4  *(volatile $uint8_t  *)0x4006A02C // UART CEA709.1-B Status Register\n"
  "//register UART0_RPL  *(volatile $uint8_t  *)0x4006A02D // UART CEA709.1-B Received Packet Length\n"
  "//register UART0_RPREL  *(volatile $uint8_t  *)0x4006A02E // UART CEA709.1-B Received Preamble Length\n"
  "//register UART0_CPW  *(volatile $uint8_t  *)0x4006A02F // UART CEA709.1-B Collision Pulse Width\n"
  "//register UART0_RIDT  *(volatile $uint8_t  *)0x4006A030 // UART CEA709.1-B Receive Indeterminate Time\n"
  "//register UART0_TIDT  *(volatile $uint8_t  *)0x4006A031 // UART CEA709.1-B Transmit Indeterminate Time\n"
  "//register UART1_BDH  *(volatile $uint8_t  *)0x4006B000 // UART Baud Rate Registers: High\n"
  "//register UART1_BDL  *(volatile $uint8_t  *)0x4006B001 // UART Baud Rate Registers: Low\n"
  "//register UART1_C1  *(volatile $uint8_t  *)0x4006B002 // UART Control Register 1\n"
  "//register UART1_C2  *(volatile $uint8_t  *)0x4006B003 // UART Control Register 2\n"
  "//register UART1_S1  *(volatile $uint8_t  *)0x4006B004 // UART Status Register 1\n"
  "//register UART1_S2  *(volatile $uint8_t  *)0x4006B005 // UART Status Register 2\n"
  "//register UART1_C3  *(volatile $uint8_t  *)0x4006B006 // UART Control Register 3\n"
  "//register UART1_D   *(volatile $uint8_t  *)0x4006B007 // UART Data Register\n"
  "//register UART1_MA1  *(volatile $uint8_t  *)0x4006B008 // UART Match Address Registers 1\n"
  "//register UART1_MA2  *(volatile $uint8_t  *)0x4006B009 // UART Match Address Registers 2\n"
  "//register UART1_C4  *(volatile $uint8_t  *)0x4006B00A // UART Control Register 4\n"
  "//register UART1_C5  *(volatile $uint8_t  *)0x4006B00B // UART Control Register 5\n"
  "//register UART1_ED  *(volatile $uint8_t  *)0x4006B00C // UART Extended Data Register\n"
  "//register UART1_MODEM  *(volatile $uint8_t  *)0x4006B00D // UART Modem Register\n"
  "//register UART1_IR  *(volatile $uint8_t  *)0x4006B00E // UART Infrared Register\n"
  "//register UART1_PFIFO  *(volatile $uint8_t  *)0x4006B010 // UART FIFO Parameters\n"
  "//register UART1_CFIFO  *(volatile $uint8_t  *)0x4006B011 // UART FIFO Control Register\n"
  "//register UART1_SFIFO  *(volatile $uint8_t  *)0x4006B012 // UART FIFO Status Register\n"
  "//register UART1_TWFIFO  *(volatile $uint8_t  *)0x4006B013 // UART FIFO Transmit Watermark\n"
  "//register UART1_TCFIFO  *(volatile $uint8_t  *)0x4006B014 // UART FIFO Transmit Count\n"
  "//register UART1_RWFIFO  *(volatile $uint8_t  *)0x4006B015 // UART FIFO Receive Watermark\n"
  "//register UART1_RCFIFO  *(volatile $uint8_t  *)0x4006B016 // UART FIFO Receive Count\n"
  "//register UART1_C7816  *(volatile $uint8_t  *)0x4006B018 // UART 7816 Control Register\n"
  "//register UART1_IE7816  *(volatile $uint8_t  *)0x4006B019 // UART 7816 Interrupt Enable Register\n"
  "//register UART1_IS7816  *(volatile $uint8_t  *)0x4006B01A // UART 7816 Interrupt Status Register\n"
  "//register UART1_WP7816T0  *(volatile $uint8_t  *)0x4006B01B // UART 7816 Wait Parameter Register\n"
  "//register UART1_WP7816T1  *(volatile $uint8_t  *)0x4006B01B // UART 7816 Wait Parameter Register\n"
  "//register UART1_WN7816  *(volatile $uint8_t  *)0x4006B01C // UART 7816 Wait N Register\n"
  "//register UART1_WF7816  *(volatile $uint8_t  *)0x4006B01D // UART 7816 Wait FD Register\n"
  "//register UART1_ET7816  *(volatile $uint8_t  *)0x4006B01E // UART 7816 Error Threshold Register\n"
  "//register UART1_TL7816  *(volatile $uint8_t  *)0x4006B01F // UART 7816 Transmit Length Register\n"
  "//register UART1_C6  *(volatile $uint8_t  *)0x4006B021 // UART CEA709.1-B Control Register 6\n"
  "//register UART1_PCTH  *(volatile $uint8_t  *)0x4006B022 // UART CEA709.1-B Packet Cycle Time Counter High\n"
  "//register UART1_PCTL  *(volatile $uint8_t  *)0x4006B023 // UART CEA709.1-B Packet Cycle Time Counter Low\n"
  "//register UART1_B1T  *(volatile $uint8_t  *)0x4006B024 // UART CEA709.1-B Beta1 Timer\n"
  "//register UART1_SDTH  *(volatile $uint8_t  *)0x4006B025 // UART CEA709.1-B Secondary Delay Timer High\n"
  "//register UART1_SDTL  *(volatile $uint8_t  *)0x4006B026 // UART CEA709.1-B Secondary Delay Timer Low\n"
  "//register UART1_PRE  *(volatile $uint8_t  *)0x4006B027 // UART CEA709.1-B Preamble\n"
  "//register UART1_TPL  *(volatile $uint8_t  *)0x4006B028 // UART CEA709.1-B Transmit Packet Length\n"
  "//register UART1_IE  *(volatile $uint8_t  *)0x4006B029 // UART CEA709.1-B Interrupt Enable Register\n"
  "//register UART1_WB  *(volatile $uint8_t  *)0x4006B02A // UART CEA709.1-B WBASE\n"
  "//register UART1_S3  *(volatile $uint8_t  *)0x4006B02B // UART CEA709.1-B Status Register\n"
  "//register UART1_S4  *(volatile $uint8_t  *)0x4006B02C // UART CEA709.1-B Status Register\n"
  "//register UART1_RPL  *(volatile $uint8_t  *)0x4006B02D // UART CEA709.1-B Received Packet Length\n"
  "//register UART1_RPREL  *(volatile $uint8_t  *)0x4006B02E // UART CEA709.1-B Received Preamble Length\n"
  "//register UART1_CPW  *(volatile $uint8_t  *)0x4006B02F // UART CEA709.1-B Collision Pulse Width\n"
  "//register UART1_RIDT  *(volatile $uint8_t  *)0x4006B030 // UART CEA709.1-B Receive Indeterminate Time\n"
  "//register UART1_TIDT  *(volatile $uint8_t  *)0x4006B031 // UART CEA709.1-B Transmit Indeterminate Time\n"
  "//register UART2_BDH  *(volatile $uint8_t  *)0x4006C000 // UART Baud Rate Registers: High\n"
  "//register UART2_BDL  *(volatile $uint8_t  *)0x4006C001 // UART Baud Rate Registers: Low\n"
  "//register UART2_C1  *(volatile $uint8_t  *)0x4006C002 // UART Control Register 1\n"
  "//register UART2_C2  *(volatile $uint8_t  *)0x4006C003 // UART Control Register 2\n"
  "//register UART2_S1  *(volatile $uint8_t  *)0x4006C004 // UART Status Register 1\n"
  "//register UART2_S2  *(volatile $uint8_t  *)0x4006C005 // UART Status Register 2\n"
  "//register UART2_C3  *(volatile $uint8_t  *)0x4006C006 // UART Control Register 3\n"
  "//register UART2_D   *(volatile $uint8_t  *)0x4006C007 // UART Data Register\n"
  "//register UART2_MA1  *(volatile $uint8_t  *)0x4006C008 // UART Match Address Registers 1\n"
  "//register UART2_MA2  *(volatile $uint8_t  *)0x4006C009 // UART Match Address Registers 2\n"
  "//register UART2_C4  *(volatile $uint8_t  *)0x4006C00A // UART Control Register 4\n"
  "//register UART2_C5  *(volatile $uint8_t  *)0x4006C00B // UART Control Register 5\n"
  "//register UART2_ED  *(volatile $uint8_t  *)0x4006C00C // UART Extended Data Register\n"
  "//register UART2_MODEM  *(volatile $uint8_t  *)0x4006C00D // UART Modem Register\n"
  "//register UART2_IR  *(volatile $uint8_t  *)0x4006C00E // UART Infrared Register\n"
  "//register UART2_PFIFO  *(volatile $uint8_t  *)0x4006C010 // UART FIFO Parameters\n"
  "//register UART2_CFIFO  *(volatile $uint8_t  *)0x4006C011 // UART FIFO Control Register\n"
  "//register UART2_SFIFO  *(volatile $uint8_t  *)0x4006C012 // UART FIFO Status Register\n"
  "//register UART2_TWFIFO  *(volatile $uint8_t  *)0x4006C013 // UART FIFO Transmit Watermark\n"
  "//register UART2_TCFIFO  *(volatile $uint8_t  *)0x4006C014 // UART FIFO Transmit Count\n"
  "//register UART2_RWFIFO  *(volatile $uint8_t  *)0x4006C015 // UART FIFO Receive Watermark\n"
  "//register UART2_RCFIFO  *(volatile $uint8_t  *)0x4006C016 // UART FIFO Receive Count\n"
  "//register UART2_C7816  *(volatile $uint8_t  *)0x4006C018 // UART 7816 Control Register\n"
  "//register UART2_IE7816  *(volatile $uint8_t  *)0x4006C019 // UART 7816 Interrupt Enable Register\n"
  "//register UART2_IS7816  *(volatile $uint8_t  *)0x4006C01A // UART 7816 Interrupt Status Register\n"
  "//register UART2_WP7816T0  *(volatile $uint8_t  *)0x4006C01B // UART 7816 Wait Parameter Register\n"
  "//register UART2_WP7816T1  *(volatile $uint8_t  *)0x4006C01B // UART 7816 Wait Parameter Register\n"
  "//register UART2_WN7816  *(volatile $uint8_t  *)0x4006C01C // UART 7816 Wait N Register\n"
  "//register UART2_WF7816  *(volatile $uint8_t  *)0x4006C01D // UART 7816 Wait FD Register\n"
  "//register UART2_ET7816  *(volatile $uint8_t  *)0x4006C01E // UART 7816 Error Threshold Register\n"
  "//register UART2_TL7816  *(volatile $uint8_t  *)0x4006C01F // UART 7816 Transmit Length Register\n"
  "//register UART2_C6  *(volatile $uint8_t  *)0x4006C021 // UART CEA709.1-B Control Register 6\n"
  "//register UART2_PCTH  *(volatile $uint8_t  *)0x4006C022 // UART CEA709.1-B Packet Cycle Time Counter High\n"
  "//register UART2_PCTL  *(volatile $uint8_t  *)0x4006C023 // UART CEA709.1-B Packet Cycle Time Counter Low\n"
  "//register UART2_B1T  *(volatile $uint8_t  *)0x4006C024 // UART CEA709.1-B Beta1 Timer\n"
  "//register UART2_SDTH  *(volatile $uint8_t  *)0x4006C025 // UART CEA709.1-B Secondary Delay Timer High\n"
  "//register UART2_SDTL  *(volatile $uint8_t  *)0x4006C026 // UART CEA709.1-B Secondary Delay Timer Low\n"
  "//register UART2_PRE  *(volatile $uint8_t  *)0x4006C027 // UART CEA709.1-B Preamble\n"
  "//register UART2_TPL  *(volatile $uint8_t  *)0x4006C028 // UART CEA709.1-B Transmit Packet Length\n"
  "//register UART2_IE  *(volatile $uint8_t  *)0x4006C029 // UART CEA709.1-B Interrupt Enable Register\n"
  "//register UART2_WB  *(volatile $uint8_t  *)0x4006C02A // UART CEA709.1-B WBASE\n"
  "//register UART2_S3  *(volatile $uint8_t  *)0x4006C02B // UART CEA709.1-B Status Register\n"
  "//register UART2_S4  *(volatile $uint8_t  *)0x4006C02C // UART CEA709.1-B Status Register\n"
  "//register UART2_RPL  *(volatile $uint8_t  *)0x4006C02D // UART CEA709.1-B Received Packet Length\n"
  "//register UART2_RPREL  *(volatile $uint8_t  *)0x4006C02E // UART CEA709.1-B Received Preamble Length\n"
  "//register UART2_CPW  *(volatile $uint8_t  *)0x4006C02F // UART CEA709.1-B Collision Pulse Width\n"
  "//register UART2_RIDT  *(volatile $uint8_t  *)0x4006C030 // UART CEA709.1-B Receive Indeterminate Time\n"
  "//register UART2_TIDT  *(volatile $uint8_t  *)0x4006C031 // UART CEA709.1-B Transmit Indeterminate Time\n"
  "//\n"
  "//// Chapter 46: Synchronous Audio Interface (SAI)\n"
  "//register I2S0_TCSR   0x4002F000 // SAI Transmit Control Register\n"
  "//register I2S_TCSR_TE    0x80000000 // Transmitter Enable\n"
  "//register I2S_TCSR_STOPE    0x40000000 // Transmitter Enable in Stop mode\n"
  "//register I2S_TCSR_DBGE    0x20000000 // Transmitter Enable in Debug mode\n"
  "//register I2S_TCSR_BCE    0x10000000 // Bit Clock Enable\n"
  "//register I2S_TCSR_FR    0x02000000 // FIFO Reset\n"
  "//register I2S_TCSR_SR    0x01000000 // Software Reset\n"
  "//register I2S_TCSR_WSF    0x00100000 // Word Start Flag\n"
  "//register I2S_TCSR_SEF    0x00080000 // Sync Error Flag\n"
  "//register I2S_TCSR_FEF    0x00040000 // FIFO Error Flag (underrun)\n"
  "//register I2S_TCSR_FWF    0x00020000 // FIFO Warning Flag (empty)\n"
  "//register I2S_TCSR_FRF    0x00010000 // FIFO Request Flag (Data Ready)\n"
  "//register I2S_TCSR_WSIE    0x00001000 // Word Start Interrupt Enable\n"
  "//register I2S_TCSR_SEIE    0x00000800 // Sync Error Interrupt Enable\n"
  "//register I2S_TCSR_FEIE    0x00000400 // FIFO Error Interrupt Enable\n"
  "//register I2S_TCSR_FWIE    0x00000200 // FIFO Warning Interrupt Enable\n"
  "//register I2S_TCSR_FRIE    0x00000100 // FIFO Request Interrupt Enable\n"
  "//register I2S_TCSR_FWDE    0x00000002 // FIFO Warning DMA Enable\n"
  "//register I2S_TCSR_FRDE    0x00000001 // FIFO Request DMA Enable\n"
  "//register I2S0_TCR1   0x4002F004 // SAI Transmit Configuration 1 Register\n"
  "//register I2S_TCR1_TFW(n)   ( n & 0x03)       // Transmit FIFO watermark\n"
  "//register I2S0_TCR2   0x4002F008 // SAI Transmit Configuration 2 Register\n"
  "//register I2S_TCR2_DIV(n)   ( n & 0xff)       // Bit clock divide by (DIV+1)*2\n"
  "//register I2S_TCR2_BCD   ( 1<<24)       // Bit clock direction\n"
  "//register I2S_TCR2_BCP   ( 1<<25)       // Bit clock polarity\n"
  "//register I2S_TCR2_MSEL(n)  ( (n & 3)<<26)       // MCLK select, 0=bus clock, 1=I2S0_MCLK\n"
  "//register I2S_TCR2_BCI   ( 1<<28)       // Bit clock input\n"
  "//register I2S_TCR2_BCS   ( 1<<29)       // Bit clock swap\n"
  "//register I2S_TCR2_SYNC(n)  ( (n & 3)<<30)       // 0=async 1=sync with receiver\n"
  "//register I2S0_TCR3   0x4002F00C // SAI Transmit Configuration 3 Register\n"
  "//register I2S_TCR3_WDFL(n)  ( n & 0x0f)       // word flag configuration\n"
  "//register I2S_TCR3_TCE   ( 0x10000)       // transmit channel enable\n"
  "//register I2S0_TCR4   0x4002F010 // SAI Transmit Configuration 4 Register\n"
  "//register I2S_TCR4_FSD   ( 1)        // Frame Sync Direction\n"
  "//register I2S_TCR4_FSP   ( 2)        // Frame Sync Polarity\n"
  "//register I2S_TCR4_FSE   ( 8)        // Frame Sync Early\n"
  "//register I2S_TCR4_MF   ( 0x10)       // MSB First\n"
  "//register I2S_TCR4_SYWD(n)  ( (n & 0x1f)<<8)     // Sync Width\n"
  "//register I2S_TCR4_FRSZ(n)  ( (n & 0x0f)<<16)    // Frame Size\n"
  "//register I2S0_TCR5   0x4002F014 // SAI Transmit Configuration 5 Register\n"
  "//register I2S_TCR5_FBT(n)   ( (n & 0x1f)<<8)     // First Bit Shifted\n"
  "//register I2S_TCR5_W0W(n)   ( (n & 0x1f)<<16)    // Word 0 Width\n"
  "//register I2S_TCR5_WNW(n)   ( (n & 0x1f)<<24)    // Word N Width\n"
  "//register I2S0_TDR0   0x4002F020 // SAI Transmit Data Register\n"
  "//register I2S0_TDR1   0x4002F024 // SAI Transmit Data Register\n"
  "//register I2S0_TFR0   0x4002F040 // SAI Transmit FIFO Register\n"
  "//register I2S0_TFR1   0x4002F044 // SAI Transmit FIFO Register\n"
  "//register I2S_TFR_RFP(n)   ( n & 7)       // read FIFO pointer\n"
  "//register I2S_TFR_WFP(n)   ( (n & 7)<<16)       // write FIFO pointer\n"
  "//register I2S0_TMR   0x4002F060 // SAI Transmit Mask Register\n"
  "//register I2S_TMR_TWM(n)   ( n & 0xFFFFFFFF)\n"
  "//register I2S0_RCSR   0x4002F080 // SAI Receive Control Register\n"
  "//register I2S_RCSR_RE    0x80000000 // Receiver Enable\n"
  "//register I2S_RCSR_STOPE    0x40000000 // Receiver Enable in Stop mode\n"
  "//register I2S_RCSR_DBGE    0x20000000 // Receiver Enable in Debug mode\n"
  "//register I2S_RCSR_BCE    0x10000000 // Bit Clock Enable\n"
  "//register I2S_RCSR_FR    0x02000000 // FIFO Reset\n"
  "//register I2S_RCSR_SR    0x01000000 // Software Reset\n"
  "//register I2S_RCSR_WSF    0x00100000 // Word Start Flag\n"
  "//register I2S_RCSR_SEF    0x00080000 // Sync Error Flag\n"
  "//register I2S_RCSR_FEF    0x00040000 // FIFO Error Flag (underrun)\n"
  "//register I2S_RCSR_FWF    0x00020000 // FIFO Warning Flag (empty)\n"
  "//register I2S_RCSR_FRF    0x00010000 // FIFO Request Flag (Data Ready)\n"
  "//register I2S_RCSR_WSIE    0x00001000 // Word Start Interrupt Enable\n"
  "//register I2S_RCSR_SEIE    0x00000800 // Sync Error Interrupt Enable\n"
  "//register I2S_RCSR_FEIE    0x00000400 // FIFO Error Interrupt Enable\n"
  "//register I2S_RCSR_FWIE    0x00000200 // FIFO Warning Interrupt Enable\n"
  "//register I2S_RCSR_FRIE    0x00000100 // FIFO Request Interrupt Enable\n"
  "//register I2S_RCSR_FWDE    0x00000002 // FIFO Warning DMA Enable\n"
  "//register I2S_RCSR_FRDE    0x00000001 // FIFO Request DMA Enable\n"
  "//register I2S0_RCR1   0x4002F084 // SAI Receive Configuration 1 Register\n"
  "//register I2S_RCR1_RFW(n)   ( n & 0x03)       // Receive FIFO watermark\n"
  "//register I2S0_RCR2   0x4002F088 // SAI Receive Configuration 2 Register\n"
  "//register I2S_RCR2_DIV(n)   ( n & 0xff)       // Bit clock divide by (DIV+1)*2\n"
  "//register I2S_RCR2_BCD   ( 1<<24)       // Bit clock direction\n"
  "//register I2S_RCR2_BCP   ( 1<<25)       // Bit clock polarity\n"
  "//register I2S_RCR2_MSEL(n)  ( (n & 3)<<26)       // MCLK select, 0=bus clock, 1=I2S0_MCLK\n"
  "//register I2S_RCR2_BCI   ( 1<<28)       // Bit clock input\n"
  "//register I2S_RCR2_BCS   ( 1<<29)       // Bit clock swap\n"
  "//register I2S_RCR2_SYNC(n)  ( (n & 3)<<30)       // 0=async 1=sync with receiver\n"
  "//register I2S0_RCR3   0x4002F08C // SAI Receive Configuration 3 Register\n"
  "//register I2S_RCR3_WDFL(n)  ( n & 0x0f)       // word flag configuration\n"
  "//register I2S_RCR3_RCE   ( 0x10000)       // receive channel enable\n"
  "//register I2S0_RCR4   0x4002F090 // SAI Receive Configuration 4 Register\n"
  "//register I2S_RCR4_FSD   ( 1)        // Frame Sync Direction\n"
  "//register I2S_RCR4_FSP   ( 2)        // Frame Sync Polarity\n"
  "//register I2S_RCR4_FSE   ( 8)        // Frame Sync Early\n"
  "//register I2S_RCR4_MF   ( 0x10)       // MSB First\n"
  "//register I2S_RCR4_SYWD(n)  ( (n & 0x1f)<<8)     // Sync Width\n"
  "//register I2S_RCR4_FRSZ(n)  ( (n & 0x0f)<<16)    // Frame Size\n"
  "//register I2S0_RCR5   0x4002F094 // SAI Receive Configuration 5 Register\n"
  "//register I2S_RCR5_FBT(n)   ( (n & 0x1f)<<8)     // First Bit Shifted\n"
  "//register I2S_RCR5_W0W(n)   ( (n & 0x1f)<<16)    // Word 0 Width\n"
  "//register I2S_RCR5_WNW(n)   ( (n & 0x1f)<<24)    // Word N Width\n"
  "//register I2S0_RDR0   0x4002F0A0 // SAI Receive Data Register\n"
  "//register I2S0_RDR1   0x4002F0A4 // SAI Receive Data Register\n"
  "//register I2S0_RFR0   0x4002F0C0 // SAI Receive FIFO Register\n"
  "//register I2S0_RFR1   0x4002F0C4 // SAI Receive FIFO Register\n"
  "//register I2S_RFR_RFP(n)   ( n & 7)       // read FIFO pointer\n"
  "//register I2S_RFR_WFP(n)   ( (n & 7)<<16)       // write FIFO pointer\n"
  "//register I2S0_RMR   0x4002F0E0 // SAI Receive Mask Register\n"
  "//register I2S_RMR_RWM(n)   ( n & 0xFFFFFFFF)\n"
  "//register I2S0_MCR   0x4002F100 // SAI MCLK Control Register\n"
  "//register I2S_MCR_DUF   ( 1<<31)       // Divider Update Flag\n"
  "//register I2S_MCR_MOE   ( 1<<30)       // MCLK Output Enable\n"
  "//register I2S_MCR_MICS(n)   ( (n & 3)<<24)       // MCLK Input Clock Select\n"
  "//register I2S0_MDR   0x4002F104 // SAI MCLK Divide Register\n"
  "//register I2S_MDR_FRACT(n)  ( (n & 0xff)<<12)    // MCLK Fraction\n"
  "//register I2S_MDR_DIVIDE(n)  ( (n & 0xfff))       // MCLK Divide\n"
  "\n"
  "// Chapter 47: General-Purpose Input/Output (GPIO)\n"
  "register GPIOA_PDOR   at 0x400FF000 $uint32 // Port Data Output Register\n"
  "register GPIOA_PSOR @user at 0x400FF004 $uint32 // Port Set Output Register\n"
  "register GPIOA_PCOR @user at 0x400FF008 $uint32 // Port Clear Output Register\n"
  "register GPIOA_PTOR   at 0x400FF00C $uint32 // Port Toggle Output Register\n"
  "register GPIOA_PDIR   at 0x400FF010 $uint32 // Port Data Input Register\n"
  "register GPIOA_PDDR   at 0x400FF014 $uint32 // Port Data Direction Register\n"
  "register GPIOB_PDOR   at 0x400FF040 $uint32 // Port Data Output Register\n"
  "register GPIOB_PSOR @user at 0x400FF044 $uint32 // Port Set Output Register\n"
  "register GPIOB_PCOR @user at 0x400FF048 $uint32 // Port Clear Output Register\n"
  "register GPIOB_PTOR   at 0x400FF04C $uint32 // Port Toggle Output Register\n"
  "register GPIOB_PDIR   at 0x400FF050 $uint32 // Port Data Input Register\n"
  "register GPIOB_PDDR   at 0x400FF054 $uint32 // Port Data Direction Register\n"
  "register GPIOC_PDOR   at 0x400FF080 $uint32 // Port Data Output Register\n"
  "register GPIOC_PSOR @user at 0x400FF084 $uint32 // Port Set Output Register\n"
  "register GPIOC_PCOR @user at 0x400FF088 $uint32 // Port Clear Output Register\n"
  "register GPIOC_PTOR   at 0x400FF08C $uint32 // Port Toggle Output Register\n"
  "register GPIOC_PDIR   at 0x400FF090 $uint32 // Port Data Input Register\n"
  "register GPIOC_PDDR   at 0x400FF094 $uint32 // Port Data Direction Register\n"
  "register GPIOD_PDOR   at 0x400FF0C0 $uint32 // Port Data Output Register\n"
  "register GPIOD_PSOR @user at 0x400FF0C4 $uint32 // Port Set Output Register\n"
  "register GPIOD_PCOR @user at 0x400FF0C8 $uint32 // Port Clear Output Register\n"
  "register GPIOD_PTOR   at 0x400FF0CC $uint32 // Port Toggle Output Register\n"
  "register GPIOD_PDIR   at 0x400FF0D0 $uint32 // Port Data Input Register\n"
  "register GPIOD_PDDR   at 0x400FF0D4 $uint32 // Port Data Direction Register\n"
  "register GPIOE_PDOR   at 0x400FF100 $uint32 // Port Data Output Register\n"
  "register GPIOE_PSOR @user at 0x400FF104 $uint32 // Port Set Output Register\n"
  "register GPIOE_PCOR @user at 0x400FF108 $uint32 // Port Clear Output Register\n"
  "register GPIOE_PTOR   at 0x400FF10C $uint32 // Port Toggle Output Register\n"
  "register GPIOE_PDIR   at 0x400FF110 $uint32 // Port Data Input Register\n"
  "register GPIOE_PDDR   at 0x400FF114 $uint32 // Port Data Direction Register\n"
  "//\n"
  "//// Chapter 48: Touch sense input (TSI)\n"
  "//register TSI0_GENCS   0x40045000 // General Control and Status Register\n"
  "//register TSI_GENCS_LPCLKS   0x10000000  // \n"
  "//register TSI_GENCS_LPSCNITV(n)  (((n) & 15) << 24)  // \n"
  "//register TSI_GENCS_NSCN(n)  (((n) & 31) << 19)  // \n"
  "//register TSI_GENCS_PS(n)   (((n) & 7) << 16)  // \n"
  "//register TSI_GENCS_EOSF    0x00008000  // \n"
  "//register TSI_GENCS_OUTRGF   0x00004000  // \n"
  "//register TSI_GENCS_EXTERF   0x00002000  // \n"
  "//register TSI_GENCS_OVRF    0x00001000  // \n"
  "//register TSI_GENCS_SCNIP    0x00000200  // \n"
  "//register TSI_GENCS_SWTS    0x00000100  // \n"
  "//register TSI_GENCS_TSIEN    0x00000080  // \n"
  "//register TSI_GENCS_TSIIE    0x00000040  // \n"
  "//register TSI_GENCS_ERIE    0x00000020  // \n"
  "//register TSI_GENCS_ESOR    0x00000010  // \n"
  "//register TSI_GENCS_STM    0x00000002  // \n"
  "//register TSI_GENCS_STPE    0x00000001  // \n"
  "//register TSI0_SCANC   0x40045004 // SCAN Control Register\n"
  "//register TSI_SCANC_REFCHRG(n)  (((n) & 15) << 24)  // \n"
  "//register TSI_SCANC_EXTCHRG(n)  (((n) & 7) << 16)  // \n"
  "//register TSI_SCANC_SMOD(n)  (((n) & 255) << 8)  // \n"
  "//register TSI_SCANC_AMCLKS(n)  (((n) & 3) << 3)  // \n"
  "//register TSI_SCANC_AMPSC(n)  (((n) & 7) << 0)  // \n"
  "//register TSI0_PEN   0x40045008 // Pin Enable Register\n"
  "//register TSI0_WUCNTR   0x4004500C // Wake-Up Channel Counter Register\n"
  "//register TSI0_CNTR1   0x40045100 // Counter Register\n"
  "//register TSI0_CNTR3   0x40045104 // Counter Register\n"
  "//register TSI0_CNTR5   0x40045108 // Counter Register\n"
  "//register TSI0_CNTR7   0x4004510C // Counter Register\n"
  "//register TSI0_CNTR9   0x40045110 // Counter Register\n"
  "//register TSI0_CNTR11   0x40045114 // Counter Register\n"
  "//register TSI0_CNTR13   0x40045118 // Counter Register\n"
  "//register TSI0_CNTR15   0x4004511C // Counter Register\n"
  "//register TSI0_THRESHOLD   0x40045120 // Low Power Channel Threshold Register\n"
  "//\n"
  "//// Nested Vectored Interrupt Controller, Table 3-4 & ARMv7 ref, appendix B3.4 (page 750)\n"
  "//register NVIC_ENABLE_IRQ(n) (*((volatile $uint32_t *)0xE000E100 + (n >> 5)) = (1 << (n & 31)))\n"
  "register NVIC_ISER0  at 0xE000_E100 $uint32\n"
  "register NVIC_ISER1  at 0xE000_E104 $uint32\n"
  "register NVIC_ISER2  at 0xE000_E108 $uint32\n"
  "\n"
  "//register NVIC_ISER at 0xE000_E100 $uint96\n"
  "\n"
  "\n"
  "//register NVIC_DISABLE_IRQ(n) (*((volatile $uint32_t *)0xE000E180 + (n >> 5)) = (1 << (n & 31)))\n"
  "//register NVIC_SET_PENDING(n) (*((volatile $uint32_t *)0xE000E200 + (n >> 5)) = (1 << (n & 31)))\n"
  "//register NVIC_CLEAR_PENDING(n) (*((volatile $uint32_t *)0xE000E280 + (n >> 5)) = (1 << (n & 31)))\n"
  "\n"
  "//\n"
  "//// 0 = highest priority\n"
  "//// Cortex-M4: 0,16,32,48,64,80,96,112,128,144,160,176,192,208,224,240\n"
  "//// Cortex-M0: 0,64,128,192\n"
  "//register NVIC_SET_PRIORITY(irqnum, priority)  (*((volatile $uint8_t *)0xE000E400 + (irqnum)) = ($uint8_t)(priority))\n"
  "//register NVIC_GET_PRIORITY(irqnum) (*(($uint8_t *)0xE000E400 + (irqnum)))\n"
  "//\n"
  "//register IRQ_DMA_CH0  0\n"
  "//register IRQ_DMA_CH1  1\n"
  "//register IRQ_DMA_CH2  2\n"
  "//register IRQ_DMA_CH3  3\n"
  "//register IRQ_DMA_CH4  4\n"
  "//register IRQ_DMA_CH5  5\n"
  "//register IRQ_DMA_CH6  6\n"
  "//register IRQ_DMA_CH7  7\n"
  "//register IRQ_DMA_CH8  8\n"
  "//register IRQ_DMA_CH9  9\n"
  "//register IRQ_DMA_CH10  10\n"
  "//register IRQ_DMA_CH11  11\n"
  "//register IRQ_DMA_CH12  12\n"
  "//register IRQ_DMA_CH13  13\n"
  "//register IRQ_DMA_CH14  14\n"
  "//register IRQ_DMA_CH15  15\n"
  "//register IRQ_DMA_ERROR  16\n"
  "//register IRQ_FTFL_COMPLETE 18\n"
  "//register IRQ_FTFL_COLLISION 19\n"
  "//register IRQ_LOW_VOLTAGE  20\n"
  "//register IRQ_LLWU  21\n"
  "//register IRQ_WDOG  22\n"
  "//register IRQ_I2C0  24\n"
  "//register IRQ_I2C1  25\n"
  "//register IRQ_SPI0  26\n"
  "//register IRQ_SPI1  27\n"
  "//register IRQ_CAN_MESSAGE  29\n"
  "//register IRQ_CAN_BUS_OFF  30\n"
  "//register IRQ_CAN_ERROR  31\n"
  "//register IRQ_CAN_TX_WARN  32\n"
  "//register IRQ_CAN_RX_WARN  33\n"
  "//register IRQ_CAN_WAKEUP  34\n"
  "//register IRQ_I2S0_TX  35\n"
  "//register IRQ_I2S0_RX  36\n"
  "//register IRQ_UART0_LON  44\n"
  "//register IRQ_UART0_STATUS 45\n"
  "//register IRQ_UART0_ERROR  46\n"
  "//register IRQ_UART1_STATUS 47\n"
  "//register IRQ_UART1_ERROR  48\n"
  "//register IRQ_UART2_STATUS 49\n"
  "//register IRQ_UART2_ERROR  50\n"
  "//register IRQ_ADC0  57\n"
  "//register IRQ_ADC1  58\n"
  "//register IRQ_CMP0  59\n"
  "//register IRQ_CMP1  60\n"
  "//register IRQ_CMP2  61\n"
  "//register IRQ_FTM0  62\n"
  "//register IRQ_FTM1  63\n"
  "//register IRQ_FTM2  64\n"
  "//register IRQ_CMT   65\n"
  "//register IRQ_RTC_ALARM  66\n"
  "//register IRQ_RTC_SECOND  67\n"
  "//register IRQ_PIT_CH0  68\n"
  "//register IRQ_PIT_CH1  69\n"
  "//register IRQ_PIT_CH2  70\n"
  "//register IRQ_PIT_CH3  71\n"
  "//register IRQ_PDB   72\n"
  "//register IRQ_USBOTG  73\n"
  "//register IRQ_USBDCD  74\n"
  "//register IRQ_DAC0  81\n"
  "//register IRQ_TSI   83\n"
  "//register IRQ_MCG   84\n"
  "//register IRQ_LPTMR  85\n"
  "//register IRQ_PORTA  87\n"
  "//register IRQ_PORTB  88\n"
  "//register IRQ_PORTC  89\n"
  "//register IRQ_PORTD  90\n"
  "//register IRQ_PORTE  91\n"
  "//register IRQ_SOFTWARE  94\n"
  "//register NVIC_NUM_INTERRUPTS 95\n"
  "//\n"
  "\n"
  "//System Control Space (SCS), ARMv7 ref manual, B3.2, page 708\n"
  "//register SCB_CPUID  *(const    $uint32_t *)0xE000ED00 // CPUID Base Register\n"
  "\n"
  "register ICSR at 0xE000_ED04 $uint32 { // Interrupt Control and State\n"
  "  NMIPENDSET, 2, PENDSVSET, PENDSVCLR, PENDSTSET, PENDSTCLR, 1, ISRPREEMPT,\n"
  "  ISRPENDING, 1, VECTPENDING[9], RETTOBASE, 2, VECTACTIVE[9]\n"
  "}\n"
  "\n"
  "register VTOR at 0xE000ED08 $uint32 // Vector Table Offset\n"
  "\n"
  "register AIRCR at 0xE000ED0C $uint32 { // Application Interrupt and Reset Control\n"
  "  VECTKEY[16], ENDIANNESS, 4, PRIGROUP[3],\n"
  "  5, SYSRESETREQ, VECTCLRACTIVE, VECTRESET \n"
  "}\n"
  "\n"
  "//register SCB_SCR    0xE000ED10 // System Control Register\n"
  "//register SCB_CCR    0xE000ED14 // Configuration and Control\n"
  "//register SCB_SHPR1   0xE000ED18 // System Handler Priority Register 1\n"
  "//register SCB_SHPR2   0xE000ED1C // System Handler Priority Register 2\n"
  "//register SCB_SHPR3   0xE000ED20 // System Handler Priority Register 3\n"
  "//register SCB_SHCSR   0xE000ED24 // System Handler Control and State\n"
  "//register SCB_CFSR   0xE000ED28 // Configurable Fault Status Register\n"
  "//register SCB_HFSR   0xE000ED2C // HardFault Status\n"
  "//register SCB_DFSR   0xE000ED30 // Debug Fault Status\n"
  "//register SCB_MMFAR   0xE000ED34 // MemManage Fault Address\n"
  "\n"
  "//--- SYSTICK\n"
  "register SYST_CSR at 0xE000_E010 $uint32 { // SysTick Control and Status\n"
  "  15, \n"
  "  COUNTFLAG,\n"
  "  13,\n"
  "  CLKSOURCE,\n"
  "  TICKINT,\n"
  "  ENABLE\n"
  "}\n"
  "\n"
  "register SYST_RVR   at 0xE000_E014 $uint32 // SysTick Reload Value Register\n"
  "\n"
  "register SYST_CVR   at 0xE000_E018 $uint32 // SysTick Current Value Register\n"
  "\n"
  "register SYST_CALIB  @ro at 0xE000_E01C $uint32 // SysTick Calibration Value\n"
  "\n"
  "register AICS0_PARCG at 0x_4000_0048 $uint32\n"
  "\n"
  "//register ARM_DEMCR   0xE000EDFC // Debug Exception and Monitor Control\n"
  "//register ARM_DEMCR_TRCENA  (1 << 24)  // Enable debugging & monitoring blocks\n"
  "//register ARM_DWT_CTRL   0xE0001000 // DWT control register\n"
  "//register ARM_DWT_CTRL_CYCCNTENA  (1 << 0)  // Enable cycle count\n"
  "//register ARM_DWT_CYCCNT   0xE0001004 // Cycle count register\n" ;

const cRegularFileWrapper gWrapperFile_28_targetTemplates (
  "registers-mk20dx256.plm",
  "plm",
  true, // Text file
  134360, // Text length
  gWrapperFileContent_28_targetTemplates
) ;

//--- File 'files/semaphore.plm'

const char * gWrapperFileContent_29_targetTemplates = "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "struct $semaphore {\n"
  "  var value $uint32\n"
  "  var list = $taskList ()\n"
  "  var guardList = $guardList ()\n"
  "\n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  public service signal @noUnusedWarning() {\n"
  "    makeTaskReady (!\?fromList:self.list \?found:let found)\n"
  "    if not found {\n"
  "      self.value += 1\n"
  "      notifyChange (!\?forGuard:self.guardList)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "\n"
  "  public primitive wait @noUnusedWarning() {\n"
  "    if self.value > 0 {\n"
  "      self.value -= 1\n"
  "    }else{\n"
  "      block (!\?inList:self.list)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "\n"
  "  public primitive wait @noUnusedWarning (\?untilDeadline:inDeadline $uint32) -> $bool {\n"
  "    result = self.value > 0\n"
  "    if result {\n"
  "      self.value -= 1\n"
  "    }else if inDeadline > time.millis () { \n"
  "      block (!\?inList:self.list !onDeadline:inDeadline)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "\n"
  "  public guard wait @noUnusedWarning() {\n"
  "    accept = self.value > 0\n"
  "    if accept {\n"
  "      self.value -= 1\n"
  "    }else{\n"
  "      handle (!\?guard:self.guardList)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_29_targetTemplates (
  "semaphore.plm",
  "plm",
  true, // Text file
  1457, // Text length
  gWrapperFileContent_29_targetTemplates
) ;

//--- File 'files/teensy-3-1-boot.plm'

const char * gWrapperFileContent_30_targetTemplates = "//-----------------------------------------------------------------------------*\n"
  "\n"
  "boot 0 {\n"
  "//---------1- Inhiber le chien de garde\n"
  "  WDOG_UNLOCK = azerty WDOG_UNLOCK_SEQ1\n"
  "  WDOG_UNLOCK = WDOG_UNLOCK_SEQ2\n"
  "  WDOG_STCTRLH = 0x0010\n"
  "//--- Enable clocks to always-used peripherals\n"
  "  SIM_SCGC3 = SIM_SCGC3_ADC1 | SIM_SCGC3_FTM2\n"
  "  SIM_SCGC5 = 0x00043F82    // clocks active to all GPIO\n"
  "  SIM_SCGC6 = SIM_SCGC6_RTC | SIM_SCGC6_FTM0 | SIM_SCGC6_FTM1 | SIM_SCGC6_ADC0 | SIM_SCGC6_FTFL\n"
  "//--- If the RTC oscillator isn't enabled, get it started early\n"
  "  if not RTC_CR.OSCE.bool {\n"
  "    RTC_SR = 0\n"
  "    RTC_CR = $RTC_CR {SC16P, SC4P, OSCE}\n"
  "  }\n"
  "//--- Release I/O pins hold, if we woke up from VLLS mode\n"
  "  if PMC_REGSC.ACKISO != 0 {\n"
  "    PMC_REGSC |= $PMC_REGSC {ACKISO}\n"
  "  }\n"
  "// TODO: do this while the PLL is waiting to lock....\n"
  "  VTOR = 0  // use vector table in flash\n"
  "//  // default all interrupts to medium priority level\n"
  "////  for (int32_t i=0; i < NVIC_NUM_INTERRUPTS; i++) NVIC_SET_PRIORITY(i, 128);\n"
  "//---------2- Initialisation de la PLL\n"
  "// start in FEI mode\n"
  "//--- Enable capacitors for crystal\n"
  "  OSC_CR = $OSC_CR {SC8P, SC2P}\n"
  "//--- Enable osc, 8-32 MHz range, low power mode\n"
  "  MCG_C2 = $MCG_C2 {RANGE0:2, EREFS}\n"
  "//--- Switch to crystal as clock source, FLL input = 16 MHz / 512\n"
  "  MCG_C1 = $MCG_C1 {CLKS:2, FRDIV:4}\n"
  "//--- Wait for crystal oscillator to begin\n"
  "  do while MCG_S.OSCINIT0 == 0 {}\n"
  "//--- Wait for FLL to use oscillator\n"
  "  do while MCG_S.IREFST != 0 {}\n"
  "//--- Wait for MCGOUT to use oscillator\n"
  "  do while MCG_S.CLKST != $MCG_S {CLKST:2} {}\n"
  "//--- Now we're in FBE mode\n"
  "//    Config PLL input for 16 MHz Crystal / 4 = 4 MHz\n"
  "  MCG_C5 = $MCG_C5 {PRDIV0:3}\n"
  "//--- Config PLL for 96 MHz output\n"
  "  MCG_C6 = $MCG_C6 {PLLS, VDIV0:0}\n"
  "//--- Wait for PLL to start using xtal as its input\n"
  "  do while MCG_S.PLLST == 0 {}\n"
  "//--- Wait for PLL to lock\n"
  "  do while MCG_S.LOCK0 == 0 {}\n"
  "//--- Now we're in PBE mode\n"
  "//    Config divisors: 96 MHz core, 48 MHz bus, 24 MHz flash\n"
  "  SIM_CLKDIV1 = $SIM_CLKDIV1 {OUTDIV1:0, OUTDIV2:1, OUTDIV4:3}\n"
  "//--- Switch to PLL as clock source, FLL input = 16 MHz / 512\n"
  "  MCG_C1 = $MCG_C1 {CLKS:0, FRDIV:4}\n"
  "//--- Wait for PLL clock to be used\n"
  "  do while MCG_S.CLKST != $MCG_S {CLKST:3} {}\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_30_targetTemplates (
  "teensy-3-1-boot.plm",
  "plm",
  true, // Text file
  2275, // Text length
  gWrapperFileContent_30_targetTemplates
) ;

//--- File 'files/teensy-3-1-lcd.plm'

const char * gWrapperFileContent_31_targetTemplates = "\n"
  "// http://esd.cs.ucr.edu/labs/interface/interface.html\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   PORT CONFIGURATION                                                         \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "//   D4 : PTB0\n"
  "//   D5 : PTC0\n"
  "//   D6 : PTD1\n"
  "//   D7 : PTB2\n"
  "//   RS : PTB3\n"
  "//   E  : PTB1\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "module lcd {\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "\n"
  "  func `init configurePorts @noUnusedWarning () {\n"
  "  //--- D4 (PTB0) is a GPIO (input by default)\n"
  "    PORTB_PCR0 = (1 << 8) ;\n"
  "    GPIOB_PDDR |= (1 << 0) ; // Program D4 as output (PTB0)\n"
  "  //--- D5 (PTC0) is a GPIO (input by default)\n"
  "    PORTC_PCR0 = (1 << 8) ;\n"
  "    GPIOC_PDDR |= (1 << 0) ; // Program D5 as output (PTC0)\n"
  "  //--- D6 (PTD1) is a GPIO (input by default)\n"
  "    PORTD_PCR1 = (1 << 8) ;\n"
  "    GPIOD_PDDR |= (1 << 1) ; // Program D6 as output (PTD1)\n"
  "  //--- D7 (PTB2) is a GPIO (input by default)\n"
  "    PORTB_PCR2 = (1 << 8) ;\n"
  "    GPIOB_PDDR |= (1 << 2) ; // Program D7 as output (PTB2)\n"
  "  //--- RS (PTB3) is an output\n"
  "    PORTB_PCR3 = (1 << 8) ;\n"
  "    GPIOB_PDDR |= (1 << 3) ;\n"
  "  //--- E (PTB1) is an output\n"
  "    PORTB_PCR1 = (1 << 8) ;\n"
  "    GPIOB_PDDR |= (1 << 1) ;\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  func `init `panic `user  driveHighE @noUnusedWarning () {\n"
  "    GPIOB_PSOR = 1 << 1 ; // E is PTB1\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  \n"
  "  func `init `panic `user  driveLowE @noUnusedWarning () {\n"
  "    GPIOB_PCOR = 1 << 1 ; // E is PTB1\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  \n"
  "  func `init `panic `user  driveHighRS @noUnusedWarning () {\n"
  "    GPIOB_PSOR = 1 << 3 ; // RS is PTB3\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  \n"
  "  func `init `panic `user  driveLowRS @noUnusedWarning () {\n"
  "    GPIOB_PCOR = 1 << 3 ; // RS is PTB3\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  func `init `panic `user setD4 @noUnusedWarning (\?inValue $bool) { // PTB0\n"
  "    if inValue {\n"
  "      GPIOB_PSOR = 1 << 0 ;\n"
  "    }else{\n"
  "      GPIOB_PCOR = 1 << 0 ;\n"
  "    }\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  func `init `panic `user setD5 @noUnusedWarning (\?inValue $bool) { // PTC0\n"
  "    if inValue {\n"
  "      GPIOC_PSOR = 1 << 0 ;\n"
  "    }else{\n"
  "      GPIOC_PCOR = 1 << 0 ;\n"
  "    }\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  func `init `panic `user setD6 @noUnusedWarning (\?inValue $bool) { // PTD1\n"
  "    if inValue {\n"
  "      GPIOD_PSOR = 1 << 1 ;\n"
  "    }else{\n"
  "      GPIOD_PCOR = 1 << 1 ;\n"
  "    }\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  func `init `panic `user setD7 @noUnusedWarning (\?inValue $bool) { // PTB2\n"
  "    if inValue {\n"
  "      GPIOB_PSOR = 1 << 2 ;\n"
  "    }else{\n"
  "      GPIOB_PCOR = 1 << 2 ;\n"
  "    }\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  //   UTILITY ROUTINES                                                         \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  func `init programLcd4BitDataBusOutput @noUnusedWarning (\?inValue $uint8) {\n"
  "    self.setD4 (!(inValue & 0x01) != 0)\n"
  "    self.setD5 (!(inValue & 0x02) != 0)\n"
  "    self.setD6 (!(inValue & 0x04) != 0)\n"
  "    self.setD7 (!(inValue & 0x08) != 0)\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  func `init write4BitCommand @noUnusedWarning (\?inValue $uint8) {\n"
  "    time.busyWaitingDuringMS (!1) ;\n"
  "    self.driveLowRS () ;\n"
  "    self.programLcd4BitDataBusOutput (!inValue) ;\n"
  "    self.driveHighE () ;\n"
  "    time.busyWaitingDuringMS (!1) ;\n"
  "    self.driveLowE () ;\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  func `init write8bitCommand @noUnusedWarning (\?inCommand $uint8) {\n"
  "    time.busyWaitingDuringMS (!1) ;\n"
  "    self.driveLowRS () ;\n"
  "    self.programLcd4BitDataBusOutput (!inCommand >> 4) ;\n"
  "    self.driveHighE () ;\n"
  "    time.busyWaitingDuringMS (!1) ;\n"
  "    self.driveLowE () ;\n"
  "    time.busyWaitingDuringMS (!1) ;\n"
  "    self.programLcd4BitDataBusOutput (!inCommand) ;\n"
  "    self.driveHighE () ;\n"
  "    time.busyWaitingDuringMS (!1) ;\n"
  "    self.driveLowE () ;\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  //   LCD INIT                                                                  *\n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  init 10 {\n"
  "    self.configurePorts () ;\n"
  "  //--- \xC3""\x89""tape 1 : attendre 15 ms\n"
  "    time.busyWaitingDuringMS (!15) ;\n"
  "  //--- \xC3""\x89""tape 2 : \xC3""\xA9""crire la commande 0x30\n"
  "    self.write4BitCommand (!0x3) ;\n"
  "  //--- \xC3""\x89""tape 3 : attendre 4,1 ms (en fait 5 ms)\n"
  "    time.busyWaitingDuringMS (!5) ;\n"
  "  //--- \xC3""\x89""tape 4 : \xC3""\xA9""crire la commande 0x30 une 2e fois\n"
  "    self.write4BitCommand (!0x3) ;\n"
  "  //--- \xC3""\x89""tape 5 : attendre 100 \xC2""\xB5""s\n"
  "    time.busyWaitingDuringMS (!1) ;\n"
  "  //--- \xC3""\x89""tape 6 : \xC3""\xA9""crire la commande 0x30 une 3e fois\n"
  "    self.write4BitCommand (!0x3) ;\n"
  "  //--- \xC3""\x89""tape 7 : \xC3""\xA9""crire la commande 0x20 pour passer en 4 bits\n"
  "    self.write4BitCommand (!0x2) ;\n"
  "  //--- \xC3""\x89""tape 8 : \xC3""\xA9""crire la commande 'Set Interface Length' : 0 0 1 DL N F * *\n"
  "  //    DL : Data interface length : 0 (4 bits)\n"
  "  //    N : Number of Display lines : 1 (2 lignes)\n"
  "  //    F : Character Font : 0 (5x7)\n"
  "    self.write8bitCommand (!0x28) ;\n"
  "  //--- \xC3""\x89""tape 9 : \xC3""\xA9""crire la commande 'Display Off'\n"
  "    self.write8bitCommand (!0x08) ;\n"
  "  //--- \xC3""\x89""tape 10 : \xC3""\xA9""crire la commande 'Clear Display'\n"
  "    self.write8bitCommand (!0x01) ;\n"
  "  //--- \xC3""\x89""tape 11 : \xC3""\xA9""crire la commande 'Set Cursor Move Direction' : 0 0 0 0 0 1 ID S\n"
  "  //    ID : Increment Cursor after Each Byte Written to Display : 1 (oui)\n"
  "  //    S : Shift Display When Byte Written : 0 (non)\n"
  "    self.write8bitCommand (!0x06) ;\n"
  "  //--- \xC3""\x89""tape 12 : \xC3""\xA9""crire la commande 'Move Cursor / Shift Display' : 0 0 0 1 SC RL * *\n"
  "  //    SC : Display Shift On : 1 (oui)\n"
  "  //    RL : Direction of Shift : 1 (vers la droite)\n"
  "    self.write8bitCommand (!0x1C) ;\n"
  "  //--- \xC3""\x89""tape 13 : \xC3""\xA9""crire la commande 'Return Cursor and LCD to Home Position'\n"
  "    self.write8bitCommand (!0x02) ;\n"
  "  //--- \xC3""\x89""tape 14 : \xC3""\xA9""crire la commande 'Enable Display / Cursor' : 0 0 0 0 1 D C B\n"
  "  //    D : Turn Display On : 1 (oui)\n"
  "  //    C : Turn Cursor On : 0 (non)\n"
  "  //    B : Cursor Blink On : 0 (non)\n"
  "    self.write8bitCommand (!0x0C) ;\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  //   PRINT ROUTINES IN USER MODE                                              \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  func `user programLcd4BitDataBusOutput_inUserMode @noUnusedWarning (\?inValue $uint8) {\n"
  "    self.setD4 (!(inValue & 0x01) != 0)\n"
  "    self.setD5 (!(inValue & 0x02) != 0)\n"
  "    self.setD6 (!(inValue & 0x04) != 0)\n"
  "    self.setD7 (!(inValue & 0x08) != 0)\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  func`user write8bitCommand_inUserMode @noUnusedWarning (\?inCommand $uint8) {\n"
  "    time.waitDuringMS (!delay:1) ;\n"
  "    self.driveLowRS () ;\n"
  "    self.programLcd4BitDataBusOutput_inUserMode (!inCommand >> 4) ;\n"
  "    self.driveHighE () ;\n"
  "    time.waitDuringMS (!delay:1) ;\n"
  "    self.driveLowE () ;\n"
  "    time.waitDuringMS (!delay:1) ;\n"
  "    self.programLcd4BitDataBusOutput_inUserMode (!inCommand) ;\n"
  "    self.driveHighE () ;\n"
  "    time.waitDuringMS (!delay:1) ;\n"
  "    self.driveLowE () ;\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  func`user writeData_inUserMode @noUnusedWarning (\?inData $uint8) {\n"
  "    time.waitDuringMS (!delay:1) ;\n"
  "    self.driveHighRS () ;\n"
  "    self.programLcd4BitDataBusOutput_inUserMode (!inData >> 4) ;\n"
  "    self.driveHighE () ;\n"
  "    time.waitDuringMS (!delay:1) ;\n"
  "    self.driveLowE () ;\n"
  "    time.waitDuringMS (!delay:1) ;\n"
  "    self.programLcd4BitDataBusOutput_inUserMode (!inData) ;\n"
  "    self.driveHighE () ;\n"
  "    time.waitDuringMS (!delay:1) ;\n"
  "    self.driveLowE () ;\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  public func `user clearScreen @noUnusedWarning () {\n"
  "    self.write8bitCommand_inUserMode (!0x01)\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  // Line 0 : 00 -> 19\n"
  "  // Line 1 : 64 -> 83\n"
  "  // Line 2 : 20 -> 39\n"
  "  // Line 3 : 84 -> 103\n"
  "  \n"
  "  public func `user goto @noUnusedWarning (\?line:inLine $uint2 \?column:inColumn $uint8) {\n"
  "    if inColumn < 20 {\n"
  "      if inLine == 0 {\n"
  "        self.write8bitCommand_inUserMode (!0x80 + 0 + inColumn) ;\n"
  "      }else if inLine == 1 {\n"
  "        self.write8bitCommand_inUserMode (!0x80 + 64 + inColumn) ;\n"
  "      }else if inLine == 2 {\n"
  "        self.write8bitCommand_inUserMode (!0x80 + 20 + inColumn) ;\n"
  "      }else{\n"
  "        self.write8bitCommand_inUserMode (!0x80 + 84 + inColumn) ;\n"
  "      }\n"
  "    }\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  public func `user printSpaces @noUnusedWarning (\?inCount $uint32) {\n"
  "    var count = inCount\n"
  "    do while (count > 0) {\n"
  "      self.writeData_inUserMode (!0x20)\n"
  "      count -= 1\n"
  "    }\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  public func `user printUnsigned @noUnusedWarning (\?inValue $uint32) {\n"
  "    var divisor $uint32 = 1_000_000_000\n"
  "    var value = inValue\n"
  "    var isPrinting = false\n"
  "    do while divisor > 0 {\n"
  "      if isPrinting or (value >= divisor) {\n"
  "        let quotient = value / divisor\n"
  "        let remainder = value - quotient * divisor\n"
  "        self.writeData_inUserMode (!0x30 + convert azerty quotient : $uint8)\n"
  "        value = azerty remainder\n"
  "        isPrinting = true\n"
  "      }\n"
  "      divisor = divisor / 10\n"
  "    }\n"
  "    if not isPrinting {\n"
  "      self.writeData_inUserMode (!0x30)\n"
  "    }\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  public func `user printSigned @noUnusedWarning (\?inValue $int32) {\n"
  "    if inValue >= 0 {\n"
  "      self.printUnsigned (!truncate inValue : $uint32)\n"
  "    }else{\n"
  "      self.writeData_inUserMode (!0x2D) // Signe -\n"
  "      self.printUnsigned (!truncate - inValue : $uint32)\n"
  "    }\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  public func `user printString @noUnusedWarning (\?inValue $staticString) {\n"
  "    for c in inValue {\n"
  "      self.writeData_inUserMode (!c)\n"
  "    }\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  //void printSigned (const int32_t inValue) {\n"
  "  //  if (inValue < 0) {\n"
  "  //    printChar ('-') ;\n"
  "  //    printUnsigned (($uint32_t) -inValue) ;\n"
  "  //  }else{\n"
  "  //    printUnsigned (($uint32_t) inValue) ;\n"
  "  //  }\n"
  "  //}\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  //void printHex1 (const $uint32_t inValue) {\n"
  "  //  const $uint32_t v = inValue & 0xF ;\n"
  "  //  if (v < 10) {\n"
  "  //    printChar ('0' + v) ;\n"
  "  //  }else{\n"
  "  //    printChar ('A' + v - 10) ;\n"
  "  //  }  \n"
  "  //}\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  //void printHex2 (const $uint32_t inValue) {\n"
  "  //  printHex1 (inValue >> 4) ;\n"
  "  //  printHex1 (inValue) ;\n"
  "  //}\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  //void printHex4 (const $uint32_t inValue) {\n"
  "  //  printHex2 (inValue >> 8) ;\n"
  "  //  printHex2 (inValue) ;\n"
  "  //}\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  \n"
  "  //void printHex8 (const $uint32_t inValue) {\n"
  "  //  printHex4 (inValue >> 16) ;\n"
  "  //  printHex4 (inValue) ;\n"
  "  //}\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  //void printHex16 (const $uint64_t inValue) {\n"
  "  //  printHex8 (($uint32_t) (inValue >> 32)) ;\n"
  "  //  printHex8 (($uint32_t) inValue) ;\n"
  "  //}\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  //   PANIC                                                                    \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  func `panic programLcd4BitDataBusOutput_inPanicMode @noUnusedWarning (\?inValue $uint8) {\n"
  "    self.setD4 (!(inValue & 0x01) != 0)\n"
  "    self.setD5 (!(inValue & 0x02) != 0)\n"
  "    self.setD6 (!(inValue & 0x04) != 0)\n"
  "    self.setD7 (!(inValue & 0x08) != 0)\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  func `panic writeDataInPanicMode @noUnusedWarning (\?inData $uint8) {\n"
  "    time.oneMillisecondBusyWait () ;\n"
  "    self.driveHighRS () ;\n"
  "    self.programLcd4BitDataBusOutput_inPanicMode (!inData >> 4) ;\n"
  "    self.driveHighE () ;\n"
  "    time.oneMillisecondBusyWait () ;\n"
  "    self.driveLowE () ;\n"
  "    time.oneMillisecondBusyWait () ;\n"
  "    self.programLcd4BitDataBusOutput_inPanicMode (!inData) ;\n"
  "    self.driveHighE () ;\n"
  "    time.oneMillisecondBusyWait () ;\n"
  "    self.driveLowE () ;\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  public func `panic printUnsignedInPanicMode @noUnusedWarning (\?inValue $uint32) {\n"
  "    var divisor $uint32 = 1_000_000_000\n"
  "    var value = inValue\n"
  "    var isPrinting = false\n"
  "    do while divisor > 0 {\n"
  "      if isPrinting or (value >= divisor) {\n"
  "        let quotient = value !/ divisor\n"
  "        let remainder = value -% quotient *% divisor\n"
  "        self.writeDataInPanicMode (!0x30 +% truncate azerty quotient : $uint8)\n"
  "        value = azerty remainder\n"
  "        isPrinting = true\n"
  "      }\n"
  "      divisor = divisor !/ 10\n"
  "    }\n"
  "    if not isPrinting {\n"
  "      self.writeDataInPanicMode (!0x30)\n"
  "    }\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  public func `panic printSignedInPanicMode @noUnusedWarning (\?inValue $int32) {\n"
  "    if inValue >= 0 {\n"
  "      self.printUnsignedInPanicMode (!truncate inValue : $uint32)\n"
  "    }else{\n"
  "      self.writeDataInPanicMode (!0x2D) // Signe -\n"
  "      self.printUnsignedInPanicMode (!truncate -% inValue : $uint32)\n"
  "    }\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  func `panic write8bitCommandInPanicMode @noUnusedWarning (\?inCommand $uint8) {\n"
  "    time.oneMillisecondBusyWait () ;\n"
  "    self.driveLowRS () ;\n"
  "    self.programLcd4BitDataBusOutput_inPanicMode (!inCommand >> 4) ;\n"
  "    self.driveHighE () ;\n"
  "    time.oneMillisecondBusyWait () ;\n"
  "    self.driveLowE () ;\n"
  "    time.oneMillisecondBusyWait () ;\n"
  "    self.programLcd4BitDataBusOutput_inPanicMode (!inCommand) ;\n"
  "    self.driveHighE () ;\n"
  "    time.oneMillisecondBusyWait () ;\n"
  "    self.driveLowE () ;\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  public func `panic gotoInPanicMode @noUnusedWarning (\?line:inLine $uint32 \?column:inColumn $uint8) {\n"
  "    if inColumn < 20 {\n"
  "      if inLine == 0 {\n"
  "        self.write8bitCommandInPanicMode (!0x80 +% 0 +% inColumn) ;\n"
  "      }else if inLine == 1 {\n"
  "        self.write8bitCommandInPanicMode (!0x80 +% 64 +% inColumn) ;\n"
  "      }else if inLine == 2 {\n"
  "        self.write8bitCommandInPanicMode (!0x80 +% 20 +% inColumn) ;\n"
  "      }else if inLine == 3 {\n"
  "        self.write8bitCommandInPanicMode (!0x80 +% 84 +% inColumn) ;\n"
  "      }\n"
  "    }\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  public func `panic clearScreenInPanicMode @noUnusedWarning () {\n"
  "    self.write8bitCommandInPanicMode (!0x01)\n"
  "    time.busyWaitingDuringMS (!4)\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  public func `panic printStringInPanicMode @noUnusedWarning (\?inString $staticString) {\n"
  "    for c in inString {\n"
  "      self.writeDataInPanicMode (!c)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n" ;

const cRegularFileWrapper gWrapperFile_31_targetTemplates (
  "teensy-3-1-lcd.plm",
  "plm",
  true, // Text file
  16068, // Text length
  gWrapperFileContent_31_targetTemplates
) ;

//--- File 'files/teensy-3-1-leds.plm'

const char * gWrapperFileContent_32_targetTemplates = "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   Led L0 : PTA12\n"
  "//   Led L1 : PTA13\n"
  "//   Led L2 : PTD7\n"
  "//   Led L3 : PTD4\n"
  "//   Led L4 : PTD2\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "  \n"
  "let LED_L0 $uint32 = (1 << 0)\n"
  "let LED_L1 $uint32 = (1 << 1)\n"
  "let LED_L2 $uint32 = (1 << 2)\n"
  "let LED_L3 $uint32 = (1 << 3)\n"
  "let LED_L4 $uint32 = (1 << 4)\n"
  "\n"
  "let ALL_LEDS = LED_L0 | LED_L1 | LED_L2 | LED_L3 | LED_L4\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "module leds {\n"
  "\n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "\n"
  "  init 100 { // requiredBy ledOn, ledToggle, ledOff {\n"
  "  //--- Led L0 : PTA12\n"
  "    PORTA_PCR12 = (1 << 8)\n"
  "    GPIOA_PDDR |= (1 << 12)\n"
  "  //--- Led L1 : PTA13\n"
  "    PORTA_PCR13 = (1 << 8)\n"
  "    GPIOA_PDDR |= (1 << 13)\n"
  "  //--- Led L2 : PTD13\n"
  "    PORTD_PCR7 = (1 << 8)\n"
  "    GPIOD_PDDR |= (1 << 7)\n"
  "  //--- Led L3 : PTD4\n"
  "    PORTD_PCR4 = (1 << 8)\n"
  "    GPIOD_PDDR |= (1 << 4)\n"
  "  //--- Led L4 : PTD2\n"
  "    PORTD_PCR2 = (1 << 8)\n"
  "    GPIOD_PDDR |= (1 << 2)\n"
  "  }\n"
  "\n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  public func `user `panic `service `kernel write @noUnusedWarning (\?on:inLeds $uint32) {\n"
  "  //--- Led L0\n"
  "    if ((inLeds & LED_L0) != 0) {\n"
  "      GPIOA_PSOR = 1 << 12 ;\n"
  "    }\n"
  "  //--- Led L1\n"
  "    if ((inLeds & LED_L1) != 0) {\n"
  "      GPIOA_PSOR = 1 << 13 ;\n"
  "    }\n"
  "  //--- Led L2\n"
  "    if ((inLeds & LED_L2) != 0) {\n"
  "      GPIOD_PSOR = 1 << 7 ;\n"
  "    }\n"
  "  //--- Led L3\n"
  "    if ((inLeds & LED_L3) != 0) {\n"
  "      GPIOD_PSOR = 1 << 4 ;\n"
  "    }\n"
  "  //--- Led L4\n"
  "    if ((inLeds & LED_L4) != 0) {\n"
  "      GPIOD_PSOR = 1 << 2 ;\n"
  "    }\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  public func `user `panic `service `kernel write @noUnusedWarning (\?off:inLeds $uint32) {\n"
  "  //--- Led L0\n"
  "    if ((inLeds & LED_L0) != 0) {\n"
  "      GPIOA_PCOR = 1 << 12 ;\n"
  "    }\n"
  "  //--- Led L1\n"
  "    if ((inLeds & LED_L1) != 0) {\n"
  "      GPIOA_PCOR = 1 << 13 ;\n"
  "    }\n"
  "  //--- Led L2\n"
  "    if ((inLeds & LED_L2) != 0) {\n"
  "      GPIOD_PCOR = 1 << 7 ;\n"
  "    }\n"
  "  //--- Led L3\n"
  "    if ((inLeds & LED_L3) != 0) {\n"
  "      GPIOD_PCOR = 1 << 4 ;\n"
  "    }\n"
  "  //--- Led L4\n"
  "    if ((inLeds & LED_L4) != 0) {\n"
  "      GPIOD_PCOR = 1 << 2 ;\n"
  "    }\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  public func `user `panic `service `kernel write @noUnusedWarning (\?toggle:inLeds $uint32) {\n"
  "  //--- Led L0\n"
  "    if ((inLeds & LED_L0) != 0) {\n"
  "      GPIOA_PTOR = 1 << 12 ;\n"
  "    }\n"
  "  //--- Led L1\n"
  "    if ((inLeds & LED_L1) != 0) {\n"
  "      GPIOA_PTOR = 1 << 13 ;\n"
  "    }\n"
  "  //--- Led L2\n"
  "    if ((inLeds & LED_L2) != 0) {\n"
  "      GPIOD_PTOR = 1 << 7 ;\n"
  "    }\n"
  "  //--- Led L3\n"
  "    if ((inLeds & LED_L3) != 0) {\n"
  "      GPIOD_PTOR = 1 << 4 ;\n"
  "    }\n"
  "  //--- Led L4\n"
  "    if ((inLeds & LED_L4) != 0) {\n"
  "      GPIOD_PTOR = 1 << 2 ;\n"
  "    }\n"
  "  }\n"
  "\n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n" ;

const cRegularFileWrapper gWrapperFile_32_targetTemplates (
  "teensy-3-1-leds.plm",
  "plm",
  true, // Text file
  3054, // Text length
  gWrapperFileContent_32_targetTemplates
) ;

//--- File 'files/teensy-3-1-panic.plm'

const char * gWrapperFileContent_33_targetTemplates = "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "panic func setup 0 {\n"
  "  lcd.clearScreenInPanicMode ()\n"
  "  lcd.gotoInPanicMode (!line:0 !column:0)\n"
  "  lcd.printStringInPanicMode (!FILE)\n"
  "  lcd.gotoInPanicMode (!line:1 !column:0)\n"
  "  lcd.printStringInPanicMode (!\"Line:\")\n"
  "  lcd.printUnsignedInPanicMode (!LINE)\n"
  "  lcd.gotoInPanicMode (!line:2 !column:0)\n"
  "  lcd.printStringInPanicMode (!\"Code:\")\n"
  "  lcd.printSignedInPanicMode (!CODE)\n"
  "}\n"
  "\n"
  "//\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "\n"
  "panic func loop 0 {\n"
  "  time.busyWaitingDuringMS (!50)\n"
  "  leds.write (!on:LED_L0 | LED_L1 | LED_L2 | LED_L3 | LED_L4)\n"
  "  time.busyWaitingDuringMS (!50)\n"
  "  leds.write (!off:LED_L0 | LED_L1 | LED_L2 | LED_L3 | LED_L4)\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_33_targetTemplates (
  "teensy-3-1-panic.plm",
  "plm",
  true, // Text file
  835, // Text length
  gWrapperFileContent_33_targetTemplates
) ;

//--- File 'files/teensy-3-1-xtr.plm'

const char * gWrapperFileContent_34_targetTemplates = "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   SYNCHRONIZATION TOOLS ROUTINES                                             \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "type $taskList : ((32)) @instantiable\n"
  "\n"
  "//--- Block running task\n"
  "extern func `kernel\n"
  "block (\?!inList:ioWaitingList $taskList) : \"blockInList\"\n"
  "\n"
  "extern func `kernel\n"
  "block (\?onDeadline:inDeadline $uint32) : \"blockOnDeadline\"\n"
  "\n"
  "extern func `kernel\n"
  "block (\?!inList:ioWaitingList $taskList\n"
  "       \?onDeadline:inDeadline $uint32) : \"blockInListAndOnDeadline\"\n"
  "\n"
  "//--- Make task Ready\n"
  "extern func `kernel `service `guard\n"
  "makeTaskReady (\?!fromList:ioWaitingList $taskList\n"
  "               !found: outFound $bool) : \"makeTaskReady\"\n"
  "\n"
  "extern func `service\n"
  "makeTasksReady (\?fromCurrentDate:inCurrentDate $uint32) : \"makeTasksReadyFromCurrentDate\"\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   GUARD                                                                      \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "type $guardList : ((32)) @instantiable\n"
  "\n"
  "extern func `guard\n"
  "handle (\?!guard:ioGuard $guardList) : \"handleGuardedCommand\"\n"
  "\n"
  "extern func `guard\n"
  "handle (\?guardedDeadline:inDeadlineMS $uint32) : \"handleGuardedWaitUntil\"\n"
  "\n"
  "extern func `kernel `service\n"
  "notifyChange (\?!forGuard:ioGuard $guardList) : \"guardDidChange\"\n"
  "\n"
  "extern func `service\n"
  "notifyChangeForGuardedWaitUntil (\?withCurrentDate:inCurrentDate $uint32) : \"tickHandlerForGuardedWaitUntil\"\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   INIT                                                                       \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "init 0 { // Configure Systick interrupt every ms\n"
  "  SYST_RVR = 96000 - 1 // Interrupt every 96000 core clocks, i.e. every ms\n"
  "  SYST_CVR = 0\n"
  "  SYST_CSR = $SYST_CSR {CLKSOURCE, ENABLE, TICKINT}\n"
  "//--- Led Teensy\n"
  "  PORTC_PCR5 = (1 << 8)\n"
  "  GPIOC_PDDR |= (1 << 5)\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   USER TICK HANDLER                                                          \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "public func `service userTickHandler @weak () {\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   TIME                                                                       \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "module time {\n"
  "  var mUptimeMS $uint32 = 0 \n"
  "\n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  public func `panic `init oneMillisecondBusyWait @noUnusedWarning () {\n"
  "    do while not SYST_CSR.COUNTFLAG.bool {}\n"
  "  }\n"
  "\n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  public func `service `kernel `user `guard millis @noUnusedWarning @userAccess () -> $uint32 {\n"
  "    result = self.mUptimeMS\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  public func `panic `init busyWaitingDuringMS @noUnusedWarning (\?inDelay $uint32) {\n"
  "    for delay $uint32 in 0 ..< inDelay {\n"
  "      self.oneMillisecondBusyWait ()\n"
  "    }\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  isr systick @xtr {\n"
  "    let now = self.mUptimeMS +% 1\n"
  "    self.mUptimeMS = now\n"
  "    makeTasksReady (!fromCurrentDate:now)\n"
  "    notifyChangeForGuardedWaitUntil (!withCurrentDate:now)\n"
  "    userTickHandler ()\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  public primitive waitUntilMS @noUnusedWarning (\?deadline: inDate $uint32) {\n"
  "    if inDate > self.millis () {\n"
  "      block (!onDeadline:inDate)\n"
  "    }\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  public primitive waitDuringMS @noUnusedWarning (\?delay: inDelay $uint32) {\n"
  "    if inDelay > 0 {\n"
  "      block (!onDeadline:self.millis () +% inDelay)\n"
  "    }\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  public guard waitUntilMS @noUnusedWarning (\?deadline:inDeadline $uint32) {\n"
  "    accept = inDeadline <= self.millis ()\n"
  "    if not accept {\n"
  "      handle (!guardedDeadline:inDeadline)\n"
  "    }\n"
  "  }\n"
  "  \n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "\n"
  "}\n"
  " \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_34_targetTemplates (
  "teensy-3-1-xtr.plm",
  "plm",
  true, // Text file
  4553, // Text length
  gWrapperFileContent_34_targetTemplates
) ;

//--- All files of 'files' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetTemplates_2 [10] = {
  & gWrapperFile_26_targetTemplates,
  & gWrapperFile_27_targetTemplates,
  & gWrapperFile_28_targetTemplates,
  & gWrapperFile_29_targetTemplates,
  & gWrapperFile_30_targetTemplates,
  & gWrapperFile_31_targetTemplates,
  & gWrapperFile_32_targetTemplates,
  & gWrapperFile_33_targetTemplates,
  & gWrapperFile_34_targetTemplates,
  NULL
} ;

//--- All sub-directories of 'files' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetTemplates_2 [1] = {
  NULL
} ;

//--- Directory 'files'

const cDirectoryWrapper gWrapperDirectory_2_targetTemplates (
  "files",
  9,
  gWrapperAllFiles_targetTemplates_2,
  0,
  gWrapperAllDirectories_targetTemplates_2
) ;

//--- File 'teensy-3-1-tp/build-verbose.py'

const char * gWrapperFileContent_35_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "# https://docs.python.org/2/library/subprocess.html#module-subprocess\n"
  "\n"
  "import subprocess\n"
  "import sys\n"
  "import os\n"
  "import atexit\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "def cleanup():\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.kill ()\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "#--- Register a function for killing subprocess\n"
  "atexit.register (cleanup)\n"
  "#--- Get script absolute path\n"
  "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
  "os.chdir (scriptDir)\n"
  "#---\n"
  "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"all\", \"1\"])\n"
  "#--- Wait for subprocess termination\n"
  "if childProcess.poll () == None :\n"
  "  childProcess.wait ()\n"
  "if childProcess.returncode != 0 :\n"
  "  sys.exit (childProcess.returncode)\n"
  "\n"
  "#------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_35_targetTemplates (
  "build-verbose.py",
  "py",
  true, // Text file
  1002, // Text length
  gWrapperFileContent_35_targetTemplates
) ;

//--- File 'teensy-3-1-tp/build.py'

const char * gWrapperFileContent_36_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "import sys, os\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "sys.path.append (os.path.dirname (os.path.abspath (sys.argv [0])) + \"/sources\")\n"
  "import plm\n"
  "import toolpath\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def archiveBaseURL ():\n"
  "  return \"http://crossgcc.rts-software.org/downloads/plm-tools/\"\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   LLVM optimizer invocation                                                                                          *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def llvmOptimizerCompiler ():\n"
  "  return [toolpath.toolDir () + \"/bin/opt\", \"-<<OPT_OPTIMIZATION_OPTION>>\", \"-disable-simplify-libcalls\", \"-S\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   LLC Compiler invocation                                                                                            *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def LLCcompiler ():\n"
  "  return [toolpath.toolDir () + \"/bin/llc\", \"-function-sections\", \"-data-sections\", \"-<<LLC_OPTIMIZATION_OPTION>>\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   LLVM Linker invocation                                                                                             *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def LLVMLinkercompiler ():\n"
  "  return [toolpath.toolDir () + \"/bin/llvm-link\", \"-S\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   CLANG Compiler invocation                                                                                          *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def CLANGcompiler ():\n"
  "  result = [toolpath.toolDir () + \"/bin/clang\"]\n"
  "  result.append (\"--target=armv7-none--eabi\")\n"
  "  result.append (\"-mcpu=cortex-m4\")\n"
  "  result.append (\"-Oz\")\n"
  "  result.append (\"-fomit-frame-pointer\")\n"
  "  result.append (\"-fshort-enums\")\n"
  "  return result\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   AS assembler invocation                                                                                            *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def asAssembler ():\n"
  "  return [toolpath.toolDir () + \"/bin/arm-eabi-as\", \"-mthumb\", \"-mcpu=cortex-m4\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Display object size invocation                                                                                     *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def displayObjectSize ():\n"
  "  return [toolpath.toolDir () + \"/bin/arm-eabi-size\", \"-t\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Object Dump invocation                                                                                             *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def dumpObjectCode ():\n"
  "  return [toolpath.toolDir () + \"/bin/arm-eabi-objdump\", \"-Sdh\", \"-Mforce-thumb\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Linker invocation                                                                                                  *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def linker ():\n"
  "  result = [toolpath.toolDir () + \"/bin/arm-eabi-ld\"]\n"
  "  result.append (\"-nostartfiles\")\n"
  "  result.append (\"--fatal-warnings\")\n"
  "  result.append (\"--warn-common\")\n"
  "  result.append (\"--no-undefined\")\n"
  "  result.append (\"--cref\")\n"
  "  result.append (\"-static\")\n"
  "  result.append (\"--gc-sections\")\n"
  "  return result\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Linker scripts                                                                                                     *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def linkerScripts ():\n"
  "  result = [\"linker\"] # Linker script is linker.ld\n"
  "  return result\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Linker libraries                                                                                                   *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def linkerLibraries ():\n"
  "  result = [\"libgcc-armv7e-m.a\"]\n"
  "  return result\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   objcopy invocation                                                                                                 *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def objcopy ():\n"
  "  return [toolpath.toolDir () + \"/bin/arm-eabi-objcopy\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   C Source files                                                                                                     *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def CsourceList ():\n"
  "  return [\"src.c\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   LLVM Source files                                                                                                  *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def LLVMsourceList ():\n"
  "  return [\"src.ll\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Assembler Source files                                                                                             *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def assemblerSourceList ():\n"
  "  return [\"src.s\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Product directory                                                                                                  *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def productDir ():\n"
  "  return \"product\"\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#                         Object files directories                                                                     *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def objectDir ():\n"
  "  return \"objects\"\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Run executable                                                                                                      *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def runExecutableOnTarget ():\n"
  "  return [toolpath.toolDir () + \"/bin/teensy-loader-cli\", \"-w\", \"-v\", \"-mmcu=mk20dx256\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   ARM stack computations utility                                                                                     *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def arm_stack_computations ():\n"
  "  return [toolpath.toolDir () + \"/bin/arm-stack-computations\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   check stack utility                                                                                                *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def check_stack_utility ():\n"
  "  return [\"sources/check-stacks.py\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   MAIN                                                                                                               *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "currentFile = os.path.abspath (sys.argv [0])\n"
  "plm.runMakefile (toolpath.toolDir (), archiveBaseURL (), LLVMsourceList (), assemblerSourceList (), objectDir (), \\\n"
  "                 LLCcompiler (), llvmOptimizerCompiler (), \\\n"
  "                 asAssembler (), productDir (), \\\n"
  "                 linker (), linkerScripts (), linkerLibraries (), \\\n"
  "                 objcopy (), dumpObjectCode (), displayObjectSize (), runExecutableOnTarget (), \\\n"
  "                 CLANGcompiler (), CsourceList (), LLVMLinkercompiler (), \\\n"
  "                 currentFile, arm_stack_computations (), check_stack_utility ())\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_36_targetTemplates (
  "build.py",
  "py",
  true, // Text file
  15436, // Text length
  gWrapperFileContent_36_targetTemplates
) ;

//--- File 'teensy-3-1-tp/clean.py'

const char * gWrapperFileContent_37_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "# https://docs.python.org/2/library/subprocess.html#module-subprocess\n"
  "\n"
  "import subprocess\n"
  "import sys\n"
  "import os\n"
  "import atexit\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def cleanup():\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.kill ()\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "#--- Register a function for killing subprocess\n"
  "atexit.register (cleanup)\n"
  "#--- Get script absolute path\n"
  "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
  "#--- Directories to clean\n"
  "dir1 = scriptDir + \"/objects\"\n"
  "dir2 = scriptDir + \"/product\"\n"
  "dir3 = scriptDir + \"/as\"\n"
  "#---\n"
  "childProcess = subprocess.Popen ([\"rm\", \"-fr\", dir1, dir2, dir3], cwd=scriptDir)\n"
  "#--- Wait for subprocess termination\n"
  "if childProcess.poll () == None :\n"
  "  childProcess.wait ()\n"
  "if childProcess.returncode != 0 :\n"
  "  sys.exit (childProcess.returncode)\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_37_targetTemplates (
  "clean.py",
  "py",
  true, // Text file
  1264, // Text length
  gWrapperFileContent_37_targetTemplates
) ;

//--- File 'teensy-3-1-tp/linker.ld'

const char * gWrapperFileContent_38_targetTemplates = "/*----------------------------------------------------------------------------*/\n"
  "/*                                                                            */\n"
  "/*                                   Memory                                   */\n"
  "/*                                                                            */\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "MEMORY {\n"
  "  flash (rx) : ORIGIN = 0, LENGTH = 256k \n"
  "  sram_u (rwx) : ORIGIN = 0x20000000, LENGTH = 32k \n"
  "}\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "__sram_u_end = 0x20000000 + 32k ;\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "/*                                                                            */\n"
  "/*                                ISR Vectors                                 */\n"
  "/*                                                                            */\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .vectors : {\n"
  "    __vectors_start = . ;\n"
  "    KEEP (*(.isr_vector)) ;\n"
  "    __vectors_end = . ;\n"
  "  } > flash\n"
  "}\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "/*                                                                            */\n"
  "/*                                    Code                                    */\n"
  "/*                                                                            */\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .text : {\n"
  "    FILL(0xff)\n"
  "    __code_start = . ;\n"
  "  /*--- Code */\n"
  "    *(.text.*) ;\n"
  "    *(.text) ;\n"
  "    *(text) ;\n"
  "    *(.gnu.linkonce.t.*) ;\n"
  "  /*---- ROM data ----*/\n"
  "    . = ALIGN(4);\n"
  "    *(.rodata);\n"
  "    . = ALIGN(4);\n"
  "    *(.rodata*);\n"
  "    . = ALIGN(4);\n"
  "    *(.gnu.linkonce.r.*);\n"
  "    . = ALIGN(4);\n"
  "    *(.glue_7t);\n"
  "    . = ALIGN(4);\n"
  "    *(.glue_7);\n"
  "    . = ALIGN(4);\n"
  "    __code_end = . ;\n"
  "  } > flash\n"
  "\n"
  "  /DISCARD/ : {\n"
  "    *(rel.ARM.*);\n"
  "    *(.ARM.*);\n"
  "    *(.gnu.linkonce.armexidx.*);\n"
  "  }\n"
  "}\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "/*                                                                            */\n"
  "/*                          Data (initialized data)                           */\n"
  "/*                                                                            */\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .data : {\n"
  "    FILL (0xFF)\n"
  "    . = ALIGN (4) ;\n"
  "    __data_start = . ;\n"
  "    * (.data.*init*) ;\n"
  "    * (.data*) ;\n"
  "    . = ALIGN (4) ;\n"
  "    __data_end = . ;\n"
  "  } > sram_u AT > flash\n"
  "}\n"
  "\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "__data_load_start = LOADADDR (.data) ;\n"
  "__data_load_end   = LOADADDR (.data) + SIZEOF (.data) ;\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "/*                                                                            */\n"
  "/*                          BSS (uninitialized data)                          */\n"
  "/*                                                                            */\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .bss : {\n"
  "    . = ALIGN(4);\n"
  "    __bss_start = . ;\n"
  "    * (.bss.*) ;\n"
  "    * (.bss) ;\n"
  "    * (COMMON) ;\n"
  "    . = ALIGN(4);\n"
  "    __bss_end = . ;\n"
  "  } > sram_u\n"
  "}\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "/*                                                                            */\n"
  "/*                                System stack                                */\n"
  "/*                                                                            */\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .system_stack :{\n"
  "    . = ALIGN (4) ;\n"
  "    __system_stack_start = . ;\n"
  "    . += !SYSTEMSTACKSIZE! ;\n"
  "    . = ALIGN (4) ;\n"
  "    __system_stack_end = . ;\n"
  "  } > sram_u\n"
  "}\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "/*                                                                            */\n"
  "/*                                    Heap                                    */\n"
  "/*                                                                            */\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .heap : {\n"
  "    . = ALIGN (4) ;\n"
  "    __heap_start = . ;\n"
  "  } > sram_u\n"
  "}\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "__heap_end = __sram_u_end ;\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n" ;

const cRegularFileWrapper gWrapperFile_38_targetTemplates (
  "linker.ld",
  "ld",
  true, // Text file
  4665, // Text length
  gWrapperFileContent_38_targetTemplates
) ;

//--- File 'teensy-3-1-tp/objdump.py'

const char * gWrapperFileContent_39_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "# https://docs.python.org/2/library/subprocess.html#module-subprocess\n"
  "\n"
  "import subprocess\n"
  "import sys\n"
  "import os\n"
  "import atexit\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "def cleanup():\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.kill ()\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "#--- Register a function for killing subprocess\n"
  "atexit.register (cleanup)\n"
  "#--- Get script absolute path\n"
  "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
  "os.chdir (scriptDir)\n"
  "#---\n"
  "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"object-dump\"])\n"
  "#--- Wait for subprocess termination\n"
  "if childProcess.poll () == None :\n"
  "  childProcess.wait ()\n"
  "if childProcess.returncode != 0 :\n"
  "  sys.exit (childProcess.returncode)\n"
  "\n"
  "#------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_39_targetTemplates (
  "objdump.py",
  "py",
  true, // Text file
  1005, // Text length
  gWrapperFileContent_39_targetTemplates
) ;

//--- File 'teensy-3-1-tp/objsize.py'

const char * gWrapperFileContent_40_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "# https://docs.python.org/2/library/subprocess.html#module-subprocess\n"
  "\n"
  "import subprocess\n"
  "import sys\n"
  "import os\n"
  "import atexit\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "def cleanup():\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.kill ()\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "#--- Register a function for killing subprocess\n"
  "atexit.register (cleanup)\n"
  "#--- Get script absolute path\n"
  "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
  "os.chdir (scriptDir)\n"
  "#---\n"
  "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"display-object-size\"])\n"
  "#--- Wait for subprocess termination\n"
  "if childProcess.poll () == None :\n"
  "  childProcess.wait ()\n"
  "if childProcess.returncode != 0 :\n"
  "  sys.exit (childProcess.returncode)\n"
  "\n"
  "#------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_40_targetTemplates (
  "objsize.py",
  "py",
  true, // Text file
  1013, // Text length
  gWrapperFileContent_40_targetTemplates
) ;

//--- File 'teensy-3-1-tp/run.py'

const char * gWrapperFileContent_41_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "# https://docs.python.org/2/library/subprocess.html#module-subprocess\n"
  "\n"
  "import subprocess\n"
  "import sys\n"
  "import os\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "#--- Get script absolute path\n"
  "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
  "os.chdir (scriptDir)\n"
  "#---\n"
  "returncode = subprocess.call ([\"python\", \"build.py\", \"run\"])\n"
  "if returncode != 0 :\n"
  "    sys.exit (returncode)\n"
  "\n"
  "#------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_41_targetTemplates (
  "run.py",
  "py",
  true, // Text file
  629, // Text length
  gWrapperFileContent_41_targetTemplates
) ;

//--- File 'teensy-3-1-tp/section-dispatcher-entry.s'

const char * gWrapperFileContent_42_targetTemplates = "  .word  !ENTRY! @ !IDX!\n" ;

const cRegularFileWrapper gWrapperFile_42_targetTemplates (
  "section-dispatcher-entry.s",
  "s",
  true, // Text file
  25, // Text length
  gWrapperFileContent_42_targetTemplates
) ;

//--- File 'teensy-3-1-tp/section-dispatcher-header.s'

const char * gWrapperFileContent_43_targetTemplates = "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@                 S E C T I O N   T A B L E                                                                            *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "__udf_dispatcher_table:\n" ;

const cRegularFileWrapper gWrapperFile_43_targetTemplates (
  "section-dispatcher-header.s",
  "s",
  true, // Text file
  630, // Text length
  gWrapperFileContent_43_targetTemplates
) ;

//--- File 'teensy-3-1-tp/section-entry.s'

const char * gWrapperFileContent_44_targetTemplates = "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@  Section !ENTRY!\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "\t.section\t\".text.!ENTRY!\",\"ax\",%progbits\n"
  "\t.globl\t!ENTRY!\n"
  "\t.align\t1\n"
  "\t.type\t!ENTRY!,%function\n"
  "\t.code\t16\n"
  "\t.thumb_func\n"
  "\n"
  "!ENTRY!:\n"
  "\t.fnstart\n"
  "  udf !IDX!\n"
  "  bx  lr\n"
  "\n"
  ".Lfunc_end_!ENTRY!:\n"
  "  .size\t!ENTRY!, .Lfunc_end_!ENTRY! - !ENTRY!\n"
  "  .cantunwind\n"
  "\t.fnend\n"
  "\n"
  "  .global !ENTRY!\n"
  "  .type !ENTRY!, %function\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_44_targetTemplates (
  "section-entry.s",
  "s",
  true, // Text file
  554, // Text length
  gWrapperFileContent_44_targetTemplates
) ;

//--- File 'teensy-3-1-tp/service-dispatcher-entry.s'

const char * gWrapperFileContent_45_targetTemplates = "  .word  !ENTRY! @ !IDX! + 1\n" ;

const cRegularFileWrapper gWrapperFile_45_targetTemplates (
  "service-dispatcher-entry.s",
  "s",
  true, // Text file
  29, // Text length
  gWrapperFileContent_45_targetTemplates
) ;

//--- File 'teensy-3-1-tp/service-dispatcher-header.s'

const char * gWrapperFileContent_46_targetTemplates = "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@                 S V C    D I S P A T C H E R    T A B L E                                                            *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  .type __direct_return_for_null_service, %function\n"
  "\n"
  "__svc_dispatcher_table:\n"
  "  .word __direct_return_for_null_service @ 0\n" ;

const cRegularFileWrapper gWrapperFile_46_targetTemplates (
  "service-dispatcher-header.s",
  "s",
  true, // Text file
  728, // Text length
  gWrapperFileContent_46_targetTemplates
) ;

//--- File 'teensy-3-1-tp/service-entry.s'

const char * gWrapperFileContent_47_targetTemplates = "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@  Service !ENTRY!\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "\t.section\t\".text.!ENTRY!\",\"ax\",%progbits\n"
  "\t.globl\t!ENTRY!\n"
  "\t.align\t1\n"
  "\t.type\t!ENTRY!,%function\n"
  "\t.code\t16\n"
  "\t.thumb_func\n"
  "\n"
  "!ENTRY!:\n"
  "\t.fnstart\n"
  "  svc #!IDX! + 1\n"
  "  bx  lr\n"
  "\n"
  ".Lfunc_end_!ENTRY!:\n"
  "  .size\t!ENTRY!, .Lfunc_end_!ENTRY! - !ENTRY!\n"
  "  .cantunwind\n"
  "\t.fnend\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_47_targetTemplates (
  "service-entry.s",
  "s",
  true, // Text file
  513, // Text length
  gWrapperFileContent_47_targetTemplates
) ;

//--- File 'teensy-3-1-tp/target-panic.ll'

const char * gWrapperFileContent_48_targetTemplates = ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "define internal void @raise_panic (!PANICLINE! %inSourceLine, !PANICCODE! %inCode, i8* %inSourceFile) nounwind noreturn naked {\n"
  ";--- Mask interrupt: write 1 into FAULTMASK register\n"
  "  call void asm sideeffect \"msr FAULTMASK, $0\", \"r\"(i32 1) nounwind\n"
  ";--- Goto user code\n"
  "  call void @raise_panic_internal (!PANICLINE! %inSourceLine, !PANICCODE! %inCode, i8* %inSourceFile) noreturn\n"
  "  unreachable\n"
  "}\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_48_targetTemplates (
  "target-panic.ll",
  "ll",
  true, // Text file
  519, // Text length
  gWrapperFileContent_48_targetTemplates
) ;

//--- File 'teensy-3-1-tp/target.c'

const char * gWrapperFileContent_49_targetTemplates = "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "#define TASK_COUNT (!TASKCOUNT!)\n"
  "#define GUARD_COUNT (!GUARDCOUNT!)\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "typedef unsigned TaskList ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "typedef struct { unsigned mGuardValue ; } GuardList ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "typedef unsigned char bool ;\n"
  "\n"
  "#define true  ((bool) 1)\n"
  "#define false ((bool) 0)\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "// GUARD_EVALUATING_OR_OUTSIDE should be the first constant\n"
  "typedef enum {GUARD_EVALUATING_OR_OUTSIDE, GUARD_DID_CHANGE, GUARD_WAITING_FOR_CHANGE} GuardState ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//                                                                                                                     *\n"
  "//   T A S K    R O U T I N E    T Y P E                                                                               *\n"
  "//                                                                                                                     *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "typedef void (* RoutineTaskType) (void) ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "/*static unsigned countTrainingZeros (const unsigned inValue) {\n"
  "  unsigned result = 0 ;\n"
  "  unsigned w = inValue ;\n"
  "  while ((w & 1) == 0) {\n"
  "    result ++ ;\n"
  "    w >>= 1 ;\n"
  "  }\n"
  "  return result ;\n"
  "}*/\n"
  "\n"
  "static unsigned countTrainingZeros (const unsigned inValue) {\n"
  "  unsigned reversedValue ;\n"
  "  __asm__ (\"rbit %0, %1\" : \"=r\" (reversedValue) : \"r\" (inValue)) ;\n"
  "  unsigned result ;\n"
  "  __asm__ (\"clz %0, %1\" : \"=r\" (result) : \"r\" (reversedValue)) ;\n"
  "  return result ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//                C O R T E X    M 4    S T A C K E D    R E G I S T E R S                                             *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//                                                                                                                     *\n"
  "//         PSP+32 -> |                            |                                                                    *\n"
  "//                   |----------------------------| \\                                                                  *\n"
  "//         PSP+28 -> | xPSR                       |  |                                                                 *\n"
  "//                   |----------------------------|  |                                                                 *\n"
  "//         PSP+24 -> | PC (after SVC instruction) |  |                                                                 *\n"
  "//                   |----------------------------|  |                                                                 *\n"
  "//         PSP+20 -> | LR                         |  |                                                                 *\n"
  "//                   |----------------------------|  |                                                                 *\n"
  "//         PSP+16 -> | R12                        |  |  Saved by interrupt response                                    *\n"
  "//                   |----------------------------|  |                                                                 *\n"
  "//         PSP+12 -> | R3                         |  |                                                                 *\n"
  "//                   |----------------------------|  |                                                                 *\n"
  "//         PSP+8  -> | R2                         |  |                                                                 *\n"
  "//                   |----------------------------|  |                                                                 *\n"
  "//         PSP+4  -> | R1                         |  |                                                                 *\n"
  "//                   |----------------------------|  |                                                                 *\n"
  "//   /---- PSP ----> | R0                         |  |                                                                 *\n"
  "//   |               |----------------------------| /                                                                  *\n"
  "//   |                                                                                                                 *\n"
  "//   |                                        *---------------------*\n"
  "//   |                                        | LR return code      | +36 [ 9]\n"
  "//   |                                        *---------------------*\n"
  "//   \\----------------------------------------| R13 (PSP)           | +32 [ 8]\n"
  "//                                            *---------------------*\n"
  "//                                            | R11                 | +28 [ 7]\n"
  "//                                            *---------------------*\n"
  "//                                            | R10                 | +24 [ 6]\n"
  "//                                            *---------------------*\n"
  "//                                            | R9                  | +20 [ 5]\n"
  "//                                            *---------------------*\n"
  "//                                            | R8                  | +16 [ 4]\n"
  "//                                            *---------------------*\n"
  "//                                            | R7                  | +12 [ 3]\n"
  "//                                            *---------------------*\n"
  "//                                            | R6                  | + 8 [ 2]\n"
  "//                                            *---------------------*\n"
  "//                                            | R5                  | + 4 [ 1]\n"
  "//  *--------------------------------*        *---------------------*\n"
  "//  | gRunningTaskContextSaveAddress +------> | R4                  | + 0 [ 0]\n"
  "//  *--------------------------------*        *---------------------*\n"
  "//\n"
  "//----------------------------------------------------------------------------------------------------------------------\n"
  "\n"
  "typedef struct {\n"
  "  unsigned mR0 ;\n"
  "  unsigned mR1 ;\n"
  "  unsigned mR2 ;\n"
  "  unsigned mR3 ;\n"
  "  unsigned mR12 ;\n"
  "  unsigned mLR ;\n"
  "  unsigned mPC ;\n"
  "  unsigned mXPSR ;\n"
  "} StackedRegisters ;\n"
  "\n"
  "//----------------------------------------------------------------------------------------------------------------------\n"
  "\n"
  "typedef struct {\n"
  "  unsigned mR4 ;\n"
  "  unsigned mR5 ;\n"
  "  unsigned mR6 ;\n"
  "  unsigned mR7 ;\n"
  "  unsigned mR8 ;\n"
  "  unsigned mR9 ;\n"
  "  unsigned mR10 ;\n"
  "  unsigned mR11 ;\n"
  "  StackedRegisters * mSP_USR ;\n"
  "  unsigned mLR_RETURN_CODE ;\n"
  "} TaskContext ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static void kernel_set_task_context (TaskContext * inTaskContext,\n"
  "                                     const unsigned inTopOfStack,\n"
  "                                     RoutineTaskType inTaskRoutine) {\n"
  "//--- Initialize LR\n"
  "  inTaskContext->mLR_RETURN_CODE = 0xFFFFFFFD ;\n"
  "//--- Initialize SP\n"
  "  StackedRegisters * ptr = (StackedRegisters *) (inTopOfStack - sizeof (StackedRegisters)) ; // 8 stacked registers\n"
  "  inTaskContext->mSP_USR = ptr ;\n"
  "//--- Initialize PC\n"
  "  ptr->mPC = (unsigned) inTaskRoutine ;\n"
  "//--- Initialize CPSR\n"
  "  ptr->mXPSR = 1 << 24 ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static void kernel_set_return_code (TaskContext * inTaskContext,\n"
  "                                    const unsigned inReturnCode) {\n"
  "  StackedRegisters * ptr = inTaskContext->mSP_USR ;\n"
  "  ptr->mR0 = inReturnCode ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//   T A S K    C O N T R O L    B L O C K                                                                             *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "typedef struct {\n"
  "//--- Context buffer (SHOULD BE THE FIRST FIELD)\n"
  "  TaskContext mTaskContext ;\n"
  "//--- This field is used for deadline waiting\n"
  "  unsigned mTaskDeadline ;\n"
  "//---\n"
  "  TaskList * mWaitingList ;\n"
  "//--- Stack buffer parameters\n"
  "//  unsigned * mStackBufferAddress ;\n"
  "//  unsigned mStackBufferSize ; // In bytes\n"
  "//--- Task index\n"
  "  unsigned char mTaskIndex ;\n"
  "//--- Guards\n"
  "  GuardState mGuardState ;\n"
  "  bool mHaveDeadlineGuard ;\n"
  "  unsigned mGuardCount ;\n"
  "  GuardList * mGuardListArray [GUARD_COUNT] ;\n"
  "} TaskControlBlock ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static TaskControlBlock gTaskDescriptorArray [TASK_COUNT] ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//   S C H E D U L E R                                                                                                 *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "TaskControlBlock * gRunningTaskControlBlock ; // Shared with assembly code (arm_context.s)\n"
  "static TaskList gReadyTaskList ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static void kernel_makeTaskReady (const unsigned inTaskIndex) {\n"
  "  gReadyTaskList |= 1 << inTaskIndex ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static void kernel_makeNoTaskRunning (void) {\n"
  "  gRunningTaskControlBlock = (TaskControlBlock *) 0 ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void kernel_selectTaskToRun (void) ;\n"
  "\n"
  "void kernel_selectTaskToRun (void) {\n"
  "  if (gRunningTaskControlBlock != ((TaskControlBlock *) 0)) {\n"
  "    gReadyTaskList |= 1 << gRunningTaskControlBlock->mTaskIndex ;\n"
  "    gRunningTaskControlBlock = (TaskControlBlock *) 0 ;\n"
  "  }\n"
  "  if (gReadyTaskList != 0) {\n"
  "    const unsigned runningTaskIndex = countTrainingZeros (gReadyTaskList) ;\n"
  "    gReadyTaskList &= ~ (1 << runningTaskIndex) ;\n"
  "    gRunningTaskControlBlock = & gTaskDescriptorArray [runningTaskIndex] ;\n"
  "  }\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//   kernel_create_task                                                                                                *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void kernel_create_task (const unsigned inTaskIndex,\n"
  "                         unsigned * inStackBufferAddress,\n"
  "                         unsigned inStackBufferSize,\n"
  "                         RoutineTaskType inTaskRoutine) ;\n"
  "\n"
  "void kernel_create_task (const unsigned inTaskIndex,\n"
  "                         unsigned * inStackBufferAddress,\n"
  "                         unsigned inStackBufferSize,\n"
  "                         RoutineTaskType inTaskRoutine) {\n"
  "  TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [inTaskIndex] ;\n"
  "  taskControlBlockPtr->mTaskIndex = (unsigned char) inTaskIndex ;\n"
  "  taskControlBlockPtr->mTaskDeadline = 0 ; // statically initialized to 0\n"
  "  taskControlBlockPtr->mWaitingList = (TaskList *) 0 ; // statically initialized to 0\n"
  "  taskControlBlockPtr->mGuardCount = 0 ; // statically initialized to 0\n"
  "  taskControlBlockPtr->mHaveDeadlineGuard = false ; // statically initialized to 0\n"
  "  taskControlBlockPtr->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ; // statically initialized to 0\n"
  "//--- Store stack parameters\n"
  "//  taskControlBlockPtr->mStackBufferAddress = inStackBufferAddress ;\n"
  "//  taskControlBlockPtr->mStackBufferSize = inStackBufferSize ;\n"
  "//--- Stack Pointer initial value\n"
  "  const unsigned topOfStack = ((unsigned) inStackBufferAddress) + inStackBufferSize ;\n"
  "//--- Initialize Context\n"
  "  kernel_set_task_context (& taskControlBlockPtr->mTaskContext, topOfStack, inTaskRoutine) ;\n"
  "//--- Make task ready\n"
  "  kernel_makeTaskReady (inTaskIndex) ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//   kernel_self_terminate                                                                                             *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void kernel_self_terminate (void) asm (\"!SERVICEIMPLEMENTATION!self.terminate\") ;\n"
  "\n"
  "void kernel_self_terminate (void) {\n"
  "  kernel_makeNoTaskRunning () ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//   L I S T    M A N A G E M E N T                                                                                    *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static TaskList gDeadlineWaitingTaskList ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//  B L O C K I N G    R U N N I N G    T A S K                                                                        *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void blockInList (TaskList * ioWaitingList) asm (\"!FUNC!blockInList\") ;\n"
  "\n"
  "void blockInList (TaskList * ioWaitingList) {\n"
  "  const unsigned currentTaskIndex = gRunningTaskControlBlock->mTaskIndex ;\n"
  "//--- Insert in tool list\n"
  "  *ioWaitingList |= 1 << currentTaskIndex ;\n"
  "  gRunningTaskControlBlock->mWaitingList = ioWaitingList ;\n"
  "//--- Block task\n"
  "  kernel_makeNoTaskRunning () ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void blockOnDeadline (const unsigned inDeadline) asm (\"!FUNC!blockOnDeadline\") ;\n"
  "\n"
  "void blockOnDeadline (const unsigned inDeadline) {\n"
  "  const unsigned currentTaskIndex = gRunningTaskControlBlock->mTaskIndex ;\n"
  "//--- Insert in deadline list\n"
  "  gDeadlineWaitingTaskList |= 1 << currentTaskIndex ;\n"
  "  gRunningTaskControlBlock->mTaskDeadline = inDeadline ;\n"
  "  kernel_makeNoTaskRunning () ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void blockInListAndOnDeadline (TaskList * ioWaitingList, const unsigned inDeadline) asm (\"!FUNC!blockInListAndOnDeadline\") ;\n"
  "\n"
  "void blockInListAndOnDeadline (TaskList * ioWaitingList, const unsigned inDeadline) {\n"
  "  const unsigned currentTaskIndex = gRunningTaskControlBlock->mTaskIndex ;\n"
  "//--- Insert in tool list\n"
  "  *ioWaitingList |= 1 << currentTaskIndex ;\n"
  "  gRunningTaskControlBlock->mWaitingList = ioWaitingList ;\n"
  "//--- Insert in deadline list\n"
  "  gDeadlineWaitingTaskList |= 1 << currentTaskIndex ;\n"
  "  gRunningTaskControlBlock->mTaskDeadline = inDeadline ;\n"
  "//--- Block task\n"
  "  kernel_makeNoTaskRunning () ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//  M A K E    T A S K    R E A D Y                                                                                    *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void makeTaskReady (TaskList * ioWaitingList, bool * outFound) asm (\"!FUNC!makeTaskReady\") ;\n"
  "\n"
  "void makeTaskReady (TaskList * ioWaitingList, bool * outFound) {\n"
  "  *outFound = (* ioWaitingList) != 0 ;\n"
  "  if (*outFound) {\n"
  "  //--- Get index of waiting task\n"
  "    const unsigned taskIndex = countTrainingZeros (* ioWaitingList) ;\n"
  "    TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [taskIndex] ;\n"
  "  //--- Remove task from deadline list\n"
  "    gDeadlineWaitingTaskList &= ~ (1 << taskIndex) ;\n"
  "  //--- Remove task from waiting list\n"
  "    *(ioWaitingList) &= ~ (1 << taskIndex) ;\n"
  "  //--- Clear task waiting list pointer\n"
  "    taskControlBlockPtr->mWaitingList = (TaskList *) 0 ;\n"
  "  //--- Set return code and make task ready\n"
  "    kernel_set_return_code (& taskControlBlockPtr->mTaskContext, 1) ;\n"
  "    kernel_makeTaskReady (taskIndex) ;\n"
  "  }\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void makeTasksReadyFrom (const unsigned inCurrentDate) asm (\"!FUNC!makeTasksReadyFromCurrentDate\") ;\n"
  "\n"
  "void makeTasksReadyFrom (const unsigned inCurrentDate) {\n"
  "  unsigned w = gDeadlineWaitingTaskList ;\n"
  "  while (w > 0) {\n"
  "    const unsigned taskIndex = countTrainingZeros (w) ;\n"
  "    w &= ~ (1 << taskIndex) ;\n"
  "    TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [taskIndex] ;\n"
  "    if (inCurrentDate >= taskControlBlockPtr->mTaskDeadline) {\n"
  "    //--- Remove task from deadline list\n"
  "      gDeadlineWaitingTaskList &= ~ (1 << taskIndex) ;\n"
  "    //--- Remove task for waiting list \?\n"
  "      if (taskControlBlockPtr->mWaitingList != (TaskList *) 0) {\n"
  "        *(taskControlBlockPtr->mWaitingList) &= ~ (1 << taskIndex) ;\n"
  "        taskControlBlockPtr->mWaitingList = (TaskList *) 0 ;\n"
  "      }\n"
  "    //--- Set return code and make task ready\n"
  "      kernel_set_return_code (& taskControlBlockPtr->mTaskContext, 0) ;\n"
  "      kernel_makeTaskReady (taskIndex) ;\n"
  "    }\n"
  "  }\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//  G U A R D S                                                                                                        *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static TaskList gDeadlineWaitingInGuardTaskList ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static void removeTaskFromGuards (TaskControlBlock * taskControlBlockPtr) {\n"
  "  const unsigned mask = ~ (1 << taskControlBlockPtr->mTaskIndex) ;\n"
  "  const unsigned guardCount = taskControlBlockPtr->mGuardCount ;\n"
  "  for (unsigned i=0 ; i<guardCount ; i++) {\n"
  "    taskControlBlockPtr->mGuardListArray [i]->mGuardValue &= mask ;\n"
  "  }\n"
  "  taskControlBlockPtr->mGuardCount = 0 ;\n"
  "  gDeadlineWaitingInGuardTaskList &= mask ;\n"
  "  taskControlBlockPtr->mHaveDeadlineGuard = false ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void noteGuardHasBeenAccepted (void) asm (\"noteGuardHasBeenAccepted\") ;\n"
  "\n"
  "void noteGuardHasBeenAccepted (void) {\n"
  "  gRunningTaskControlBlock->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ;\n"
  "  removeTaskFromGuards (gRunningTaskControlBlock) ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void kernel_handleGuardedCommand (GuardList * ioGuardList) asm (\"!FUNC!handleGuardedCommand\") ;\n"
  "\n"
  "void kernel_handleGuardedCommand (GuardList * ioGuardList) {\n"
  "  if (gRunningTaskControlBlock->mGuardState == GUARD_EVALUATING_OR_OUTSIDE) {\n"
  "    const unsigned runningTaskIndex = gRunningTaskControlBlock->mTaskIndex ;\n"
  "    ioGuardList->mGuardValue |= 1 << runningTaskIndex ;\n"
  "    const unsigned guardCount = gRunningTaskControlBlock->mGuardCount ;\n"
  "    gRunningTaskControlBlock->mGuardListArray [guardCount] = ioGuardList ;\n"
  "    gRunningTaskControlBlock->mGuardCount = guardCount + 1 ;\n"
  "  }\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void handleGuardedWaitUntil (const unsigned inDeadline) asm (\"!FUNC!handleGuardedWaitUntil\") ;\n"
  "\n"
  "void handleGuardedWaitUntil (const unsigned inDeadline) {\n"
  "  if (gRunningTaskControlBlock->mGuardState == GUARD_EVALUATING_OR_OUTSIDE) {\n"
  "    gRunningTaskControlBlock->mHaveDeadlineGuard = true ;\n"
  "    const unsigned runningTaskIndex = gRunningTaskControlBlock->mTaskIndex ;\n"
  "    const unsigned mask = 1 << runningTaskIndex ;\n"
  "    if (((gDeadlineWaitingInGuardTaskList & mask) == 0) || (gRunningTaskControlBlock->mTaskDeadline > inDeadline)) {\n"
  "      gRunningTaskControlBlock->mTaskDeadline = inDeadline ;\n"
  "    }\n"
  "    gDeadlineWaitingInGuardTaskList |= mask ;\n"
  "  }\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "bool waitForGuardChange (void) asm (\"!SERVICECALL!waitForGuardChange\") ;\n"
  "\n"
  "bool kernel_waitForGuardChange (void) asm (\"!SERVICEIMPLEMENTATION!waitForGuardChange\") ;\n"
  "\n"
  "bool kernel_waitForGuardChange (void) {\n"
  "  bool result = gRunningTaskControlBlock->mGuardState == GUARD_DID_CHANGE ;\n"
  "  if (result) { // GUARD_DID_CHANGE\n"
  "    gRunningTaskControlBlock->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ;\n"
  "  }else{ // GUARD_EVALUATING_OR_OUTSIDE\n"
  "    result = gRunningTaskControlBlock->mHaveDeadlineGuard || (gRunningTaskControlBlock->mGuardCount > 0) ;\n"
  "    if (result) {\n"
  "      gRunningTaskControlBlock->mGuardState = GUARD_WAITING_FOR_CHANGE ;\n"
  "      kernel_makeNoTaskRunning () ;\n"
  "    }\n"
  "  }\n"
  "  return result ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void kernel_guardDidChange (GuardList * ioGuardList) asm (\"!FUNC!guardDidChange\") ;\n"
  "\n"
  "void kernel_guardDidChange (GuardList * ioGuardList) {\n"
  "  while (ioGuardList->mGuardValue > 0) {\n"
  "    const unsigned taskIndex = countTrainingZeros (ioGuardList->mGuardValue) ;\n"
  "    ioGuardList->mGuardValue &= ~ (1 << taskIndex) ;\n"
  "    TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [taskIndex] ;\n"
  "    removeTaskFromGuards (taskControlBlockPtr) ;    \n"
  "    if (taskControlBlockPtr->mGuardState == GUARD_WAITING_FOR_CHANGE) {\n"
  "      kernel_set_return_code (& taskControlBlockPtr->mTaskContext, 1) ;\n"
  "      kernel_makeTaskReady (taskIndex) ;\n"
  "      taskControlBlockPtr->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ;\n"
  "    }else if (taskControlBlockPtr->mGuardState == GUARD_EVALUATING_OR_OUTSIDE) {\n"
  "      taskControlBlockPtr->mGuardState = GUARD_DID_CHANGE ;\n"
  "    }else{ // GUARD_DID_CHANGE\n"
  "      // Nothing to do\n"
  "    }\n"
  "  }\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void tickHandlerForGuardedWaitUntil (const unsigned inUptime) asm (\"!FUNC!tickHandlerForGuardedWaitUntil\") ;\n"
  "\n"
  "void tickHandlerForGuardedWaitUntil (const unsigned inUptime) {\n"
  "  unsigned w = gDeadlineWaitingInGuardTaskList ;\n"
  "  while (w > 0) {\n"
  "    const unsigned taskIndex = countTrainingZeros (w) ;\n"
  "    w &= ~ (1 << taskIndex) ;\n"
  "    TaskControlBlock * taskControlBlockPtr = & gTaskDescriptorArray [taskIndex] ;\n"
  "    if (inUptime >= taskControlBlockPtr->mTaskDeadline) {\n"
  "      removeTaskFromGuards (taskControlBlockPtr) ;\n"
  "      if (taskControlBlockPtr->mGuardState == GUARD_WAITING_FOR_CHANGE) {\n"
  "        taskControlBlockPtr->mGuardState = GUARD_EVALUATING_OR_OUTSIDE ;\n"
  "        kernel_set_return_code (& taskControlBlockPtr->mTaskContext, 1) ;\n"
  "        kernel_makeTaskReady (taskIndex) ;\n"
  "      }else if (taskControlBlockPtr->mGuardState == GUARD_EVALUATING_OR_OUTSIDE) {\n"
  "        taskControlBlockPtr->mGuardState = GUARD_DID_CHANGE ;\n"
  "      }else{ // GUARD_DID_CHANGE\n"
  "        // Nothing to do\n"
  "      }\n"
  "    }\n"
  "  }\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_49_targetTemplates (
  "target.c",
  "c",
  true, // Text file
  23837, // Text length
  gWrapperFileContent_49_targetTemplates
) ;

//--- File 'teensy-3-1-tp/target.ll'

const char * gWrapperFileContent_50_targetTemplates = "target datalayout = \"e-m:e-p:32:32-i64:64-v128:64:128-a:0:32-n32-S64\"\n"
  "target triple = \"thumbv7em-none--eabi\"\n"
  "\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  ";   Clear BSS                                                                                                          *\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  ";void clearBSS (void) {\n"
  ";  extern unsigned __bss_start ;\n"
  ";  extern unsigned __bss_end ;\n"
  ";  unsigned * p = & __bss_start ;\n"
  ";  while (p != & __bss_end) {\n"
  ";    * p = 0 ;\n"
  ";    p ++ ;\n"
  ";  }\n"
  ";}\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "@__bss_start = external global [0 x i32]\n"
  "@__bss_end = external global [0 x i32]\n"
  "\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "define internal void @clearBSS () nounwind minsize optsize {\n"
  "entry:\n"
  "  %startPtr = getelementptr  [0 x i32], [0 x i32]* @__bss_start, i32 0, i32 0\n"
  "  %endPtr = getelementptr  [0 x i32], [0 x i32]* @__bss_end, i32 0, i32 0\n"
  "  br label %bssLoopTest\n"
  " \n"
  "bssLoopTest:\n"
  "  %p = phi i32* [%startPtr, %entry], [%p.next, %bssLoop]\n"
  "  %completed = icmp eq i32* %p, %endPtr\n"
  "  br i1 %completed, label %clearCompleted, label %bssLoop\n"
  " \n"
  "bssLoop:\n"
  "  store i32 0, i32* %p, align 4\n"
  "  %p.next = getelementptr inbounds i32, i32* %p, i32 1\n"
  "  br label %bssLoopTest\n"
  " \n"
  "clearCompleted:\n"
  "  ret void\n"
  "}\n"
  "\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  ";   Copy .data section                                                                                                 *\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  ";void copyData (void) {\n"
  ";  extern unsigned __data_start ;\n"
  ";  extern unsigned __data_end ;\n"
  ";  extern unsigned __data_load_start ;\n"
  ";  unsigned * pSrc = & __data_load_start ;\n"
  ";  unsigned * pDest = & __data_start ;\n"
  ";  while (pDest != & __data_end) {\n"
  ";    * pDest = * pSrc ;\n"
  ";    pDest ++ ;\n"
  ";    pSrc ++ ;\n"
  ";  }\n"
  ";}\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "@__data_start = external global [0 x i32]\n"
  "@__data_end = external global [0 x i32]\n"
  "@__data_load_start = external global [0 x i32]\n"
  "\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "define internal void @copyData () nounwind minsize optsize {\n"
  "entry:\n"
  "  %data_start = getelementptr  [0 x i32], [0 x i32]* @__data_start, i32 0, i32 0\n"
  "  %data_end = getelementptr  [0 x i32], [0 x i32]* @__data_end, i32 0, i32 0\n"
  "  %data_load_start = getelementptr  [0 x i32], [0 x i32]* @__data_load_start, i32 0, i32 0\n"
  "  br label %copyLoop.test\n"
  " \n"
  "copyLoop.test:\n"
  "  %pDest = phi i32* [%data_start, %entry], [%pDestInct, %copyLoop]\n"
  "  %pSource = phi i32* [%data_load_start, %entry], [%pSourceInc, %copyLoop]\n"
  "  %equal = icmp eq i32* %pDest, %data_end\n"
  "  br i1 %equal, label %copyCompleted, label %copyLoop\n"
  " \n"
  "copyLoop:\n"
  "  %value = load i32, i32* %pSource\n"
  "  store i32 %value, i32* %pDest, align 4\n"
  "  %pDestInct = getelementptr inbounds i32, i32* %pDest, i32 1\n"
  "  %pSourceInc = getelementptr inbounds i32, i32* %pSource, i32 1\n"
  "  br label %copyLoop.test\n"
  "\n"
  "copyCompleted:\n"
  "  ret void\n"
  "}\n"
  "\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  ";   configuration.on.boot                                                                                              *\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "define void @configuration.on.boot () nounwind minsize optsize {\n"
  "  call void @boot ()\n"
  "  call void @clearBSS ()\n"
  "  call void @copyData ()\n"
  "  call void @init ()\n"
  "  call void @start.tasks ()\n"
  "  ret  void\n"
  "}\n"
  "\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  ";   Real time Kernel interface                                                                                         *\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  ";--- Create task \n"
  "declare void @kernel_create_task (i32 %inTaskIndex, i32* %inStackBufferAddress, i32 %inStackBufferSize, void ()* %inTaskRoutine) nounwind\n" ;

const cRegularFileWrapper gWrapperFile_50_targetTemplates (
  "target.ll",
  "ll",
  true, // Text file
  4552, // Text length
  gWrapperFileContent_50_targetTemplates
) ;

//--- File 'teensy-3-1-tp/target.s'

const char * gWrapperFileContent_51_targetTemplates = "\t.syntax unified\n"
  "\t.cpu cortex-m4\n"
  "\t.thumb\n"
  "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@   INTERRUPT VECTOR                                                                                                   *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "\t.section\t.isr_vector,\"a\",%progbits\n"
  "\n"
  "  .word __system_stack_end\n"
  "@--- ARM Core System Handler Vectors\n"
  "  .word as_reset_handler @ 1\n"
  "  .word !ISR!NMI @ 2\n"
  "  .word as_section_handler @ 3\n"
  "  .word !ISR!MemManage @ 4\n"
  "  .word !ISR!BusFault @ 5\n"
  "  .word !ISR!UsageFault @ 6\n"
  "  .word -1 @ 7, reserved\n"
  "  .word -1 @ 8, reserved\n"
  "  .word -1 @ 9, reserved\n"
  "  .word -1 @ 10, reserved\n"
  "  .word as_svc_handler @ 11\n"
  "  .word !ISR!DebugMonitor @ 12\n"
  "  .word -1 @ 13, reserved\n"
  "  .word !ISR!PendSV @ 14\n"
  "  .word !ISR!systick @ 15\n"
  "@--- Non-Core Vectors\n"
  "  .word !ISR!DMAChannel0TranfertComplete @ 16\n"
  "  .word !ISR!DMAChannel1TranfertComplete @ 17\n"
  "  .word !ISR!DMAChannel2TranfertComplete @ 18\n"
  "  .word !ISR!DMAChannel3TranfertComplete @ 19\n"
  "  .word !ISR!DMAChannel4TranfertComplete @ 20\n"
  "  .word !ISR!DMAChannel5TranfertComplete @ 21\n"
  "  .word !ISR!DMAChannel6TranfertComplete @ 22\n"
  "  .word !ISR!DMAChannel7TranfertComplete @ 23\n"
  "  .word !ISR!DMAChannel8TranfertComplete @ 24\n"
  "  .word !ISR!DMAChannel9TranfertComplete @ 25\n"
  "  .word !ISR!DMAChannel10TranfertComplete @ 26\n"
  "  .word !ISR!DMAChannel11TranfertComplete @ 27\n"
  "  .word !ISR!DMAChannel12TranfertComplete @ 28\n"
  "  .word !ISR!DMAChannel13TranfertComplete @ 29\n"
  "  .word !ISR!DMAChannel14TranfertComplete @ 30\n"
  "  .word !ISR!DMAChannel15TranfertComplete @ 31\n"
  "  .word !ISR!DMAError @ 32\n"
  "  .word -1 @ 33\n"
  "  .word !ISR!flashMemoryCommandComplete @ 34\n"
  "  .word !ISR!flashMemoryReadCollision @ 35\n"
  "  .word !ISR!modeController @ 36\n"
  "  .word !ISR!LLWU @ 37\n"
  "  .word !ISR!WDOGEWM @ 38\n"
  "  .word -1 @ 39\n"
  "  .word !ISR!I2C0 @ 40\n"
  "  .word !ISR!I2C1 @ 41\n"
  "  .word !ISR!SPI0 @ 42\n"
  "  .word !ISR!SPI1 @ 43\n"
  "  .word -1 @ 44\n"
  "  .word !ISR!CAN0MessageBuffer @ 45\n"
  "  .word !ISR!CAN0BusOff @ 46\n"
  "  .word !ISR!CAN0Error @ 47\n"
  "  .word !ISR!CAN0TransmitWarning @ 48\n"
  "  .word !ISR!CAN0ReceiveWarning @ 49\n"
  "  .word !ISR!CAN0WakeUp @ 50\n"
  "  .word !ISR!I2S0Transmit @ 51\n"
  "  .word !ISR!I2S0Receive @ 52\n"
  "  .word -1 @ 53\n"
  "  .word -1 @ 54\n"
  "  .word -1 @ 55\n"
  "  .word -1 @ 56\n"
  "  .word -1 @ 57\n"
  "  .word -1 @ 58\n"
  "  .word -1 @ 59\n"
  "  .word !ISR!UART0LON @ 60\n"
  "  .word !ISR!UART0Status @ 61\n"
  "  .word !ISR!UART0Error @ 62\n"
  "  .word !ISR!UART1Status @ 63\n"
  "  .word !ISR!UART1Error @ 64\n"
  "  .word !ISR!UART2Status @ 65\n"
  "  .word !ISR!UART2Error @ 66\n"
  "  .word -1 @ 67\n"
  "  .word -1 @ 68\n"
  "  .word -1 @ 69\n"
  "  .word -1 @ 70\n"
  "  .word -1 @ 71\n"
  "  .word -1 @ 72\n"
  "  .word !ISR!ADC0 @ 73\n"
  "  .word !ISR!ADC1 @ 74\n"
  "  .word !ISR!CMP0 @ 75\n"
  "  .word !ISR!CMP1 @ 76\n"
  "  .word !ISR!CMP2 @ 77\n"
  "  .word !ISR!FMT0 @ 78\n"
  "  .word !ISR!FMT1 @ 79\n"
  "  .word !ISR!FMT2 @ 80\n"
  "  .word !ISR!CMT @ 81\n"
  "  .word !ISR!RTCAlarm @ 82\n"
  "  .word !ISR!RTCSecond @ 83\n"
  "  .word !ISR!PITChannel0 @ 84\n"
  "  .word !ISR!PITChannel1 @ 85\n"
  "  .word !ISR!PITChannel2 @ 86\n"
  "  .word !ISR!PITChannel3 @ 87\n"
  "  .word !ISR!PDB @ 88\n"
  "  .word !ISR!USBOTG @ 89\n"
  "  .word !ISR!USBChargerDetect @ 90\n"
  "  .word -1 @ 91\n"
  "  .word -1 @ 92\n"
  "  .word -1 @ 93\n"
  "  .word -1 @ 94\n"
  "  .word -1 @ 95\n"
  "  .word -1 @ 96\n"
  "  .word !ISR!DAC0 @ 97\n"
  "  .word -1 @ 98\n"
  "  .word !ISR!TSI @ 99\n"
  "  .word !ISR!MCG @ 100\n"
  "  .word !ISR!lowPowerTimer @ 101\n"
  "  .word -1 @ 102\n"
  "  .word !ISR!pinDetectPortA @ 103\n"
  "  .word !ISR!pinDetectPortB @ 104\n"
  "  .word !ISR!pinDetectPortC @ 105\n"
  "  .word !ISR!pinDetectPortD @ 106\n"
  "  .word !ISR!pinDetectPortE @ 107\n"
  "  .word -1 @ 108\n"
  "  .word -1 @ 109\n"
  "  .word !ISR!softwareInterrupt @ 110\n"
  "  .word -1 @ 111\n"
  "  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 112 to 119\n"
  "  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 120 to 127\n"
  "  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 128 to 135\n"
  "  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 136 to 143\n"
  "  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 144 to 151\n"
  "  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 152 to 159\n"
  "  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 160 to 167\n"
  "  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 168 to 175\n"
  "  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 176 to 183\n"
  "  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 184 to 191\n"
  "  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 192 to 199\n"
  "  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 200 to 207\n"
  "  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 208 to 215\n"
  "  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 216 to 223\n"
  "  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 224 to 231\n"
  "  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 232 to 239\n"
  "  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 240 to 247\n"
  "  .word -1, -1, -1, -1, -1, -1, -1, -1 @ 248 to 255\n"
  "@--- Flash magic values\n"
  "  .word -1\n"
  "  .word -1\n"
  "  .word -1\n"
  "  .word -2\n"
  "\n"
  "  .text\n"
  "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@       A C T I V I T Y    L E D                                                                                       *\n"
  "@                                                                                                                      *\n"
  "@  Activity led is led 13 on Teensy board (bit 5 of port C, led is on when this bit is high)                           *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  GPIOC_PSOR = 0x400FF084\n"
  "  GPIOC_PCOR = 0x400FF088\n"
  "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@  ACTIVITY LED ON        When this macro is used, we can only use R4 and R5 registers.                                *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  .macro ACTIVITY_LED_ON\n"
  "    ldr   r4, =GPIOC_PSOR\n"
  "    movs  r5, # 1 << 5\n"
  "    str   r5, [r4]\n"
  "  .endm\n"
  "  \n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@  ACTIVITY LED OFF        When this macro is used, we can use any register.                                           *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  .macro ACTIVITY_LED_OFF\n"
  "    ldr   r4, =GPIOC_PCOR\n"
  "    movs  r5, # 1 << 5\n"
  "    str   r5, [r4]\n"
  "  .endm\n"
  "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@                 S V C    H A N D L E R    ( D O U B L E    S T A C K    M O D E )                                    *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@          PSP+32 -> |                            |                                                                    *\n"
  "@                    |----------------------------| \\ \n"
  "@          PSP+28 -> | xPSR                       |  |\n"
  "@                    |----------------------------|  |\n"
  "@          PSP+24 -> | PC (after SVC instruction) |  |\n"
  "@                    |----------------------------|  |\n"
  "@          PSP+20 -> | LR                         |  |\n"
  "@                    |----------------------------|  |\n"
  "@          PSP+16 -> | R12                        |  |  Saved by interrupt response\n"
  "@                    |----------------------------|  |\n"
  "@          PSP+12 -> | R3                         |  |\n"
  "@                    |----------------------------|  |\n"
  "@          PSP+8  -> | R2                         |  |\n"
  "@                    |----------------------------|  |\n"
  "@          PSP+4  -> | R1                         |  |\n"
  "@                    |----------------------------|  |\n"
  "@     /--- PSP ----> | R0                         |  |\n"
  "@     |              |----------------------------| /\n"
  "@     |                                                                                                                *\n"
  "@     |                                      *---------------------*\n"
  "@     |                                      | LR return code      | +36 [ 9]\n"
  "@     |                                      *---------------------*\n"
  "@     \\------------------------------------- | R13 (PSP)           | +32 [ 8]\n"
  "@                                            *---------------------*\n"
  "@                                            | R11                 | +28 [ 7]\n"
  "@                                            *---------------------*\n"
  "@                                            | R10                 | +24 [ 6]\n"
  "@                                            *---------------------*\n"
  "@                                            | R9                  | +20 [ 5]\n"
  "@                                            *---------------------*\n"
  "@                                            | R8                  | +16 [ 4]\n"
  "@                                            *---------------------*\n"
  "@                                            | R7                  | +12 [ 3]\n"
  "@                                            *---------------------*\n"
  "@                                            | R6                  | + 8 [ 2]\n"
  "@                                            *---------------------*\n"
  "@                                            | R5                  | + 4 [ 1]\n"
  "@  *--------------------------------*        *---------------------*\n"
  "@  | gRunningTaskControlBlock       +------> | R4                  | + 0 [ 0]\n"
  "@  *--------------------------------*        *---------------------*\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  .global backgroundTaskContext\n"
  "  .lcomm backgroundTaskContext, 4\n"
  "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  .global as_svc_handler\n"
  "  .type as_svc_handler, %function\n"
  "\n"
  "as_svc_handler:\n"
  "@----------------------------------------- Save preserved registers\n"
  "  push  {r4, r5, lr}\n"
  "@----------------------------------------- R5 <- thread SP\n"
  "  mrs   r5, psp\n"
  "@----------------------------------------- R4 <- Address of SVC instruction\n"
  "  ldr   r4, [r5, #24]    @ 24 : 6 stacked registers before saved PC\n"
  "@----------------------------------------- R12 <- bits 0-7 of SVC instruction\n"
  "  ldrb  r12, [r4, #-2]   @ R12 is service call index\n"
  "@----------------------------------------- R4 <- address of dispatcher table\n"
  "  ldr   r4, =__svc_dispatcher_table\n"
  "@----------------------------------------- R12 <- address of routine to call\n"
  "  ldr   r12, [r4, r12, lsl #2]   @ R12 = R4 + (R12 << 2)\n"
  "@----------------------------------------- R4 <- calling task context\n"
  "  ldr   r4, =gRunningTaskControlBlock\n"
  "  ldr   r4, [r4]\n"
  "@----------------------------------------- Call service routine\n"
  "  blx   r12         @ R4:calling task context address, R5:thread PSP\n"
  "@----------------------------------------- Set return code (from R0 to R3) in stacked registers\n"
  "  stmia r5!, {r0, r1, r2, r3}\n"
  "@--- Continues in sequence to .handle.context.switch\n"
  "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@                 H A N D L E    C O N T E X T    S W I T C H    ( D O U B L E    S T A C K    M O D E )               *\n"
  "@                                                                                                                      *\n"
  "@  On entry:                                                                                                           *\n"
  "@    - R4 contains the runnning task save context address,                                                             *\n"
  "@    - R5 can be freely used,                                                                                          *\n"
  "@    - R4, R5 and LR of running task have been pushed on handler task.                                                 *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  ".handle.context.switch:\n"
  "@----------------------------------------- Select task to run\n"
  "  bl    kernel_selectTaskToRun\n"
  "@----------------------------------------- R0 <- calling task context, R1 <- new task context\n"
  "  ldr   r1, =gRunningTaskControlBlock\n"
  "  mov   r0, r4\n"
  "  ldr   r1, [r1]\n"
  "@----------------------------------------- Restore preserved registers\n"
  "  pop   {r4, r5, lr}\n"
  "@----------------------------------------- Task context did change \?\n"
  "  cmp   r0, r1  @ R0:old task context, R1:new task context\n"
  "  it    eq  @ if equal, no context change, perform a return from exception\n"
  "  bxeq  lr\n"
  "@----------------------------------------- Save context of preempted task (if any)\n"
  "  cbz   r0, __perform_restore_context @ if old context is NULL, no context to save\n"
  "@--- Save registers r4 to r11, PSP, LR\n"
  "  mrs     r12, psp\n"
  "  stmia   r0, {r4, r5, r6, r7, r8, r9, r10, r11, r12, lr}\n"
  "@----------------------------------------- Restore context of activated task (if any)\n"
  "__perform_restore_context:\n"
  "  cbz    r1, __no_context_to_restore\n"
  "  ldmia  r1, {r4, r5, r6, r7, r8, r9, r10, r11, r12, lr}\n"
  "  msr    psp, r12\n"
  "__direct_return_for_null_service: \n"
  "  bx     lr\n"
  "@----------------------------------------- No context to restore\n"
  "__no_context_to_restore:\n"
  "@--- Restore PSP of background task\n"
  "  ldr  r0, =backgroundTaskContext\n"
  "  ldr  r0, [r0]\n"
  "  msr  psp, r0\n"
  "@--- Return from exception\n"
  "  ldr  r1, =0xFFFFFFFD\n"
  "  bx   r1\n"
  "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@                 R E S E T    H A N D L E R    ( D O U B L E    S T A C K    M O D E )                                *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  ".lcomm backgroundTaskStack, 32\n"
  "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  .global as_reset_handler\n"
  "  .type as_reset_handler, %function\n"
  "\n"
  "as_reset_handler:\n"
  "@--- Init micro controller\n"
  "  bl configuration.on.boot\n"
  "@--- Set PSP\n"
  "  ldr r0, =backgroundTaskStack + 32\n"
  "  msr psp, r0\n"
  "@--- Set CONTROL register\n"
  "  movs r2, #3\n"
  "  msr  control, r2\n"
  "  isb\n"
  "@--- Set background task context\n"
  "  subs r0, #32\n"
  "  ldr  r1, =backgroundTaskContext\n"
  "  str  r0, [r1]\n"
  "@--- Start real-time kernel\n"
  "  svc  #0\n"
  "@--- Background task : infinite loop\n"
  "infiniteLoop:\n"
  "  ACTIVITY_LED_OFF\n"
  "  wfi\n"
  "  b  infiniteLoop\n"
  "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@                 U D F    H A N D L E R    ( D O U B L E    S T A C K    M O D E )                                    *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@                    |                            |                                                                    *\n"
  "@          PSP+32 -> |----------------------------| \\ \n"
  "@                    | xPSR                       |  |\n"
  "@          PSP+28 -> |----------------------------|  |\n"
  "@                    | PC (UDF instruction)       |  |\n"
  "@          PSP+24 -> |----------------------------|  |\n"
  "@                    | LR                         |  |\n"
  "@          PSP+20 -> |----------------------------|  |\n"
  "@                    | R12                        |  |  Saved by interrupt response\n"
  "@          PSP+16 -> |----------------------------|  |\n"
  "@                    | R3                         |  |\n"
  "@          PSP+12 -> |----------------------------|  |\n"
  "@                    | R2                         |  |\n"
  "@          PSP+8  -> |----------------------------|  |\n"
  "@                    | R1                         |  |\n"
  "@          PSP+4  -> |----------------------------|  |\n"
  "@                    | R0                         |  |\n"
  "@          PSP    -> |----------------------------| /\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  .global as_section_handler\n"
  "  .type as_section_handler, %function\n"
  "\n"
  "as_section_handler:\n"
  "@----------------------------------------- Save preserved registers\n"
  "  push  {r5, lr}\n"
  "@----------------------------------------- R5 <- thread SP\n"
  "  mrs   r5, psp           @ r5 <- thread SP\n"
  "@----------------------------------------- LR <- Address of UDF instruction\n"
  "  ldr   lr, [r5, #24]     @ 24 : 6 stacked registers before saved PC\n"
  "@----------------------------------------- Set return address to instruction following UDF\n"
  "  adds  lr, #2\n"
  "  str   lr, [r5, #24]\n"
  "@----------------------------------------- R12 <- address of dispatcher\n"
  "  ldr   r12, =__udf_dispatcher_table\n"
  "@----------------------------------------- LR <- bits 0-7 of UDF instruction\n"
  "  ldrb  lr, [lr, #-2]            @ LR is service call index\n"
  "@----------------------------------------- r12 <- address of routine to call\n"
  "  ldr   r12, [r12, lr, lsl #2]   @ R12 += LR << 2\n"
  "@----------------------------------------- Call service routine\n"
  "  blx   r12                      @ R5: thread PSP\n"
  "@----------------------------------------- Set return code (from R0 to R3) in stacked registers\n"
  "  stmia r5!, {r0, r1, r2, r3}    @ R5 is thread SP\n"
  "@----------------------------------------- Restore preserved registers, return from interrupt\n"
  "  pop   {r5, pc}\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_51_targetTemplates (
  "target.s",
  "s",
  true, // Text file
  18787, // Text length
  gWrapperFileContent_51_targetTemplates
) ;

//--- File 'teensy-3-1-tp/undefined-interrupt.s'

const char * gWrapperFileContent_52_targetTemplates = "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@  Undefined interrupt !ISR!\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "\t!ISR! = -1\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_52_targetTemplates (
  "undefined-interrupt.s",
  "s",
  true, // Text file
  285, // Text length
  gWrapperFileContent_52_targetTemplates
) ;

//--- File 'teensy-3-1-tp/xtr-interrupt-handler.s'

const char * gWrapperFileContent_53_targetTemplates = "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@                 S Y S T I C K    H A N D L E R    ( D O U B L E    S T A C K    M O D E )                            *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  .global !ISR!\n"
  "  .type !ISR!, %function\n"
  "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  .global !HANDLER!\n"
  "  .type !HANDLER!, %function\n"
  "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "!ISR!:\n"
  "\t.fnstart\n"
  "@----------------------------------------- Save preserved registers\n"
  "\t.save\t{r4, r5, lr}\n"
  "  push  {r4, r5, lr}\n"
  "@----------------------------------------- Activity led On (macro that uses only R4 and R5)\n"
  "  ACTIVITY_LED_ON\n"
  "@----------------------------------------- R4 <- running task context\n"
  "  ldr   r4, =gRunningTaskControlBlock\n"
  "  ldr   r4, [r4]\n"
  "@----------------------------------------- Call Interrupt handler\n"
  "  bl    !HANDLER!\n"
  "@----------------------------------------- Test backgroundTaskContext to check if init passed\n"
  "  ldr   r5, =backgroundTaskContext\n"
  "  ldr   r5, [r5]\n"
  "  cmp   r5, #0\n"
  "  bne   .handle.context.switch\n"
  "@----------------------------------------- Still in init : return\n"
  "  pop   {r4, r5, pc}\n"
  "\t.cantunwind\n"
  "\t.fnend\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_53_targetTemplates (
  "xtr-interrupt-handler.s",
  "s",
  true, // Text file
  1689, // Text length
  gWrapperFileContent_53_targetTemplates
) ;

//--- All files of 'teensy-3-1-tp' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetTemplates_3 [20] = {
  & gWrapperFile_35_targetTemplates,
  & gWrapperFile_36_targetTemplates,
  & gWrapperFile_37_targetTemplates,
  & gWrapperFile_38_targetTemplates,
  & gWrapperFile_39_targetTemplates,
  & gWrapperFile_40_targetTemplates,
  & gWrapperFile_41_targetTemplates,
  & gWrapperFile_42_targetTemplates,
  & gWrapperFile_43_targetTemplates,
  & gWrapperFile_44_targetTemplates,
  & gWrapperFile_45_targetTemplates,
  & gWrapperFile_46_targetTemplates,
  & gWrapperFile_47_targetTemplates,
  & gWrapperFile_48_targetTemplates,
  & gWrapperFile_49_targetTemplates,
  & gWrapperFile_50_targetTemplates,
  & gWrapperFile_51_targetTemplates,
  & gWrapperFile_52_targetTemplates,
  & gWrapperFile_53_targetTemplates,
  NULL
} ;

//--- All sub-directories of 'teensy-3-1-tp' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetTemplates_3 [1] = {
  NULL
} ;

//--- Directory 'teensy-3-1-tp'

const cDirectoryWrapper gWrapperDirectory_3_targetTemplates (
  "teensy-3-1-tp",
  19,
  gWrapperAllFiles_targetTemplates_3,
  0,
  gWrapperAllDirectories_targetTemplates_3
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetTemplates_0 [7] = {
  & gWrapperFile_0_targetTemplates,
  & gWrapperFile_1_targetTemplates,
  & gWrapperFile_2_targetTemplates,
  & gWrapperFile_3_targetTemplates,
  & gWrapperFile_4_targetTemplates,
  & gWrapperFile_5_targetTemplates,
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetTemplates_0 [4] = {
  & gWrapperDirectory_1_targetTemplates,
  & gWrapperDirectory_2_targetTemplates,
  & gWrapperDirectory_3_targetTemplates,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_targetTemplates (
  "",
  6,
  gWrapperAllFiles_targetTemplates_0,
  3,
  gWrapperAllDirectories_targetTemplates_0
) ;


