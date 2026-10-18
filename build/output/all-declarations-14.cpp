#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-14.h"

//--------------------------------------------------------------------------------------------------
//
//Function 'registerGroupAddressArrayLLVMname'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_registerGroupAddressArrayLLVMname (const GGS_string & constinArgument_inGroupName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("@register.group.array.").add_operation (constinArgument_inGroupName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas3", 353)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas3", 353)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_registerGroupAddressArrayLLVMname [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_registerGroupAddressArrayLLVMname (Compiler * inCompiler,
                                                                               const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                               const GGS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_registerGroupAddressArrayLLVMname (operand0,
                                                     inCompiler
                                                     COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_registerGroupAddressArrayLLVMname ("registerGroupAddressArrayLLVMname",
                                                                                   functionWithGenericHeader_registerGroupAddressArrayLLVMname,
                                                                                   & kTypeDescriptor_GALGAS_string,
                                                                                   1,
                                                                                   functionArgs_registerGroupAddressArrayLLVMname) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'compileTimeIntegerType'
//
//--------------------------------------------------------------------------------------------------

static GGS_omnibusType onceFunction_compileTimeIntegerType (Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType result_result ; // Returned variable
  result_result = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("types.galgas3", 130)), GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("types.galgas3", 131)), function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas3", 132)), GGS_typeKind::class_func_compileTimeInteger (SOURCE_FILE ("types.galgas3", 133)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_compileTimeIntegerType = false ;
static GGS_omnibusType gOnceFunctionResult_compileTimeIntegerType ;

//--------------------------------------------------------------------------------------------------

GGS_omnibusType function_compileTimeIntegerType (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_compileTimeIntegerType) {
    gOnceFunctionResult_compileTimeIntegerType = onceFunction_compileTimeIntegerType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_compileTimeIntegerType = true ;
  }
  return gOnceFunctionResult_compileTimeIntegerType ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_compileTimeIntegerType (void) {
  gOnceFunctionResult_compileTimeIntegerType.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_compileTimeIntegerType (nullptr,
                                                                  releaseOnceFunctionResult_compileTimeIntegerType) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_compileTimeIntegerType [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_compileTimeIntegerType (Compiler * inCompiler,
                                                                    const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_compileTimeIntegerType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_compileTimeIntegerType ("compileTimeIntegerType",
                                                                        functionWithGenericHeader_compileTimeIntegerType,
                                                                        & kTypeDescriptor_GALGAS_omnibusType,
                                                                        0,
                                                                        functionArgs_compileTimeIntegerType) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'compileTimeBoolType'
//
//--------------------------------------------------------------------------------------------------

static GGS_omnibusType onceFunction_compileTimeBoolType (Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType result_result ; // Returned variable
  result_result = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("types.galgas3", 142)), GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("types.galgas3", 143)), function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas3", 144)), GGS_typeKind::class_func_compileTimeBool (SOURCE_FILE ("types.galgas3", 145)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_compileTimeBoolType = false ;
static GGS_omnibusType gOnceFunctionResult_compileTimeBoolType ;

//--------------------------------------------------------------------------------------------------

GGS_omnibusType function_compileTimeBoolType (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_compileTimeBoolType) {
    gOnceFunctionResult_compileTimeBoolType = onceFunction_compileTimeBoolType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_compileTimeBoolType = true ;
  }
  return gOnceFunctionResult_compileTimeBoolType ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_compileTimeBoolType (void) {
  gOnceFunctionResult_compileTimeBoolType.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_compileTimeBoolType (nullptr,
                                                               releaseOnceFunctionResult_compileTimeBoolType) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_compileTimeBoolType [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_compileTimeBoolType (Compiler * inCompiler,
                                                                 const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                                 const GGS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_compileTimeBoolType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_compileTimeBoolType ("compileTimeBoolType",
                                                                     functionWithGenericHeader_compileTimeBoolType,
                                                                     & kTypeDescriptor_GALGAS_omnibusType,
                                                                     0,
                                                                     functionArgs_compileTimeBoolType) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'boolType'
//
//--------------------------------------------------------------------------------------------------

static GGS_omnibusType onceFunction_boolType (Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType result_result ; // Returned variable
  result_result = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("types.galgas3", 154)), GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("types.galgas3", 155)).operator_or (GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("types.galgas3", 155)) COMMA_SOURCE_FILE ("types.galgas3", 155)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas3", 156)), GGS_typeKind::class_func_boolean (SOURCE_FILE ("types.galgas3", 157)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas3", 158)), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_boolType = false ;
static GGS_omnibusType gOnceFunctionResult_boolType ;

//--------------------------------------------------------------------------------------------------

GGS_omnibusType function_boolType (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_boolType) {
    gOnceFunctionResult_boolType = onceFunction_boolType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_boolType = true ;
  }
  return gOnceFunctionResult_boolType ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_boolType (void) {
  gOnceFunctionResult_boolType.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_boolType (nullptr,
                                                    releaseOnceFunctionResult_boolType) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_boolType [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_boolType (Compiler * inCompiler,
                                                      const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                      const GGS_location & /* inErrorLocation */
                                                      COMMA_LOCATION_ARGS) {
  return function_boolType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_boolType ("boolType",
                                                          functionWithGenericHeader_boolType,
                                                          & kTypeDescriptor_GALGAS_omnibusType,
                                                          0,
                                                          functionArgs_boolType) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'literalStringType'
//
//--------------------------------------------------------------------------------------------------

static GGS_omnibusType onceFunction_literalStringType (Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType result_result ; // Returned variable
  result_result = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_literalString (SOURCE_FILE ("types.galgas3", 166)), GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("types.galgas3", 167)).operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("types.galgas3", 167)) COMMA_SOURCE_FILE ("types.galgas3", 167)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas3", 168)), GGS_typeKind::class_func_literalString (SOURCE_FILE ("types.galgas3", 169)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas3", 170)), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_literalStringType = false ;
static GGS_omnibusType gOnceFunctionResult_literalStringType ;

//--------------------------------------------------------------------------------------------------

GGS_omnibusType function_literalStringType (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_literalStringType) {
    gOnceFunctionResult_literalStringType = onceFunction_literalStringType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_literalStringType = true ;
  }
  return gOnceFunctionResult_literalStringType ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_literalStringType (void) {
  gOnceFunctionResult_literalStringType.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_literalStringType (nullptr,
                                                             releaseOnceFunctionResult_literalStringType) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_literalStringType [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_literalStringType (Compiler * inCompiler,
                                                               const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  return function_literalStringType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_literalStringType ("literalStringType",
                                                                   functionWithGenericHeader_literalStringType,
                                                                   & kTypeDescriptor_GALGAS_omnibusType,
                                                                   0,
                                                                   functionArgs_literalStringType) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'voidType'
//
//--------------------------------------------------------------------------------------------------

static GGS_omnibusType onceFunction_voidType (Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType result_result ; // Returned variable
  result_result = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("types.galgas3", 178)), GGS_omnibusTypeAttributes::init (inCompiler COMMA_HERE), GGS_string::makeEmptyString (), GGS_typeKind::class_func_void (SOURCE_FILE ("types.galgas3", 181)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_voidType = false ;
static GGS_omnibusType gOnceFunctionResult_voidType ;

//--------------------------------------------------------------------------------------------------

GGS_omnibusType function_voidType (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_voidType) {
    gOnceFunctionResult_voidType = onceFunction_voidType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_voidType = true ;
  }
  return gOnceFunctionResult_voidType ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_voidType (void) {
  gOnceFunctionResult_voidType.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_voidType (nullptr,
                                                    releaseOnceFunctionResult_voidType) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_voidType [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_voidType (Compiler * inCompiler,
                                                      const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                      const GGS_location & /* inErrorLocation */
                                                      COMMA_LOCATION_ARGS) {
  return function_voidType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_voidType ("voidType",
                                                          functionWithGenericHeader_voidType,
                                                          & kTypeDescriptor_GALGAS_omnibusType,
                                                          0,
                                                          functionArgs_voidType) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildTypeMapHTMLFile??????sourceFile'
//
//--------------------------------------------------------------------------------------------------

void routine_buildTypeMapHTMLFile_3F__3F__3F__3F__3F__3F_sourceFile (const GGS_unifiedTypeMap constinArgument_inTypeMap,
                                                                     const GGS_routineMapForContext constinArgument_inRoutineMap,
                                                                     const GGS_infixOperatorMap constinArgument_inTerminusInfixOperatorMap,
                                                                     const GGS_prefixOperatorMap constinArgument_inTerminusPrefixOperatorMap,
                                                                     const GGS_assignmentOperatorMap constinArgument_inAssignmentOperatorMap,
                                                                     const GGS_lstring constinArgument_inSourceFile,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_typeDumpFilePath_15444 = constinArgument_inSourceFile.readProperty_string ().add_operation (GGS_string (".types.html"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 387)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_omnibus_5F_options_emitTypeMap.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("types.galgas3", 389)) ;
      GGS_stringset var_firstLetterSet_15571 = temp_1 ;
      UpEnumerator_unifiedTypeMap enumerator_15606 (constinArgument_inTypeMap) ;
      while (enumerator_15606.hasCurrentObject ()) {
        var_firstLetterSet_15571.plusPlusAssignOperation (enumerator_15606.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 391)).getter_string (SOURCE_FILE ("types.galgas3", 391))  COMMA_SOURCE_FILE ("types.galgas3", 391)) ;
        enumerator_15606.gotoNextObject () ;
      }
      GGS_string var_tableOfTypeString_15714 = GGS_string::makeEmptyString () ;
      GGS_char var_currentFirstLetter_15751 = GGS_char (utf32 (32)) ;
      UpEnumerator_unifiedTypeMap enumerator_15795 (constinArgument_inTypeMap) ;
      while (enumerator_15795.hasCurrentObject ()) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::notEqual, var_currentFirstLetter_15751.objectCompare (enumerator_15795.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 396)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            var_currentFirstLetter_15751 = enumerator_15795.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 397)) ;
            var_tableOfTypeString_15714.plusAssignOperation(GGS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_15751.getter_uint (SOURCE_FILE ("types.galgas3", 398)).getter_string (SOURCE_FILE ("types.galgas3", 398)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 398)).add_operation (GGS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 398)).add_operation (var_currentFirstLetter_15751.getter_string (SOURCE_FILE ("types.galgas3", 398)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 398)).add_operation (GGS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 398)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 398)) ;
          }
        }
        var_tableOfTypeString_15714.plusAssignOperation(function_linkForHTMLTypeMap (enumerator_15795.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 400)).add_operation (GGS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 400)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 400)) ;
        enumerator_15795.gotoNextObject () ;
      }
      GGS_string var_typeDumpString_16187 = GGS_string (filewrapperTemplate_typeDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("types.galgas3", 403)), constinArgument_inTypeMap, var_firstLetterSet_15571, var_tableOfTypeString_15714, constinArgument_inRoutineMap, constinArgument_inTerminusInfixOperatorMap, constinArgument_inTerminusPrefixOperatorMap, constinArgument_inAssignmentOperatorMap COMMA_SOURCE_FILE ("types.galgas3", 402))) ;
      GGS_bool joker_16555 ; // Joker input parameter
      var_typeDumpString_16187.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_15444, joker_16555, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 412)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    GGS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_15444, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 414)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'typeDumpGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_typeDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_0,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeDumpGenerationTemplate dump'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeDumpGenerationTemplate_dump (Compiler * inCompiler,
                                                                const GGS_string & in_PROJECT_5F_NAME,
                                                                const GGS_unifiedTypeMap & in_GLOBAL_5F_TYPE_5F_MAP,
                                                                const GGS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                const GGS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING,
                                                                const GGS_routineMapForContext & in_ALL_5F_ROUTINE_5F_MAP,
                                                                const GGS_infixOperatorMap & in_INFIX_5F_OPERATOR_5F_MAP,
                                                                const GGS_prefixOperatorMap & in_PREFIX_5F_OPERATOR_5F_MAP,
                                                                const GGS_assignmentOperatorMap & in_ASSIGNMENT_5F_OPERATOR_5F_MAP
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n<html>\n<head>\n<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n<title>Global constants of ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("</title>\n<style type=\"text/css\">body {\n  font-family: Georgia, sans-serif ;\n  font-size: small ;\n}\n\nh1 {\n  text-align: center ;\n}\n\n.selecteur {\n  color:green ;\n}\n\na.header_link {\n  background-color: #FFFFCC ;\n}\n\na:visited, a:link, a:active{\n  color: blue ;\n  text-decoration: underline ;\n}\n\na:hover {\n  color:green ;\n  background-color: #FFFF00 ;\n  text-decoration: none ;\n}\n\ntable.result {\n  border: 1px solid #666666 ;\n}\n\ntd.result_title {\n  font-weight: bold ;\n  text-align: center ;\n  background-color: yellow ;\n}\n\ntr.result_line {\n  background-color: #EEEEEE ;\n}\n\n</style>\n</head>\n<body>\n<div>\n<h1>Types defined by ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("</h1>\n<p>This document lists all ") ;
  result.appendString (in_GLOBAL_5F_TYPE_5F_MAP.getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 53)).getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 53)).stringValue ()) ;
  result.appendString (" defined types, sorted by name.</p>\n<p>") ;
  GGS_uint index_989_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    UpEnumerator_stringset enumerator_989 (in_FIRST_5F_LETTER_5F_SET) ;
    while (enumerator_989.hasCurrentObject ()) {
      result.appendString ("<a class=\"header_link\" href=\"#") ;
      result.appendString (enumerator_989.current_key (HERE).getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).getter_uint (SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).stringValue ()) ;
      result.appendString ("\">") ;
      result.appendString (enumerator_989.current_key (HERE).stringValue ()) ;
      result.appendString ("</a>") ;
      enumerator_989.gotoNextObject () ;
      if (enumerator_989.hasCurrentObject ()) {
        result.appendString (" - ") ;
      }
      index_989_.increment () ;
    }
  }
  result.appendString ("</p>\n<p>") ;
  result.appendString (in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue ()) ;
  result.appendString ("\n</p>\n") ;
  GGS_uint index_1174_ (0) ;
  if (in_GLOBAL_5F_TYPE_5F_MAP.isValid ()) {
    UpEnumerator_unifiedTypeMap enumerator_1174 (in_GLOBAL_5F_TYPE_5F_MAP) ;
    while (enumerator_1174.hasCurrentObject ()) {
      result.appendString ("\n<h2>\n  <a name=\"") ;
      result.appendString (enumerator_1174.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\">") ;
      result.appendString (enumerator_1174.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("</a>\n</h2>\n<p>\nKind: ") ;
      result.appendString (callExtensionGetter_descriptionForHTMLFile ((const cPtr_omnibusType *) callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1174.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 68)).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 68)).stringValue ()) ;
      result.appendString ("<br>\nDescription: ") ;
      result.appendString (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1174.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 69)).readProperty_omnibusTypeDescriptionName ().stringValue ()) ;
      result.appendString ("<br>\nLLVM Base Name: ") ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1174.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 70)).readProperty_llvmBaseTypeName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString (GGS_string ("<i>none, compile time type</i>").stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1174.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 70)).readProperty_llvmBaseTypeName ().stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("<br>\nLLVM Name: ") ;
      const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1174.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 71)).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 71)).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString (GGS_string ("<i>none, compile time type</i>").stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1174.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 71)).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 71)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("\n</p>\n") ;
      enumerator_1174.gotoNextObject () ;
      index_1174_.increment () ;
    }
  }
  result.appendString ("\n<p>\n<h2>\n  Routines\n</h2>\n  <table class=\"result\">\n    <tr>\n      <td class=\"result_title\">Standalone routine Name</td>\n      <td class=\"result_title\">Visibility</td>\n      <td class=\"result_title\">Typed signature</td>\n      <td class=\"result_title\">Routine LLVM Name, by mode</td>\n    </tr>\n  ") ;
  GGS_uint index_2119_ (0) ;
  if (in_ALL_5F_ROUTINE_5F_MAP.isValid ()) {
    UpEnumerator_routineMapForContext enumerator_2119 (in_ALL_5F_ROUTINE_5F_MAP) ;
    while (enumerator_2119.hasCurrentObject ()) {
      result.appendString ("\n    <tr class=\"result_line\">\n      <td>") ;
      result.appendString (enumerator_2119.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("</td>\n      <td>") ;
      const GalgasBool test_2 = enumerator_2119.current_mIsPublic (HERE).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString (GGS_string ("public").stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString (GGS_string ("private").stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("</td>\n      <td>") ;
      result.appendString (extensionGetter_typedString (enumerator_2119.current_mSignature (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 89)).stringValue ()) ;
      const GalgasBool test_3 = enumerator_2119.current_mReturnTypeProxy (HERE).getter_isNull (SOURCE_FILE ("typeDump.html.galgasTemplate", 89)).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString (" -> ") ;
        result.appendString (extensionGetter_key (enumerator_2119.current_mReturnTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 89)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("</td>\n      <td>") ;
      GGS_uint index_2478_ (0) ;
      if (enumerator_2119.current_mModeDictionary (HERE).isValid ()) {
        UpEnumerator_routineLLVMNameDict enumerator_2478 (enumerator_2119.current_mModeDictionary (HERE)) ;
        while (enumerator_2478.hasCurrentObject ()) {
          result.appendString (extensionGetter_string (enumerator_2478.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 90)).stringValue ()) ;
          result.appendString (" : ") ;
          result.appendString (enumerator_2478.current_llvmName (HERE).stringValue ()) ;
          enumerator_2478.gotoNextObject () ;
          if (enumerator_2478.hasCurrentObject ()) {
            result.appendString ("<br>") ;
          }
          index_2478_.increment () ;
        }
      }
      result.appendString ("</td>\n    </tr>\n  ") ;
      enumerator_2119.gotoNextObject () ;
      index_2119_.increment () ;
    }
  }
  result.appendString ("\n  </table>\n</p>\n<p>\n<h2>\n  Infix Operators\n</h2>\n  <table class=\"result\">\n    <tr>\n      <td class=\"result_title\">Infix operator</td>\n      <td class=\"result_title\">Result Type</td>\n    </tr>\n  ") ;
  GGS_uint index_2836_ (0) ;
  if (in_INFIX_5F_OPERATOR_5F_MAP.isValid ()) {
    UpEnumerator_infixOperatorMap enumerator_2836 (in_INFIX_5F_OPERATOR_5F_MAP) ;
    while (enumerator_2836.hasCurrentObject ()) {
      result.appendString ("\n    <tr class=\"result_line\">\n      <td>") ;
      result.appendString (enumerator_2836.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("</td>\n      <td>") ;
      result.appendString (enumerator_2836.current_mResultType (HERE).readProperty_omnibusTypeDescriptionName ().stringValue ()) ;
      result.appendString ("</td>\n    </tr>\n  ") ;
      enumerator_2836.gotoNextObject () ;
      index_2836_.increment () ;
    }
  }
  result.appendString ("\n  </table>\n</p>\n<p>\n<h2>\n  Prefix Operators\n</h2>\n  <table class=\"result\">\n    <tr>\n      <td class=\"result_title\">Prefix operator</td>\n      <td class=\"result_title\">Result Type</td>\n    </tr>\n  ") ;
  GGS_uint index_3259_ (0) ;
  if (in_PREFIX_5F_OPERATOR_5F_MAP.isValid ()) {
    UpEnumerator_prefixOperatorMap enumerator_3259 (in_PREFIX_5F_OPERATOR_5F_MAP) ;
    while (enumerator_3259.hasCurrentObject ()) {
      result.appendString ("\n    <tr class=\"result_line\">\n      <td>") ;
      result.appendString (enumerator_3259.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("</td>\n      <td>") ;
      result.appendString (enumerator_3259.current_mResultType (HERE).readProperty_omnibusTypeDescriptionName ().stringValue ()) ;
      result.appendString ("</td>\n    </tr>\n  ") ;
      enumerator_3259.gotoNextObject () ;
      index_3259_.increment () ;
    }
  }
  result.appendString ("\n  </table>\n</p>\n<h2>\n  Assignment Operators\n</h2>\n  <table class=\"result\">\n    <tr>\n      <td class=\"result_title\">Operator</td>\n    </tr>\n  ") ;
  GGS_uint index_3604_ (0) ;
  if (in_ASSIGNMENT_5F_OPERATOR_5F_MAP.isValid ()) {
    UpEnumerator_assignmentOperatorMap enumerator_3604 (in_ASSIGNMENT_5F_OPERATOR_5F_MAP) ;
    while (enumerator_3604.hasCurrentObject ()) {
      result.appendString ("\n    <tr class=\"result_line\">\n      <td>") ;
      result.appendString (enumerator_3604.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("</td>\n    </tr>\n  ") ;
      enumerator_3604.gotoNextObject () ;
      index_3604_.increment () ;
    }
  }
  result.appendString ("\n  </table>\n</p>\n</div>\n</body>\n</html>\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'linkForHTMLTypeMap'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_linkForHTMLTypeMap (const GGS_string & constinArgument_inTypeName,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 437)).add_operation (GGS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 437)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 437)).add_operation (GGS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 437)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_linkForHTMLTypeMap [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_linkForHTMLTypeMap (Compiler * inCompiler,
                                                                const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                const GGS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_linkForHTMLTypeMap (operand0,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_linkForHTMLTypeMap ("linkForHTMLTypeMap",
                                                                    functionWithGenericHeader_linkForHTMLTypeMap,
                                                                    & kTypeDescriptor_GALGAS_string,
                                                                    1,
                                                                    functionArgs_linkForHTMLTypeMap) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'declareLLVMTypes?&'
//
//--------------------------------------------------------------------------------------------------

void routine_declareLLVMTypes_3F__26_ (const GGS_userLLVMTypeDefinitionListIR constinArgument_inUserLLVMTypeDefinitionListIR,
                                       GGS_string & ioArgument_ioLLVMcode,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("User Defined Types"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 449)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 449)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("%ptrtype = type i8* ; Generic pointer type for dynamic objects\n"), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 450)) ;
  UpEnumerator_userLLVMTypeDefinitionListIR enumerator_18035 (constinArgument_inUserLLVMTypeDefinitionListIR) ;
  while (enumerator_18035.hasCurrentObject ()) {
    callExtensionMethod_generateLLVMType ((cPtr_userLLVMTypeDefinitionIR *) enumerator_18035.current_mType (HERE).ptr (), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 452)) ;
    enumerator_18035.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 454)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_externRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                      const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                      GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 175)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_externRoutineIR temp_1 = this ;
    test_0 = temp_1.readProperty_mReturnType ().getter_isNull (SOURCE_FILE ("declaration-extern-proc.galgas3", 176)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 177)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_externRoutineIR temp_2 = this ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_2.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 179)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 179)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 179)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 179)) ;
  }
  const GGS_externRoutineIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-extern-proc.galgas3", 181)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 181)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 181)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 181)) ;
  const GGS_externRoutineIR temp_4 = this ;
  UpEnumerator_routineFormalArgumentListIR enumerator_6355 (temp_4.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_6355.hasCurrentObject ()) {
    switch (enumerator_6355.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_6355.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 186)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 186)).add_operation (enumerator_6355.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 186)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 186)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_6355.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 188)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 188)).add_operation (function_llvmNameForLocalVariable (enumerator_6355.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 188)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 188)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 188)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_6355.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 190)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 190)).add_operation (function_llvmNameForLocalVariable (enumerator_6355.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 190)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 190)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 190)) ;
      }
      break ;
    }
    enumerator_6355.gotoNextObject () ;
    if (enumerator_6355.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 193)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 195)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 195)).add_operation (GGS_string ("; declared by extern Omnibus function declaration\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 195)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 195)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@copyFromReferencesIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_copyFromReferencesIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                            const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                            GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_copyFromReferencesIR temp_0 = this ;
  const GGS_copyFromReferencesIR temp_1 = this ;
  GGS_string var_assignmentFunctionLLVMName_1997 = function_assignmentOperatorFuncName (temp_0.readProperty_mTarget ().readProperty_type (), temp_1.readProperty_mTarget ().readProperty_type (), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas3", 50)) ;
  const GGS_copyFromReferencesIR temp_2 = this ;
  GGS_string var_llvmTypeName_2099 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mTarget ().readProperty_type ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas3", 51)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_assignmentFunctionLLVMName_1997.getter_assemblerRepresentation (SOURCE_FILE ("intermediate-copy-from-references.galgas3", 52)), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas3", 52)), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas3", 52)) ;
  const GGS_copyFromReferencesIR temp_3 = this ;
  const GGS_copyFromReferencesIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (var_llvmTypeName_2099, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas3", 53)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas3", 53)).add_operation (temp_3.readProperty_mTarget ().readProperty_llvmName (), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas3", 53)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas3", 53)).add_operation (var_llvmTypeName_2099, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas3", 53)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas3", 53)).add_operation (temp_4.readProperty_mSourceLLVMName (), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas3", 53)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas3", 53)), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas3", 53)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@copyFromReferencesIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_copyFromReferencesIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_copyFromReferencesIR temp_0 = this ;
  const GGS_copyFromReferencesIR temp_1 = this ;
  GGS_string var_assignmentFunctionLLVMName_2609 = function_assignmentOperatorFuncName (temp_0.readProperty_mTarget ().readProperty_type (), temp_1.readProperty_mTarget ().readProperty_type (), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas3", 62)) ;
  ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (var_assignmentFunctionLLVMName_2609  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas3", 63)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@integerDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_integerDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  result_outLocation = GGS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas3", 13)) ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@integerDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_integerDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_integerDeclarationAST temp_0 = this ;
  GGS_lstring var_nodeName_1100 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 29)).getter_nowhere (SOURCE_FILE ("type-integer.galgas3", 29)) ;
  {
  const GGS_integerDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_1100, temp_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 30)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1100, function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 31)).getter_nowhere (SOURCE_FILE ("type-integer.galgas3", 31)) COMMA_SOURCE_FILE ("type-integer.galgas3", 31)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1100, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 32)).getter_nowhere (SOURCE_FILE ("type-integer.galgas3", 32)) COMMA_SOURCE_FILE ("type-integer.galgas3", 32)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1100, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 33)).getter_nowhere (SOURCE_FILE ("type-integer.galgas3", 33)) COMMA_SOURCE_FILE ("type-integer.galgas3", 33)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@integerDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_integerDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_integerDeclarationAST temp_0 = this ;
  result_outRepresentation = GGS_string ("integer ").add_operation (callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 39)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 39)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'minValueForInteger'
//
//--------------------------------------------------------------------------------------------------

GGS_bigint function_minValueForInteger (const GGS_bool & constinArgument_inIsUnsigned,
                                        const GGS_uint & constinArgument_inBitCount,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inIsUnsigned.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 48)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 50)).left_shift_operation (constinArgument_inBitCount.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 50)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 50)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 50)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_minValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_minValueForInteger (Compiler * inCompiler,
                                                                const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                const GGS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  const GGS_bool operand0 = GGS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_uint operand1 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  return function_minValueForInteger (operand0,
                                      operand1,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_minValueForInteger ("minValueForInteger",
                                                                    functionWithGenericHeader_minValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_minValueForInteger) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'maxValueForInteger'
//
//--------------------------------------------------------------------------------------------------

GGS_bigint function_maxValueForInteger (const GGS_bool & constinArgument_inIsUnsigned,
                                        const GGS_uint & constinArgument_inBitCount,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inIsUnsigned.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 58)).left_shift_operation (constinArgument_inBitCount, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 58)).substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 58)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 58)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 60)).left_shift_operation (constinArgument_inBitCount.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 60)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 60)).substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 60)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 60)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_maxValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_maxValueForInteger (Compiler * inCompiler,
                                                                const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                const GGS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  const GGS_bool operand0 = GGS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_uint operand1 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  return function_maxValueForInteger (operand0,
                                      operand1,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_maxValueForInteger ("maxValueForInteger",
                                                                    functionWithGenericHeader_maxValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_maxValueForInteger) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@integerDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_integerDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                        GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                        GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                        GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                        GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                        GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                        GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                        GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_integerDeclarationAST temp_0 = this ;
  GGS_lstring var_integerTypeName_3180 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 78)).getter_nowhere (SOURCE_FILE ("type-integer.galgas3", 78)) ;
  GGS_unifiedTypeMapEntry var_selfTypeProxy_3276 ;
  {
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, var_integerTypeName_3180, var_selfTypeProxy_3276, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 79)) ;
  }
  const GGS_integerDeclarationAST temp_1 = this ;
  const GGS_integerDeclarationAST temp_2 = this ;
  GGS_bigint var_min_3355 = function_minValueForInteger (temp_1.readProperty_mIsSigned ().operator_not (SOURCE_FILE ("type-integer.galgas3", 81)), temp_2.readProperty_mSize (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 81)) ;
  const GGS_integerDeclarationAST temp_3 = this ;
  const GGS_integerDeclarationAST temp_4 = this ;
  GGS_bigint var_max_3420 = function_maxValueForInteger (temp_3.readProperty_mIsSigned ().operator_not (SOURCE_FILE ("type-integer.galgas3", 82)), temp_4.readProperty_mSize (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 82)) ;
  const GGS_integerDeclarationAST temp_5 = this ;
  GGS_string var_llvmTypeName_3540 = GGS_string ("i").add_operation (temp_5.readProperty_mSize ().getter_string (SOURCE_FILE ("type-integer.galgas3", 84)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 84)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_integerDeclarationAST temp_7 = this ;
    test_6 = GGS_bool (ComparisonKind::equal, temp_7.readProperty_mSize ().modulo_operation (GGS_uint (uint32_t (16U)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 86)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GGS_lstring var_routineLLVMName_3945 ;
      {
      extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3180, var_integerTypeName_3180.readProperty_string (), GGS_string ("byteSwapped").getter_nowhere (SOURCE_FILE ("type-integer.galgas3", 90)), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas3", 91)), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas3", 92)), var_selfTypeProxy_3276, var_routineLLVMName_3945, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 87)) ;
      }
      ioArgument_ioRoutineListIR.addAssignOperation (GGS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_3945, GGS_bool (false), GGS_bool (false), var_llvmTypeName_3540, GGS_string ("bswap"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas3", 96)) ;
    }
  }
  GGS_lstring var_routineLLVMName_4461 ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3180, var_integerTypeName_3180.readProperty_string (), GGS_string ("bitReversed").getter_nowhere (SOURCE_FILE ("type-integer.galgas3", 108)), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas3", 109)), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas3", 110)), var_selfTypeProxy_3276, var_routineLLVMName_4461, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 105)) ;
  }
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_4461, GGS_bool (false), GGS_bool (false), var_llvmTypeName_3540, GGS_string ("bitreverse"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas3", 114)) ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3180, var_integerTypeName_3180.readProperty_string (), GGS_string ("leadingZeroCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas3", 125)), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas3", 126)), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas3", 127)), var_selfTypeProxy_3276, var_routineLLVMName_4461, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 122)) ;
  }
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_4461, GGS_bool (false), GGS_bool (false), var_llvmTypeName_3540, GGS_string ("ctlz"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas3", 131)) ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3180, var_integerTypeName_3180.readProperty_string (), GGS_string ("trainingZeroCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas3", 142)), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas3", 143)), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas3", 144)), var_selfTypeProxy_3276, var_routineLLVMName_4461, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 139)) ;
  }
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_4461, GGS_bool (false), GGS_bool (false), var_llvmTypeName_3540, GGS_string ("cttz"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas3", 148)) ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3180, var_integerTypeName_3180.readProperty_string (), GGS_string ("setBitCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas3", 159)), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas3", 160)), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas3", 161)), var_selfTypeProxy_3276, var_routineLLVMName_4461, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 156)) ;
  }
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_4461, GGS_bool (false), GGS_bool (false), var_llvmTypeName_3540, GGS_string ("ctpop"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas3", 165)) ;
  GGS_constantMap var_constantMap_6223 = GGS_constantMap::init (inCompiler COMMA_HERE) ;
  {
  var_constantMap_6223.setter_insertKey (GGS_string ("min").getter_nowhere (SOURCE_FILE ("type-integer.galgas3", 174)), var_min_3355, var_integerTypeName_3180, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 174)) ;
  }
  {
  var_constantMap_6223.setter_insertKey (GGS_string ("max").getter_nowhere (SOURCE_FILE ("type-integer.galgas3", 175)), var_max_3420, var_integerTypeName_3180, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 175)) ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeConstantMap.setter_insertKey (var_integerTypeName_3180, var_constantMap_6223, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 176)) ;
  }
  GGS_constructorMap var_constructorMap_6535 = GGS_constructorMap::init (inCompiler COMMA_HERE) ;
  {
  GGS_constructorSignature temp_8 = GGS_constructorSignature::init (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 182)) ;
  var_constructorMap_6535.setter_insertKey (GGS_string ("()").getter_nowhere (SOURCE_FILE ("type-integer.galgas3", 182)), temp_8, GGS_constructorValue::class_func_simple (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 182))  COMMA_SOURCE_FILE ("type-integer.galgas3", 182)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 182)) ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (var_integerTypeName_3180, var_constructorMap_6535, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 183)) ;
  }
  const GGS_integerDeclarationAST temp_9 = this ;
  const GGS_integerDeclarationAST temp_10 = this ;
  GGS_omnibusType var_integerType_6771 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("type-integer.galgas3", 186)), GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-integer.galgas3", 187)).operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-integer.galgas3", 187)) COMMA_SOURCE_FILE ("type-integer.galgas3", 187)), var_integerTypeName_3180.readProperty_string (), GGS_typeKind::class_func_integer (var_min_3355, var_max_3420, temp_9.readProperty_mIsSigned ().operator_not (SOURCE_FILE ("type-integer.galgas3", 189)), temp_10.readProperty_mSize ()  COMMA_SOURCE_FILE ("type-integer.galgas3", 189)), var_integerTypeName_3180.readProperty_string (), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_integerTypeName_3180, var_integerType_6771, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 192)) ;
  }
  GGS_lstring var_key_7813 = function_assignmentOperatorKey (var_integerType_6771, GGS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas3", 212)), var_integerType_6771, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 212)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_7813, GGS_simpleCopyAssignmentOperatorUsage::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 213)) ;
  }
  var_key_7813 = function_assignmentOperatorKey (var_integerType_6771, GGS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas3", 214)), function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 214)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 214)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_7813, GGS_simpleCopyAssignmentOperatorUsage::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 215)) ;
  }
  GGS_string var_functionName_8206 = function_assignmentOperatorFuncName (var_integerType_6771, var_integerType_6771, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 217)) ;
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_simpleAssignmentCopyRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_functionName_8206.getter_nowhere (SOURCE_FILE ("type-integer.galgas3", 219)), GGS_bool (false), GGS_bool (false), var_integerType_6771, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas3", 218)) ;
  GGS_omnibusType var_boolType_8507 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 225)) ;
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("type-integer.galgas3", 227)), var_integerType_6771, GGS_string ("icmp eq"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_8507, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 227)) ;
  }
  {
  const GGS_integerDeclarationAST temp_11 = this ;
  GGS_string temp_12 ;
  const GalgasBool test_13 = temp_11.readProperty_mIsSigned ().boolEnum () ;
  if (GalgasBool::boolTrue == test_13) {
    temp_12 = GGS_string ("icmp sle") ;
  }else if (GalgasBool::boolFalse == test_13) {
    temp_12 = GGS_string ("icmp ule") ;
  }
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("type-integer.galgas3", 230)), var_integerType_6771, temp_12, ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_8507, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 229)) ;
  }
  {
  const GGS_integerDeclarationAST temp_14 = this ;
  GGS_string temp_15 ;
  const GalgasBool test_16 = temp_14.readProperty_mIsSigned ().boolEnum () ;
  if (GalgasBool::boolTrue == test_16) {
    temp_15 = GGS_string ("icmp slt") ;
  }else if (GalgasBool::boolFalse == test_16) {
    temp_15 = GGS_string ("icmp ult") ;
  }
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("type-integer.galgas3", 238)), var_integerType_6771, temp_15, ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_8507, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 237)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_leftShiftOp (SOURCE_FILE ("type-integer.galgas3", 245)), var_integerType_6771, GGS_string ("shl"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_6771, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 245)) ;
  }
  {
  const GGS_integerDeclarationAST temp_17 = this ;
  GGS_string temp_18 ;
  const GalgasBool test_19 = temp_17.readProperty_mIsSigned ().boolEnum () ;
  if (GalgasBool::boolTrue == test_19) {
    temp_18 = GGS_string ("ashr") ;
  }else if (GalgasBool::boolFalse == test_19) {
    temp_18 = GGS_string ("lshr") ;
  }
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_rightShiftOp (SOURCE_FILE ("type-integer.galgas3", 248)), var_integerType_6771, temp_18, ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_6771, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 247)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("type-integer.galgas3", 255)), var_integerType_6771, GGS_string ("or"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_6771, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 255)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_bitWiseAndOp (SOURCE_FILE ("type-integer.galgas3", 257)), var_integerType_6771, GGS_string ("and"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_6771, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 257)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("type-integer.galgas3", 259)), var_integerType_6771, GGS_string ("xor"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_6771, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 259)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_addOpNoOvf (SOURCE_FILE ("type-integer.galgas3", 261)), var_integerType_6771, GGS_string ("add"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_6771, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 261)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_subOpNoOvf (SOURCE_FILE ("type-integer.galgas3", 263)), var_integerType_6771, GGS_string ("sub"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_6771, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 263)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_mulOpNoOvf (SOURCE_FILE ("type-integer.galgas3", 265)), var_integerType_6771, GGS_string ("mul"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_6771, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 265)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'addIntegerInfixOperator???&?'
//
//--------------------------------------------------------------------------------------------------

void routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (const GGS_omnibusInfixOperator constinArgument_inInfixOperator,
                                                          const GGS_omnibusType constinArgument_inIntegerType,
                                                          const GGS_string constinArgument_inLLVMOp,
                                                          GGS_infixOperatorMap & ioArgument_ioInfixOperatorMap,
                                                          const GGS_omnibusType constinArgument_inResultType,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_ctIntType_10518 = function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 277)) ;
  GGS_lstring var_key_10562 = function_infixOperatorMapKey (constinArgument_inIntegerType, constinArgument_inInfixOperator, GGS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas3", 278)), constinArgument_inIntegerType, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 278)) ;
  {
  ioArgument_ioInfixOperatorMap.setter_insertKey (var_key_10562, constinArgument_inResultType, GGS_inlineInfixOperatorUsage::init_21_ (constinArgument_inLLVMOp, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 279)) ;
  }
  var_key_10562 = function_infixOperatorMapKey (constinArgument_inIntegerType, constinArgument_inInfixOperator, GGS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas3", 280)), var_ctIntType_10518, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 280)) ;
  {
  ioArgument_ioInfixOperatorMap.setter_insertKey (var_key_10562, constinArgument_inResultType, GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::init_21_ (constinArgument_inLLVMOp, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 281)) ;
  }
  var_key_10562 = function_infixOperatorMapKey (var_ctIntType_10518, constinArgument_inInfixOperator, GGS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas3", 282)), constinArgument_inIntegerType, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 282)) ;
  {
  ioArgument_ioInfixOperatorMap.setter_insertKey (var_key_10562, constinArgument_inResultType, GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::init_21_ (constinArgument_inLLVMOp, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 283)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inlineInfix_integer_compileTimeInt_operatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                                          const GGS_location constinArgument_inOperatorLocation,
                                                                                          const GGS_objectIR constinArgument_inRightOperand,
                                                                                          const GGS_omnibusType constinArgument_inResultType,
                                                                                          GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                          GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                          GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                          GGS_objectIR & outArgument_outResultValue,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_minValue_12123 ;
  GGS_bigint var_maxValue_12142 ;
  GGS_bool joker_12151_2 ; // Joker input parameter
  GGS_uint joker_12151_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 307)).readProperty_kind ().method_extractInteger (var_minValue_12123, var_maxValue_12142, joker_12151_2, joker_12151_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 307)) ;
  GGS_bigint var_value_12211 ;
  GGS_omnibusType joker_12196_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_12196_1, var_value_12211, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 308)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::lowerThan, var_value_12211.objectCompare (var_minValue_12123)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("right operand is a compile time integer with an invalid value, lower than $").add_operation (extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 312)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 311)).add_operation (GGS_string (" minimum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 312)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas3", 310)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::greaterThan, var_value_12211.objectCompare (var_maxValue_12142)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("right operand is a compile time integer with an invalid value, greater than $").add_operation (extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 316)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 315)).add_operation (GGS_string (" maximum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 316)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas3", 314)) ;
      }
    }
  }
  GGS_objectIR var_leftOperand_12671 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_12671, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 320)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 321)) ;
  }
  const GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage temp_4 = this ;
  GGS_string var_s_12859 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 322)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 322)).add_operation (temp_4.readProperty_mLLVMOperation (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 322)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 322)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_12671, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 322)).ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 322)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 322)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 322)).add_operation (extensionGetter_llvmName (var_leftOperand_12671, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 323)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 323)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 323)).add_operation (extensionGetter_llvmName (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 323)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 323)) ;
  {
  GGS_stringset temp_5 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 324)) ;
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_12859, temp_5, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 324)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inlineInfix_compileTimeInt_integer_operatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                                          const GGS_location constinArgument_inOperatorLocation,
                                                                                          const GGS_objectIR constinArgument_inRightOperand,
                                                                                          const GGS_omnibusType constinArgument_inResultType,
                                                                                          GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                          GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                          GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                          GGS_objectIR & outArgument_outResultValue,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_minValue_14082 ;
  GGS_bigint var_maxValue_14101 ;
  GGS_bool joker_14110_2 ; // Joker input parameter
  GGS_uint joker_14110_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 348)).readProperty_kind ().method_extractInteger (var_minValue_14082, var_maxValue_14101, joker_14110_2, joker_14110_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 348)) ;
  GGS_bigint var_value_14169 ;
  GGS_omnibusType joker_14154_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_14154_1, var_value_14169, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 349)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::lowerThan, var_value_14169.objectCompare (var_minValue_14082)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("left operand is a compile time integer with an invalid value, lower than $").add_operation (extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 353)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 352)).add_operation (GGS_string (" minimum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 353)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas3", 351)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::greaterThan, var_value_14169.objectCompare (var_maxValue_14101)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("left operand is a compile time integer with an invalid value, greater than $").add_operation (extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 357)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 356)).add_operation (GGS_string (" maximum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 357)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas3", 355)) ;
      }
    }
  }
  GGS_objectIR var_rightOperand_14629 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_14629, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 361)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 362)) ;
  }
  const GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage temp_4 = this ;
  GGS_string var_s_14820 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 363)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 363)).add_operation (temp_4.readProperty_mLLVMOperation (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 363)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 363)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_rightOperand_14629, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 363)).ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 363)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 363)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 363)).add_operation (extensionGetter_llvmName (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 364)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 364)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 364)).add_operation (extensionGetter_llvmName (var_rightOperand_14629, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 364)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 364)) ;
  {
  GGS_stringset temp_5 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 365)) ;
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_14820, temp_5, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 365)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@integerBuiltinFunctionIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_integerBuiltinFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                               const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                               GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_integerBuiltinFunctionIR temp_0 = this ;
  const GGS_integerBuiltinFunctionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal ").add_operation (temp_0.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 384)).add_operation (GGS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 384)).add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-integer.galgas3", 384)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 384)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 384)) ;
  const GGS_integerBuiltinFunctionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (temp_2.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 385)).add_operation (GGS_string ("* %inValue) {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 385)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 385)) ;
  const GGS_integerBuiltinFunctionIR temp_3 = this ;
  const GGS_integerBuiltinFunctionIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %value = load ").add_operation (temp_3.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 386)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 386)).add_operation (temp_4.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 386)).add_operation (GGS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 386)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 386)) ;
  const GGS_integerBuiltinFunctionIR temp_5 = this ;
  const GGS_integerBuiltinFunctionIR temp_6 = this ;
  const GGS_integerBuiltinFunctionIR temp_7 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %result = call ").add_operation (temp_5.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 387)).add_operation (GGS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 387)).add_operation (temp_6.readProperty_mIntrinsicName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 387)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 387)).add_operation (temp_7.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 387)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 387)) ;
  const GGS_integerBuiltinFunctionIR temp_8 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (temp_8.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 388)).add_operation (GGS_string (" %value)\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 388)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 388)) ;
  const GGS_integerBuiltinFunctionIR temp_9 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret ").add_operation (temp_9.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 389)).add_operation (GGS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 389)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 389)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas3", 390)) ;
  const GGS_integerBuiltinFunctionIR temp_10 = this ;
  const GGS_integerBuiltinFunctionIR temp_11 = this ;
  const GGS_integerBuiltinFunctionIR temp_12 = this ;
  const GGS_integerBuiltinFunctionIR temp_13 = this ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.plusPlusAssignOperation (temp_10.readProperty_mLLVMTypeName ().add_operation (GGS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 392)).add_operation (temp_11.readProperty_mIntrinsicName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 392)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 392)).add_operation (temp_12.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 392)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 392)).add_operation (temp_13.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 392)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas3", 392))  COMMA_SOURCE_FILE ("type-integer.galgas3", 391)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@storeFromTemporaryReferenceIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_storeFromTemporaryReferenceIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                                     const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_storeFromTemporaryReferenceIR temp_0 = this ;
  GGS_string var_llvmType_922 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mTargetVarType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas3", 26)) ;
  const GGS_storeFromTemporaryReferenceIR temp_1 = this ;
  const GGS_storeFromTemporaryReferenceIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_llvmType_922, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas3", 27)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas3", 27)).add_operation (extensionGetter_llvmName (temp_1.readProperty_mSourceValue (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas3", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas3", 27)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas3", 27)).add_operation (var_llvmType_922, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas3", 27)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas3", 27)).add_operation (temp_2.readProperty_mLLVMTargetVarName (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas3", 27)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas3", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas3", 27)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@getComputedPropertyValueIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_getComputedPropertyValueIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                                  const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                  GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_getComputedPropertyValueIR temp_0 = this ;
  const GGS_getComputedPropertyValueIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_0.readProperty_mResultValueIR (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas3", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas3", 29)).add_operation (GGS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas3", 29)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_1.readProperty_mResultValueIR (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas3", 29)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas3", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas3", 29)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas3", 29)) ;
  const GGS_getComputedPropertyValueIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" @").add_operation (temp_2.readProperty_mLLVMGetterName ().getter_assemblerRepresentation (SOURCE_FILE ("intermediate-get-computed-property-value.galgas3", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas3", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas3", 30)) ;
  const GGS_getComputedPropertyValueIR temp_3 = this ;
  const GGS_getComputedPropertyValueIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_3.readProperty_mReceiverIR (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas3", 31)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas3", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas3", 31)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas3", 31)).add_operation (extensionGetter_llvmName (temp_4.readProperty_mReceiverIR (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas3", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas3", 31)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas3", 31)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas3", 31)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@getComputedPropertyValueIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_getComputedPropertyValueIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                      GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_getComputedPropertyValueIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (temp_0.readProperty_mLLVMGetterName ()  COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas3", 40)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@primaryInExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_primaryInExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                               GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_primaryInExpressionAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mReceiverName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_primaryInExpressionAST temp_2 = this ;
      ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_2.readProperty_mReceiverName () COMMA_SOURCE_FILE ("expression-primary.galgas3", 106)) ;
      }
    }
  }
  const GGS_primaryInExpressionAST temp_3 = this ;
  UpEnumerator_primaryInExpressionAccessListAST enumerator_3971 (temp_3.readProperty_mAccessList ()) ;
  while (enumerator_3971.hasCurrentObject ()) {
    switch (enumerator_3971.current_mAccess (HERE).enumValue ()) {
    case GGS_primaryInExpressionAccessAST::Enumeration::invalid:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_integerSlice:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_property:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_4110_indexExpression_0 ;
        GGS_location extractedValue_4127__1 ;
        GGS_bool extractedValue_4127__2 ;
        enumerator_3971.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_4110_indexExpression_0, extractedValue_4127__1, extractedValue_4127__2) ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_4110_indexExpression_0.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 113)) ;
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_funcCall:
      {
        GGS_lstring extractedValue_4238__0 ;
        GGS_effectiveArgumentListAST extractedValue_4266_arguments_1 ;
        GGS_location extractedValue_4276__2 ;
        enumerator_3971.current_mAccess (HERE).getAssociatedValuesFor_funcCall (extractedValue_4238__0, extractedValue_4266_arguments_1, extractedValue_4276__2) ;
        UpEnumerator_effectiveArgumentListAST enumerator_4316 (extractedValue_4266_arguments_1) ;
        while (enumerator_4316.hasCurrentObject ()) {
          switch (enumerator_4316.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
            {
              GGS_bool extractedValue_4426__0 ;
              GGS_lstring extractedValue_4437_typeName_1 ;
              GGS_lstring extractedValue_4446__2 ;
              enumerator_4316.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_4426__0, extractedValue_4437_typeName_1, extractedValue_4446__2) ;
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = GGS_bool (ComparisonKind::notEqual, extractedValue_4437_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_4437_typeName_1 COMMA_SOURCE_FILE ("expression-primary.galgas3", 120)) ;
                  }
                }
              }
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
            {
              GGS_expressionAST extractedValue_4569_expression_0 ;
              GGS_location extractedValue_4580__1 ;
              enumerator_4316.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_4569_expression_0, extractedValue_4580__1) ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_4569_expression_0.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 122)) ;
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
            break ;
          }
          enumerator_4316.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_3971.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@primaryInExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_primaryInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_primaryInExpressionAST temp_0 = this ;
  UpEnumerator_primaryInExpressionAccessListAST enumerator_5113 (temp_0.readProperty_mAccessList ()) ;
  while (enumerator_5113.hasCurrentObject ()) {
    switch (enumerator_5113.current_mAccess (HERE).enumValue ()) {
    case GGS_primaryInExpressionAccessAST::Enumeration::invalid:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_integerSlice:
      {
        GGS_lbigint extractedValue_5194_low_0 ;
        GGS_lbigint extractedValue_5207_high_1 ;
        enumerator_5113.current_mAccess (HERE).getAssociatedValuesFor_integerSlice (extractedValue_5194_low_0, extractedValue_5207_high_1) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::greaterOrEqual, extractedValue_5207_high_1.readProperty_bigint ().objectCompare (extractedValue_5194_low_0.readProperty_bigint ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            extensionSetter_noteUINTType (ioArgument_ioGraph, extractedValue_5207_high_1.readProperty_bigint ().substract_operation (extractedValue_5194_low_0.readProperty_bigint (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 140)).add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas3", 140)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 140)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 140)), extractedValue_5194_low_0.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 140)) ;
            }
          }
        }
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_property:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_5410_indexExpression_0 ;
        GGS_location extractedValue_5427__1 ;
        GGS_bool extractedValue_5427__2 ;
        enumerator_5113.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_5410_indexExpression_0, extractedValue_5427__1, extractedValue_5427__2) ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_5410_indexExpression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 144)) ;
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_funcCall:
      {
        GGS_lstring extractedValue_5522__0 ;
        GGS_effectiveArgumentListAST extractedValue_5550_arguments_1 ;
        GGS_location extractedValue_5560__2 ;
        enumerator_5113.current_mAccess (HERE).getAssociatedValuesFor_funcCall (extractedValue_5522__0, extractedValue_5550_arguments_1, extractedValue_5560__2) ;
        UpEnumerator_effectiveArgumentListAST enumerator_5600 (extractedValue_5550_arguments_1) ;
        while (enumerator_5600.hasCurrentObject ()) {
          switch (enumerator_5600.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
            {
              GGS_bool extractedValue_5710__0 ;
              GGS_lstring extractedValue_5721_typeName_1 ;
              GGS_lstring extractedValue_5730__2 ;
              enumerator_5600.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_5710__0, extractedValue_5721_typeName_1, extractedValue_5730__2) ;
              GalgasBool test_2 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_2) {
                test_2 = GGS_bool (ComparisonKind::notEqual, extractedValue_5721_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_2) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_5721_typeName_1 COMMA_SOURCE_FILE ("expression-primary.galgas3", 151)) ;
                  }
                }
              }
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
            {
              GGS_expressionAST extractedValue_5853_expression_0 ;
              GGS_location extractedValue_5864__1 ;
              enumerator_5600.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_5853_expression_0, extractedValue_5864__1) ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_5853_expression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 153)) ;
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
            break ;
          }
          enumerator_5600.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_5113.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@primaryInExpressionAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_primaryInExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
                                                            const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                            const GGS_omnibusType constinArgument_inOptionalTargetType,
                                                            const GGS_semanticContext constinArgument_inContext,
                                                            const GGS_mode constinArgument_inMode,
                                                            GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                            GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                            GGS_allocaList & ioArgument_ioAllocaList,
                                                            GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                            GGS_objectIR & outArgument_outResult,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_primaryInExpressionAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mReceiverName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("expression-primary.galgas3", 181)) COMMA_SOURCE_FILE ("expression-primary.galgas3", 181)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_primaryInExpressionAST temp_3 = this ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mReceiverName ().readProperty_location (), GGS_string ("in guard, only 'self' properties may be accessed"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas3", 182)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        const GGS_primaryInExpressionAST temp_5 = this ;
        callExtensionMethod_analyzePrimaryExpressionNoSelf ((cPtr_primaryInExpressionAST *) temp_5.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 184)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::equal, constinArgument_inSelfType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("expression-primary.galgas3", 198)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_primaryInExpressionAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mReceiverName ().readProperty_location (), GGS_string ("'self' is not available in this context"), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas3", 199)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      const GGS_primaryInExpressionAST temp_9 = this ;
      callExtensionMethod_analyzePrimaryExpressionWithSelf ((cPtr_primaryInExpressionAST *) temp_9.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 201)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'procAnalyzeAccesListInExpression?self?routineAttributes?optionalTargetType?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR?&result'
//
//--------------------------------------------------------------------------------------------------

void routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                 const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                 const GGS_omnibusType constinArgument_inOptionalTargetType,
                                                                                                                                                                                                                 const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                 const GGS_mode constinArgument_inMode,
                                                                                                                                                                                                                 GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                 GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                 GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                 GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                 GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                 const GGS_primaryInExpressionAccessListAST constinArgument_inAccessList,
                                                                                                                                                                                                                 GGS_objectIR & ioArgument_ioResult,
                                                                                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_primaryInExpressionAccessListAST enumerator_13480 (constinArgument_inAccessList) ;
  while (enumerator_13480.hasCurrentObject ()) {
    switch (enumerator_13480.current_mAccess (HERE).enumValue ()) {
    case GGS_primaryInExpressionAccessAST::Enumeration::invalid:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_integerSlice:
      {
        GGS_lbigint extractedValue_13557_low_0 ;
        GGS_lbigint extractedValue_13570_high_1 ;
        enumerator_13480.current_mAccess (HERE).getAssociatedValuesFor_integerSlice (extractedValue_13557_low_0, extractedValue_13570_high_1) ;
        {
        routine_handleSliceInExpression_3F_context_26__3F__3F__26_temporary_26_instructionListIR (constinArgument_inContext, ioArgument_ioResult, extractedValue_13557_low_0, extractedValue_13570_high_1, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas3", 358)) ;
        }
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_property:
      {
        GGS_lstring extractedValue_13812_propertyName_0 ;
        enumerator_13480.current_mAccess (HERE).getAssociatedValuesFor_property (extractedValue_13812_propertyName_0) ;
        {
        routine_handlePropertyAccessInExpression_3F_context_26__3F__3F__26_temporary_26_alloca_26_instructionListIR (constinArgument_inContext, ioArgument_ioResult, extractedValue_13812_propertyName_0, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas3", 367)) ;
        }
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_14120_indexExpression_0 ;
        GGS_location extractedValue_14146_endOfIndex_1 ;
        GGS_bool extractedValue_14157_checkIndexExpression_2 ;
        enumerator_13480.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_14120_indexExpression_0, extractedValue_14146_endOfIndex_1, extractedValue_14157_checkIndexExpression_2) ;
        {
        routine_handleArrayAccessInExpression_26__3F__3F__3F__3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR (ioArgument_ioResult, extractedValue_14120_indexExpression_0, extractedValue_14146_endOfIndex_1, extractedValue_14157_checkIndexExpression_2, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas3", 377)) ;
        }
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_funcCall:
      {
        GGS_lstring extractedValue_14719_methodName_0 ;
        GGS_effectiveArgumentListAST extractedValue_14756_arguments_1 ;
        GGS_location extractedValue_14776_errorLocation_2 ;
        enumerator_13480.current_mAccess (HERE).getAssociatedValuesFor_funcCall (extractedValue_14719_methodName_0, extractedValue_14756_arguments_1, extractedValue_14776_errorLocation_2) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("expression-primary.galgas3", 394)) COMMA_SOURCE_FILE ("expression-primary.galgas3", 394)).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            GenericArray <FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (extractedValue_14776_errorLocation_2, GGS_string ("a proc cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas3", 395)) ;
            ioArgument_ioResult.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_0) {
          {
          routine_handleFunctionCallInExpression_3F__26__3F_self_3F_context_3F_mode_3F_routineAttributes_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__26_ (extractedValue_14719_methodName_0, ioArgument_ioResult, constinArgument_inSelfType, constinArgument_inContext, constinArgument_inMode, constinArgument_inRoutineAttributes, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_14756_arguments_1, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas3", 397)) ;
          }
        }
      }
      break ;
    }
    enumerator_13480.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleSliceInExpression?context&??&temporary&instructionListIR'
//
//--------------------------------------------------------------------------------------------------

void routine_handleSliceInExpression_3F_context_26__3F__3F__26_temporary_26_instructionListIR (const GGS_semanticContext constinArgument_inContext,
                                                                                               GGS_objectIR & ioArgument_ioResult,
                                                                                               const GGS_lbigint constinArgument_inLow,
                                                                                               const GGS_lbigint constinArgument_inHigh,
                                                                                               GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                               GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inLow.readProperty_bigint ().objectCompare (constinArgument_inHigh.readProperty_bigint ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inLow.readProperty_location (), GGS_string ("low bound should be lower or equal to high bound"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas3", 506)) ;
      ioArgument_ioResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_bool test_3 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 507)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-primary.galgas3", 507)) ;
      if (GalgasBool::boolTrue != test_3.boolEnum ()) {
        test_3 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 507)).readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("expression-primary.galgas3", 507)) ;
      }
      test_2 = test_3.operator_not (SOURCE_FILE ("expression-primary.galgas3", 507)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inLow.readProperty_location (), GGS_string ("Invalid, receiver is not an integer"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas3", 508)) ;
        ioArgument_ioResult.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      {
      extensionSetter_appendLogicalShiftRight (ioArgument_ioInstructionGenerationList, ioArgument_ioResult, constinArgument_inLow.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 511)), ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 511)) ;
      }
      GGS_lstring var_resultIntegerName_19037 = GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (constinArgument_inHigh.readProperty_bigint ().substract_operation (constinArgument_inLow.readProperty_bigint (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 513)).add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas3", 513)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 513)).getter_string (SOURCE_FILE ("expression-primary.galgas3", 513)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 513)), constinArgument_inLow.readProperty_location (), inCompiler COMMA_HERE) ;
      GGS_omnibusType var_sliceType_19195 ;
      extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), var_resultIntegerName_19037, var_sliceType_19195, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 514)) ;
      {
      extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_sliceType_19195, ioArgument_ioResult, ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 515)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccessInExpression?context&??&temporary&alloca&instructionListIR'
//
//--------------------------------------------------------------------------------------------------

void routine_handlePropertyAccessInExpression_3F_context_26__3F__3F__26_temporary_26_alloca_26_instructionListIR (const GGS_semanticContext constinArgument_inContext,
                                                                                                                  GGS_objectIR & ioArgument_ioResult,
                                                                                                                  const GGS_lstring constinArgument_inPropertyName,
                                                                                                                  const GGS_mode constinArgument_inMode,
                                                                                                                  GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                  GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                  GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_type_19746 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 530)) ;
  GGS_propertyGetterMap var_propertyGetterMap_19872 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_type_19746, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 532)) ;
  GGS_propertyGetterKind var_accessKind_20003 ;
  GGS_propertyVisibility joker_19975 ; // Joker input parameter
  var_propertyGetterMap_19872.method_searchKey (constinArgument_inPropertyName, joker_19975, var_accessKind_20003, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 533)) ;
  switch (var_accessKind_20003.enumValue ()) {
  case GGS_propertyGetterKind::Enumeration::invalid:
    break ;
  case GGS_propertyGetterKind::Enumeration::enum_constantProperty:
    {
      GGS_objectIR extractedValue_20070_value_0 ;
      var_accessKind_20003.getAssociatedValuesFor_constantProperty (extractedValue_20070_value_0) ;
      ioArgument_ioResult = extractedValue_20070_value_0 ;
    }
    break ;
  case GGS_propertyGetterKind::Enumeration::enum_storedProperty:
    {
      GGS_omnibusType extractedValue_20136_propertyType_0 ;
      GGS_uint extractedValue_20155_propertyIndex_1 ;
      var_accessKind_20003.getAssociatedValuesFor_storedProperty (extractedValue_20136_propertyType_0, extractedValue_20155_propertyIndex_1) ;
      GGS_string var_property_5F_llvmName_20212 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_20212, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 538)) ;
      }
      {
      extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 540)), extensionGetter_llvmName (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 541)), var_property_5F_llvmName_20212, extractedValue_20155_propertyIndex_1, constinArgument_inPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 539)) ;
      }
      ioArgument_ioResult = GGS_objectIR::class_func_reference (extractedValue_20136_propertyType_0, var_property_5F_llvmName_20212  COMMA_SOURCE_FILE ("expression-primary.galgas3", 546)) ;
    }
    break ;
  case GGS_propertyGetterKind::Enumeration::enum_computedProperty:
    {
      GGS_unifiedTypeMapEntry extractedValue_20522_propertyTypeProxy_0 ;
      GGS_routineLLVMNameDict extractedValue_20540_modeDictionary_1 ;
      var_accessKind_20003.getAssociatedValuesFor_computedProperty (extractedValue_20522_propertyTypeProxy_0, extractedValue_20540_modeDictionary_1) ;
      {
      extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 548)) ;
      }
      GGS_string var_routineLLVMName_20671 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_20540_modeDictionary_1, constinArgument_inMode, constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 549)) ;
      GGS_objectIR var_resultValueIR_20934 ;
      {
      extensionSetter_appendGetComputedPropertyValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioResult, var_routineLLVMName_20671, extensionGetter_type (extractedValue_20522_propertyTypeProxy_0, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 554)), var_resultValueIR_20934, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 550)) ;
      }
      ioArgument_ioResult = var_resultValueIR_20934 ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleArrayAccessInExpression&????self?routineAttributes?optionalTargetType?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR'
//
//--------------------------------------------------------------------------------------------------

void routine_handleArrayAccessInExpression_26__3F__3F__3F__3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR (GGS_objectIR & ioArgument_ioResult,
                                                                                                                                                                                                                const GGS_expressionAST constinArgument_inIndexExpression,
                                                                                                                                                                                                                const GGS_location constinArgument_inEndOfIndex,
                                                                                                                                                                                                                const GGS_bool constinArgument_inCheckIndexExpression,
                                                                                                                                                                                                                const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                                                                                                                                                                const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                const GGS_mode constinArgument_inMode,
                                                                                                                                                                                                                GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                Compiler * inCompiler
                                                                                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  switch (extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 580)).readProperty_subscript ().enumValue ()) {
  case GGS_subscript::Enumeration::invalid:
    break ;
  case GGS_subscript::Enumeration::enum_noSubscript:
    {
      GenericArray <FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GGS_string ("the receiver type is ").add_operation (extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 582)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 582)).add_operation (GGS_string (" and does not accept subscripting"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 582)), fixItArray0  COMMA_SOURCE_FILE ("expression-primary.galgas3", 582)) ;
    }
    break ;
  case GGS_subscript::Enumeration::enum_literalString:
    {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GGS_string ("the receiver type is literal string (dynamic array) and does not accept subscripting"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas3", 584)) ;
    }
    break ;
  case GGS_subscript::Enumeration::enum_staticSubscript:
    {
      GGS_omnibusType extractedValue_22199_elementType_0 ;
      GGS_bigint extractedValue_22219_arraySize_1 ;
      extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 580)).readProperty_subscript ().getAssociatedValuesFor_staticSubscript (extractedValue_22199_elementType_0, extractedValue_22219_arraySize_1) ;
      GGS_objectIR var_indexIR_22707 ;
      {
      routine_handleArraySubscriptNew_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__3F__3F__3F_arraySize_3F_elementType_26__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, constinArgument_inCheckIndexExpression, extractedValue_22219_arraySize_1, extractedValue_22199_elementType_0, ioArgument_ioInstructionGenerationList, var_indexIR_22707, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas3", 587)) ;
      }
      GGS_objectIR var_result_22926 ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioResult, extractedValue_22199_elementType_0, var_indexIR_22707, var_result_22926, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 604)) ;
      }
      ioArgument_ioResult = var_result_22926 ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleFunctionCallInExpression?&?self?context?mode?routineAttributes&temporary&staticEntityMap&variableMap&alloca?&'
//
//--------------------------------------------------------------------------------------------------

void routine_handleFunctionCallInExpression_3F__26__3F_self_3F_context_3F_mode_3F_routineAttributes_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__26_ (const GGS_lstring constinArgument_inMethodName,
                                                                                                                                                                      GGS_objectIR & ioArgument_ioObjectIR,
                                                                                                                                                                      const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                      const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                      const GGS_mode constinArgument_inMode,
                                                                                                                                                                      const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                      GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                      GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                      GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                      GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                      const GGS_effectiveArgumentListAST constinArgument_inArguments,
                                                                                                                                                                      GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_receiverType_23665 = extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 631)) ;
  GGS_lstring var_methodMangledName_23752 = extensionGetter_mangledName (constinArgument_inArguments, var_receiverType_23665.readProperty_omnibusTypeDescriptionName (), constinArgument_inMethodName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 633)) ;
  GGS_bool var_implementedPublic_24004 ;
  GGS_routineTypedSignature var_formalSignature_24031 ;
  GGS_unifiedTypeMapEntry var_formalReturnTypeProxy_24056 ;
  GGS_routineLLVMNameDict var_implementedModeDictionary_24116 ;
  GGS_bool var_implementedIsExported_24158 ;
  GGS_mode var_implementedMode_24196 ;
  constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_methodMangledName_23752, var_implementedPublic_24004, var_formalSignature_24031, var_formalReturnTypeProxy_24056, var_implementedModeDictionary_24116, var_implementedIsExported_24158, var_implementedMode_24196, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 636)) ;
  GGS_string var_functionLLVMName_24240 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_24116, constinArgument_inMode, constinArgument_inMethodName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 646)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, extensionGetter_type (var_formalReturnTypeProxy_24056, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 648)).readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("expression-primary.galgas3", 648)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inMethodName.readProperty_location (), GGS_string ("not a function (returns no value)"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas3", 649)) ;
      ioArgument_ioObjectIR.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 652)) ;
    }
    GGS_procCallEffectiveParameterListIR temp_2 = GGS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 654)) ;
    GGS_procCallEffectiveParameterListIR var_effectiveParameterListIR_24766 = temp_2 ;
    var_effectiveParameterListIR_24766.addAssignOperation (GGS_procEffectiveParameterPassingModeIR::class_func_outputInput (SOURCE_FILE ("expression-primary.galgas3", 655)), ioArgument_ioObjectIR  COMMA_SOURCE_FILE ("expression-primary.galgas3", 655)) ;
    {
    routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_24031, constinArgument_inArguments, constinArgument_inMethodName.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_24766, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas3", 657)) ;
    }
    GGS_objectIR var_callReturnedResult_25544 ;
    {
    routine_getNewTempValue_3F__26__21_ (extensionGetter_type (var_formalReturnTypeProxy_24056, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 673)), ioArgument_ioTemporaries, var_callReturnedResult_25544, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas3", 673)) ;
    }
    GGS_lstring var_routineMangledName_25594 = function_routineMangledNameFromCall (extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 675)).readProperty_llvmBaseTypeName (), constinArgument_inMethodName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 675)) ;
    ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_standaloneRoutineCallIR::init_21__21__21__21_ (var_callReturnedResult_25544, var_routineMangledName_25594, var_functionLLVMName_24240, var_effectiveParameterListIR_24766, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-primary.galgas3", 676)) ;
    ioArgument_ioObjectIR = var_callReturnedResult_25544 ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@storeIndirectVolatileIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_storeIndirectVolatileIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                               const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                               GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_storeIndirectVolatileIR temp_0 = this ;
  GGS_string var_llvmType_794 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mTargetVarType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas3", 25)) ;
  GGS_string var_ptr_844 = GGS_string ("%registerPointer.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas3", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas3", 26)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas3", 27)) ;
  const GGS_storeIndirectVolatileIR temp_1 = this ;
  const GGS_storeIndirectVolatileIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_ptr_844, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas3", 28)).add_operation (GGS_string (" = inttoptr i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas3", 28)).add_operation (temp_1.readProperty_mLLVMName (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas3", 28)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas3", 28)).add_operation (var_llvmType_794, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas3", 28)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas3", 28)).add_operation (GGS_string ("  store volatile "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas3", 28)).add_operation (var_llvmType_794, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas3", 29)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas3", 29)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mSourceValue (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas3", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas3", 29)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas3", 29)).add_operation (var_llvmType_794, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas3", 29)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas3", 29)).add_operation (var_ptr_844, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas3", 30)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas3", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas3", 28)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'computeStaticExpression&context&staticEntityMap?expression?errorLocation?optionalContextualTypeName!result'
//
//--------------------------------------------------------------------------------------------------

void routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (GGS_semanticContext & ioArgument_ioContext,
                                                                                                                                           GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                           const GGS_expressionAST constinArgument_inExpression,
                                                                                                                                           const GGS_location constinArgument_inErrorLocation,
                                                                                                                                           const GGS_lstring constinArgument_inOptionalTypeName,
                                                                                                                                           GGS_objectIR & outArgument_outStaticExpressionIR,
                                                                                                                                           Compiler * inCompiler
                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStaticExpressionIR.drop () ; // Release 'out' argument
  GGS_omnibusType var_annotationType_699 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inOptionalTypeName.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_annotationType_699 = function_voidType (inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas3", 16)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), constinArgument_inOptionalTypeName, var_annotationType_699, inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas3", 18)) ;
  }
  GGS_semanticTemporariesStruct var_unusedSemanticTemporariesStruct_923 = GGS_semanticTemporariesStruct::init (inCompiler COMMA_HERE) ;
  GGS_allocaList temp_1 = GGS_allocaList::init (inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas3", 22)) ;
  GGS_allocaList var_unusedAllocaList_979 = temp_1 ;
  GGS_instructionListIR temp_2 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas3", 23)) ;
  GGS_instructionListIR var_unusedInstructionListIR_1027 = temp_2 ;
  GGS_objectIR var_expressionIR_1464 ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) constinArgument_inExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas3", 25)), GGS_routineAttributes::init (inCompiler COMMA_HERE), var_annotationType_699, ioArgument_ioContext, GGS_mode::class_func_bootMode (SOURCE_FILE ("compute-static-expression.galgas3", 29)), var_unusedSemanticTemporariesStruct_923, ioArgument_ioStaticEntityMap, ioArgument_ioContext.mProperty_mValuedObjectMap, var_unusedAllocaList_979, var_unusedInstructionListIR_1027, var_expressionIR_1464, inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas3", 24)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = extensionGetter_isStatic (var_expressionIR_1464, inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas3", 37)).operator_not (SOURCE_FILE ("compute-static-expression.galgas3", 37)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("expression is not static"), fixItArray4  COMMA_SOURCE_FILE ("compute-static-expression.galgas3", 38)) ;
      outArgument_outStaticExpressionIR.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    outArgument_outStaticExpressionIR = function_checkAssignmentCompatibility (ioArgument_ioContext.readProperty_mAssignmentOperatorMap (), var_expressionIR_1464, var_annotationType_699, constinArgument_inErrorLocation, GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas3", 41)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@bitbandInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_bitbandInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_bitbandInstructionAST temp_0 = this ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (temp_0.readProperty_mControlRegisterLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 51)) ;
  {
  ioArgument_ioGraph.setter_noteNode (GGS_string ("u1").getter_nowhere (SOURCE_FILE ("instruction-bit-banding.galgas3", 52)) COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 52)) ;
  }
  const GGS_bitbandInstructionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mBitExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 53)) ;
  const GGS_bitbandInstructionAST temp_2 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_2.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 54)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@bitbandInstructionAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_bitbandInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                     const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                     const GGS_semanticContext constinArgument_inContext,
                                                                     const GGS_mode constinArgument_inMode,
                                                                     GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                     GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                     GGS_allocaList & ioArgument_ioAllocaList,
                                                                     GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_requiredSourceExpressionType_3184 ;
  const GGS_bitbandInstructionAST temp_0 = this ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), GGS_lstring::init_21__21_ (GGS_string ("u1"), temp_0.readProperty_mSourceExpressionLocation (), inCompiler COMMA_HERE), var_requiredSourceExpressionType_3184, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 74)) ;
  GGS_objectIR var_sourceExpressionOperand_3653 ;
  const GGS_bitbandInstructionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_requiredSourceExpressionType_3184, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceExpressionOperand_3653, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 79)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceExpressionOperand_3653, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 93)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_bool test_3 = GGS_bool (ComparisonKind::equal, extensionGetter_type (var_sourceExpressionOperand_3653, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 98)).readProperty_omnibusTypeDescriptionName ().objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 98)))) ;
    if (GalgasBool::boolTrue == test_3.boolEnum ()) {
      test_3 = var_sourceExpressionOperand_3653.getter_isLiteralInteger (SOURCE_FILE ("instruction-bit-banding.galgas3", 98)) ;
    }
    test_2 = test_3.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_bigint var_value_4142 ;
      GGS_omnibusType joker_4119_1 ; // Joker input parameter
      var_sourceExpressionOperand_3653.method_extractLiteralInteger (joker_4119_1, var_value_4142, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 99)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_bool test_5 = GGS_bool (ComparisonKind::lowerThan, var_value_4142.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 100)))) ;
        if (GalgasBool::boolTrue != test_5.boolEnum ()) {
          test_5 = GGS_bool (ComparisonKind::greaterThan, var_value_4142.objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 100)))) ;
        }
        test_4 = test_5.boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_bitbandInstructionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mSourceExpressionLocation (), GGS_string ("static value should be 0 or 1"), fixItArray7  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 101)) ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        var_sourceExpressionOperand_3653 = GGS_objectIR::class_func_literalInteger (var_requiredSourceExpressionType_3184, var_value_4142  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 103)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = GGS_bool (ComparisonKind::notEqual, extensionGetter_type (var_sourceExpressionOperand_3653, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 105)).readProperty_omnibusTypeDescriptionName ().objectCompare (var_requiredSourceExpressionType_3184.readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_bitbandInstructionAST temp_9 = this ;
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mSourceExpressionLocation (), GGS_string ("bit expression type should be $").add_operation (var_requiredSourceExpressionType_3184.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 106)), fixItArray10  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 106)) ;
      }
    }
  }
  GGS_uint var_registerBitCount_5132 ;
  GGS_string var_llvmRegisterAddressName_5198 ;
  const GGS_bitbandInstructionAST temp_11 = this ;
  GGS_omnibusType joker_5090 ; // Joker input parameter
  GGS_sliceMap joker_5153 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (temp_11.readProperty_mControlRegisterLValue (), GGS_bool (false), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, joker_5090, var_registerBitCount_5132, joker_5153, var_llvmRegisterAddressName_5198, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 109)) ;
  GGS_omnibusType var_requiredBitExpressionType_5438 ;
  const GGS_bitbandInstructionAST temp_12 = this ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_registerBitCount_5132.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 129)).getter_significantBitCount (SOURCE_FILE ("instruction-bit-banding.galgas3", 129)).getter_string (SOURCE_FILE ("instruction-bit-banding.galgas3", 129)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 129)), temp_12.readProperty_mBitExpressionLocation (), inCompiler COMMA_HERE), var_requiredBitExpressionType_5438, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 128)) ;
  GGS_objectIR var_bitExpressionOperand_5895 ;
  const GGS_bitbandInstructionAST temp_13 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_13.readProperty_mBitExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_requiredBitExpressionType_5438, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_bitExpressionOperand_5895, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 133)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_bitExpressionOperand_5895, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 147)) ;
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    GGS_bool test_15 = GGS_bool (ComparisonKind::equal, extensionGetter_type (var_bitExpressionOperand_5895, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 152)).readProperty_omnibusTypeDescriptionName ().objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 152)))) ;
    if (GalgasBool::boolTrue == test_15.boolEnum ()) {
      test_15 = var_bitExpressionOperand_5895.getter_isLiteralInteger (SOURCE_FILE ("instruction-bit-banding.galgas3", 152)) ;
    }
    test_14 = test_15.boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      GGS_bigint var_value_6363 ;
      GGS_omnibusType joker_6340_1 ; // Joker input parameter
      var_bitExpressionOperand_5895.method_extractLiteralInteger (joker_6340_1, var_value_6363, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 153)) ;
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        GGS_bool test_17 = GGS_bool (ComparisonKind::lowerThan, var_value_6363.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 154)))) ;
        if (GalgasBool::boolTrue != test_17.boolEnum ()) {
          test_17 = GGS_bool (ComparisonKind::greaterOrEqual, var_value_6363.objectCompare (var_registerBitCount_5132.getter_bigint (SOURCE_FILE ("instruction-bit-banding.galgas3", 154)))) ;
        }
        test_16 = test_17.boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          const GGS_bitbandInstructionAST temp_18 = this ;
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mBitExpressionLocation (), GGS_string ("static value should be >= 0 and <").add_operation (var_registerBitCount_5132.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas3", 155)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 155)), fixItArray19  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 155)) ;
        }
      }
      if (GalgasBool::boolFalse == test_16) {
        var_bitExpressionOperand_5895 = GGS_objectIR::class_func_literalInteger (var_requiredBitExpressionType_5438, var_value_6363  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 157)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_14) {
    GalgasBool test_20 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_20) {
      test_20 = GGS_bool (ComparisonKind::notEqual, extensionGetter_type (var_bitExpressionOperand_5895, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 159)).readProperty_omnibusTypeDescriptionName ().objectCompare (var_requiredBitExpressionType_5438.readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        const GGS_bitbandInstructionAST temp_21 = this ;
        GenericArray <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (temp_21.readProperty_mBitExpressionLocation (), GGS_string ("bit expression type should be $").add_operation (var_requiredBitExpressionType_5438.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 160)), fixItArray22  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 160)) ;
      }
    }
  }
  ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_bitbandInstructionIR::init_21__21__21__21__21__21__21_ (var_llvmRegisterAddressName_5198, var_bitExpressionOperand_5895, var_sourceExpressionOperand_3653, constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mBitbandRegisterBaseAddress ().readProperty_bigint (), constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mBitbandRegisterRelocationAddress ().readProperty_bigint (), constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mBitbandRegisterOffsetMultiplier ().readProperty_bigint (), constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mBitbandRegisterBitMultiplier ().readProperty_bigint (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 163)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@bitbandInstructionIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_bitbandInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                            const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                            GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_idx_8897 = ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas3", 205)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 206)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Bit band\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 207)) ;
  const GGS_bitbandInstructionIR temp_0 = this ;
  const GGS_bitbandInstructionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %byte.offset.").add_operation (var_idx_8897, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 208)).add_operation (GGS_string (" = sub i32 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 208)).add_operation (temp_0.readProperty_mRegisterAddressLLVMname (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 208)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 208)).add_operation (temp_1.readProperty_mBitbandRegisterBaseAddress ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas3", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 208)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 208)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 208)) ;
  const GGS_bitbandInstructionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %byte.offset.").add_operation (var_idx_8897, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 209)).add_operation (GGS_string (".mul = mul i32 %byte.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 209)).add_operation (var_idx_8897, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 209)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 209)).add_operation (temp_2.readProperty_mBitbandRegisterOffsetMultiplier ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas3", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 209)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 209)) ;
  const GGS_bitbandInstructionIR temp_3 = this ;
  const GGS_bitbandInstructionIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %bit.offset.").add_operation (var_idx_8897, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 210)).add_operation (GGS_string (".mul = mul i32 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 210)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mBitExpressionOperand (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 210)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 210)).add_operation (temp_4.readProperty_mBitbandRegisterBitMultiplier ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas3", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 210)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 210)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 210)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %offset.").add_operation (var_idx_8897, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 211)).add_operation (GGS_string (" = add i32 %byte.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 211)).add_operation (var_idx_8897, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 211)).add_operation (GGS_string (".mul, %bit.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 211)).add_operation (var_idx_8897, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 211)).add_operation (GGS_string (".mul\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 211)) ;
  const GGS_bitbandInstructionIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %bit.word.addr.").add_operation (var_idx_8897, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 212)).add_operation (GGS_string (" = add i32 %offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 212)).add_operation (var_idx_8897, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 212)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 212)).add_operation (temp_5.readProperty_mBitbandRegisterRelocationAddress ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas3", 212)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 212)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 212)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %ptr.").add_operation (var_idx_8897, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 213)).add_operation (GGS_string (" = inttoptr i32 %bit.word.addr."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 213)).add_operation (var_idx_8897, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 213)).add_operation (GGS_string (" to i32*\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 213)) ;
  const GGS_bitbandInstructionIR temp_6 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %value.").add_operation (var_idx_8897, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 214)).add_operation (GGS_string (" = zext i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 214)).add_operation (extensionGetter_llvmName (temp_6.readProperty_mSourceExpressionOperand (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 214)).add_operation (GGS_string (" to i32\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 214)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 214)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store i32 %value.").add_operation (var_idx_8897, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 215)).add_operation (GGS_string (", i32* %ptr."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 215)).add_operation (var_idx_8897, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 215)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 215)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@addressofExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_addressofExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring /* constinArgument_inConstantName */,
                                                                               GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@addressofExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_addressofExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_addressofExpressionAST temp_0 = this ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (temp_0.readProperty_mLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 46)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@addressofExpressionAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_addressofExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
                                                            const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                            const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                            const GGS_semanticContext constinArgument_inContext,
                                                            const GGS_mode constinArgument_inMode,
                                                            GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                            GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                            GGS_allocaList & ioArgument_ioAllocaList,
                                                            GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                            GGS_objectIR & outArgument_outResult,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("expression-addressof-regular-var.galgas3", 66)) COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 66)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_addressofExpressionAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLValue ().readProperty_mIdentifier ().readProperty_location (), GGS_string ("addressof () cannot be used in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 67)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_LValueRepresentation var_lvalueIR_3169 ;
    const GGS_addressofExpressionAST temp_3 = this ;
    extensionMethod_analyzeLValue (temp_3.readProperty_mLValue (), constinArgument_inSelfType, GGS_bool (true), constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lvalueIR_3169, inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 70)) ;
    GGS_unifiedTypeMapEntry var_resultTypeProxy_3192 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GGS_string ("u").add_operation (constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().getter_string (SOURCE_FILE ("expression-addressof-regular-var.galgas3", 84)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 84)).getter_nowhere (SOURCE_FILE ("expression-addressof-regular-var.galgas3", 84)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 83)) ;
    GGS_omnibusType var_resultType_3325 = extensionGetter_type (var_resultTypeProxy_3192, inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 86)) ;
    {
    routine_getNewTempValue_3F__26__21_ (var_resultType_3325, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 87)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_addressofInstructionIR::init_21__21_ (outArgument_outResult, var_lvalueIR_3169, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 88)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@addressofInstructionIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_addressofInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                              const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                              GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_addressofInstructionIR temp_0 = this ;
  const GGS_addressofInstructionIR temp_1 = this ;
  const GGS_addressofInstructionIR temp_2 = this ;
  const GGS_addressofInstructionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_0.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 111)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 111)).add_operation (GGS_string (" = ptrtoint "), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 111)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_1.readProperty_mLValue ().readProperty_type ().ptr (), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 111)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 111)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 111)).add_operation (temp_2.readProperty_mLValue ().readProperty_llvmName (), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 111)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 111)).add_operation (extensionGetter_llvmTypeName (temp_3.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 112)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 112)).add_operation (GGS_string (" ; addressof\n"), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 112)), inCompiler  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 111)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@testArrayIndexIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_testArrayIndexIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                        const GGS_generationContext constinArgument_inGenerationContext,
                                                        GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_max_944 ;
  GGS_bool var_isUnsigned_962 ;
  const GGS_testArrayIndexIR temp_0 = this ;
  GGS_bigint joker_931_1 ; // Joker input parameter
  GGS_uint joker_973_1 ; // Joker input parameter
  extensionGetter_type (temp_0.readProperty_mIndex (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 28)).readProperty_kind ().method_extractInteger (joker_931_1, var_max_944, var_isUnsigned_962, joker_973_1, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 28)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_isUnsigned_962.operator_not (SOURCE_FILE ("intermediate-test-array-index.galgas3", 30)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_string var_testToZero_1052 = GGS_string ("%test.index.zero.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas3", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 31)) ;
      GGS_string var_testToZeroOk_1125 = GGS_string ("test.index.zero.ok.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas3", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 32)) ;
      GGS_string var_testToZeroFailure_1202 = GGS_string ("test.index.zero.fails.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas3", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 33)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 34)) ;
      const GGS_testArrayIndexIR temp_2 = this ;
      const GGS_testArrayIndexIR temp_3 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_testToZero_1052, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 35)).add_operation (GGS_string (" = icmp sge "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 35)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_2.readProperty_mIndex (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 35)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 35)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 35)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 35)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mIndex (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 35)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 35)).add_operation (GGS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 35)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 35)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (var_testToZero_1052, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 36)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 36)).add_operation (var_testToZeroOk_1125, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 36)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 36)).add_operation (var_testToZeroFailure_1202, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 36)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 36)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 36)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_testToZeroFailure_1202.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 38)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 38)) ;
      const GGS_testArrayIndexIR temp_4 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_4.readProperty_mErrorLocation (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 39)).getter_assemblerRepresentation (SOURCE_FILE ("intermediate-test-array-index.galgas3", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 39)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 39)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 39)) ;
      const GGS_testArrayIndexIR temp_5 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 40)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 40)).add_operation (temp_5.readProperty_mErrorLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 40)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas3", 40)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 40)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 40)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 40)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 41)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 41)).add_operation (function_panicCodeForNegativeArrayIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 41)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas3", 41)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 41)).add_operation (GGS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 41)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 41)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  unreachable\n\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 42)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_testToZeroOk_1125.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 44)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 44)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_testArrayIndexIR temp_7 = this ;
    test_6 = GGS_bool (ComparisonKind::greaterOrEqual, var_max_944.objectCompare (temp_7.readProperty_mSize ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GGS_string var_testToSize_2147 = GGS_string ("%test.index.size.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas3", 48)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 48)) ;
      GGS_string var_testToSizeOk_2220 = GGS_string ("test.index.size.ok.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas3", 49)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 49)) ;
      GGS_string var_testToSizeFailure_2297 = GGS_string ("test.index.size.fails.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas3", 50)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 50)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_testToSize_2147, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 51)).add_operation (GGS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 51)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 51)) ;
      GGS_string temp_8 ;
      const GalgasBool test_9 = var_isUnsigned_962.boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        temp_8 = GGS_string ("ult") ;
      }else if (GalgasBool::boolFalse == test_9) {
        temp_8 = GGS_string ("slt") ;
      }
      ioArgument_ioLLVMcode.plusAssignOperation(temp_8, inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 52)) ;
      const GGS_testArrayIndexIR temp_10 = this ;
      const GGS_testArrayIndexIR temp_11 = this ;
      const GGS_testArrayIndexIR temp_12 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_10.readProperty_mIndex (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 53)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 53)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 53)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 53)).add_operation (extensionGetter_llvmName (temp_11.readProperty_mIndex (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 53)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 53)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 53)).add_operation (temp_12.readProperty_mSize ().getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas3", 53)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 53)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 53)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 53)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (var_testToSize_2147, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 54)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 54)).add_operation (var_testToSizeOk_2220, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 54)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 54)).add_operation (var_testToSizeFailure_2297, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 54)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 54)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 54)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_testToSizeFailure_2297.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 56)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 56)) ;
      const GGS_testArrayIndexIR temp_13 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_13.readProperty_mErrorLocation (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 57)).getter_assemblerRepresentation (SOURCE_FILE ("intermediate-test-array-index.galgas3", 57)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 57)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 57)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 57)) ;
      const GGS_testArrayIndexIR temp_14 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 58)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 58)).add_operation (temp_14.readProperty_mErrorLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 58)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas3", 58)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 58)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 58)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 58)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 59)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 59)).add_operation (function_panicCodeForTooLargeArrayIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 59)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas3", 59)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 59)).add_operation (GGS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 59)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 59)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  unreachable\n\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 60)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_testToSizeOk_2220.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 62)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 62)) ;
    }
  }
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 65)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@testArrayIndexIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_testArrayIndexIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                            GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("intermediate-test-array-index.galgas3", 74)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_testArrayIndexIR temp_1 = this ;
      ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (function_panicRoutineNameForLocationFile (temp_1.readProperty_mErrorLocation (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 75))  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas3", 75)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalStringInExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringInExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                     GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, GGS_lstring::init_21__21_ (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas3", 34)), constinArgument_inConstantName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-literal-string.galgas3", 34)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalStringInExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas3", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas3", 42)) COMMA_SOURCE_FILE ("expression-literal-string.galgas3", 42)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalStringInExpressionAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringInExpressionAST::method_analyzeExpression (const GGS_omnibusType /* constinArgument_inSelfType */,
                                                                  const GGS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                  const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                  const GGS_semanticContext /* constinArgument_inContext */,
                                                                  const GGS_mode /* constinArgument_inMode */,
                                                                  GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                  GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                  GGS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                  GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                  GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                  GGS_objectIR & outArgument_outResult,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_staticStringIndex_2828 ;
  {
  const GGS_literalStringInExpressionAST temp_0 = this ;
  extensionSetter_findOrAddStaticString (ioArgument_ioStaticEntityMap, temp_0.readProperty_mLiteralString ().readProperty_string (), var_staticStringIndex_2828, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas3", 62)) ;
  }
  const GGS_literalStringInExpressionAST temp_1 = this ;
  outArgument_outResult = GGS_objectIR::class_func_literalString (temp_1.readProperty_mLiteralString ().readProperty_string ().getter_utf_38_Length (SOURCE_FILE ("expression-literal-string.galgas3", 63)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas3", 63)), var_staticStringIndex_2828  COMMA_SOURCE_FILE ("expression-literal-string.galgas3", 63)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@boolToUIntIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_boolToUIntIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                    const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                    GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_boolToUIntIR temp_0 = this ;
  const GGS_boolToUIntIR temp_1 = this ;
  const GGS_boolToUIntIR temp_2 = this ;
  const GGS_boolToUIntIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_0.readProperty_mUIntResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas3", 23)), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas3", 23)).add_operation (GGS_string (" = zext "), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas3", 23)).add_operation (extensionGetter_llvmTypeName (temp_1.readProperty_mBoolSource (), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas3", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas3", 24)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas3", 24)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mBoolSource (), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas3", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas3", 24)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas3", 24)).add_operation (extensionGetter_llvmTypeName (temp_3.readProperty_mUIntResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas3", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas3", 25)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas3", 25)), inCompiler  COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas3", 23)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@shortCircuitAndOperationIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_shortCircuitAndOperationIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                      GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_shortCircuitAndOperationIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mLeftInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 38)) ;
  const GGS_shortCircuitAndOperationIR temp_1 = this ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mRightInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 39)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@shortCircuitAndOperationIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_shortCircuitAndOperationIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                                  const GGS_generationContext constinArgument_inGenerationContext,
                                                                  GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_shortCircuitAndOperationIR temp_0 = this ;
  GGS_string var_startLabel_1752 = GGS_string ("and.").add_operation (temp_0.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 49)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 49)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 49)).add_operation (GGS_string (".start"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 49)) ;
  const GGS_shortCircuitAndOperationIR temp_1 = this ;
  GGS_string var_trueLabel_1824 = GGS_string ("and.").add_operation (temp_1.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 50)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 50)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 50)).add_operation (GGS_string (".true"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 50)) ;
  const GGS_shortCircuitAndOperationIR temp_2 = this ;
  GGS_string var_falseLabel_1894 = GGS_string ("and.").add_operation (temp_2.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 51)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 51)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 51)).add_operation (GGS_string (".false"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 51)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_startLabel_1752, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 52)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 52)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 52)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_startLabel_1752.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 53)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 53)) ;
  const GGS_shortCircuitAndOperationIR temp_3 = this ;
  extensionMethod_instructionListLLVMCode (temp_3.readProperty_mLeftInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 54)) ;
  const GGS_shortCircuitAndOperationIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (temp_4.readProperty_mLeftOperandLLVMName (), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 55)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 55)).add_operation (var_trueLabel_1824, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 55)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 55)).add_operation (var_falseLabel_1894, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 55)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 55)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 55)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_trueLabel_1824.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 56)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 56)) ;
  const GGS_shortCircuitAndOperationIR temp_5 = this ;
  extensionMethod_instructionListLLVMCode (temp_5.readProperty_mRightInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 57)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_falseLabel_1894, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 58)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 58)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 58)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_falseLabel_1894.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 59)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 59)) ;
  const GGS_shortCircuitAndOperationIR temp_6 = this ;
  const GGS_shortCircuitAndOperationIR temp_7 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_6.readProperty_mTargetOperand (), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 60)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 60)).add_operation (GGS_string (" = phi i1 ["), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 60)).add_operation (temp_7.readProperty_mRightOperandLLVMName (), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 61)).add_operation (GGS_string (", %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 61)).add_operation (var_trueLabel_1824, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 61)).add_operation (GGS_string ("], [false, %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 61)).add_operation (var_startLabel_1752, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 61)).add_operation (GGS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 61)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas3", 60)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ctInfixExpressionAST checkCompileTimeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ctInfixExpressionAST::method_checkCompileTimeExpression (const GGS_ctCheckMap constinArgument_inMap,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ctInfixExpressionAST temp_0 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inMap, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 418)) ;
  const GGS_ctInfixExpressionAST temp_1 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inMap, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 419)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ctPrefixExpressionAST checkCompileTimeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ctPrefixExpressionAST::method_checkCompileTimeExpression (const GGS_ctCheckMap constinArgument_inMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ctPrefixExpressionAST temp_0 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inMap, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 425)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ctTrueExpressionAST checkCompileTimeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ctTrueExpressionAST::method_checkCompileTimeExpression (const GGS_ctCheckMap /* constinArgument_inMap */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ctFalseExpressionAST checkCompileTimeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ctFalseExpressionAST::method_checkCompileTimeExpression (const GGS_ctCheckMap /* constinArgument_inMap */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ctIntExpressionAST checkCompileTimeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ctIntExpressionAST::method_checkCompileTimeExpression (const GGS_ctCheckMap /* constinArgument_inMap */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ctIdentifierExpressionAST checkCompileTimeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ctIdentifierExpressionAST::method_checkCompileTimeExpression (const GGS_ctCheckMap constinArgument_inMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ctIdentifierExpressionAST temp_0 = this ;
  constinArgument_inMap.method_searchKey (temp_0.readProperty_mIdentifier (), inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 446)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ctInfixExpressionAST computeCompileTimeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ctInfixExpressionAST::method_computeCompileTimeExpression (const GGS_ctMap constinArgument_inMap,
                                                                     GGS_bigint & outArgument_outValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_left_15494 ;
  const GGS_ctInfixExpressionAST temp_0 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inMap, var_left_15494, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 471)) ;
  GGS_bigint var_right_15574 ;
  const GGS_ctInfixExpressionAST temp_1 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inMap, var_right_15574, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 472)) ;
  const GGS_ctInfixExpressionAST temp_2 = this ;
  switch (temp_2.readProperty_mInfixOperator ().enumValue ()) {
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::invalid:
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_equal:
    {
      GGS_bigint temp_3 ;
      const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, var_left_15494.objectCompare (var_right_15574)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        temp_3 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 474)) ;
      }else if (GalgasBool::boolFalse == test_4) {
        temp_3 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 474)) ;
      }
      outArgument_outValue = temp_3 ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_lessThan:
    {
      GGS_bigint temp_5 ;
      const GalgasBool test_6 = GGS_bool (ComparisonKind::lowerThan, var_left_15494.objectCompare (var_right_15574)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        temp_5 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 475)) ;
      }else if (GalgasBool::boolFalse == test_6) {
        temp_5 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 475)) ;
      }
      outArgument_outValue = temp_5 ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_bitWiseAndOp:
    {
      outArgument_outValue = var_left_15494.operator_and (var_right_15574 COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 476)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_bitWiseOrOp:
    {
      outArgument_outValue = var_left_15494.operator_or (var_right_15574 COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 477)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_bitWiseXorOp:
    {
      outArgument_outValue = var_left_15494.operator_xor (var_right_15574 COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 478)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_addOp:
    {
      outArgument_outValue = var_left_15494.add_operation (var_right_15574, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 479)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_subOp:
    {
      outArgument_outValue = var_left_15494.substract_operation (var_right_15574, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 480)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_mulOp:
    {
      outArgument_outValue = var_left_15494.multiply_operation (var_right_15574, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 481)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_divOp:
    {
      outArgument_outValue = var_left_15494.divide_operation (var_right_15574, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 482)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_divNoOvf:
    {
      outArgument_outValue = var_left_15494.divide_operation (var_right_15574, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 483)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_modOp:
    {
      outArgument_outValue = var_left_15494.modulo_operation (var_right_15574, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 484)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_moduloNoOvf:
    {
      outArgument_outValue = var_left_15494.modulo_operation (var_right_15574, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 485)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_leftShift:
    {
      outArgument_outValue = var_left_15494.left_shift_operation (var_right_15574, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 486)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_rightShift:
    {
      outArgument_outValue = var_left_15494.right_shift_operation (var_right_15574, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 487)) ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ctPrefixExpressionAST computeCompileTimeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ctPrefixExpressionAST::method_computeCompileTimeExpression (const GGS_ctMap constinArgument_inMap,
                                                                      GGS_bigint & outArgument_outValue,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_exp_16601 ;
  const GGS_ctPrefixExpressionAST temp_0 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inMap, var_exp_16601, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 497)) ;
  const GGS_ctPrefixExpressionAST temp_1 = this ;
  switch (temp_1.readProperty_mPrefixOperator ().enumValue ()) {
  case GGS_compileTimePrefixOperatorEnumeration::Enumeration::invalid:
    break ;
  case GGS_compileTimePrefixOperatorEnumeration::Enumeration::enum_minusOp:
    {
      outArgument_outValue = var_exp_16601.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 499)) ;
    }
    break ;
  case GGS_compileTimePrefixOperatorEnumeration::Enumeration::enum_notOp:
    {
      GGS_bigint temp_2 ;
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, var_exp_16601.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 500)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        temp_2 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 500)) ;
      }else if (GalgasBool::boolFalse == test_3) {
        temp_2 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 500)) ;
      }
      outArgument_outValue = temp_2 ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ctTrueExpressionAST computeCompileTimeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ctTrueExpressionAST::method_computeCompileTimeExpression (const GGS_ctMap /* constinArgument_inMap */,
                                                                    GGS_bigint & outArgument_outValue,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outValue = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 510)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ctFalseExpressionAST computeCompileTimeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ctFalseExpressionAST::method_computeCompileTimeExpression (const GGS_ctMap /* constinArgument_inMap */,
                                                                     GGS_bigint & outArgument_outValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outValue = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 519)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ctIntExpressionAST computeCompileTimeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ctIntExpressionAST::method_computeCompileTimeExpression (const GGS_ctMap /* constinArgument_inMap */,
                                                                   GGS_bigint & outArgument_outValue,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ctIntExpressionAST temp_0 = this ;
  outArgument_outValue = temp_0.readProperty_mValue ().readProperty_bigint () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ctIdentifierExpressionAST computeCompileTimeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ctIdentifierExpressionAST::method_computeCompileTimeExpression (const GGS_ctMap constinArgument_inMap,
                                                                          GGS_bigint & outArgument_outValue,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ctIdentifierExpressionAST temp_0 = this ;
  constinArgument_inMap.method_searchKey (temp_0.readProperty_mIdentifier (), outArgument_outValue, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 537)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@storeComputedPropertyValueIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_storeComputedPropertyValueIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                                    const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_storeComputedPropertyValueIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (temp_0.readProperty_mLLVMSetterName ().getter_assemblerRepresentation (SOURCE_FILE ("intermediate-store-computed-property-value.galgas3", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas3", 25)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas3", 25)) ;
  const GGS_storeComputedPropertyValueIR temp_1 = this ;
  const GGS_storeComputedPropertyValueIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_1.readProperty_mReceiverIR (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas3", 26)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas3", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas3", 26)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas3", 26)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mReceiverIR (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas3", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas3", 26)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas3", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas3", 26)) ;
  const GGS_storeComputedPropertyValueIR temp_3 = this ;
  const GGS_storeComputedPropertyValueIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_3.readProperty_mValueIR (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas3", 27)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas3", 27)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas3", 27)).add_operation (extensionGetter_llvmName (temp_4.readProperty_mValueIR (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas3", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas3", 27)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas3", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas3", 27)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@storeComputedPropertyValueIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_storeComputedPropertyValueIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                        GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_storeComputedPropertyValueIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (temp_0.readProperty_mLLVMSetterName ()  COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas3", 36)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@releaseIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_releaseIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                 const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                 GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_releaseIR temp_0 = this ;
  const GGS_releaseIR temp_1 = this ;
  callExtensionMethod_generateRelease ((cPtr_omnibusType *) temp_0.readProperty_mType ().ptr (), temp_1.readProperty_mOmnibusName ().readProperty_string (), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-release.galgas3", 20)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@forLowerUpperBoundInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_forLowerUpperBoundInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_forLowerUpperBoundInstructionAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_forLowerUpperBoundInstructionAST temp_2 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_2.readProperty_mTypeName () COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 67)) ;
      }
    }
  }
  const GGS_forLowerUpperBoundInstructionAST temp_3 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_3.readProperty_mDoInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 69)) ;
  const GGS_forLowerUpperBoundInstructionAST temp_4 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_4.readProperty_mLowerBoundExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 70)) ;
  const GGS_forLowerUpperBoundInstructionAST temp_5 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_5.readProperty_mUpperBoundExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 71)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@forLowerUpperBoundInstructionAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_forLowerUpperBoundInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                                const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                const GGS_semanticContext constinArgument_inContext,
                                                                                const GGS_mode constinArgument_inMode,
                                                                                GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                GGS_allocaList & ioArgument_ioAllocaList,
                                                                                GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forLowerUpperBoundInstructionAST temp_0 = this ;
  GGS_omnibusType var_type_3547 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 90)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 90)) ;
  switch (var_type_3547.readProperty_kind ().enumValue ()) {
  case GGS_typeKind::Enumeration::invalid:
    break ;
  case GGS_typeKind::Enumeration::enum_boolean:
  case GGS_typeKind::Enumeration::enum_void:
    {
      const GGS_forLowerUpperBoundInstructionAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 93)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_staticArrayType:
    {
      GGS_omnibusType extractedValue_3736__0 ;
      GGS_bigint extractedValue_3738__1 ;
      var_type_3547.readProperty_kind ().getAssociatedValuesFor_staticArrayType (extractedValue_3736__0, extractedValue_3738__1) ;
      const GGS_forLowerUpperBoundInstructionAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 95)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_dynamicArrayType:
    {
      GGS_omnibusType extractedValue_3832__0 ;
      var_type_3547.readProperty_kind ().getAssociatedValuesFor_dynamicArrayType (extractedValue_3832__0) ;
      const GGS_forLowerUpperBoundInstructionAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray6  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 97)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_enumeration:
    break ;
  case GGS_typeKind::Enumeration::enum_literalString:
    {
      const GGS_forLowerUpperBoundInstructionAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray8  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 100)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_opaque:
    {
      GGS_bigint extractedValue_4028__0 ;
      var_type_3547.readProperty_kind ().getAssociatedValuesFor_opaque (extractedValue_4028__0) ;
      const GGS_forLowerUpperBoundInstructionAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray10  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 102)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_compileTimeBool:
    {
      const GGS_forLowerUpperBoundInstructionAST temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 104)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_llvmType:
    {
      GGS_bigint extractedValue_4203__0 ;
      var_type_3547.readProperty_kind ().getAssociatedValuesFor_llvmType (extractedValue_4203__0) ;
      const GGS_forLowerUpperBoundInstructionAST temp_13 = this ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray14  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 106)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_generic:
    {
      GGS_genericFormalParameterList extractedValue_4289__0 ;
      GGS_ctExpressionAST extractedValue_4289__1 ;
      GGS_llvmStringDefinition extractedValue_4289__2 ;
      var_type_3547.readProperty_kind ().getAssociatedValuesFor_generic (extractedValue_4289__0, extractedValue_4289__1, extractedValue_4289__2) ;
      const GGS_forLowerUpperBoundInstructionAST temp_15 = this ;
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray16  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 108)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_compileTimeInteger:
    {
      const GGS_forLowerUpperBoundInstructionAST temp_17 = this ;
      GenericArray <FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (temp_17.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray18  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 110)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_structure:
    {
      GGS_propertyList extractedValue_4468__0 ;
      var_type_3547.readProperty_kind ().getAssociatedValuesFor_structure (extractedValue_4468__0) ;
      const GGS_forLowerUpperBoundInstructionAST temp_19 = this ;
      GenericArray <FixItDescription> fixItArray20 ;
      inCompiler->emitSemanticError (temp_19.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray20  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 112)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_syncTool:
    {
      const GGS_forLowerUpperBoundInstructionAST temp_21 = this ;
      GenericArray <FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray22  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 114)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_function:
    {
      GGS_mode extractedValue_4637__0 ;
      GGS_routineTypedSignature extractedValue_4637__1 ;
      GGS_unifiedTypeMapEntry extractedValue_4637__2 ;
      var_type_3547.readProperty_kind ().getAssociatedValuesFor_function (extractedValue_4637__0, extractedValue_4637__1, extractedValue_4637__2) ;
      const GGS_forLowerUpperBoundInstructionAST temp_23 = this ;
      GenericArray <FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray24  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 116)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_integer:
    {
      GGS_bigint extractedValue_4737_min_0 ;
      GGS_bigint extractedValue_4756_max_1 ;
      GGS_bool extractedValue_4766_unsigned_2 ;
      GGS_uint extractedValue_4788_bitCount_3 ;
      var_type_3547.readProperty_kind ().getAssociatedValuesFor_integer (extractedValue_4737_min_0, extractedValue_4756_max_1, extractedValue_4766_unsigned_2, extractedValue_4788_bitCount_3) ;
      GGS_objectIR var_lowerBoundExpressionResult_5236 ;
      const GGS_forLowerUpperBoundInstructionAST temp_25 = this ;
      callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_25.readProperty_mLowerBoundExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_type_3547, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lowerBoundExpressionResult_5236, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 119)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_lowerBoundExpressionResult_5236, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 132)) ;
      }
      GGS_objectIR var_upperBoundExpressionResult_5799 ;
      const GGS_forLowerUpperBoundInstructionAST temp_26 = this ;
      callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_26.readProperty_mUpperBoundExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_type_3547, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_upperBoundExpressionResult_5799, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 136)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_upperBoundExpressionResult_5799, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 149)) ;
      }
      const GGS_forLowerUpperBoundInstructionAST temp_27 = this ;
      GGS_objectIR var_lowerBound_5993 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_lowerBoundExpressionResult_5236, var_type_3547, temp_27.readProperty_mEndOf_5F_lowerBoundExpression_5F_instruction (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 154)) ;
      const GGS_forLowerUpperBoundInstructionAST temp_28 = this ;
      GGS_objectIR var_upperBound_6262 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_upperBoundExpressionResult_5799, var_type_3547, temp_28.readProperty_mEndOf_5F_upperBoundExpression_5F_instruction (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 161)) ;
      {
      extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 169)) ;
      }
      const GGS_forLowerUpperBoundInstructionAST temp_29 = this ;
      const GGS_forLowerUpperBoundInstructionAST temp_30 = this ;
      GGS_lstring var_enumeratedVarName_6627 = GGS_lstring::init_21__21_ (temp_29.readProperty_mVarName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 171)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 171)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 171)), temp_30.readProperty_mVarName ().readProperty_location (), inCompiler COMMA_HERE) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 172)) ;
      ioArgument_ioAllocaList.addAssignOperation (function_llvmNameForLocalVariable (var_enumeratedVarName_6627.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 173)), var_type_3547, GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 173)) ;
      GalgasBool test_31 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_31) {
        const GGS_forLowerUpperBoundInstructionAST temp_32 = this ;
        test_31 = GGS_bool (ComparisonKind::notEqual, temp_32.readProperty_mVarName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_31) {
          {
          const GGS_forLowerUpperBoundInstructionAST temp_33 = this ;
          extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, temp_33.readProperty_mVarName (), GGS_bool (false), var_type_3547, var_enumeratedVarName_6627, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 175)) ;
          }
        }
      }
      GGS_instructionListIR temp_34 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 178)) ;
      GGS_instructionListIR var_instructionGenerationList_7050 = temp_34 ;
      const GGS_forLowerUpperBoundInstructionAST temp_35 = this ;
      const GGS_forLowerUpperBoundInstructionAST temp_36 = this ;
      extensionMethod_analyzeBranchInstructionList (temp_35.readProperty_mDoInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_36.readProperty_mEndOf_5F_do_5F_instruction (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_7050, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 179)) ;
      {
      const GGS_forLowerUpperBoundInstructionAST temp_37 = this ;
      extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_37.readProperty_mEndOf_5F_do_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 191)) ;
      }
      const GGS_forLowerUpperBoundInstructionAST temp_38 = this ;
      ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_forLowerUpperBoundInstructionIR::init_21__21__21__21__21__21__21_ (var_enumeratedVarName_6627.readProperty_string (), var_type_3547, extractedValue_4766_unsigned_2, temp_38.readProperty_mEndOf_5F_do_5F_instruction (), var_lowerBound_5993, var_upperBound_6262, var_instructionGenerationList_7050, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 193)) ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@forLowerUpperBoundInstructionIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_forLowerUpperBoundInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                                       const GGS_generationContext constinArgument_inGenerationContext,
                                                                       GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forLowerUpperBoundInstructionIR temp_0 = this ;
  GGS_string var_llvmType_8796 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 229)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_1 = this ;
  GGS_string var_llvmVarName_8837 = function_llvmNameForLocalVariable (temp_1.readProperty_mVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 230)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_2 = this ;
  GGS_string var_testLabel_8899 = GGS_string ("for.").add_operation (temp_2.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 231)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 231)).add_operation (GGS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 231)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_3 = this ;
  GGS_string var_loopLabel_8968 = GGS_string ("for.").add_operation (temp_3.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 232)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 232)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 232)).add_operation (GGS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 232)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_4 = this ;
  GGS_string var_endLabel_9037 = GGS_string ("for.").add_operation (temp_4.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 233)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 233)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 233)).add_operation (GGS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 233)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_5 = this ;
  GGS_string var_testResult_9105 = GGS_string ("%for.").add_operation (temp_5.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 234)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 234)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 234)).add_operation (GGS_string (".test.result"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 234)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_6 = this ;
  GGS_string var_loadedVarName_9183 = GGS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (temp_6.readProperty_mVarName ().add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 235)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_7 = this ;
  GGS_string var_currentVarName_9264 = GGS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (temp_7.readProperty_mVarName ().add_operation (GGS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 236)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_8 = this ;
  GGS_string var_nextVarName_9347 = GGS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (temp_8.readProperty_mVarName ().add_operation (GGS_string (".next"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 237)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_9 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_llvmType_8796, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 239)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 239)).add_operation (extensionGetter_llvmName (temp_9.readProperty_mLowerExpressionResult (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 239)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 239)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 239)).add_operation (var_llvmType_8796, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 239)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 239)).add_operation (var_llvmVarName_8837, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 239)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 239)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 239)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_testLabel_8899, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 240)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 240)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 240)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_testLabel_8899.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 242)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 242)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_loadedVarName_9183, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 243)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 243)).add_operation (var_llvmType_8796, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 243)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 243)).add_operation (var_llvmType_8796, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 243)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 243)).add_operation (var_llvmVarName_8837, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 243)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 243)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 243)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_testResult_9105, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 244)).add_operation (GGS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 244)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_10 = this ;
  GGS_string temp_11 ;
  const GalgasBool test_12 = temp_10.readProperty_mUnsigned ().boolEnum () ;
  if (GalgasBool::boolTrue == test_12) {
    temp_11 = GGS_string ("ult") ;
  }else if (GalgasBool::boolFalse == test_12) {
    temp_11 = GGS_string ("slt") ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(temp_11, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 245)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_13 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ").add_operation (var_llvmType_8796, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 246)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 246)).add_operation (var_loadedVarName_9183, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 246)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 246)).add_operation (extensionGetter_llvmName (temp_13.readProperty_mUpperExpressionResult (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 246)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 246)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 246)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 246)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (var_testResult_9105, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 247)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 247)).add_operation (var_loopLabel_8968, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 247)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 247)).add_operation (var_endLabel_9037, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 247)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 247)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 247)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_loopLabel_8968.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 249)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 249)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_14 = this ;
  extensionMethod_instructionListLLVMCode (temp_14.readProperty_mInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 250)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_currentVarName_9264, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 251)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 251)).add_operation (var_llvmType_8796, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 251)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 251)).add_operation (var_llvmType_8796, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 251)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 251)).add_operation (var_llvmVarName_8837, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 251)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 251)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 251)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_nextVarName_9347, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 252)).add_operation (GGS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 252)).add_operation (var_llvmType_8796, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 252)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 252)).add_operation (var_currentVarName_9264, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 252)).add_operation (GGS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 252)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 252)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_llvmType_8796, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 253)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 253)).add_operation (var_nextVarName_9347, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 253)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 253)).add_operation (var_llvmType_8796, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 253)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 253)).add_operation (var_llvmVarName_8837, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 253)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 253)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_testLabel_8899, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 254)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 254)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 254)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_endLabel_9037.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 256)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 256)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@forLowerUpperBoundInstructionIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_forLowerUpperBoundInstructionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                           GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forLowerUpperBoundInstructionIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 265)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'boolTypeName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_boolTypeName (Compiler *
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("bool") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_boolTypeName = false ;
static GGS_string gOnceFunctionResult_boolTypeName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_boolTypeName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_boolTypeName) {
    gOnceFunctionResult_boolTypeName = onceFunction_boolTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_boolTypeName = true ;
  }
  return gOnceFunctionResult_boolTypeName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_boolTypeName (void) {
  gOnceFunctionResult_boolTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_boolTypeName (nullptr,
                                                        releaseOnceFunctionResult_boolTypeName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_boolTypeName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_boolTypeName (Compiler * inCompiler,
                                                          const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                          const GGS_location & /* inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  return function_boolTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_boolTypeName ("boolTypeName",
                                                              functionWithGenericHeader_boolTypeName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_boolTypeName) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@boolTypeAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_boolTypeAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  result_outLocation = GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas3", 17)) ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@boolTypeAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_boolTypeAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_nodeName_970 = function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 27)).getter_nowhere (SOURCE_FILE ("type-bool.galgas3", 27)) ;
  {
  const GGS_boolTypeAST temp_0 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_970, temp_0, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 28)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_970, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 29)).getter_nowhere (SOURCE_FILE ("type-bool.galgas3", 29)) COMMA_SOURCE_FILE ("type-bool.galgas3", 29)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@boolTypeAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_boolTypeAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 35)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@boolTypeAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_boolTypeAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                              GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                              GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                              GGS_routineListIR & ioArgument_ioRoutineListIR,
                                              GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                              GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                              GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                              GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_boolTypeName_2170 = function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 52)).getter_nowhere (SOURCE_FILE ("type-bool.galgas3", 52)) ;
  GGS_omnibusType var_boolType_2215 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 53)) ;
  GGS_omnibusType var_ctBoolType_2244 = function_compileTimeBoolType (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 54)) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_boolTypeName_2170, var_boolType_2215, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 56)) ;
  }
  GGS_lstring var_key_2404 = function_prefixOperatorMapKey (var_boolType_2215, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("type-bool.galgas3", 58)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas3", 58)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 58)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2404, var_boolType_2215, var_boolType_2215, GGS_boolNotOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 59)) ;
  }
  var_key_2404 = function_infixOperatorMapKey (var_boolType_2215, GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("type-bool.galgas3", 61)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas3", 61)), var_boolType_2215, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 61)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2404, var_boolType_2215, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("or"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 62)) ;
  }
  var_key_2404 = function_infixOperatorMapKey (var_ctBoolType_2244, GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("type-bool.galgas3", 63)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas3", 63)), var_boolType_2215, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 63)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2404, var_boolType_2215, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("or"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 64)) ;
  }
  var_key_2404 = function_infixOperatorMapKey (var_boolType_2215, GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("type-bool.galgas3", 65)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas3", 65)), var_ctBoolType_2244, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 65)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2404, var_boolType_2215, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("or"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 66)) ;
  }
  var_key_2404 = function_infixOperatorMapKey (var_boolType_2215, GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("type-bool.galgas3", 68)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas3", 68)), var_boolType_2215, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 68)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2404, var_boolType_2215, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("xor"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 69)) ;
  }
  var_key_2404 = function_infixOperatorMapKey (var_ctBoolType_2244, GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("type-bool.galgas3", 70)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas3", 70)), var_boolType_2215, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 70)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2404, var_boolType_2215, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("xor"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 71)) ;
  }
  var_key_2404 = function_infixOperatorMapKey (var_boolType_2215, GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("type-bool.galgas3", 72)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas3", 72)), var_ctBoolType_2244, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 72)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2404, var_boolType_2215, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("xor"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 73)) ;
  }
  var_key_2404 = function_infixOperatorMapKey (var_boolType_2215, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("type-bool.galgas3", 75)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas3", 75)), var_boolType_2215, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 75)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2404, var_boolType_2215, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("icmp eq"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 76)) ;
  }
  var_key_2404 = function_infixOperatorMapKey (var_ctBoolType_2244, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("type-bool.galgas3", 77)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas3", 77)), var_boolType_2215, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 77)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2404, var_boolType_2215, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("icmp eq"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 78)) ;
  }
  var_key_2404 = function_infixOperatorMapKey (var_boolType_2215, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("type-bool.galgas3", 79)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas3", 79)), var_ctBoolType_2244, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 79)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2404, var_boolType_2215, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("icmp eq"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 80)) ;
  }
  var_key_2404 = GGS_lstring::init_21__21_ (var_boolType_2215.readProperty_omnibusTypeDescriptionName (), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas3", 82)), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mImplicitConversionToBooleanMap.setter_insertKey (var_key_2404, GGS_boolImplicitConverterToBoolean::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 83)) ;
  }
  var_key_2404 = function_assignmentOperatorKey (var_boolType_2215, GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas3", 85)), var_boolType_2215, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 85)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_2404, GGS_simpleCopyAssignmentOperatorUsage::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 86)) ;
  }
  var_key_2404 = function_assignmentOperatorKey (var_boolType_2215, GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas3", 87)), var_ctBoolType_2244, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 87)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_2404, GGS_simpleCopyAssignmentOperatorUsage::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 88)) ;
  }
  GGS_string var_functionName_4791 = function_assignmentOperatorFuncName (var_boolType_2215, var_boolType_2215, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 90)) ;
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_simpleAssignmentCopyRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_functionName_4791.getter_nowhere (SOURCE_FILE ("type-bool.galgas3", 92)), GGS_bool (false), GGS_bool (false), var_boolType_2215, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-bool.galgas3", 91)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@boolImplicitConverterToBoolean generateConvertToBooleanCode'
//--------------------------------------------------------------------------------------------------

void cPtr_boolImplicitConverterToBoolean::method_generateConvertToBooleanCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                                               const GGS_location /* constinArgument_inErrorLocation */,
                                                                               GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                               GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                               GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                               GGS_implicitBooleanConversionResult & outArgument_outResult,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult = GGS_implicitBooleanConversionResult::class_func_llvmVariable (extensionGetter_llvmName (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 116))  COMMA_SOURCE_FILE ("type-bool.galgas3", 116)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@boolNotOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_boolNotOperator::method_generateCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                const GGS_location /* constinArgument_inOperatorLocation */,
                                                const GGS_omnibusType constinArgument_inResultType,
                                                const GGS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                const GGS_bool /* constinArgument_inSafeMode */,
                                                GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                GGS_objectIR & outArgument_outResultValue,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_receiverOperand_6653 = constinArgument_inReceiverOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_receiverOperand_6653, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 139)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas3", 140)) ;
  }
  GGS_string var_s_6853 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 141)).add_operation (GGS_string (" = xor i1 1, "), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 141)).add_operation (extensionGetter_llvmName (var_receiverOperand_6653, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 141)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 141)) ;
  {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 142)) ;
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_6853, temp_0, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas3", 142)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@controlRegisterGroupDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_controlRegisterGroupDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_controlRegisterGroupDeclarationAST temp_0 = this ;
  result_outRepresentation = function_registerGroupNameFromOmnibusName (temp_0.readProperty_mRegisterGroupList ().getter_mRegisterGroupNameAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 305)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 305)).readProperty_string () ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@controlRegisterGroupDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_controlRegisterGroupDeclarationAST::getter_locationForErrorSignaling (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_result ; // Returned variable
  const GGS_controlRegisterGroupDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mRegisterGroupList ().getter_mRegisterGroupNameAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 311)).readProperty_location () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@controlRegisterGroupDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_controlRegisterGroupDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_controlRegisterGroupDeclarationAST temp_0 = this ;
  GGS_lstring var_nodeName_12139 = function_registerGroupNameFromOmnibusName (temp_0.readProperty_mRegisterGroupList ().getter_mRegisterGroupNameAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 317)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 317)) ;
  {
  const GGS_controlRegisterGroupDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_12139, temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 319)) ;
  }
  const GGS_controlRegisterGroupDeclarationAST temp_2 = this ;
  UpEnumerator_controlRegisterDeclarationList enumerator_12345 (temp_2.readProperty_mRegisters ()) ;
  while (enumerator_12345.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12139, enumerator_12345.current (HERE).readProperty_mRegisterTypeName () COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 323)) ;
    }
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12139, function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 324)) COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 324)) ;
    }
    GGS_stringlist var_split_12630 = enumerator_12345.current (HERE).readProperty_mRegisterTypeName ().readProperty_string ().getter_componentsSeparatedByString (GGS_string ("u") COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 326)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      GGS_bool test_4 = GGS_bool (ComparisonKind::equal, var_split_12630.getter_count (SOURCE_FILE ("declaration-control-register.galgas3", 327)).objectCompare (GGS_uint (uint32_t (2U)))) ;
      if (GalgasBool::boolTrue == test_4.boolEnum ()) {
        test_4 = GGS_bool (ComparisonKind::equal, var_split_12630.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 327)).objectCompare (GGS_string::makeEmptyString ())) ;
      }
      GGS_bool test_5 = test_4 ;
      if (GalgasBool::boolTrue == test_5.boolEnum ()) {
        test_5 = var_split_12630.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 327)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("declaration-control-register.galgas3", 327)) ;
      }
      test_3 = test_5.boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_uint var_n_12824 = var_split_12630.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 328)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 328)) ;
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::greaterThan, var_n_12824.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GGS_lstring var_bitSizeTypeName_12907 = GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_n_12824.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 330)).getter_significantBitCount (SOURCE_FILE ("declaration-control-register.galgas3", 330)).getter_string (SOURCE_FILE ("declaration-control-register.galgas3", 330)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 330)), enumerator_12345.current (HERE).readProperty_mRegisterTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
            {
            ioArgument_ioGraph.setter_addEdge (var_nodeName_12139, var_bitSizeTypeName_12907 COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 331)) ;
            }
          }
        }
      }
    }
    UpEnumerator_controlRegisterBitSliceList enumerator_13133 (enumerator_12345.current (HERE).readProperty_mRegisterBitSliceList ()) ;
    while (enumerator_13133.hasCurrentObject ()) {
      switch (enumerator_13133.current_mRegisterBitSlice (HERE).enumValue ()) {
      case GGS_controlRegisterBitSlice::Enumeration::invalid:
        break ;
      case GGS_controlRegisterBitSlice::Enumeration::enum_unusedBits:
        break ;
      case GGS_controlRegisterBitSlice::Enumeration::enum_namedBit:
        {
          GGS_lstring extractedValue_13240__0 ;
          GGS_lbigint extractedValue_13251_count_1 ;
          enumerator_13133.current_mRegisterBitSlice (HERE).getAssociatedValuesFor_namedBit (extractedValue_13240__0, extractedValue_13251_count_1) ;
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::greaterOrEqual, extractedValue_13251_count_1.readProperty_bigint ().objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 339)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              {
              extensionSetter_noteUINTType (ioArgument_ioGraph, extractedValue_13251_count_1.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 340)), extractedValue_13251_count_1.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 340)) ;
              }
            }
          }
        }
        break ;
      }
      enumerator_13133.gotoNextObject () ;
    }
    GGS_lstring var_rootNode_13442 = GGS_lstring::init_21__21_ (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 345)), var_nodeName_12139.readProperty_location (), inCompiler COMMA_HERE) ;
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12139, var_rootNode_13442 COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 346)) ;
    }
    UpEnumerator_controlRegisterNameListAST enumerator_13652 (enumerator_12345.current (HERE).readProperty_mRegisterArrayList ()) ;
    while (enumerator_13652.hasCurrentObject ()) {
      switch (enumerator_13652.current (HERE).readProperty_mControlRegisterKind ().enumValue ()) {
      case GGS_controlRegisterKind::Enumeration::invalid:
        break ;
      case GGS_controlRegisterKind::Enumeration::enum_scalar:
        break ;
      case GGS_controlRegisterKind::Enumeration::enum_registerArray:
        {
          GGS_expressionAST extractedValue_13778_arraySize_0 ;
          GGS_location extractedValue_13788__1 ;
          GGS_expressionAST extractedValue_13805_arrayElementSize_2 ;
          GGS_location extractedValue_13822__3 ;
          enumerator_13652.current (HERE).readProperty_mControlRegisterKind ().getAssociatedValuesFor_registerArray (extractedValue_13778_arraySize_0, extractedValue_13788__1, extractedValue_13805_arrayElementSize_2, extractedValue_13822__3) ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_13778_arraySize_0.ptr (), var_nodeName_12139, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 352)) ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_13805_arrayElementSize_2.ptr (), var_nodeName_12139, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 353)) ;
        }
        break ;
      }
      enumerator_13652.gotoNextObject () ;
    }
    enumerator_12345.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'controlRegisterType?&context!type!bitCount'
//
//--------------------------------------------------------------------------------------------------

void routine_controlRegisterType_3F__26_context_21_type_21_bitCount (const GGS_lstring constinArgument_inRegisterTypeName,
                                                                     GGS_semanticContext & ioArgument_ioContext,
                                                                     GGS_omnibusType & outArgument_outRegisterType,
                                                                     GGS_uint & outArgument_outRegisterBitCount,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterType.drop () ; // Release 'out' argument
  outArgument_outRegisterBitCount.drop () ; // Release 'out' argument
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), constinArgument_inRegisterTypeName, outArgument_outRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 402)) ;
  switch (outArgument_outRegisterType.readProperty_kind ().enumValue ()) {
  case GGS_typeKind::Enumeration::invalid:
    break ;
  case GGS_typeKind::Enumeration::enum_integer:
    {
      GGS_bigint extractedValue_15972__0 ;
      GGS_bigint extractedValue_15974__1 ;
      GGS_bool extractedValue_15976__2 ;
      GGS_uint extractedValue_15978_bitCount_3 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_integer (extractedValue_15972__0, extractedValue_15974__1, extractedValue_15976__2, extractedValue_15978_bitCount_3) ;
      outArgument_outRegisterBitCount = extractedValue_15978_bitCount_3 ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_boolean:
  case GGS_typeKind::Enumeration::enum_void:
    {
      GenericArray <FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray0  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 407)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_enumeration:
    {
      GGS_uint extractedValue_16167__0 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_enumeration (extractedValue_16167__0) ;
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 409)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_literalString:
    {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 411)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_compileTimeBool:
    {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 413)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_compileTimeInteger:
    {
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 415)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_structure:
    {
      GGS_propertyList extractedValue_16666__0 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_structure (extractedValue_16666__0) ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 417)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_syncTool:
    {
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 419)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_opaque:
    {
      GGS_bigint extractedValue_16904__0 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_opaque (extractedValue_16904__0) ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 421)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_staticArrayType:
    {
      GGS_omnibusType extractedValue_17033__0 ;
      GGS_bigint extractedValue_17035__1 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_staticArrayType (extractedValue_17033__0, extractedValue_17035__1) ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray8  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 423)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_dynamicArrayType:
    {
      GGS_omnibusType extractedValue_17165__0 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_dynamicArrayType (extractedValue_17165__0) ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray9  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 425)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_function:
    {
      GGS_mode extractedValue_17288__0 ;
      GGS_routineTypedSignature extractedValue_17288__1 ;
      GGS_unifiedTypeMapEntry extractedValue_17288__2 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_function (extractedValue_17288__0, extractedValue_17288__1, extractedValue_17288__2) ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray10  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 427)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_generic:
    {
      GGS_genericFormalParameterList extractedValue_17410__0 ;
      GGS_ctExpressionAST extractedValue_17410__1 ;
      GGS_llvmStringDefinition extractedValue_17410__2 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_generic (extractedValue_17410__0, extractedValue_17410__1, extractedValue_17410__2) ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray11  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 429)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_llvmType:
    {
      GGS_bigint extractedValue_17532__0 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_llvmType (extractedValue_17532__0) ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray12  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 431)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildControlRegisterSliceMap??&context&type?bitCount!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildControlRegisterSliceMap_3F__3F__26_context_26_type_3F_bitCount_21__21__21_ (const GGS_controlRegisterBitSliceList constinArgument_inRegisterBitSliceList,
                                                                                              const GGS_location constinArgument_inEndOfBitSliceLocation,
                                                                                              GGS_semanticContext & /* ioArgument_ioContext */,
                                                                                              GGS_omnibusType & ioArgument_ioRegisterType,
                                                                                              const GGS_uint constinArgument_inRegisterBitCount,
                                                                                              GGS_controlRegisterFieldMap & outArgument_outRegisterFieldMap,
                                                                                              GGS_sliceMap & outArgument_outRegisterBitSliceMap,
                                                                                              GGS_controlRegisterFieldList & outArgument_outControlRegisterFieldList,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterFieldMap.drop () ; // Release 'out' argument
  outArgument_outRegisterBitSliceMap.drop () ; // Release 'out' argument
  outArgument_outControlRegisterFieldList.drop () ; // Release 'out' argument
  outArgument_outRegisterFieldMap = GGS_controlRegisterFieldMap::init (inCompiler COMMA_HERE) ;
  outArgument_outRegisterBitSliceMap = GGS_sliceMap::init (inCompiler COMMA_HERE) ;
  GGS_controlRegisterFieldList temp_0 = GGS_controlRegisterFieldList::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 450)) ;
  outArgument_outControlRegisterFieldList = temp_0 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inRegisterBitSliceList.getter_count (SOURCE_FILE ("declaration-control-register.galgas3", 451)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_uint var_shiftCount_18378 = GGS_uint (uint32_t (0U)) ;
      DownEnumerator_controlRegisterBitSliceList enumerator_18404 (constinArgument_inRegisterBitSliceList) ;
      while (enumerator_18404.hasCurrentObject ()) {
        switch (enumerator_18404.current_mRegisterBitSlice (HERE).enumValue ()) {
        case GGS_controlRegisterBitSlice::Enumeration::invalid:
          break ;
        case GGS_controlRegisterBitSlice::Enumeration::enum_unusedBits:
          {
            GGS_lbigint extractedValue_18515_count_0 ;
            enumerator_18404.current_mRegisterBitSlice (HERE).getAssociatedValuesFor_unusedBits (extractedValue_18515_count_0) ;
            var_shiftCount_18378 = var_shiftCount_18378.add_operation (extractedValue_18515_count_0.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 456)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 456)) ;
            outArgument_outControlRegisterFieldList.addAssignOperation (extractedValue_18515_count_0.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 457)), GGS_string ("—")  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 457)) ;
          }
          break ;
        case GGS_controlRegisterBitSlice::Enumeration::enum_namedBit:
          {
            GGS_lstring extractedValue_18670_name_0 ;
            GGS_lbigint extractedValue_18684_count_1 ;
            enumerator_18404.current_mRegisterBitSlice (HERE).getAssociatedValuesFor_namedBit (extractedValue_18670_name_0, extractedValue_18684_count_1) ;
            GGS_uint var_bitCount_18705 = extractedValue_18684_count_1.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 459)) ;
            outArgument_outControlRegisterFieldList.addAssignOperation (var_bitCount_18705, extractedValue_18670_name_0.readProperty_string ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 460)) ;
            {
            outArgument_outRegisterFieldMap.setter_insertKey (extractedValue_18670_name_0, var_shiftCount_18378, var_bitCount_18705, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 461)) ;
            }
            GGS_bigint var_mask_18944 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 467)).left_shift_operation (var_bitCount_18705, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 467)).substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 467)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 467)).left_shift_operation (var_shiftCount_18378, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 467)) ;
            {
            outArgument_outRegisterBitSliceMap.setter_insertKey (extractedValue_18670_name_0, GGS_llvmBinaryOperation::class_func_and (SOURCE_FILE ("declaration-control-register.galgas3", 470)), var_mask_18944, ioArgument_ioRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 468)) ;
            }
            var_shiftCount_18378 = var_shiftCount_18378.add_operation (var_bitCount_18705, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 474)) ;
          }
          break ;
        }
        enumerator_18404.gotoNextObject () ;
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, constinArgument_inRegisterBitCount.objectCompare (var_shiftCount_18378)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfBitSliceLocation, GGS_string ("total bit slice count is ").add_operation (var_shiftCount_18378.getter_string (SOURCE_FILE ("declaration-control-register.galgas3", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 480)).add_operation (GGS_string (" (should be "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 480)).add_operation (constinArgument_inRegisterBitCount.getter_string (SOURCE_FILE ("declaration-control-register.galgas3", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 480)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 480)), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 479)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@controlRegisterGroupDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_controlRegisterGroupDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                                     GGS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                     GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                     GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                     GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                     GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                     GGS_controlRegisterUserAccesMapAST & ioArgument_ioControlRegisterUserAccesMapAST,
                                                                     GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterMap var_regMap_24001 = GGS_controlRegisterMap::init (inCompiler COMMA_HERE) ;
  const GGS_controlRegisterGroupDeclarationAST temp_0 = this ;
  UpEnumerator_controlRegisterDeclarationList enumerator_24032 (temp_0.readProperty_mRegisters ()) ;
  while (enumerator_24032.hasCurrentObject ()) {
    extensionMethod_buildControlRegisterMapForGroup (enumerator_24032.current (HERE), ioArgument_ioContext, var_regMap_24001, ioArgument_ioStaticEntityMap, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 598)) ;
    enumerator_24032.gotoNextObject () ;
  }
  const GGS_controlRegisterGroupDeclarationAST temp_1 = this ;
  UpEnumerator_registerGroupListAST enumerator_24202 (temp_1.readProperty_mRegisterGroupList ()) ;
  while (enumerator_24202.hasCurrentObject ()) {
    GGS_controlRegisterMap var_registerMap_24252 = var_regMap_24001 ;
    UpEnumerator_controlRegisterMap enumerator_24331 (var_regMap_24001) ;
    while (enumerator_24331.hasCurrentObject ()) {
      GGS_string var_key_24351 = GGS_string ("#").add_operation (enumerator_24202.current (HERE).readProperty_mRegisterGroupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 608)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 608)).add_operation (enumerator_24331.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 608)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = ioArgument_ioControlRegisterUserAccesMapAST.getter_hasKey (var_key_24351 COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 609)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          var_registerMap_24252.setter_setMUserAccessForKey (GGS_bool (true), enumerator_24331.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 610)) ;
          }
          {
          ioArgument_ioControlRegisterUserAccesMapAST.setter_removeKey (var_key_24351.getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas3", 611)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 611)) ;
          }
        }
      }
      enumerator_24331.gotoNextObject () ;
    }
    switch (enumerator_24202.current (HERE).readProperty_mControlRegisterGroupKind ().enumValue ()) {
    case GGS_controlRegisterGroupKindAST::Enumeration::invalid:
      break ;
    case GGS_controlRegisterGroupKindAST::Enumeration::enum_single:
      {
        GGS_lbigint extractedValue_24693_baseAddress_0 ;
        enumerator_24202.current (HERE).readProperty_mControlRegisterGroupKind ().getAssociatedValuesFor_single (extractedValue_24693_baseAddress_0) ;
        GGS_registerGroupKind var_groupKind_24718 = GGS_registerGroupKind::class_func_single (extractedValue_24693_baseAddress_0.readProperty_bigint ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 617)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_24202.current (HERE).readProperty_mRegisterGroupName (), var_groupKind_24718, var_registerMap_24252, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 618)) ;
        }
      }
      break ;
    case GGS_controlRegisterGroupKindAST::Enumeration::enum_groupArray:
      {
        GGS_expressionAST extractedValue_24909_groupSizeExpression_0 ;
        GGS_location extractedValue_24929_groupSizeExpressionLocation_1 ;
        GGS_lbigintlist extractedValue_24957_baseAddresses_2 ;
        enumerator_24202.current (HERE).readProperty_mControlRegisterGroupKind ().getAssociatedValuesFor_groupArray (extractedValue_24909_groupSizeExpression_0, extractedValue_24929_groupSizeExpressionLocation_1, extractedValue_24957_baseAddresses_2) ;
        GGS_objectIR var_groupArraySizeExpressionResult_25247 ;
        {
        routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_24909_groupSizeExpression_0, extractedValue_24929_groupSizeExpressionLocation_1, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas3", 625)), var_groupArraySizeExpressionResult_25247, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 620)) ;
        }
        GGS_bigint var_groupSize_25304 ;
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = var_groupArraySizeExpressionResult_25247.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas3", 629)).operator_not (SOURCE_FILE ("declaration-control-register.galgas3", 629)).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_24929_groupSizeExpressionLocation_1, GGS_string ("control register group size is not a static integer expression"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 630)) ;
            var_groupSize_25304.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_3) {
          GGS_omnibusType joker_25600_1 ; // Joker input parameter
          var_groupArraySizeExpressionResult_25247.method_extractLiteralInteger (joker_25600_1, var_groupSize_25304, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 634)) ;
        }
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::notEqual, var_groupSize_25304.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 636)).objectCompare (extractedValue_24957_baseAddresses_2.getter_count (SOURCE_FILE ("declaration-control-register.galgas3", 636)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            GenericArray <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_24929_groupSizeExpressionLocation_1, GGS_string ("the group size is ").add_operation (var_groupSize_25304.getter_string (SOURCE_FILE ("declaration-control-register.galgas3", 638)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 638)).add_operation (GGS_string (", but "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 638)).add_operation (extractedValue_24957_baseAddresses_2.getter_count (SOURCE_FILE ("declaration-control-register.galgas3", 638)).getter_string (SOURCE_FILE ("declaration-control-register.galgas3", 638)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 638)).add_operation (GGS_string (" base addresses are defined"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 638)), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 637)) ;
          }
        }
        GGS_registerGroupKind var_groupKind_25856 = GGS_registerGroupKind::class_func_arrayGroup (extractedValue_24957_baseAddresses_2  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 640)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_24202.current (HERE).readProperty_mRegisterGroupName (), var_groupKind_25856, var_registerMap_24252, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 641)) ;
        }
        ioArgument_ioDecoratedDeclarationList.addAssignOperation (GGS_decoratedControlRegisterArrayGroupDeclaration::init_21__21_ (enumerator_24202.current (HERE).readProperty_mRegisterGroupName (), extractedValue_24957_baseAddresses_2, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 642)) ;
      }
      break ;
    }
    enumerator_24202.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@decoratedControlRegisterArrayGroupDeclaration semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedControlRegisterArrayGroupDeclaration::method_semanticAnalysis (const GGS_semanticContext /* constinArgument_inContext */,
                                                                                  GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                  GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_decoratedControlRegisterArrayGroupDeclaration temp_0 = this ;
  const GGS_decoratedControlRegisterArrayGroupDeclaration temp_1 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mControlRegisterGroupArrayList.addAssignOperation (temp_0.readProperty_mGroupName (), temp_1.readProperty_mBaseAddresses ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 666)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildControlRegisterMapHTMLFile??sourceFile'
//
//--------------------------------------------------------------------------------------------------

void routine_buildControlRegisterMapHTMLFile_3F__3F_sourceFile (const GGS_controlRegisterGroupMap constinArgument_inControlRegisterGroupMap,
                                                                const GGS_lstring constinArgument_inSourceFile,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_byAddressFilePath_29098 = constinArgument_inSourceFile.readProperty_string ().add_operation (GGS_string (".control-registers-sorted-by-address.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 727)) ;
  GGS_string var_byNameFilePath_29190 = constinArgument_inSourceFile.readProperty_string ().add_operation (GGS_string (".control-registers-sorted-by-name.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 728)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_omnibus_5F_options_emitControlRegisterHTMLDumpFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_controlRegisterByAddress temp_1 = GGS_controlRegisterByAddress::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 730)) ;
      GGS_controlRegisterByAddress var_controlRegisterByAddress_29377 = temp_1 ;
      GGS_controlRegisterByName temp_2 = GGS_controlRegisterByName::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 731)) ;
      GGS_controlRegisterByName var_controlRegisterByName_29439 = temp_2 ;
      GGS_uint var_controlRegisterCount_29481 = GGS_uint (uint32_t (0U)) ;
      UpEnumerator_controlRegisterGroupMap enumerator_29543 (constinArgument_inControlRegisterGroupMap) ;
      while (enumerator_29543.hasCurrentObject ()) {
        switch (enumerator_29543.current_mGroupKind (HERE).enumValue ()) {
        case GGS_registerGroupKind::Enumeration::invalid:
          break ;
        case GGS_registerGroupKind::Enumeration::enum_single:
          {
            GGS_bigint extractedValue_29651_groupBaseAddress_0 ;
            enumerator_29543.current_mGroupKind (HERE).getAssociatedValuesFor_single (extractedValue_29651_groupBaseAddress_0) ;
            {
            routine_buildControlRegisterMaps_3F__3F__3F__26__26__26_ (enumerator_29543.current_mControlRegisterMap (HERE), extractedValue_29651_groupBaseAddress_0, enumerator_29543.current_lkey (HERE).readProperty_string (), var_controlRegisterByAddress_29377, var_controlRegisterByName_29439, var_controlRegisterCount_29481, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 736)) ;
            }
          }
          break ;
        case GGS_registerGroupKind::Enumeration::enum_arrayGroup:
          {
            GGS_lbigintlist extractedValue_29950_baseAddresses_0 ;
            enumerator_29543.current_mGroupKind (HERE).getAssociatedValuesFor_arrayGroup (extractedValue_29950_baseAddresses_0) ;
            UpEnumerator_lbigintlist enumerator_29980 (extractedValue_29950_baseAddresses_0) ;
            GGS_uint index_29975 (uint32_t (0)) ;
            while (enumerator_29980.hasCurrentObject ()) {
              {
              routine_buildControlRegisterMaps_3F__3F__3F__26__26__26_ (enumerator_29543.current_mControlRegisterMap (HERE), enumerator_29980.current_mValue (HERE).readProperty_bigint (), enumerator_29543.current_lkey (HERE).readProperty_string ().add_operation (GGS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 749)).add_operation (index_29975.getter_string (SOURCE_FILE ("declaration-control-register.galgas3", 749)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 749)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 749)), var_controlRegisterByAddress_29377, var_controlRegisterByName_29439, var_controlRegisterCount_29481, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 746)) ;
              }
              enumerator_29980.gotoNextObject () ;
              index_29975.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 745)) ;
            }
          }
          break ;
        }
        enumerator_29543.gotoNextObject () ;
      }
      GGS_string var_typeDumpString_30330 = GGS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByAddress (inCompiler, constinArgument_inSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas3", 758)), var_controlRegisterCount_29481, var_controlRegisterByAddress_29377 COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 757))) ;
      GGS_bool joker_30595 ; // Joker input parameter
      var_typeDumpString_30330.method_writeToFileWhenDifferentContents (var_byAddressFilePath_29098, joker_30595, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 762)) ;
      var_typeDumpString_30330 = GGS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByName (inCompiler, constinArgument_inSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas3", 764)), var_controlRegisterCount_29481, var_controlRegisterByName_29439 COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 763))) ;
      GGS_bool joker_30859 ; // Joker input parameter
      var_typeDumpString_30330.method_writeToFileWhenDifferentContents (var_byNameFilePath_29190, joker_30859, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 768)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    GGS_string::class_method_deleteFileIfExists (var_byAddressFilePath_29098, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 770)) ;
    }
    {
    GGS_string::class_method_deleteFileIfExists (var_byNameFilePath_29190, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 771)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildControlRegisterMaps???&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildControlRegisterMaps_3F__3F__3F__26__26__26_ (const GGS_controlRegisterMap constinArgument_inControlRegisterMap,
                                                               const GGS_bigint constinArgument_inGroupBaseAddress,
                                                               const GGS_string constinArgument_inGroupName,
                                                               GGS_controlRegisterByAddress & ioArgument_ioControlRegisterByAddress,
                                                               GGS_controlRegisterByName & ioArgument_ioControlRegisterByName,
                                                               GGS_uint & ioArgument_ioControlRegisterCount,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_controlRegisterMap enumerator_31513 (constinArgument_inControlRegisterMap) ;
  while (enumerator_31513.hasCurrentObject ()) {
    GGS_bigint var_registerAddress_31571 = constinArgument_inGroupBaseAddress.add_operation (enumerator_31513.current_mAddressOffset (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 786)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, enumerator_31513.current_mArraySize (HERE).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 788)) ;
        GGS_string var_registerName_31729 = constinArgument_inGroupName.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 789)).add_operation (enumerator_31513.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 789)) ;
        GGS_string var_s_31783 = GGS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_31729, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 790)).add_operation (GGS_string ("</td><td class=\"type\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 791)).add_operation (enumerator_31513.current_mType (HERE).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 792)).add_operation (GGS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 792)).add_operation (var_registerAddress_31571.getter_hexStringSeparatedBy (GGS_char (utf32 (95)), GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 793)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 792)).add_operation (GGS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 793)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::greaterThan, enumerator_31513.current_mControlRegisterFieldList (HERE).getter_count (SOURCE_FILE ("declaration-control-register.galgas3", 794)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            var_s_31783.plusAssignOperation(GGS_string ("<table class=\"fields\">").add_operation (GGS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 795)).add_operation (function_fieldIndexColumns (enumerator_31513.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 796)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 796)).add_operation (GGS_string ("</tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 796)).add_operation (GGS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 796)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 795)) ;
            DownEnumerator_controlRegisterFieldList enumerator_32255 (enumerator_31513.current_mControlRegisterFieldList (HERE)) ;
            while (enumerator_32255.hasCurrentObject ()) {
              var_s_31783.plusAssignOperation(GGS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_32255.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas3", 799)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 799)).add_operation (GGS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 799)).add_operation (enumerator_32255.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 799)).add_operation (GGS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 799)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 799)) ;
              enumerator_32255.gotoNextObject () ;
            }
            var_s_31783.plusAssignOperation(GGS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 801)) ;
          }
        }
        var_s_31783.plusAssignOperation(GGS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 803)) ;
        ioArgument_ioControlRegisterByAddress.addAssignOperation (var_registerAddress_31571, var_s_31783  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 804)) ;
        ioArgument_ioControlRegisterByName.addAssignOperation (var_registerAddress_31571, var_s_31783, var_registerName_31729  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 805)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (enumerator_31513.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 807)) ;
      UpEnumerator_uintlist enumerator_32698 (function_arrayIndexListFor (enumerator_31513.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 808))) ;
      while (enumerator_32698.hasCurrentObject ()) {
        GGS_bigint var_address_32765 = var_registerAddress_31571.add_operation (enumerator_32698.current_mValue (HERE).multiply_operation (enumerator_31513.current_mElementArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 809)).getter_bigint (SOURCE_FILE ("declaration-control-register.galgas3", 809)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 809)) ;
        GGS_string var_registerName_32836 = constinArgument_inGroupName.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 810)).add_operation (enumerator_31513.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 810)).add_operation (GGS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 810)).add_operation (enumerator_32698.current_mValue (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas3", 810)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 810)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 810)) ;
        GGS_string var_s_32920 = GGS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_32836, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 811)).add_operation (GGS_string ("</td><td class=\"type\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 812)).add_operation (enumerator_31513.current_mType (HERE).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 813)).add_operation (GGS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 813)).add_operation (var_address_32765.getter_hexStringSeparatedBy (GGS_char (utf32 (95)), GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 814)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 813)).add_operation (GGS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 814)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::greaterThan, enumerator_31513.current_mControlRegisterFieldList (HERE).getter_count (SOURCE_FILE ("declaration-control-register.galgas3", 816)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            var_s_32920.plusAssignOperation(GGS_string ("<table class=\"fields\">").add_operation (GGS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 817)).add_operation (function_fieldIndexColumns (enumerator_31513.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 818)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 818)).add_operation (GGS_string ("</tr><tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 818)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 817)) ;
            DownEnumerator_controlRegisterFieldList enumerator_33391 (enumerator_31513.current_mControlRegisterFieldList (HERE)) ;
            while (enumerator_33391.hasCurrentObject ()) {
              var_s_32920.plusAssignOperation(GGS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_33391.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas3", 820)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 820)).add_operation (GGS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 820)).add_operation (enumerator_33391.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 820)).add_operation (GGS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 820)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 820)) ;
              enumerator_33391.gotoNextObject () ;
            }
            var_s_32920.plusAssignOperation(GGS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 822)) ;
          }
        }
        var_s_32920.plusAssignOperation(GGS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 824)) ;
        ioArgument_ioControlRegisterByAddress.addAssignOperation (var_registerAddress_31571, var_s_32920  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 825)) ;
        ioArgument_ioControlRegisterByName.addAssignOperation (var_registerAddress_31571, var_s_32920, var_registerName_32836  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 826)) ;
        enumerator_32698.gotoNextObject () ;
      }
    }
    enumerator_31513.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'controlRegisterDumpGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_controlRegisterDumpGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_controlRegisterDumpGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_controlRegisterDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_controlRegisterDumpGenerationTemplate_0,
  0,
  gWrapperAllDirectories_controlRegisterDumpGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'controlRegisterDumpGenerationTemplate dumpByName'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByName (Compiler * /* inCompiler */,
                                                                                 const GGS_string & in_PROJECT_5F_NAME,
                                                                                 const GGS_uint & in_CONTROL_5F_REGISTER_5F_COUNT,
                                                                                 const GGS_controlRegisterByName & in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n<html>\n<head>\n<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n<title>Control Registers of ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (", sorted by name</title>\n<style type=\"text/css\">body {\n  font-size: small ;\n}\n\nh1 {\n  text-align: center ;\n}\n\n.selecteur {\n  color:green ;\n}\n\na.header_link {\n  background-color: #FFFFCC ;\n}\n\na:visited, a:link, a:active{\n  color: blue ;\n  text-decoration: underline ;\n}\n\na:hover {\n  color:green ;\n  background-color: #FFFF00 ;\n  text-decoration: none ;\n}\n\ntable.result {\n  border: 1px solid #666666 ;\n}\n\ntable.fields {\n  border-collapse: collapse ;\n  border-spacing: 1px 1px;\n}\n\ntd.fields {\n  border: 1px solid #333333 ;\n  text-align: center ;\n  padding : 4px ;\n}\n\ntd.result_title {\n  font-weight: bold ;\n  text-align: center ;\n  background-color: yellow ;\n}\n\ntd.address {\n  font-family: Courier ;\n  padding : 4px ;\n}\n\ntd.name {\n  font-family: Courier ;\n  padding : 4px ;\n}\n\ntd.type {\n  font-family: Courier ;\n  padding : 4px ;\n}\n\ntr.result_line {\n  background-color: #EEEEEE ;\n}\n\n</style>\n</head>\n<body>\n<div>\n<h1>Control Registers of ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (", sorted by name</h1>\n<p>This document lists all ") ;
  result.appendString (in_CONTROL_5F_REGISTER_5F_COUNT.getter_string (SOURCE_FILE ("controlRegisterByNameDump.html.galgasTemplate", 78)).stringValue ()) ;
  result.appendString (" defined control registers, sorted by name.</p>\n<table class=\"result\">\n<tr><td class=\"result_title\">Control Register Name</td><td class=\"result_title\">OMNIBUS Type</td><td class=\"result_title\">Address</td><td class=\"result_title\">Value</td></tr>\n") ;
  GGS_uint index_1560_ (0) ;
  if (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME.isValid ()) {
    UpEnumerator_controlRegisterByName enumerator_1560 (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME) ;
    while (enumerator_1560.hasCurrentObject ()) {
      result.appendString (enumerator_1560.current_mHTML (HERE).stringValue ()) ;
      enumerator_1560.gotoNextObject () ;
      index_1560_.increment () ;
    }
  }
  result.appendString ("\n</table>\n</div>\n</body>\n</html>\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'controlRegisterDumpGenerationTemplate dumpByAddress'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByAddress (Compiler * /* inCompiler */,
                                                                                    const GGS_string & in_PROJECT_5F_NAME,
                                                                                    const GGS_uint & in_CONTROL_5F_REGISTER_5F_COUNT,
                                                                                    const GGS_controlRegisterByAddress & in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n<html>\n<head>\n<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n<title>Control Registers of ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (", sorted by address</title>\n<style type=\"text/css\">body {\n  font-size: small ;\n}\n\nh1 {\n  text-align: center ;\n}\n\n.selecteur {\n  color:green ;\n}\n\na.header_link {\n  background-color: #FFFFCC ;\n}\n\na:visited, a:link, a:active{\n  color: blue ;\n  text-decoration: underline ;\n}\n\na:hover {\n  color:green ;\n  background-color: #FFFF00 ;\n  text-decoration: none ;\n}\n\ntable.result {\n  border: 1px solid #666666 ;\n}\n\ntable.fields {\n  border-collapse: collapse ;\n  border-spacing: 1px 1px;\n}\n\ntd.fields {\n  border: 1px solid #333333 ;\n  text-align: center ;\n  padding : 4px ;\n}\n\ntd.result_title {\n  font-weight: bold ;\n  text-align: center ;\n  background-color: yellow ;\n}\n\ntd.address {\n  font-family: Courier ;\n  padding : 4px ;\n}\n\ntd.name {\n  font-family: Courier ;\n  padding : 4px ;\n}\n\ntd.type {\n  font-family: Courier ;\n  padding : 4px ;\n}\n\ntr.result_line {\n  background-color: #EEEEEE ;\n}\n\n</style>\n</head>\n<body>\n<div>\n<h1>Control Registers of ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (", sorted by address</h1>\n<p>This document lists all ") ;
  result.appendString (in_CONTROL_5F_REGISTER_5F_COUNT.getter_string (SOURCE_FILE ("controlRegisterByAddressDump.html.galgasTemplate", 78)).stringValue ()) ;
  result.appendString (" defined control registers, sorted by address.</p>\n<table class=\"result\">\n<tr><td class=\"result_title\">Control Register Name</td><td class=\"result_title\">OMNIBUS Type</td><td class=\"result_title\">Address</td><td class=\"result_title\">Value</td></tr>\n") ;
  GGS_uint index_1566_ (0) ;
  if (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS.isValid ()) {
    UpEnumerator_controlRegisterByAddress enumerator_1566 (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS) ;
    while (enumerator_1566.hasCurrentObject ()) {
      result.appendString (enumerator_1566.current_mHTML (HERE).stringValue ()) ;
      enumerator_1566.gotoNextObject () ;
      index_1566_.increment () ;
    }
  }
  result.appendString ("\n</table>\n</div>\n</body>\n</html>\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'fieldIndexColumns'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_fieldIndexColumns (const GGS_uint & constinArgument_inBitCount,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  DownEnumerator_range enumerator_34606 (GGS_range (GGS_uint (uint32_t (0U)), constinArgument_inBitCount.substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 852)))) ;
  while (enumerator_34606.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("<td class=\"fields\">").add_operation (enumerator_34606.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas3", 853)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 853)).add_operation (GGS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 853)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 853)) ;
    enumerator_34606.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_fieldIndexColumns [2] = {
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_fieldIndexColumns (Compiler * inCompiler,
                                                               const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  const GGS_uint operand0 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  return function_fieldIndexColumns (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_fieldIndexColumns ("fieldIndexColumns",
                                                                   functionWithGenericHeader_fieldIndexColumns,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   1,
                                                                   functionArgs_fieldIndexColumns) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'arrayIndexListFor'
//
//--------------------------------------------------------------------------------------------------

GGS_uintlist function_arrayIndexListFor (const GGS_uint & constinArgument_inSize,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uintlist result_result ; // Returned variable
  GGS_uintlist temp_0 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 860)) ;
  result_result = temp_0 ;
  UpEnumerator_range enumerator_34897 (GGS_range (GGS_uint (uint32_t (0U)), constinArgument_inSize.substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 861)))) ;
  while (enumerator_34897.hasCurrentObject ()) {
    result_result.addAssignOperation (enumerator_34897.current (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 862)) ;
    enumerator_34897.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_arrayIndexListFor [2] = {
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_arrayIndexListFor (Compiler * inCompiler,
                                                               const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  const GGS_uint operand0 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  return function_arrayIndexListFor (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_arrayIndexListFor ("arrayIndexListFor",
                                                                   functionWithGenericHeader_arrayIndexListFor,
                                                                   & kTypeDescriptor_GALGAS_uintlist,
                                                                   1,
                                                                   functionArgs_arrayIndexListFor) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@varInstructionWithAssignmentAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_varInstructionWithAssignmentAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_varInstructionWithAssignmentAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_varInstructionWithAssignmentAST temp_2 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_2.readProperty_mOptionalTypeName () COMMA_SOURCE_FILE ("instruction-var.galgas3", 73)) ;
      }
    }
  }
  const GGS_varInstructionWithAssignmentAST temp_3 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_3.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 75)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@varDeclarationInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_varDeclarationInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_varDeclarationInstructionAST temp_0 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("instruction-var.galgas3", 81)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@varInstructionWithAssignmentAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_varInstructionWithAssignmentAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                               const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                               const GGS_semanticContext constinArgument_inContext,
                                                                               const GGS_mode constinArgument_inMode,
                                                                               GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                               GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                               GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                               GGS_allocaList & ioArgument_ioAllocaList,
                                                                               GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_varInstructionWithAssignmentAST temp_0 = this ;
  GGS_omnibusType temp_1 ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, temp_0.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 100)) ;
  }else if (GalgasBool::boolFalse == test_2) {
    const GGS_varInstructionWithAssignmentAST temp_3 = this ;
    temp_1 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_3.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 101)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 101)) ;
  }
  GGS_omnibusType var_targetType_3705 = temp_1 ;
  GGS_objectIR var_sourcePossibleReference_4275 ;
  const GGS_varInstructionWithAssignmentAST temp_4 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_4.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_targetType_3705, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_4275, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 104)) ;
  const GGS_varInstructionWithAssignmentAST temp_5 = this ;
  GGS_objectIR var_result_4309 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_sourcePossibleReference_4275, var_targetType_3705, temp_5.readProperty_mVarName ().readProperty_location (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 117)) ;
  const GGS_varInstructionWithAssignmentAST temp_6 = this ;
  const GGS_varInstructionWithAssignmentAST temp_7 = this ;
  GGS_lstring var_omnibusLocalVariableName_4570 = GGS_lstring::init_21__21_ (temp_6.readProperty_mVarName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 125)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-var.galgas3", 125)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 125)), temp_7.readProperty_mVarName ().readProperty_location (), inCompiler COMMA_HERE) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas3", 126)) ;
  {
  const GGS_varInstructionWithAssignmentAST temp_8 = this ;
  extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, temp_8.readProperty_mVarName (), extensionGetter_type (var_result_4309, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 127)), var_omnibusLocalVariableName_4570, GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("instruction-var.galgas3", 127)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 127)) ;
  }
  ioArgument_ioAllocaList.addAssignOperation (function_llvmNameForLocalVariable (var_omnibusLocalVariableName_4570.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 129)), extensionGetter_type (var_result_4309, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 129)), GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-var.galgas3", 129)) ;
  {
  const GGS_varInstructionWithAssignmentAST temp_9 = this ;
  extensionSetter_appendAssignmentIR (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioAllocaList, extensionGetter_type (var_result_4309, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 135)), function_llvmNameForLocalVariable (var_omnibusLocalVariableName_4570.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 136)), var_sourcePossibleReference_4275, temp_9.readProperty_mVarName ().readProperty_location (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 131)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@varDeclarationInstructionAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_varDeclarationInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType /* constinArgument_inSelfType */,
                                                                            const GGS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                            const GGS_semanticContext constinArgument_inContext,
                                                                            const GGS_mode /* constinArgument_inMode */,
                                                                            GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                            GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                            GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                            GGS_allocaList & ioArgument_ioAllocaList,
                                                                            GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_varDeclarationInstructionAST temp_0 = this ;
  GGS_omnibusType var_targetType_5925 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 156)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 156)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_targetType_5925.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 158)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_varDeclarationInstructionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mVarName ().readProperty_location (), GGS_string ("$").add_operation (var_targetType_5925.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 159)).add_operation (GGS_string (" type is a compile time type, and is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 159)), fixItArray3  COMMA_SOURCE_FILE ("instruction-var.galgas3", 159)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_targetType_5925.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 160)).operator_not (SOURCE_FILE ("instruction-var.galgas3", 160)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_varDeclarationInstructionAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mVarName ().readProperty_location (), GGS_string ("$").add_operation (var_targetType_5925.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 161)).add_operation (GGS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 161)), fixItArray6  COMMA_SOURCE_FILE ("instruction-var.galgas3", 161)) ;
      }
    }
  }
  const GGS_varDeclarationInstructionAST temp_7 = this ;
  const GGS_varDeclarationInstructionAST temp_8 = this ;
  GGS_lstring var_omnibusName_6349 = GGS_lstring::init_21__21_ (temp_7.readProperty_mVarName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 164)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-var.galgas3", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 164)), temp_8.readProperty_mVarName ().readProperty_location (), inCompiler COMMA_HERE) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas3", 165)) ;
  {
  const GGS_varDeclarationInstructionAST temp_9 = this ;
  extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, temp_9.readProperty_mVarName (), var_targetType_5925, var_omnibusName_6349, GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("instruction-var.galgas3", 166)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 166)) ;
  }
  ioArgument_ioAllocaList.addAssignOperation (function_llvmNameForLocalVariable (var_omnibusName_6349.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 168)), var_targetType_5925, GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-var.galgas3", 168)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeEffectiveParameters?self?routineAttributes?formal?effective?errorLocation?context?requiredMode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&effectiveIR'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                                      const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                                      const GGS_routineTypedSignature constinArgument_inFormalSignature,
                                                                                                                                                                                                                                      const GGS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                                                                                                                                                                                                                                      const GGS_location constinArgument_inErrorLocation,
                                                                                                                                                                                                                                      const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                                      const GGS_mode constinArgument_inRequiredMode,
                                                                                                                                                                                                                                      GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                                      GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                                      GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                                      GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                                      GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                                      GGS_procCallEffectiveParameterListIR & ioArgument_ioEffectiveParameterListIR,
                                                                                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_procEffectiveParameterList temp_0 = GGS_procEffectiveParameterList::init (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 129)) ;
  GGS_procEffectiveParameterList var_parameterList_4862 = temp_0 ;
  UpEnumerator_routineTypedSignature enumerator_4911 (constinArgument_inFormalSignature) ;
  UpEnumerator_effectiveArgumentListAST enumerator_4971 (constinArgument_inEffectiveParameterList) ;
  while (enumerator_4911.hasCurrentObject () && enumerator_4971.hasCurrentObject ()) {
    switch (enumerator_4971.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
      {
        GGS_bool extractedValue_5098_constant_0 ;
        GGS_lstring extractedValue_5116_typeName_1 ;
        GGS_lstring extractedValue_5134_name_2 ;
        enumerator_4971.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_5098_constant_0, extractedValue_5116_typeName_1, extractedValue_5134_name_2) ;
        GGS_omnibusType temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, extractedValue_5116_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = extensionGetter_type (enumerator_4911.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 134)) ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), extractedValue_5116_typeName_1, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 136)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 136)) ;
        }
        GGS_omnibusType var_type_5152 = temp_1 ;
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = extractedValue_5098_constant_0.boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            {
            extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, extractedValue_5134_name_2, GGS_bool (false), var_type_5152, extractedValue_5134_name_2, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 139)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_3) {
          {
          extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, extractedValue_5134_name_2, var_type_5152, extractedValue_5134_name_2, GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("effective-parameters.galgas3", 141)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 141)) ;
          }
        }
        ioArgument_ioAllocaList.addAssignOperation (function_llvmNameForLocalVariable (extractedValue_5134_name_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 143)), var_type_5152, GGS_bool (true)  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 143)) ;
        var_parameterList_4862.addAssignOperation (enumerator_4971.current_mEffectiveParameterKind (HERE), enumerator_4971.current_mSelector (HERE), var_type_5152  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 144)) ;
        ioArgument_ioEffectiveParameterListIR.addAssignOperation (GGS_procEffectiveParameterPassingModeIR::class_func_input (SOURCE_FILE ("effective-parameters.galgas3", 146)), GGS_objectIR::class_func_reference (var_type_5152, function_llvmNameForLocalVariable (extractedValue_5134_name_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 147))  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 147))  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 145)) ;
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
      {
        GGS_lstring extractedValue_5806_name_0 ;
        enumerator_4971.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_input (extractedValue_5806_name_0) ;
        GGS_objectIR var_objectIR_5882 ;
        {
        extensionSetter_searchValuedObjectForWriteAccess (ioArgument_ioUniversalMap, extractedValue_5806_name_0, var_objectIR_5882, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 149)) ;
        }
        var_parameterList_4862.addAssignOperation (enumerator_4971.current_mEffectiveParameterKind (HERE), enumerator_4971.current_mSelector (HERE), extensionGetter_type (var_objectIR_5882, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 150))  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 150)) ;
        ioArgument_ioEffectiveParameterListIR.addAssignOperation (GGS_procEffectiveParameterPassingModeIR::class_func_input (SOURCE_FILE ("effective-parameters.galgas3", 152)), GGS_objectIR::class_func_reference (extensionGetter_type (var_objectIR_5882, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 154)), extensionGetter_llvmName (var_objectIR_5882, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 155)).getter_nowhere (SOURCE_FILE ("effective-parameters.galgas3", 155)).readProperty_string ()  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 153))  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 151)) ;
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
      {
        GGS_expressionAST extractedValue_6179_expression_0 ;
        GGS_location extractedValue_6200_endOfExp_1 ;
        enumerator_4971.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_6179_expression_0, extractedValue_6200_endOfExp_1) ;
        GGS_objectIR var_expressionResult_6654 ;
        callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) extractedValue_6179_expression_0.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extensionGetter_type (enumerator_4911.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 161)), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_6654, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 158)) ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_6654, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 171)) ;
        }
        GGS_objectIR var_result_6809 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_6654, extensionGetter_type (enumerator_4911.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 178)), extractedValue_6200_endOfExp_1, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 175)) ;
        var_parameterList_4862.addAssignOperation (enumerator_4971.current_mEffectiveParameterKind (HERE), enumerator_4971.current_mSelector (HERE), extensionGetter_type (enumerator_4911.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 182))  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 182)) ;
        ioArgument_ioEffectiveParameterListIR.addAssignOperation (GGS_procEffectiveParameterPassingModeIR::class_func_output (SOURCE_FILE ("effective-parameters.galgas3", 183)), var_result_6809  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 183)) ;
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
      {
        GGS_lstring extractedValue_7237_name_0 ;
        enumerator_4971.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_outputInput (extractedValue_7237_name_0) ;
        GGS_objectIR var_objectIR_7317 ;
        {
        extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, extractedValue_7237_name_0, var_objectIR_7317, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 185)) ;
        }
        var_parameterList_4862.addAssignOperation (enumerator_4971.current_mEffectiveParameterKind (HERE), enumerator_4971.current_mSelector (HERE), extensionGetter_type (var_objectIR_7317, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 186))  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 186)) ;
        GGS_objectIR var_argumentIR_7431 = GGS_objectIR::class_func_reference (extensionGetter_type (var_objectIR_7317, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 188)), extensionGetter_llvmName (var_objectIR_7317, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 189))  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 187)) ;
        ioArgument_ioEffectiveParameterListIR.addAssignOperation (GGS_procEffectiveParameterPassingModeIR::class_func_outputInput (SOURCE_FILE ("effective-parameters.galgas3", 191)), var_argumentIR_7431  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 191)) ;
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
      {
        GGS_lstring extractedValue_7644_name_0 ;
        enumerator_4971.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_outputInputSelfVariable (extractedValue_7644_name_0) ;
        GGS_propertyGetterMap var_propertyGetterMap_7761 = extensionGetter_propertyGetterMap (constinArgument_inContext, constinArgument_inSelfType, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 194)) ;
        GGS_propertyGetterKind var_propertyAccess_7985 ;
        GGS_propertyVisibility joker_7957 ; // Joker input parameter
        var_propertyGetterMap_7761.method_searchKey (extractedValue_7644_name_0, joker_7957, var_propertyAccess_7985, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 196)) ;
        switch (var_propertyAccess_7985.enumValue ()) {
        case GGS_propertyGetterKind::Enumeration::invalid:
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_constantProperty:
          {
            GGS_objectIR extractedValue_8058__0 ;
            var_propertyAccess_7985.getAssociatedValuesFor_constantProperty (extractedValue_8058__0) ;
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("a constant property cannot be used as output / input parameter"), fixItArray4  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 199)) ;
          }
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_storedProperty:
          {
            GGS_omnibusType extractedValue_8202_propertyType_0 ;
            GGS_uint extractedValue_8221_propertyIndex_1 ;
            var_propertyAccess_7985.getAssociatedValuesFor_storedProperty (extractedValue_8202_propertyType_0, extractedValue_8221_propertyIndex_1) ;
            GGS_string var_property_5F_llvmName_8283 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_8283, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 201)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 204)), var_property_5F_llvmName_8283, extractedValue_8221_propertyIndex_1, extractedValue_7644_name_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 202)) ;
            }
            var_parameterList_4862.addAssignOperation (enumerator_4971.current_mEffectiveParameterKind (HERE), enumerator_4971.current_mSelector (HERE), extractedValue_8202_propertyType_0  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 209)) ;
            ioArgument_ioEffectiveParameterListIR.addAssignOperation (GGS_procEffectiveParameterPassingModeIR::class_func_outputInput (SOURCE_FILE ("effective-parameters.galgas3", 210)), GGS_objectIR::class_func_reference (extractedValue_8202_propertyType_0, var_property_5F_llvmName_8283  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 210))  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 210)) ;
          }
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_computedProperty:
          {
            GGS_unifiedTypeMapEntry extractedValue_8747__0 ;
            GGS_routineLLVMNameDict extractedValue_8747__1 ;
            var_propertyAccess_7985.getAssociatedValuesFor_computedProperty (extractedValue_8747__0, extractedValue_8747__1) ;
            GenericArray <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("a computed property cannot be used as output / input parameter"), fixItArray5  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 212)) ;
          }
          break ;
        }
      }
      break ;
    }
    enumerator_4911.gotoNextObject () ;
    enumerator_4971.gotoNextObject () ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSignature.getter_count (SOURCE_FILE ("effective-parameters.galgas3", 217)).objectCompare (constinArgument_inEffectiveParameterList.getter_count (SOURCE_FILE ("effective-parameters.galgas3", 217)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_count (SOURCE_FILE ("effective-parameters.galgas3", 218)).getter_string (SOURCE_FILE ("effective-parameters.galgas3", 218)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 218)).add_operation (GGS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 218)).add_operation (constinArgument_inEffectiveParameterList.getter_count (SOURCE_FILE ("effective-parameters.galgas3", 219)).getter_string (SOURCE_FILE ("effective-parameters.galgas3", 218)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 218)).add_operation (GGS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 219)), fixItArray7  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 218)) ;
    }
  }
  if (GalgasBool::boolFalse == test_6) {
    UpEnumerator_routineTypedSignature enumerator_9222 (constinArgument_inFormalSignature) ;
    UpEnumerator_procEffectiveParameterList enumerator_9303 (var_parameterList_4862) ;
    while (enumerator_9222.hasCurrentObject () && enumerator_9303.hasCurrentObject ()) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = GGS_bool (ComparisonKind::notEqual, extensionGetter_type (enumerator_9222.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 222)).readProperty_omnibusTypeDescriptionName ().objectCompare (enumerator_9303.current_mParameterType (HERE).readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_9303.current_mSelector (HERE).readProperty_location (), GGS_string ("the actual parameter type is $").add_operation (enumerator_9303.current_mParameterType (HERE).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 223)).add_operation (GGS_string (", and is incompatible with the formal type $"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 223)).add_operation (extensionGetter_key (enumerator_9222.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 224)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 224)), fixItArray9  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 223)) ;
        }
      }
      GGS_string var_requiredPassingMode_9685 = extensionGetter_requiredActualPassingModeForSelector (enumerator_9222.current_mFormalArgumentPassingMode (HERE), enumerator_9222.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 226)) ;
      GGS_string var_testedPassingMode_9808 = extensionGetter_passingModeForActualSelector (enumerator_9303.current_mEffectiveParameterPassingMode (HERE), enumerator_9303.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 227)) ;
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = GGS_bool (ComparisonKind::notEqual, var_requiredPassingMode_9685.objectCompare (var_testedPassingMode_9808)).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_9303.current_mSelector (HERE).readProperty_location (), GGS_string ("the required selector is '").add_operation (var_requiredPassingMode_9685, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 229)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 229)), fixItArray11  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 229)) ;
        }
      }
      enumerator_9222.gotoNextObject () ;
      enumerator_9303.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@compileTimeInfixOperatorAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_compileTimeInfixOperatorAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_compileTimeInfixOperatorAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mInfixOperatorLocation () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeInfixOperatorAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixOperatorAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_compileTimeInfixOperatorAST temp_0 = this ;
  const GGS_compileTimeInfixOperatorAST temp_1 = this ;
  const GGS_compileTimeInfixOperatorAST temp_2 = this ;
  const GGS_compileTimeInfixOperatorAST temp_3 = this ;
  GGS_lstring var_nodeName_5269 = GGS_lstring::init_21__21_ (extensionGetter_string (temp_0.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 183)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 183)).add_operation (temp_1.readProperty_mLeftTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 183)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 183)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 183)), temp_3.readProperty_mInfixOperatorLocation (), inCompiler COMMA_HERE) ;
  {
  const GGS_compileTimeInfixOperatorAST temp_4 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_5269, temp_4, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 184)) ;
  }
  {
  const GGS_compileTimeInfixOperatorAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5269, temp_5.readProperty_mLeftTypeName () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 185)) ;
  }
  {
  const GGS_compileTimeInfixOperatorAST temp_6 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5269, temp_6.readProperty_mRightTypeName () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 186)) ;
  }
  {
  const GGS_compileTimeInfixOperatorAST temp_7 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5269, temp_7.readProperty_mResultTypeName () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 187)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 188)), var_nodeName_5269 COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 188)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@compileTimeInfixOperatorAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_compileTimeInfixOperatorAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_compileTimeInfixOperatorAST temp_0 = this ;
  const GGS_compileTimeInfixOperatorAST temp_1 = this ;
  const GGS_compileTimeInfixOperatorAST temp_2 = this ;
  result_outRepresentation = temp_0.readProperty_mLeftTypeName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 194)).add_operation (extensionGetter_string (temp_1.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 194)), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 194)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 194)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 194)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeInfixOperatorAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixOperatorAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                              GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                              GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                              GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                              GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                              GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                              GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                              GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_leftTypeProxy_6941 ;
  {
  const GGS_compileTimeInfixOperatorAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mLeftTypeName (), var_leftTypeProxy_6941, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 212)) ;
  }
  GGS_omnibusType var_leftType_6962 = extensionGetter_type (var_leftTypeProxy_6941, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 213)) ;
  const GGS_compileTimeInfixOperatorAST temp_1 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_leftType_6962.ptr (), temp_1.readProperty_mLeftTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 214)) ;
  GGS_unifiedTypeMapEntry var_rightTypeProxy_7117 ;
  {
  const GGS_compileTimeInfixOperatorAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_2.readProperty_mRightTypeName (), var_rightTypeProxy_7117, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 215)) ;
  }
  GGS_omnibusType var_rightType_7139 = extensionGetter_type (var_rightTypeProxy_7117, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 216)) ;
  const GGS_compileTimeInfixOperatorAST temp_3 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_rightType_7139.ptr (), temp_3.readProperty_mRightTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 217)) ;
  GGS_unifiedTypeMapEntry var_resultTypeProxy_7299 ;
  {
  const GGS_compileTimeInfixOperatorAST temp_4 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_4.readProperty_mResultTypeName (), var_resultTypeProxy_7299, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 218)) ;
  }
  GGS_omnibusType var_resultType_7322 = extensionGetter_type (var_resultTypeProxy_7299, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 219)) ;
  const GGS_compileTimeInfixOperatorAST temp_5 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_resultType_7322.ptr (), temp_5.readProperty_mResultTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 220)) ;
  GGS_ctCheckMap var_ctCheckMap_7482 = GGS_ctCheckMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_compileTimeInfixOperatorAST temp_6 = this ;
  var_ctCheckMap_7482.setter_insertKey (temp_6.readProperty_mLeftOperandName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 223)) ;
  }
  {
  const GGS_compileTimeInfixOperatorAST temp_7 = this ;
  var_ctCheckMap_7482.setter_insertKey (temp_7.readProperty_mRightOperandName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 224)) ;
  }
  const GGS_compileTimeInfixOperatorAST temp_8 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_8.readProperty_mExpression ().ptr (), var_ctCheckMap_7482, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 225)) ;
  const GGS_compileTimeInfixOperatorAST temp_9 = this ;
  const GGS_compileTimeInfixOperatorAST temp_10 = this ;
  GGS_lstring var_key_7700 = function_infixOperatorMapKey (var_leftType_6962, extensionGetter_omnibusInfixOperator (temp_9.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 227)), temp_10.readProperty_mInfixOperatorLocation (), var_rightType_7139, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 227)) ;
  const GGS_compileTimeInfixOperatorAST temp_11 = this ;
  const GGS_compileTimeInfixOperatorAST temp_12 = this ;
  const GGS_compileTimeInfixOperatorAST temp_13 = this ;
  GGS_compileTimeInfixOperatorUsage var_definition_7805 = GGS_compileTimeInfixOperatorUsage::init_21__21__21_ (temp_11.readProperty_mLeftOperandName (), temp_12.readProperty_mRightOperandName (), temp_13.readProperty_mExpression (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_7700, var_resultType_7322, var_definition_7805, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 233)) ;
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    const GGS_compileTimeInfixOperatorAST temp_15 = this ;
    GGS_bool test_16 = GGS_bool (ComparisonKind::equal, temp_15.readProperty_mInfixOperator ().objectCompare (GGS_compileTimeInfixOperatorEnumeration::class_func_equal (SOURCE_FILE ("infix-operator-compile-time.galgas3", 235)))) ;
    if (GalgasBool::boolTrue != test_16.boolEnum ()) {
      const GGS_compileTimeInfixOperatorAST temp_17 = this ;
      test_16 = GGS_bool (ComparisonKind::equal, temp_17.readProperty_mInfixOperator ().objectCompare (GGS_compileTimeInfixOperatorEnumeration::class_func_lessThan (SOURCE_FILE ("infix-operator-compile-time.galgas3", 235)))) ;
    }
    test_14 = test_16.boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      const GGS_compileTimeInfixOperatorAST temp_18 = this ;
      GGS_lstring var_equal_5F_key_8121 = function_infixOperatorMapKey (var_leftType_6962, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("infix-operator-compile-time.galgas3", 236)), temp_18.readProperty_mInfixOperatorLocation (), var_rightType_7139, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 236)) ;
      const GGS_compileTimeInfixOperatorAST temp_19 = this ;
      GGS_lstring var_lessThan_5F_key_8221 = function_infixOperatorMapKey (var_leftType_6962, GGS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("infix-operator-compile-time.galgas3", 237)), temp_19.readProperty_mInfixOperatorLocation (), var_rightType_7139, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 237)) ;
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        test_20 = ioArgument_ioContext.readProperty_mInfixOperatorMap ().getter_hasKey (var_equal_5F_key_8121.readProperty_string () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 238)).operator_and (ioArgument_ioContext.readProperty_mInfixOperatorMap ().getter_hasKey (var_lessThan_5F_key_8221.readProperty_string () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 238)) COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 238)).boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          GGS_omnibusInfixOperatorUsage var_equalOperatorUsage_8492 ;
          GGS_omnibusType joker_8484 ; // Joker input parameter
          ioArgument_ioContext.readProperty_mInfixOperatorMap ().method_searchKey (var_equal_5F_key_8121, joker_8484, var_equalOperatorUsage_8492, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 239)) ;
          GGS_omnibusInfixOperatorUsage var_lessThanOperatorUsage_8577 ;
          GGS_omnibusType joker_8569 ; // Joker input parameter
          ioArgument_ioContext.readProperty_mInfixOperatorMap ().method_searchKey (var_lessThan_5F_key_8221, joker_8569, var_lessThanOperatorUsage_8577, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 240)) ;
          GalgasBool test_21 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_21) {
            GGS_compileTimeInfixOperatorUsage var_eou_8611 (dynamic_cast <const cPtr_compileTimeInfixOperatorUsage *> (var_equalOperatorUsage_8492.ptr ())) ;
            if (nullptr == var_eou_8611.ptr ()) {
              test_21 = GalgasBool::boolFalse ;
            }
            if (GalgasBool::boolTrue == test_21) {
              GGS_compileTimeInfixOperatorUsage var_ltou_8682 (dynamic_cast <const cPtr_compileTimeInfixOperatorUsage *> (var_lessThanOperatorUsage_8577.ptr ())) ;
              if (nullptr == var_ltou_8682.ptr ()) {
                test_21 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_21) {
                GGS_compileTimeInfixInfEqualOperatorUsage var_infEqual_5F_definition_8760 = GGS_compileTimeInfixInfEqualOperatorUsage::init_21__21_ (var_eou_8611, var_ltou_8682, inCompiler COMMA_HERE) ;
                const GGS_compileTimeInfixOperatorAST temp_22 = this ;
                GGS_lstring var_infEqual_5F_key_8844 = function_infixOperatorMapKey (var_leftType_6962, GGS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("infix-operator-compile-time.galgas3", 244)), temp_22.readProperty_mInfixOperatorLocation (), var_rightType_7139, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 244)) ;
                {
                ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_infEqual_5F_key_8844, var_resultType_7322, var_infEqual_5F_definition_8760, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 245)) ;
                }
              }
            }
          }
        }
      }
    }
  }
  GalgasBool test_23 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_23) {
    const GGS_compileTimeInfixOperatorAST temp_24 = this ;
    test_23 = GGS_bool (ComparisonKind::equal, temp_24.readProperty_mInfixOperator ().objectCompare (GGS_compileTimeInfixOperatorEnumeration::class_func_addOp (SOURCE_FILE ("infix-operator-compile-time.galgas3", 250)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_23) {
      const GGS_compileTimeInfixOperatorAST temp_25 = this ;
      GGS_lstring var_addOpNoOVF_5F_key_9138 = function_infixOperatorMapKey (var_leftType_6962, GGS_omnibusInfixOperator::class_func_addOpNoOvf (SOURCE_FILE ("infix-operator-compile-time.galgas3", 251)), temp_25.readProperty_mInfixOperatorLocation (), var_rightType_7139, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 251)) ;
      {
      ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_addOpNoOVF_5F_key_9138, var_resultType_7322, var_definition_7805, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 252)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeInfixOperatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixOperatorUsage::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                              const GGS_location /* constinArgument_inOperatorLocation */,
                                                              const GGS_objectIR constinArgument_inRightOperand,
                                                              const GGS_omnibusType constinArgument_inResultType,
                                                              GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                              GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                              GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                              GGS_objectIR & outArgument_outResultValue,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_result_10898 ;
  const GGS_compileTimeInfixOperatorUsage temp_0 = this ;
  callExtensionMethod_eval ((cPtr_compileTimeInfixOperatorUsage *) temp_0.ptr (), constinArgument_inLeftOperand, constinArgument_inRightOperand, var_result_10898, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 293)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_result_10898  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 294)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeInfixInfEqualOperatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixInfEqualOperatorUsage::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                      const GGS_location /* constinArgument_inOperatorLocation */,
                                                                      const GGS_objectIR constinArgument_inRightOperand,
                                                                      const GGS_omnibusType constinArgument_inResultType,
                                                                      GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                      GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                      GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                      GGS_objectIR & outArgument_outResultValue,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_result_11865 ;
  const GGS_compileTimeInfixInfEqualOperatorUsage temp_0 = this ;
  callExtensionMethod_eval ((cPtr_compileTimeInfixOperatorUsage *) temp_0.readProperty_mEqualOperatorUsage ().ptr (), constinArgument_inLeftOperand, constinArgument_inRightOperand, var_result_11865, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 316)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_result_11865.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 317)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_compileTimeInfixInfEqualOperatorUsage temp_2 = this ;
      callExtensionMethod_eval ((cPtr_compileTimeInfixOperatorUsage *) temp_2.readProperty_mLessThanOperatorUsage ().ptr (), constinArgument_inLeftOperand, constinArgument_inRightOperand, var_result_11865, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 318)) ;
    }
  }
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_result_11865  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 320)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@typeDynamicArrayDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_typeDynamicArrayDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_typeDynamicArrayDeclarationAST temp_0 = this ;
  const GGS_typeDynamicArrayDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mDynamicArrayTypeName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 36)) ;
  }
  {
  const GGS_typeDynamicArrayDeclarationAST temp_2 = this ;
  const GGS_typeDynamicArrayDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mDynamicArrayTypeName (), temp_3.readProperty_mElementTypeName () COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 37)) ;
  }
  const GGS_typeDynamicArrayDeclarationAST temp_4 = this ;
  GGS_lstring var_rootNode_1671 = GGS_lstring::init_21__21_ (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 38)), temp_4.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_typeDynamicArrayDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_5.readProperty_mDynamicArrayTypeName (), var_rootNode_1671 COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 39)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@typeDynamicArrayDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_typeDynamicArrayDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_typeDynamicArrayDeclarationAST temp_0 = this ;
  result_outRepresentation = GGS_string ("anonymous ").add_operation (temp_0.readProperty_mDynamicArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 45)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@typeDynamicArrayDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_typeDynamicArrayDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_typeDynamicArrayDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mDynamicArrayTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@typeDynamicArrayDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_typeDynamicArrayDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                                 GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                 GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                 GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                                 GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                 GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                 GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = ioArgument_ioContext.readProperty_mTargetParameters ().readProperty_mHandleDynamicArray ().operator_not (SOURCE_FILE ("type-dynamic-array.galgas3", 68)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_typeDynamicArrayDeclarationAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mElementTypeName ().readProperty_location (), GGS_string ("this target does not handle dynamic array"), fixItArray2  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 69)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_arrayTypeProxy_3452 ;
  {
  const GGS_typeDynamicArrayDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_3.readProperty_mDynamicArrayTypeName (), var_arrayTypeProxy_3452, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 71)) ;
  }
  GGS_omnibusType var_elementType_3603 ;
  const GGS_typeDynamicArrayDeclarationAST temp_4 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_4.readProperty_mElementTypeName (), var_elementType_3603, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 73)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_elementType_3603.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 74)).operator_not (SOURCE_FILE ("type-dynamic-array.galgas3", 74)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_typeDynamicArrayDeclarationAST temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mElementTypeName ().readProperty_location (), GGS_string ("an array element should be copyable"), fixItArray7  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 75)) ;
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_elementType_3603.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 77)).operator_not (SOURCE_FILE ("type-dynamic-array.galgas3", 77)).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_typeDynamicArrayDeclarationAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mElementTypeName ().readProperty_location (), GGS_string ("an array element should be instanciable"), fixItArray10  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 78)) ;
    }
  }
  const GGS_typeDynamicArrayDeclarationAST temp_11 = this ;
  GGS_lstring var_omnibusTypeDescriptionName_3926 = GGS_lstring::init_21__21_ (GGS_string ("[").add_operation (var_elementType_3603.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 81)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 81)), temp_11.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  const GGS_typeDynamicArrayDeclarationAST temp_12 = this ;
  GGS_lstring var_llvmBaseTypeName_4052 = GGS_lstring::init_21__21_ (GGS_string ("dyn-").add_operation (var_elementType_3603.readProperty_llvmBaseTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 82)), temp_12.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    test_13 = ioArgument_ioContext.readProperty_mTypeMap ().getter_hasKey (var_omnibusTypeDescriptionName_3926.readProperty_string () COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 84)).boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      GGS_omnibusType var_type_4360 ;
      extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), var_omnibusTypeDescriptionName_3926, var_type_4360, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 85)) ;
      {
      const GGS_typeDynamicArrayDeclarationAST temp_14 = this ;
      extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_14.readProperty_mDynamicArrayTypeName (), var_type_4360, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 86)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_13) {
    GGS_unifiedTypeMapEntry var_uint_33__32_TypeProxy_4524 ;
    {
    extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, GGS_string ("u32").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas3", 91)), var_uint_33__32_TypeProxy_4524, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 91)) ;
    }
    GGS_unifiedTypeMapEntry var_elementTypeProxy_4605 ;
    {
    const GGS_typeDynamicArrayDeclarationAST temp_15 = this ;
    extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_15.readProperty_mElementTypeName (), var_elementTypeProxy_4605, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 92)) ;
    }
    GGS_lstring var_routineLLVMName_5018 ;
    {
    const GGS_typeDynamicArrayDeclarationAST temp_16 = this ;
    extensionSetter_addFunctionWithoutArgument (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_3926.readProperty_string (), var_llvmBaseTypeName_4052.readProperty_string (), GGS_lstring::init_21__21_ (GGS_string ("removeAll"), temp_16.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas3", 99)), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-dynamic-array.galgas3", 100)), var_routineLLVMName_5018, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 95)) ;
    }
    ioArgument_ioRoutineListIR.addAssignOperation (GGS_dynArrayRemoveAllFunctionIR::init_21__21_isRequired_21_warnsIfUnused (var_routineLLVMName_5018, GGS_bool (false), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 103)) ;
    {
    const GGS_typeDynamicArrayDeclarationAST temp_17 = this ;
    extensionSetter_addFunctionWithoutArgument (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_3926.readProperty_string (), var_llvmBaseTypeName_4052.readProperty_string (), GGS_lstring::init_21__21_ (GGS_string ("length"), temp_17.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas3", 113)), var_uint_33__32_TypeProxy_4524, var_routineLLVMName_5018, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 109)) ;
    }
    ioArgument_ioRoutineListIR.addAssignOperation (GGS_dynArrayLengthFunctionIR::init_21__21_isRequired_21_warnsIfUnused (var_routineLLVMName_5018, GGS_bool (false), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 117)) ;
    GGS_lstring var_insertFunctionMangledName_6272 ;
    {
    const GGS_typeDynamicArrayDeclarationAST temp_18 = this ;
    extensionSetter_addFunctionWithTwoInputArguments (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_3926.readProperty_string (), ioArgument_ioContext, var_llvmBaseTypeName_4052.readProperty_string (), GGS_lstring::init_21__21_ (GGS_string ("insert"), temp_18.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas3", 128)), GGS_string::makeEmptyString (), var_elementTypeProxy_4605, GGS_string ("inValue"), GGS_string ("atIndex"), var_uint_33__32_TypeProxy_4524, GGS_string ("inIndex"), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-dynamic-array.galgas3", 135)), var_insertFunctionMangledName_6272, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 123)) ;
    }
    ioArgument_ioRoutineListIR.addAssignOperation (GGS_dynArrayInsertFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_insertFunctionMangledName_6272, GGS_bool (false), GGS_bool (false), var_elementTypeProxy_4605, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 138)) ;
    {
    const GGS_typeDynamicArrayDeclarationAST temp_19 = this ;
    extensionSetter_addFunctionWithInputArgument (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_3926.readProperty_string (), ioArgument_ioContext, var_llvmBaseTypeName_4052.readProperty_string (), GGS_lstring::init_21__21_ (GGS_string ("append"), temp_19.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas3", 150)), GGS_string::makeEmptyString (), var_elementTypeProxy_4605, GGS_string ("inValue"), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-dynamic-array.galgas3", 154)), var_routineLLVMName_5018, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 145)) ;
    }
    ioArgument_ioRoutineListIR.addAssignOperation (GGS_dynArrayAppendFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (var_routineLLVMName_5018, GGS_bool (false), GGS_bool (false), var_arrayTypeProxy_3452, var_elementTypeProxy_4605, var_insertFunctionMangledName_6272.readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 157)) ;
    GGS_constructorMap var_constructorMap_7268 = GGS_constructorMap::init (inCompiler COMMA_HERE) ;
    {
    GGS_constructorSignature temp_20 = GGS_constructorSignature::init (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 167)) ;
    var_constructorMap_7268.setter_insertKey (GGS_string ("()").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas3", 167)), temp_20, GGS_constructorValue::class_func_null (SOURCE_FILE ("type-dynamic-array.galgas3", 167)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 167)) ;
    }
    {
    ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (var_omnibusTypeDescriptionName_3926, var_constructorMap_7268, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 168)) ;
    }
    GGS_omnibusTypeAttributes var_typeAttributes_7536 = GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-dynamic-array.galgas3", 170)).operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-dynamic-array.galgas3", 170)) COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 170)) ;
    GGS_omnibusType var_dynamicArrayType_7654 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("type-dynamic-array.galgas3", 173)), var_typeAttributes_7536, var_omnibusTypeDescriptionName_3926.readProperty_string (), GGS_typeKind::class_func_dynamicArrayType (var_elementType_3603  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 176)), var_llvmBaseTypeName_4052.readProperty_string (), inCompiler COMMA_HERE) ;
    {
    const GGS_typeDynamicArrayDeclarationAST temp_21 = this ;
    extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_21.readProperty_mDynamicArrayTypeName (), var_dynamicArrayType_7654, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 179)) ;
    }
    GGS_string var_assignmentFunctionName_8071 = function_assignmentOperatorFuncName (var_dynamicArrayType_7654, var_dynamicArrayType_7654, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 181)) ;
    const GGS_typeDynamicArrayDeclarationAST temp_22 = this ;
    GGS_dynamicArrayTypeAssignGenericFunctionIR var_routine_8168 = GGS_dynamicArrayTypeAssignGenericFunctionIR::init_21__21_isRequired_21_warnsIfUnused (GGS_lstring::init_21__21_ (var_assignmentFunctionName_8071, temp_22.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_bool (false), GGS_bool (false), inCompiler COMMA_HERE) ;
    ioArgument_ioRoutineListIR.addAssignOperation (var_routine_8168  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 187)) ;
    GGS_dynamicArrayTypeAssignUsage var_operatorUsage_8393 = GGS_dynamicArrayTypeAssignUsage::init_21__21_ (var_dynamicArrayType_7654, var_assignmentFunctionName_8071, inCompiler COMMA_HERE) ;
    const GGS_typeDynamicArrayDeclarationAST temp_23 = this ;
    GGS_lstring var_key_8508 = function_assignmentOperatorKey (var_dynamicArrayType_7654, temp_23.readProperty_mDynamicArrayTypeName ().readProperty_location (), var_dynamicArrayType_7654, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 192)) ;
    {
    ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_8508, var_operatorUsage_8393, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 193)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dynArrayRemoveAllFunctionIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayRemoveAllFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                  const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                  GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GGS_bool (true) ;
  const GGS_dynArrayRemoveAllFunctionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas3", 212)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 212)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 212)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (%ptrtype* %ioArray)").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 213)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 213)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 213)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 213)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 214)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @arc.release (%ptrtype %buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 215)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store %ptrtype null, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 216)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 217)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 218)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dynArrayLengthFunctionIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayLengthFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                               const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                               GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GGS_bool (true) ;
  const GGS_dynArrayLengthFunctionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal i32 @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas3", 236)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 236)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 236)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (%ptrtype* %ioArray)").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 237)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 237)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 237)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 237)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 238)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %length = call i32 @arc.length (%ptrtype %buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 239)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret i32 %length\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 240)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 241)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dynArrayAppendFunctionIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayAppendFunctionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                    GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dynArrayAppendFunctionIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (temp_0.readProperty_mInsertFunctionMangledName ()  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 260)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dynArrayAppendFunctionIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayAppendFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                               const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                               GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GGS_bool (true) ;
  const GGS_dynArrayAppendFunctionIR temp_0 = this ;
  GGS_omnibusType var_elementType_11944 = extensionGetter_type (temp_0.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 271)) ;
  GGS_routineFormalArgumentListAST temp_1 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 284)) ;
  temp_1.plusPlusAssignOperation (GGS_routineFormalArgumentListAST_2E_element::init_21__21__21__21_ (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("type-dynamic-array.galgas3", 274)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas3", 275)), var_elementType_11944.readProperty_llvmBaseTypeName ().getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas3", 276)), GGS_string ("inValue").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas3", 277)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 278)) ;
  temp_1.plusPlusAssignOperation (GGS_routineFormalArgumentListAST_2E_element::init_21__21__21__21_ (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("type-dynamic-array.galgas3", 280)), GGS_string ("atIndex").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas3", 281)), GGS_string ("u32").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas3", 282)), GGS_string ("inIndex").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas3", 283)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 284)) ;
  GGS_routineFormalArgumentListAST var_argumentList_12022 = temp_1 ;
  const GGS_dynArrayAppendFunctionIR temp_2 = this ;
  GGS_lstring var_insertRoutineMangledName_12261 = function_routineMangledNameFromAST (extensionGetter_type (temp_2.readProperty_mArrayTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 287)).readProperty_llvmBaseTypeName (), GGS_string ("insert").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas3", 288)), var_argumentList_12022, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 286)) ;
  GGS_string var_insertRoutineLLVMName_12414 = function_llvmNameForFunction (var_insertRoutineMangledName_12261.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 291)) ;
  const GGS_dynArrayAppendFunctionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas3", 292)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 292)).add_operation (GGS_string (" (%ptrtype* %ioArray, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 292)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_11944.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 293)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 293)).add_operation (GGS_string (" %inValue)"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 293)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 293)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 293)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 293)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 292)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Get buffer length\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 294)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %current.buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 295)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %current.buffer.length = call i32 @arc.length (%ptrtype %current.buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 296)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Insert\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 297)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_insertRoutineLLVMName_12414, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 298)).add_operation (GGS_string ("(%ptrtype* %ioArray, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 298)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_11944.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 299)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 299)).add_operation (GGS_string (" %inValue, i32 %current.buffer.length)\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 299)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 298)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Return\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 300)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 301)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 302)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dynArrayInsertFunctionIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayInsertFunctionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                    GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dynArrayInsertFunctionIR temp_0 = this ;
  const GGS_dynArrayInsertFunctionIR temp_1 = this ;
  GGS_string var_assignRoutineLLVMName_13846 = function_assignmentOperatorFuncName (extensionGetter_type (temp_0.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 319)), extensionGetter_type (temp_1.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 319)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 319)) ;
  ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (var_assignRoutineLLVMName_13846  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 320)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dynArrayInsertFunctionIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayInsertFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                               const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                               GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GGS_bool (true) ;
  const GGS_dynArrayInsertFunctionIR temp_0 = this ;
  GGS_string var_elementLLVMTypeName_14367 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_0.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 331)).ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 331)) ;
  const GGS_dynArrayInsertFunctionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas3", 332)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 332)).add_operation (GGS_string (" (%ptrtype* %ioArray"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 332)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 332)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", ").add_operation (var_elementLLVMTypeName_14367, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 333)).add_operation (GGS_string (" %inValue, i32 %inIndex)"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 333)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 333)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 333)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 333)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 333)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Inserted element pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 334)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %insert.address = alloca %ptrtype\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 335)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- value pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 336)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %value.pointer = alloca ").add_operation (var_elementLLVMTypeName_14367, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 337)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 337)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 337)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_elementLLVMTypeName_14367, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 338)).add_operation (GGS_string (" %inValue, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 338)).add_operation (var_elementLLVMTypeName_14367, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 338)).add_operation (GGS_string ("* %value.pointer\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 338)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 338)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Size of element\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 339)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_elementLLVMTypeName_14367, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 340)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 340)).add_operation (var_elementLLVMTypeName_14367, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 340)).add_operation (GGS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 340)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 340)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %element.byte.size = ptrtoint ").add_operation (var_elementLLVMTypeName_14367, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 341)).add_operation (GGS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 341)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 341)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Get inserted element pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 342)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %current.buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 343)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %new.buffer.pointer = call %ptrtype @arc.insert.at.index "), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 344)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("(%ptrtype %current.buffer.pointer, i32 %inIndex, i32 %element.byte.size, %ptrtype* %insert.address)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 345)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Perform copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 346)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %typed.insert.address = bitcast %ptrtype* %insert.address to ").add_operation (var_elementLLVMTypeName_14367, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 347)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 347)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 347)) ;
  const GGS_dynArrayInsertFunctionIR temp_2 = this ;
  const GGS_dynArrayInsertFunctionIR temp_3 = this ;
  GGS_string var_assignRoutineLLVMName_15748 = function_assignmentOperatorFuncName (extensionGetter_type (temp_2.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 348)), extensionGetter_type (temp_3.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 348)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 348)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_assignRoutineLLVMName_15748.getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas3", 349)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 349)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 349)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (var_elementLLVMTypeName_14367, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 350)).add_operation (GGS_string ("* %typed.insert.address, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 350)).add_operation (var_elementLLVMTypeName_14367, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 350)).add_operation (GGS_string ("* %value.pointer)\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 350)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 350)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Store new buffer pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 351)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store %ptrtype %new.buffer.pointer, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 352)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Return\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 353)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 354)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 355)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dynamicArrayTypeAssignUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_dynamicArrayTypeAssignUsage::method_generateCode (GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GGS_instructionListIR & ioArgument_ioInstructionListIR,
                                                            GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                            const GGS_omnibusType constinArgument_inTargetType,
                                                            const GGS_string constinArgument_inTargetLLVMName,
                                                            const GGS_objectIR constinArgument_inSourcePossibleReference,
                                                            const GGS_location /* constinArgument_inErrorLocation */,
                                                            const GGS_bool constinArgument_inTargetIsInitialized,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_targetTypeName_17211 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 379)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inTargetIsInitialized.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_dynamicArrayTypeAssignUsage temp_1 = this ;
      GGS_string var_s_17294 = GGS_string (" call void  @").add_operation (temp_1.readProperty_mAssignFunctionName ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas3", 381)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 381)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 381)).add_operation (var_targetTypeName_17211, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 382)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 382)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 382)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 382)).add_operation (var_targetTypeName_17211, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 383)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 383)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 383)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 383)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 383)) ;
      {
      GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 384)) ;
      const GGS_dynamicArrayTypeAssignUsage temp_3 = this ;
      temp_2.plusPlusAssignOperation (temp_3.readProperty_mAssignFunctionName ()  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 384)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_17294, temp_2, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 384)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_objectIR var_sourceValue_17658 = constinArgument_inSourcePossibleReference ;
    {
    extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionListIR, ioArgument_ioTemporaries, var_sourceValue_17658, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 387)) ;
    }
    GGS_string var_s_17788 = GGS_string ("store ").add_operation (var_targetTypeName_17211, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 388)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 388)).add_operation (extensionGetter_llvmName (var_sourceValue_17658, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 388)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 388)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 388)).add_operation (var_targetTypeName_17211, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 388)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 388)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 388)) ;
    {
    GGS_stringset temp_4 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 389)) ;
    extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_17788, temp_4, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 389)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dynamicArrayTypeAssignGenericFunctionIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_dynamicArrayTypeAssignGenericFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                              const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                              GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GGS_bool (true) ;
  const GGS_dynamicArrayTypeAssignGenericFunctionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas3", 407)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 407)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 407)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (%ptrtype * %inTargetPtr, %ptrtype* %inSourcePtr) nounwind optsize {\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 408)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %source = load %ptrtype, %ptrtype* %inSourcePtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 409)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @arc.retain (%ptrtype %source)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 410)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %target = load %ptrtype, %ptrtype* %inTargetPtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 411)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @arc.release (%ptrtype %target)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 412)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store %ptrtype %source, %ptrtype* %inTargetPtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 413)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 414)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 415)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sliceAssignmentInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_sliceAssignmentInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_sliceAssignmentInstructionAST temp_0 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 84)) ;
  }
  const GGS_sliceAssignmentInstructionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 85)) ;
  const GGS_sliceAssignmentInstructionAST temp_2 = this ;
  UpEnumerator_sliceAssignmentListAST enumerator_2934 (temp_2.readProperty_mSliceAssignmentList ()) ;
  while (enumerator_2934.hasCurrentObject ()) {
    switch (enumerator_2934.current_mSliceKind (HERE).enumValue ()) {
    case GGS_sliceTargetAST::Enumeration::invalid:
      break ;
    case GGS_sliceTargetAST::Enumeration::enum_discarded:
      break ;
    case GGS_sliceTargetAST::Enumeration::enum_varDeclaration:
      break ;
    case GGS_sliceTargetAST::Enumeration::enum_letDeclaration:
      break ;
    case GGS_sliceTargetAST::Enumeration::enum_lValue:
      {
        GGS_LValueAST extractedValue_3107_target_0 ;
        enumerator_2934.current_mSliceKind (HERE).getAssociatedValuesFor_lValue (extractedValue_3107_target_0) ;
        extensionMethod_noteInstructionTypesInPrecedenceGraph (extractedValue_3107_target_0, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 92)) ;
      }
      break ;
    }
    enumerator_2934.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sliceAssignmentInstructionAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_sliceAssignmentInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                             const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                             const GGS_semanticContext constinArgument_inContext,
                                                                             const GGS_mode constinArgument_inMode,
                                                                             GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                             GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                             GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                             GGS_allocaList & ioArgument_ioAllocaList,
                                                                             GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sliceAssignmentInstructionAST temp_0 = this ;
  GGS_omnibusType var_resultType_3950 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 113)) ;
  GGS_uint var_bitCount_4072 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_resultType_3950.readProperty_kind ().getter_isInteger (SOURCE_FILE ("instruction-slice-assignment.galgas3", 116)).operator_not (SOURCE_FILE ("instruction-slice-assignment.galgas3", 116)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_sliceAssignmentInstructionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray3  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 117)) ;
      var_bitCount_4072.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_bool var_unsigned_4272 ;
    GGS_bigint joker_4254_2 ; // Joker input parameter
    GGS_bigint joker_4254_1 ; // Joker input parameter
    var_resultType_3950.readProperty_kind ().method_extractInteger (joker_4254_2, joker_4254_1, var_unsigned_4272, var_bitCount_4072, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 119)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_unsigned_4272.operator_not (SOURCE_FILE ("instruction-slice-assignment.galgas3", 120)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_sliceAssignmentInstructionAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray6  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 121)) ;
        var_bitCount_4072.drop () ; // Release error dropped variable
      }
    }
  }
  GGS_objectIR var_sourceOperand_4850 ;
  const GGS_sliceAssignmentInstructionAST temp_7 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_7.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_resultType_3950, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperand_4850, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 125)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceOperand_4850, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 139)) ;
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = var_sourceOperand_4850.getter_isLiteralInteger (SOURCE_FILE ("instruction-slice-assignment.galgas3", 141)).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      GGS_bigint var_value_5174 ;
      GGS_omnibusType joker_5151_1 ; // Joker input parameter
      var_sourceOperand_4850.method_extractLiteralInteger (joker_5151_1, var_value_5174, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 142)) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = GGS_bool (ComparisonKind::greaterOrEqual, var_value_5174.objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 143)).left_shift_operation (var_bitCount_4072, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 143)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_sliceAssignmentInstructionAST temp_10 = this ;
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mSourceExpressionLocation (), GGS_string ("static value too large"), fixItArray11  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 144)) ;
          var_sourceOperand_4850.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_9) {
        var_sourceOperand_4850 = GGS_objectIR::class_func_literalInteger (var_resultType_3950, var_value_5174  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 146)) ;
      }
    }
  }
  GGS_uint var_rightShiftAmount_5430 = var_bitCount_4072 ;
  const GGS_sliceAssignmentInstructionAST temp_12 = this ;
  UpEnumerator_sliceAssignmentListAST enumerator_5479 (temp_12.readProperty_mSliceAssignmentList ()) ;
  while (enumerator_5479.hasCurrentObject ()) {
    GGS_objectIR var_sourceOperandForSlicing_5530 = var_sourceOperand_4850 ;
    GGS_lstring var_sliceTypeName_5612 ;
    GGS_uint var_sliceWidth_5640 ;
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      test_13 = GGS_bool (ComparisonKind::equal, enumerator_5479.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        GenericArray <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (enumerator_5479.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("anonymous selector not allowed here"), fixItArray14  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 157)) ;
        var_sliceWidth_5640.drop () ; // Release error dropped variable
        var_sliceTypeName_5612.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_13) {
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::equal, enumerator_5479.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GGS_string ("b"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          var_sliceWidth_5640 = GGS_uint (uint32_t (1U)) ;
          const GGS_sliceAssignmentInstructionAST temp_16 = this ;
          var_sliceTypeName_5612 = GGS_lstring::init_21__21_ (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 160)), temp_16.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
        }
      }
      if (GalgasBool::boolFalse == test_15) {
        GalgasBool test_17 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_17) {
          test_17 = enumerator_5479.current_mSliceWidth (HERE).readProperty_string ().getter_isDecimalUnsignedNumber (SOURCE_FILE ("instruction-slice-assignment.galgas3", 161)).operator_not (SOURCE_FILE ("instruction-slice-assignment.galgas3", 161)).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            GenericArray <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (enumerator_5479.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("the selector should be an unsigned integer value"), fixItArray18  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 162)) ;
            var_sliceWidth_5640.drop () ; // Release error dropped variable
            var_sliceTypeName_5612.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_17) {
          var_sliceWidth_5640 = enumerator_5479.current_mSliceWidth (HERE).readProperty_string ().getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 164)) ;
          const GGS_sliceAssignmentInstructionAST temp_19 = this ;
          var_sliceTypeName_5612 = GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_sliceWidth_5640.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas3", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 165)), temp_19.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
          GalgasBool test_20 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_20) {
            test_20 = GGS_bool (ComparisonKind::equal, var_sliceWidth_5640.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_20) {
              GenericArray <FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (enumerator_5479.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("the bit slice width should be > 0"), fixItArray21  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 167)) ;
            }
          }
        }
      }
    }
    GalgasBool test_22 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_22) {
      test_22 = GGS_bool (ComparisonKind::greaterOrEqual, var_rightShiftAmount_5430.objectCompare (var_sliceWidth_5640)).boolEnum () ;
      if (GalgasBool::boolTrue == test_22) {
        var_rightShiftAmount_5430 = var_rightShiftAmount_5430.substract_operation (var_sliceWidth_5640, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 171)) ;
      }
    }
    if (GalgasBool::boolFalse == test_22) {
      GGS_uint var_specifiedBitCount_6465 = var_bitCount_4072.add_operation (var_sliceWidth_5640, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 173)).substract_operation (var_rightShiftAmount_5430, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 173)) ;
      GenericArray <FixItDescription> fixItArray23 ;
      inCompiler->emitSemanticError (enumerator_5479.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("bit slice overflow: ").add_operation (var_specifiedBitCount_6465.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas3", 174)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 174)).add_operation (GGS_string (" bits, should be "), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 174)).add_operation (var_bitCount_4072.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas3", 174)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 174)), fixItArray23  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 174)) ;
      var_rightShiftAmount_5430 = GGS_uint (uint32_t (0U)) ;
    }
    GGS_omnibusType var_sliceType_6675 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), var_sliceTypeName_5612, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 177)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 177)) ;
    {
    extensionSetter_appendLogicalShiftRight (ioArgument_ioInstructionGenerationList, var_sourceOperandForSlicing_5530, var_rightShiftAmount_5430, ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 179)) ;
    }
    {
    extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_sliceType_6675, var_sourceOperandForSlicing_5530, ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 180)) ;
    }
    switch (enumerator_5479.current_mSliceKind (HERE).enumValue ()) {
    case GGS_sliceTargetAST::Enumeration::invalid:
      break ;
    case GGS_sliceTargetAST::Enumeration::enum_discarded:
      break ;
    case GGS_sliceTargetAST::Enumeration::enum_varDeclaration:
      {
        GGS_lstring extractedValue_7089_varName_0 ;
        enumerator_5479.current_mSliceKind (HERE).getAssociatedValuesFor_varDeclaration (extractedValue_7089_varName_0) ;
        GGS_lstring var_omnibusLocalVariableName_7143 = GGS_lstring::init_21__21_ (extractedValue_7089_varName_0.readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 186)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas3", 186)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 186)), extractedValue_7089_varName_0.readProperty_location (), inCompiler COMMA_HERE) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 187)) ;
        {
        extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, extractedValue_7089_varName_0, var_sliceType_6675, var_omnibusLocalVariableName_7143, GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("instruction-slice-assignment.galgas3", 188)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 188)) ;
        }
        ioArgument_ioAllocaList.addAssignOperation (function_llvmNameForLocalVariable (var_omnibusLocalVariableName_7143.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 190)), var_sliceType_6675, GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 190)) ;
        GGS_LValueRepresentation var_targetRef_7557 = GGS_LValueRepresentation::init_21__21_ (var_sliceType_6675, function_llvmNameForLocalVariable (var_omnibusLocalVariableName_7143.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 194)), inCompiler COMMA_HERE) ;
        {
        extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioTemporaries, extractedValue_7089_varName_0.readProperty_location (), var_sourceOperandForSlicing_5530, var_targetRef_7557, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 197)) ;
        }
      }
      break ;
    case GGS_sliceTargetAST::Enumeration::enum_letDeclaration:
      {
        GGS_lstring extractedValue_7990_letName_0 ;
        enumerator_5479.current_mSliceKind (HERE).getAssociatedValuesFor_letDeclaration (extractedValue_7990_letName_0) ;
        GGS_lstring var_omnibusLocalVariableName_8044 = GGS_lstring::init_21__21_ (extractedValue_7990_letName_0.readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 206)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas3", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 206)), extractedValue_7990_letName_0.readProperty_location (), inCompiler COMMA_HERE) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 207)) ;
        {
        extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, extractedValue_7990_letName_0, GGS_bool (false), var_sliceType_6675, var_omnibusLocalVariableName_8044, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 208)) ;
        }
        ioArgument_ioAllocaList.addAssignOperation (function_llvmNameForLocalVariable (var_omnibusLocalVariableName_8044.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 210)), var_sliceType_6675, GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 210)) ;
        GGS_LValueRepresentation var_targetRef_8441 = GGS_LValueRepresentation::init_21__21_ (var_sliceType_6675, function_llvmNameForLocalVariable (var_omnibusLocalVariableName_8044.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 214)), inCompiler COMMA_HERE) ;
        {
        extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioTemporaries, extractedValue_7990_letName_0.readProperty_location (), var_sourceOperandForSlicing_5530, var_targetRef_8441, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 217)) ;
        }
      }
      break ;
    case GGS_sliceTargetAST::Enumeration::enum_lValue:
      {
        GGS_LValueAST extractedValue_8879_target_0 ;
        enumerator_5479.current_mSliceKind (HERE).getAssociatedValuesFor_lValue (extractedValue_8879_target_0) ;
        GGS_LValueRepresentation var_lvalueIR_9308 ;
        extensionMethod_analyzeLValue (extractedValue_8879_target_0, constinArgument_inSelfType, GGS_bool (false), constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lvalueIR_9308, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 225)) ;
        {
        extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioTemporaries, extractedValue_8879_target_0.readProperty_mIdentifier ().readProperty_location (), var_sourceOperandForSlicing_5530, var_lvalueIR_9308, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 239)) ;
        }
      }
      break ;
    }
    enumerator_5479.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@typedConstantCallAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_typedConstantCallAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                             GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_typedConstantCallAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_typedConstantCallAST temp_2 = this ;
      ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_2.readProperty_mOptionalTypeName () COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 46)) ;
      }
    }
  }
  const GGS_typedConstantCallAST temp_3 = this ;
  UpEnumerator_primaryInExpressionAccessListAST enumerator_1848 (temp_3.readProperty_mAccessList ()) ;
  while (enumerator_1848.hasCurrentObject ()) {
    switch (enumerator_1848.current_mAccess (HERE).enumValue ()) {
    case GGS_primaryInExpressionAccessAST::Enumeration::invalid:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_integerSlice:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_property:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_1987_indexExpression_0 ;
        GGS_location extractedValue_2004__1 ;
        GGS_bool extractedValue_2004__2 ;
        enumerator_1848.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_1987_indexExpression_0, extractedValue_2004__1, extractedValue_2004__2) ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_1987_indexExpression_0.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 53)) ;
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_funcCall:
      {
        GGS_lstring extractedValue_2115__0 ;
        GGS_effectiveArgumentListAST extractedValue_2143_arguments_1 ;
        GGS_location extractedValue_2153__2 ;
        enumerator_1848.current_mAccess (HERE).getAssociatedValuesFor_funcCall (extractedValue_2115__0, extractedValue_2143_arguments_1, extractedValue_2153__2) ;
        UpEnumerator_effectiveArgumentListAST enumerator_2193 (extractedValue_2143_arguments_1) ;
        while (enumerator_2193.hasCurrentObject ()) {
          switch (enumerator_2193.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
            {
              GGS_bool extractedValue_2303__0 ;
              GGS_lstring extractedValue_2314_typeName_1 ;
              GGS_lstring extractedValue_2323__2 ;
              enumerator_2193.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_2303__0, extractedValue_2314_typeName_1, extractedValue_2323__2) ;
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = GGS_bool (ComparisonKind::notEqual, extractedValue_2314_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_2314_typeName_1 COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 60)) ;
                  }
                }
              }
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
            {
              GGS_expressionAST extractedValue_2446_expression_0 ;
              GGS_location extractedValue_2457__1 ;
              enumerator_2193.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_2446_expression_0, extractedValue_2457__1) ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_2446_expression_0.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 62)) ;
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
            break ;
          }
          enumerator_2193.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_1848.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@typedConstantCallAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_typedConstantCallAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_typedConstantCallAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_typedConstantCallAST temp_2 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_2.readProperty_mOptionalTypeName () COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 77)) ;
      }
    }
  }
  const GGS_typedConstantCallAST temp_3 = this ;
  UpEnumerator_primaryInExpressionAccessListAST enumerator_3089 (temp_3.readProperty_mAccessList ()) ;
  while (enumerator_3089.hasCurrentObject ()) {
    switch (enumerator_3089.current_mAccess (HERE).enumValue ()) {
    case GGS_primaryInExpressionAccessAST::Enumeration::invalid:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_integerSlice:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_property:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_3228_indexExpression_0 ;
        GGS_location extractedValue_3245__1 ;
        GGS_bool extractedValue_3245__2 ;
        enumerator_3089.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_3228_indexExpression_0, extractedValue_3245__1, extractedValue_3245__2) ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_3228_indexExpression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 84)) ;
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_funcCall:
      {
        GGS_lstring extractedValue_3340__0 ;
        GGS_effectiveArgumentListAST extractedValue_3368_arguments_1 ;
        GGS_location extractedValue_3378__2 ;
        enumerator_3089.current_mAccess (HERE).getAssociatedValuesFor_funcCall (extractedValue_3340__0, extractedValue_3368_arguments_1, extractedValue_3378__2) ;
        UpEnumerator_effectiveArgumentListAST enumerator_3418 (extractedValue_3368_arguments_1) ;
        while (enumerator_3418.hasCurrentObject ()) {
          switch (enumerator_3418.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
            {
              GGS_bool extractedValue_3528__0 ;
              GGS_lstring extractedValue_3539_typeName_1 ;
              GGS_lstring extractedValue_3548__2 ;
              enumerator_3418.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_3528__0, extractedValue_3539_typeName_1, extractedValue_3548__2) ;
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = GGS_bool (ComparisonKind::notEqual, extractedValue_3539_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_3539_typeName_1 COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 91)) ;
                  }
                }
              }
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
            {
              GGS_expressionAST extractedValue_3671_expression_0 ;
              GGS_location extractedValue_3682__1 ;
              enumerator_3418.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_3671_expression_0, extractedValue_3682__1) ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_3671_expression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 93)) ;
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
            break ;
          }
          enumerator_3418.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_3089.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@typedConstantCallAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_typedConstantCallAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
                                                          const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                          const GGS_omnibusType constinArgument_inOptionalTargetType,
                                                          const GGS_semanticContext constinArgument_inContext,
                                                          const GGS_mode constinArgument_inMode,
                                                          GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                          GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                          GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                          GGS_allocaList & ioArgument_ioAllocaList,
                                                          GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                          GGS_objectIR & outArgument_outResult,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_inferredResultType_4717 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_typedConstantCallAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_inferredResultType_4717 = constinArgument_inOptionalTargetType ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_typedConstantCallAST temp_2 = this ;
    var_inferredResultType_4717 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_2.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 124)), inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 124)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, var_inferredResultType_4717.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("expression-typed-constant.galgas3", 126)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_typedConstantCallAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mConstructorName ().readProperty_location (), GGS_string ("cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 127)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_typedConstantCallAST temp_6 = this ;
    GGS_lstring var_typeName_5056 = GGS_lstring::init_21__21_ (var_inferredResultType_4717.readProperty_omnibusTypeDescriptionName (), temp_6.readProperty_mConstructorName ().readProperty_location (), inCompiler COMMA_HERE) ;
    GGS_constantMap var_classConstantMap_5214 ;
    constinArgument_inContext.readProperty_mTypeConstantMap ().method_searchKey (var_typeName_5056, var_classConstantMap_5214, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 130)) ;
    GGS_bigint var_value_5365 ;
    GGS_lstring var_classTypeName_5376 ;
    const GGS_typedConstantCallAST temp_7 = this ;
    var_classConstantMap_5214.method_searchKey (temp_7.readProperty_mConstructorName (), var_value_5365, var_classTypeName_5376, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 132)) ;
    GGS_omnibusType var_resultType_5399 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), var_classTypeName_5376, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 133)), inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 133)) ;
    outArgument_outResult = GGS_objectIR::class_func_literalInteger (var_resultType_5399, var_value_5365  COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 134)) ;
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_typedConstantCallAST temp_9 = this ;
    test_8 = GGS_bool (ComparisonKind::greaterThan, temp_9.readProperty_mAccessList ().getter_count (SOURCE_FILE ("expression-typed-constant.galgas3", 137)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      GGS_objectIR var_newTemporaryReference_5803 ;
      {
      routine_getNewTempReference_3F__26__21_ (extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 140)), ioArgument_ioTemporaries, var_newTemporaryReference_5803, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 140)) ;
      }
      ioArgument_ioAllocaList.addAssignOperation (extensionGetter_llvmName (var_newTemporaryReference_5803, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 142)), extensionGetter_type (var_newTemporaryReference_5803, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 142)), GGS_bool (false)  COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 142)) ;
      {
      extensionSetter_appendStoreTemporaryReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (var_newTemporaryReference_5803, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 145)), extensionGetter_llvmName (var_newTemporaryReference_5803, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 146)), outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 144)) ;
      }
      outArgument_outResult = var_newTemporaryReference_5803 ;
      {
      const GGS_typedConstantCallAST temp_10 = this ;
      routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_10.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 151)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@registerConstantExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_registerConstantExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring /* constinArgument_inConstantName */,
                                                                                      GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@registerConstantExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_registerConstantExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_registerConstantExpressionAST temp_0 = this ;
  UpEnumerator_registerIntegerFieldListAST enumerator_2456 (temp_0.readProperty_mFieldValues ()) ;
  while (enumerator_2456.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) enumerator_2456.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 65)) ;
    enumerator_2456.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@registerConstantExpressionAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_registerConstantExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
                                                                   const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                   const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                   const GGS_semanticContext constinArgument_inContext,
                                                                   const GGS_mode constinArgument_inMode,
                                                                   GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                   GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                   GGS_allocaList & ioArgument_ioAllocaList,
                                                                   GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   GGS_objectIR & outArgument_outResult,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterMap var_controlRegisterMap_3552 ;
  const GGS_registerConstantExpressionAST temp_0 = this ;
  GGS_registerGroupKind joker_3540 ; // Joker input parameter
  constinArgument_inContext.readProperty_mControlRegisterGroupMap ().method_searchKey (temp_0.readProperty_mRegisterGroupName (), joker_3540, var_controlRegisterMap_3552, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 87)) ;
  GGS_omnibusType var_registerType_3721 ;
  GGS_sliceMap var_registerBitSliceMap_3768 ;
  GGS_controlRegisterFieldMap var_registerFieldMap_3822 ;
  GGS_uint var_registerBitCount_3856 ;
  GGS_uint var_powerOfTwoForArraySize_3889 ;
  GGS_uint var_elementArraySize_3928 ;
  const GGS_registerConstantExpressionAST temp_1 = this ;
  GGS_bool joker_3738_2 ; // Joker input parameter
  GGS_bool joker_3738_1 ; // Joker input parameter
  GGS_bigint joker_3843_2 ; // Joker input parameter
  GGS_controlRegisterFieldList joker_3843_1 ; // Joker input parameter
  var_controlRegisterMap_3552.method_searchKey (temp_1.readProperty_mRegisterName (), var_registerType_3721, joker_3738_2, joker_3738_1, var_registerBitSliceMap_3768, var_registerFieldMap_3822, joker_3843_2, joker_3843_1, var_registerBitCount_3856, var_powerOfTwoForArraySize_3889, var_elementArraySize_3928, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 93)) ;
  GGS_bigint var_accumulatedFieldStaticValues_4036 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 105)) ;
  GGS_operandIRList temp_2 = GGS_operandIRList::init (inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 106)) ;
  GGS_operandIRList var_operandList_4090 = temp_2 ;
  const GGS_registerConstantExpressionAST temp_3 = this ;
  UpEnumerator_registerIntegerFieldListAST enumerator_4136 (temp_3.readProperty_mFieldValues ()) ;
  while (enumerator_4136.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::equal, enumerator_4136.current_mFieldName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_4136.current_mFieldName (HERE).readProperty_location (), GGS_string ("anonymous selector not allowed here"), fixItArray5  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 109)) ;
        var_operandList_4090.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GGS_uint var_fieldBitIndex_4378 ;
      GGS_uint var_fieldBitCount_4411 ;
      var_registerFieldMap_3822.method_searchKey (enumerator_4136.current_mFieldName (HERE), var_fieldBitIndex_4378, var_fieldBitCount_4411, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 111)) ;
      GGS_lstring var_inferredTypeName_4443 = GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_fieldBitCount_4411.getter_string (SOURCE_FILE ("expression-register-value-from-slices.galgas3", 116)), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 116)), enumerator_4136.current_mFieldName (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
      GGS_omnibusType var_inferredType_4584 ;
      extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), var_inferredTypeName_4443, var_inferredType_4584, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 117)) ;
      GGS_objectIR var_expressionResult_5051 ;
      callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) enumerator_4136.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_inferredType_4584, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_5051, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 119)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_5051, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 132)) ;
      }
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = extensionGetter_type (var_expressionResult_5051, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 137)).readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("expression-register-value-from-slices.galgas3", 137)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GGS_bigint var_value_5361 ;
          GGS_omnibusType joker_5338_1 ; // Joker input parameter
          var_expressionResult_5051.method_extractLiteralInteger (joker_5338_1, var_value_5361, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 138)) ;
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::lowerThan, var_value_5361.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 139)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              GenericArray <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_4136.current_mExpressionLocation (HERE), GGS_string ("this integer expression should be positive"), fixItArray8  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 140)) ;
            }
          }
          if (GalgasBool::boolFalse == test_7) {
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              test_9 = GGS_bool (ComparisonKind::lowerThan, var_value_5361.objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 141)).left_shift_operation (var_fieldBitCount_4411, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 141)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_9) {
                var_accumulatedFieldStaticValues_4036 = var_accumulatedFieldStaticValues_4036.operator_or (var_value_5361.left_shift_operation (var_fieldBitIndex_4378, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 142)) COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 142)) ;
              }
            }
            if (GalgasBool::boolFalse == test_9) {
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_4136.current_mExpressionLocation (HERE), GGS_string ("expression too large (should be < ").add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 144)).left_shift_operation (var_fieldBitCount_4411, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 144)).getter_string (SOURCE_FILE ("expression-register-value-from-slices.galgas3", 144)), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 144)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 144)), fixItArray10  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 144)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = extensionGetter_type (var_expressionResult_5051, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 146)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-register-value-from-slices.galgas3", 146)).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            GGS_bool var_unsigned_5880 ;
            GGS_uint var_expressionBitCount_5909 ;
            GGS_bigint joker_5856_2 ; // Joker input parameter
            GGS_bigint joker_5856_1 ; // Joker input parameter
            extensionGetter_type (var_expressionResult_5051, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 147)).readProperty_kind ().method_extractInteger (joker_5856_2, joker_5856_1, var_unsigned_5880, var_expressionBitCount_5909, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 147)) ;
            GalgasBool test_12 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_12) {
              test_12 = var_unsigned_5880.operator_not (SOURCE_FILE ("expression-register-value-from-slices.galgas3", 148)).boolEnum () ;
              if (GalgasBool::boolTrue == test_12) {
                GenericArray <FixItDescription> fixItArray13 ;
                inCompiler->emitSemanticError (enumerator_4136.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray13  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 149)) ;
              }
            }
            if (GalgasBool::boolFalse == test_12) {
              GalgasBool test_14 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_14) {
                test_14 = GGS_bool (ComparisonKind::notEqual, var_expressionBitCount_5909.objectCompare (var_fieldBitCount_4411)).boolEnum () ;
                if (GalgasBool::boolTrue == test_14) {
                  GenericArray <FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (enumerator_4136.current_mExpressionLocation (HERE), GGS_string ("type error, $uint").add_operation (var_fieldBitCount_4411.getter_string (SOURCE_FILE ("expression-register-value-from-slices.galgas3", 151)), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 151)).add_operation (GGS_string (" type required"), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 151)), fixItArray15  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 151)) ;
                }
              }
              if (GalgasBool::boolFalse == test_14) {
                GGS_objectIR var_partialResult_6286 = var_expressionResult_5051 ;
                GalgasBool test_16 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_16) {
                  test_16 = GGS_bool (ComparisonKind::lowerThan, var_expressionBitCount_5909.objectCompare (var_registerBitCount_3856)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_16) {
                    GGS_objectIR var_extendedResult_6439 ;
                    {
                    routine_getNewTempValue_3F__26__21_ (var_registerType_3721, ioArgument_ioTemporaries, var_extendedResult_6439, inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 156)) ;
                    }
                    {
                    extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_6439, var_partialResult_6286, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 157)) ;
                    }
                    var_partialResult_6286 = var_extendedResult_6439 ;
                  }
                }
                GGS_objectIR var_shiftedResult_6695 ;
                {
                routine_getNewTempValue_3F__26__21_ (var_registerType_3721, ioArgument_ioTemporaries, var_shiftedResult_6695, inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 161)) ;
                }
                {
                extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_6695, var_partialResult_6286, var_fieldBitIndex_4378, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 162)) ;
                }
                var_operandList_4090.addAssignOperation (var_shiftedResult_6695  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 164)) ;
              }
            }
          }
        }
      }
    }
    enumerator_4136.gotoNextObject () ;
  }
  outArgument_outResult = GGS_objectIR::class_func_literalInteger (var_registerType_3721, var_accumulatedFieldStaticValues_4036  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 170)) ;
  UpEnumerator_operandIRList enumerator_7073 (var_operandList_4090) ;
  while (enumerator_7073.hasCurrentObject ()) {
    GGS_objectIR var_newResult_7156 ;
    {
    routine_getNewTempValue_3F__26__21_ (var_registerType_3721, ioArgument_ioTemporaries, var_newResult_7156, inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 172)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_7156, extensionGetter_type (var_newResult_7156, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 175)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 176)), outArgument_outResult, GGS_llvmBinaryOperation::class_func_ior (SOURCE_FILE ("expression-register-value-from-slices.galgas3", 178)), enumerator_7073.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 173)) ;
    }
    outArgument_outResult = var_newResult_7156 ;
    enumerator_7073.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleArraySubscriptNew?self?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca????arraySize?elementType&!'
//
//--------------------------------------------------------------------------------------------------

void routine_handleArraySubscriptNew_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__3F__3F__3F_arraySize_3F_elementType_26__21_ (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                               const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                               const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                               const GGS_mode constinArgument_inMode,
                                                                                                                                                                                               GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                               GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                               GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                               GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                               const GGS_expressionAST constinArgument_inIndexExpression,
                                                                                                                                                                                               const GGS_location constinArgument_inErrorLocation,
                                                                                                                                                                                               const GGS_bool constinArgument_inCheckIndexExpression,
                                                                                                                                                                                               const GGS_bigint constinArgument_inArraySize,
                                                                                                                                                                                               const GGS_omnibusType constinArgument_inElementType,
                                                                                                                                                                                               GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                               GGS_objectIR & outArgument_outIndexIR,
                                                                                                                                                                                               Compiler * inCompiler
                                                                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIndexIR.drop () ; // Release 'out' argument
  GGS_objectIR var_indexResult_1183 ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas3", 24)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResult_1183, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas3", 21)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResult_1183, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas3", 34)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_indexResult_1183.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas3", 38)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_bigint var_indexValue_1422 ;
      GGS_omnibusType joker_1399_1 ; // Joker input parameter
      var_indexResult_1183.method_extractLiteralInteger (joker_1399_1, var_indexValue_1422, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas3", 39)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        GGS_bool test_2 = GGS_bool (ComparisonKind::lowerThan, var_indexValue_1422.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas3", 40)))) ;
        if (GalgasBool::boolTrue != test_2.boolEnum ()) {
          test_2 = GGS_bool (ComparisonKind::greaterOrEqual, var_indexValue_1422.objectCompare (constinArgument_inArraySize)) ;
        }
        test_1 = test_2.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("static index should be positive and < ").add_operation (constinArgument_inArraySize.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas3", 41)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas3", 41)), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas3", 41)) ;
          outArgument_outIndexIR.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        outArgument_outIndexIR = GGS_objectIR::class_func_literalInteger (constinArgument_inElementType, var_indexValue_1422  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas3", 43)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = extensionGetter_type (var_indexResult_1183, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas3", 45)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas3", 45)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          GGS_bool test_6 = constinArgument_inCheckIndexExpression ;
          if (GalgasBool::boolTrue == test_6.boolEnum ()) {
            test_6 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas3", 46)) ;
          }
          test_5 = test_6.boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            GGS_bool var_generatePanicInstruction_1973 ;
            {
            extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_1183, constinArgument_inErrorLocation, constinArgument_inArraySize, var_generatePanicInstruction_1973, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas3", 47)) ;
            }
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              GGS_bool test_8 = var_generatePanicInstruction_1973 ;
              if (GalgasBool::boolTrue == test_8.boolEnum ()) {
                test_8 = extensionGetter_isSafe (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas3", 53)) ;
              }
              test_7 = test_8.boolEnum () ;
              if (GalgasBool::boolTrue == test_7) {
                GenericArray <FixItDescription> fixItArray9 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("index computation can generate panic and routine is not safe"), fixItArray9  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas3", 54)) ;
              }
            }
          }
        }
        outArgument_outIndexIR = var_indexResult_1183 ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("index expression is not an integer"), fixItArray10  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas3", 59)) ;
      outArgument_outIndexIR.drop () ; // Release error dropped variable
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@prefixOperatorExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_prefixOperatorExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                    GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_prefixOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas3", 28)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@prefixOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_prefixOperatorExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_prefixOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas3", 36)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@prefixOperatorExpressionAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_prefixOperatorExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
                                                                 const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                 const GGS_omnibusType constinArgument_inOptionalTargetType,
                                                                 const GGS_semanticContext constinArgument_inContext,
                                                                 const GGS_mode constinArgument_inMode,
                                                                 GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                 GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                 GGS_allocaList & ioArgument_ioAllocaList,
                                                                 GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 GGS_objectIR & outArgument_outResult,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_expressionResult_2692 ;
  const GGS_prefixOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_2692, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas3", 57)) ;
  GGS_bool var_currentlyInSafeMode_2739 = extensionGetter_isSafe (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas3", 71)) ;
  GGS_bool var_noPanicGeneration_2787 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()) ;
  const GGS_prefixOperatorExpressionAST temp_1 = this ;
  const GGS_prefixOperatorExpressionAST temp_2 = this ;
  extensionMethod_generatePrefixOperatorCode (constinArgument_inContext.readProperty_mPrefixOperatorMap (), var_expressionResult_2692, temp_1.readProperty_mOp (), temp_2.readProperty_mOperatorLocation (), var_currentlyInSafeMode_2739, var_noPanicGeneration_2787, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas3", 73)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@decoratedTaskListDeclaration semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedTaskListDeclaration::method_semanticAnalysis (const GGS_semanticContext constinArgument_inContext,
                                                                 GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_decoratedTaskListDeclaration temp_0 = this ;
  UpEnumerator_decoratedTaskList enumerator_11517 (temp_0.readProperty_mTaskList ()) ;
  GGS_uint index_11500 (uint32_t (0)) ;
  while (enumerator_11517.hasCurrentObject ()) {
    extensionMethod_taskSemanticAnalysis (enumerator_11517.current (HERE), constinArgument_inContext, index_11500, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 320)) ;
    enumerator_11517.gotoNextObject () ;
    index_11500.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 319)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOrderedTaskRoutines?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeOrderedTaskRoutines_3F__21_ (const GGS_taskSetupListAST constinArgument_inTaskRoutineLISTAST,
                                                 GGS_stringlist & outArgument_outSetupOrderedList,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetupOrderedList.drop () ; // Release 'out' argument
  GGS_stringlist temp_0 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 335)) ;
  outArgument_outSetupOrderedList = temp_0 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inTaskRoutineLISTAST.getter_count (SOURCE_FILE ("task-declaration.galgas3", 336)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_uint var_numberOfEntriesWithoutAnyPrecedence_12112 = GGS_uint (uint32_t (0U)) ;
      UpEnumerator_taskSetupListAST enumerator_12163 (constinArgument_inTaskRoutineLISTAST) ;
      while (enumerator_12163.hasCurrentObject ()) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, enumerator_12163.current_mDependanceList (HERE).getter_count (SOURCE_FILE ("task-declaration.galgas3", 340)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            var_numberOfEntriesWithoutAnyPrecedence_12112.plusAssignOperation(var_numberOfEntriesWithoutAnyPrecedence_12112.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 341)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 341)) ;
          }
        }
        enumerator_12163.gotoNextObject () ;
      }
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, var_numberOfEntriesWithoutAnyPrecedence_12112.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          UpEnumerator_taskSetupListAST enumerator_12420 (constinArgument_inTaskRoutineLISTAST) ;
          while (enumerator_12420.hasCurrentObject ()) {
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_12420.current_mName (HERE).readProperty_location (), GGS_string ("Exactly one routine should have no precedence"), fixItArray4  COMMA_SOURCE_FILE ("task-declaration.galgas3", 346)) ;
            enumerator_12420.gotoNextObject () ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::greaterThan, var_numberOfEntriesWithoutAnyPrecedence_12112.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            UpEnumerator_taskSetupListAST enumerator_12602 (constinArgument_inTaskRoutineLISTAST) ;
            while (enumerator_12602.hasCurrentObject ()) {
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = GGS_bool (ComparisonKind::equal, enumerator_12602.current_mDependanceList (HERE).getter_count (SOURCE_FILE ("task-declaration.galgas3", 350)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  GenericArray <FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_12602.current_mName (HERE).readProperty_location (), GGS_string ("Exactly one routine should have no precedence"), fixItArray7  COMMA_SOURCE_FILE ("task-declaration.galgas3", 351)) ;
                }
              }
              enumerator_12602.gotoNextObject () ;
            }
          }
        }
      }
      GGS_taskSetupListAST var_taskSetupListAST_12857 = constinArgument_inTaskRoutineLISTAST ;
      GGS_stringset temp_8 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 357)) ;
      GGS_stringset var_precedenceSet_12916 = temp_8 ;
      GGS_bool var_continue_12944 = GGS_bool (true) ;
      if (constinArgument_inTaskRoutineLISTAST.getter_count (SOURCE_FILE ("task-declaration.galgas3", 359)).isValid ()) {
        uint32_t variant_12964 = constinArgument_inTaskRoutineLISTAST.getter_count (SOURCE_FILE ("task-declaration.galgas3", 359)).uintValue () ;
        bool loop_12964 = true ;
        while (loop_12964) {
          GGS_bool test_9 = var_continue_12944 ;
          if (GalgasBool::boolTrue == test_9.boolEnum ()) {
            test_9 = GGS_bool (ComparisonKind::greaterThan, var_taskSetupListAST_12857.getter_count (SOURCE_FILE ("task-declaration.galgas3", 359)).objectCompare (GGS_uint (uint32_t (0U)))) ;
          }
          loop_12964 = test_9.isValid () ;
          if (loop_12964) {
            loop_12964 = test_9.boolValue () ;
          }
          if (loop_12964 && (0 == variant_12964)) {
            loop_12964 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("task-declaration.galgas3", 359)) ;
          }
          if (loop_12964) {
            variant_12964 -= 1 ;
            var_continue_12944 = GGS_bool (false) ;
            GGS_bigint var_idx_13081 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 361)) ;
            UpEnumerator_taskSetupListAST enumerator_13105 (var_taskSetupListAST_12857) ;
            while (enumerator_13105.hasCurrentObject ()) {
              GGS_bool var_allPrecedenceDefined_13156 = GGS_bool (true) ;
              UpEnumerator_lstringlist enumerator_13197 (enumerator_13105.current_mDependanceList (HERE)) ;
              bool bool_10 = var_allPrecedenceDefined_13156.isValidAndTrue () ;
              if (enumerator_13197.hasCurrentObject () && bool_10) {
                while (enumerator_13197.hasCurrentObject () && bool_10) {
                  var_allPrecedenceDefined_13156 = var_precedenceSet_12916.getter_hasKey (enumerator_13197.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("task-declaration.galgas3", 365)) ;
                  enumerator_13197.gotoNextObject () ;
                  if (enumerator_13197.hasCurrentObject ()) {
                    bool_10 = var_allPrecedenceDefined_13156.isValidAndTrue () ;
                  }
                }
              }
              GalgasBool test_11 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_11) {
                test_11 = var_allPrecedenceDefined_13156.boolEnum () ;
                if (GalgasBool::boolTrue == test_11) {
                  outArgument_outSetupOrderedList.addAssignOperation (enumerator_13105.current_mName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("task-declaration.galgas3", 368)) ;
                  var_precedenceSet_12916.plusPlusAssignOperation (enumerator_13105.current_mName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("task-declaration.galgas3", 369)) ;
                  var_continue_12944 = GGS_bool (true) ;
                  {
                  GGS_lstring joker_13545_2 ; // Joker input parameter
                  GGS_lstringlist joker_13545_1 ; // Joker input parameter
                  var_taskSetupListAST_12857.setter_removeAtIndex (joker_13545_2, joker_13545_1, var_idx_13081.getter_uint (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 371)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 371)) ;
                  }
                }
              }
              if (GalgasBool::boolFalse == test_11) {
                var_idx_13081 = var_idx_13081.add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 373)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 373)) ;
              }
              enumerator_13105.gotoNextObject () ;
            }
          }
        }
      }
      UpEnumerator_taskSetupListAST enumerator_13677 (var_taskSetupListAST_12857) ;
      while (enumerator_13677.hasCurrentObject ()) {
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_13677.current_mName (HERE).readProperty_location (), GGS_string ("this routine is out of execution order"), fixItArray12  COMMA_SOURCE_FILE ("task-declaration.galgas3", 379)) ;
        enumerator_13677.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@taskActivateFunctionIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_taskActivateFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                             const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                             GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_taskActivateFunctionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas3", 611)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 611)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 611)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 611)) ;
  const GGS_taskActivateFunctionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("(%").add_operation (temp_1.readProperty_mAssemblerTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 612)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 612)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 612)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 612)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 612)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 612)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 612)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 612)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 612)) ;
  const GGS_taskActivateFunctionIR temp_2 = this ;
  const GGS_taskActivateFunctionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (temp_2.readProperty_mActivateServiceInvocationName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 613)).add_operation (GGS_string (" (i8 "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 613)).add_operation (temp_3.readProperty_mTaskIndex ().getter_string (SOURCE_FILE ("task-declaration.galgas3", 613)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 613)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 613)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 613)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 614)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 615)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 616)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 616)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 617)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@getUniversalPropertyReferenceIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_getUniversalPropertyReferenceIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                                       const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                       GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_getUniversalPropertyReferenceIR temp_0 = this ;
  GGS_string var_llvmType_967 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas3", 29)) ;
  const GGS_getUniversalPropertyReferenceIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (temp_1.readProperty_mElementLLVMName (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas3", 30)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas3", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas3", 30)) ;
  const GGS_getUniversalPropertyReferenceIR temp_2 = this ;
  const GGS_getUniversalPropertyReferenceIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_llvmType_967.add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas3", 31)).add_operation (var_llvmType_967, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas3", 31)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas3", 31)).add_operation (temp_2.readProperty_mLLVMName (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas3", 31)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas3", 31)).add_operation (temp_3.readProperty_mPropertyIndex ().getter_string (SOURCE_FILE ("intermediate-get-universal-property-reference.galgas3", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas3", 31)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas3", 31)) ;
  const GGS_getUniversalPropertyReferenceIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ; ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas3", 32)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas3", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas3", 32)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@assertInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_assertInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_assertInstructionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 36)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@assertInstructionAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_assertInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                    const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                    const GGS_semanticContext constinArgument_inContext,
                                                                    const GGS_mode constinArgument_inMode,
                                                                    GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                    GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                    GGS_allocaList & ioArgument_ioAllocaList,
                                                                    GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inMode.objectCompare (GGS_mode::class_func_panicMode (SOURCE_FILE ("instruction-assert.galgas3", 54)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_assertInstructionAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 55)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 55)).add_operation (GGS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 55)), fixItArray2  COMMA_SOURCE_FILE ("instruction-assert.galgas3", 55)) ;
    }
  }
  GGS_instructionListIR temp_3 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 58)) ;
  GGS_instructionListIR var_instructionGenerationList_2395 = temp_3 ;
  GGS_objectIR var_expressionValue_2810 ;
  const GGS_assertInstructionAST temp_4 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_4.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 62)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_2395, var_expressionValue_2810, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 59)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = extensionGetter_type (var_expressionValue_2810, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 73)).readProperty_kind ().getter_isBoolean (SOURCE_FILE ("instruction-assert.galgas3", 73)).operator_not (SOURCE_FILE ("instruction-assert.galgas3", 73)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_assertInstructionAST temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GGS_string ("expression is not boolean"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assert.galgas3", 74)) ;
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = extensionGetter_isStatic (var_expressionValue_2810, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 77)).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_assertInstructionAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GGS_string ("expression is static: use check directive"), fixItArray10  COMMA_SOURCE_FILE ("instruction-assert.galgas3", 78)) ;
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas3", 81)).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_assertInstructionAST temp_12 = this ;
      ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_assertInstructionIR::init_21__21__21_ (temp_12.readProperty_mInstructionLocation (), var_instructionGenerationList_2395, var_expressionValue_2810, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assert.galgas3", 82)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@assertInstructionIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_assertInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                           const GGS_generationContext constinArgument_inGenerationContext,
                                                           GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_assertInstructionIR temp_0 = this ;
  extensionMethod_instructionListLLVMCode (temp_0.readProperty_mInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 107)) ;
  GGS_string var_labelAssertOk_4179 = GGS_string ("assert.ok.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-assert.galgas3", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 108)) ;
  GGS_string var_labelAssertEr_4246 = GGS_string ("assert.not.ok.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-assert.galgas3", 109)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 109)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas3", 110)) ;
  const GGS_assertInstructionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mExpressionValue (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 111)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 111)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 111)).add_operation (var_labelAssertOk_4179, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 111)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 111)).add_operation (var_labelAssertEr_4246, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 111)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 111)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas3", 111)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_labelAssertEr_4246.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 112)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas3", 112)) ;
  const GGS_assertInstructionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_2.readProperty_mAssertInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 113)).getter_assemblerRepresentation (SOURCE_FILE ("instruction-assert.galgas3", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 113)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 113)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas3", 113)) ;
  const GGS_assertInstructionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 114)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 114)).add_operation (temp_3.readProperty_mAssertInstructionLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 114)).getter_string (SOURCE_FILE ("instruction-assert.galgas3", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 114)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 114)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas3", 114)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 115)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 115)).add_operation (function_panicCodeForAssertViolation (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 115)).getter_string (SOURCE_FILE ("instruction-assert.galgas3", 115)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 115)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 115)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas3", 115)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  unreachable\n\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas3", 116)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_labelAssertOk_4179.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 117)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas3", 117)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@assertInstructionIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_assertInstructionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                               GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_assertInstructionIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 126)) ;
  const GGS_assertInstructionIR temp_1 = this ;
  ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (function_panicRoutineNameForLocationFile (temp_1.readProperty_mAssertInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas3", 127))  COMMA_SOURCE_FILE ("instruction-assert.galgas3", 127)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@integerSliceExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_integerSliceExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                  GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_integerSliceExpressionAST temp_0 = this ;
  UpEnumerator_integerSliceFieldListAST enumerator_2142 (temp_0.readProperty_mSliceValues ()) ;
  while (enumerator_2142.hasCurrentObject ()) {
    callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) enumerator_2142.current_mExpression (HERE).ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 58)) ;
    enumerator_2142.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@integerSliceExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_integerSliceExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_integerSliceExpressionAST temp_0 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 69)) ;
  }
  const GGS_integerSliceExpressionAST temp_1 = this ;
  UpEnumerator_integerSliceFieldListAST enumerator_2666 (temp_1.readProperty_mSliceValues ()) ;
  while (enumerator_2666.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) enumerator_2666.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 71)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = enumerator_2666.current_mSliceWidth (HERE).readProperty_string ().getter_isDecimalUnsignedNumber (SOURCE_FILE ("expression-integer-slice.galgas3", 72)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_uint var_sliceWidth_2841 = enumerator_2666.current_mSliceWidth (HERE).readProperty_string ().getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 73)) ;
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::equal, var_sliceWidth_2841.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_2666.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("the bit slice width should be > 0"), fixItArray4  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 75)) ;
          }
        }
        if (GalgasBool::boolFalse == test_3) {
          {
          extensionSetter_noteUINTType (ioArgument_ioGraph, var_sliceWidth_2841, enumerator_2666.current_mExpressionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 77)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::equal, enumerator_2666.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GGS_string ("b"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          {
          ioArgument_ioGraph.setter_noteNode (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 80)).getter_nowhere (SOURCE_FILE ("expression-integer-slice.galgas3", 80)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 80)) ;
          }
        }
      }
    }
    enumerator_2666.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@integerSliceExpressionAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_integerSliceExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
                                                               const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                               const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                               const GGS_semanticContext constinArgument_inContext,
                                                               const GGS_mode constinArgument_inMode,
                                                               GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                               GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                               GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                               GGS_allocaList & ioArgument_ioAllocaList,
                                                               GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                               GGS_objectIR & outArgument_outResult,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_integerSliceExpressionAST temp_0 = this ;
  GGS_omnibusType var_resultType_4024 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 103)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 103)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_resultType_4024.readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-integer-slice.galgas3", 105)).operator_not (SOURCE_FILE ("expression-integer-slice.galgas3", 105)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_integerSliceExpressionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 106)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_bool var_unsigned_4326 ;
    GGS_uint var_bitCount_4349 ;
    GGS_bigint joker_4308_2 ; // Joker input parameter
    GGS_bigint joker_4308_1 ; // Joker input parameter
    var_resultType_4024.readProperty_kind ().method_extractInteger (joker_4308_2, joker_4308_1, var_unsigned_4326, var_bitCount_4349, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 108)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_unsigned_4326.operator_not (SOURCE_FILE ("expression-integer-slice.galgas3", 109)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_integerSliceExpressionAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray6  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 110)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GGS_uint var_leftShiftAmount_4573 = var_bitCount_4349 ;
      GGS_bigint var_accumulatedFieldStaticValues_4618 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 114)) ;
      GGS_operandIRList temp_7 = GGS_operandIRList::init (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 115)) ;
      GGS_operandIRList var_operandList_4676 = temp_7 ;
      const GGS_integerSliceExpressionAST temp_8 = this ;
      UpEnumerator_integerSliceFieldListAST enumerator_4730 (temp_8.readProperty_mSliceValues ()) ;
      while (enumerator_4730.hasCurrentObject ()) {
        GGS_uint var_sliceWidth_4792 ;
        GGS_lstring var_expressionTypeName_4824 ;
        GalgasBool test_9 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = GGS_bool (ComparisonKind::equal, enumerator_4730.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            GenericArray <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_4730.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("anonymous selector not allowed here"), fixItArray10  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 120)) ;
            var_operandList_4676.drop () ; // Release error dropped variable
            var_sliceWidth_4792.drop () ; // Release error dropped variable
            var_expressionTypeName_4824.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_9) {
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            test_11 = GGS_bool (ComparisonKind::equal, enumerator_4730.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GGS_string ("b"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              var_sliceWidth_4792 = GGS_uint (uint32_t (1U)) ;
              const GGS_integerSliceExpressionAST temp_12 = this ;
              var_expressionTypeName_4824 = GGS_lstring::init_21__21_ (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 123)), temp_12.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
            }
          }
          if (GalgasBool::boolFalse == test_11) {
            GalgasBool test_13 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_13) {
              test_13 = enumerator_4730.current_mSliceWidth (HERE).readProperty_string ().getter_isDecimalUnsignedNumber (SOURCE_FILE ("expression-integer-slice.galgas3", 124)).operator_not (SOURCE_FILE ("expression-integer-slice.galgas3", 124)).boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                GenericArray <FixItDescription> fixItArray14 ;
                inCompiler->emitSemanticError (enumerator_4730.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("the selector should be an unsigned integer value"), fixItArray14  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 125)) ;
                var_operandList_4676.drop () ; // Release error dropped variable
                var_sliceWidth_4792.drop () ; // Release error dropped variable
                var_expressionTypeName_4824.drop () ; // Release error dropped variable
              }
            }
            if (GalgasBool::boolFalse == test_13) {
              var_sliceWidth_4792 = enumerator_4730.current_mSliceWidth (HERE).readProperty_string ().getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 127)) ;
              const GGS_integerSliceExpressionAST temp_15 = this ;
              var_expressionTypeName_4824 = GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_sliceWidth_4792.getter_string (SOURCE_FILE ("expression-integer-slice.galgas3", 128)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 128)), temp_15.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
              GalgasBool test_16 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_16) {
                test_16 = GGS_bool (ComparisonKind::equal, var_sliceWidth_4792.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_16) {
                  GenericArray <FixItDescription> fixItArray17 ;
                  inCompiler->emitSemanticError (enumerator_4730.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("the bit slice width should be > 0"), fixItArray17  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 130)) ;
                }
              }
            }
          }
        }
        GalgasBool test_18 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_18) {
          test_18 = GGS_bool (ComparisonKind::greaterOrEqual, var_leftShiftAmount_4573.objectCompare (var_sliceWidth_4792)).boolEnum () ;
          if (GalgasBool::boolTrue == test_18) {
            var_leftShiftAmount_4573 = var_leftShiftAmount_4573.substract_operation (var_sliceWidth_4792, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 134)) ;
          }
        }
        if (GalgasBool::boolFalse == test_18) {
          GGS_uint var_specifiedBitCount_5772 = var_bitCount_4349.add_operation (var_sliceWidth_4792, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 136)).substract_operation (var_leftShiftAmount_4573, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 136)) ;
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (enumerator_4730.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("bit slice overflow: ").add_operation (var_specifiedBitCount_5772.getter_string (SOURCE_FILE ("expression-integer-slice.galgas3", 137)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 137)).add_operation (GGS_string (" bits, should be "), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 137)).add_operation (var_bitCount_4349.getter_string (SOURCE_FILE ("expression-integer-slice.galgas3", 137)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 137)), fixItArray19  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 137)) ;
          var_leftShiftAmount_4573 = GGS_uint (uint32_t (0U)) ;
        }
        GGS_omnibusType var_expressionTargetType_6027 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), var_expressionTypeName_4824, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 141)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 141)) ;
        GGS_objectIR var_expressionResult_6562 ;
        callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) enumerator_4730.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_expressionTargetType_6027, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_6562, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 142)) ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_6562, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 155)) ;
        }
        switch (extensionGetter_type (var_expressionResult_6562, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 160)).readProperty_kind ().enumValue ()) {
        case GGS_typeKind::Enumeration::invalid:
          break ;
        case GGS_typeKind::Enumeration::enum_staticArrayType:
          {
            GGS_omnibusType extractedValue_6823__0 ;
            GGS_bigint extractedValue_6825__1 ;
            extensionGetter_type (var_expressionResult_6562, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 160)).readProperty_kind ().getAssociatedValuesFor_staticArrayType (extractedValue_6823__0, extractedValue_6825__1) ;
            GenericArray <FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_4730.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray20  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 162)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_dynamicArrayType:
          {
            GGS_omnibusType extractedValue_6949__0 ;
            extensionGetter_type (var_expressionResult_6562, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 160)).readProperty_kind ().getAssociatedValuesFor_dynamicArrayType (extractedValue_6949__0) ;
            GenericArray <FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_4730.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray21  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 164)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_opaque:
          {
            GGS_bigint extractedValue_7063__0 ;
            extensionGetter_type (var_expressionResult_6562, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 160)).readProperty_kind ().getAssociatedValuesFor_opaque (extractedValue_7063__0) ;
            GenericArray <FixItDescription> fixItArray22 ;
            inCompiler->emitSemanticError (enumerator_4730.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray22  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 166)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_enumeration:
          {
            GGS_uint extractedValue_7182__0 ;
            extensionGetter_type (var_expressionResult_6562, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 160)).readProperty_kind ().getAssociatedValuesFor_enumeration (extractedValue_7182__0) ;
            GenericArray <FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (enumerator_4730.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray23  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 168)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_structure:
          {
            GGS_propertyList extractedValue_7299__0 ;
            extensionGetter_type (var_expressionResult_6562, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 160)).readProperty_kind ().getAssociatedValuesFor_structure (extractedValue_7299__0) ;
            GenericArray <FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (enumerator_4730.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray24  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 170)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_syncTool:
          {
            GenericArray <FixItDescription> fixItArray25 ;
            inCompiler->emitSemanticError (enumerator_4730.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray25  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 172)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_boolean:
          {
            GalgasBool test_26 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_26) {
              test_26 = GGS_bool (ComparisonKind::notEqual, extensionGetter_type (var_expressionResult_6562, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 174)).readProperty_omnibusTypeDescriptionName ().objectCompare (var_expressionTargetType_6027.readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_26) {
                GenericArray <FixItDescription> fixItArray27 ;
                inCompiler->emitSemanticError (enumerator_4730.current_mExpressionLocation (HERE), GGS_string ("an $").add_operation (var_expressionTargetType_6027.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 176)).add_operation (GGS_string (" expression is required, found an $"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 176)).add_operation (extensionGetter_type (var_expressionResult_6562, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 177)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 176)).add_operation (GGS_string (" expression"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 177)), fixItArray27  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 175)) ;
              }
            }
            GalgasBool test_28 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_28) {
              test_28 = var_expressionResult_6562.getter_isLiteralInteger (SOURCE_FILE ("expression-integer-slice.galgas3", 179)).boolEnum () ;
              if (GalgasBool::boolTrue == test_28) {
                GGS_bigint var_value_8015 ;
                GGS_omnibusType joker_7992_1 ; // Joker input parameter
                var_expressionResult_6562.method_extractLiteralInteger (joker_7992_1, var_value_8015, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 180)) ;
                var_accumulatedFieldStaticValues_4618 = var_accumulatedFieldStaticValues_4618.operator_or (var_value_8015.left_shift_operation (var_leftShiftAmount_4573, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 181)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 181)) ;
              }
            }
            if (GalgasBool::boolFalse == test_28) {
              GGS_objectIR var_extendedResult_8266 ;
              {
              routine_getNewTempValue_3F__26__21_ (var_resultType_4024, ioArgument_ioTemporaries, var_extendedResult_8266, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 184)) ;
              }
              {
              extensionSetter_appendBoolToUInt (ioArgument_ioInstructionGenerationList, var_extendedResult_8266, var_expressionResult_6562, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 185)) ;
              }
              GGS_objectIR var_shiftedResult_8474 ;
              {
              routine_getNewTempValue_3F__26__21_ (var_resultType_4024, ioArgument_ioTemporaries, var_shiftedResult_8474, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 187)) ;
              }
              {
              extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_8474, var_extendedResult_8266, var_leftShiftAmount_4573, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 188)) ;
              }
              var_operandList_4676.addAssignOperation (var_shiftedResult_8474  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 190)) ;
            }
          }
          break ;
        case GGS_typeKind::Enumeration::enum_void:
          {
            GenericArray <FixItDescription> fixItArray29 ;
            inCompiler->emitSemanticError (enumerator_4730.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray29  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 193)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_literalString:
          {
            GenericArray <FixItDescription> fixItArray30 ;
            inCompiler->emitSemanticError (enumerator_4730.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray30  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 195)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_function:
          {
            GGS_mode extractedValue_8930__0 ;
            GGS_routineTypedSignature extractedValue_8930__1 ;
            GGS_unifiedTypeMapEntry extractedValue_8930__2 ;
            extensionGetter_type (var_expressionResult_6562, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 160)).readProperty_kind ().getAssociatedValuesFor_function (extractedValue_8930__0, extractedValue_8930__1, extractedValue_8930__2) ;
            GenericArray <FixItDescription> fixItArray31 ;
            inCompiler->emitSemanticError (enumerator_4730.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray31  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 197)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_generic:
          {
            GGS_genericFormalParameterList extractedValue_9046__0 ;
            GGS_ctExpressionAST extractedValue_9046__1 ;
            GGS_llvmStringDefinition extractedValue_9046__2 ;
            extensionGetter_type (var_expressionResult_6562, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 160)).readProperty_kind ().getAssociatedValuesFor_generic (extractedValue_9046__0, extractedValue_9046__1, extractedValue_9046__2) ;
            GenericArray <FixItDescription> fixItArray32 ;
            inCompiler->emitSemanticError (enumerator_4730.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray32  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 199)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_llvmType:
          {
            GGS_bigint extractedValue_9162__0 ;
            extensionGetter_type (var_expressionResult_6562, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 160)).readProperty_kind ().getAssociatedValuesFor_llvmType (extractedValue_9162__0) ;
            GenericArray <FixItDescription> fixItArray33 ;
            inCompiler->emitSemanticError (enumerator_4730.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray33  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 201)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_compileTimeBool:
          {
            GenericArray <FixItDescription> fixItArray34 ;
            inCompiler->emitSemanticError (enumerator_4730.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray34  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 203)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_compileTimeInteger:
          {
            GGS_bigint var_value_9481 ;
            GGS_omnibusType joker_9458_1 ; // Joker input parameter
            var_expressionResult_6562.method_extractLiteralInteger (joker_9458_1, var_value_9481, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 205)) ;
            GalgasBool test_35 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_35) {
              test_35 = GGS_bool (ComparisonKind::lowerThan, var_value_9481.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 206)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_35) {
                GenericArray <FixItDescription> fixItArray36 ;
                inCompiler->emitSemanticError (enumerator_4730.current_mExpressionLocation (HERE), GGS_string ("this integer expression should be positive"), fixItArray36  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 207)) ;
              }
            }
            if (GalgasBool::boolFalse == test_35) {
              GalgasBool test_37 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_37) {
                test_37 = GGS_bool (ComparisonKind::lowerThan, var_value_9481.objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 208)).left_shift_operation (var_sliceWidth_4792, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 208)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_37) {
                  var_accumulatedFieldStaticValues_4618 = var_accumulatedFieldStaticValues_4618.operator_or (var_value_9481.left_shift_operation (var_leftShiftAmount_4573, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 209)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 209)) ;
                }
              }
              if (GalgasBool::boolFalse == test_37) {
                GenericArray <FixItDescription> fixItArray38 ;
                inCompiler->emitSemanticError (enumerator_4730.current_mExpressionLocation (HERE), GGS_string ("expression too large (should be < ").add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 211)).left_shift_operation (var_sliceWidth_4792, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 211)).getter_string (SOURCE_FILE ("expression-integer-slice.galgas3", 211)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 211)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 211)), fixItArray38  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 211)) ;
              }
            }
          }
          break ;
        case GGS_typeKind::Enumeration::enum_integer:
          {
            GGS_bigint extractedValue_9918_min_0 ;
            GGS_bigint extractedValue_9937_max_1 ;
            GGS_bool extractedValue_9947_unsigned_2 ;
            GGS_uint extractedValue_9962_expressionBitCount_3 ;
            extensionGetter_type (var_expressionResult_6562, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 160)).readProperty_kind ().getAssociatedValuesFor_integer (extractedValue_9918_min_0, extractedValue_9937_max_1, extractedValue_9947_unsigned_2, extractedValue_9962_expressionBitCount_3) ;
            GalgasBool test_39 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_39) {
              test_39 = extractedValue_9947_unsigned_2.operator_not (SOURCE_FILE ("expression-integer-slice.galgas3", 214)).boolEnum () ;
              if (GalgasBool::boolTrue == test_39) {
                GenericArray <FixItDescription> fixItArray40 ;
                inCompiler->emitSemanticError (enumerator_4730.current_mExpressionLocation (HERE), GGS_string ("an $uint").add_operation (var_sliceWidth_4792.getter_string (SOURCE_FILE ("expression-integer-slice.galgas3", 215)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 215)).add_operation (GGS_string (" expression is required here"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 215)), fixItArray40  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 215)) ;
              }
            }
            if (GalgasBool::boolFalse == test_39) {
              GalgasBool test_41 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_41) {
                test_41 = GGS_bool (ComparisonKind::notEqual, extractedValue_9962_expressionBitCount_3.objectCompare (var_sliceWidth_4792)).boolEnum () ;
                if (GalgasBool::boolTrue == test_41) {
                  GenericArray <FixItDescription> fixItArray42 ;
                  inCompiler->emitSemanticError (enumerator_4730.current_mExpressionLocation (HERE), GGS_string ("an $uint").add_operation (var_sliceWidth_4792.getter_string (SOURCE_FILE ("expression-integer-slice.galgas3", 217)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 217)).add_operation (GGS_string (" expression is required here"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 217)), fixItArray42  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 217)) ;
                }
              }
              if (GalgasBool::boolFalse == test_41) {
                GGS_objectIR var_extendedResult_10393 ;
                {
                routine_getNewTempValue_3F__26__21_ (var_resultType_4024, ioArgument_ioTemporaries, var_extendedResult_10393, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 220)) ;
                }
                {
                extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_10393, var_expressionResult_6562, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 221)) ;
                }
                GGS_objectIR var_shiftedResult_10597 ;
                {
                routine_getNewTempValue_3F__26__21_ (var_resultType_4024, ioArgument_ioTemporaries, var_shiftedResult_10597, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 223)) ;
                }
                {
                extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_10597, var_extendedResult_10393, var_leftShiftAmount_4573, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 224)) ;
                }
                var_operandList_4676.addAssignOperation (var_shiftedResult_10597  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 226)) ;
              }
            }
          }
          break ;
        }
        enumerator_4730.gotoNextObject () ;
      }
      GalgasBool test_43 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_43) {
        test_43 = GGS_bool (ComparisonKind::notEqual, var_leftShiftAmount_4573.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_43) {
          const GGS_integerSliceExpressionAST temp_44 = this ;
          GenericArray <FixItDescription> fixItArray45 ;
          inCompiler->emitSemanticError (temp_44.readProperty_mLocation (), var_bitCount_4349.getter_string (SOURCE_FILE ("expression-integer-slice.galgas3", 231)).add_operation (GGS_string (" bits required, "), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 231)).add_operation (var_bitCount_4349.substract_operation (var_leftShiftAmount_4573, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 231)).getter_string (SOURCE_FILE ("expression-integer-slice.galgas3", 231)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 231)).add_operation (GGS_string (" bits defined"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 231)), fixItArray45  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 231)) ;
        }
      }
      outArgument_outResult = GGS_objectIR::class_func_literalInteger (var_resultType_4024, var_accumulatedFieldStaticValues_4618  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 234)) ;
      UpEnumerator_operandIRList enumerator_11158 (var_operandList_4676) ;
      while (enumerator_11158.hasCurrentObject ()) {
        GGS_objectIR var_newResult_11243 ;
        {
        routine_getNewTempValue_3F__26__21_ (var_resultType_4024, ioArgument_ioTemporaries, var_newResult_11243, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 236)) ;
        }
        {
        extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_11243, extensionGetter_type (var_newResult_11243, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 239)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 240)), outArgument_outResult, GGS_llvmBinaryOperation::class_func_ior (SOURCE_FILE ("expression-integer-slice.galgas3", 242)), enumerator_11158.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 237)) ;
        }
        outArgument_outResult = var_newResult_11243 ;
        enumerator_11158.gotoNextObject () ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@systemRoutineDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_systemRoutineDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_4686 = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_systemRoutineDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_systemRoutineDeclarationAST temp_2 = this ;
      var_s_4686.plusAssignOperation(temp_2.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 169)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 169)) ;
    }
  }
  const GGS_systemRoutineDeclarationAST temp_3 = this ;
  var_s_4686.plusAssignOperation(temp_3.readProperty_mSystemRoutineName ().readProperty_string ().add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 171)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 171)) ;
  const GGS_systemRoutineDeclarationAST temp_4 = this ;
  UpEnumerator_routineFormalArgumentListAST enumerator_4878 (temp_4.readProperty_mFormalArgumentList ()) ;
  while (enumerator_4878.hasCurrentObject ()) {
    var_s_4686.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_4878.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 173)).add_operation (enumerator_4878.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 173)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 173)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 173)) ;
    enumerator_4878.gotoNextObject () ;
  }
  var_s_4686.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 175)) ;
  const GGS_systemRoutineDeclarationAST temp_5 = this ;
  GGS_lstring var_nodeKey_5011 = GGS_lstring::init_21__21_ (var_s_4686, temp_5.readProperty_mSystemRoutineName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_systemRoutineDeclarationAST temp_6 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeKey_5011, temp_6, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 177)) ;
  }
  const GGS_systemRoutineDeclarationAST temp_7 = this ;
  UpEnumerator_routineFormalArgumentListAST enumerator_5141 (temp_7.readProperty_mFormalArgumentList ()) ;
  while (enumerator_5141.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_5141.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-svc.galgas3", 180)) ;
    }
    enumerator_5141.gotoNextObject () ;
  }
  const GGS_systemRoutineDeclarationAST temp_8 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_8.readProperty_mInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 182)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_systemRoutineDeclarationAST temp_10 = this ;
    test_9 = GGS_bool (ComparisonKind::notEqual, temp_10.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      {
      const GGS_systemRoutineDeclarationAST temp_11 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_11.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas3", 184)) ;
      }
      {
      const GGS_systemRoutineDeclarationAST temp_12 = this ;
      ioArgument_ioGraph.setter_addEdge (var_nodeKey_5011, temp_12.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas3", 185)) ;
      }
    }
  }
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    const GGS_systemRoutineDeclarationAST temp_14 = this ;
    test_13 = GGS_bool (ComparisonKind::notEqual, temp_14.readProperty_mReturnTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      {
      const GGS_systemRoutineDeclarationAST temp_15 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_15.readProperty_mReturnTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas3", 188)) ;
      }
      {
      const GGS_systemRoutineDeclarationAST temp_16 = this ;
      ioArgument_ioGraph.setter_addEdge (var_nodeKey_5011, temp_16.readProperty_mReturnTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas3", 189)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@systemRoutineDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_systemRoutineDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_systemRoutineDeclarationAST temp_0 = this ;
  const GGS_systemRoutineDeclarationAST temp_1 = this ;
  result_result = GGS_string ("system ").add_operation (temp_0.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 196)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 196)).add_operation (temp_1.readProperty_mSystemRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 196)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@systemRoutineDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_systemRoutineDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_result ; // Returned variable
  const GGS_systemRoutineDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mSystemRoutineName ().readProperty_location () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'systemUserMangledNameFromAST'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_systemUserMangledNameFromAST (const GGS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                                   const GGS_routineKind & constinArgument_inKind,
                                                   const GGS_lstring & constinArgument_inGuardName,
                                                   const GGS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_s_6706 ;
  switch (constinArgument_inKind.enumValue ()) {
  case GGS_routineKind::Enumeration::invalid:
    break ;
  case GGS_routineKind::Enumeration::enum_section:
    {
      var_s_6706 = GGS_string ("section") ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_service:
    {
      var_s_6706 = GGS_string ("service") ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_primitive:
    {
      var_s_6706 = GGS_string ("primitive") ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_function:
    {
      var_s_6706 = GGS_string ("\?\?\?") ;
    }
    break ;
  }
  var_s_6706.plusAssignOperation(GGS_string (".user."), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 225)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverLLVMBaseTypeName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_s_6706.plusAssignOperation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 227)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 227)) ;
    }
  }
  var_s_6706.plusAssignOperation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 229)) ;
  var_s_6706.plusAssignOperation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 230)) ;
  UpEnumerator_routineFormalArgumentListAST enumerator_7059 (constinArgument_inFormalArgumentList) ;
  while (enumerator_7059.hasCurrentObject ()) {
    var_s_6706.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_7059.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 232)).add_operation (enumerator_7059.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 232)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 232)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 232)) ;
    enumerator_7059.gotoNextObject () ;
  }
  var_s_6706.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 234)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_6706, constinArgument_inGuardName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_systemUserMangledNameFromAST [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_routineKind,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_systemUserMangledNameFromAST (Compiler * inCompiler,
                                                                          const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                          const GGS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_routineKind operand1 = GGS_routineKind::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GGS_lstring operand2 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_routineFormalArgumentListAST operand3 = GGS_routineFormalArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                                     inCompiler
                                                                                                     COMMA_THERE) ;
  return function_systemUserMangledNameFromAST (operand0,
                                                operand1,
                                                operand2,
                                                operand3,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_systemUserMangledNameFromAST ("systemUserMangledNameFromAST",
                                                                              functionWithGenericHeader_systemUserMangledNameFromAST,
                                                                              & kTypeDescriptor_GALGAS_lstring,
                                                                              4,
                                                                              functionArgs_systemUserMangledNameFromAST) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'systemImplementationMangledNameFromAST'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_systemImplementationMangledNameFromAST (const GGS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                                             const GGS_routineKind & constinArgument_inKind,
                                                             const GGS_lstring & constinArgument_inGuardName,
                                                             const GGS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_s_7676 ;
  switch (constinArgument_inKind.enumValue ()) {
  case GGS_routineKind::Enumeration::invalid:
    break ;
  case GGS_routineKind::Enumeration::enum_section:
    {
      var_s_7676 = GGS_string ("section") ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_service:
    {
      var_s_7676 = GGS_string ("service") ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_primitive:
    {
      var_s_7676 = GGS_string ("primitive") ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_function:
    {
      var_s_7676 = GGS_string ("\?\?\?") ;
    }
    break ;
  }
  var_s_7676.plusAssignOperation(GGS_string (".implementation."), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 256)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverLLVMBaseTypeName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_s_7676.plusAssignOperation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 258)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 258)) ;
    }
  }
  var_s_7676.plusAssignOperation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 260)) ;
  var_s_7676.plusAssignOperation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 261)) ;
  UpEnumerator_routineFormalArgumentListAST enumerator_8039 (constinArgument_inFormalArgumentList) ;
  while (enumerator_8039.hasCurrentObject ()) {
    var_s_7676.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_8039.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 263)).add_operation (enumerator_8039.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 263)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 263)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 263)) ;
    enumerator_8039.gotoNextObject () ;
  }
  var_s_7676.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 265)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_7676, constinArgument_inGuardName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_systemImplementationMangledNameFromAST [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_routineKind,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_systemImplementationMangledNameFromAST (Compiler * inCompiler,
                                                                                    const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                                    const GGS_location & /* inErrorLocation */
                                                                                    COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_routineKind operand1 = GGS_routineKind::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GGS_lstring operand2 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_routineFormalArgumentListAST operand3 = GGS_routineFormalArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                                     inCompiler
                                                                                                     COMMA_THERE) ;
  return function_systemImplementationMangledNameFromAST (operand0,
                                                          operand1,
                                                          operand2,
                                                          operand3,
                                                          inCompiler
                                                          COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_systemImplementationMangledNameFromAST ("systemImplementationMangledNameFromAST",
                                                                                        functionWithGenericHeader_systemImplementationMangledNameFromAST,
                                                                                        & kTypeDescriptor_GALGAS_lstring,
                                                                                        4,
                                                                                        functionArgs_systemImplementationMangledNameFromAST) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@systemRoutineDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_systemRoutineDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                              GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                              GGS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                              GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                              GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                              GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                              GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                              GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_selfTypeProxy_9135 ;
  {
  const GGS_systemRoutineDeclarationAST temp_0 = this ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mReceiverTypeName (), var_selfTypeProxy_9135, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 284)) ;
  }
  GGS_string temp_1 ;
  const GalgasBool test_2 = var_selfTypeProxy_9135.getter_isNull (SOURCE_FILE ("declaration-svc.galgas3", 286)).boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = extensionGetter_type (var_selfTypeProxy_9135, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 286)).readProperty_llvmBaseTypeName () ;
  }
  GGS_string var_receiverLLVMBaseTypeName_9182 = temp_1 ;
  GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 288)) ;
  GGS_stringset var_attributeSet_9320 = temp_3 ;
  const GGS_systemRoutineDeclarationAST temp_4 = this ;
  UpEnumerator_lstringlist enumerator_9363 (temp_4.readProperty_mAttributeList ()) ;
  while (enumerator_9363.hasCurrentObject ()) {
    var_attributeSet_9320.plusPlusAssignOperation (enumerator_9363.current (HERE).readProperty_mValue ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 290)) ;
    enumerator_9363.gotoNextObject () ;
  }
  GGS_routineKind var_routineKind_9457 ;
  const GGS_systemRoutineDeclarationAST temp_5 = this ;
  switch (temp_5.readProperty_mMode ().enumValue ()) {
  case GGS_mode::Enumeration::invalid:
    break ;
  case GGS_mode::Enumeration::enum_sectionMode:
  case GGS_mode::Enumeration::enum_safeSectionMode:
    {
      var_routineKind_9457 = GGS_routineKind::class_func_section (SOURCE_FILE ("declaration-svc.galgas3", 296)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_serviceMode:
  case GGS_mode::Enumeration::enum_safeServiceMode:
    {
      var_routineKind_9457 = GGS_routineKind::class_func_service (SOURCE_FILE ("declaration-svc.galgas3", 298)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_primitiveMode:
  case GGS_mode::Enumeration::enum_safePrimitiveMode:
    {
      var_routineKind_9457 = GGS_routineKind::class_func_primitive (SOURCE_FILE ("declaration-svc.galgas3", 300)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_userMode:
  case GGS_mode::Enumeration::enum_safeUserMode:
  case GGS_mode::Enumeration::enum_anyMode:
  case GGS_mode::Enumeration::enum_anySafeMode:
  case GGS_mode::Enumeration::enum_bootMode:
  case GGS_mode::Enumeration::enum_guardMode:
  case GGS_mode::Enumeration::enum_panicMode:
  case GGS_mode::Enumeration::enum_safeGuardMode:
  case GGS_mode::Enumeration::enum_startupMode:
    {
      const GGS_systemRoutineDeclarationAST temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mSystemRoutineName ().readProperty_location (), GGS_string ("internal error"), fixItArray7  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 302)) ;
      var_routineKind_9457.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GGS_systemRoutineDeclarationAST temp_8 = this ;
  const GGS_systemRoutineDeclarationAST temp_9 = this ;
  GGS_lstring var_userRoutineMangledName_9917 = function_systemUserMangledNameFromAST (var_receiverLLVMBaseTypeName_9182, var_routineKind_9457, temp_8.readProperty_mSystemRoutineName (), temp_9.readProperty_mFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 305)) ;
  const GGS_systemRoutineDeclarationAST temp_10 = this ;
  const GGS_systemRoutineDeclarationAST temp_11 = this ;
  GGS_lstring var_implementationRoutineMangledName_10089 = function_systemImplementationMangledNameFromAST (var_receiverLLVMBaseTypeName_9182, var_routineKind_9457, temp_10.readProperty_mSystemRoutineName (), temp_11.readProperty_mFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 311)) ;
  GGS_routineTypedSignature var_signature_10368 ;
  {
  const GGS_systemRoutineDeclarationAST temp_12 = this ;
  routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, temp_12.readProperty_mFormalArgumentList (), var_signature_10368, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 318)) ;
  }
  GGS_unifiedTypeMapEntry var_returnTypeProxy_10467 ;
  {
  const GGS_systemRoutineDeclarationAST temp_13 = this ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_13.readProperty_mReturnTypeName (), var_returnTypeProxy_10467, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 320)) ;
  }
  GGS_bool var_mutatingRoutine_10507 = GGS_bool (false) ;
  GGS_bool var_noUnusedWarning_10537 = GGS_bool (false) ;
  const GGS_systemRoutineDeclarationAST temp_14 = this ;
  UpEnumerator_lstringlist enumerator_10568 (temp_14.readProperty_mAttributeList ()) ;
  while (enumerator_10568.hasCurrentObject ()) {
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = GGS_bool (ComparisonKind::equal, enumerator_10568.current_mValue (HERE).readProperty_string ().objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 325)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GalgasBool test_16 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_16) {
          test_16 = var_noUnusedWarning_10537.boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            GenericArray <FixItDescription> fixItArray17 ;
            fixItArray17.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
            inCompiler->emitSemanticError (enumerator_10568.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 327)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 327)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 327)), fixItArray17  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 327)) ;
          }
        }
        var_noUnusedWarning_10537 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_15) {
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = GGS_bool (ComparisonKind::equal, enumerator_10568.current_mValue (HERE).readProperty_string ().objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 330)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          GalgasBool test_19 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_19) {
            test_19 = var_mutatingRoutine_10507.boolEnum () ;
            if (GalgasBool::boolTrue == test_19) {
              GenericArray <FixItDescription> fixItArray20 ;
              fixItArray20.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
              inCompiler->emitSemanticError (enumerator_10568.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 332)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 332)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 332)), fixItArray20  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 332)) ;
            }
          }
          var_mutatingRoutine_10507 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_18) {
        GenericArray <FixItDescription> fixItArray21 ;
        fixItArray21.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
        inCompiler->emitSemanticError (enumerator_10568.current_mValue (HERE).readProperty_location (), GGS_string ("unknown attribute; available attributes are @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 337)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 337)).add_operation (GGS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 337)).add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 337)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 337)), fixItArray21  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 336)) ;
      }
    }
    enumerator_10568.gotoNextObject () ;
  }
  GGS_routineAttributes var_attributes_11269 = GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("declaration-svc.galgas3", 342)) ;
  const GGS_systemRoutineDeclarationAST temp_22 = this ;
  GGS_routineLLVMNameDict var_routineLLVMNameDict_11353 = extensionGetter_routineLLVMDictionaryForSystemRoutine (temp_22.readProperty_mMode (), var_userRoutineMangledName_9917.readProperty_string (), var_implementationRoutineMangledName_10089.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 344)) ;
  const GGS_systemRoutineDeclarationAST temp_23 = this ;
  const GGS_systemRoutineDeclarationAST temp_24 = this ;
  GGS_lstring var_routineMangledName_11501 = extensionGetter_mangledName (var_signature_10368, temp_23.readProperty_mReceiverTypeName ().readProperty_string (), temp_24.readProperty_mSystemRoutineName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 348)) ;
  {
  const GGS_systemRoutineDeclarationAST temp_25 = this ;
  const GGS_systemRoutineDeclarationAST temp_26 = this ;
  ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_11501, temp_25.readProperty_mPublic (), var_signature_10368, var_returnTypeProxy_10467, var_routineLLVMNameDict_11353, GGS_bool (true), temp_26.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 349)) ;
  }
  const GGS_systemRoutineDeclarationAST temp_27 = this ;
  const GGS_systemRoutineDeclarationAST temp_28 = this ;
  const GGS_systemRoutineDeclarationAST temp_29 = this ;
  const GGS_systemRoutineDeclarationAST temp_30 = this ;
  const GGS_systemRoutineDeclarationAST temp_31 = this ;
  const GGS_systemRoutineDeclarationAST temp_32 = this ;
  ioArgument_ioDecoratedRoutineList.addAssignOperation (temp_27.readProperty_mReceiverTypeName (), temp_28.readProperty_mMode (), GGS_bool (false), var_routineKind_9457, var_noUnusedWarning_10537.operator_not (SOURCE_FILE ("declaration-svc.galgas3", 364)), GGS_bool (true), var_attributes_11269, var_implementationRoutineMangledName_10089, temp_29.readProperty_mFormalArgumentList (), var_noUnusedWarning_10537, temp_30.readProperty_mInstructionList (), temp_31.readProperty_mEndOfInstructionListLocation (), temp_32.readProperty_mReturnTypeName ()  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 359)) ;
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_systemUserRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (var_userRoutineMangledName_9917, GGS_bool (false), GGS_bool (false), var_implementationRoutineMangledName_10089.readProperty_string (), var_signature_10368, var_selfTypeProxy_9135, GGS_bool (ComparisonKind::equal, var_routineKind_9457.objectCompare (GGS_routineKind::class_func_section (SOURCE_FILE ("declaration-svc.galgas3", 381)))), var_returnTypeProxy_10467, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 374)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmFunctionPrototype'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_llvmFunctionPrototype (const GGS_string & constinArgument_inReturnTypeLLVMName,
                                           const GGS_string & constinArgument_inFunctionName,
                                           const GGS_omnibusType & constinArgument_inReceiverType,
                                           const GGS_routineFormalArgumentListIR & constinArgument_inFormalArgumentListForGeneration,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inReturnTypeLLVMName ;
  result_result.plusAssignOperation(GGS_string (" @").add_operation (constinArgument_inFunctionName, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 413)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 413)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 413)) ;
  GGS_bool var_first_13793 = GGS_bool (true) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("declaration-svc.galgas3", 415)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inReceiverType.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 416)).add_operation (GGS_string (" * %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 416)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 416)) ;
      var_first_13793 = GGS_bool (false) ;
    }
  }
  UpEnumerator_routineFormalArgumentListIR enumerator_13975 (constinArgument_inFormalArgumentListForGeneration) ;
  while (enumerator_13975.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_first_13793.boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_first_13793 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 423)) ;
    }
    switch (enumerator_13975.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        result_result.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_13975.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 427)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 427)).add_operation (enumerator_13975.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 427)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 427)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        result_result.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_13975.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 429)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 429)).add_operation (function_llvmNameForLocalVariable (enumerator_13975.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 429)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 429)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 429)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        result_result.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_13975.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 431)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 431)).add_operation (function_llvmNameForLocalVariable (enumerator_13975.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 431)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 431)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 431)) ;
      }
      break ;
    }
    enumerator_13975.gotoNextObject () ;
  }
  result_result.plusAssignOperation(GGS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 434)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 434)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 434)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmFunctionPrototype [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListIR,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmFunctionPrototype (Compiler * inCompiler,
                                                                   const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                   const GGS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_string operand1 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_omnibusType operand2 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GGS_routineFormalArgumentListIR operand3 = GGS_routineFormalArgumentListIR::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                                   inCompiler
                                                                                                   COMMA_THERE) ;
  return function_llvmFunctionPrototype (operand0,
                                         operand1,
                                         operand2,
                                         operand3,
                                         inCompiler
                                         COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmFunctionPrototype ("llvmFunctionPrototype",
                                                                       functionWithGenericHeader_llvmFunctionPrototype,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       4,
                                                                       functionArgs_llvmFunctionPrototype) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateSectionDispatcher???targetParameters&?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateSectionDispatcher_3F__3F__3F_targetParameters_26__3F_ (const GGS_string constinArgument_inCurrentDirectory,
                                                                            const GGS_string constinArgument_inTargetName,
                                                                            const GGS_targetParameters constinArgument_inTargetParameters,
                                                                            GGS_string & ioArgument_ioAssemblerCode,
                                                                            const GGS_sectionIRlist constinArgument_inSectionIRlist,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_sectionIRlist enumerator_14895 (constinArgument_inSectionIRlist) ;
  GGS_uint index_14880 (uint32_t (0)) ;
  while (enumerator_14895.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_14895.current (HERE).readProperty_invocationFromAnyMode ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_s_14972 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 450)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherInvocationFromAnyMode ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 450)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 448)) ;
        var_s_14972 = var_s_14972.getter_replacing (GGS_string ("!USER_ROUTINE!"), enumerator_14895.current (HERE).readProperty_mSectionCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 452)) ;
        var_s_14972 = var_s_14972.getter_replacing (GGS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_14895.current (HERE).readProperty_mSectionImplementationName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 453)) ;
        var_s_14972 = var_s_14972.getter_replacing (GGS_string ("!IDX!"), index_14880.getter_string (SOURCE_FILE ("declaration-svc.galgas3", 454)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 454)) ;
        ioArgument_ioAssemblerCode.plusAssignOperation(var_s_14972, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 455)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_string var_s_15396 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 459)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherInvocationFromUserMode ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 459)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 457)) ;
      var_s_15396 = var_s_15396.getter_replacing (GGS_string ("!USER_ROUTINE!"), enumerator_14895.current (HERE).readProperty_mSectionCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 461)) ;
      var_s_15396 = var_s_15396.getter_replacing (GGS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_14895.current (HERE).readProperty_mSectionImplementationName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 462)) ;
      var_s_15396 = var_s_15396.getter_replacing (GGS_string ("!IDX!"), index_14880.getter_string (SOURCE_FILE ("declaration-svc.galgas3", 463)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 463)) ;
      ioArgument_ioAssemblerCode.plusAssignOperation(var_s_15396, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 464)) ;
    }
    enumerator_14895.gotoNextObject () ;
    index_14880.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 446)) ;
  }
  ioArgument_ioAssemblerCode.plusAssignOperation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 469)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherHeader ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 469)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 467)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 467)) ;
  UpEnumerator_sectionIRlist enumerator_16006 (constinArgument_inSectionIRlist) ;
  GGS_uint index_15973 (uint32_t (0)) ;
  while (enumerator_16006.hasCurrentObject ()) {
    GGS_string var_s_16045 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 474)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherEntry ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 474)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 472)) ;
    var_s_16045 = var_s_16045.getter_replacing (GGS_string ("!USER_ROUTINE!"), enumerator_16006.current_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 476)) ;
    var_s_16045 = var_s_16045.getter_replacing (GGS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_16006.current_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 477)) ;
    var_s_16045 = var_s_16045.getter_replacing (GGS_string ("!IDX!"), index_15973.getter_string (SOURCE_FILE ("declaration-svc.galgas3", 478)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 478)) ;
    ioArgument_ioAssemblerCode.plusAssignOperation(var_s_16045, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 479)) ;
    enumerator_16006.gotoNextObject () ;
    index_15973.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 471)) ;
  }
  ioArgument_ioAssemblerCode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 481)) ;
  ioArgument_ioAssemblerCode.plusAssignOperation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 484)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionHandler ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 484)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 482)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 482)) ;
  ioArgument_ioAssemblerCode.plusAssignOperation(GGS_string ("@-------------------------------------------------------------"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 486)) ;
  ioArgument_ioAssemblerCode.plusAssignOperation(GGS_string ("---------------------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 487)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generatePrimitiveAndServiceDispatcher??&??targetParameters'
//
//--------------------------------------------------------------------------------------------------

void routine_generatePrimitiveAndServiceDispatcher_3F__3F__26__3F__3F_targetParameters (const GGS_string constinArgument_inCurrentDirectory,
                                                                                        const GGS_string constinArgument_inTargetName,
                                                                                        GGS_string & ioArgument_ioAssemblerCode,
                                                                                        const GGS_primitiveAndServiceIRlist constinArgument_inServiceList,
                                                                                        const GGS_targetParameters constinArgument_inTargetParameters,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioAssemblerCode.plusAssignOperation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 502)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceHandler ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 502)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 500)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 500)) ;
  UpEnumerator_primitiveAndServiceIRlist enumerator_17284 (constinArgument_inServiceList) ;
  GGS_uint index_17269 (uint32_t (0)) ;
  while (enumerator_17284.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_17284.current (HERE).readProperty_mHasReturnValue ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_s_17353 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 509)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceEntryWithReturnValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 509)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 507)) ;
        var_s_17353 = var_s_17353.getter_replacing (GGS_string ("!ENTRY!"), enumerator_17284.current (HERE).readProperty_mCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 511)) ;
        var_s_17353 = var_s_17353.getter_replacing (GGS_string ("!IDX!"), index_17269.getter_string (SOURCE_FILE ("declaration-svc.galgas3", 512)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 512)) ;
        ioArgument_ioAssemblerCode.plusAssignOperation(var_s_17353, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 513)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_string var_s_17660 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 517)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceEntryNoReturnedValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 517)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 515)) ;
      var_s_17660 = var_s_17660.getter_replacing (GGS_string ("!ENTRY!"), enumerator_17284.current (HERE).readProperty_mCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 519)) ;
      var_s_17660 = var_s_17660.getter_replacing (GGS_string ("!IDX!"), index_17269.getter_string (SOURCE_FILE ("declaration-svc.galgas3", 520)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 520)) ;
      ioArgument_ioAssemblerCode.plusAssignOperation(var_s_17660, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 521)) ;
    }
    enumerator_17284.gotoNextObject () ;
    index_17269.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 505)) ;
  }
  ioArgument_ioAssemblerCode.plusAssignOperation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 526)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceDispatcherHeader ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 526)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 524)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 524)) ;
  UpEnumerator_primitiveAndServiceIRlist enumerator_18134 (constinArgument_inServiceList) ;
  GGS_uint index_18119 (uint32_t (0)) ;
  while (enumerator_18134.hasCurrentObject ()) {
    GGS_string var_s_18165 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 531)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceDispatcherEntry ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 531)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 529)) ;
    var_s_18165 = var_s_18165.getter_replacing (GGS_string ("!ENTRY!"), enumerator_18134.current (HERE).readProperty_mImplementationName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 533)) ;
    var_s_18165 = var_s_18165.getter_replacing (GGS_string ("!IDX!"), index_18119.getter_string (SOURCE_FILE ("declaration-svc.galgas3", 534)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 534)) ;
    ioArgument_ioAssemblerCode.plusAssignOperation(var_s_18165, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 535)) ;
    enumerator_18134.gotoNextObject () ;
    index_18119.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 528)) ;
  }
  ioArgument_ioAssemblerCode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 537)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@systemUserRoutineIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_systemUserRoutineIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                               GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_systemUserRoutineIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (temp_0.readProperty_mMangledImplementationName ()  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 558)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@systemUserRoutineIR svcDeclarationGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_systemUserRoutineIR::method_svcDeclarationGeneration (GGS_primitiveAndServiceIRlist & ioArgument_ioPrimitiveAndServiceList,
                                                                GGS_sectionIRlist & ioArgument_ioSectionList,
                                                                GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_systemUserRoutineIR temp_0 = this ;
  GGS_string var_userMangledName_19686 = temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas3", 568)) ;
  const GGS_systemUserRoutineIR temp_1 = this ;
  GGS_string var_implementationMangledName_19766 = temp_1.readProperty_mMangledImplementationName ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas3", 569)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_systemUserRoutineIR temp_3 = this ;
    test_2 = temp_3.readProperty_mIsSection ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioSectionList.addAssignOperation (var_userMangledName_19686, var_implementationMangledName_19766, GGS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 571)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    ioArgument_ioPrimitiveAndServiceList.addAssignOperation (var_userMangledName_19686, var_implementationMangledName_19766, GGS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 573)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@systemUserRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_systemUserRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                          const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                          GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("declare "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 584)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_systemUserRoutineIR temp_1 = this ;
    test_0 = temp_1.readProperty_mReturnTypeProxy ().getter_isNull (SOURCE_FILE ("declaration-svc.galgas3", 585)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("void"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 586)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_systemUserRoutineIR temp_2 = this ;
    ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_2.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 588)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 588)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 588)) ;
  }
  const GGS_systemUserRoutineIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas3", 590)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 590)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 590)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 590)) ;
  GGS_bool var_first_20624 = GGS_bool (true) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_systemUserRoutineIR temp_5 = this ;
    test_4 = temp_5.readProperty_mReceiverTypeProxy ().getter_isNull (SOURCE_FILE ("declaration-svc.galgas3", 592)).operator_not (SOURCE_FILE ("declaration-svc.galgas3", 592)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_systemUserRoutineIR temp_6 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_6.readProperty_mReceiverTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 593)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 593)).add_operation (GGS_string ("* %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 593)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 593)) ;
      var_first_20624 = GGS_bool (false) ;
    }
  }
  const GGS_systemUserRoutineIR temp_7 = this ;
  UpEnumerator_routineTypedSignature enumerator_20829 (temp_7.readProperty_mFormalArgumentList ()) ;
  while (enumerator_20829.hasCurrentObject ()) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = var_first_20624.boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        var_first_20624 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 600)) ;
    }
    switch (enumerator_20829.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_20829.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 604)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 604)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 604)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_20829.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 606)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 606)).add_operation (GGS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 606)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 606)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_20829.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 608)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 608)).add_operation (GGS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 608)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 608)) ;
      }
      break ;
    }
    enumerator_20829.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 611)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 611)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 611)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 611)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@freeCommentIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_freeCommentIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                     const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                     GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_freeCommentIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- ").add_operation (temp_0.readProperty_mComment (), inCompiler COMMA_SOURCE_FILE ("intermediate-free-comment.galgas3", 19)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-free-comment.galgas3", 19)), inCompiler  COMMA_SOURCE_FILE ("intermediate-free-comment.galgas3", 19)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@getUniversalArrayElementReferenceIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_getUniversalArrayElementReferenceIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                                           const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                           GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_getUniversalArrayElementReferenceIR temp_0 = this ;
  GGS_string var_llvmType_980 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas3", 29)) ;
  const GGS_getUniversalArrayElementReferenceIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (temp_1.readProperty_mElementLLVMName (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas3", 30)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas3", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas3", 30)) ;
  const GGS_getUniversalArrayElementReferenceIR temp_2 = this ;
  const GGS_getUniversalArrayElementReferenceIR temp_3 = this ;
  const GGS_getUniversalArrayElementReferenceIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_llvmType_980.add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas3", 31)).add_operation (var_llvmType_980, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas3", 31)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas3", 31)).add_operation (temp_2.readProperty_mLLVMName (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas3", 31)).add_operation (GGS_string (", i32 0, "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas3", 31)).add_operation (extensionGetter_llvmTypeName (temp_3.readProperty_mIndexIR (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas3", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas3", 31)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas3", 31)).add_operation (extensionGetter_llvmName (temp_4.readProperty_mIndexIR (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas3", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas3", 31)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas3", 31)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas3", 31)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@compiletimePrefixOperatorAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_compiletimePrefixOperatorAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_compiletimePrefixOperatorAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mPrefixOperatorLocation () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compiletimePrefixOperatorAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_compiletimePrefixOperatorAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_compiletimePrefixOperatorAST temp_0 = this ;
  const GGS_compiletimePrefixOperatorAST temp_1 = this ;
  const GGS_compiletimePrefixOperatorAST temp_2 = this ;
  GGS_lstring var_nodeName_3315 = GGS_lstring::init_21__21_ (extensionGetter_string (temp_0.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 100)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 100)).add_operation (temp_1.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 100)), temp_2.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_HERE) ;
  {
  const GGS_compiletimePrefixOperatorAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_3315, temp_3, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 101)) ;
  }
  {
  const GGS_compiletimePrefixOperatorAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3315, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 102)) ;
  }
  {
  const GGS_compiletimePrefixOperatorAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3315, temp_5.readProperty_mResultTypeName () COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 103)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 104)), var_nodeName_3315 COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 104)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@compiletimePrefixOperatorAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_compiletimePrefixOperatorAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_compiletimePrefixOperatorAST temp_0 = this ;
  const GGS_compiletimePrefixOperatorAST temp_1 = this ;
  result_outRepresentation = extensionGetter_string (temp_0.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 110)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 110)).add_operation (temp_1.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 110)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compiletimePrefixOperatorAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_compiletimePrefixOperatorAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                               GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                               GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                               GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                               GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                               GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                               GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                               GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_receiverTypeProxy_4894 ;
  {
  const GGS_compiletimePrefixOperatorAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mReceiverTypeName (), var_receiverTypeProxy_4894, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 128)) ;
  }
  GGS_omnibusType var_receiverType_4919 = extensionGetter_type (var_receiverTypeProxy_4894, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 129)) ;
  const GGS_compiletimePrefixOperatorAST temp_1 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_receiverType_4919.ptr (), temp_1.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 130)) ;
  GGS_unifiedTypeMapEntry var_resultTypeProxy_5091 ;
  {
  const GGS_compiletimePrefixOperatorAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_2.readProperty_mResultTypeName (), var_resultTypeProxy_5091, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 131)) ;
  }
  GGS_omnibusType var_resultType_5114 = extensionGetter_type (var_resultTypeProxy_5091, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 132)) ;
  const GGS_compiletimePrefixOperatorAST temp_3 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_resultType_5114.ptr (), temp_3.readProperty_mResultTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 133)) ;
  GGS_ctCheckMap var_ctCheckMap_5274 = GGS_ctCheckMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_compiletimePrefixOperatorAST temp_4 = this ;
  var_ctCheckMap_5274.setter_insertKey (temp_4.readProperty_mReceiverName (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 136)) ;
  }
  const GGS_compiletimePrefixOperatorAST temp_5 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_5.readProperty_mExpression ().ptr (), var_ctCheckMap_5274, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 137)) ;
  const GGS_compiletimePrefixOperatorAST temp_6 = this ;
  const GGS_compiletimePrefixOperatorAST temp_7 = this ;
  GGS_lstring var_key_5438 = function_prefixOperatorMapKey (var_receiverType_4919, extensionGetter_prefixOperator (temp_6.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 139)), temp_7.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 139)) ;
  const GGS_compiletimePrefixOperatorAST temp_8 = this ;
  const GGS_compiletimePrefixOperatorAST temp_9 = this ;
  const GGS_compiletimePrefixOperatorAST temp_10 = this ;
  GGS_compileTimePrefixOperatorUsage var_definition_5539 = GGS_compileTimePrefixOperatorUsage::init_21__21__21_ (temp_8.readProperty_mPrefixOperatorLocation (), temp_9.readProperty_mReceiverName (), temp_10.readProperty_mExpression (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_5438, var_receiverType_4919, var_resultType_5114, var_definition_5539, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 145)) ;
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    const GGS_compiletimePrefixOperatorAST temp_12 = this ;
    test_11 = GGS_bool (ComparisonKind::equal, temp_12.readProperty_mPrefixOperator ().objectCompare (GGS_compileTimePrefixOperatorEnumeration::class_func_minusOp (SOURCE_FILE ("prefix-operator-compile-time.galgas3", 147)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_compiletimePrefixOperatorAST temp_13 = this ;
      GGS_lstring var_minusNoOvf_5F_key_5841 = function_prefixOperatorMapKey (var_receiverType_4919, GGS_prefixOperator::class_func_minusNoOvf (SOURCE_FILE ("prefix-operator-compile-time.galgas3", 148)), temp_13.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 148)) ;
      {
      ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_minusNoOvf_5F_key_5841, var_receiverType_4919, var_resultType_5114, var_definition_5539, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 149)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimePrefixOperatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimePrefixOperatorUsage::method_generateCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                               const GGS_location /* constinArgument_inOperatorLocation */,
                                                               const GGS_omnibusType constinArgument_inResultType,
                                                               const GGS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                               const GGS_bool /* constinArgument_inSafeMode */,
                                                               GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                               GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                               GGS_objectIR & outArgument_outResultValue,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_receiverValue_7065 ;
  GGS_omnibusType joker_7049_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_extractLiteralInteger (joker_7049_1, var_receiverValue_7065, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 175)) ;
  GGS_ctMap var_varMap_7093 = GGS_ctMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_compileTimePrefixOperatorUsage temp_0 = this ;
  var_varMap_7093.setter_insertKey (temp_0.readProperty_mReceiverOperandName (), var_receiverValue_7065, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 177)) ;
  }
  GGS_bigint var_result_7249 ;
  const GGS_compileTimePrefixOperatorUsage temp_1 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_1.readProperty_mExpression ().ptr (), var_varMap_7093, var_result_7249, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 178)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_result_7249  COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 179)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ifInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ifInstructionAST temp_0 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_0.readProperty_mThenInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 89)) ;
  const GGS_ifInstructionAST temp_1 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_1.readProperty_mElseInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 90)) ;
  const GGS_ifInstructionAST temp_2 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_2.readProperty_mTestExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 91)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ifInstructionAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                const GGS_semanticContext constinArgument_inContext,
                                                                const GGS_mode constinArgument_inMode,
                                                                GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                GGS_allocaList & ioArgument_ioAllocaList,
                                                                GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_testResult_4502 ;
  const GGS_ifInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mTestExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 113)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_testResult_4502, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 110)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testResult_4502, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 123)) ;
  }
  GGS_implicitBooleanConversionResult var_booleanResult_4876 ;
  const GGS_ifInstructionAST temp_1 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_testResult_4502, temp_1.readProperty_mTestExpressionEndLocation (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, ioArgument_ioAllocaList, var_booleanResult_4876, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 128)) ;
  switch (var_booleanResult_4876.enumValue ()) {
  case GGS_implicitBooleanConversionResult::Enumeration::invalid:
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
    {
      GGS_bool extractedValue_4944__0 ;
      var_booleanResult_4876.getAssociatedValuesFor_compileTime (extractedValue_4944__0) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_ifInstructionAST temp_3 = this ;
        test_2 = temp_3.readProperty_mStaticIfExpression ().operator_not (SOURCE_FILE ("instruction-if.galgas3", 139)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_ifInstructionAST temp_4 = this ;
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticWarning (temp_4.readProperty_mTestExpressionEndLocation (), GGS_string ("'if' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 140)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 140)).add_operation (GGS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 140)), fixItArray5  COMMA_SOURCE_FILE ("instruction-if.galgas3", 140)) ;
        }
      }
    }
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
    {
      GGS_string extractedValue_5142__0 ;
      var_booleanResult_4876.getAssociatedValuesFor_llvmVariable (extractedValue_5142__0) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_ifInstructionAST temp_7 = this ;
        test_6 = temp_7.readProperty_mStaticIfExpression ().boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_ifInstructionAST temp_8 = this ;
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (temp_8.readProperty_mTestExpressionEndLocation (), GGS_string ("'if' expression is not static"), fixItArray9  COMMA_SOURCE_FILE ("instruction-if.galgas3", 144)) ;
        }
      }
    }
    break ;
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 147)) ;
  }
  GGS_instructionListIR temp_10 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 149)) ;
  GGS_instructionListIR var_thenInstructionGenerationList_5389 = temp_10 ;
  const GGS_ifInstructionAST temp_11 = this ;
  const GGS_ifInstructionAST temp_12 = this ;
  extensionMethod_analyzeBranchInstructionList (temp_11.readProperty_mThenInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_12.readProperty_mEndOfThenInstructionList (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_thenInstructionGenerationList_5389, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 150)) ;
  GGS_instructionListIR temp_13 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 163)) ;
  GGS_instructionListIR var_elseInstructionGenerationList_5894 = temp_13 ;
  const GGS_ifInstructionAST temp_14 = this ;
  const GGS_ifInstructionAST temp_15 = this ;
  extensionMethod_analyzeBranchInstructionList (temp_14.readProperty_mElseInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_15.readProperty_mEndOfElseInstructionList (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_elseInstructionGenerationList_5894, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 164)) ;
  {
  const GGS_ifInstructionAST temp_16 = this ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_16.readProperty_mEndOf_5F_if_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 176)) ;
  }
  const GGS_ifInstructionAST temp_17 = this ;
  ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_ifInstructionIR::init_21__21__21__21_ (extensionGetter_llvmName (var_booleanResult_4876, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 179)), temp_17.readProperty_mTestExpressionEndLocation (), var_thenInstructionGenerationList_5389, var_elseInstructionGenerationList_5894, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-if.galgas3", 178)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ifInstructionIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                       const GGS_generationContext constinArgument_inGenerationContext,
                                                       GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_labelTrue_7362 = GGS_string ("if.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-if.galgas3", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 205)).add_operation (GGS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 205)) ;
  GGS_string var_labelFalse_7428 = GGS_string ("if.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-if.galgas3", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 206)).add_operation (GGS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 206)) ;
  GGS_string var_labelEnd_7496 = GGS_string ("if.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-if.galgas3", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 207)).add_operation (GGS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 207)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas3", 208)) ;
  const GGS_ifInstructionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (temp_0.readProperty_mLLVMTestName (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 209)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 209)).add_operation (var_labelTrue_7362, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 209)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 209)).add_operation (var_labelFalse_7428, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 209)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas3", 209)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_labelTrue_7362.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas3", 211)) ;
  const GGS_ifInstructionIR temp_1 = this ;
  extensionMethod_instructionListLLVMCode (temp_1.readProperty_mThenInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 212)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_labelEnd_7496, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 213)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas3", 213)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_labelFalse_7428.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas3", 215)) ;
  const GGS_ifInstructionIR temp_2 = this ;
  extensionMethod_instructionListLLVMCode (temp_2.readProperty_mElseInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 216)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_labelEnd_7496, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 217)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas3", 217)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_labelEnd_7496.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas3", 219)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ifInstructionIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                           GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ifInstructionIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mThenInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 228)) ;
  const GGS_ifInstructionIR temp_1 = this ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mElseInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 229)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@fixedSizeArrayTypeDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_fixedSizeArrayTypeDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_fixedSizeArrayTypeDeclarationAST temp_0 = this ;
  const GGS_fixedSizeArrayTypeDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mFixedSizeArrayType (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 46)) ;
  }
  {
  const GGS_fixedSizeArrayTypeDeclarationAST temp_2 = this ;
  const GGS_fixedSizeArrayTypeDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mFixedSizeArrayType (), temp_3.readProperty_mElementTypeName () COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 47)) ;
  }
  const GGS_fixedSizeArrayTypeDeclarationAST temp_4 = this ;
  const GGS_fixedSizeArrayTypeDeclarationAST temp_5 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_4.readProperty_mSizeExpression ().ptr (), temp_5.readProperty_mFixedSizeArrayType (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 48)) ;
  const GGS_fixedSizeArrayTypeDeclarationAST temp_6 = this ;
  GGS_lstring var_rootNode_2031 = GGS_lstring::init_21__21_ (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 49)), temp_6.readProperty_mFixedSizeArrayType ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_fixedSizeArrayTypeDeclarationAST temp_7 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_7.readProperty_mFixedSizeArrayType (), var_rootNode_2031 COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 50)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@fixedSizeArrayTypeDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_fixedSizeArrayTypeDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_fixedSizeArrayTypeDeclarationAST temp_0 = this ;
  result_outRepresentation = GGS_string ("anonymous $").add_operation (temp_0.readProperty_mFixedSizeArrayType ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 56)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@fixedSizeArrayTypeDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_fixedSizeArrayTypeDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_fixedSizeArrayTypeDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mFixedSizeArrayType ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@fixedSizeArrayTypeDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_fixedSizeArrayTypeDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                                   GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                   GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                   GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                                   GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                   GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                   GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                   GGS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_elementType_3676 ;
  const GGS_fixedSizeArrayTypeDeclarationAST temp_0 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_0.readProperty_mElementTypeName (), var_elementType_3676, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 80)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_elementType_3676.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 81)).operator_not (SOURCE_FILE ("type-fixed-size-array.galgas3", 81)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_fixedSizeArrayTypeDeclarationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mElementTypeName ().readProperty_location (), GGS_string ("an array element should be copyable"), fixItArray3  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 82)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_elementType_3676.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 84)).operator_not (SOURCE_FILE ("type-fixed-size-array.galgas3", 84)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_fixedSizeArrayTypeDeclarationAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mElementTypeName ().readProperty_location (), GGS_string ("an array element should be instanciable"), fixItArray6  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 85)) ;
    }
  }
  GGS_objectIR var_sizeExpressionIR_4199 ;
  {
  const GGS_fixedSizeArrayTypeDeclarationAST temp_7 = this ;
  const GGS_fixedSizeArrayTypeDeclarationAST temp_8 = this ;
  routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_7.readProperty_mSizeExpression (), temp_8.readProperty_mSizeExpressionLocation (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas3", 93)), var_sizeExpressionIR_4199, inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 88)) ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_sizeExpressionIR_4199.getter_isLiteralInteger (SOURCE_FILE ("type-fixed-size-array.galgas3", 96)).operator_not (SOURCE_FILE ("type-fixed-size-array.galgas3", 96)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_fixedSizeArrayTypeDeclarationAST temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mSizeExpressionLocation (), GGS_string ("array size expression is a literal interger expression"), fixItArray11  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 97)) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    GGS_bigint var_arraySize_4434 ;
    GGS_omnibusType joker_4419_1 ; // Joker input parameter
    var_sizeExpressionIR_4199.method_extractLiteralInteger (joker_4419_1, var_arraySize_4434, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 99)) ;
    const GGS_fixedSizeArrayTypeDeclarationAST temp_12 = this ;
    GGS_lstring var_omnibusTypeDescriptionName_4521 = GGS_lstring::init_21__21_ (GGS_string ("[").add_operation (var_arraySize_4434.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas3", 101)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 101)).add_operation (GGS_string (" • "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 101)).add_operation (var_elementType_3676.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 101)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 101)), temp_12.readProperty_mFixedSizeArrayType ().readProperty_location (), inCompiler COMMA_HERE) ;
    const GGS_fixedSizeArrayTypeDeclarationAST temp_13 = this ;
    GGS_lstring var_llvmBaseTypeName_4667 = GGS_lstring::init_21__21_ (var_elementType_3676.readProperty_llvmBaseTypeName ().add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 102)).add_operation (var_arraySize_4434.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas3", 102)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 102)), temp_13.readProperty_mFixedSizeArrayType ().readProperty_location (), inCompiler COMMA_HERE) ;
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = ioArgument_ioContext.readProperty_mTypeMap ().getter_hasKey (var_omnibusTypeDescriptionName_4521.readProperty_string () COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 103)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GGS_omnibusType var_type_4920 ;
        extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), var_omnibusTypeDescriptionName_4521, var_type_4920, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 104)) ;
        {
        const GGS_fixedSizeArrayTypeDeclarationAST temp_15 = this ;
        extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_15.readProperty_mFixedSizeArrayType (), var_type_4920, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 105)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_14) {
      GGS_constantMap var_constantMap_5151 = GGS_constantMap::init (inCompiler COMMA_HERE) ;
      {
      const GGS_fixedSizeArrayTypeDeclarationAST temp_16 = this ;
      var_constantMap_5151.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("count"), temp_16.readProperty_mFixedSizeArrayType ().readProperty_location (), inCompiler COMMA_HERE), var_arraySize_4434, function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 112)).getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas3", 112)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 112)) ;
      }
      {
      ioArgument_ioContext.mProperty_mTypeConstantMap.setter_insertKey (var_omnibusTypeDescriptionName_4521, var_constantMap_5151, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 113)) ;
      }
      {
      extensionSetter_insertGetter (ioArgument_ioContext, var_omnibusTypeDescriptionName_4521, GGS_lstring::init_21__21_ (GGS_string ("count"), var_omnibusTypeDescriptionName_4521.readProperty_location (), inCompiler COMMA_HERE), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-fixed-size-array.galgas3", 121)), GGS_propertyGetterKind::class_func_constantProperty (GGS_objectIR::class_func_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 122)), var_arraySize_4434  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 122))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 122)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 118)) ;
      }
      GGS_constructorMap var_constructorMap_5822 = GGS_constructorMap::init (inCompiler COMMA_HERE) ;
      {
      var_constructorMap_5822.setter_insertKey (GGS_string ("(!repeated)").getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas3", 127)), GGS_constructorSignature::init (inCompiler COMMA_HERE), GGS_constructorValue::class_func_arrayValue (var_elementType_3676, var_arraySize_4434.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 127))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 127)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 127)) ;
      }
      GGS_string var_constructorName_6035 = GGS_string ("(") ;
      UpEnumerator_range enumerator_6088 (GGS_range (GGS_uint (uint32_t (0U)), var_arraySize_4434.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 130)).substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 130)))) ;
      while (enumerator_6088.hasCurrentObject ()) {
        var_constructorName_6035.plusAssignOperation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 131)) ;
        enumerator_6088.gotoNextObject () ;
      }
      var_constructorName_6035.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 133)) ;
      {
      var_constructorMap_5822.setter_insertKey (var_constructorName_6035.getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas3", 134)), GGS_constructorSignature::init (inCompiler COMMA_HERE), GGS_constructorValue::class_func_arrayValue (var_elementType_3676, var_arraySize_4434.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 134))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 134)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 134)) ;
      }
      {
      ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (var_omnibusTypeDescriptionName_4521, var_constructorMap_5822, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 135)) ;
      }
      GGS_omnibusTypeAttributes var_typeAttributes_6481 = GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-fixed-size-array.galgas3", 137)).operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-fixed-size-array.galgas3", 137)) COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 137)) ;
      GGS_omnibusType var_arrayType_6603 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_staticSubscript (var_elementType_3676, var_arraySize_4434  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 140)), var_typeAttributes_6481, var_omnibusTypeDescriptionName_4521.readProperty_string (), GGS_typeKind::class_func_staticArrayType (var_elementType_3676, var_arraySize_4434  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 143)), var_llvmBaseTypeName_4667.readProperty_string (), inCompiler COMMA_HERE) ;
      {
      const GGS_fixedSizeArrayTypeDeclarationAST temp_17 = this ;
      extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_17.readProperty_mFixedSizeArrayType (), var_arrayType_6603, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 146)) ;
      }
      {
      extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_omnibusTypeDescriptionName_4521, var_arrayType_6603, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 150)) ;
      }
      ioArgument_ioUserLLVMTypeDefinitionListIR.addAssignOperation (GGS_userLLVMStaticArrayTypeDefinitionIR::init_21__21__21_ (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_arrayType_6603.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 156)), var_elementType_3676, var_arraySize_4434, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 155)) ;
      GGS_string var_assignValueToElements_5F_functionName_7468 = function_assignValueToFixedSizeArrayElements_5F_functionName (var_arrayType_6603, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 161)) ;
      ioArgument_ioRoutineListIR.addAssignOperation (GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (var_assignValueToElements_5F_functionName_7468.getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas3", 163)), GGS_bool (false), GGS_bool (false), var_arrayType_6603, var_elementType_3676, var_arraySize_4434.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 168)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 162)) ;
      GGS_string var_assignmentFunctionLLVMName_7836 = function_assignmentOperatorFuncName (var_arrayType_6603, var_arrayType_6603, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 170)) ;
      ioArgument_ioRoutineListIR.addAssignOperation (GGS_staticArrayTypeAssignFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_assignmentFunctionLLVMName_7836.getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas3", 172)), GGS_bool (false), GGS_bool (false), var_arrayType_6603, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 171)) ;
      const GGS_fixedSizeArrayTypeDeclarationAST temp_18 = this ;
      GGS_lstring var_key_8151 = function_assignmentOperatorKey (var_arrayType_6603, temp_18.readProperty_mFixedSizeArrayType ().readProperty_location (), var_arrayType_6603, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 178)) ;
      {
      ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_8151, GGS_fixedSizeArrayAssignmentOperatorUsage::init_21__21__21_ (var_elementType_3676, var_arraySize_4434.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 179)), var_assignValueToElements_5F_functionName_7468, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 179)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Function 'assignValueToFixedSizeArrayElements_functionName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_assignValueToFixedSizeArrayElements_5F_functionName (const GGS_omnibusType & constinArgument_inFixedSizeArrayType,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("assign.value.to.fixed.size.array.").add_operation (constinArgument_inFixedSizeArrayType.readProperty_llvmBaseTypeName (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 187)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_assignValueToFixedSizeArrayElements_5F_functionName [2] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_assignValueToFixedSizeArrayElements_5F_functionName (Compiler * inCompiler,
                                                                                                 const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                                                 const GGS_location & /* inErrorLocation */
                                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_omnibusType operand0 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_assignValueToFixedSizeArrayElements_5F_functionName (operand0,
                                                                       inCompiler
                                                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_assignValueToFixedSizeArrayElements_5F_functionName ("assignValueToFixedSizeArrayElements_functionName",
                                                                                                     functionWithGenericHeader_assignValueToFixedSizeArrayElements_5F_functionName,
                                                                                                     & kTypeDescriptor_GALGAS_string,
                                                                                                     1,
                                                                                                     functionArgs_assignValueToFixedSizeArrayElements_5F_functionName) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@userLLVMStaticArrayTypeDefinitionIR generateLLVMType'
//--------------------------------------------------------------------------------------------------

void cPtr_userLLVMStaticArrayTypeDefinitionIR::method_generateLLVMType (GGS_string & ioArgument_ioLLVMcode,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_userLLVMStaticArrayTypeDefinitionIR temp_0 = this ;
  const GGS_userLLVMStaticArrayTypeDefinitionIR temp_1 = this ;
  const GGS_userLLVMStaticArrayTypeDefinitionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(temp_0.readProperty_mLLVMDefinedTypeName ().add_operation (GGS_string (" = type ["), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 202)).add_operation (temp_1.readProperty_mSize ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas3", 202)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 202)).add_operation (GGS_string (" x "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 202)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mElementType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 202)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 202)).add_operation (GGS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 202)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 202)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@fixedSizeArrayAssignmentOperatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_fixedSizeArrayAssignmentOperatorUsage::method_generateCode (GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GGS_instructionListIR & ioArgument_ioInstructionListIR,
                                                                      GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                      const GGS_omnibusType constinArgument_inTargetType,
                                                                      const GGS_string constinArgument_inTargetLLVMName,
                                                                      const GGS_objectIR constinArgument_inSourcePossibleReference,
                                                                      const GGS_location constinArgument_inErrorLocation,
                                                                      const GGS_bool /* constinArgument_inTargetIsInitialized */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_arrayTypeName_10394 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 227)) ;
  const GGS_fixedSizeArrayAssignmentOperatorUsage temp_0 = this ;
  GGS_string var_elementTypeName_10442 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mElementType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 228)) ;
  switch (constinArgument_inSourcePossibleReference.enumValue ()) {
  case GGS_objectIR::Enumeration::invalid:
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GGS_omnibusType extractedValue_10565__0 ;
      GGS_uint extractedValue_10565__1 ;
      GGS_objectIR extractedValue_10577_sourceValuePossibleReference_2 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_10565__0, extractedValue_10565__1, extractedValue_10577_sourceValuePossibleReference_2) ;
      GGS_objectIR var_sourceValue_10627 = extractedValue_10577_sourceValuePossibleReference_2 ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionListIR, ioArgument_ioTemporaries, var_sourceValue_10627, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 232)) ;
      }
      const GGS_fixedSizeArrayAssignmentOperatorUsage temp_1 = this ;
      GGS_string var_s_10760 = GGS_string ("call void @").add_operation (temp_1.readProperty_mAssignValueToElements_5F_functionName ().getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas3", 233)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 233)) ;
      var_s_10760.plusAssignOperation(GGS_string (" (").add_operation (var_arrayTypeName_10394, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 234)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 234)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 234)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 234)) ;
      var_s_10760.plusAssignOperation(GGS_string (", ").add_operation (var_elementTypeName_10442, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 235)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 235)).add_operation (extensionGetter_llvmName (var_sourceValue_10627, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 235)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 235)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 235)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 235)) ;
      {
      GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 236)) ;
      const GGS_fixedSizeArrayAssignmentOperatorUsage temp_3 = this ;
      temp_2.plusPlusAssignOperation (temp_3.readProperty_mAssignValueToElements_5F_functionName ()  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 236)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_10760, temp_2, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 236)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GGS_omnibusType extractedValue_11106__0 ;
      GGS_operandIRList extractedValue_11123_values_1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_11106__0, extractedValue_11123_values_1) ;
      GGS_uint var_uniqueValue_11141 = ioArgument_ioTemporaries.readProperty_mTemporaryIndex () ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 239)) ;
      UpEnumerator_operandIRList enumerator_11233 (extractedValue_11123_values_1) ;
      GGS_uint index_11228 (uint32_t (0)) ;
      while (enumerator_11233.hasCurrentObject ()) {
        GGS_objectIR var_sourceValue_11279 = enumerator_11233.current_mOperand (HERE) ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionListIR, ioArgument_ioTemporaries, var_sourceValue_11279, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 242)) ;
        }
        GGS_string var_ptr_11393 = GGS_string ("%ptr.").add_operation (var_uniqueValue_11141.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas3", 243)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 243)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 243)).add_operation (index_11228.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas3", 243)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 243)) ;
        GGS_string var_s_11443 = var_ptr_11393.add_operation (GGS_string (" = getelementptr "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 244)).add_operation (var_arrayTypeName_10394, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 244)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 244)).add_operation (var_arrayTypeName_10394, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 244)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 244)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 244)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 244)).add_operation (index_11228.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas3", 244)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 244)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_11443, GGS_stringset::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 245)) ;
        }
        var_s_11443 = GGS_string ("store ").add_operation (var_elementTypeName_10442, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 246)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 246)).add_operation (extensionGetter_llvmName (var_sourceValue_11279, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 246)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 246)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 246)).add_operation (var_elementTypeName_10442, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 246)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 246)).add_operation (var_ptr_11393, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 246)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_11443, GGS_stringset::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 247)) ;
        }
        enumerator_11233.gotoNextObject () ;
        index_11228.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 240)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GGS_omnibusType extractedValue_11841__0 ;
      GGS_operandIRList extractedValue_11858_values_1 ;
      GGS_uint extractedValue_11866__2 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_11841__0, extractedValue_11858_values_1, extractedValue_11866__2) ;
      GGS_uint var_uniqueValue_11879 = ioArgument_ioTemporaries.readProperty_mTemporaryIndex () ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 251)) ;
      UpEnumerator_operandIRList enumerator_11971 (extractedValue_11858_values_1) ;
      GGS_uint index_11966 (uint32_t (0)) ;
      while (enumerator_11971.hasCurrentObject ()) {
        GGS_string var_ptr_12007 = GGS_string ("%ptr.").add_operation (var_uniqueValue_11879.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas3", 253)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 253)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 253)).add_operation (index_11966.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas3", 253)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 253)) ;
        GGS_string var_s_12057 = var_ptr_12007.add_operation (GGS_string (" = getelementptr "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 254)).add_operation (var_arrayTypeName_10394, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 254)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 254)).add_operation (var_arrayTypeName_10394, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 254)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 254)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 254)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 254)).add_operation (index_11966.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas3", 254)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 254)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_12057, GGS_stringset::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 255)) ;
        }
        var_s_12057 = GGS_string ("store ").add_operation (var_elementTypeName_10442, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 256)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 256)).add_operation (extensionGetter_llvmName (enumerator_11971.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 256)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 256)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 256)).add_operation (var_elementTypeName_10442, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 256)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 256)).add_operation (var_ptr_12007, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 256)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_12057, GGS_stringset::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 257)) ;
        }
        enumerator_11971.gotoNextObject () ;
        index_11966.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 252)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    {
      GGS_omnibusType extractedValue_12456__0 ;
      GGS_uint extractedValue_12456__1 ;
      GGS_objectIR extractedValue_12456__2 ;
      GGS_uint extractedValue_12464_idx_3 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayRepeatedStaticValue (extractedValue_12456__0, extractedValue_12456__1, extractedValue_12456__2, extractedValue_12464_idx_3) ;
      GGS_string var_assignmentFunctionLLVMName_12479 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 260)) ;
      GGS_string var_s_12574 = GGS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_12479.getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas3", 261)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 261)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 261)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 262)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 262)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 262)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 262)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 262)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 263)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 263)).add_operation (GGS_string ("* @gconst."), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 263)).add_operation (extractedValue_12464_idx_3.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas3", 263)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 263)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 263)) ;
      {
      GGS_stringset temp_4 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 264)) ;
      temp_4.plusPlusAssignOperation (var_assignmentFunctionLLVMName_12479  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 264)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_12574, temp_4, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 264)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_reference:
    {
      GGS_omnibusType extractedValue_12899__0 ;
      GGS_string extractedValue_12899__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_reference (extractedValue_12899__0, extractedValue_12899__1) ;
      GGS_string var_assignmentFunctionLLVMName_12912 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 266)) ;
      GGS_string var_s_13007 = GGS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_12912.getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas3", 267)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 267)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 267)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 268)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 268)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 268)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 268)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 268)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 269)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 269)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 269)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 269)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 269)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 269)) ;
      {
      GGS_stringset temp_5 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 270)) ;
      temp_5.plusPlusAssignOperation (var_assignmentFunctionLLVMName_12912  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 270)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_13007, temp_5, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 270)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalInteger:
    {
      GGS_omnibusType extractedValue_13360__0 ;
      GGS_bigint extractedValue_13360__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_literalInteger (extractedValue_13360__0, extractedValue_13360__1) ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (literalInteger)"), fixItArray6  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 272)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalString:
    {
      GGS_uint extractedValue_13475__0 ;
      GGS_uint extractedValue_13475__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_literalString (extractedValue_13475__0, extractedValue_13475__1) ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (literalString)"), fixItArray7  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 274)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GGS_omnibusType extractedValue_13594__0 ;
      GGS_sortedOperandIRList extractedValue_13594__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmStructureValue (extractedValue_13594__0, extractedValue_13594__1) ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (llvmStructureValue)"), fixItArray8  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 276)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmNamedValue:
    {
      GGS_omnibusType extractedValue_13714__0 ;
      GGS_string extractedValue_13714__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmNamedValue (extractedValue_13714__0, extractedValue_13714__1) ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (llvmValue)"), fixItArray9  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 278)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_null:
    {
      GGS_omnibusType extractedValue_13814__0 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_null (extractedValue_13814__0) ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (null)"), fixItArray10  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 280)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_void:
    {
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (void)"), fixItArray11  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 282)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_zero:
    {
      GGS_omnibusType extractedValue_13999__0 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_zero (extractedValue_13999__0) ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (zero)"), fixItArray12  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 284)) ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@assignRepeatedValueToFixedSizeArrayElementsFunctionIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                                            const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                                            GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR temp_0 = this ;
  GGS_string var_arrayTypeName_14732 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mFixedSizeArrayType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 303)) ;
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR temp_1 = this ;
  GGS_string var_elementTypeName_14792 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_1.readProperty_mElementType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 304)) ;
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_2.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas3", 305)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 305)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 305)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (var_arrayTypeName_14732, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 306)).add_operation (GGS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 306)).add_operation (var_elementTypeName_14792, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 306)).add_operation (GGS_string (" %inRepeatedValue) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 306)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 306)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %idx = alloca i32\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 307)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store i32 0, i32* %idx\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 308)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 309)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 310)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %idxValue = load i32, i32* %idx\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 311)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %ptr = getelementptr ").add_operation (var_arrayTypeName_14732, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 312)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 312)).add_operation (var_arrayTypeName_14732, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 312)).add_operation (GGS_string ("* %inTarget, i32 0, i32 %idxValue\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 312)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 312)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_elementTypeName_14792, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 313)).add_operation (GGS_string (" %inRepeatedValue, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 313)).add_operation (var_elementTypeName_14792, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 313)).add_operation (GGS_string ("* %ptr\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 313)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 313)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %nextIdxValue = add i32 %idxValue, 1\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 314)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store i32 %nextIdxValue, i32* %idx\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 315)) ;
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %continue = icmp ult i32 %nextIdxValue, ").add_operation (temp_3.readProperty_mArraySize ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas3", 316)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 316)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 316)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 316)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %continue, label %loop, label %exit\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 317)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("exit:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 318)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 319)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 320)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@staticArrayTypeAssignFunctionIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_staticArrayTypeAssignFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                      const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_staticArrayTypeAssignFunctionIR temp_0 = this ;
  GGS_string var_llvmTypeName_16353 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mFixedSizeArrayType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 336)) ;
  const GGS_staticArrayTypeAssignFunctionIR temp_1 = this ;
  GGS_arcAssignmentList var_arcAssignmentList_16412 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_1.readProperty_mFixedSizeArrayType ().ptr (), GGS_uintlist::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 337)) ;
  const GGS_staticArrayTypeAssignFunctionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_2.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas3", 338)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 338)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 338)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (var_llvmTypeName_16353, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 339)).add_operation (GGS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 339)).add_operation (var_llvmTypeName_16353, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 339)).add_operation (GGS_string ("* %inSource) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 339)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 339)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Handle ARC properties\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 340)) ;
  UpEnumerator_arcAssignmentList enumerator_16759 (var_arcAssignmentList_16412) ;
  while (enumerator_16759.hasCurrentObject ()) {
    GGS_string var_propertyTypeLLVMName_16802 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_16759.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 342)) ;
    GGS_string var_llvmVarName_16859 = GGS_string ("%arc.retain.").add_operation (enumerator_16759.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas3", 343)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 343)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas3", 343)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 343)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 344)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmVarName_16859, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 345)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 345)).add_operation (var_llvmTypeName_16353, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 345)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 345)).add_operation (var_llvmTypeName_16353, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 345)).add_operation (GGS_string ("* %inSource, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 345)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 345)) ;
    UpEnumerator_uintlist enumerator_17135 (enumerator_16759.current_mPropertyIndexPath (HERE)) ;
    while (enumerator_17135.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 ").add_operation (enumerator_17135.current_mValue (HERE).getter_string (SOURCE_FILE ("type-fixed-size-array.galgas3", 347)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 347)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 347)) ;
      enumerator_17135.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ; ").add_operation (enumerator_16759.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 349)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 349)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 349)) ;
    GGS_string var_llvmLoadedVarName_17253 = var_llvmVarName_16859.add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 350)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmLoadedVarName_17253, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 351)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 351)).add_operation (var_propertyTypeLLVMName_16802, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 351)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 351)).add_operation (var_propertyTypeLLVMName_16802, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 351)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 351)).add_operation (var_llvmVarName_16859, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 351)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 351)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 351)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_16802, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 352)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 352)).add_operation (var_llvmLoadedVarName_17253, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 352)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 352)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 352)) ;
    enumerator_16759.gotoNextObject () ;
  }
  UpEnumerator_arcAssignmentList enumerator_17576 (var_arcAssignmentList_16412) ;
  while (enumerator_17576.hasCurrentObject ()) {
    GGS_string var_llvmVarName_17619 = GGS_string ("%arc.release.").add_operation (enumerator_17576.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas3", 355)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 355)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas3", 355)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 355)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 356)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmVarName_17619, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 357)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 357)).add_operation (var_llvmTypeName_16353, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 357)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 357)).add_operation (var_llvmTypeName_16353, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 357)).add_operation (GGS_string ("* %inTarget, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 357)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 357)) ;
    UpEnumerator_uintlist enumerator_17896 (enumerator_17576.current_mPropertyIndexPath (HERE)) ;
    while (enumerator_17896.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 ").add_operation (enumerator_17896.current_mValue (HERE).getter_string (SOURCE_FILE ("type-fixed-size-array.galgas3", 359)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 359)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 359)) ;
      enumerator_17896.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ; ").add_operation (enumerator_17576.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 361)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 361)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 361)) ;
    GGS_string var_propertyTypeLLVMName_18014 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_17576.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 362)) ;
    GGS_string var_llvmLoadedVarName_18071 = var_llvmVarName_17619.add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 363)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmLoadedVarName_18071, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 364)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 364)).add_operation (var_propertyTypeLLVMName_18014, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 364)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 364)).add_operation (var_propertyTypeLLVMName_18014, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 364)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 364)).add_operation (var_llvmVarName_17619, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 364)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 364)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 364)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_18014, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 365)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 365)).add_operation (var_llvmLoadedVarName_18071, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 365)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 365)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 365)) ;
    enumerator_17576.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Compute type size\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 367)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_llvmTypeName_16353, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 368)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 368)).add_operation (var_llvmTypeName_16353, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 368)).add_operation (GGS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 368)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 368)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %byteCount = ptrtoint ").add_operation (var_llvmTypeName_16353, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 369)).add_operation (GGS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 369)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 369)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %useLoadStore = icmp ule i32 %byteCount, 12\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 370)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %useLoadStore, label %loadStore, label %copyBytesOrCopyWords\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 371)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 372)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("loadStore:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 373)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %v = load ").add_operation (var_llvmTypeName_16353, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 374)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 374)).add_operation (var_llvmTypeName_16353, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 374)).add_operation (GGS_string ("* %inSource\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 374)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 374)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_llvmTypeName_16353, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 375)).add_operation (GGS_string (" %v, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 375)).add_operation (var_llvmTypeName_16353, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 375)).add_operation (GGS_string ("* %inTarget\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 375)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 375)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 376)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copyBytesOrCopyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 377)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %byteCountAnd3 = and i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 378)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %byteCountIsMutipleOf4 = icmp eq i32 %byteCountAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 379)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %byteCountIsMutipleOf4, label %testTarget, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 380)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("testTarget:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 381)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %targetAsUnsigned = ptrtoint ").add_operation (var_llvmTypeName_16353, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 382)).add_operation (GGS_string ("* %inTarget to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 382)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 382)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %targetAsUnsignedAnd3 = and i32 %targetAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 383)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %targetAsUnsignedIsMutipleOf4 = icmp eq i32%targetAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 384)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %testSource, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 385)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("testSource:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 386)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %sourceAsUnsigned = ptrtoint ").add_operation (var_llvmTypeName_16353, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 387)).add_operation (GGS_string ("* %inSource to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 387)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 387)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %sourceAsUnsignedAnd3 = and i32 %sourceAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 388)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %sourceAsUnsignedIsMutipleOf4 = icmp eq i32 %sourceAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 389)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %copyWords, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 390)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 391)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %target32 = bitcast ").add_operation (var_llvmTypeName_16353, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 392)).add_operation (GGS_string ("* %inTarget to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 392)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 392)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %source32 = bitcast ").add_operation (var_llvmTypeName_16353, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 393)).add_operation (GGS_string ("* %inSource to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 393)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 393)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %wordCount = udiv i32 %byteCount, 4\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 394)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %copyWords.loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 395)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copyWords.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 396)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @copy.word.array (i32* %target32, i32* %source32, i32 %wordCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 397)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 398)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copyBytes:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 399)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %target8 = bitcast ").add_operation (var_llvmTypeName_16353, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 400)).add_operation (GGS_string ("* %inTarget to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 400)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 400)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %source8 = bitcast ").add_operation (var_llvmTypeName_16353, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 401)).add_operation (GGS_string ("* %inSource to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 401)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 401)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @copy.byte.array (i8* %target8, i8* %source8, i32 %byteCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 402)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 403)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copy.end:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 404)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 405)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 406)) ;
}

